/* Ghidra decompilation of jw36.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  860 bytes, 1 callers */

uint __cdecl16far
FUN_3ab8_0000(uint **param_1,int param_2,undefined2 param_3,undefined2 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 uVar4;
  undefined2 uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_52;
  int local_4c;
  uint local_4a;
  uint local_48;
  uint *local_46;
  uint local_44;
  int local_42;
  undefined1 local_40 [4];
  undefined1 local_3c [2];
  undefined2 local_3a;
  int local_38 [18];
  undefined2 uStack_14;
  undefined2 uStack_12;
  uint *local_10;
  uint **local_e;
  int *piStack_c;
  int *local_a;
  uint ***local_8;
  
  FUN_21f2_0ebc();
  local_4c = 0;
  local_4a = 0;
  if (0x4e1e < (int)param_1) {
    param_1 = param_1 + -5000;
  }
  local_8 = (uint ***)&stack0xfffa;
  local_a = (int *)0x22b2;
  uVar4 = 0x22b2;
  piStack_c = (int *)0xabb5;
  func_0x000257c0();
  *(undefined2 *)0xb5b6 = unaff_SI;
  *(undefined2 *)0xb5b8 = unaff_DI;
  while( true ) {
    local_8 = (uint ***)0x7c;
    local_a = (int *)0x7d;
    uVar5 = 0x22b2;
    local_e = (uint **)0xabf9;
    piStack_c = (int *)uVar4;
    iVar2 = func_0x00025a9a();
    if (iVar2 == 0) break;
    local_a = (int *)param_2;
    piStack_c = (int *)0x22b2;
    uVar4 = 0x2a75;
    local_e = (uint **)0xabda;
    local_8 = (uint ***)(iVar2 - param_2);
    iVar1 = func_0x0002aa38();
    if (iVar1 == 0) {
      local_4c = local_4c + 1;
      local_38[local_4c] = iVar2 - param_2;
    }
  }
  local_4c = local_4c + -1;
  if (local_4c < 0) {
    local_4c = 0;
  }
  if (local_a != (int *)0x0) {
    local_8 = (uint ***)local_4c;
    local_a = local_38;
    piStack_c = (int *)param_2;
    local_e = param_1;
    local_10 = (uint *)0x22b2;
    uVar5 = 0x1bb4;
    uStack_12 = 0xac22;
    func_0x0001e740();
  }
  do {
    local_8 = &local_e;
    uVar4 = 0x22b2;
    piStack_c = (int *)0xac2e;
    local_a = (int *)uVar5;
    func_0x000257c0();
    *(int *)0xa48 = local_4c;
    if (*(char *)0xc2e != '\0') {
      *(int *)0xa48 = local_4c + -1;
    }
    if ((param_1 == (uint **)0x0) || (param_1 == (uint **)0x2710)) {
      *(undefined2 *)0xa4a = 0;
    }
    else {
      *(undefined2 *)0xa4a = 1;
    }
    local_3a = 0;
    if ((3 < *(byte *)0xb782) && (*(char *)0xa2b != '\0')) {
      local_3a = *(byte *)0xa2b & 0xf;
      local_52 = -((char)local_3a - *(char *)0xa2b);
      if ((*(byte *)0xa2b & 0xf) == 0) {
        local_3a = (uint)(local_52 >> 4);
        local_52 = 0;
      }
      local_3a = local_3a + 0x30;
      if ((local_3a < 0x31) || (0x39 < local_3a)) {
        local_3a = 0;
      }
      *(byte *)0xa2b = local_52;
      if (local_3a != 0) {
        *param_5 = 0;
        *(undefined1 *)0x15a = 2;
        if (*(int *)0xc22 != 0) {
          for (local_48 = 1; (int)local_48 <= *(int *)0xc22; local_48 = local_48 + 1) {
            local_8 = (uint ***)(local_48 + 1);
            local_a = (int *)0x10;
            local_e = (uint **)0xacde;
            piStack_c = (int *)uVar4;
            FUN_1000_0599();
            local_8 = (uint ***)0xdef;
            uVar4 = 0xdef;
            local_a = (int *)0xace5;
            func_0x00010526();
          }
        }
      }
    }
    local_8 = (uint ***)0xb5b6;
    puVar6 = (uint *)0x22b2;
    piStack_c = (int *)0xacf9;
    local_a = (int *)uVar4;
    func_0x000257c0();
    if (local_3a == 0) {
      local_8 = (uint ***)param_5;
      local_a = (int *)param_4;
      piStack_c = (int *)param_3;
      local_e = &local_46;
      local_10 = &local_44;
      uStack_12 = 0x22b2;
      puVar6 = (uint *)0x3bf;
      uStack_14 = 0xad16;
      local_3a = func_0x00006608();
    }
    *(undefined2 *)0xa48 = 0;
    *(undefined2 *)0xa4a = 0;
    if (*(int *)0x158 != 0) {
      return 0xfba9;
    }
    if (local_3a == 100) {
      return 0;
    }
    if ((0x30 < (int)local_3a) && ((int)local_3a < 0x3a)) {
      local_4a = local_3a - 0x30;
    }
    if (local_3a == 0x30) {
      local_4a = 10;
    }
    if ((*param_5 != 0) && ((int)local_46 < *(int *)0xa5e)) {
      local_4a = 0;
      for (local_48 = 1; (int)local_48 <= local_4c; local_48 = local_48 + 1) {
        uVar3 = (int)local_44 >> 0xf;
        iVar2 = ((int)((local_44 ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3;
        if ((local_38[local_48] + 7 < iVar2) && (iVar2 < local_38[local_48 + 1] + 7)) {
          local_4a = local_48;
        }
      }
      if ((*(int *)0xc2c != 0) && (0x244 < (int)local_44)) {
        local_3a = 0x7f;
      }
    }
    *param_5 = 0;
    if ((0 < (int)local_4a) && ((int)local_4a <= local_4c)) {
      return local_4a;
    }
    if (((local_3a == 0xffff) && (param_1 != (uint **)0x0)) && (param_1 != (uint **)0x2710)) {
      return 0xffff;
    }
    if ((param_1 == (uint **)0x270f) || (param_1 == (uint **)0x2710)) {
      if ((0x61ff < (int)local_3a) && ((int)local_3a < 0x6b01)) {
        return local_3a;
      }
      if (local_3a == 99) {
        return 99;
      }
    }
    if (local_3a == 0xd) {
      return 0xd;
    }
    if ((*(int *)0xc26 != 0) || (*(int *)0xc28 != 0)) {
      if (local_3a == 0x3600) {
        return 0x3600;
      }
      if (local_3a == 0x3700) {
        return 0x3700;
      }
      if ((0x39ff < (int)local_3a) && ((int)local_3a < 0x3f01)) {
        return local_3a;
      }
      if (*(int *)0xc26 == 0x20) {
        if (local_3a == 0x20) {
          return 0x20;
        }
        if (local_3a._1_1_ == '>') {
          return local_3a;
        }
      }
    }
    if ((*(int *)0xc2c != 0) &&
       ((local_3a == 0x7f || ((*(char *)0xefb != '|' && (*(byte *)0xefb == local_3a)))))) {
      return 0x14;
    }
    puVar7 = puVar6;
    if (local_3a == 99) {
      local_8 = (uint ***)local_4c;
      local_a = local_38;
      piStack_c = (int *)param_2;
      local_e = param_1;
      puVar7 = (uint *)0x1bb4;
      uStack_12 = 0xaea9;
      local_10 = puVar6;
      func_0x0001e740();
    }
    local_8 = (uint ***)local_40;
    local_a = (int *)local_3c;
    piStack_c = &local_42;
    local_e = &local_10;
    uVar5 = 0x885;
    uStack_12 = 0xaec1;
    local_10 = puVar7;
    func_0x0000dcbd();
  } while ((local_10 == (uint *)0x0) || (local_42 == 0));
  return 99;
}



/* 3ab8:035c  FUN_3ab8_035c  62 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_035c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  FUN_21f2_0ebc();
  local_4 = &local_4;
  iVar1 = FUN_21f2_581c(*(undefined2 *)0xd12,0xbf48,*(undefined2 *)0xbc78,200);
  if ((iVar1 == 0) && (199 < (int)local_4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* 3ab8:039a  FUN_3ab8_039a  62 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_039a(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  FUN_21f2_0ebc();
  local_4 = &local_4;
  iVar1 = FUN_21f2_581c(*(undefined2 *)0xd12,param_1,*(undefined2 *)0xbc78,param_2);
  if ((iVar1 == 0) && (param_2 <= (int)local_4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* 3ab8:03d8  FUN_3ab8_03d8  921 bytes, 1 callers */

void __cdecl16far FUN_3ab8_03d8(void)

{
  undefined2 *puVar1;
  undefined2 **ppuVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 **ppuVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar9;
  undefined2 local_5a [12];
  undefined2 *local_42 [8];
  undefined2 *local_22;
  undefined2 *local_1e [4];
  undefined2 uStack_e;
  undefined2 uStack_c;
  int local_8;
  uint uVar10;
  int iVar11;
  
  uVar8 = 0x22b2;
  FUN_21f2_0ebc();
  iVar11 = 0;
  for (uVar10 = 1;
      (iVar11 <= *(int *)0x14a && ((iVar11 < *(int *)0x14a || (uVar10 <= *(uint *)0x148))));
      uVar10 = uVar10 + 1) {
    uStack_e = 0xaf9a;
    uStack_c = uVar8;
    puVar9 = (undefined2 *)func_0x0000013f();
    puVar7 = (undefined2 *)puVar9;
    ppuVar5 = local_1e;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      ppuVar2 = ppuVar5;
      ppuVar5 = (undefined2 **)((int)ppuVar5 + 2);
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *(undefined2 *)ppuVar2 = *puVar1;
    }
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    uStack_c = 0x22b2;
    uVar8 = 0;
    uStack_e = 0xb03b;
    local_22 = (undefined2 *)func_0x0000013f();
    puVar7 = (undefined2 *)local_22;
    ppuVar5 = local_1e;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar9 = puVar7;
      puVar7 = puVar7 + 1;
      ppuVar2 = ppuVar5;
      ppuVar5 = (undefined2 **)((int)ppuVar5 + 2);
      *puVar9 = *(undefined2 *)ppuVar2;
    }
    iVar11 = iVar11 + (uint)(0xfffe < uVar10);
  }
  iVar11 = 0;
  for (uVar10 = 1;
      (iVar11 <= *(int *)0x14e && ((iVar11 < *(int *)0x14e || (uVar10 <= *(uint *)0x14c))));
      uVar10 = uVar10 + 1) {
    uStack_e = 0xb086;
    uStack_c = uVar8;
    puVar9 = (undefined2 *)func_0x00000271();
    puVar7 = (undefined2 *)puVar9;
    ppuVar5 = local_42;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      ppuVar2 = ppuVar5;
      ppuVar5 = (undefined2 **)((int)ppuVar5 + 2);
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *(undefined2 *)ppuVar2 = *puVar1;
    }
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0xb0e9;
    func_0x00029b6d();
    func_0x00029983();
    uStack_c = 0x22b2;
    uVar8 = 0;
    uStack_e = 0xb0fa;
    local_22 = (undefined2 *)func_0x00000271();
    puVar7 = (undefined2 *)local_22;
    ppuVar5 = local_42;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar9 = puVar7;
      puVar7 = puVar7 + 1;
      ppuVar2 = ppuVar5;
      ppuVar5 = (undefined2 **)((int)ppuVar5 + 2);
      *puVar9 = *(undefined2 *)ppuVar2;
    }
    iVar11 = iVar11 + (uint)(0xfffe < uVar10);
  }
  local_8 = 1;
  while (local_8 <= *(int *)0x150) {
    uStack_c = 0xb120;
    puVar9 = (undefined2 *)func_0x00000398();
    puVar6 = (undefined2 *)puVar9;
    puVar7 = local_5a;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar1;
    }
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029983();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x0002996b();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x0002996b();
    func_0x000297e6();
    func_0x00029b6d();
    FUN_28b3_117c();
    func_0x00029983();
    uStack_c = 0xb1e3;
    local_1e[0] = (undefined2 *)func_0x00000398();
    puVar6 = (undefined2 *)local_1e[0];
    puVar7 = local_5a;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar9;
    }
    local_8 = 0x22b3;
  }
  local_8 = 1;
  while (local_8 <= *(int *)0x152) {
    uStack_c = 0xb212;
    puVar9 = (undefined2 *)func_0x000003ef();
    puVar6 = (undefined2 *)puVar9;
    puVar7 = local_5a;
    for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar1;
    }
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    uStack_c = 0xb26b;
    local_42[0] = (undefined2 *)func_0x000003ef();
    puVar6 = (undefined2 *)local_42[0];
    puVar7 = local_5a;
    for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar9;
    }
    local_8 = 0x22b3;
  }
  local_8 = 1;
  while (local_8 <= *(int *)0x154) {
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029bb5();
    func_0x00029983();
    local_8 = 0x22b3;
  }
  return;
}



/* 3ab8:0771  FUN_3ab8_0771  115 bytes, 1 callers */

int __cdecl16far FUN_3ab8_0771(undefined2 param_1,undefined2 param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_c;
  undefined2 local_a;
  uint local_8;
  uint local_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  local_6 = 0xb2fc;
  FUN_21f2_0ebc();
  local_a = 0;
  *param_4 = 0;
  uVar2 = 0x22b2;
  while( true ) {
    if (param_3 <= local_a) {
      return 0;
    }
    local_4 = &local_c;
    local_a = param_3 - local_a;
    if (0x4000 < local_a) {
      local_a = 0x4000;
    }
    local_c = *(int *)0xd12;
    local_8 = local_a;
    local_6 = local_a;
    iVar1 = func_0x000126a6(uVar2);
    if (iVar1 != 0) break;
    *param_4 = *param_4 + local_c;
    local_a = CONCAT11(local_a._1_1_ + '@',(undefined1)local_a);
    uVar2 = 0x11f2;
  }
  return iVar1;
}



/* 3ab8:07e4  FUN_3ab8_07e4  342 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003b416) */

undefined2 __cdecl16far
FUN_3ab8_07e4(uint param_1,uint param_2,uint param_3,undefined2 param_4,int param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  bool bVar5;
  long lVar6;
  uint local_8;
  uint local_6;
  uint *local_4;
  
  local_4 = (uint *)0x3ab8;
  local_6 = 0xb36f;
  FUN_21f2_0ebc();
  if (param_5 == 1) {
    local_4 = (uint *)0x22b2;
    local_6 = 0xb382;
    uVar1 = func_0x00027a10();
    *(undefined2 *)0xbee2 = uVar1;
    param_1 = param_1 & 0x3fff | *(uint *)0xbee4;
    param_2 = *(uint *)0xbee6;
  }
  if (param_5 == 2) {
    local_4 = (uint *)0x22b2;
    local_6 = 45999;
    uVar1 = func_0x00027a10();
    *(undefined2 *)0xc728 = uVar1;
    param_1 = param_1 & 0x3fff | *(uint *)0xc72a;
    param_2 = *(uint *)0xc72c;
  }
  iVar4 = 0x22b2;
  while( true ) {
    iVar3 = 0x22b2;
    local_6 = 0xb408;
    local_4 = (uint *)iVar4;
    lVar6 = func_0x00027a10();
    if (lVar6 <= (int)local_4) {
      if (param_5 == 1) {
        local_4 = (uint *)0x22b2;
        iVar3 = 0;
        local_6 = 0xb464;
        func_0x000000cd();
      }
      if (param_5 == 2) {
        local_6 = 0xb46f;
        local_4 = (uint *)iVar3;
        func_0x00000106();
      }
      *(undefined2 *)0xc728 = 0xffff;
      *(undefined2 *)0xbee2 = 0xffff;
      local_4 = &local_8;
      local_6 = param_3 & 0x3fff;
      local_8 = param_2;
      iVar4 = FUN_3ab8_0771(param_1);
      if (iVar4 == 0) {
        if (((int)local_8 >> 0xf < 1) &&
           (((int)local_8 < 0 && (int)local_8 >> 0xf < 1 || (local_8 < (param_3 & 0x3fff))))) {
          uVar1 = 0x18;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0x17;
      }
      return uVar1;
    }
    if (param_5 == 1) {
      local_4 = (uint *)0x22b2;
      iVar3 = 0;
      local_6 = 0xb425;
      func_0x000000cd();
      *(int *)0xbee2 = *(int *)0xbee2 + 1;
    }
    iVar4 = iVar3;
    if (param_5 == 2) {
      iVar4 = 0;
      local_6 = 0xb434;
      local_4 = (uint *)iVar3;
      func_0x00000106();
      *(int *)0xc728 = *(int *)0xc728 + 1;
    }
    local_4 = &local_8;
    local_6 = 0x4000;
    local_8 = param_2;
    iVar3 = FUN_3ab8_0771(param_1);
    if (iVar3 != 0) break;
    if ((int)local_8 < 0x4000) {
      return 0x16;
    }
    uVar2 = -(uint)(param_5 == 0) & 0x4000;
    bVar5 = CARRY2(param_1,uVar2);
    param_1 = param_1 + uVar2;
    param_2 = param_2 + (uint)bVar5 * 0x1000;
  }
  return 0x15;
}



/* 3ab8:093a  FUN_3ab8_093a  365 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_093a(void)

{
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar1;
  
  FUN_21f2_0ebc();
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1168(0x22b2);
  func_0x00029983(0x22b2);
  uVar1 = *(int *)0xa5c == 2;
  FUN_28b3_0d8b(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)in_CF && !(bool)uVar1) {
    FUN_28b3_0d8b(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)in_CF) {
      func_0x000297e6(0x22b2);
      FUN_28b3_0d8b(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)in_CF) {
        func_0x000297e6(0x22b2);
        uVar1 = *(int *)0xa60 == -2;
        FUN_28b3_0d8b(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)in_CF && !(bool)uVar1) {
          func_0x000297e6(0x22b2,*(undefined2 *)0xaaf4,*(undefined2 *)0xaaf6,*(undefined2 *)0xaaf8,
                          *(undefined2 *)0xaafa,2,3,*(undefined2 *)0xaaec,*(undefined2 *)0xaaee,
                          *(undefined2 *)0xaaf0,*(undefined2 *)0xaaf2,*(undefined2 *)0xaae4,
                          *(undefined2 *)0xaae6,*(undefined2 *)0xaae8,*(undefined2 *)0xaaea,
                          *(undefined2 *)0xaae4,*(undefined2 *)0xaae6,*(undefined2 *)0xaae8,
                          *(undefined2 *)0xaaea,3,0);
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2);
          func_0x0000fd9f(0x22b2);
        }
      }
    }
  }
  return 0;
}



/* 3ab8:0aa7  FUN_3ab8_0aa7  251 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0aa7(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 local_6;
  int iVar3;
  
  FUN_21f2_0ebc();
  iVar3 = 0;
  uVar1 = *(undefined2 *)0xb492;
  do {
    *(undefined1 *)(iVar3 * 8 + *(int *)0xb490) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  iVar3 = 0;
  uVar1 = *(undefined2 *)0xc286;
  do {
    *(undefined1 *)(iVar3 * 0x10 + *(int *)0xc284) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  do {
    uVar1 = *(undefined2 *)0xb28;
    *(undefined2 *)(iVar3 * 4 + 0xb2a) = *(undefined2 *)0xb26;
    *(undefined2 *)(iVar3 * 4 + 0xb2c) = uVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  *(undefined2 *)0x14a = 0;
  *(undefined2 *)0x148 = 0;
  *(undefined2 *)0x14e = 0;
  *(undefined2 *)0x14c = 0;
  uVar1 = *(undefined2 *)0xbefc;
  *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
  *(undefined2 *)0xc0ae = uVar1;
  *(undefined2 *)0x4c = 0;
  *(undefined2 *)0x154 = 0;
  *(undefined2 *)0x152 = 0;
  *(undefined2 *)0x150 = 0;
  *(undefined2 *)0x11e = 0;
  *(undefined2 *)0xb310 = 0;
  for (iVar3 = 0; iVar3 < 0x10; iVar3 = iVar3 + 1) {
    *(undefined1 *)(iVar3 + 0xb7c) = 1;
    *(undefined1 *)(iVar3 + 0xb6c) = 1;
    *(char *)(iVar3 + 0xb8e) = (char)iVar3 << 4;
    for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
      iVar2 = iVar3 * 0x10 + local_6;
      *(undefined1 *)(iVar2 + -0x4c78) = 1;
      *(undefined1 *)(iVar2 + -0x3e90) = 1;
    }
  }
  return 0;
}



/* 3ab8:0ba2  FUN_3ab8_0ba2  1519 bytes, 2 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_3ab8_0ba2(undefined2 ******param_1,undefined2 *param_2,int *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 ******unaff_SI;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *******unaff_DI;
  undefined2 unaff_SS;
  undefined2 *******unaff_DS;
  undefined2 *******pppppppuVar8;
  undefined2 *puVar9;
  undefined2 *****local_52 [3];
  undefined2 *****local_4c;
  undefined2 ******local_4a;
  undefined4 local_48;
  undefined2 ******local_44;
  int local_42;
  undefined2 local_40;
  undefined2 *******local_3e;
  undefined2 *******local_3c;
  undefined2 *******local_3a;
  undefined2 ******local_38;
  undefined2 local_36 [8];
  int local_26;
  undefined2 local_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined1 *puStack_18;
  undefined2 *******local_16;
  undefined2 *******local_14;
  undefined2 *******local_12;
  undefined2 *******local_10;
  undefined2 *******local_e;
  undefined2 *******local_c;
  undefined2 *******local_8;
  
  FUN_21f2_0ebc();
  local_40 = 0;
  *(undefined2 *)0x154 = 0;
  local_8 = (undefined2 *******)0x0;
  local_c = (undefined2 *******)0xb73d;
  func_0x0000daa6();
  local_8 = (undefined2 *******)*(undefined2 *)0xcb4;
  local_c = (undefined2 *******)0x0;
  local_e = (undefined2 *******)0x3;
  local_10 = (undefined2 *******)0x885;
  local_12 = (undefined2 *******)0xb752;
  func_0x0000f2cb();
  *(undefined2 *)0xd12 = 0;
  local_8 = (undefined2 *******)0xd12;
  local_c = (undefined2 *******)param_1;
  local_e = (undefined2 *******)0xdef;
  local_10 = (undefined2 *******)0xb76a;
  iVar4 = func_0x00027724();
  if (iVar4 != 0) {
LAB_3ab8_0bf1:
    local_40 = 1;
    goto LAB_3ab8_1183;
  }
  if (*(int *)0x158 != 0) {
    return 0xffff;
  }
  local_8 = (undefined2 *******)local_52;
  local_c = (undefined2 *******)*(undefined2 *)0xbc78;
  local_e = (undefined2 *******)0xbf48;
  local_10 = (undefined2 *******)*(int *)0xd12;
  local_12 = (undefined2 *******)0x22b2;
  local_14 = (undefined2 *******)0xb7a0;
  iVar4 = FUN_21f2_581c();
  local_48 = (undefined2 *******)CONCAT22(local_48._2_2_,(undefined2 *******)local_48);
  if ((iVar4 == 0) &&
     (local_48 = (undefined2 *******)CONCAT22(local_48._2_2_,(undefined2 *******)local_48),
     199 < (int)local_52[0])) {
    *(undefined1 *)0xbf5c = 0;
    local_8 = (undefined2 *******)0x7868;
    local_c = (undefined2 *******)0x22b2;
    local_e = (undefined2 *******)0xb7c8;
    iVar4 = func_0x00024cb8();
    if (iVar4 != 0) {
      local_40 = 3;
      goto LAB_3ab8_1183;
    }
    local_8 = (undefined2 *******)local_52;
    local_c = (undefined2 *******)*(undefined2 *)0xbc78;
    local_e = (undefined2 *******)0xbf48;
    local_10 = (undefined2 *******)*(int *)0xd12;
    local_12 = (undefined2 *******)0x22b2;
    local_14 = (undefined2 *******)0xb7f0;
    iVar4 = FUN_21f2_581c();
    local_48 = (undefined2 *******)CONCAT22(local_48._2_2_,(undefined2 *******)local_48);
    if ((iVar4 == 0) &&
       (local_48 = (undefined2 *******)CONCAT22(local_48._2_2_,(undefined2 *******)local_48),
       199 < (int)local_52[0])) {
      local_8 = &local_c;
      local_c = (undefined2 *******)&local_4c;
      local_e = &local_14;
      local_10 = &local_10;
      local_12 = &local_44;
      local_14 = &local_8;
      local_16 = &local_3a;
      puStack_18 = &stack0xfffa;
      local_1a = 0x787d;
      uStack_1c = 0xbf48;
      uStack_1e = 0x22b2;
      uStack_20 = 0xb82f;
      iVar4 = func_0x000253ce();
      if (iVar4 == 7) {
        local_16 = (undefined2 *******)0x0;
      }
      else if ((iVar4 != 8) && (iVar4 != 9)) goto LAB_3ab8_0c27;
      if ((((*(int *)0x13e < (int)unaff_DI) ||
           ((((*(int *)0x13e <= (int)unaff_DI && ((undefined2 ******)*(uint *)0x13c < unaff_SI)) ||
             (*(int *)0x142 < (int)local_38)) ||
            ((*(int *)0x142 <= (int)local_38 && ((undefined2 *******)*(uint *)0x140 < local_3a))))))
          || (*(int *)0x146 < (int)local_8)) ||
         ((*(int *)0x144 < (int)local_44 || ((undefined2 *******)*(uint *)0x166 < local_16)))) {
        local_8 = (undefined2 *******)local_44;
        local_c = (undefined2 *******)local_38;
        local_e = local_3a;
        local_14 = local_16;
        pcVar3 = (code *)swi(0x3f);
        local_12 = (undefined2 *******)unaff_SI;
        local_10 = unaff_DI;
        iVar4 = (*pcVar3)();
        if (iVar4 == -1) {
          local_40 = 4;
          goto LAB_3ab8_1183;
        }
      }
      local_8 = (undefined2 *******)*(undefined2 *)0xd12;
      local_c = (undefined2 *******)0xb8c5;
      func_0x000276be();
      *(undefined2 *)0xd12 = 0;
      local_8 = (undefined2 *******)0xd12;
      local_c = (undefined2 *******)param_1;
      local_e = (undefined2 *******)0x22b2;
      local_10 = (undefined2 *******)0xb8db;
      iVar4 = func_0x00027724();
      if (iVar4 != 0) goto LAB_3ab8_0bf1;
      if (*(int *)0x158 != 0) {
        return 0xffff;
      }
      local_8 = (undefined2 *******)local_52;
      local_c = (undefined2 *******)*(undefined2 *)0xbc78;
      local_e = (undefined2 *******)0xbf48;
      local_10 = (undefined2 *******)*(int *)0xd12;
      local_12 = (undefined2 *******)0x22b2;
      local_14 = (undefined2 *******)0xb908;
      iVar4 = FUN_21f2_581c();
      if (iVar4 == 0) {
        if (199 < (int)local_52[0]) {
          local_8 = (undefined2 *******)local_52;
          local_c = (undefined2 *******)*(undefined2 *)0xbc78;
          local_e = (undefined2 *******)0xbf48;
          local_10 = (undefined2 *******)*(int *)0xd12;
          local_12 = (undefined2 *******)0x22b2;
          local_14 = (undefined2 *******)0xb933;
          iVar4 = FUN_21f2_581c();
          if ((iVar4 == 0) && (199 < (int)local_52[0])) {
            local_8 = (undefined2 *******)&local_4c;
            local_c = &local_10;
            local_e = &local_44;
            local_10 = &local_8;
            local_12 = &local_3a;
            local_14 = (undefined2 *******)&stack0xfffa;
            local_16 = (undefined2 *******)0x789a;
            puStack_18 = (undefined1 *)0xbf48;
            local_1a = 0x22b2;
            uStack_1c = 0xb96d;
            func_0x000253ce();
            local_8 = (undefined2 *******)0x0;
            *(undefined2 *)0x148 = unaff_SI;
            *(undefined2 *)0x14a = unaff_DI;
            local_10 = (undefined2 *******)0x22b2;
            local_12 = (undefined2 *******)0xb98a;
            local_48 = (undefined2 *******)func_0x00027932();
            local_c = (undefined2 *******)local_48;
            if (*(int *)0xbed2 == 0) {
              local_3e = (undefined2 *******)(*(uint *)0xbc7e + 0x16);
              local_3c = (undefined2 *******)
                         (*(int *)0xbc80 + (-(uint)(0xffe9 < *(uint *)0xbc7e) & 0x1000));
            }
            else {
              local_3e = (undefined2 *******)0x16;
              local_3c = (undefined2 *******)0x0;
            }
            local_8 = (undefined2 *******)*(undefined2 *)0xbed2;
            local_12 = (undefined2 *******)0x22b2;
            local_14 = (undefined2 *******)0xb9c5;
            local_10 = local_3e;
            local_e = local_3c;
            iVar4 = FUN_3ab8_07e4();
            if (iVar4 == 0) {
              *(undefined2 *)0x14c = local_3a;
              *(int *)0x14e = (int)local_38;
              local_8 = (undefined2 *******)0x22b2;
              pppppppuVar8 = (undefined2 *******)func_0x00027a04();
              local_c = (undefined2 *******)pppppppuVar8;
              local_8 = (undefined2 *******)*(int *)0xc718;
              if (*(int *)0xbed2 == 0) {
                local_3e = (undefined2 *******)(*(uint *)0xb788 + 0x20);
                local_3c = (undefined2 *******)
                           (*(int *)0xb78a + (-(uint)(0xffdf < *(uint *)0xb788) & 0x1000));
              }
              else {
                local_3e = (undefined2 *******)0x20;
                local_3c = (undefined2 *******)0x0;
              }
              local_12 = (undefined2 *******)0x22b2;
              local_14 = (undefined2 *******)0xba1a;
              local_10 = local_3e;
              local_e = local_3c;
              local_48 = pppppppuVar8;
              iVar4 = FUN_3ab8_07e4();
              if (iVar4 == 0) {
                *(int *)0x152 = (int)local_8;
                local_48 = (undefined2 *******)((long)(int)local_8 * 0xc);
                local_c = (undefined2 *******)local_48;
                local_3e = (undefined2 *******)(*(uint *)0xbe82 + 0xc);
                local_3c = (undefined2 *******)
                           (*(int *)0xbe84 + (-(uint)(0xfff3 < *(uint *)0xbe82) & 0x1000));
                local_8 = (undefined2 *******)0x0;
                local_12 = (undefined2 *******)0x22b2;
                local_14 = (undefined2 *******)0xba5c;
                local_10 = local_3e;
                local_e = local_3c;
                iVar4 = FUN_3ab8_07e4();
                if (iVar4 == 0) {
                  local_48 = (undefined2 *******)((long)(int)local_44 * 0x18);
                  local_c = (undefined2 *******)local_48;
                  local_3e = (undefined2 *******)(*(uint *)0xbe9a + 0x18);
                  local_3c = (undefined2 *******)
                             (*(int *)0xbe9c + (-(uint)(0xffe7 < *(uint *)0xbe9a) & 0x1000));
                  *(undefined2 *)0x150 = 0;
                  local_8 = (undefined2 *******)0x0;
                  local_12 = (undefined2 *******)0x22b2;
                  local_14 = (undefined2 *******)0xba9a;
                  local_10 = local_3e;
                  local_e = local_3c;
                  iVar4 = FUN_3ab8_07e4();
                  if (iVar4 == 0) {
                    local_3e = (undefined2 *******)*(int *)0xbefa;
                    local_3c = (undefined2 *******)*(int *)0xbefc;
                    *(int *)0xc0ac = (int)local_3e;
                    *(int *)0xc0ae = (int)local_3c;
                    local_8 = (undefined2 *******)0x0;
                    local_48._2_2_ = (int)local_16 >> 0xf;
                    local_48._0_2_ = local_16;
                    local_c = local_16;
                    local_e = (undefined2 *******)*(int *)0xbefc;
                    local_10 = (undefined2 *******)*(int *)0xbefa;
                    local_12 = (undefined2 *******)0x22b2;
                    local_14 = (undefined2 *******)0xbad0;
                    iVar4 = FUN_3ab8_07e4();
                    if (iVar4 == 0) {
                      for (local_42 = 1; local_42 <= (int)local_44; local_42 = local_42 + 1) {
                        local_8 = (undefined2 *******)(local_42 + *(int *)0x150);
                        local_c = (undefined2 *******)0xbaee;
                        puVar9 = (undefined2 *)func_0x00000398();
                        puVar6 = (undefined2 *)puVar9;
                        puVar7 = local_36;
                        local_8 = unaff_DS;
                        for (iVar4 = 0xc; unaff_DS = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
                          puVar2 = puVar7;
                          puVar7 = puVar7 + 1;
                          puVar1 = puVar6;
                          puVar6 = puVar6 + 1;
                          *puVar2 = *puVar1;
                        }
                        local_26 = local_26 + *(int *)0xc0ac;
                        local_24 = *(undefined2 *)0xc0ae;
                        local_8 = (undefined2 *******)(local_42 + *(int *)0x150);
                        local_c = (undefined2 *******)0xbb1d;
                        puVar9 = (undefined2 *)func_0x00000398();
                        puVar6 = (undefined2 *)puVar9;
                        puVar7 = local_36;
                        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                          puVar2 = puVar6;
                          puVar6 = puVar6 + 1;
                          puVar1 = puVar7;
                          puVar7 = puVar7 + 1;
                          *puVar2 = *puVar1;
                        }
                      }
                      *(int *)0x150 = (int)local_44;
                      local_8 = (undefined2 *******)*(undefined2 *)0xd12;
                      local_c = (undefined2 *******)0xbb46;
                      func_0x000276be();
                      *(undefined1 *)0xd14 = 2;
                      *(undefined2 *)0xd12 = 0;
                      local_8 = (undefined2 *******)0x0;
                      local_c = (undefined2 *******)0xbb57;
                      func_0x0000daa6();
                      local_8 = (undefined2 *******)*(undefined2 *)0xcb4;
                      local_c = (undefined2 *******)0x0;
                      local_e = (undefined2 *******)0x3;
                      local_10 = (undefined2 *******)0x885;
                      local_12 = (undefined2 *******)0xbb6c;
                      func_0x0000f2cb();
                      local_8 = (undefined2 *******)0xdef;
                      FUN_28b3_0d8b();
                      local_8 = (undefined2 *******)0x22b2;
                      func_0x00029d78();
                      local_8 = (undefined2 *******)0x22b2;
                      func_0x00029c2c();
                      local_8 = (undefined2 *******)0x22b2;
                      func_0x0002996b();
                      local_8 = (undefined2 *******)&local_4c;
                      local_c = (undefined2 *******)0xbba7;
                      func_0x00029b6d();
                      local_8 = (undefined2 *******)0x22b2;
                      func_0x00029983();
                      local_8 = (undefined2 *******)0x22b2;
                      func_0x000297e6();
                      local_8 = &local_10;
                      local_c = (undefined2 *******)0xbbbe;
                      func_0x00029b6d();
                      local_8 = (undefined2 *******)0x22b2;
                      func_0x00029983();
                      local_8 = (undefined2 *******)0x22b2;
                      func_0x000297e6();
                      local_8 = &local_14;
                      local_c = (undefined2 *******)0xbbd5;
                      func_0x00029b6d();
                      local_8 = (undefined2 *******)0x22b2;
                      func_0x00029983();
                      *param_2 = local_10;
                      param_2[1] = local_e;
                      *param_3 = (int)local_14;
                      param_3[1] = (int)local_12;
                      local_8 = local_12;
                      local_c = local_e;
                      local_e = local_10;
                      local_10 = (undefined2 *******)local_4a;
                      local_12 = (undefined2 *******)local_4c;
                      local_14 = (undefined2 *******)0x22b2;
                      local_16 = (undefined2 *******)0xbc0d;
                      FUN_3ab8_03d8();
                      local_42 = 1;
                      do {
                        local_52[0] = (undefined2 *****)(local_42 * 10);
                        if (local_42 < 2) {
                          local_52[0] = (undefined2 *****)0x14;
                        }
                        if (local_42 == 2) {
                          local_52[0] = (undefined2 *****)0x19;
                        }
                        local_8 = (undefined2 *******)0x22b2;
                        FUN_28b3_0d8b();
                        local_8 = (undefined2 *******)0x22b2;
                        func_0x00029b6d();
                        local_8 = (undefined2 *******)0x22b2;
                        func_0x00029b6d();
                        local_8 = (undefined2 *******)0x22b2;
                        func_0x00029b6d();
                        local_8 = (undefined2 *******)0x22b2;
                        func_0x00029d78();
                        local_8 = (undefined2 *******)0x22b2;
                        uVar5 = FUN_28b3_0f51();
                        *(undefined2 *)(local_42 * 2 + 0x182) = uVar5;
                        *(undefined2 *)(local_42 * 2 + 0x198) = uVar5;
                        local_52[0] = (undefined2 *****)0xa;
                        if (local_42 < 6) {
                          local_52[0] = (undefined2 *****)0x5;
                        }
                        if (local_42 < 3) {
                          local_52[0] = (undefined2 *****)0x0;
                        }
                        local_8 = (undefined2 *******)0x22b2;
                        FUN_28b3_0d8b();
                        local_8 = (undefined2 *******)0x22b2;
                        func_0x00029b6d();
                        local_8 = (undefined2 *******)0x22b2;
                        func_0x00029b6d();
                        local_8 = (undefined2 *******)0x22b2;
                        func_0x00029b6d();
                        local_8 = (undefined2 *******)0x22b2;
                        func_0x00029d78();
                        local_8 = (undefined2 *******)0x22b2;
                        uVar5 = FUN_28b3_0f51();
                        *(undefined2 *)(local_42 * 2 + 0x1ae) = uVar5;
                        local_42 = local_42 + 1;
                      } while (local_42 < 0xb);
                      local_42 = 0;
                      do {
                        *(undefined1 *)(local_42 + -0x3e90) = 1;
                        *(undefined1 *)(local_42 + -0x4c78) = 1;
                        local_42 = local_42 + 1;
                      } while (local_42 < 0x100);
                      local_42 = 0;
                      do {
                        *(undefined1 *)(local_42 + 0xb6c) = 1;
                        *(undefined1 *)(local_42 + 0xb7c) = 1;
                        local_42 = local_42 + 1;
                      } while (local_42 < 0x10);
                      return 1;
                    }
                  }
                }
              }
            }
            goto LAB_3ab8_0c27;
          }
        }
      }
    }
  }
LAB_3ab8_0c27:
  local_40 = 2;
LAB_3ab8_1183:
  if (*(int *)0xd12 != 0) {
    local_8 = (undefined2 *******)*(undefined2 *)0xd12;
    local_c = (undefined2 *******)0xbd13;
    func_0x000276be();
    *(undefined2 *)0xd12 = 0;
  }
  return 0;
}



/* 3ab8:11a2  FUN_3ab8_11a2  489 bytes, 2 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_3ab8_11a2(int param_1,undefined2 ******param_2,int param_3)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 ******ppppppuVar9;
  int iVar10;
  uint extraout_DX;
  uint uVar11;
  undefined2 extraout_DX_00;
  undefined2 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 ******ppppppuVar15;
  undefined2 *puVar16;
  undefined2 uVar17;
  undefined2 unaff_SS;
  undefined2 *******unaff_DS;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined2 *******pppppppuVar28;
  undefined2 *puVar29;
  int iStack_124;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined2 ******local_114;
  char local_110;
  undefined2 uStack_10e;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined2 *****pppppuStack_104;
  int iStack_102;
  undefined2 *******local_100;
  undefined2 ******local_fe;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  int iStack_f6;
  char local_f0;
  undefined2 uStack_ee;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined2 *****pppppuStack_e8;
  undefined4 local_e6;
  undefined2 uStack_e2;
  int iStack_e0;
  undefined2 ******local_ce;
  uint uStack_cc;
  undefined2 ******ppppppuStack_ca;
  int local_c6;
  undefined2 *******pppppppuStack_c4;
  undefined2 *******pppppppuStack_c2;
  undefined2 auStack_be [2];
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined2 ******ppppppuStack_ae;
  undefined2 ******ppppppuStack_ac;
  byte bStack_aa;
  undefined2 *****local_a6;
  undefined2 ******ppppppuStack_a4;
  undefined1 local_9c [2];
  undefined2 ******local_9a;
  undefined1 local_98;
  uint uStack_96;
  int iStack_94;
  int local_90;
  char local_8e;
  int iStack_88;
  char cStack_86;
  char acStack_83 [53];
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 *****local_40;
  undefined2 ******ppppppuStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined1 *puStack_36;
  undefined2 *******pppppppuStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 *puStack_2a;
  undefined2 *puStack_28;
  undefined2 *puStack_26;
  undefined2 *puStack_24;
  uint *puStack_22;
  undefined2 *puStack_20;
  undefined2 *puStack_1e;
  undefined2 *puStack_1c;
  undefined2 *puStack_1a;
  undefined2 *puStack_18;
  undefined1 *puStack_16;
  undefined2 *puStack_14;
  undefined2 *puStack_12;
  undefined2 *******pppppppuStack_10;
  undefined2 *******local_e;
  undefined2 *******pppppppuStack_c;
  undefined2 *******pppppppuStack_8;
  
  FUN_21f2_0ebc();
  local_90 = 0;
  local_110 = '\0';
  local_8e = '\0';
  local_f0 = '\0';
  local_98 = 0;
  if (param_1 == 0) {
    return 0;
  }
  pppppppuStack_8 = (undefined2 *******)param_2;
  pppppppuStack_c = (undefined2 *******)0x22b2;
  local_e = (undefined2 *******)0xbd66;
  FUN_21f2_3454();
  pppppppuStack_8 = (undefined2 *******)((int)acStack_83 + 1);
  pppppppuStack_c = (undefined2 *******)0xbd71;
  iVar6 = func_0x00024ce4();
  local_114 = (undefined2 ******)(iVar6 + -1);
  pppppppuStack_c = (undefined2 *******)(undefined2 ******)0x22b2;
  if (acStack_83[iVar6] == '\\') {
    pppppppuStack_c = (undefined2 *******)0x22b2;
    ppppppuVar15 = (undefined2 ******)0x2a75;
    local_e = (undefined2 *******)0xbd89;
    pppppppuStack_8 = (undefined2 *******)local_114;
    iVar6 = func_0x0002aa38();
    pppppppuStack_c = (undefined2 *******)ppppppuVar15;
    if (iVar6 != 0) goto LAB_3ab8_120f;
  }
  else {
LAB_3ab8_120f:
    pppppppuStack_8 = (undefined2 *******)0x78b1;
    ppppppuVar15 = (undefined2 ******)0x22b2;
    local_e = (undefined2 *******)0xbd9c;
    FUN_21f2_2d26();
  }
  pppppppuStack_8 = (undefined2 *******)(param_1 * 0xf + param_3);
  local_e = (undefined2 *******)0xbdb1;
  pppppppuStack_c = (undefined2 *******)ppppppuVar15;
  FUN_21f2_2d26();
  pppppppuStack_8 = (undefined2 *******)0x22b2;
  func_0x0000c3ca();
  pppppppuStack_8 = (undefined2 *******)0xd12;
  pppppppuStack_c = (undefined2 *******)((int)acStack_83 + 1);
  local_e = (undefined2 *******)0x885;
  pppppppuStack_10 = (undefined2 *******)0xbdc8;
  iVar6 = func_0x00027724();
  if (iVar6 == 0) {
    pppppppuStack_8 = (undefined2 *******)0x22b2;
    iVar6 = FUN_3ab8_035c();
    if (iVar6 == 0) {
      local_110 = *(char *)0xbf5c == 'a';
      local_8e = *(char *)0xbf5e == 'f';
      if (*(char *)0xbf60 == 'm') {
        local_f0 = '\x01';
      }
      *(undefined1 *)0xbf5c = 0;
      pppppppuStack_8 = (undefined2 *******)0x5b6;
      pppppppuStack_c = (undefined2 *******)0x22b2;
      local_e = (undefined2 *******)0xbe3b;
      iVar6 = func_0x00024cb8();
      if (iVar6 != 0) {
        local_98 = 0xc;
        goto LAB_3ab8_125f;
      }
      local_ce = (undefined2 ******)0x0;
      do {
        *(undefined1 *)(local_ce + -0x2081) = *(undefined1 *)(local_ce + -0x2048);
        local_ce = (undefined2 ******)((int)local_ce + 1);
      } while ((int)local_ce < 0x40);
      pppppppuStack_8 = (undefined2 *******)0x22b2;
      iVar6 = FUN_3ab8_035c();
      if (iVar6 == 0) {
        pppppppuStack_8 = (undefined2 *******)&local_40;
        pppppppuStack_c = (undefined2 *******)&local_a6;
        local_e = &local_e;
        pppppppuStack_10 = (undefined2 *******)0x78b3;
        puStack_12 = (undefined2 *)0xbf48;
        puStack_14 = (undefined2 *)0x22b2;
        puStack_16 = (undefined1 *)0xbe8f;
        func_0x000253ce();
        pppppppuStack_8 = (undefined2 *******)0x22b2;
        iVar6 = FUN_3ab8_035c();
        if (iVar6 == 0) {
          pppppppuStack_8 = (undefined2 *******)0x22b2;
          iVar6 = FUN_3ab8_035c();
          if (iVar6 == 0) {
            pppppppuStack_8 = &local_100;
            pppppppuStack_c = (undefined2 *******)0x78c1;
            local_e = (undefined2 *******)0xbf48;
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            puStack_12 = (undefined2 *)0xbebc;
            func_0x000253ce();
            pppppppuStack_8 = (undefined2 *******)*(undefined2 *)0xd12;
            pppppppuStack_c = (undefined2 *******)0xbec8;
            func_0x000276be();
            *(undefined2 *)0xd12 = 0;
            pppppppuStack_8 = (undefined2 *******)0x22b2;
            func_0x0002504e();
            pppppppuStack_8 = (undefined2 *******)local_9a;
            pppppppuStack_c = (undefined2 *******)local_fe;
            local_e = local_100;
            pppppppuStack_10 = (undefined2 *******)0x22b2;
            puStack_12 = (undefined2 *)0xbee9;
            uVar11 = extraout_DX;
            local_e6._0_2_ = (undefined2 *******)FUN_12c1_0061();
            local_e6._2_2_ = uVar11;
            while( true ) {
              pppppppuStack_8 = (undefined2 *******)0x0;
              pcVar5 = (code *)swi(0x3f);
              (*pcVar5)();
              if (((int)pppppppuStack_c <= *(int *)0x13e) &&
                 (((int)pppppppuStack_c < *(int *)0x13e ||
                  (local_e <= (undefined2 *******)*(uint *)0x13c)))) break;
LAB_3ab8_13cf:
              *(undefined2 *)0x152 = 0;
              *(undefined2 *)0x150 = 0;
              *(undefined2 *)0x14e = 0;
              *(undefined2 *)0x14c = 0;
              *(undefined2 *)0x14a = 0;
              *(undefined2 *)0x148 = 0;
              uVar17 = *(undefined2 *)0xbefc;
              *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
              *(undefined2 *)0xc0ae = uVar17;
              pppppppuStack_8 = (undefined2 *******)ppppppuStack_a4;
              pppppppuStack_10 = (undefined2 *******)local_e6;
              pcVar5 = (code *)swi(0x3f);
              iVar6 = (*pcVar5)();
              if (iVar6 == -1) {
                return 0;
              }
            }
            if ((*(int *)0x142 < (int)ppppppuStack_a4) ||
               (((((*(int *)0x142 <= (int)ppppppuStack_a4 &&
                   ((undefined2 ****)*(uint *)0x140 < local_a6)) || (*(int *)0x144 < local_c6)) ||
                 (0 < (int)local_e6._2_2_)) ||
                (((local_e6._2_2_ < 0x8000 &&
                  ((undefined2 *******)*(uint *)0x166 < (undefined2 *******)local_e6)) ||
                 (*(int *)0x146 < (int)local_40)))))) goto LAB_3ab8_13cf;
            pppppppuStack_8 = (undefined2 *******)((int)acStack_83 + 1);
            pppppppuStack_c = (undefined2 *******)0xbfab;
            iVar6 = func_0x00027724();
            if (iVar6 != 0) goto LAB_3ab8_1432;
            pppppppuStack_8 = (undefined2 *******)0x22b2;
            iVar6 = FUN_3ab8_035c();
            if (iVar6 == 0) {
              pppppppuStack_8 = (undefined2 *******)0xc134;
              pppppppuStack_c = (undefined2 *******)0xbfcb;
              func_0x000257c0();
              cStack_86 = '\x01';
              pppppppuStack_8 = (undefined2 *******)0x22b2;
              iVar6 = FUN_3ab8_035c();
              if (iVar6 == 0) {
                *(undefined1 *)0xd98 = 0x67;
                pppppppuStack_8 = (undefined2 *******)&pppppuStack_104;
                pppppppuStack_c = (undefined2 *******)&pppppuStack_e8;
                local_e = &ppppppuStack_3e;
                pppppppuStack_10 = &pppppppuStack_8;
                puStack_12 = &uStack_118;
                puStack_14 = &uStack_108;
                puStack_16 = &stack0xfff6;
                puStack_18 = &uStack_11a;
                puStack_1a = &uStack_10a;
                puStack_1c = &uStack_f8;
                puStack_1e = &uStack_ea;
                puStack_20 = &uStack_e2;
                puStack_22 = &uStack_96;
                puStack_24 = &uStack_11e;
                puStack_26 = &uStack_10e;
                puStack_28 = &uStack_fc;
                puStack_2a = &uStack_ee;
                uStack_2c = 0xa6c;
                uStack_2e = 0xa6a;
                uStack_30 = 0xa68;
                uStack_32 = 0xb310;
                pppppppuStack_34 = (undefined2 *******)0xb26;
                puStack_36 = (undefined1 *)0x1d0;
                uStack_38 = 0x1d2;
                uStack_3a = 0x1ce;
                uStack_3c = 0x168;
                ppppppuStack_3e = (undefined2 ******)0x154;
                local_40 = (undefined2 *****)0x152;
                uStack_42 = 0x150;
                uStack_44 = 0x14c;
                uStack_46 = 0x148;
                uStack_48 = 0xd7a;
                uStack_4a = 0xbf48;
                uStack_4c = 0x22b2;
                uStack_4e = 0xc07d;
                iStack_88 = func_0x000253ce();
                pppppppuStack_8 = (undefined2 *******)0xb26;
                pppppppuStack_c = (undefined2 *******)0xc08a;
                func_0x000088e3();
                if (0x11 < iStack_88) {
                  *(undefined2 *)0x52 = uStack_ee;
                  *(undefined2 *)0x54 = uStack_ec;
                  *(undefined2 *)0x56 = uStack_fc;
                  *(undefined2 *)0x58 = uStack_fa;
                  *(undefined2 *)0x5a = uStack_10e;
                  *(undefined2 *)0x5c = uStack_10c;
                  *(undefined2 *)0x5e = uStack_11e;
                  *(undefined2 *)0x60 = uStack_11c;
                }
                if (0x12 < iStack_88) {
                  puVar1 = (uint *)0xc134;
                  uVar11 = *puVar1;
                  *puVar1 = *puVar1 - uStack_96;
                  *(int *)0xc136 = (*(int *)0xc136 - iStack_94) - (uint)(uVar11 < uStack_96);
                }
                if (0x1d < iStack_88) {
                  *(undefined2 *)0x68 = uStack_e2;
                  *(undefined2 *)0x6a = uStack_ea;
                  *(undefined2 *)0x6c = uStack_f8;
                  *(undefined2 *)0x6e = uStack_10a;
                  *(undefined2 *)0x70 = uStack_11a;
                  *(undefined2 *)0x72 = 0x22b2;
                  *(undefined2 *)0x115a = uStack_108;
                  *(undefined2 *)0x115c = uStack_106;
                  *(undefined2 *)0x115e = uStack_118;
                  *(undefined2 *)0x1160 = uStack_116;
                  *(undefined2 *)0x1162 = pppppppuStack_8;
                  *(undefined2 *)0x1164 = 0;
                  *(undefined2 *)0x1166 = ppppppuStack_3e;
                  *(undefined2 *)0x1168 = uStack_3c;
                  *(undefined2 *)0x116c = pppppuStack_e8;
                  cStack_86 = '\0';
                }
                iVar6 = 0xd12;
                if (0x1e < iStack_88) {
                  iVar6 = iStack_f6;
                }
                if (0x1f < iStack_88) {
                  *(undefined2 *)0x66 = pppppuStack_104;
                }
                pppppppuStack_8 = (undefined2 *******)0x885;
                func_0x000297e6();
                pppppppuStack_8 = (undefined2 *******)0x22b2;
                func_0x0002996b();
                pppppppuStack_8 = (undefined2 *******)0x22b2;
                func_0x00029b9d();
                pppppppuStack_8 = (undefined2 *******)0x22b2;
                func_0x00029983();
                pppppppuStack_8 = (undefined2 *******)0x22b2;
                FUN_28b3_0d8b();
                pppppppuStack_8 = (undefined2 *******)0x22b2;
                func_0x00029b9d();
                pppppppuStack_8 = (undefined2 *******)0x22b2;
                func_0x00029983();
                pppppppuStack_8 = (undefined2 *******)0x22b2;
                iVar7 = FUN_3ab8_035c();
                if (iVar7 == 0) {
                  if (local_f0 != '\0') {
                    pppppppuStack_8 = (undefined2 *******)0xc30;
                    pppppppuStack_c = (undefined2 *******)0xc48;
                    local_e = (undefined2 *******)0x1026;
                    pppppppuStack_10 = (undefined2 *******)0x101e;
                    puStack_12 = (undefined2 *)0x1016;
                    puStack_14 = (undefined2 *)0x100e;
                    puStack_16 = (undefined1 *)0x1006;
                    puStack_18 = (undefined2 *)0xff6;
                    puStack_1a = (undefined2 *)0x1098;
                    puStack_1c = (undefined2 *)0x1096;
                    puStack_1e = (undefined2 *)0x1092;
                    puStack_20 = (undefined2 *)0x10c6;
                    puStack_22 = (uint *)0x10c2;
                    puStack_24 = (undefined2 *)0x10be;
                    puStack_26 = (undefined2 *)0x10ba;
                    puStack_28 = (undefined2 *)0x10b6;
                    puStack_2a = (undefined2 *)0x10b2;
                    uStack_2c = 0x1124;
                    uStack_2e = 0x112e;
                    uStack_30 = 0x1126;
                    uStack_32 = 0x112c;
                    pppppppuStack_34 = (undefined2 *******)0x112a;
                    puStack_36 = (undefined1 *)0x1128;
                    uStack_38 = 0x1136;
                    uStack_3a = 0x1132;
                    uStack_3c = 0x1d8;
                    ppppppuStack_3e = (undefined2 ******)0x1d4;
                    local_40 = (undefined2 *****)0xe28;
                    uStack_42 = 0xbf48;
                    uStack_44 = 0x22b2;
                    uStack_46 = 0xc259;
                    func_0x000253ce();
                  }
                  local_ce = (undefined2 ******)0x0;
                  do {
                    uVar17 = *(undefined2 *)0xab04;
                    uVar12 = *(undefined2 *)0xab06;
                    iVar7 = (int)local_ce * 4;
                    *(undefined2 *)(iVar7 + 0xc78) = uVar17;
                    *(undefined2 *)(iVar7 + 0xc7a) = uVar12;
                    *(undefined2 *)(iVar7 + 0xc8c) = uVar17;
                    *(undefined2 *)(iVar7 + 0xc8e) = uVar12;
                    *(undefined2 *)(iVar7 + 0xc64) = uVar17;
                    *(undefined2 *)(iVar7 + 0xc66) = uVar12;
                    local_ce = (undefined2 ******)((int)local_ce + 1);
                  } while ((int)local_ce < 5);
                  uVar17 = *(undefined2 *)0xab0a;
                  *(undefined2 *)0x11d8 = *(undefined2 *)0xab08;
                  *(undefined2 *)0x11da = uVar17;
                  uVar17 = *(undefined2 *)0xab0e;
                  *(undefined2 *)0x11dc = *(undefined2 *)0xab0c;
                  *(undefined2 *)0x11de = uVar17;
                  uVar17 = *(undefined2 *)0xab06;
                  *(undefined2 *)0x11e0 = *(undefined2 *)0xab04;
                  *(undefined2 *)0x11e2 = uVar17;
                  *(undefined2 *)0x11e4 = 0;
                  pppppppuStack_8 = (undefined2 *******)0x22b2;
                  iVar7 = FUN_3ab8_035c();
                  if (iVar7 == 0) {
                    iStack_102 = -1;
                    pppppppuStack_8 = (undefined2 *******)0x108e;
                    pppppppuStack_c = (undefined2 *******)0x11ea;
                    local_e = (undefined2 *******)0x11e4;
                    pppppppuStack_10 = (undefined2 *******)0x11e0;
                    puStack_12 = (undefined2 *)0x11dc;
                    puStack_14 = (undefined2 *)0x11d8;
                    puStack_16 = (undefined1 *)0xc74;
                    puStack_18 = (undefined2 *)0xc9c;
                    puStack_1a = (undefined2 *)0xc88;
                    puStack_1c = (undefined2 *)0xc70;
                    puStack_1e = (undefined2 *)0xc98;
                    puStack_20 = (undefined2 *)0xc84;
                    puStack_22 = (uint *)0xc6c;
                    puStack_24 = (undefined2 *)0xc94;
                    puStack_26 = (undefined2 *)0xc80;
                    puStack_28 = (undefined2 *)0xc68;
                    puStack_2a = (undefined2 *)0xc90;
                    uStack_2c = 0xc7c;
                    uStack_2e = 0xc64;
                    uStack_30 = 0xc8c;
                    uStack_32 = 0xc78;
                    pppppppuStack_34 = &local_100;
                    puStack_36 = local_9c;
                    uStack_38 = 0xdde;
                    uStack_3a = 0xbf48;
                    uStack_3c = 0x22b2;
                    ppppppuStack_3e = (undefined2 ******)0xc345;
                    func_0x000253ce();
                    if (((iStack_102 < 0) || (0xf < iStack_102)) &&
                       (((iStack_102 < 100 || (0x73 < iStack_102)) &&
                        ((iStack_102 < 200 || (0xd7 < iStack_102)))))) {
                      *(char *)0x135 = *(byte *)0x135 % 100 - 0x38;
                    }
                    else {
                      *(undefined1 *)0x135 = (undefined1)iStack_102;
                    }
                    pppppppuStack_8 = (undefined2 *******)0x194;
                    pppppppuStack_c = (undefined2 *******)0x22b2;
                    local_e = (undefined2 *******)0xc399;
                    iVar7 = FUN_3ab8_039a();
                    if (iVar7 == 0) {
                      pppppppuStack_8 = (undefined2 *******)0x194;
                      pppppppuStack_c = (undefined2 *******)0x22b2;
                      local_e = (undefined2 *******)0xc3b3;
                      iVar7 = FUN_3ab8_039a();
                      if (iVar7 == 0) {
                        pppppppuStack_8 = (undefined2 *******)0x65;
                        pppppppuStack_c = (undefined2 *******)0x22b2;
                        local_e = (undefined2 *******)0xc3c5;
                        iVar7 = FUN_3ab8_039a();
                        if (iVar7 == 0) {
                          pppppppuStack_8 = (undefined2 *******)0x16;
                          pppppppuStack_c = (undefined2 *******)0x22b2;
                          local_e = (undefined2 *******)0xc3d7;
                          iVar7 = FUN_3ab8_039a();
                          if (iVar7 == 0) {
                            pppppppuStack_8 = (undefined2 *******)0x16;
                            pppppppuStack_c = (undefined2 *******)0x22b2;
                            local_e = (undefined2 *******)0xc3e9;
                            iVar7 = FUN_3ab8_039a();
                            if (iVar7 == 0) {
                              pppppppuStack_8 = (undefined2 *******)0x16;
                              pppppppuStack_c = (undefined2 *******)0x22b2;
                              local_e = (undefined2 *******)0xc3fb;
                              iVar7 = FUN_3ab8_039a();
                              if (iVar7 == 0) {
                                pppppppuStack_8 = (undefined2 *******)0x16;
                                pppppppuStack_c = (undefined2 *******)0x22b2;
                                local_e = (undefined2 *******)0xc40d;
                                iVar7 = FUN_3ab8_039a();
                                if (iVar7 == 0) {
                                  if (local_8e == '\0') {
                                    pppppppuStack_8 = (undefined2 *******)0x20;
                                    pppppppuStack_c = (undefined2 *******)0x22b2;
                                    local_e = (undefined2 *******)0xc43c;
                                    iVar7 = FUN_3ab8_039a();
                                    if (iVar7 == 0) {
                                      iStack_124 = 0;
                                      do {
                                        pppppppuStack_8 = (undefined2 *******)0x22b2;
                                        FUN_28b3_0d8b();
                                        pppppppuStack_8 = (undefined2 *******)0x22b2;
                                        func_0x00029983();
                                        iStack_124 = iStack_124 + 1;
                                      } while (iStack_124 < 0x10);
                                      goto LAB_3ab8_18f4;
                                    }
                                  }
                                  else {
                                    pppppppuStack_8 = (undefined2 *******)0x40;
                                    pppppppuStack_c = (undefined2 *******)0x22b2;
                                    local_e = (undefined2 *******)0xc426;
                                    iVar7 = FUN_3ab8_039a();
                                    if (iVar7 == 0) {
LAB_3ab8_18f4:
                                      pcVar5 = (code *)swi(0x3f);
                                      (*pcVar5)();
                                      pppppppuStack_8 = (undefined2 *******)0x10;
                                      pppppppuStack_c = (undefined2 *******)0x22b2;
                                      local_e = (undefined2 *******)0xc485;
                                      iVar7 = FUN_3ab8_039a();
                                      if (iVar7 == 0) {
                                        pppppppuStack_8 = (undefined2 *******)0x100;
                                        pppppppuStack_c = (undefined2 *******)0x22b2;
                                        local_e = (undefined2 *******)0xc49a;
                                        iVar7 = FUN_3ab8_039a();
                                        if (iVar7 == 0) {
                                          pppppppuStack_8 = (undefined2 *******)0x10;
                                          pppppppuStack_c = (undefined2 *******)0x22b2;
                                          local_e = (undefined2 *******)0xc4ac;
                                          iVar7 = FUN_3ab8_039a();
                                          if (iVar7 == 0) {
                                            pppppppuStack_8 = (undefined2 *******)0x100;
                                            pppppppuStack_c = (undefined2 *******)0x22b2;
                                            local_e = (undefined2 *******)0xc4be;
                                            iVar7 = FUN_3ab8_039a();
                                            if (iVar7 == 0) {
                                              pppppppuStack_8 = (undefined2 *******)0x10;
                                              pppppppuStack_c = (undefined2 *******)0x22b2;
                                              local_e = (undefined2 *******)0xc4d0;
                                              iVar7 = FUN_3ab8_039a();
                                              if (iVar7 == 0) {
                                                pppppppuStack_8 = (undefined2 *******)0x0;
                                                pppppppuStack_c =
                                                     (undefined2 *******)*(undefined2 *)0x14a;
                                                local_e = (undefined2 *******)*(undefined2 *)0x148;
                                                pppppppuStack_10 = (undefined2 *******)0x22b2;
                                                ppppppuVar15 = (undefined2 ******)0x22b2;
                                                puStack_12 = (undefined2 *)0xc4ec;
                                                local_e6 = (undefined2 *******)func_0x00027932();
                                                pppppppuStack_c = (undefined2 *******)local_e6;
                                                if (*(int *)0xbed2 == 0) {
                                                  pppppppuStack_c4 =
                                                       (undefined2 *******)(*(uint *)0xbc7e + 0x16);
                                                  pppppppuStack_c2 =
                                                       (undefined2 *******)
                                                       (*(int *)0xbc80 +
                                                       (-(uint)(0xffe9 < *(uint *)0xbc7e) & 0x1000))
                                                  ;
                                                }
                                                else {
                                                  pppppppuStack_c4 = (undefined2 *******)0x16;
                                                  pppppppuStack_c2 = (undefined2 *******)0x0;
                                                }
                                                pppppppuStack_8 =
                                                     (undefined2 *******)*(undefined2 *)0xbed2;
                                                puStack_12 = (undefined2 *)0x22b2;
                                                puStack_14 = (undefined2 *)0xc52d;
                                                pppppppuStack_10 = pppppppuStack_c4;
                                                local_e = pppppppuStack_c2;
                                                iVar7 = FUN_3ab8_07e4();
                                                if (iVar7 == 0) {
                                                  if (cStack_86 != '\0') {
                                                    ppppppuStack_ca = (undefined2 ******)0x0;
                                                    for (uStack_cc = 1;
                                                        ((int)ppppppuStack_ca <= *(int *)0x14a &&
                                                        (((int)ppppppuStack_ca < *(int *)0x14a ||
                                                         (uStack_cc <= *(uint *)0x148))));
                                                        uStack_cc = uStack_cc + 1) {
                                                      pppppppuStack_8 =
                                                           (undefined2 *******)ppppppuStack_ca;
                                                      local_e = (undefined2 *******)0xc57e;
                                                      pppppppuStack_c =
                                                           (undefined2 *******)ppppppuVar15;
                                                      uVar20 = func_0x0000013f();
                                                      pppppppuStack_8 =
                                                           (undefined2 *******)ppppppuStack_ca;
                                                      pppppppuStack_c = (undefined2 *******)0x0;
                                                      local_e = (undefined2 *******)0xc595;
                                                      uVar21 = func_0x0000013f();
                                                      pppppppuStack_8 =
                                                           (undefined2 *******)ppppppuStack_ca;
                                                      pppppppuStack_c = (undefined2 *******)0x0;
                                                      local_e = (undefined2 *******)0xc5ac;
                                                      uVar22 = func_0x0000013f();
                                                      pppppppuStack_8 =
                                                           (undefined2 *******)ppppppuStack_ca;
                                                      pppppppuStack_c = (undefined2 *******)0x0;
                                                      local_e = (undefined2 *******)0xc5c3;
                                                      uVar23 = func_0x0000013f();
                                                      pppppppuStack_8 =
                                                           (undefined2 *******)ppppppuStack_ca;
                                                      pppppppuStack_c = (undefined2 *******)0x0;
                                                      local_e = (undefined2 *******)0xc5da;
                                                      uVar24 = func_0x0000013f();
                                                      pppppppuStack_8 =
                                                           (undefined2 *******)ppppppuStack_ca;
                                                      pppppppuStack_c = (undefined2 *******)0x0;
                                                      local_e = (undefined2 *******)0xc5f1;
                                                      uVar25 = func_0x0000013f();
                                                      pppppppuStack_8 =
                                                           (undefined2 *******)ppppppuStack_ca;
                                                      pppppppuStack_c = (undefined2 *******)0x0;
                                                      local_e = (undefined2 *******)0xc608;
                                                      uVar26 = func_0x0000013f();
                                                      pppppppuStack_8 =
                                                           (undefined2 *******)ppppppuStack_ca;
                                                      pppppppuStack_c = (undefined2 *******)0x0;
                                                      ppppppuVar15 = (undefined2 ******)0x0;
                                                      local_e = (undefined2 *******)0xc61f;
                                                      uVar27 = func_0x0000013f();
                                                      pbVar2 = (byte *)((int)uVar27 + 0x15);
                                                      *pbVar2 = *pbVar2 & 0x7f;
                                                      pbVar2 = (byte *)((int)uVar26 + 0x15);
                                                      *pbVar2 = *pbVar2 & 0xbf;
                                                      pbVar2 = (byte *)((int)uVar25 + 0x15);
                                                      *pbVar2 = *pbVar2 & 0xdf;
                                                      pbVar2 = (byte *)((int)uVar24 + 0x15);
                                                      *pbVar2 = *pbVar2 & 0xef;
                                                      pbVar2 = (byte *)((int)uVar23 + 0x15);
                                                      *pbVar2 = *pbVar2 & 0xf7;
                                                      pbVar2 = (byte *)((int)uVar22 + 0x15);
                                                      *pbVar2 = *pbVar2 & 0xfb;
                                                      pbVar2 = (byte *)((int)uVar21 + 0x15);
                                                      *pbVar2 = *pbVar2 & 0xfd;
                                                      pbVar2 = (byte *)((int)uVar20 + 0x15);
                                                      *pbVar2 = *pbVar2 & 0xfe;
                                                      ppppppuStack_ca =
                                                           (undefined2 ******)
                                                           ((int)ppppppuStack_ca +
                                                           (uint)(0xfffe < uStack_cc));
                                                    }
                                                  }
                                                  pppppppuStack_8 = (undefined2 *******)ppppppuVar15
                                                  ;
                                                  pppppppuVar28 =
                                                       (undefined2 *******)func_0x00027a04();
                                                  pppppppuStack_c =
                                                       (undefined2 *******)pppppppuVar28;
                                                  pppppppuStack_8 =
                                                       (undefined2 *******)*(undefined2 *)0xc718;
                                                  if (*(int *)0xbed2 == 0) {
                                                    pppppppuStack_c4 =
                                                         (undefined2 *******)
                                                         (*(uint *)0xb788 + 0x20);
                                                    pppppppuStack_c2 =
                                                         (undefined2 *******)
                                                         (*(int *)0xb78a +
                                                         (-(uint)(0xffdf < *(uint *)0xb788) & 0x1000
                                                         ));
                                                  }
                                                  else {
                                                    pppppppuStack_c4 = (undefined2 *******)0x20;
                                                    pppppppuStack_c2 = (undefined2 *******)0x0;
                                                  }
                                                  puStack_12 = (undefined2 *)0x22b2;
                                                  puStack_14 = (undefined2 *)0xc6b5;
                                                  pppppppuStack_10 = pppppppuStack_c4;
                                                  local_e = pppppppuStack_c2;
                                                  local_e6 = pppppppuVar28;
                                                  iVar7 = FUN_3ab8_07e4();
                                                  if (iVar7 == 0) {
                                                    pppppppuStack_c4 =
                                                         (undefined2 *******)
                                                         (*(uint *)0xbe9a + 0x18);
                                                    pppppppuStack_c2 =
                                                         (undefined2 *******)
                                                         (*(int *)0xbe9c +
                                                         (-(uint)(0xffe7 < *(uint *)0xbe9a) & 0x1000
                                                         ));
                                                    pppppppuStack_8 = (undefined2 *******)0x0;
                                                    local_e6 = (undefined2 *******)
                                                               ((long)*(int *)0x150 * 0x18);
                                                    pppppppuStack_c = (undefined2 *******)local_e6;
                                                    puStack_12 = (undefined2 *)0x22b2;
                                                    puStack_14 = (undefined2 *)0xc6f7;
                                                    pppppppuStack_10 = pppppppuStack_c4;
                                                    local_e = pppppppuStack_c2;
                                                    iVar7 = FUN_3ab8_07e4();
                                                    if (iVar7 == 0) {
                                                      pppppppuStack_8 = (undefined2 *******)0x22b2;
                                                      func_0x0001bb8f();
                                                      *(undefined2 *)0xbc0 = 1;
                                                      *(undefined2 *)0xc08 = 1;
                                                      *(undefined2 *)0x11e = 0;
                                                      pppppppuStack_8 = (undefined2 *******)local_9a
                                                      ;
                                                      pppppppuStack_c = (undefined2 *******)local_fe
                                                      ;
                                                      local_e = local_100;
                                                      pppppppuStack_10 = (undefined2 *******)0x1bb4;
                                                      puVar16 = (undefined2 *)0x11f2;
                                                      puStack_12 = (undefined2 *)0xc727;
                                                      uVar12 = extraout_DX_00;
                                                      pppppppuStack_c =
                                                           (undefined2 *******)FUN_12c1_0061();
                                                      pppppppuStack_c4 =
                                                           (undefined2 *******)*(int *)0xbe90;
                                                      pppppppuStack_c2 =
                                                           (undefined2 *******)*(int *)0xbe92;
                                                      uVar17 = *(undefined2 *)0xbefc;
                                                      *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
                                                      *(undefined2 *)0xc0ae = uVar17;
                                                      pppppppuStack_8 = (undefined2 *******)0x0;
                                                      puStack_12 = (undefined2 *)0x11f2;
                                                      puStack_14 = (undefined2 *)0xc762;
                                                      local_e6._0_2_ = pppppppuStack_c;
                                                      local_e6._2_2_ = uVar12;
                                                      pppppppuStack_10 = pppppppuStack_c4;
                                                      local_e = pppppppuStack_c2;
                                                      iVar7 = FUN_3ab8_07e4();
                                                      if (iVar7 == 0) {
                                                        for (local_ce = (undefined2 ******)0x1;
                                                            ppppppuVar15 = (undefined2 ******)
                                                                           *(int *)0x150,
                                                            (int)local_ce <= *(int *)0x150;
                                                            local_ce = (undefined2 ******)
                                                                       ((int)local_ce + 1)) {
                                                          pppppppuStack_8 =
                                                               (undefined2 *******)local_ce;
                                                          pppppppuStack_c =
                                                               (undefined2 *******)0xca1f;
                                                          puVar29 = (undefined2 *)func_0x00000398();
                                                          puVar13 = (undefined2 *)puVar29;
                                                          puVar16 = auStack_be;
                                                          pppppppuStack_8 = unaff_DS;
                                                          for (iVar7 = 0xc;
                                                              unaff_DS = pppppppuStack_8, iVar7 != 0
                                                              ; iVar7 = iVar7 + -1) {
                                                            puVar4 = puVar16;
                                                            puVar16 = puVar16 + 1;
                                                            puVar3 = puVar13;
                                                            puVar13 = puVar13 + 1;
                                                            *puVar4 = *puVar3;
                                                          }
                                                          pppppppuStack_8 =
                                                               (undefined2 *******)local_9a;
                                                          pppppppuStack_c =
                                                               (undefined2 *******)ppppppuStack_ac;
                                                          local_e = (undefined2 *******)
                                                                    ppppppuStack_ae;
                                                          pppppppuStack_10 = (undefined2 *******)0x0
                                                          ;
                                                          puStack_12 = (undefined2 *)0xca46;
                                                          iVar7 = FUN_12c1_0061();
                                                          iVar7 = iVar7 + *(int *)0xbe90;
                                                          uVar17 = *(undefined2 *)0xbe92;
                                                          ppppppuStack_ae =
                                                               (undefined2 ******)
                                                               *(undefined2 *)0xc0ac;
                                                          ppppppuStack_ac =
                                                               (undefined2 ******)
                                                               *(undefined2 *)0xc0ae;
                                                          iStack_e0 = 0;
                                                          ppppppuVar15 = (undefined2 ******)0x11f2;
                                                          while (iVar10 = iStack_e0,
                                                                *(char *)(iVar7 + iStack_e0) != '\0'
                                                                ) {
                                                            pppppppuStack_8 =
                                                                 (undefined2 *******)0x0;
                                                            local_e = (undefined2 *******)0xc781;
                                                            pppppppuStack_c =
                                                                 (undefined2 *******)ppppppuVar15;
                                                            iVar8 = func_0x0002a752();
                                                            if (iVar8 == 1) {
                                                              ppppppuVar9 = (undefined2 ******)
                                                                            CONCAT11(*(undefined1 *)
                                                                                      (iVar7 + 
                                                  iVar10),*(undefined1 *)(iVar7 + iVar10 + 1));
                                                  ppppppuVar15 = (undefined2 ******)0x2a75;
                                                  pppppppuStack_c = (undefined2 *******)0xc7a6;
                                                  pppppppuStack_8 = (undefined2 *******)ppppppuVar9;
                                                  iVar10 = func_0x0002a9b0();
                                                  if ((iVar10 < 0x2901) || (0x2a5f < iVar10)) {
                                                    if (ppppppuVar9 == (undefined2 ******)0x853f) {
                                                      *(undefined1 *)*(undefined4 *)0xc0ac = 0x20;
                                                      goto LAB_3ab8_1c65;
                                                    }
                                                    if ((0x2a5f < iVar10) && (iVar10 < 0x2c00))
                                                    goto LAB_3ab8_1c75;
                                                    *(undefined1 *)*(undefined4 *)0xc0ac =
                                                         *(undefined1 *)(iVar7 + iStack_e0);
                                                    *(int *)0xc0ac = *(int *)0xc0ac + 1;
                                                    *(undefined1 *)*(undefined4 *)0xc0ac =
                                                         *(undefined1 *)(iStack_e0 + 1 + iVar7);
                                                    *(int *)0xc0ac = *(int *)0xc0ac + 1;
                                                    iStack_e0 = iStack_e0 + 2;
                                                  }
                                                  else {
                                                    iStack_124 = iVar10 + -0x2900;
                                                    if (0x100 < iStack_124) {
                                                      iStack_124 = iVar10 + -0x2980;
                                                    }
                                                    *(undefined1 *)*(undefined4 *)0xc0ac =
                                                         (undefined1)iStack_124;
LAB_3ab8_1c65:
                                                    *(int *)0xc0ac = *(int *)0xc0ac + 1;
LAB_3ab8_1c75:
                                                    iStack_e0 = iStack_e0 + 2;
                                                  }
                                                  }
                                                  else {
                                                    *(undefined1 *)*(undefined4 *)0xc0ac =
                                                         *(undefined1 *)(iVar7 + iStack_e0);
                                                    *(int *)0xc0ac = *(int *)0xc0ac + 1;
                                                    iStack_e0 = iStack_e0 + 1;
                                                    ppppppuVar15 = (undefined2 ******)0x2a75;
                                                  }
                                                  }
                                                  *(undefined1 *)*(undefined4 *)0xc0ac = 0;
                                                  *(int *)0xc0ac = *(int *)0xc0ac + 1;
                                                  pppppppuStack_8 =
                                                       (undefined2 *******)ppppppuStack_ac;
                                                  pppppppuStack_c = (undefined2 *******)0xbf48;
                                                  pppppppuStack_10 = (undefined2 *******)0xc87d;
                                                  local_e = (undefined2 *******)ppppppuVar15;
                                                  FUN_1885_0344();
                                                  pppppppuStack_8 = (undefined2 *******)0x18b3;
                                                  func_0x000297e6();
                                                  pppppppuStack_8 =
                                                       (undefined2 *******)(uint)bStack_aa;
                                                  pppppppuStack_c = (undefined2 *******)0xbf48;
                                                  local_e = (undefined2 *******)0x22b2;
                                                  pppppppuStack_10 = (undefined2 *******)0xc8b2;
                                                  func_0x00018eff();
                                                  uVar18 = (undefined1 *)0xfff9 < &pppppppuStack_c;
                                                  uVar19 = &stack0x0000 == (undefined1 *)0x6;
                                                  pppppppuStack_8 = (undefined2 *******)0x18b3;
                                                  func_0x000297e6();
                                                  pppppppuStack_8 = (undefined2 *******)0x22b2;
                                                  func_0x0002996b();
                                                  pppppppuStack_8 = (undefined2 *******)0x22b2;
                                                  FUN_28b3_1181();
                                                  if ((bool)uVar18 || (bool)uVar19) {
                                                    local_90 = local_90 + 1;
                                                  }
                                                  pppppppuStack_8 = (undefined2 *******)0x22b2;
                                                  func_0x000297e6();
                                                  pppppppuStack_8 = (undefined2 *******)0x22b2;
                                                  func_0x00029d78();
                                                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                                                  puStack_12 = (undefined2 *)0xc8f7;
                                                  func_0x000299d1();
                                                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                                                  puStack_12 = (undefined2 *)0xc900;
                                                  func_0x000297e6();
                                                  pppppppuStack_10 = (undefined2 *******)0x22b2;
                                                  puStack_12 = (undefined2 *)0xc905;
                                                  func_0x00029d78();
                                                  puStack_18 = (undefined2 *)0x22b2;
                                                  puStack_1a = (undefined2 *)0xc90f;
                                                  func_0x000299d1();
                                                  puStack_18 = (undefined2 *)0x22b2;
                                                  puStack_1a = (undefined2 *)0xc918;
                                                  func_0x000297e6();
                                                  puStack_18 = (undefined2 *)0x22b2;
                                                  puStack_1a = (undefined2 *)0xc91d;
                                                  func_0x00029d78();
                                                  puStack_20 = (undefined2 *)0x22b2;
                                                  puStack_22 = (uint *)0xc927;
                                                  func_0x000299d1();
                                                  puStack_20 = (undefined2 *)0x22b2;
                                                  puStack_22 = (uint *)0xc930;
                                                  func_0x000297e6();
                                                  puStack_20 = (undefined2 *)0x22b2;
                                                  puStack_22 = (uint *)0xc935;
                                                  func_0x00029d78();
                                                  puStack_28 = (undefined2 *)0x22b2;
                                                  puStack_2a = (undefined2 *)0xc93f;
                                                  func_0x000299d1();
                                                  puStack_28 = (undefined2 *)0x22b2;
                                                  puStack_2a = (undefined2 *)0xc944;
                                                  iVar7 = FUN_1def_043a();
                                                  if (iVar7 == 0) {
                                                    pppppppuStack_8 = (undefined2 *******)0x1bb4;
                                                    func_0x000297e6();
                                                    pppppppuStack_8 = (undefined2 *******)0x22b2;
                                                    func_0x00029bb5();
                                                    pppppppuStack_8 = (undefined2 *******)0x22b2;
                                                    func_0x00029983();
                                                    uStack_b2 = uStack_ba;
                                                    uStack_b0 = uStack_b8;
                                                  }
                                                  else {
                                                    pppppppuStack_8 =
                                                         (undefined2 *******)*(undefined2 *)0xaaea;
                                                    pppppppuStack_c =
                                                         (undefined2 *******)*(undefined2 *)0xaae6;
                                                    local_e = (undefined2 *******)
                                                              *(undefined2 *)0xaae4;
                                                    pppppppuStack_10 = (undefined2 *******)0x1bb4;
                                                    puStack_12 = (undefined2 *)0xc964;
                                                    func_0x000297e6();
                                                    puStack_18 = (undefined2 *)0x22b2;
                                                    puStack_1a = (undefined2 *)0xc96e;
                                                    func_0x000299d1();
                                                    puStack_18 = (undefined2 *)0x0;
                                                    puStack_1a = (undefined2 *)0x22b2;
                                                    puStack_1c = (undefined2 *)0xc976;
                                                    puVar16 = (undefined2 *)FUN_1def_05d1();
                                                    uStack_b6 = *puVar16;
                                                    uStack_b4 = puVar16[1];
                                                    pppppppuStack_8 =
                                                         (undefined2 *******)*(undefined2 *)0xaaea;
                                                    pppppppuStack_c =
                                                         (undefined2 *******)*(undefined2 *)0xaae6;
                                                    local_e = (undefined2 *******)*(int *)0xaae4;
                                                    pppppppuStack_10 = (undefined2 *******)0x1bb4;
                                                    puStack_12 = (undefined2 *)0xc9a1;
                                                    func_0x000297e6();
                                                    puStack_18 = (undefined2 *)0x22b2;
                                                    puStack_1a = (undefined2 *)0xc9ab;
                                                    func_0x000299d1();
                                                    puStack_18 = (undefined2 *)0x0;
                                                    puStack_1a = (undefined2 *)0x22b2;
                                                    puStack_1c = (undefined2 *)0xc9b3;
                                                    puVar16 = (undefined2 *)func_0x0001e558();
                                                    uStack_b2 = *puVar16;
                                                    uStack_b0 = puVar16[1];
                                                  }
                                                  pppppppuStack_8 = (undefined2 *******)local_ce;
                                                  puVar16 = (undefined2 *)0x0;
                                                  pppppppuStack_c = (undefined2 *******)0xc9f3;
                                                  puVar29 = (undefined2 *)func_0x00000398();
                                                  puVar14 = (undefined2 *)puVar29;
                                                  puVar13 = auStack_be;
                                                  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1)
                                                  {
                                                    puVar4 = puVar14;
                                                    puVar14 = puVar14 + 1;
                                                    puVar3 = puVar13;
                                                    puVar13 = puVar13 + 1;
                                                    *puVar4 = *puVar3;
                                                  }
                                                  }
                                                  while ((local_ce = ppppppuVar15, 0 < (int)local_ce
                                                         && (local_90 != 0))) {
                                                    pppppppuStack_8 = (undefined2 *******)local_ce;
                                                    pppppppuStack_c = (undefined2 *******)0xca8f;
                                                    puVar29 = (undefined2 *)func_0x00000398();
                                                    puVar13 = (undefined2 *)puVar29;
                                                    puVar16 = auStack_be;
                                                    pppppppuStack_8 = unaff_DS;
                                                    for (iVar7 = 0xc; unaff_DS = pppppppuStack_8,
                                                        iVar7 != 0; iVar7 = iVar7 + -1) {
                                                      puVar4 = puVar16;
                                                      puVar16 = puVar16 + 1;
                                                      puVar3 = puVar13;
                                                      puVar13 = puVar13 + 1;
                                                      *puVar4 = *puVar3;
                                                    }
                                                    pppppppuStack_8 =
                                                         (undefined2 *******)ppppppuStack_ac;
                                                    pppppppuStack_c = (undefined2 *******)0xbf48;
                                                    local_e = (undefined2 *******)0x0;
                                                    pppppppuStack_10 = (undefined2 *******)0xcab2;
                                                    FUN_1885_0344();
                                                    pppppppuStack_8 = (undefined2 *******)0xbf48;
                                                    puVar16 = (undefined2 *)0x22b2;
                                                    pppppppuStack_c = (undefined2 *******)0xcabe;
                                                    iVar7 = func_0x00024ce4();
                                                    if (iVar7 == 0) {
                                                      pppppppuStack_8 = (undefined2 *******)local_ce
                                                      ;
                                                      puVar16 = (undefined2 *)0x18b3;
                                                      pppppppuStack_c = (undefined2 *******)0xcacc;
                                                      func_0x000190c7();
                                                    }
                                                    ppppppuVar15 = (undefined2 ******)
                                                                   ((int)local_ce + -1);
                                                  }
                                                  *(undefined2 *)0xbc0 = 1;
                                                  local_e6 = (undefined2 *******)
                                                             ((long)*(int *)0x152 * 0xc);
                                                  pppppppuStack_c = (undefined2 *******)local_e6;
                                                  pppppppuStack_c4 =
                                                       (undefined2 *******)(*(uint *)0xbe82 + 0xc);
                                                  pppppppuStack_c2 =
                                                       (undefined2 *******)
                                                       (*(int *)0xbe84 +
                                                       (-(uint)(0xfff3 < *(uint *)0xbe82) & 0x1000))
                                                  ;
                                                  *(undefined2 *)0xc08 = 0;
                                                  pppppppuStack_8 = (undefined2 *******)0x0;
                                                  puStack_14 = (undefined2 *)0xcb1a;
                                                  puStack_12 = puVar16;
                                                  pppppppuStack_10 = pppppppuStack_c4;
                                                  local_e = pppppppuStack_c2;
                                                  iVar7 = FUN_3ab8_07e4();
                                                  if (iVar7 == 0) {
                                                    if (local_110 == '\0') {
LAB_3ab8_1fda:
                                                      pppppppuStack_8 =
                                                           (undefined2 *******)*(undefined2 *)0xd12;
                                                      uVar17 = 0x22b2;
                                                      pppppppuStack_c = (undefined2 *******)0xcb63;
                                                      iVar7 = func_0x000276be();
                                                      if (iVar7 == 0) {
                                                        *(undefined2 *)0xd12 = 0;
                                                      }
                                                      else {
                                                        pppppppuStack_8 = (undefined2 *******)0x78c9
                                                        ;
                                                        uVar17 = 0x11f2;
                                                        pppppppuStack_c = (undefined2 *******)0xcb71
                                                        ;
                                                        FUN_13bf_0a03();
                                                      }
                                                      if (*(int *)0x1b3e - *(int *)0xa58 != iVar6) {
                                                        pppppppuStack_8 =
                                                             (undefined2 *******)
                                                             *(undefined2 *)0xab06;
                                                        pppppppuStack_c =
                                                             (undefined2 *******)
                                                             *(undefined2 *)0xab06;
                                                        local_e = (undefined2 *******)*(int *)0xab04
                                                        ;
                                                        puStack_12 = (undefined2 *)0xcba1;
                                                        pppppppuStack_10 =
                                                             (undefined2 *******)uVar17;
                                                        FUN_28b3_0d8b();
                                                        pppppppuStack_10 =
                                                             (undefined2 *******)0x22b2;
                                                        puStack_12 = (undefined2 *)0xcba9;
                                                        FUN_28b3_0d8b();
                                                        pppppppuStack_10 =
                                                             (undefined2 *******)0x22b2;
                                                        puStack_12 = (undefined2 *)0xcbae;
                                                        FUN_28b3_1172();
                                                        puStack_14 = (undefined2 *)0x22b2;
                                                        puStack_16 = (undefined1 *)0xcbb8;
                                                        func_0x00029983();
                                                        puStack_14 = (undefined2 *)0x22b2;
                                                        puStack_16 = (undefined1 *)0xcbbc;
                                                        FUN_3ab8_03d8();
                                                      }
                                                      pppppppuStack_8 = (undefined2 *******)0x0;
                                                      pppppppuStack_c = (undefined2 *******)0xcbc7;
                                                      func_0x0000daa6();
                                                      return 1;
                                                    }
                                                    pppppppuStack_c4 =
                                                         (undefined2 *******)*(int *)0xb490;
                                                    pppppppuStack_c2 =
                                                         (undefined2 *******)*(int *)0xb492;
                                                    pppppppuStack_8 = (undefined2 *******)0x0;
                                                    local_e6._0_2_ = (undefined2 *******)0x900;
                                                    local_e6._2_2_ = 0;
                                                    pppppppuStack_c = (undefined2 *******)0x900;
                                                    puStack_14 = (undefined2 *)0xcb50;
                                                    puStack_12 = puVar16;
                                                    pppppppuStack_10 = pppppppuStack_c4;
                                                    local_e = pppppppuStack_c2;
                                                    iVar7 = FUN_3ab8_07e4();
                                                    if (iVar7 == 0) goto LAB_3ab8_1fda;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                                local_98 = 0x1f;
                                                goto LAB_3ab8_125f;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    local_98 = 0x15;
                    goto LAB_3ab8_125f;
                  }
                }
              }
            }
          }
        }
      }
    }
    local_98 = 0xb;
  }
  else {
LAB_3ab8_1432:
    local_98 = 10;
  }
LAB_3ab8_125f:
  if (*(int *)0xd12 != 0) {
    pppppppuStack_8 = (undefined2 *******)*(undefined2 *)0xd12;
    pppppppuStack_c = (undefined2 *******)0xbdef;
    func_0x000276be();
    *(undefined2 *)0xd12 = 0;
  }
  return 0;
}



/* 3ab8:2051  FUN_3ab8_2051  1378 bytes, 1 callers */

int __cdecl16far
FUN_3ab8_2051(byte param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6,
             int param_7,int param_8,undefined2 param_9,int param_10)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_a8 [50];
  int local_44;
  undefined2 local_42;
  int local_40;
  int local_3e;
  undefined1 local_3a;
  int local_38;
  undefined2 local_30;
  undefined2 local_2e;
  int local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  int local_26;
  int *local_24;
  int local_22;
  int local_20;
  int local_1e;
  int local_1c;
  int local_1a;
  int local_18;
  undefined2 local_16;
  int local_14;
  int iStack_12;
  int local_10;
  int iStack_e;
  int *local_c;
  int **local_a;
  int *piStack_8;
  int local_6;
  
  local_6 = 0xcbdc;
  FUN_21f2_0ebc();
  uVar1 = *(undefined2 *)0xc32;
  local_2a = *(undefined2 *)0xc48;
  local_28 = *(undefined2 *)0xc4a;
  local_30 = *(undefined2 *)0xc4c;
  local_2e = *(undefined2 *)0xc4e;
  local_3e = 0;
  for (local_38 = 0; local_38 < 0x100; local_38 = local_38 + 1) {
    *(undefined1 *)(local_38 + -0x4488) = 1;
    *(undefined1 *)(local_38 + -0x4b5a) = 1;
  }
  local_6 = 0;
  piStack_8 = (int *)0x22b2;
  local_a = (int **)0xcc2d;
  func_0x0000daa6();
  local_6 = *(undefined2 *)0xcb4;
  piStack_8 = (int *)*(undefined2 *)0xcb2;
  local_a = (int **)0x0;
  local_c = (int *)0x3;
  iStack_e = 0x885;
  local_10 = 0xcc42;
  func_0x0000f2cb();
  local_6 = *(undefined2 *)0x1b40;
  piStack_8 = (int *)(*(int *)0x1b3e + -1);
  local_a = (int **)(*(int *)0xa5e + 1);
  local_c = (int *)(*(int *)0xa5c + 1);
  iStack_e = 0xdef;
  uVar4 = 0x885;
  local_10 = 0xcc5d;
  func_0x0000a76b();
  for (local_38 = 2; local_a = (int **)uVar4, local_38 <= *(int *)0x1b42 + -1;
      local_38 = local_38 + 1) {
    local_6 = local_38;
    piStack_8 = (int *)0x11;
    local_c = (int *)0xcc73;
    FUN_1000_0599();
    local_6 = 0xdef;
    uVar4 = 0xdef;
    piStack_8 = (int *)0xcc7a;
    func_0x00010526();
  }
  local_6 = *(undefined2 *)0x1b42;
  piStack_8 = (int *)0x1;
  local_c = (int *)0xcc93;
  FUN_1000_0599();
  local_6 = 0xdef;
  piStack_8 = (int *)0xcc9a;
  func_0x00010526();
  local_6 = 1;
  piStack_8 = (int *)0x1;
  local_a = (int **)0xdef;
  local_c = (int *)0xcca4;
  FUN_1000_0599();
  local_6 = 0;
  piStack_8 = (int *)0x0;
  local_a = (int **)0x1;
  local_c = (int *)0x7;
  iStack_e = *(undefined2 *)0x1b40;
  local_10 = *(undefined2 *)0x1b3e;
  iStack_12 = *(undefined2 *)0xa5e;
  local_14 = 0;
  local_16 = 0xdef;
  local_18 = 0xccc8;
  func_0x0000f350();
  local_6 = 0;
  piStack_8 = (int *)0x0;
  local_a = (int **)0x0;
  local_c = (int *)0x7;
  iStack_e = *(undefined2 *)0x1b40;
  local_10 = *(undefined2 *)0xa58;
  iStack_12 = *(undefined2 *)0xa5e;
  local_14 = *(undefined2 *)0xa58;
  local_16 = 0xdef;
  local_18 = 0xcced;
  func_0x0000f350();
  local_6 = 0;
  piStack_8 = (int *)0x0;
  local_a = (int **)0x0;
  local_c = (int *)0x7;
  iStack_e = *(int *)0xa5a;
  local_10 = *(int *)0xa58;
  iStack_12 = *(int *)0xa5a;
  local_14 = 0;
  local_16 = 0xdef;
  uVar4 = 0xdef;
  local_18 = -0x32f5;
  func_0x0000f350();
  *(undefined2 *)0xa60 = *(undefined2 *)0x1b40;
  for (local_20 = 0; local_20 <= (int)(param_1 - 1); local_20 = local_20 + 1) {
    for (local_1c = 0; local_1c <= (int)(param_1 - 1); local_1c = local_1c + 1) {
      local_22 = (uint)param_1 * local_20 + param_7 + local_1c;
      if (param_8 < local_22) goto LAB_3ab8_2547;
      local_42 = 7;
      if (*(byte *)(param_10 + local_22 * 0xf + 0xe) % 10 != 0) {
        local_42 = 4;
      }
      local_6 = local_22 * 0xf + param_10;
      piStack_8 = (int *)0xbf48;
      local_c = (int *)0xcfe5;
      local_a = (int **)uVar4;
      func_0x00024c86();
      local_40 = 0;
      local_6 = 0xbf48;
      piStack_8 = (int *)0x22b2;
      local_a = (int **)0xcff5;
      iVar3 = func_0x00024ce4();
      local_44 = iVar3 + -1;
      if (*(char *)(iVar3 + -0x40b9) == 'F') {
        local_40 = 1;
        local_42 = 5;
      }
      if (*(char *)(iVar3 + -0x40b9) == 'K') {
        local_40 = 2;
        local_42 = 6;
      }
      local_2c = param_3 * local_20 + 2;
      local_6 = 0;
      piStack_8 = (int *)local_42;
      local_24 = (int *)(param_2 * local_1c + 0x11);
      iStack_e = local_22 * 0xf + param_10;
      local_10 = 0x22b2;
      iStack_12 = 0xd04c;
      local_c = local_24;
      local_a = (int **)local_2c;
      FUN_1000_02b5();
      local_10 = param_4 * local_1c + *(int *)0xa58;
      local_1a = param_5 * local_20 + *(int *)0xa5e;
      local_18 = local_10 + param_4;
      local_1e = local_1a + param_5;
      local_6 = 0xdef;
      piStack_8 = (int *)0xd07c;
      func_0x0000a799();
      local_6 = 0;
      piStack_8 = (int *)0x0;
      local_a = (int **)0x1;
      local_c = (int *)0x7;
      iStack_e = local_1e;
      local_10 = local_18;
      iStack_12 = local_1a;
      local_14 = local_18;
      local_16 = 0x885;
      uVar4 = 0xdef;
      local_18 = -0x2f67;
      func_0x0000f350();
      if ((local_3e != -1) && (0 < local_22)) {
        local_6 = 0xffff;
        piStack_8 = (int *)0x4;
        local_2c = local_2c + 2;
        local_24 = (int *)((int)local_24 + 3);
        iStack_e = 0x944;
        local_10 = 0xdef;
        uVar4 = 0xdef;
        iStack_12 = 0xcd3b;
        local_c = local_24;
        local_a = (int **)local_2c;
        FUN_1000_02b5();
        if (local_40 == 0) {
          local_6 = param_10;
          piStack_8 = (int *)param_9;
          local_a = (int **)local_22;
          local_c = (int *)0xdef;
          iStack_e = 0xcde8;
          local_26 = FUN_3ab8_11a2();
        }
        else {
          local_6 = param_9;
          piStack_8 = (int *)0xbf48;
          local_a = (int **)0xdef;
          local_c = (int *)0xcd53;
          func_0x00024c86();
          local_6 = 0xbf48;
          piStack_8 = (int *)0x22b2;
          local_a = (int **)0xcd5e;
          iVar3 = func_0x00024ce4();
          local_44 = iVar3 + -1;
          local_a = (int **)0x22b2;
          if (*(char *)(iVar3 + -0x40b9) == '\\') {
            piStack_8 = (int *)0xbf48;
            local_a = (int **)0x22b2;
            uVar5 = 0x2a75;
            local_c = (int *)0xcd76;
            local_6 = local_44;
            iVar3 = func_0x0002aa38();
            local_a = (int **)uVar5;
            if (iVar3 != 0) goto LAB_3ab8_21fc;
          }
          else {
LAB_3ab8_21fc:
            local_6 = 0x78cc;
            piStack_8 = (int *)0xbf48;
            uVar5 = 0x22b2;
            local_c = (int *)0xcd89;
            FUN_21f2_2d26();
          }
          local_6 = local_22 * 0xf + param_10;
          piStack_8 = (int *)0xbf48;
          uVar4 = 0x22b2;
          local_c = (int *)0xcd9e;
          local_a = (int **)uVar5;
          FUN_21f2_2d26();
          if (local_40 == 1) {
            local_6 = 1;
            pcVar2 = (code *)swi(0x3f);
            local_26 = (*pcVar2)();
          }
          else {
            local_6 = 0xbf48;
            piStack_8 = local_a8;
            local_a = (int **)0x22b2;
            uVar4 = 0x22b2;
            local_c = (int *)0xcdc0;
            func_0x00024c86();
            local_6 = param_6;
            piStack_8 = &local_16;
            local_a = &local_c;
            local_c = local_a8;
            iStack_e = 0x22b2;
            local_10 = 0xcdd6;
            local_26 = FUN_3ab8_0ba2();
          }
        }
        local_6 = 0;
        piStack_8 = (int *)0x4;
        local_a = (int **)local_2c;
        local_c = local_24;
        iStack_e = 0x950;
        iStack_12 = -0x31fc;
        local_10 = uVar4;
        FUN_1000_02b5();
        if (local_26 == 0) {
          local_6 = 0;
          piStack_8 = (int *)0xdef;
          local_a = (int **)0xcf3d;
          func_0x0000daa6();
          local_6 = *(undefined2 *)0xcb4;
          piStack_8 = (int *)*(undefined2 *)0xcb2;
          local_a = (int **)0x0;
          local_c = (int *)0x3;
          iStack_e = 0x885;
          local_10 = 0xcf52;
          func_0x0000f2cb();
          local_6 = 0xffff;
          piStack_8 = (int *)0x6;
          local_a = (int **)local_2c;
          local_c = local_24;
          iStack_e = 0x37a;
          local_10 = 0xdef;
          uVar4 = 0xdef;
          iStack_12 = -0x3094;
          FUN_1000_02b5();
          *(char *)(param_10 + local_22 * 0xf + 0xe) =
               *(byte *)(param_10 + local_22 * 0xf + 0xe) % 10 + 10;
        }
        else {
          local_a8[0] = -0x80 - (param_4 * local_1c - *(int *)0xa5c);
          local_6 = 0xdef;
          piStack_8 = (int *)0xce2c;
          FUN_28b3_0d8b();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xce35;
          func_0x00029bb5();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xce48;
          FUN_28b3_0d8b();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xce5c;
          FUN_28b3_0d8b();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xce61;
          FUN_28b3_1172();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xce6a;
          func_0x00029b6d();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xce73;
          func_0x0002996b();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xce78;
          FUN_28b3_1172();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xce81;
          func_0x00029983();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xce9f;
          FUN_28b3_0d8b();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xcea8;
          func_0x00029bb5();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xceb1;
          func_0x00029b85();
          local_6 = 0x22b2;
          piStack_8 = (int *)0xceba;
          func_0x00029983();
          local_6 = 0;
          piStack_8 = (int *)0x22b2;
          local_a = (int **)0xcec2;
          func_0x0000daa6();
          local_6 = *(undefined2 *)0xcb4;
          piStack_8 = (int *)*(undefined2 *)0xcb2;
          local_a = (int **)0x0;
          local_c = (int *)0x3;
          iStack_e = 0x885;
          local_10 = -0x3129;
          func_0x0000f2cb();
          local_6 = local_1e + -1;
          piStack_8 = (int *)(local_18 + -1);
          local_a = (int **)(local_1a + 1);
          local_c = (int *)(local_10 + 1);
          iStack_e = 0xdef;
          local_10 = -0x310d;
          func_0x0000f1d8();
          local_3a = *(undefined1 *)0x74;
          if (local_40 == 2) {
            *(undefined1 *)0x74 = 10;
          }
          local_6 = 1;
          piStack_8 = (int *)0xdef;
          uVar4 = 0x11f2;
          local_a = (int **)0xcf10;
          local_3e = func_0x0001470b();
          *(undefined1 *)0x74 = local_3a;
          if (local_40 == 2) {
            local_6 = local_14;
            piStack_8 = (int *)local_16;
            iStack_e = 0x11f2;
            local_10 = -0x30d0;
            FUN_3ab8_093a();
          }
        }
      }
    }
  }
LAB_3ab8_2547:
  if (*(char *)0xb782 == '\0') {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    uVar5 = *(undefined2 *)0xa5a;
  }
  else {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa6e;
    uVar5 = *(undefined2 *)0x1b40;
  }
  *(undefined2 *)0xa60 = uVar5;
  local_6 = 0;
  local_a = (int **)0xd0ed;
  piStack_8 = (int *)uVar4;
  func_0x0000daa6();
  local_6 = *(undefined2 *)0xcb4;
  piStack_8 = (int *)*(undefined2 *)0xcb2;
  local_a = (int **)0x0;
  local_c = (int *)0x3;
  iStack_e = 0x885;
  local_10 = 0xd102;
  func_0x0000f2cb();
  local_6 = 0xdef;
  piStack_8 = (int *)0xd10a;
  func_0x0000a799();
  *(undefined2 *)0xc30 = local_6;
  *(undefined2 *)0xc32 = uVar1;
  *(undefined2 *)0xc48 = local_2a;
  *(undefined2 *)0xc4a = local_28;
  *(undefined2 *)0xc4c = local_30;
  *(undefined2 *)0xc4e = local_2e;
  return local_3e;
}



/* 3ab8:25b9  FUN_3ab8_25b9  1166 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_25b9(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
             undefined2 param_8,int param_9,undefined2 param_10,undefined2 param_11,
             undefined2 param_12,int param_13,int *param_14,undefined2 *param_15)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int local_90 [50];
  int local_2c;
  undefined2 local_2a;
  int local_28;
  undefined2 local_26;
  undefined1 local_24;
  int local_22;
  int local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  int local_18;
  undefined2 local_16;
  undefined2 local_14;
  int local_12;
  int local_10;
  int local_e;
  int *local_c;
  int *local_a;
  int *local_8;
  int local_6;
  
  local_6 = 0xd144;
  FUN_21f2_0ebc();
  uVar3 = *(undefined2 *)0xc32;
  local_16 = *(undefined2 *)0xc48;
  local_14 = *(undefined2 *)0xc4a;
  local_1c = *(undefined2 *)0xc4c;
  local_1a = *(undefined2 *)0xc4e;
  *(undefined2 *)0xa60 = *(undefined2 *)0x1b40;
  local_22 = 0;
  do {
    *(undefined1 *)(local_22 + -0x4488) = 1;
    *(undefined1 *)(local_22 + -0x4b5a) = 1;
    local_22 = local_22 + 1;
  } while (local_22 < 0x100);
  local_1e = param_7 * param_4 + param_3;
  local_c = (int *)(param_9 * param_4 + *(int *)0xa5e);
  local_e = (int)local_c + param_9;
  local_6 = 0;
  local_8 = (int *)0x22b2;
  local_a = (int *)0xd1ca;
  func_0x0000daa6();
  local_6 = *(undefined2 *)0xcb4;
  local_8 = (int *)*(undefined2 *)0xcb2;
  local_a = (int *)0x0;
  local_c = (int *)0x3;
  local_e = 0x885;
  local_10 = 0xd1df;
  func_0x0000f2cb();
  local_6 = 0xdef;
  local_8 = (int *)0xd1e7;
  func_0x0000a799();
  local_6 = local_e + -1;
  local_8 = (int *)((int)local_a + -1);
  iVar2 = (int)local_c + 1;
  local_c = local_a;
  local_e = 0x885;
  local_10 = 0xd200;
  local_a = (int *)iVar2;
  func_0x0000a76b();
  local_2a = 7;
  if (*(byte *)(param_13 + param_2 * 0xf + 0xe) % 10 != 0) {
    local_2a = 4;
  }
  local_6 = param_2 * 0xf + param_13;
  local_8 = (int *)0xbf48;
  local_a = (int *)0x885;
  local_c = (int *)0xd237;
  func_0x00024c86();
  local_28 = 0;
  local_6 = 0xbf48;
  local_8 = (int *)0x22b2;
  local_a = (int *)0xd247;
  iVar2 = func_0x00024ce4();
  local_2c = iVar2 + -1;
  if (*(char *)(iVar2 + -0x40b9) == 'F') {
    local_2a = 5;
    local_28 = 1;
  }
  if (*(char *)(iVar2 + -0x40b9) == 'K') {
    local_2a = 6;
    local_28 = 2;
  }
  local_18 = param_6 * param_4 + 2;
  local_6 = 0;
  local_8 = (int *)local_2a;
  local_c = (int *)(param_5 * param_3 + 0x11);
  local_e = param_2 * 0xf + param_13;
  local_10 = 0x22b2;
  local_12 = 0xd29e;
  local_a = (int *)local_18;
  FUN_1000_02b5();
  local_6 = 0xdef;
  local_8 = (int *)0xd2a6;
  func_0x0000a799();
  local_6 = 0;
  local_8 = (int *)0x0;
  local_a = (int *)0x1;
  local_c = (int *)0x7;
  local_10 = 1;
  local_12 = 7;
  local_14 = 0;
  local_16 = 0x885;
  local_18 = -0x2d3d;
  func_0x0000f350();
  if (param_1 != 0) {
    local_10 = 1;
    goto LAB_3ab8_2849;
  }
  local_c = (int *)(local_12 + 3);
  local_18 = local_18 + 2;
  local_6 = 0xffff;
  local_8 = (int *)0x4;
  local_e = 0x944;
  local_10 = 0xdef;
  iVar2 = 0xdef;
  local_12 = 0xd2f8;
  local_a = (int *)local_18;
  FUN_1000_02b5();
  if (local_28 == 0) {
    local_6 = param_13;
    local_8 = (int *)param_12;
    local_a = (int *)param_2;
    local_c = (int *)0xdef;
    local_e = 0xd3a3;
    FUN_3ab8_11a2();
  }
  else {
    local_6 = param_12;
    local_8 = (int *)0xbf48;
    local_a = (int *)0xdef;
    local_c = (int *)0xd310;
    func_0x00024c86();
    local_6 = 0xbf48;
    local_8 = (int *)0x22b2;
    local_a = (int *)0xd31b;
    iVar2 = func_0x00024ce4();
    local_2c = iVar2 + -1;
    local_a = (int *)0x22b2;
    if (*(char *)(iVar2 + -0x40b9) == '\\') {
      local_8 = (int *)0xbf48;
      local_a = (int *)0x22b2;
      uVar4 = 0x2a75;
      local_c = (int *)0xd333;
      local_6 = local_2c;
      iVar2 = func_0x0002aa38();
      local_a = (int *)uVar4;
      if (iVar2 != 0) goto LAB_3ab8_27b9;
    }
    else {
LAB_3ab8_27b9:
      local_6 = 0x78da;
      local_8 = (int *)0xbf48;
      uVar4 = 0x22b2;
      local_c = (int *)0xd346;
      FUN_21f2_2d26();
    }
    local_6 = param_2 * 0xf + param_13;
    local_8 = (int *)0xbf48;
    iVar2 = 0x22b2;
    local_c = (int *)0xd35b;
    local_a = (int *)uVar4;
    FUN_21f2_2d26();
    if (local_28 == 1) {
      local_6 = 1;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    else {
      local_6 = 0xbf48;
      local_8 = local_90;
      local_a = (int *)0x22b2;
      iVar2 = 0x22b2;
      local_c = (int *)0xd37d;
      func_0x00024c86();
      local_6 = param_10;
      local_8 = param_15;
      local_a = param_14;
      local_c = local_90;
      local_e = 0x22b2;
      local_10 = 0xd391;
      FUN_3ab8_0ba2();
    }
  }
  local_6 = 0;
  local_8 = (int *)0x4;
  local_a = (int *)local_18;
  local_c = (int *)local_12;
  local_e = 0x950;
  local_12 = -0x2c41;
  local_10 = iVar2;
  FUN_1000_02b5();
LAB_3ab8_2849:
  if (local_10 == 0) {
    local_6 = 0;
    local_8 = (int *)0xdef;
    local_a = (int *)0xd510;
    func_0x0000daa6();
    local_6 = *(undefined2 *)0xcb4;
    local_8 = (int *)*(undefined2 *)0xcb2;
    local_a = (int *)0x0;
    local_c = (int *)0x3;
    local_e = 0x885;
    local_10 = 0xd525;
    func_0x0000f2cb();
    local_6 = 0xffff;
    local_8 = (int *)0x6;
    local_a = (int *)local_18;
    local_c = (int *)local_12;
    local_e = 0x37a;
    local_10 = 0xdef;
    uVar4 = 0xdef;
    local_12 = -0x2ac1;
    FUN_1000_02b5();
    *(char *)(param_13 + param_2 * 0xf + 0xe) = *(byte *)(param_13 + param_2 * 0xf + 0xe) % 10 + 10;
  }
  else {
    local_90[0] = param_9 + -0x14;
    local_6 = 0xdef;
    local_8 = (int *)0xd3e5;
    FUN_28b3_0d8b();
    local_6 = 0x22b2;
    local_8 = (int *)0xd3f9;
    FUN_28b3_0d8b();
    local_6 = 0x22b2;
    local_8 = (int *)0xd3fe;
    FUN_28b3_1172();
    local_6 = 0x22b2;
    local_8 = (int *)0xd412;
    func_0x00029b6d();
    local_6 = 0x22b2;
    local_8 = (int *)0xd41b;
    func_0x00029983();
    local_6 = 0x22b2;
    local_8 = (int *)0xd437;
    FUN_28b3_0d8b();
    local_6 = 0x22b2;
    local_8 = (int *)0xd43f;
    func_0x00029bb5();
    local_6 = 0x22b2;
    local_8 = (int *)0xd448;
    func_0x00029b85();
    local_6 = 0x22b2;
    local_8 = (int *)0xd451;
    func_0x00029983();
    local_6 = 0x22b2;
    local_8 = (int *)0xd46f;
    FUN_28b3_0d8b();
    local_6 = 0x22b2;
    local_8 = (int *)0xd477;
    func_0x00029bb5();
    local_6 = 0x22b2;
    local_8 = (int *)0xd480;
    func_0x00029b85();
    local_6 = 0x22b2;
    local_8 = (int *)0xd489;
    func_0x00029983();
    local_6 = 0;
    local_8 = (int *)0x22b2;
    local_a = (int *)0xd491;
    func_0x0000daa6();
    local_6 = *(undefined2 *)0xcb4;
    local_8 = (int *)*(undefined2 *)0xcb2;
    local_a = (int *)0x0;
    local_c = (int *)0x3;
    local_e = 0x885;
    local_10 = 0xd4a6;
    func_0x0000f2cb();
    local_6 = local_e + -1;
    local_8 = (int *)((int)local_a + -1);
    iVar2 = (int)local_c + 1;
    local_c = local_a;
    local_e = 0xdef;
    local_10 = 0xd4c2;
    local_a = (int *)iVar2;
    func_0x0000f1d8();
    local_24 = *(undefined1 *)0x74;
    if (local_28 == 2) {
      *(undefined1 *)0x74 = 10;
    }
    local_6 = 1;
    local_8 = (int *)0xdef;
    uVar4 = 0x11f2;
    local_a = (int *)0xd4df;
    local_26 = func_0x0001470b();
    *(undefined1 *)0x74 = local_24;
    if (local_28 == 2) {
      local_6 = param_15[1];
      local_8 = (int *)*param_15;
      local_a = (int *)param_14[1];
      local_c = (int *)*param_14;
      local_e = 0x11f2;
      local_10 = 0xd503;
      FUN_3ab8_093a();
    }
  }
  local_6 = 0;
  local_a = (int *)0xd563;
  local_8 = (int *)uVar4;
  func_0x0000daa6();
  local_6 = *(undefined2 *)0xcb4;
  local_8 = (int *)*(undefined2 *)0xcb2;
  local_a = (int *)0x0;
  local_c = (int *)0x3;
  local_e = 0x885;
  local_10 = 0xd578;
  func_0x0000f2cb();
  local_6 = 0xdef;
  local_8 = (int *)0xd580;
  func_0x0000a799();
  *(undefined2 *)0xc30 = local_6;
  *(undefined2 *)0xc32 = uVar3;
  *(undefined2 *)0xc48 = local_16;
  *(undefined2 *)0xc4a = local_14;
  *(undefined2 *)0xc4c = local_1c;
  *(undefined2 *)0xc4e = local_1a;
  if (*(char *)0xb782 == '\0') {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    uVar3 = *(undefined2 *)0xa5a;
  }
  else {
    *(undefined2 *)0xa5c = *(undefined2 *)0xa6e;
    uVar3 = *(undefined2 *)0x1b40;
  }
  *(undefined2 *)0xa60 = uVar3;
  return local_10;
}



/* 3ab8:2a4d  FUN_3ab8_2a4d  427 bytes, 1 callers */

int ** __cdecl16far FUN_3ab8_2a4d(int param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 *local_14;
  undefined2 *local_12;
  undefined2 *local_10;
  undefined2 *local_e;
  undefined2 *local_c;
  undefined2 **local_a;
  undefined2 **local_8;
  int *local_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  local_6 = (int *)0xd5d8;
  FUN_21f2_0ebc();
  local_4 = (int *)0x1;
  local_6 = (int *)0x1;
  local_8 = (undefined2 **)0x22b2;
  local_a = (undefined2 **)0xd5e2;
  FUN_1000_0599();
  local_4 = (int *)0xdef;
  local_6 = (int *)0xd5e9;
  func_0x00010526();
  local_4 = (int *)0x1;
  local_6 = (int *)0x1;
  local_8 = (undefined2 **)0xdef;
  local_a = (undefined2 **)0xd5f3;
  FUN_1000_0599();
  local_4 = (int *)0x0;
  local_6 = (int *)0x6;
  local_8 = (undefined2 **)0x1;
  local_a = (undefined2 **)0x24;
  local_c = (undefined2 *)0x958;
  local_e = (undefined2 *)0xdef;
  local_10 = (int *)0xd60d;
  FUN_1000_02b5();
  uVar2 = 0xdef;
  while( true ) {
    local_4 = (int *)&local_14;
    local_6 = (int *)&local_12;
    local_8 = &local_6;
    local_a = &local_4;
    local_e = (int *)0xd625;
    local_c = (undefined2 *)uVar2;
    func_0x0000dcbd();
    if (((undefined2 **)local_4 == (undefined2 **)0x0) &&
       ((undefined2 **)local_6 == (undefined2 **)0x0)) break;
    if ((local_e != local_12) || (uVar2 = 0x885, local_10 != local_14)) {
      local_8 = (undefined2 **)0x1;
      local_a = (undefined2 **)local_12;
      local_c = local_14;
      uVar1 = (int)local_12 - param_1 >> 0xf;
      if (((int)(((int)local_12 - param_1 ^ uVar1) - uVar1) < 4) &&
         (uVar1 = (int)local_14 - param_2 >> 0xf,
         (int)(((int)local_14 - param_2 ^ uVar1) - uVar1) < 4)) {
        local_4 = (int *)0x885;
        uVar2 = 0x1b6e;
        local_6 = (int *)0xd679;
        FUN_1885_2ec3();
      }
      else {
        if ((int)local_12 < param_1 + -4) {
          local_a = (undefined2 **)(param_1 + -8);
          local_c = (undefined2 *)(param_2 + -8);
        }
        else if ((int)local_14 < param_2 + -4) {
          local_a = (undefined2 **)(param_1 + -0x10);
          local_c = (undefined2 *)(param_2 + -0x10);
        }
        local_4 = local_c;
        local_6 = (int *)local_a;
        local_8 = (undefined2 **)param_2;
        local_a = (undefined2 **)param_1;
        local_c = (undefined2 *)0x2;
        local_e = (undefined2 *)0x885;
        uVar3 = 0x1bb4;
        local_10 = (undefined2 *)0xd6da;
        FUN_1885_3c19();
        if (local_8 == (undefined2 **)0x0) {
          local_4 = (int *)0xffff;
          local_6 = (int *)0x2;
          local_8 = (undefined2 **)local_c;
          local_c = (undefined2 *)param_2;
          local_e = (undefined2 *)param_1;
          local_10 = (undefined2 *)0x1bb4;
          local_12 = (undefined2 *)0xd6fc;
          func_0x0001b911();
          local_4 = (int *)0xffff;
          local_6 = (int *)0x2;
          local_8 = (undefined2 **)param_2;
          local_e = (undefined2 *)param_1;
          local_10 = (undefined2 *)0x1b6e;
          uVar3 = 0x1b6e;
          local_12 = (int *)0xd718;
          func_0x0001b911();
        }
        uVar2 = uVar3;
        if ((local_8 == (undefined2 **)0xffff) && (0x10 < param_2 - (int)local_14)) {
          local_4 = (int *)0xffff;
          local_6 = (int *)0x2;
          local_8 = (undefined2 **)local_c;
          local_c = (undefined2 *)param_2;
          local_e = (undefined2 *)param_1;
          uVar2 = 0x1b6e;
          local_12 = (int *)0xd74a;
          local_10 = (undefined2 *)uVar3;
          func_0x0001b911();
        }
        local_10 = local_14;
      }
    }
  }
  local_4 = (int *)0x885;
  local_6 = (int *)0xd761;
  FUN_1885_2ec3();
  *param_3 = (int)local_12;
  *param_4 = (int)local_14;
  return local_8;
}



/* 3ab8:2bf8  FUN_3ab8_2bf8  533 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_2bf8(int param_1,int param_2,undefined1 *param_3,int param_4,char *param_5,int *param_6,
             uint *param_7,char *param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_b2;
  char local_ac [160];
  int local_c;
  char *local_a;
  char *local_8;
  char *local_6;
  
  local_6 = (char *)0xd783;
  FUN_21f2_0ebc();
  local_6 = (char *)param_2;
  local_8 = (char *)0x22b2;
  local_a = (char *)0xd78c;
  uVar1 = func_0x00024ce4();
  if (uVar1 < 0x3c) {
    local_b2 = 0;
    local_8 = (char *)0x0;
    local_a = (char *)0x22b2;
    while( true ) {
      local_6 = local_8;
      local_8 = (char *)param_2;
      local_c = 0xd7af;
      iVar2 = func_0x0002aa38();
      if (iVar2 != 0) break;
      pcVar4 = (char *)((int)local_8 + param_2);
      if (((*pcVar4 != ' ') || (pcVar4[1] != ' ')) || (pcVar4[2] != ' ')) {
        if (*pcVar4 == '|') {
          if ((pcVar4[1] == ' ') && (pcVar4[2] == ' ')) goto LAB_3ab8_2c93;
          if ((pcVar4[1] != '-') || (pcVar4[2] != '<')) goto LAB_3ab8_2cc4;
        }
        else {
LAB_3ab8_2cc4:
          if (((*pcVar4 != -0x5b) || (pcVar4[1] != '-')) || (pcVar4[2] != '<')) break;
        }
        local_8 = (char *)((int)local_8 + 3);
        break;
      }
LAB_3ab8_2c93:
      local_8 = (char *)((int)local_8 + 3);
      local_a = (char *)0x2a75;
    }
    local_6 = (char *)((int)local_8 + param_2);
    local_8 = local_ac;
    local_a = (char *)0x2a75;
    local_c = 0xd7c6;
    FUN_21f2_3454();
    local_6 = (char *)0xa;
    local_8 = local_ac;
    local_a = (char *)0x22b2;
    local_c = 0xd7d6;
    puVar3 = (undefined1 *)func_0x00025b06();
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
    }
    local_6 = local_ac;
    local_8 = (char *)0x22b2;
    local_a = (char *)0xd7ee;
    iVar2 = func_0x00024ce4();
    local_a = (char *)(iVar2 - 1);
    iVar2 = 0x22b2;
    for (; (pcVar4 = local_a, iVar5 = iVar2, 0 < (int)local_a && (local_ac[(int)local_a] == '>'));
        local_a = (char *)((int)local_a - 1)) {
      local_6 = local_a;
      local_8 = local_ac;
      iVar5 = 0x2a75;
      local_c = 0xd87c;
      local_a = (char *)iVar2;
      iVar2 = func_0x0002aa38();
      if (iVar2 != 0) break;
      local_ac[(int)pcVar4] = '\0';
      iVar2 = iVar5;
    }
    *param_7 = (uint)local_6;
    if (((int)local_6 <= (int)param_5) || (param_4 < 0x28)) {
      if ((int)param_5 < (int)local_6) {
        local_b2 = param_4 + 1;
      }
      if (param_5 == local_6) {
        local_b2 = param_4;
      }
      if ((int)local_6 < (int)param_5) {
        for (local_c = 1; local_c <= param_4; local_c = local_c + 1) {
          if ((char *)(uint)*(byte *)(param_9 + local_c * 0xf + 0xe) == local_6) {
            local_b2 = local_c;
          }
        }
      }
      *param_7 = (uint)local_6;
      *param_6 = local_b2;
      if (local_b2 == 0) {
        local_ac[0] = *param_8;
      }
      local_6 = local_ac;
      iVar2 = local_b2 * 0xf + param_9;
      local_c = 0xd929;
      local_a = (char *)iVar5;
      local_8 = (char *)iVar2;
      FUN_21f2_3454();
      *(undefined1 *)(iVar2 + 0xe) = local_6._0_1_;
      *param_3 = 0;
      if (param_1 != 0) {
        local_6 = (char *)param_9;
        local_8 = param_3;
        local_a = (char *)0x22b2;
        local_c = 0xd946;
        FUN_21f2_3454();
        for (local_c = 1; local_c <= local_b2; local_c = local_c + 1) {
          local_6 = (char *)(local_c * 0xf + param_9);
          local_8 = param_3;
          local_a = (char *)0x22b2;
          local_c = -0x269f;
          FUN_21f2_2d26();
          if (local_c < local_b2) {
            local_6 = (char *)0x78dc;
            local_8 = param_3;
            local_a = (char *)0x22b2;
            local_c = -0x2688;
            FUN_21f2_2d26();
          }
        }
      }
      return 0;
    }
  }
  return 0xffff;
}



/* 3ab8:2e0d  FUN_3ab8_2e0d  538 bytes, 1 callers */

int __cdecl16far FUN_3ab8_2e0d(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_16a;
  undefined2 local_168;
  int local_166;
  int local_164;
  undefined1 local_162 [180];
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined1 local_a2 [40];
  char local_7a [60];
  char local_3e [38];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  char *pcStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  undefined2 *puStack_8;
  char *pcStack_6;
  char *pcStack_4;
  
  pcStack_4 = (char *)0x3ab8;
  pcStack_6 = (char *)0xd998;
  FUN_21f2_0ebc();
  pcStack_4 = (char *)0x78de;
  pcStack_6 = local_a2;
  puStack_8 = (undefined2 *)0x22b2;
  puStack_a = (undefined2 *)0xd9a6;
  func_0x00024c86();
  local_ae = *param_2;
  local_ad = 0x3a;
  local_ac = 0x5c;
  local_ab = 0;
  pcStack_4 = (char *)0x22b2;
  pcStack_6 = (char *)0xd9c9;
  local_a2[0] = local_ae;
  func_0x0000c3ca();
  pcStack_4 = (char *)0x1;
  pcStack_6 = (char *)0x12;
  puStack_8 = (undefined2 *)0x885;
  puStack_a = (undefined2 *)0xd9d6;
  FUN_1000_0599();
  if (param_1 == 0) {
    pcStack_4 = (char *)0x78eb;
  }
  else {
    pcStack_4 = (char *)0x78ee;
  }
  pcStack_6 = (char *)0xdef;
  puStack_8 = (undefined2 *)0xd9ec;
  func_0x00012276();
  pcStack_4 = (char *)0x78f1;
  pcStack_6 = (char *)0x11f2;
  puStack_8 = (undefined2 *)0xd9f6;
  func_0x00012276();
  pcStack_4 = (char *)0x78fc;
  pcStack_6 = local_a2;
  puStack_8 = (undefined2 *)0x11f2;
  puStack_a = (undefined2 *)0xda05;
  pcStack_4 = (char *)FUN_21f2_1348();
  *(int *)0xd70 = (int)pcStack_4;
  if (pcStack_4 != (char *)0x0) {
    pcStack_6 = (char *)0x50;
    puStack_8 = (undefined2 *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    uStack_c = 0xda2c;
    iVar1 = func_0x0002509c();
    if (iVar1 != 0) {
      pcStack_4 = (char *)*(undefined2 *)0xd70;
      pcStack_6 = (char *)0x50;
      puStack_8 = (undefined2 *)0xbf48;
      puStack_a = (undefined2 *)0x22b2;
      uStack_c = 0xda44;
      iVar1 = func_0x0002509c();
      if (iVar1 != 0) {
        local_a4 = 0;
        local_a6 = 0;
        local_168 = 0;
        local_16a = 0;
        local_164 = 0;
        local_3e[0] = '\0';
        local_7a[0] = '\0';
        local_166 = 1;
        do {
          pcStack_4 = local_162;
          pcStack_6 = &local_ae;
          puStack_8 = &local_a4;
          puStack_a = &local_a6;
          uStack_c = local_168;
          uStack_e = local_16a;
          pcStack_10 = local_3e;
          uStack_12 = 0xbf48;
          uStack_14 = 1;
          uStack_16 = 0x22b2;
          uStack_18 = 0xda9b;
          FUN_3ab8_2bf8();
          if (local_164 != 0) {
            pcStack_4 = local_3e;
LAB_3ab8_2f28:
            pcStack_6 = param_2;
            puStack_8 = (undefined2 *)0x22b2;
            puStack_a = (undefined2 *)0xdab1;
            func_0x00024c86();
LAB_3ab8_2fca:
            pcStack_4 = (char *)0x22b2;
            pcStack_6 = (char *)0xdb4f;
            func_0x0002504e();
            *(undefined2 *)0xd70 = 0;
            if (local_164 != 0) {
              return local_164;
            }
            pcStack_4 = (char *)0xffff;
            pcStack_6 = (char *)0x6;
            puStack_8 = (undefined2 *)0x1;
            puStack_a = (undefined2 *)0x1c;
            uStack_c = 0x78ff;
            uStack_e = 0x22b2;
            pcStack_10 = (char *)0xdb75;
            FUN_1000_02b5();
            pcStack_4 = (char *)0x2;
            pcStack_6 = (char *)0xdef;
            puStack_8 = (undefined2 *)0xdb81;
            func_0x000121f9();
            pcStack_4 = (char *)0x1;
            pcStack_6 = (char *)0x1;
            puStack_8 = (undefined2 *)0x11f2;
            puStack_a = (undefined2 *)0xdb8c;
            FUN_1000_0599();
            pcStack_4 = (char *)0xdef;
            pcStack_6 = (char *)0xdb93;
            func_0x00010526();
            pcStack_4 = (char *)0x1;
            pcStack_6 = (char *)0x1;
            puStack_8 = (undefined2 *)0xdef;
            puStack_a = (undefined2 *)0xdb9d;
            FUN_1000_0599();
            return 0;
          }
          local_16a = local_a6;
          local_168 = local_a4;
          pcStack_4 = param_2;
          pcStack_6 = local_3e;
          puStack_8 = (undefined2 *)0x22b2;
          puStack_a = (undefined2 *)0xdad2;
          iVar1 = func_0x00024cb8();
          if (iVar1 == 0) {
            local_164 = local_166;
            if (param_1 == 0) goto LAB_3ab8_2f79;
            if (local_7a[0] == '\0') {
LAB_3ab8_2f6c:
              local_164 = 0;
              goto LAB_3ab8_2fca;
            }
            pcStack_4 = local_7a;
            goto LAB_3ab8_2f28;
          }
LAB_3ab8_2f79:
          pcStack_4 = (char *)*(undefined2 *)0xd70;
          pcStack_6 = (char *)0x50;
          puStack_8 = (undefined2 *)0xbf48;
          puStack_a = (undefined2 *)0x22b2;
          uStack_c = 0xdb0a;
          iVar1 = func_0x0002509c();
          if (((iVar1 == 0) ||
              (((*(char *)0xbf48 != '|' && (*(char *)0xbf48 != ' ')) && (*(char *)0xbf48 != -0x5b)))
              ) || ((*(char *)0xbf49 != ' ' && (*(char *)0xbf49 != '-')))) goto LAB_3ab8_2f6c;
          pcStack_4 = local_3e;
          pcStack_6 = local_7a;
          puStack_8 = (undefined2 *)0x22b2;
          puStack_a = (undefined2 *)0xdb41;
          func_0x00024c86();
          local_166 = local_166 + 1;
        } while( true );
      }
    }
  }
  pcStack_4 = (char *)0x22b2;
  pcStack_6 = (char *)0xda13;
  func_0x0002504e();
  *(undefined2 *)0xd70 = 0;
  return 0;
}



/* 3ab8:3027  FUN_3ab8_3027  440 bytes, 1 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_3ab8_3027(uint param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 ******ppppppuVar8;
  undefined2 unaff_DS;
  bool bVar9;
  int local_20;
  int local_1e;
  undefined2 ******local_1c;
  int local_1a;
  undefined2 *****local_18;
  int local_16;
  undefined2 *****local_14;
  undefined2 *****local_12;
  int local_10;
  int local_e;
  undefined2 ******local_c;
  undefined2 *******local_a;
  int *local_8;
  undefined2 *******local_6;
  undefined2 *******local_4;
  
  local_4 = (undefined2 *******)0x3ab8;
  local_6 = (undefined2 *******)0xdbb2;
  FUN_21f2_0ebc();
  local_c = (undefined2 ******)0x1;
  local_20 = 1;
  local_1a = 0;
  local_4 = (undefined2 *******)&local_12;
  local_6 = (undefined2 *******)0x22b2;
  ppppppuVar8 = (undefined2 ******)0x22b2;
  local_8 = (int *)0xdbcc;
  func_0x000257c0();
  bVar9 = CARRY2((uint)local_12,param_1);
  local_12 = (undefined2 *****)((int)local_12 + param_1);
  local_10 = local_10 + ((int)param_1 >> 0xf) + (uint)bVar9;
  do {
    local_4 = (undefined2 *******)&local_18;
    local_8 = (int *)0xdbe0;
    local_6 = (undefined2 *******)ppppppuVar8;
    func_0x000257c0();
    if (local_10 < local_16) {
      return 0;
    }
    if ((local_10 <= local_16) && (local_12 < local_18)) {
      return 0;
    }
    local_4 = (undefined2 *******)0x22b2;
    local_6 = (undefined2 *******)0xdbfe;
    local_e = FUN_1000_0632();
    if (local_e != 0) {
      do {
        local_4 = (undefined2 *******)0xdef;
        local_6 = (undefined2 *******)0xdc0a;
        iVar4 = FUN_1000_0632();
      } while (iVar4 != 0);
      if (local_e == 0x31) {
        bVar2 = *(byte *)0x12e;
        goto joined_r0x0003dc19;
      }
      if (local_e == 0x1b) {
        return 0xffff;
      }
      if (local_e == 0x32) {
        return 0xffff;
      }
    }
    local_4 = &local_1c;
    local_6 = (undefined2 *******)&local_14;
    local_8 = &local_1e;
    local_a = &local_6;
    local_c = (undefined2 ******)0xdef;
    ppppppuVar8 = (undefined2 ******)0x885;
    local_e = 0xdc4d;
    func_0x0000dcbd();
  } while ((local_6 == (undefined2 *******)0x0) && (local_1e == 0));
  while ((local_c != (undefined2 ******)0x0 || (local_20 != 0))) {
    local_4 = &local_a;
    local_6 = &local_4;
    local_8 = &local_20;
    local_a = &local_c;
    local_c = (undefined2 ******)0x885;
    local_e = 0xdc80;
    func_0x0000dcbd();
    if ((local_c != (undefined2 ******)0x0) && (local_20 != 0)) {
      local_1a = 1;
    }
  }
  uVar1 = (int)local_a - (int)local_1c;
  uVar5 = (int)*(uint *)0xc1c >> 0xf;
  iVar4 = (*(uint *)0xc1c ^ uVar5) - uVar5;
  uVar5 = (int)local_4 - (int)local_14;
  uVar6 = (int)uVar5 >> 0xf;
  uVar7 = (int)uVar1 >> 0xf;
  if ((iVar4 < (int)((uVar5 ^ uVar6) - uVar6)) || (iVar4 < (int)((uVar1 ^ uVar7) - uVar7))) {
    local_8 = (int *)0x1;
  }
  if (local_1a == 0) {
    if (local_1e == 0) {
      if ((local_8 != (int *)0x1) &&
         (((int)local_1c <= *(int *)0x1b40 + -0x10 || (*(int *)0xa58 <= (int)local_14)))) {
        return 1;
      }
      bVar2 = *(byte *)0x12e;
joined_r0x0003dc19:
      if (bVar2 < 10) {
        *(char *)0x12e = *(char *)0x12e + '\n';
        return 0;
      }
      *(byte *)0x12e = *(byte *)0x12e % 10;
      return 0;
    }
    if (local_8 == (int *)0x0) {
      return 0xffff;
    }
    if ((int)((uVar1 ^ uVar7) - uVar7) <= (int)((uVar5 ^ uVar6) - uVar6)) {
      cVar3 = *param_2;
      goto joined_r0x0003dd1c;
    }
    if (*param_2 != '\x01') {
      *param_2 = '\x01';
      goto LAB_3ab8_315a;
    }
  }
  else {
    cVar3 = *param_2;
joined_r0x0003dd1c:
    if (cVar3 == '\x02') {
      *param_2 = '\x04';
      goto LAB_3ab8_315a;
    }
  }
  *param_2 = '\x02';
LAB_3ab8_315a:
  *(char *)0xd78 = *param_2;
  return 0;
}



/* 3ab8:31df  FUN_3ab8_31df  5698 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far
FUN_3ab8_31df(uint *param_1,uint *param_2,undefined2 param_3,uint *param_4,uint *param_5)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_SI;
  uint *puVar7;
  uint *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined1 uVar11;
  uint local_310 [6];
  uint local_304 [6];
  uint local_2f8 [6];
  uint local_2ec [6];
  uint local_2e0;
  undefined2 local_2de;
  undefined2 local_2dc;
  undefined2 local_2da;
  uint local_2d8;
  uint *local_2d6;
  int local_2d4;
  uint *local_2d2;
  int local_2d0;
  undefined1 local_2ce [4];
  byte local_2ca [2];
  uint *local_2c8;
  uint local_2c6;
  uint local_2c4 [2];
  int local_2c0;
  int local_2be;
  uint local_2bc;
  uint local_2ba;
  uint local_2b8 [22];
  uint local_28c;
  int local_28a;
  int local_288;
  undefined2 local_286;
  uint local_222 [20];
  int local_1fa;
  uint local_1f8;
  int local_1f6;
  uint local_1f4;
  uint local_1f2;
  uint local_1f0;
  uint local_1ee;
  int local_1ec;
  uint local_1ea;
  int local_1e8;
  int local_1e6;
  uint local_1e4;
  undefined1 local_1e2;
  uint local_1e0 [216];
  uint local_30;
  uint *local_2e;
  uint local_2c;
  int local_2a;
  uint local_28;
  uint local_26;
  uint local_24;
  uint local_22;
  uint local_20;
  uint local_1e;
  uint local_1c;
  uint local_1a;
  uint uStack_18;
  uint local_16;
  uint local_14;
  uint local_12;
  uint *puStack_10;
  uint *local_e;
  uint *puStack_c;
  uint **local_a;
  uint *local_8;
  
  puVar7 = (uint *)0x22b2;
  FUN_21f2_0ebc();
  local_2a = 0;
  local_2d0 = *(int *)0xa62;
  local_2ca[0] = *(byte *)0xd78;
  if (local_2d0 != 0x1b) {
    local_8 = (uint *)0xbc;
    local_a = (uint **)0xc13f;
    puStack_c = &local_286;
    local_e = (uint *)0x22b2;
    puVar7 = (uint *)0x11f2;
    puStack_10 = (uint *)0xdda1;
    func_0x0001263c();
    local_8 = (uint *)0xc13f;
    local_a = (uint **)0xbefe;
    puStack_c = &local_286;
    local_e = (uint *)0x64;
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)();
  }
  if (*(int *)0xd76 != 0) {
    *(undefined2 *)0xd76 = 0;
    local_8 = param_5;
    local_a = (uint **)param_4;
    puStack_c = &local_2c6;
    puStack_10 = (uint *)0xdddf;
    local_e = puVar7;
    param_2 = (uint *)FUN_3ab8_4844();
    if ((int)param_2 < -99) {
      return 0xff9c;
    }
  }
LAB_3ab8_3284:
  local_20 = 0xffff;
  local_1f6 = -1;
  local_1fa = 0;
  do {
    local_a = (uint **)0xde1d;
    local_8 = puVar7;
    func_0x000297e6();
    iVar3 = local_1fa;
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xde2f;
    func_0x0002996b();
    local_8 = (uint *)0x22b2;
    puVar7 = (uint *)0x22b2;
    local_a = (uint **)0xde38;
    func_0x00029983();
    uVar4 = *(uint *)0x78d2;
    uVar6 = *(uint *)0x78d4;
    local_1e0[iVar3 * 0xc + 6] = uVar4;
    local_1e0[iVar3 * 0xc + 7] = uVar6;
    local_1e0[iVar3 * 0xc + 4] = uVar4;
    local_1e0[iVar3 * 0xc + 5] = uVar6;
    uVar4 = *(uint *)0x78d6;
    uVar6 = *(uint *)0x78d8;
    local_1e0[iVar3 * 0xc + 10] = uVar4;
    local_1e0[iVar3 * 0xc + 0xb] = uVar6;
    local_1e0[iVar3 * 0xc + 8] = uVar4;
    local_1e0[iVar3 * 0xc + 9] = uVar6;
    local_1fa = local_1fa + 1;
  } while (local_1fa < 0x11);
  local_288 = -4;
  if (*(char *)0x130 != '\0') {
    local_2d4 = *(int *)0x1b3e - *(int *)0xa58;
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xde95;
    FUN_28b3_0d8b();
    local_2d6 = (uint *)(0x27f - *(int *)0xa58);
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xdea9;
    FUN_28b3_0d8b();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xdeae;
    FUN_28b3_1172();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xdeb7;
    func_0x00029b6d();
    local_2d8 = (*(int *)0xa60 - *(int *)0xa5e) / 2;
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xded0;
    FUN_28b3_0d8b();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xded5;
    FUN_28b3_1163();
    local_2e0 = (uint)local_2ca[0];
    local_2da = 0;
    local_2dc = 0;
    local_2de = 0;
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xdef6;
    func_0x00029da5();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xdefb;
    FUN_28b3_1172();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xdf00;
    func_0x00029d78();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xdf05;
    local_288 = FUN_28b3_0f51();
  }
  uVar4 = *(int *)0x1b3e - *(int *)0xa58 >> 0xf;
  local_2c = (int)(((int)((*(int *)0x1b3e - *(int *)0xa58 ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4) /
             (int)(uint)local_2ca[0];
  if (local_2ca[0] < 2) {
    iVar3 = *(int *)0x1b42 + -1;
  }
  else {
    iVar3 = *(int *)0x1b42;
  }
  local_1e4 = (iVar3 + -1) / (int)(uint)local_2ca[0];
  local_1f2 = local_2c << 3;
  local_28a = local_2c << 1;
  local_1f8 = local_1e4 << 4;
  local_2be = local_1e4 << 2;
  local_8 = param_5;
  puStack_c = param_2;
  iVar3 = (uint)local_2ca[0] * (uint)local_2ca[0];
  local_e = (uint *)(((int)((int)param_4 + -1) / iVar3) * iVar3 + 1);
  puStack_10 = (uint *)local_288;
  local_1a = CONCAT11((char)((uint)local_e >> 8),local_2ca[0]);
  local_1c = 0x22b2;
  local_1e = 0xdfc2;
  uStack_18 = local_2c;
  local_16 = local_1e4;
  local_14 = local_1f2;
  local_12 = local_1f8;
  local_a = (uint **)local_e;
  iVar3 = FUN_3ab8_2051();
  if (iVar3 == -1) {
    local_2a = 0;
  }
  local_8 = (uint *)0x0;
  local_a = (uint **)0x22b2;
  puStack_c = (uint *)0xdfd5;
  func_0x0000daa6();
  local_8 = (uint *)*(undefined2 *)0xcb4;
  local_a = (uint **)*(undefined2 *)0xcb2;
  puStack_c = (uint *)0x0;
  local_e = (uint *)0x3;
  puStack_10 = (uint *)0x885;
  puVar7 = (uint *)0xdef;
  local_12 = -0x2016;
  func_0x0000f2cb();
  *(undefined2 *)0x152 = 0;
  *(undefined2 *)0x150 = 0;
  *(undefined2 *)0x14e = 0;
  *(undefined2 *)0x14c = 0;
  *(undefined2 *)0x14a = 0;
  *(undefined2 *)0x148 = 0;
  uVar9 = *(undefined2 *)0xbefc;
  *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
  *(undefined2 *)0xc0ae = uVar9;
LAB_3ab8_482d:
  do {
    if (*(int *)0x158 != 0) {
LAB_3ab8_4837:
      local_a = (uint **)0xf3bb;
      local_8 = puVar7;
      FUN_3ab8_0aa7();
      return 1;
    }
    local_8 = (uint *)0x7908;
    local_a = (uint **)local_304;
    local_e = (uint *)0xe020;
    puStack_c = puVar7;
    func_0x00024c86();
    local_8 = (uint *)0x790b;
    local_a = (uint **)local_2ec;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe030;
    func_0x00024c86();
    if (*(char *)0x12e == '\0') {
      local_8 = (uint *)0x790e;
      local_a = (uint **)&local_286;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe047;
      func_0x00024c86();
      local_8 = &local_286;
      local_a = (uint **)local_304;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe058;
      FUN_21f2_2d26();
      local_8 = &local_286;
      local_a = (uint **)local_2ec;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe069;
      FUN_21f2_2d26();
      local_8 = (uint *)0x7914;
      local_a = (uint **)local_310;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe079;
      func_0x00024c86();
      local_8 = local_310;
      local_a = (uint **)local_2f8;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe08a;
      func_0x00024c86();
    }
    else {
      local_8 = (uint *)0x791c;
      local_a = (uint **)&local_286;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe09a;
      func_0x00024c86();
      local_8 = local_304;
      local_a = (uint **)local_310;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe0ab;
      func_0x00024c86();
      local_8 = &local_286;
      local_a = (uint **)local_304;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe0bc;
      FUN_21f2_2d26();
      local_8 = local_2ec;
      local_a = (uint **)local_2f8;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe0cd;
      func_0x00024c86();
      local_8 = &local_286;
      local_a = (uint **)local_2ec;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe0de;
      FUN_21f2_2d26();
      local_286._0_1_ = 0x2d;
      local_286._1_1_ = 0x2d;
      local_8 = &local_286;
      local_a = (uint **)local_310;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe0f9;
      FUN_21f2_2d26();
      local_8 = &local_286;
      local_a = (uint **)local_2f8;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe10a;
      FUN_21f2_2d26();
    }
    local_8 = (uint *)0x860;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe11a;
    func_0x00024c86();
    local_8 = (uint *)0x7922;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe12a;
    FUN_21f2_2d26();
    if (local_1f6 < 0) {
      local_24 = *(uint *)0x78ce;
      local_22 = *(uint *)0x78d0;
    }
    else {
      local_24 = local_1e0[local_1f6 * 0xc];
      local_22 = local_1e0[local_1f6 * 0xc + 1];
    }
    local_8 = (uint *)*(undefined2 *)0x1b42;
    local_a = (uint **)0x2;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe160;
    FUN_1000_0599();
    if (local_2a == 0) {
      local_8 = (uint *)0xdef;
      local_a = (uint **)0xe170;
      func_0x000297e6();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xe175;
      func_0x00029d78();
      puStack_10 = (uint *)0x22b2;
      local_12 = 0xe17f;
      func_0x000299d1();
      puStack_10 = (uint *)0x7928;
      local_12 = 0x22b2;
      local_14 = 0xe188;
      func_0x00012276();
    }
    else {
      local_2c8 = (uint *)((uint)local_2ca[0] * (uint)local_2ca[0] + (int)local_a + -1);
      if ((int)param_2 < (int)local_2c8) {
        local_2c8 = param_2;
      }
      if (*(byte *)0x12e < 0xb) {
        local_8 = (uint *)((uint)local_2ca[0] * (uint)local_2ca[0]);
        local_a = (uint **)param_2;
        puStack_c = (uint *)0x7942;
        local_e = (uint *)0xdef;
        puStack_10 = (uint *)0xe1de;
        func_0x00012276();
      }
      else {
        puStack_c = param_2;
        local_e = (uint *)0x7934;
        puStack_10 = (uint *)0xdef;
        local_12 = -0x1e3e;
        local_8 = local_2c8;
        func_0x00012276();
      }
    }
    local_8 = (uint *)0x1;
    local_a = (uint **)0x1;
    puStack_c = (uint *)0x11f2;
    local_e = (uint *)0xe1eb;
    FUN_1000_0599();
    local_8 = (uint *)0x1;
    local_a = (uint **)0x1;
    puStack_c = (uint *)0x1;
    local_e = (uint *)0x1;
    puStack_10 = (uint *)0xdef;
    local_12 = 0xe1f9;
    func_0x0000a76b();
    local_8 = (uint *)0x0;
    local_a = (uint **)0x0;
    puStack_c = (uint *)0x0;
    local_e = (uint *)0x7;
    puStack_10 = (uint *)*(undefined2 *)0x1b40;
    local_12 = *(int *)0x1b3e;
    local_14 = *(uint *)0x1b40;
    local_16 = 0;
    uStack_18 = 0x885;
    local_1a = 0xe217;
    func_0x0000f350();
    local_8 = (uint *)0xdef;
    local_a = (uint **)0xe21f;
    func_0x0000a799();
    local_8 = (uint *)0x98a;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x885;
    local_e = (uint *)0xe22d;
    FUN_21f2_2d26();
    if ((int)param_2 < (int)((int)local_a + (uint)local_2ca[0] * (uint)local_2ca[0])) {
      local_8 = local_310;
    }
    else {
      local_8 = local_304;
    }
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe256;
    FUN_21f2_2d26();
    local_8 = (uint *)0x98a;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe266;
    FUN_21f2_2d26();
    if ((int)((uint)local_2ca[0] * (uint)local_2ca[0]) < (int)local_a) {
      local_8 = local_2ec;
    }
    else {
      local_8 = local_2f8;
    }
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe28c;
    FUN_21f2_2d26();
    local_8 = (uint *)0x98a;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe29c;
    FUN_21f2_2d26();
    local_8 = (uint *)0x7950;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe2ac;
    FUN_21f2_2d26();
    local_8 = (uint *)0x652;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe2bc;
    FUN_21f2_2d26();
    local_8 = (uint *)0x98a;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe2cc;
    FUN_21f2_2d26();
    local_8 = (uint *)0x7955;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe2dc;
    FUN_21f2_2d26();
    local_8 = &local_286;
    local_a = (uint **)0x5;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe2ec;
    FUN_1def_07a4();
    local_8 = (uint *)0x795f;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x1bb4;
    local_e = (uint *)0xe2fc;
    FUN_21f2_2d26();
    local_8 = (uint *)0x860;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe30c;
    FUN_21f2_2d26();
    local_2c8 = (uint *)((int)local_a + (uint)local_2ca[0] * (uint)local_2ca[0] + -1);
    if ((int)param_2 < (int)local_2c8) {
      local_2c8 = param_2;
    }
    local_8 = param_2;
    local_a = (uint **)0x7961;
    puStack_c = local_222;
    local_e = (uint *)0x22b2;
    puStack_10 = (uint *)0xe33d;
    FUN_21f2_3454();
    local_8 = local_222;
    local_a = (uint **)&local_286;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe34f;
    FUN_21f2_2d26();
    if (0 < (int)param_2) {
      local_8 = local_2c8;
      puStack_c = (uint *)0x7965;
      local_e = local_222;
      puStack_10 = (uint *)0x22b2;
      local_12 = -0x1c94;
      FUN_21f2_3454();
      local_8 = local_222;
      local_a = (uint **)&local_286;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe37e;
      FUN_21f2_2d26();
    }
    puVar7 = (uint *)0x22b2;
    if (local_2a == 0) {
      *(undefined2 *)0xb6a = 0;
      *(undefined2 *)0xc26 = 1;
      *(undefined2 *)0xc28 = 1;
      local_1e2 = *(undefined1 *)0xcf4;
      *(undefined1 *)0xcf4 = 1;
      local_8 = &local_1f4;
      local_a = (uint **)local_2ce;
      puStack_c = local_2c4;
      local_e = &local_286;
      puStack_10 = (uint *)0x270f;
      local_12 = 0x22b2;
      local_14 = 0xe3c0;
      local_28c = FUN_3ab8_0000();
      *(undefined1 *)0xcf4 = local_1e2;
      *(undefined2 *)0xb6a = 0;
      *(undefined2 *)0xc26 = 0;
      *(undefined2 *)0xc28 = 0;
    }
    else {
      local_8 = (uint *)0x1;
      local_a = (uint **)0x1;
      puStack_c = (uint *)0x22b2;
      local_e = (uint *)0xe451;
      FUN_1000_0599();
      local_8 = (uint *)0xdef;
      local_a = (uint **)0xe458;
      func_0x00010526();
      local_8 = (uint *)0x1;
      local_a = (uint **)0x1;
      puStack_c = (uint *)0xdef;
      local_e = (uint *)0xe462;
      FUN_1000_0599();
      local_8 = (uint *)0x544;
      local_a = (uint **)0xdef;
      puStack_c = (uint *)0xe46d;
      func_0x00012276();
      local_8 = (uint *)0x1;
      local_a = (uint **)0x8;
      puStack_c = (uint *)0x11f2;
      local_e = (uint *)0xe47b;
      FUN_1000_0599();
      local_8 = (uint *)0x316;
      local_a = (uint **)0xdef;
      puStack_c = (uint *)0xe486;
      func_0x00012276();
      if (local_2a < 1) {
        local_8 = (uint *)0x7971;
      }
      else {
        local_8 = (uint *)0x796e;
      }
      local_a = (uint **)&local_286;
      puStack_c = (uint *)0x11f2;
      local_e = (uint *)0xe4a0;
      func_0x00024c86();
      local_8 = param_4;
      local_a = (uint **)&local_286;
      puStack_c = (uint *)0x7974;
      local_e = (uint *)0x22b2;
      puVar7 = (uint *)0x11f2;
      puStack_10 = (uint *)0xe4b3;
      func_0x00012276();
      local_8 = (uint *)local_2ca;
      local_a = (uint **)((uint)*(byte *)0x12e % 10);
      puStack_c = (uint *)0x11f2;
      local_e = (uint *)0xe4cd;
      local_2c0 = FUN_3ab8_3027();
      if (local_2c0 == -1) {
        local_2a = 0;
        goto LAB_3ab8_482d;
      }
      if (((local_2c0 == 0) && (10 < *(byte *)0x12e)) &&
         ((int)((uint)local_2ca[0] * (uint)local_2ca[0] + (int)local_a) <= (int)param_2))
      goto LAB_3ab8_3284;
    }
    while( true ) {
      local_8 = puVar7;
      if (*(char *)0x12e != '\0') {
        if ((local_28c == 1) || (puVar8 = puVar7, local_28c == 2)) {
          local_8 = &local_1ea;
          local_a = (uint **)&local_30;
          puStack_c = &local_1ee;
          local_e = (uint *)&stack0xfffa;
          puVar8 = (uint *)0x885;
          local_12 = -0x1bf8;
          puStack_10 = puVar7;
          func_0x0000dcbd();
          if ((unaff_SI != 0) && (local_1ee != 0)) {
            while ((unaff_SI != 0 || (local_1ee != 0))) {
              local_8 = &local_1ea;
              local_a = (uint **)&local_30;
              puStack_c = &local_1ee;
              local_e = (uint *)&stack0xfffa;
              puStack_10 = (uint *)0x885;
              local_12 = -0x1bbe;
              func_0x0000dcbd();
            }
            local_8 = (uint *)0x885;
            local_a = (uint **)0xe50c;
            uVar4 = func_0x0000db57();
            if ((uVar4 & 2) != 0) {
              if (*(byte *)0x12e < 10) {
                *(char *)0x12e = *(char *)0x12e + '\n';
              }
              else {
                *(byte *)0x12e = *(byte *)0x12e % 10;
              }
            }
            if (local_28c == 1) {
              local_2a = 1;
            }
            else {
              local_2a = -1;
            }
            puVar8 = (uint *)0x885;
            if (-1 < local_1f6) {
              uVar4 = local_1e0[local_1f6 * 0xc + 1];
              *(uint *)0x78ce = local_1e0[local_1f6 * 0xc];
              *(uint *)0x78d0 = uVar4;
              uVar4 = local_1e0[local_1f6 * 0xc + 5];
              *(uint *)0x78d2 = local_1e0[local_1f6 * 0xc + 4];
              *(uint *)0x78d4 = uVar4;
              uVar4 = local_1e0[local_1f6 * 0xc + 9];
              *(uint *)0x78d6 = local_1e0[local_1f6 * 0xc + 8];
              *(uint *)0x78d8 = uVar4;
            }
          }
        }
        if ((local_2a == 1) || ((local_28c == 1 && (*(char *)0x15b == '\x02')))) {
          local_8 = param_4;
          local_a = (uint **)&local_286;
          puVar7 = (uint *)0x22b2;
          local_e = (uint *)0xe59f;
          puStack_c = puVar8;
          func_0x00024c86();
          goto LAB_3ab8_3a21;
        }
        if ((local_2a == -1) || ((local_8 = puVar8, local_28c == 2 && (*(char *)0x15b == '\x02'))))
        {
          local_8 = param_4;
          local_a = (uint **)&local_286;
          puVar7 = (uint *)0x22b2;
          local_e = (uint *)0xe640;
          puStack_c = puVar8;
          func_0x00024c86();
          goto LAB_3ab8_3ac2;
        }
      }
      if (local_28c == 99) break;
      puVar7 = (uint *)0x885;
      local_a = (uint **)0xed00;
      func_0x0000c3ca();
      if ((*(int *)0x158 != 0) || (local_28c == 0xffff)) {
        if (local_2d0 != 0x1b) {
          *(undefined1 *)0xd74 = 10;
        }
        local_8 = (uint *)0x885;
        local_a = (uint **)0xed21;
        FUN_3ab8_0aa7();
        if (local_2d0 != 0x1b) {
          local_8 = (uint *)0xbc;
          local_a = (uint **)0xc13f;
          puStack_c = &local_286;
          local_e = (uint *)0x885;
          puStack_10 = (uint *)0xed3a;
          func_0x0001263c();
          local_8 = local_2b8;
          local_a = (uint **)0x0;
          puStack_c = &local_286;
          local_e = (uint *)0x11f2;
          puVar7 = (uint *)0x22b2;
          puStack_10 = (uint *)0xed4f;
          iVar3 = func_0x000276d7();
          if (iVar3 == 0) {
            local_8 = (uint *)0x3;
            pcVar2 = (code *)swi(0x3f);
            (*pcVar2)();
            unaff_SI = 0x22b2;
            puVar7 = (uint *)0x22b2;
            local_8 = (uint *)0xed6a;
            iVar3 = func_0x00027698();
            if (iVar3 != 0) {
              local_8 = (uint *)0x830;
              local_a = (uint **)0x22b2;
              puVar7 = (uint *)0x11f2;
              puStack_c = (uint *)0xed78;
              FUN_13bf_0a03();
            }
          }
        }
        if (*(int *)0x158 != 0) {
          return 0xfff5;
        }
        if (local_28c == 0xffff) {
          return 0xffff;
        }
      }
      if ((local_28c == 0xd) && (-1 < local_1f6)) {
        uVar4 = local_1e0[local_1f6 * 0xc + 1];
        *(uint *)0x78ce = local_1e0[local_1f6 * 0xc];
        *(uint *)0x78d0 = uVar4;
        uVar4 = local_1e0[local_1f6 * 0xc + 5];
        *(uint *)0x78d2 = local_1e0[local_1f6 * 0xc + 4];
        *(uint *)0x78d4 = uVar4;
        uVar4 = local_1e0[local_1f6 * 0xc + 9];
        *(uint *)0x78d6 = local_1e0[local_1f6 * 0xc + 8];
        *(uint *)0x78d8 = uVar4;
        goto LAB_3ab8_3284;
      }
      if (((local_28c == 1) &&
          ((int)((uint)local_2ca[0] * (uint)local_2ca[0] + (int)local_a) <= (int)param_2)) ||
         ((local_28c == 2 && ((int)((uint)local_2ca[0] * (uint)local_2ca[0]) < (int)local_a))))
      goto LAB_3ab8_3284;
      if (local_28c == 3) {
        if ((*(char *)0x12e == '\0') || (*(char *)0x15b != '\x02')) {
          if (local_2ca[0] != 2) goto LAB_3ab8_42c7;
          local_2ca[0] = 4;
        }
        else if (local_2ca[0] == 1) {
LAB_3ab8_42c7:
          local_2ca[0] = 2;
        }
        else {
          local_2ca[0] = 1;
        }
        *(byte *)0xd78 = local_2ca[0];
        goto LAB_3ab8_3284;
      }
      uVar10 = local_28c < 0x3600;
      uVar11 = local_28c == 0x3600;
      local_8 = puVar7;
      if ((bool)uVar11) {
        local_a = (uint **)0xee7f;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xee88;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xee90;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xee99;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xee9e;
        FUN_28b3_1181();
        if (!(bool)uVar10 && !(bool)uVar11) {
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xeea9;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xeeb2;
          func_0x00029b85();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xeeba;
          func_0x00029983();
        }
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeed3;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeedc;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeee5;
        func_0x00029983();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeeed;
        func_0x000297e6();
        local_8 = (uint *)0x78ce;
        local_a = (uint **)0x22b2;
        puStack_c = (uint *)0xeef7;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeefd;
        func_0x00029983();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef06;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef0e;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef2c;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef35;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef3e;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef46;
        FUN_28b3_100d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef4f;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef54;
        func_0x00029c9d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef59;
        FUN_28b3_1163();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef62;
        func_0x00029983();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef6b;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef73;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef7c;
        func_0x000297e6();
LAB_3ab8_4400:
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef85;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xef8a;
        FUN_28b3_1163();
LAB_3ab8_440e:
        local_8 = (uint *)0x22b2;
        puVar7 = (uint *)0x22b2;
        local_a = (uint **)0xef93;
        func_0x00029983();
        goto LAB_3ab8_3284;
      }
      if (local_28c == 0x3700) {
        local_24 = *(uint *)0xab18;
        local_22 = *(uint *)0xab1a;
        local_a = (uint **)0xefcc;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xefd5;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xefdd;
        FUN_28b3_0ee9();
        iVar3 = local_1f8 - 0x15;
        uVar10 = (iVar3 - (iVar3 >> 0xf) & 1U) != 0;
        uVar11 = iVar3 / 2 == 0;
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeff6;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xefff;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xf007;
        FUN_28b3_0ee9();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xf010;
        func_0x00029834();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xf019;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xf022;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xf02b;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xf030;
        func_0x00029d78();
        local_8 = (uint *)0x22b2;
        puVar7 = (uint *)0x22b2;
        local_a = (uint **)0xf035;
        FUN_28b3_1181();
        if (!(bool)uVar10 && !(bool)uVar11) {
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf040;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf049;
          func_0x00029983();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf052;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf05b;
          func_0x00029b6d();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf064;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf06d;
          func_0x00029b6d();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf072;
          FUN_28b3_1163();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf07b;
          func_0x00029983();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf084;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf08d;
          func_0x00029b6d();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xf096;
          func_0x000297e6();
          goto LAB_3ab8_4400;
        }
      }
      local_8 = puVar7;
      if (local_28c == 0x3a00) {
        local_a = (uint **)0xf0ae;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x78d6;
LAB_3ab8_4532:
        local_a = (uint **)0x22b2;
        puStack_c = (uint *)0xf0b8;
        func_0x00029bb5();
        goto LAB_3ab8_440e;
      }
      if (local_28c == 0x3d00) {
        local_a = (uint **)0xf0cd;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x78d6;
LAB_3ab8_4551:
        local_a = (uint **)0x22b2;
        puStack_c = (uint *)0xf0d7;
        func_0x00029b55();
        goto LAB_3ab8_440e;
      }
      if (local_28c == 0x3b00) {
        local_a = (uint **)0xf0ea;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x78d2;
        goto LAB_3ab8_4551;
      }
      if (local_28c == 0x3c00) {
        local_a = (uint **)0xf101;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x78d2;
        goto LAB_3ab8_4532;
      }
      if ((local_28c == 0x3e00) || (local_28c == 4)) {
        uVar9 = *(undefined2 *)0xab12;
        *(undefined2 *)0x78ce = *(undefined2 *)0xab10;
        *(undefined2 *)0x78d0 = uVar9;
        uVar9 = *(undefined2 *)0xab04;
        uVar1 = *(undefined2 *)0xab06;
        *(undefined2 *)0x78d6 = uVar9;
        *(undefined2 *)0x78d8 = uVar1;
        *(undefined2 *)0x78d2 = uVar9;
        *(undefined2 *)0x78d4 = uVar1;
        goto LAB_3ab8_3284;
      }
      if ((local_28c == 0x3f00) || (local_28c == 5)) goto LAB_3ab8_3284;
      if (local_1f4 == 0) goto LAB_3ab8_482d;
      local_a = (uint **)0xf174;
      func_0x000297e6();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf17d;
      FUN_28b3_100d();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf186;
      func_0x00029b6d();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf18f;
      FUN_28b3_0d8b();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf194;
      FUN_28b3_117c();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf199;
      func_0x00029d78();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf19e;
      local_30 = FUN_28b3_0f51();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf1aa;
      func_0x000297e6();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf1b3;
      FUN_28b3_100d();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf1bc;
      func_0x00029b6d();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf1c5;
      FUN_28b3_0d8b();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf1ca;
      FUN_28b3_1168();
      local_8 = (uint *)0x22b2;
      local_a = (uint **)0xf1cf;
      func_0x00029d78();
      local_8 = (uint *)0x22b2;
      puVar7 = (uint *)0x22b2;
      local_a = (uint **)0xf1d4;
      local_1ea = FUN_28b3_0f51();
      if (*(char *)0x12e == '\0') {
LAB_3ab8_470d:
        if ((local_1f4 != 2) && (*(int *)0xa58 <= (int)local_30)) {
          local_1ea = (int)(local_1ea - *(int *)0xa5e) / (int)local_1f8;
          local_30 = (int)(local_30 - *(int *)0xa58) / (int)local_1f2;
          if ((((-1 < (int)local_30) && (-1 < (int)local_1ea)) &&
              ((int)local_30 < (int)(uint)local_2ca[0])) &&
             (((((int)local_1ea < (int)(uint)local_2ca[0] &&
                (local_28 = (int)local_a + local_30 + local_2ca[0] * local_1ea, 0 < (int)local_28))
               && ((int)local_28 <= (int)param_2)) &&
              (*(byte *)((int)param_5 + local_28 * 0xf + 0xe) < 10)))) {
            local_8 = param_4;
            local_a = (uint **)param_1;
            local_e = (uint *)0xf315;
            puStack_c = puVar7;
            FUN_21f2_3454();
            local_8 = param_1;
            local_a = (uint **)0x22b2;
            puStack_c = (uint *)0xf31f;
            iVar3 = func_0x00024ce4();
            local_2d2 = (uint *)(iVar3 + -1);
            puStack_c = (uint *)0x22b2;
            if (*(char *)((int)local_2d2 + (int)param_1) == '\\') {
              local_a = (uint **)param_1;
              puStack_c = (uint *)0x22b2;
              uVar9 = 0x2a75;
              local_e = (uint *)0xf336;
              local_8 = local_2d2;
              iVar3 = func_0x0002aa38();
              puStack_c = (uint *)uVar9;
              if (iVar3 != 0) goto LAB_3ab8_47bc;
            }
            else {
LAB_3ab8_47bc:
              local_8 = (uint *)0x7988;
              local_a = (uint **)param_1;
              uVar9 = 0x22b2;
              local_e = (uint *)0xf348;
              FUN_21f2_2d26();
            }
            local_8 = (uint *)(local_28 * 0xf + (int)param_5);
            local_a = (uint **)param_1;
            local_e = (uint *)0xf35c;
            puStack_c = (uint *)uVar9;
            FUN_21f2_2d26();
            local_8 = (uint *)0xbc;
            local_a = (uint **)0xc13f;
            puStack_c = &local_286;
            local_e = (uint *)0x22b2;
            puStack_10 = (uint *)0xf370;
            func_0x0001263c();
            local_8 = local_2b8;
            local_a = (uint **)0x0;
            puStack_c = &local_286;
            local_e = (uint *)0x11f2;
            puVar7 = (uint *)0x22b2;
            puStack_10 = (uint *)0xf385;
            iVar3 = func_0x000276d7();
            if (iVar3 == 0) {
              local_8 = &local_286;
              local_a = (uint **)0x22b2;
              puVar7 = (uint *)0x22b2;
              puStack_c = (uint *)0xf396;
              iVar3 = func_0x00027698();
              if (iVar3 != 0) {
                local_8 = (uint *)0x830;
                local_a = (uint **)0x22b2;
                puVar7 = (uint *)0x11f2;
                puStack_c = (uint *)0xf3a4;
                FUN_13bf_0a03();
              }
            }
            *(uint *)0xd76 = local_28;
            goto LAB_3ab8_4837;
          }
        }
        goto LAB_3ab8_482d;
      }
      local_8 = &local_14;
      local_a = &local_8;
      puStack_c = &local_1ee;
      local_e = (uint *)&stack0xfffa;
      puStack_10 = (uint *)0x22b2;
      puVar7 = (uint *)0x885;
      local_12 = -0xe08;
      func_0x0000dcbd();
      local_14 = local_14 - local_1ea;
      uVar4 = (int)*(uint *)0xc1c >> 0xf;
      iVar3 = (*(uint *)0xc1c ^ uVar4) - uVar4;
      uVar4 = (int)local_8 - local_30;
      uVar6 = (int)uVar4 >> 0xf;
      uVar5 = (int)local_14 >> 0xf;
      if (((int)((uVar4 ^ uVar6) - uVar6) <= iVar3) && ((int)((local_14 ^ uVar5) - uVar5) <= iVar3))
      goto LAB_3ab8_470d;
      if ((int)((local_14 ^ uVar5) - uVar5) < (int)((uVar4 ^ uVar6) - uVar6)) {
        *(undefined1 *)0x15b = (undefined1)local_1f4;
        local_2a = 0;
        local_1f4 = 0;
        if ((int)uVar4 < 0) {
          local_28c = 1;
        }
        else {
          local_28c = 2;
        }
      }
      else {
        if (local_1f4 != 2) goto LAB_3ab8_482d;
        if ((int)local_14 < 0) {
          local_2a = -1;
        }
        if (0 < (int)local_14) {
          local_2a = 1;
        }
      }
    }
    local_a = (uint **)0xe694;
    func_0x000297e6();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe69d;
    FUN_28b3_100d();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6a6;
    func_0x00029b6d();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6af;
    FUN_28b3_0d8b();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6b4;
    FUN_28b3_1168();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6b9;
    func_0x00029d78();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6be;
    local_14 = FUN_28b3_0f51();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6ca;
    func_0x000297e6();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6d3;
    FUN_28b3_100d();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6dc;
    func_0x00029b6d();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6e5;
    FUN_28b3_0d8b();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6ea;
    FUN_28b3_117c();
    local_8 = (uint *)0x22b2;
    local_a = (uint **)0xe6ef;
    func_0x00029d78();
    local_8 = (uint *)0x22b2;
    puVar7 = (uint *)0x22b2;
    local_a = (uint **)0xe6f4;
    iVar3 = FUN_28b3_0f51();
    local_30 = (iVar3 - *(int *)0xa58) / (int)local_1f2;
    local_1ea = (int)(local_14 - *(int *)0xa5e) / (int)local_1f8;
    local_26 = local_1ea;
    local_1c = local_30;
    if (((((-1 < (int)local_30) && (-1 < (int)local_1ea)) &&
         ((int)local_30 < (int)(uint)local_2ca[0])) &&
        (((int)local_1ea < (int)(uint)local_2ca[0] &&
         (local_28 = local_2ca[0] * local_1ea + (int)local_a + local_30, 0 < (int)local_28)))) &&
       (((int)local_28 <= (int)param_2 && (*(byte *)((int)param_5 + local_28 * 0xf + 0xe) < 10)))) {
      local_1e8 = local_1ea * local_1f8 + *(int *)0xa5e;
      local_8 = (uint *)(local_1e8 + local_1f8);
      local_2e = (uint *)(local_30 * local_1f2 + *(int *)0xa58);
      local_a = (uint **)((int)local_2e + local_1f2);
      puStack_10 = (uint *)0x22b2;
      puVar8 = (uint *)0xdef;
      local_12 = 0xe797;
      local_e = local_2e;
      puStack_c = (uint *)local_1e8;
      func_0x0000f1d8();
      local_30 = (int)local_1f2 / 2 + (int)local_2e;
      local_1ea = (int)local_1f8 / 2 + local_1e8;
      local_e = &local_1f0;
      local_a = (uint **)&local_1e6;
      puStack_c = (uint *)local_14;
      puStack_10 = (uint *)0xdef;
      local_12 = -0x1832;
      local_8 = local_e;
      local_2c0 = FUN_3ab8_2a4d();
      local_1f6 = local_2ca[0] * local_26 + local_1c;
      if (local_2c0 == -1) {
        uVar4 = local_1e0[local_1f6 * 0xc];
        uVar6 = local_1e0[local_1f6 * 0xc + 1];
        uVar5 = local_1e0[local_1f6 * 0xc + 3];
        local_1e0[local_1f6 * 0xc] = local_1e0[local_1f6 * 0xc + 2];
        local_1e0[local_1f6 * 0xc + 1] = uVar5;
        local_1e0[local_1f6 * 0xc + 2] = uVar4;
        local_1e0[local_1f6 * 0xc + 3] = uVar6;
        uVar4 = local_1e0[local_1f6 * 0xc + 4];
        uVar6 = local_1e0[local_1f6 * 0xc + 5];
        uVar5 = local_1e0[local_1f6 * 0xc + 7];
        local_1e0[local_1f6 * 0xc + 4] = local_1e0[local_1f6 * 0xc + 6];
        local_1e0[local_1f6 * 0xc + 5] = uVar5;
        local_1e0[local_1f6 * 0xc + 6] = uVar4;
        local_1e0[local_1f6 * 0xc + 7] = uVar6;
        uVar6 = local_1e0[local_1f6 * 0xc + 8];
        uVar5 = local_1e0[local_1f6 * 0xc + 9];
        uVar4 = local_1e0[local_1f6 * 0xc + 0xb];
        local_1e0[local_1f6 * 0xc + 8] = local_1e0[local_1f6 * 0xc + 10];
        local_1e0[local_1f6 * 0xc + 9] = uVar4;
        local_2bc = uVar6;
        local_2ba = uVar5;
      }
      else {
        uVar4 = local_1e0[local_1f6 * 0xc + 1];
        local_1e0[local_1f6 * 0xc + 2] = local_1e0[local_1f6 * 0xc];
        local_1e0[local_1f6 * 0xc + 3] = uVar4;
        uVar4 = local_1e0[local_1f6 * 0xc + 5];
        local_1e0[local_1f6 * 0xc + 6] = local_1e0[local_1f6 * 0xc + 4];
        local_1e0[local_1f6 * 0xc + 7] = uVar4;
        uVar6 = local_1e0[local_1f6 * 0xc + 8];
        uVar5 = local_1e0[local_1f6 * 0xc + 9];
      }
      local_1e0[local_1f6 * 0xc + 10] = uVar6;
      local_1e0[local_1f6 * 0xc + 0xb] = uVar5;
      if (local_2c0 == -2) {
        local_24 = *(uint *)0xab18;
        local_22 = *(uint *)0xab1a;
        local_2e0 = (int)((*(int *)0xa58 + -0x80) * 2 + local_1f2) / 2;
        local_8 = (uint *)0xdef;
        local_a = (uint **)0xe8ee;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe8f7;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe8ff;
        FUN_28b3_0ee9();
        local_2e0 = (int)(local_288 + local_1f8 + -0x10) / 2;
        uVar11 = local_2e0 == 0;
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe91c;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe925;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe92d;
        FUN_28b3_0ee9();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe936;
        func_0x00029834();
        uVar10 = (long)(int)((long)local_1f6 * 0x18) != (long)local_1f6 * 0x18;
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe94c;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe955;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe95e;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xe963;
        func_0x00029d78();
        local_8 = (uint *)0x22b2;
        puVar8 = (uint *)0x22b2;
        local_a = (uint **)0xe968;
        FUN_28b3_1181();
        if (!(bool)uVar10 && !(bool)uVar11) {
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe973;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe97a;
          func_0x00029983();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe987;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe990;
          func_0x00029b6d();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe999;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe9a2;
          func_0x00029b6d();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe9a7;
          FUN_28b3_1163();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe9ae;
          func_0x00029983();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe9bb;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe9c4;
          func_0x00029b6d();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe9cd;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe9d6;
          func_0x00029b6d();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xe9db;
          FUN_28b3_1163();
          local_8 = (uint *)0x22b2;
          puVar8 = (uint *)0x22b2;
          local_a = (uint **)0xe9e2;
          func_0x00029983();
        }
      }
      if (local_2c0 == 0) {
        uVar4 = *(uint *)0xab12;
        local_1e0[local_1f6 * 0xc] = *(uint *)0xab10;
        local_1e0[local_1f6 * 0xc + 1] = uVar4;
        uVar4 = *(uint *)0xab04;
        uVar6 = *(uint *)0xab06;
        local_1e0[local_1f6 * 0xc + 4] = uVar4;
        local_1e0[local_1f6 * 0xc + 5] = uVar6;
        local_1e0[local_1f6 * 0xc + 8] = uVar4;
        local_1e0[local_1f6 * 0xc + 9] = uVar6;
      }
      if (local_2c0 == 4) {
        local_a = (uint **)0xea32;
        local_8 = puVar8;
        FUN_28b3_0d8b();
        iVar3 = local_1f6;
        local_8 = local_1e0 + local_1f6 * 0xc + 4;
        local_a = (uint **)0x22b2;
        puStack_c = (uint *)0xea45;
        func_0x00029b55();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xea4b;
        func_0x00029983();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xea5f;
        FUN_28b3_0d8b();
        local_8 = local_1e0 + iVar3 * 0xc + 8;
        local_a = (uint **)0x22b2;
        puStack_c = (uint *)0xea69;
        func_0x00029b55();
        local_8 = (uint *)0x22b2;
        puVar8 = (uint *)0x22b2;
        local_a = (uint **)0xea6f;
        func_0x00029983();
      }
      if (local_2c0 == 1) {
        local_1e = (int)(local_14 - local_1f0) >> 0xf;
        local_1e = (local_14 - local_1f0 ^ local_1e) - local_1e;
        local_a = (uint **)0xea91;
        local_8 = puVar8;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xea9a;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xea9f;
        FUN_28b3_1172();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeaa7;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeaaf;
        FUN_28b3_0ee9();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeab7;
        FUN_28b3_0d8b();
        uVar4 = (int)local_8 - local_1e6 >> 0xf;
        local_12 = (int)local_8 - local_1e6 ^ uVar4;
        uVar10 = local_12 < uVar4;
        local_12 = local_12 - uVar4;
        uVar11 = local_12 == 0;
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeace;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xead6;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeadb;
        FUN_28b3_1181();
        if ((bool)uVar10 || (bool)uVar11) {
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xeaf4;
          FUN_28b3_0d8b();
        }
        else {
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xeae6;
          FUN_28b3_0d8b();
        }
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeafc;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb01;
        FUN_28b3_1172();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb09;
        func_0x00029983();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb12;
        func_0x000297e6();
        uVar10 = (long)(int)((long)local_1f6 * 0x18) != (long)local_1f6 * 0x18;
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb24;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb2d;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb35;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb3a;
        FUN_28b3_1181();
        if (!(bool)uVar10 && !(bool)uVar11) {
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xeb45;
          func_0x000297e6();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xeb4e;
          func_0x00029b85();
          local_8 = (uint *)0x22b2;
          local_a = (uint **)0xeb56;
          func_0x00029983();
        }
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb7e;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb87;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xeb90;
        func_0x00029983();
        local_12 = (int)local_1f2 / 2 + -7;
        uVar4 = (int)local_1f8 / 2 + local_288;
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xebbd;
        local_1e = uVar4;
        func_0x000297e6();
        iVar3 = local_1f6;
        local_8 = local_1e0 + local_1f6 * 0xc;
        local_a = (uint **)0x22b2;
        puStack_c = (uint *)0xebd6;
        local_2d8 = uVar4;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xebdc;
        func_0x00029983();
        local_2d6 = local_1e0 + iVar3 * 0xc + 4;
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xebeb;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xebf3;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec00;
        FUN_28b3_0d8b();
        local_2d4 = (int)local_8 + ((local_1e6 - (int)local_8) / 2 - (int)local_2e) + -7;
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec22;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec2b;
        func_0x0002996b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec33;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec38;
        FUN_28b3_1163();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec3d;
        FUN_28b3_1163();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec46;
        func_0x00029983();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec53;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec5b;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec64;
        func_0x000297e6();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec6c;
        func_0x00029b6d();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec75;
        FUN_28b3_0d8b();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec7a;
        FUN_28b3_1168();
        local_8 = (uint *)0x22b2;
        local_a = (uint **)0xec7f;
        FUN_28b3_1163();
        local_8 = (uint *)0x22b2;
        puVar8 = (uint *)0x22b2;
        local_a = (uint **)0xec86;
        func_0x00029983();
      }
      local_16 = (uint)(local_20 == local_28);
      puVar7 = (uint *)0x885;
      local_a = (uint **)0xec9d;
      local_8 = puVar8;
      func_0x0000c3ca();
      local_8 = &local_1a;
      local_a = &local_e;
      puStack_c = param_5;
      local_e = param_4;
      puStack_10 = local_1e0;
      local_12 = local_288;
      local_14 = local_1f8;
      local_16 = local_1f2;
      uStack_18 = (uint)local_2ca[0];
      local_1a = local_1e4;
      local_1c = local_2c;
      local_1e = local_26;
      local_20 = local_2c;
      local_22 = local_28;
      local_24 = local_1f2;
      local_26 = 0x885;
      local_28 = 0xecda;
      local_1ec = FUN_3ab8_25b9();
      if (local_1ec == 0) {
        local_20 = 0xffff;
        local_1f6 = -1;
      }
      else {
        local_20 = local_28;
      }
    }
  } while( true );
  while( true ) {
    local_8 = param_5;
    local_a = (uint **)param_4;
    puStack_c = &local_2c6;
    local_e = (uint *)0x22b2;
    puStack_10 = (uint *)0xe5c8;
    param_2 = (uint *)FUN_3ab8_4844();
    if ((int)param_2 < -99) goto LAB_3ab8_3a53;
    if (0 < (int)param_2) break;
LAB_3ab8_3a21:
    local_8 = param_4;
    local_a = (uint **)0x0;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe5ab;
    iVar3 = FUN_3ab8_2e0d();
    if (iVar3 == 0) goto LAB_3ab8_3a6e;
  }
  goto LAB_3ab8_3284;
  while( true ) {
    local_8 = param_5;
    local_a = (uint **)param_4;
    puStack_c = &local_2c6;
    local_e = (uint *)0x22b2;
    puStack_10 = (uint *)0xe66a;
    param_2 = (uint *)FUN_3ab8_4844();
    if ((int)param_2 < -99) goto LAB_3ab8_3a53;
    if (0 < (int)param_2) break;
LAB_3ab8_3ac2:
    local_8 = param_4;
    local_a = (uint **)0x1;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe64d;
    iVar3 = FUN_3ab8_2e0d();
    if (iVar3 == 0) goto LAB_3ab8_3a6e;
  }
  goto LAB_3ab8_3284;
LAB_3ab8_3a6e:
  local_2a = 0;
  local_8 = &local_286;
  local_a = (uint **)param_4;
  puStack_c = (uint *)0x22b2;
  puVar7 = (uint *)0x22b2;
  local_e = (uint *)0xe600;
  func_0x00024c86();
  local_8 = param_5;
  local_a = (uint **)param_4;
  puStack_c = &local_2c6;
  local_e = (uint *)0x22b2;
  puStack_10 = (uint *)0xe611;
  param_2 = (uint *)FUN_3ab8_4844();
  if ((int)param_2 < -99) {
LAB_3ab8_3a53:
    local_8 = &local_286;
    local_a = (uint **)param_4;
    puStack_c = (uint *)0x22b2;
    local_e = (uint *)0xe5e0;
    func_0x00024c86();
    return 0xff9c;
  }
  goto LAB_3ab8_3284;
}



/* 3ab8:4844  FUN_3ab8_4844  1004 bytes, 1 callers */

int __cdecl16far FUN_3ab8_4844(int *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_60b;
  uint local_60a;
  uint local_608;
  int local_5f4;
  int local_5f2;
  undefined1 local_5ee [80];
  uint local_59e;
  uint local_59c;
  int local_59a;
  int local_598;
  uint auStack_596 [704];
  int local_16;
  int local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  
  FUN_21f2_0ebc();
  local_59a = 0;
  puStack_a = (undefined1 *)0x20;
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0xf3ea;
  FUN_1000_0599();
  puStack_a = (undefined1 *)0x798a;
  puStack_c = (undefined1 *)0xdef;
  uStack_e = 0xf3f8;
  func_0x00012276();
  puStack_a = (undefined1 *)0xf3ff;
  func_0x00010526();
  puStack_a = (undefined1 *)0x14;
  puStack_c = (undefined1 *)0xdef;
  uStack_e = 0xf40c;
  FUN_1000_0599();
  puStack_a = local_5ee;
  puStack_c = (undefined1 *)0xdef;
  uStack_e = 0xf41b;
  FUN_21f2_3454();
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0xf425;
  iVar3 = func_0x00024ce4();
  if (iVar3 != 3) {
    puStack_a = local_5ee;
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0xf439;
    FUN_21f2_2d26();
  }
  puStack_a = local_5ee;
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0xf449;
  FUN_21f2_2d26();
  puStack_a = local_5ee;
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0xf459;
  FUN_21f2_2d26();
  local_14 = 0;
  local_598 = 1;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0xf46e;
  uVar4 = func_0x00024ce4();
  if (3 < uVar4) {
    puStack_a = (undefined1 *)0x10;
    puStack_c = (undefined1 *)param_2;
    uStack_e = 0x22b2;
    uStack_10 = 0xf488;
    iVar3 = func_0x000276d7();
    if (iVar3 != 0) {
      puStack_a = (undefined1 *)0x1;
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xf499;
      FUN_1000_0599();
      puStack_a = (undefined1 *)0xf4a0;
      func_0x00010526();
      puStack_a = (undefined1 *)0xbf48;
      puStack_c = (undefined1 *)0xdef;
      uStack_e = 0xf4ad;
      func_0x00024c86();
      puStack_a = (undefined1 *)0xbf48;
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xf4bc;
      FUN_21f2_2d26();
      puStack_a = (undefined1 *)0x6;
      puStack_c = (undefined1 *)0x1;
      uStack_e = 0x12;
      uStack_10 = 0xbf48;
      local_12 = 0x22b2;
      local_14 = 0xf4d7;
      FUN_1000_02b5();
      puStack_a = (undefined1 *)0x22;
      puStack_c = (undefined1 *)0xdef;
      uStack_e = 0xf4e7;
      FUN_1000_0599();
      puStack_a = (undefined1 *)0x1e2;
      puStack_c = (undefined1 *)0xdef;
      uStack_e = 0xf4f5;
      func_0x00012276();
      puStack_a = (undefined1 *)0x11f2;
      puStack_c = (undefined1 *)0xf500;
      func_0x000121f9();
      *param_1 = 0;
      return -100;
    }
  }
  if (((*(int *)0xa62 == 0x1b) && (1 < *(byte *)0x13b)) && (*(char *)0xd74 != '\0')) {
    local_59a = 2;
  }
  while( true ) {
    puStack_a = (undefined1 *)0x0;
    puStack_c = local_5ee;
    uStack_e = 0x22b2;
    uStack_10 = 0xf53b;
    iVar3 = func_0x000276d7();
    while (iVar3 == 0) {
      local_14 = local_14 + 1;
      if (local_14 < 0x15f) {
        iVar5 = local_14 * 0xf + param_3;
        puStack_c = (undefined1 *)0x22b2;
        uStack_e = 0xf562;
        puStack_a = (undefined1 *)iVar5;
        FUN_21f2_3454();
        iVar3 = local_14;
        *(undefined1 *)(iVar5 + 0xe) = 0;
        if ((local_60b & 1) != 0) {
          *(undefined1 *)(iVar5 + 0xe) = 1;
        }
        auStack_596[local_14 * 2] = local_60a;
        auStack_596[iVar3 * 2 + 1] = local_608;
      }
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0xf594;
      iVar3 = func_0x000276cc();
    }
    *param_1 = local_14;
    if (0x15e < local_14) {
      local_14 = 0x15e;
    }
    if (*(char *)0x13a == '\0') {
      for (local_5f2 = local_598; local_5f2 < local_14; local_5f2 = local_5f2 + 1) {
        local_16 = local_5f2;
        local_5f4 = local_5f2;
        while (local_5f4 = local_5f4 + 1, local_5f4 <= local_14) {
          puStack_a = (undefined1 *)(local_5f4 * 0xf + param_3);
          puStack_c = (undefined1 *)0x22b2;
          uStack_e = 0xf6b5;
          iVar3 = func_0x00024cb8();
          if (iVar3 < 0) {
            local_16 = local_5f4;
          }
        }
        if (local_5f2 < local_16) {
          puVar6 = (undefined2 *)(local_5f2 * 0xf + param_3);
          puVar8 = &local_12;
          puVar7 = puVar6;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined2 *)(local_16 * 0xf + param_3);
          puVar8 = puVar7;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar6 = *(undefined1 *)puVar8;
          puVar8 = &local_12;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
        }
      }
    }
    else {
      for (local_5f2 = local_598; local_5f2 < local_14; local_5f2 = local_5f2 + 1) {
        local_16 = local_5f2;
        local_5f4 = local_5f2;
        while (iVar3 = local_16, local_5f4 = local_5f4 + 1, local_5f4 <= local_14) {
          if ((auStack_596[local_16 * 2 + 1] <= auStack_596[local_5f4 * 2 + 1]) &&
             ((auStack_596[local_5f4 * 2 + 1] != auStack_596[local_16 * 2 + 1] ||
              (auStack_596[local_16 * 2] < auStack_596[local_5f4 * 2])))) {
            local_16 = local_5f4;
          }
        }
        if (local_5f2 < local_16) {
          local_59e = auStack_596[local_5f2 * 2];
          local_59c = auStack_596[local_5f2 * 2 + 1];
          uVar4 = auStack_596[local_16 * 2 + 1];
          auStack_596[local_5f2 * 2] = auStack_596[local_16 * 2];
          auStack_596[local_5f2 * 2 + 1] = uVar4;
          auStack_596[iVar3 * 2] = local_59e;
          auStack_596[iVar3 * 2 + 1] = local_59c;
          puVar6 = (undefined2 *)(local_5f2 * 0xf + param_3);
          puVar8 = &local_12;
          puVar7 = puVar6;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined2 *)(local_16 * 0xf + param_3);
          puVar8 = puVar7;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar6 = *(undefined1 *)puVar8;
          puVar8 = &local_12;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
        }
      }
    }
    if (local_59a == 0) break;
    local_598 = local_14 + 1;
    puStack_a = local_5ee;
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0xf744;
    FUN_21f2_3454();
    puStack_a = (undefined1 *)0x22b2;
    puStack_c = (undefined1 *)0xf74e;
    iVar3 = func_0x00024ce4();
    if (iVar3 != 3) {
      puStack_a = local_5ee;
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xf762;
      FUN_21f2_2d26();
    }
    puStack_a = local_5ee;
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0xf772;
    FUN_21f2_2d26();
    puStack_a = local_5ee;
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0xf78e;
    FUN_21f2_2d26();
    local_59a = local_59a + -1;
    if (9 < *(byte *)0x13b) {
      local_59a = 0;
    }
  }
  return local_14;
}



/* 3000:f7b0  FUN_3000_f7b0  96 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

void FUN_3000_f7b0(undefined2 param_1,undefined2 ****param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 **ppuVar6;
  uint *puVar7;
  undefined1 **ppuVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  byte bVar12;
  char cVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined2 ****extraout_DX;
  undefined2 ******ppppppuVar20;
  uint uVar21;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined1 **ppuVar22;
  uint *puVar23;
  uint *puVar24;
  undefined2 **ppuVar25;
  undefined2 *puVar26;
  undefined2 *unaff_DI;
  int ***pppiVar27;
  undefined2 unaff_ES;
  undefined2 ***pppuVar28;
  undefined2 ****ppppuVar29;
  undefined2 ****ppppuVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar33;
  bool bVar34;
  undefined1 uVar35;
  undefined4 uVar36;
  undefined2 *puVar37;
  uint *puVar38;
  undefined4 auStack_6b2 [75];
  undefined1 *apuStack_586 [4];
  char cStack_57e;
  byte bStack_57d;
  uint uStack_566;
  int iStack_564;
  char cStack_55e;
  byte bStack_55d;
  byte bStack_556;
  char cStack_555;
  char cStack_554;
  uint auStack_550 [6];
  int iStack_544;
  uint uStack_542;
  undefined2 uStack_540;
  uint uStack_53e;
  undefined2 uStack_53c;
  uint uStack_53a;
  int iStack_538;
  byte bStack_536;
  char cStack_535;
  char cStack_534;
  undefined4 uStack_530;
  uint *puStack_52c;
  undefined2 *apuStack_524 [3];
  int iStack_518;
  uint uStack_516;
  int iStack_514;
  uint uStack_512;
  undefined2 uStack_510;
  uint uStack_50e;
  int iStack_50c;
  byte bStack_50a;
  char cStack_509;
  char cStack_508;
  int iStack_4e4;
  undefined2 ****ppppuStack_4e2;
  int iStack_4e0;
  undefined1 auStack_4de [6];
  undefined1 auStack_4d8 [10];
  int iStack_4ce;
  undefined2 **appuStack_4c6 [2];
  undefined1 auStack_4c2 [2];
  undefined2 ****ppppuStack_4c0;
  undefined2 ******ppppppuStack_4be;
  int iStack_4bc;
  uint uStack_4ba;
  int iStack_4b8;
  undefined1 auStack_4b6 [6];
  undefined2 ***pppuStack_4b0;
  int iStack_4ae;
  undefined2 ***apppuStack_4ac [2];
  undefined2 local_4a8;
  undefined2 local_4a6;
  undefined1 auStack_4a4 [2];
  undefined1 auStack_4a2 [8];
  undefined2 ****ppppuStack_49a;
  uint local_498;
  undefined2 ****ppppuStack_496;
  int iStack_494;
  undefined4 uStack_492;
  undefined1 auStack_48e [2];
  undefined1 auStack_48c [6];
  int iStack_486;
  char local_484;
  undefined2 ****ppppuStack_482;
  undefined2 ****ppppuStack_480;
  int iStack_47e;
  undefined2 ***pppuStack_47c;
  undefined4 uStack_47a;
  undefined2 ****ppppuStack_476;
  int iStack_474;
  undefined2 auStack_472 [8];
  int iStack_462;
  undefined2 uStack_460;
  undefined2 ***apppuStack_45a [5];
  uint uStack_450;
  int iStack_44e;
  uint uStack_44c;
  undefined2 ****ppppuStack_44a;
  int iStack_448;
  undefined2 ****ppppuStack_446;
  undefined2 uStack_444;
  undefined2 uStack_442;
  undefined2 uStack_440;
  undefined1 auStack_43e [2];
  int iStack_43c;
  char local_436;
  undefined2 ***apppuStack_434 [202];
  undefined2 ***apppuStack_2a0 [25];
  uint uStack_26e;
  int iStack_26c;
  undefined1 auStack_26a [2];
  undefined1 auStack_268 [2];
  undefined1 auStack_266 [2];
  undefined2 ***apppuStack_264 [204];
  int iStack_cc;
  int iStack_ca;
  undefined2 ***apppuStack_c8 [19];
  uint uStack_a2;
  int iStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined4 uStack_96;
  int iStack_82;
  undefined2 ******ppppppuStack_80;
  undefined2 uStack_76;
  uint uStack_74;
  char local_62;
  undefined2 ****ppppuStack_60;
  undefined2 ****ppppuStack_5e;
  int iStack_5c;
  undefined2 ***apppuStack_5a [6];
  undefined2 uStack_4e;
  undefined2 ****ppppuStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 *******pppppppuStack_46;
  undefined2 ***pppuStack_42;
  undefined1 **ppuStack_40;
  undefined1 *puStack_3e;
  undefined1 *puStack_3a;
  undefined1 *puStack_38;
  undefined1 *puStack_36;
  undefined1 *puStack_34;
  undefined1 *puStack_32;
  int *piStack_30;
  undefined1 *puStack_2e;
  undefined1 auStack_2c [4];
  undefined2 ****ppppuStack_28;
  undefined1 *puStack_18;
  undefined2 *****pppppuStack_16;
  undefined2 ****ppppuStack_14;
  undefined2 *******pppppppuStack_e;
  undefined2 ****ppppuStack_a;
  undefined2 ******ppppppuStack_8;
  
  FUN_21f2_0ebc();
  local_4a8 = *(undefined2 *)0xab10;
  local_4a6 = *(undefined2 *)0xab12;
  local_436 = 0;
  local_484 = 0;
  local_62 = '\0';
  iVar15 = *(int *)0xa58;
  local_498 = (uint)(*(char *)0x133 != '\0');
  ppppppuStack_8 = (undefined2 ******)0x22b2;
  ppppuStack_a = (undefined2 ****)0xf7fd;
  bVar12 = func_0x0000db57();
  if ((bVar12 & 0xe) == 2) {
    if (local_498 == 0) {
      local_498 = 1;
    }
    else {
      local_498 = 0;
    }
  }
  if (local_498 == 0) {
    ppppppuStack_8 = (undefined2 ******)0x98c;
  }
  else {
    ppppppuStack_8 = (undefined2 ******)0x992;
  }
  ppppuStack_a = apppuStack_45a;
  pppppppuStack_e = (undefined2 *******)0xf832;
  func_0x00024c86();
  ppppppuStack_8 = (undefined2 ******)0x568;
  ppppuStack_a = apppuStack_2a0;
  pppppppuStack_e = (undefined2 *******)0xf842;
  FUN_21f2_3454();
  ppppppuStack_8 = (undefined2 ******)apppuStack_45a;
  ppppuStack_a = apppuStack_2a0;
  pppuVar28 = (undefined2 ***)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xf853;
  FUN_21f2_2d26();
  ppppuStack_476 = (undefined2 ****)*(undefined2 *)0x14c;
  iStack_474 = *(int *)0x14e;
  ppppuStack_482 = (undefined2 ****)*(undefined2 *)0x150;
  ppppuStack_60 = (undefined2 ****)*(undefined2 *)0x152;
  uStack_442 = *(undefined2 *)0xc0ac;
  uStack_440 = *(undefined2 *)0xc0ae;
  do {
    *(undefined1 *)0xd04 = 0;
    *(undefined1 *)0xd74 = 0;
    ppppppuStack_8 = (undefined2 ******)apppuStack_45a;
    ppppuStack_a = apppuStack_5a;
    pcVar10 = (code *)swi(0x3f);
    uVar36 = (*pcVar10)();
    uVar32 = (undefined2)((ulong)uVar36 >> 0x10);
    if ((int)uVar36 != 0) {
      ppppuStack_a = (undefined2 ****)0xf8ae;
      ppppppuStack_8 = (undefined2 ******)pppuVar28;
      func_0x0000ac64();
      uVar32 = extraout_DX_00;
LAB_2bb4_65d9_2:
      uVar32 = in(uVar32);
      *unaff_DI = uVar32;
      FUN_32b2_6eb1();
      FUN_32b2_75ec();
      ppppuStack_a = (undefined2 ****)0x32b2;
      FUN_32b2_6d14();
      ppppuStack_a = (undefined2 ****)0x32b2;
      FUN_32b2_6e99();
      ppppuStack_a = (undefined2 ****)0x32b2;
      FUN_32b2_717d();
      ppppuStack_14 = (undefined2 ****)0x214f;
      FUN_32b2_6eb1();
      ppppuStack_14 = (undefined2 ****)0x2157;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x215f;
      FUN_32b2_710c();
      ppppuStack_14 = (undefined2 ****)0x2168;
      FUN_32b2_6e99();
      ppppuStack_14 = (undefined2 ****)0x2170;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x2178;
      FUN_32b2_710c();
      ppppuStack_14 = (undefined2 ****)0x2181;
      FUN_32b2_6e99();
      ppppuStack_14 = (undefined2 ****)0x2186;
      FUN_32b2_718c();
      ppppuStack_14 = (undefined2 ****)0x218f;
      FUN_32b2_6e99();
      ppppuStack_14 = (undefined2 ****)0x2197;
      FUN_32b2_710c();
      FUN_32b2_6eb1();
      ppppuStack_28 = (undefined2 ****)*(undefined2 *)0x93c0;
      auStack_2c._2_2_ = 0x32b2;
      auStack_2c._0_2_ = 0x21c6;
      FUN_1def_2828();
      iVar19 = 0;
      ppppuStack_a = (undefined2 ****)0x0;
      pppppppuStack_e = (undefined2 *******)0x1def;
      FUN_32b2_6d14();
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_70dc();
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_710c();
      pppppuStack_16 = (undefined2 *****)0x32b2;
      puStack_18 = (undefined1 *)0x21fa;
      FUN_32b2_6eb1();
      pppppuStack_16 = (undefined2 *****)0x32b2;
      puStack_18 = (undefined1 *)0x2203;
      FUN_32b2_6d14();
      pppppuStack_16 = (undefined2 *****)0x32b2;
      puStack_18 = (undefined1 *)0x220c;
      FUN_32b2_70dc();
      pppppuStack_16 = (undefined2 *****)0x32b2;
      puStack_18 = (undefined1 *)0x2214;
      FUN_32b2_710c();
      FUN_32b2_6eb1();
      iVar15 = *(int *)0x93c0;
      uVar17 = *(uint *)0x93c6;
      ppppuStack_28 = (undefined2 ****)*(undefined2 *)0x93c4;
      auStack_2c._2_2_ = *(undefined2 *)0x93c2;
      auStack_2c._0_2_ = *(undefined2 *)0x93c0;
      puStack_2e = (undefined1 *)0x32b2;
      piStack_30 = (int *)0x2243;
      uStack_a2 = FUN_1def_2828();
      pppppppuStack_e = (undefined2 *******)(iVar19 + iVar15 + (uint)CARRY2(uStack_a2,uVar17));
      ppppuStack_14 = (undefined2 ****)0x225b;
      iStack_a0 = iVar19;
      join_0x00000008_0x00000000_ = (undefined2 ***)FUN_32b2_4d78();
      ppppuStack_a = (undefined2 ****)0x0;
      pppppppuStack_e = (undefined2 *******)((iVar15 - iStack_a0) - (uint)(uVar17 < uStack_a2));
      ppppuStack_14 = (undefined2 ****)0x227c;
      uStack_96 = FUN_32b2_4d78();
      ppppuStack_a = (undefined2 ****)0x32b2;
      FUN_32b2_6d94();
      ppppuStack_a = (undefined2 ****)0x32b2;
      FUN_32b2_710c();
      ppppuStack_a = (undefined2 ****)0x32b2;
      FUN_32b2_6e99();
      ppppuStack_14 = (undefined2 ****)0x22a8;
      FUN_32b2_6eb1();
      ppppuStack_14 = (undefined2 ****)0x22ad;
      puVar14 = (undefined2 *)FUN_32b2_75ec();
      uStack_9e = *puVar14;
      uStack_9c = puVar14[1];
      uStack_9a = puVar14[2];
      uStack_98 = puVar14[3];
      pppppppuStack_e = (undefined2 *******)0x22c5;
      FUN_32b2_6d14();
      pppppppuStack_e = (undefined2 *******)0x22ca;
      FUN_32b2_6fc7();
      pppppppuStack_e = (undefined2 *******)0x22d3;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x32b2;
      pppppuStack_16 = (undefined2 *****)0x22dd;
      FUN_32b2_6eb1();
      ppppuStack_14 = (undefined2 ****)0x32b2;
      pppppuStack_16 = (undefined2 *****)0x22e2;
      FUN_32b2_75fe();
      uVar33 = (undefined1 *)0xfff7 < &ppppuStack_14;
      uVar35 = &stack0x0000 == (undefined1 *)0xc;
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_6d14();
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_6e99();
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_6fc7();
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_7191();
      if ((bool)uVar33 || (bool)uVar35) {
        pppppppuStack_e = (undefined2 *******)0x32b2;
        FUN_32b2_6d14();
        pppppppuStack_e = (undefined2 *******)0x32b2;
        FUN_32b2_710c();
        pppppppuStack_e = (undefined2 *******)0x32b2;
        FUN_32b2_6d14();
        pppppppuStack_e = (undefined2 *******)0x32b2;
        FUN_32b2_710c();
        pppppppuStack_e = (undefined2 *******)0x32b2;
        FUN_32b2_718c();
        pppppppuStack_e = (undefined2 *******)0x32b2;
        FUN_32b2_7124();
      }
      else {
        pppppppuStack_e = (undefined2 *******)0x32b2;
        FUN_32b2_6d14();
        pppppppuStack_e = (undefined2 *******)0x32b2;
        FUN_32b2_7124();
      }
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_710c();
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_6eb1();
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_6d94();
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_710c();
      pppppppuStack_e = (undefined2 *******)0x32b2;
      FUN_32b2_6e99();
      pppppuStack_16 = (undefined2 *****)0x32b2;
      puStack_18 = (undefined1 *)0x237a;
      FUN_32b2_6eb1();
      pppppuStack_16 = (undefined2 *****)0x32b2;
      puStack_18 = (undefined1 *)0x237f;
      puVar14 = (undefined2 *)FUN_32b2_75ec();
      uStack_9e = *puVar14;
      uStack_9c = puVar14[1];
      uStack_9a = puVar14[2];
      uStack_98 = puVar14[3];
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6d14();
      puStack_18 = (undefined1 *)0x32b2;
      FUN_32b2_6eb1();
      puStack_18 = (undefined1 *)0x32b2;
      FUN_32b2_75fe();
      uVar33 = (undefined1 *)0xfff7 < &puStack_18;
      uVar35 = &stack0x0000 == (undefined1 *)0x10;
      ppppuStack_14 = (undefined2 ****)0x23be;
      ppppuVar29 = extraout_DX;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x23c6;
      FUN_32b2_6e99();
      ppppuStack_14 = (undefined2 ****)0x23cb;
      FUN_32b2_6fc7();
      ppppuStack_14 = (undefined2 ****)0x23d0;
      FUN_32b2_7191();
      if ((bool)uVar33 || (bool)uVar35) {
        ppppuStack_14 = (undefined2 ****)0x240c;
        FUN_32b2_6d14();
        ppppuStack_14 = (undefined2 ****)0x2414;
        FUN_32b2_710c();
        ppppuStack_14 = (undefined2 ****)0x241c;
        FUN_32b2_6d14();
        ppppuStack_14 = (undefined2 ****)0x2424;
        FUN_32b2_710c();
        ppppuStack_14 = (undefined2 ****)0x2429;
        FUN_32b2_7173();
        ppppuStack_14 = (undefined2 ****)0x2432;
        FUN_32b2_7124();
      }
      else {
        ppppuStack_14 = (undefined2 ****)0x23da;
        FUN_32b2_6d14();
        ppppuStack_14 = (undefined2 ****)0x23e2;
        FUN_32b2_710c();
        ppppuStack_14 = (undefined2 ****)0x23ea;
        FUN_32b2_6d14();
        ppppuStack_14 = (undefined2 ****)0x23f2;
        FUN_32b2_710c();
        ppppuStack_14 = (undefined2 ****)0x23f7;
        FUN_32b2_7173();
        ppppuStack_14 = (undefined2 ****)0x23ff;
        FUN_32b2_7124();
      }
      ppppuStack_14 = (undefined2 ****)0x243b;
      FUN_32b2_710c();
      ppppuStack_14 = (undefined2 ****)0x2443;
      FUN_32b2_6eb1();
      ppppuStack_14 = (undefined2 ****)0x244c;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x2454;
      FUN_32b2_70dc();
      ppppuStack_14 = (undefined2 ****)0x245d;
      FUN_32b2_710c();
      ppppuStack_14 = (undefined2 ****)0x2466;
      FUN_32b2_6e99();
      ppppuStack_14 = (undefined2 ****)0x246e;
      FUN_32b2_6eb1();
      ppppuStack_14 = (undefined2 ****)0x2477;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x247f;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x2488;
      FUN_32b2_7154();
      ppppuStack_14 = (undefined2 ****)0x2491;
      FUN_32b2_710c();
      ppppuStack_14 = (undefined2 ****)0x2499;
      FUN_32b2_6e99();
      ppppuStack_14 = (undefined2 ****)0x249e;
      FUN_32b2_7191();
      if ((bool)uVar33) {
        ppppuStack_14 = (undefined2 ****)0x24a9;
        FUN_32b2_6d14();
        ppppuStack_14 = (undefined2 ****)0x24b2;
        FUN_32b2_6eb1();
        ppppuStack_14 = (undefined2 ****)0x24ba;
        FUN_32b2_6d14();
        ppppuStack_14 = (undefined2 ****)0x24c2;
        FUN_32b2_6eb1();
        ppppuStack_14 = (undefined2 ****)0x24cb;
        FUN_32b2_6d14();
        ppppuStack_14 = (undefined2 ****)0x24d3;
        FUN_32b2_6eb1();
        unique0x10002592 = (undefined2 ***)CONCAT22((int)ppppuStack_28 + -0x5a,auStack_2c._2_2_);
        uStack_96 = CONCAT22(uStack_96._2_2_ + -0x5a,(uint)uStack_96);
      }
      ppppuStack_14 = (undefined2 ****)auStack_2c._2_2_;
      pppppuStack_16 = (undefined2 *****)0x32b2;
      puStack_18 = (undefined1 *)0x24ef;
      FUN_2bb4_63ae();
      ppppuStack_14 = (undefined2 ****)((int)ppppuStack_14 + (uint)uStack_96);
      pppppuStack_16 = (undefined2 *****)0x32b2;
      puStack_18 = (undefined1 *)0x250b;
      ppppuStack_a = ppppuVar29;
      FUN_2bb4_63ae();
      ppppuStack_14 = (undefined2 ****)((uint)uStack_96 + 0x32b2);
      uVar35 = CARRY2(uStack_96._2_2_,(uint)pppppppuStack_e) ||
               CARRY2(uStack_96._2_2_ + (int)pppppppuStack_e,(uint)(0xcd4d < (uint)uStack_96));
      ppppppuVar20 = (undefined2 ******)
                     (uStack_96._2_2_ + (int)pppppppuStack_e + (uint)(0xcd4d < (uint)uStack_96));
      pppppuStack_16 = (undefined2 *****)0x32b2;
      puStack_18 = (undefined1 *)0x2527;
      iVar15 = FUN_2bb4_63ae();
      ppppuStack_14 = (undefined2 ****)0x2538;
      pppppppuStack_e = (undefined2 *******)ppppppuVar20;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x2540;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x2545;
      FUN_32b2_7191();
      uVar33 = 0;
      if ((bool)uVar35) {
        ppppuStack_14 = (undefined2 ****)0x254f;
        FUN_32b2_6d14();
        ppppuStack_14 = (undefined2 ****)0x2554;
        FUN_32b2_6fd6();
        ppppuStack_14 = (undefined2 ****)0x255c;
        FUN_32b2_6eb1();
        ppppuStack_14 = (undefined2 ****)-iVar15;
        uVar21 = (0xb4 - (int)pppppppuStack_e) - (uint)(iVar15 != 0);
        pppppuStack_16 = (undefined2 *****)0x32b2;
        puStack_18 = (undefined1 *)0x256d;
        uVar17 = uVar21;
        uStack_76 = FUN_2bb4_63ae();
        bVar34 = ppppuStack_14 != (undefined2 ****)0x0;
        ppppuStack_14 = (undefined2 ****)-(int)ppppuStack_14;
        uVar33 = 0xb4 < uVar21 || 0xb4 - uVar21 < (uint)bVar34;
        ppppppuVar20 = (undefined2 ******)((0xb4 - uVar21) - (uint)bVar34);
        pppppuStack_16 = (undefined2 *****)0x32b2;
        puStack_18 = (undefined1 *)0x2586;
        uStack_74 = uVar17;
        iStack_82 = FUN_2bb4_63ae();
        ppppppuStack_80 = ppppppuVar20;
        iVar15 = iStack_82;
        pppppppuStack_e = (undefined2 *******)ppppppuVar20;
      }
      ppppuStack_14 = (undefined2 ****)0x25af;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x25b7;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x25bc;
      FUN_32b2_7191();
      if ((bool)uVar33) {
        ppppuStack_14 = (undefined2 ****)0x25c6;
        FUN_32b2_6d14();
        ppppuStack_14 = (undefined2 ****)0x25cb;
        FUN_32b2_6fd6();
        ppppuStack_14 = (undefined2 ****)0x25d3;
        FUN_32b2_6eb1();
        ppppuStack_14 = (undefined2 ****)-iVar15;
        uVar21 = -((int)pppppppuStack_e + (uint)(iVar15 != 0));
        pppppuStack_16 = (undefined2 *****)0x32b2;
        puStack_18 = (undefined1 *)0x25e6;
        uVar17 = uVar21;
        uStack_76 = FUN_2bb4_63ae();
        bVar34 = ppppuStack_14 != (undefined2 ****)0x0;
        ppppuStack_14 = (undefined2 ****)-(int)ppppuStack_14;
        ppppppuVar20 = (undefined2 ******)-(uVar21 + bVar34);
        pppppuStack_16 = (undefined2 *****)0x32b2;
        puStack_18 = (undefined1 *)0x2601;
        uStack_74 = uVar17;
        iStack_82 = FUN_2bb4_63ae();
        ppppppuStack_80 = ppppppuVar20;
        pppppppuStack_e = (undefined2 *******)ppppppuVar20;
      }
      ppppuStack_14 = (undefined2 ****)0x2629;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x2631;
      FUN_32b2_6e63();
      ppppuStack_14 = (undefined2 ****)0x2639;
      FUN_32b2_6d14();
      ppppuStack_14 = (undefined2 ****)0x2641;
      FUN_32b2_7124();
      ppppuStack_14 = (undefined2 ****)0x264a;
      FUN_32b2_710c();
      ppppuStack_14 = (undefined2 ****)0x264f;
      pppppuStack_16 = (undefined2 *****)FUN_32b2_6f61();
      if (pppppuStack_16 < (undefined2 *****)0x64) {
        pppppuStack_16 = (undefined2 *****)0x64;
      }
      if (((undefined2 *****)0x270d < pppppuStack_16) && (pppppuStack_16 < (undefined2 *****)0x2713)
         ) {
        pppppuStack_16 = (undefined2 *****)0x2710;
      }
      puVar26 = (undefined2 *)0xb1ca;
      puVar14 = (undefined2 *)&stack0xffde;
      for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar4 = puVar26;
        puVar26 = puVar26 + 1;
        puVar37 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar4 = *puVar37;
      }
      return;
    }
    if (*(int *)0x158 != 0) goto LAB_2bb4_65d9_2;
    while( true ) {
      ppppppuStack_8 = (undefined2 ******)0x2;
      ppppuStack_a = (undefined2 ****)0x11;
      pppppppuStack_e = (undefined2 *******)0xf8c8;
      FUN_1000_0599();
      ppppppuStack_8 = (undefined2 ******)0xdef;
      ppppuStack_a = (undefined2 ****)0xf8cf;
      func_0x00010526();
      ppppppuStack_8 = (undefined2 ******)0x3;
      ppppuStack_a = (undefined2 ****)0x11;
      pppppppuStack_e = (undefined2 *******)0xf8dc;
      FUN_1000_0599();
      ppppppuStack_8 = (undefined2 ******)0xdef;
      ppppuStack_a = (undefined2 ****)0xf8e3;
      func_0x00010526();
      ppppppuStack_8 = (undefined2 ******)0x0;
      ppppuStack_a = (undefined2 ****)0x0;
      pppppppuStack_e = (undefined2 *******)0x7;
      ppppuStack_14 = (undefined2 ****)*(undefined2 *)0xa5e;
      pppppuStack_16 = (undefined2 *****)0x27f;
      puStack_18 = (undefined1 *)0xdef;
      func_0x0000f350();
      ppppppuStack_8 = (undefined2 ******)apppuStack_5a;
      ppppuStack_a = (undefined2 ****)0x860;
      pppppppuStack_e = (undefined2 *******)0xbf48;
      FUN_21f2_3454();
      *(undefined2 *)0xc22 = 1;
      ppppppuStack_8 = (undefined2 ******)0xffff;
      ppppuStack_a = (undefined2 ****)0x7;
      pppppppuStack_e = (undefined2 *******)0x14;
      ppppuStack_14 = (undefined2 ****)0xf93b;
      FUN_1000_02b5();
      ppppppuStack_8 = (undefined2 ******)0x94c;
      ppppuStack_a = param_2;
      pppppppuStack_e = (undefined2 *******)0xf94a;
      func_0x00024c86();
      ppppppuStack_8 = (undefined2 ******)apppuStack_45a;
      ppppuStack_a = param_2;
      pppppppuStack_e = (undefined2 *******)0xf959;
      FUN_21f2_2d26();
      ppppppuStack_8 = (undefined2 ******)0x952;
      ppppuStack_a = param_2;
      pppppppuStack_e = (undefined2 *******)0xf967;
      FUN_21f2_2d26();
      ppppppuStack_8 = (undefined2 ******)0x466;
      ppppuStack_a = param_2;
      pppppppuStack_e = (undefined2 *******)0xf975;
      FUN_21f2_2d26();
      if (local_498 != 0) {
        ppppppuStack_8 = (undefined2 ******)param_2;
        ppppuStack_a = (undefined2 ****)0x22b2;
        FUN_21f2_2d26();
        ppppppuStack_8 = (undefined2 ******)0xbf48;
        ppppuStack_a = (undefined2 ****)0x22b2;
        func_0x00024c86();
        *(undefined1 *)0xbf4c = 0;
        ppppppuStack_8 = (undefined2 ******)param_2;
        ppppuStack_a = (undefined2 ****)0x22b2;
        FUN_21f2_2d26();
        ppppppuStack_8 = (undefined2 ******)param_2;
        ppppuStack_a = (undefined2 ****)0x22b2;
        FUN_21f2_2d26();
        ppppppuStack_8 = (undefined2 ******)param_2;
        ppppuStack_a = (undefined2 ****)0x22b2;
        FUN_21f2_2d26();
        ppppppuStack_8 = (undefined2 ******)param_2;
        ppppuStack_a = (undefined2 ****)0x22b2;
        FUN_21f2_2d26();
        ppppppuStack_8 = (undefined2 ******)param_2;
        ppppuStack_a = (undefined2 ****)0x22b2;
        FUN_21f2_2d26();
      }
      ppppuStack_a = apppuStack_4ac;
      *(undefined2 *)0xc26 = 1;
      pppppppuStack_e = (undefined2 *******)0x1;
      ppppppuStack_8 = (undefined2 ******)ppppuStack_a;
      iStack_cc = FUN_1def_0904();
      iStack_4ae = 0;
      *(undefined2 *)0xc26 = 0;
      if ((iStack_cc != 3) || (local_498 == 0)) break;
      if (local_62 == '\0') {
        local_62 = '\x01';
      }
      else {
        local_62 = '\0';
      }
    }
    ppppppuStack_8 = (undefined2 ******)0x1bb4;
    pppuVar28 = (undefined2 ***)0x11f2;
    ppppuStack_a = (undefined2 ****)0xfa41;
    FUN_10ad_18a4();
    uVar32 = extraout_DX_01;
    if (*(int *)0x158 != 0) goto LAB_2bb4_65d9_2;
    if (iStack_486 == 1) {
      iStack_cc = 1;
    }
  } while (iStack_cc != 1);
  ppppppuStack_8 = (undefined2 ******)0x11f2;
  ppppuStack_a = (undefined2 ****)0xfa67;
  func_0x0000c3ca();
  ppppppuStack_8 = (undefined2 ******)0xd12;
  ppppuStack_a = (undefined2 ****)0x0;
  pppppppuStack_e = (undefined2 *******)0x885;
  ppppuVar29 = (undefined2 ****)0x22b2;
  iVar19 = func_0x00027724();
  if (iVar19 != 0) {
    ppppppuStack_8 = (undefined2 ******)apppuStack_2a0;
    ppppuStack_a = (undefined2 ****)0x22b2;
    ppppuVar29 = (undefined2 ****)0x11f2;
    FUN_13bf_0a03();
  }
  ppppuStack_a = (undefined2 ****)0xfa8d;
  ppppppuStack_8 = (undefined2 ******)ppppuVar29;
  iVar19 = FUN_3ab8_035c();
  if (iVar19 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x370;
    ppppuStack_a = ppppuVar29;
    FUN_13bf_0a03();
  }
  local_436 = *(char *)0xbf5e == 'f';
  *(undefined1 *)0xbf5c = 0;
  ppppppuStack_8 = (undefined2 ******)0x5b6;
  ppppuStack_a = (undefined2 ****)0xbf48;
  ppppuVar29 = (undefined2 ****)0x22b2;
  pppppppuStack_e = (undefined2 *******)0xfabe;
  iVar19 = func_0x00024cb8();
  if (iVar19 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x4a4;
    ppppuStack_a = (undefined2 ****)0x22b2;
    ppppuVar29 = (undefined2 ****)0x11f2;
    FUN_13bf_0a03();
  }
  ppppuStack_a = (undefined2 ****)0xfad2;
  ppppppuStack_8 = (undefined2 ******)ppppuVar29;
  iVar19 = FUN_3ab8_035c();
  ppppuVar30 = ppppuVar29;
  if (iVar19 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x370;
    ppppuVar30 = (undefined2 ****)0x11f2;
    ppppuStack_a = ppppuVar29;
    FUN_13bf_0a03();
  }
  ppppppuStack_8 = (undefined2 ******)&puStack_18;
  ppppuStack_a = &pppuStack_47c;
  pppppppuStack_e = &pppppppuStack_e;
  ppppuVar29 = (undefined2 ****)0x22b2;
  pppppuStack_16 = (undefined2 *****)0xfaff;
  ppppuStack_14 = ppppuVar30;
  func_0x000253ce();
  ppppppuStack_8 = (undefined2 ******)0x22b2;
  ppppuStack_a = (undefined2 ****)0xfb06;
  iVar19 = FUN_3ab8_035c();
  if (iVar19 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x370;
    ppppuStack_a = (undefined2 ****)0x22b2;
    ppppuVar29 = (undefined2 ****)0x11f2;
    FUN_13bf_0a03();
  }
  ppppuStack_a = (undefined2 ****)0xfb18;
  ppppppuStack_8 = (undefined2 ******)ppppuVar29;
  iVar19 = FUN_3ab8_035c();
  if (iVar19 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x370;
    ppppuStack_a = ppppuVar29;
    FUN_13bf_0a03();
  }
  ppppppuStack_8 = &ppppppuStack_4be;
  ppppuStack_a = &ppppuStack_446;
  pppppppuStack_e = (undefined2 *******)0xbf48;
  func_0x000253ce();
  ppppppuStack_8 = (undefined2 ******)uStack_444;
  ppppuStack_a = ppppuStack_446;
  pppppppuStack_e = (undefined2 *******)ppppppuStack_4be;
  uVar32 = extraout_DX_02;
  uStack_492._0_2_ = FUN_12c1_0061();
  iVar19 = *(int *)0x14a + iStack_4bc + (uint)CARRY2(*(uint *)0x148,(uint)pppppppuStack_e);
  uStack_492._2_2_ = uVar32;
  if ((iVar19 <= *(int *)0x13e) &&
     ((iVar19 < *(int *)0x13e || (*(uint *)0x148 + (int)pppppppuStack_e <= *(uint *)0x13c)))) {
    iVar19 = *(int *)0x14e + iStack_44e + (uint)CARRY2(*(uint *)0x14c,uStack_450);
    if ((iVar19 <= *(int *)0x142) &&
       ((((iVar19 < *(int *)0x142 || (*(uint *)0x14c + uStack_450 <= *(uint *)0x140)) &&
         ((int)pppuStack_47c + *(int *)0x150 <= *(int *)0x144)) &&
        (((uint)((int)uStack_492 + *(int *)0xc0ac) <= (uint)(*(int *)0xbefa + *(int *)0x166) &&
         ((int)(puStack_18 + *(int *)0x152) <= *(int *)0x146)))))) goto LAB_3ab8_50f9;
  }
  iStack_4e4 = 0;
  iVar19 = *(int *)0x14a + iStack_4bc + (uint)CARRY2(*(uint *)0x148,(uint)pppppppuStack_e);
  if (((iVar19 < *(int *)0x13e) ||
      ((iVar19 <= *(int *)0x13e && (*(uint *)0x148 + (int)pppppppuStack_e <= *(uint *)0x13c)))) ||
     (*(int *)0xbed2 == 0)) {
    iVar19 = *(int *)0x14e + iStack_44e + (uint)CARRY2(*(uint *)0x14c,uStack_450);
    if ((*(int *)0x142 <= iVar19) &&
       (((*(int *)0x142 < iVar19 || (*(uint *)0x140 < *(uint *)0x14c + uStack_450)) &&
        (*(int *)0xbed2 != 0)))) goto LAB_3ab8_5071;
    ppppppuStack_8 = (undefined2 ******)((int)pppuStack_47c + *(int *)0x150);
    ppppuStack_a = (undefined2 ****)(puStack_18 + *(int *)0x152);
    pppppppuStack_e = (undefined2 *******)(*(int *)0x14c + uStack_450);
    ppppuStack_14 = (undefined2 ****)((int)uStack_492 + *(int *)0x166);
    pcVar10 = (code *)swi(0x3f);
    iVar19 = (*pcVar10)();
    if (iVar19 == -1) goto LAB_3ab8_5071;
    iStack_4e4 = 0;
  }
  else {
LAB_3ab8_5071:
    iStack_4e4 = 1;
  }
  if (iStack_4e4 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x764;
    ppppuStack_a = (undefined2 ****)0x11f2;
    FUN_13bf_0a03();
  }
LAB_3ab8_50f9:
  ppppppuStack_8 = (undefined2 ******)*(undefined2 *)0xd12;
  ppppuStack_a = (undefined2 ****)0x11f2;
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  ppppppuStack_8 = (undefined2 ******)0xd12;
  ppppuStack_a = (undefined2 ****)0x0;
  pppppppuStack_e = (undefined2 *******)0x22b2;
  ppppuVar29 = (undefined2 ****)0x22b2;
  iVar19 = func_0x00027724();
  if (iVar19 != 0) {
    ppppppuStack_8 = (undefined2 ******)apppuStack_2a0;
    ppppuStack_a = (undefined2 ****)0x22b2;
    ppppuVar29 = (undefined2 ****)0x11f2;
    FUN_13bf_0a03();
  }
  ppppuStack_a = (undefined2 ****)0xfcaf;
  ppppppuStack_8 = (undefined2 ******)ppppuVar29;
  iVar19 = FUN_3ab8_035c();
  ppppuVar30 = ppppuVar29;
  if (iVar19 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x370;
    ppppuVar30 = (undefined2 ****)0x11f2;
    ppppuStack_a = ppppuVar29;
    FUN_13bf_0a03();
  }
  ppppuStack_a = (undefined2 ****)0xfcc1;
  ppppppuStack_8 = (undefined2 ******)ppppuVar30;
  iVar19 = FUN_3ab8_035c();
  ppppuStack_4c = ppppuVar30;
  if (iVar19 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x370;
    ppppuStack_4c = (undefined2 ****)0x11f2;
    ppppuStack_a = ppppuVar30;
    FUN_13bf_0a03();
  }
  *(undefined1 *)0xd98 = 0x67;
  ppppppuStack_8 = (undefined2 ******)auStack_4c2;
  ppppuStack_a = &pppuStack_4b0;
  pppppppuStack_e = (undefined2 *******)&pppppuStack_16;
  ppppuStack_14 = (undefined2 ****)appuStack_4c6;
  pppppuStack_16 = &ppppuStack_a;
  puStack_18 = auStack_4d8;
  ppppuStack_28 = (undefined2 ****)auStack_4b6;
  auStack_2c._2_2_ = auStack_4a2;
  auStack_2c._0_2_ = auStack_48e;
  puStack_2e = auStack_4a4;
  piStack_30 = &iStack_ca;
  puStack_32 = auStack_266;
  puStack_34 = auStack_48c;
  puStack_36 = auStack_43e;
  puStack_38 = auStack_268;
  puStack_3a = auStack_4de;
  puStack_3e = auStack_26a;
  ppuStack_40 = &puStack_18;
  pppuStack_42 = &pppuStack_47c;
  pppppppuStack_46 = &pppppppuStack_e;
  uStack_48 = 0xd7a;
  uStack_4a = 0xbf48;
  ppppuVar29 = (undefined2 ****)0x22b2;
  uStack_4e = 0xfd7c;
  iStack_cc = func_0x000253ce();
  pppuVar28 = (undefined2 ***)(0x27f - iVar15);
  if (0x1e < iStack_cc) {
    pppuVar28 = pppuStack_4b0;
  }
  ppppppuStack_8 = (undefined2 ******)0x22b2;
  ppppuStack_a = (undefined2 ****)0xfd93;
  iVar15 = FUN_3ab8_035c();
  if (iVar15 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x370;
    ppppuStack_a = (undefined2 ****)0x22b2;
    ppppuVar29 = (undefined2 ****)0x11f2;
    FUN_13bf_0a03();
  }
  ppppuStack_a = (undefined2 ****)0xfda5;
  ppppppuStack_8 = (undefined2 ******)ppppuVar29;
  iVar15 = FUN_3ab8_035c();
  if (iVar15 != 0) {
    ppppppuStack_8 = (undefined2 ******)0x370;
    ppppuStack_a = ppppuVar29;
    FUN_13bf_0a03();
  }
  ppppppuStack_8 = &ppppppuStack_4be;
  ppppuStack_a = &ppppuStack_446;
  pppppppuStack_e = (undefined2 *******)0xbf48;
  func_0x000253ce();
  ppppppuStack_8 = (undefined2 ******)0x194;
  ppppuStack_a = apppuStack_264;
  pppppppuStack_e = (undefined2 *******)0xfdda;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x194;
  ppppuStack_a = apppuStack_434;
  pppppppuStack_e = (undefined2 *******)0xfde9;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x65;
  ppppuStack_a = apppuStack_c8;
  pppppppuStack_e = (undefined2 *******)0xfdf8;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x16;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe06;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x16;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe14;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x16;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe22;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x16;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe30;
  FUN_3ab8_039a();
  if (local_436 == '\0') {
    ppppppuStack_8 = (undefined2 ******)0x20;
  }
  else {
    ppppppuStack_8 = (undefined2 ******)0x40;
  }
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe4a;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x10;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe58;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x100;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe66;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x10;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe74;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x100;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe82;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x10;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppppppuStack_e = (undefined2 *******)0xfe90;
  FUN_3ab8_039a();
  ppppppuStack_8 = (undefined2 ******)0x0;
  ppppuStack_a = (undefined2 ****)0x16;
  uStack_492 = func_0x00027932();
  if (*(int *)0xbed2 == 0) {
    pppppuStack_16 = (undefined2 *****)(*(uint *)0x148 + 1);
    ppppuStack_14 = (undefined2 ****)(*(int *)0x14a + (uint)(0xfffe < *(uint *)0x148));
    puStack_18 = (undefined1 *)0x22b2;
    uVar36 = func_0x00027932();
    uStack_47a = CONCAT22(((int)((ulong)uVar36 >> 0x10) + (uint)CARRY2((uint)uVar36,*(uint *)0xbc7e)
                          ) * 0x1000 + *(int *)0xbc80,(uint)uVar36 + *(uint *)0xbc7e);
  }
  else {
    pppppuStack_16 = (undefined2 *****)(*(uint *)0x148 + 1);
    ppppuStack_14 = (undefined2 ****)(*(int *)0x14a + (uint)(0xfffe < *(uint *)0x148));
    puStack_18 = (undefined1 *)0x22b2;
    uStack_47a = func_0x00027932();
  }
  puStack_18 = (undefined1 *)*(undefined2 *)0xbed2;
  func_0x000129e6();
  puVar38 = (uint *)0x148;
  uVar17 = *puVar38;
  *puVar38 = *puVar38 + (int)pppppppuStack_e;
  *(int *)0x14a = *(int *)0x14a + 0x22b2 + (uint)CARRY2(uVar17,(uint)pppppppuStack_e);
  puStack_18 = (undefined1 *)0x11f2;
  uVar36 = func_0x00027a04();
  puStack_18 = (undefined1 *)*(undefined2 *)0xc718;
  uStack_492 = uVar36;
  if (*(int *)0xbed2 == 0) {
    uVar36 = func_0x00027a04();
    uVar36 = CONCAT22(((int)((ulong)uVar36 >> 0x10) + (uint)CARRY2((uint)uVar36,*(uint *)0xb788)) *
                      0x1000 + *(int *)0xb78a,(uint)uVar36 + *(uint *)0xb788);
  }
  else {
    uVar36 = func_0x00027a04();
  }
  uStack_47a = uVar36;
  func_0x000129e6();
  puVar38 = (uint *)0x14c;
  uVar17 = *puVar38;
  *puVar38 = *puVar38 + uStack_450;
  *(int *)0x14e = *(int *)0x14e + iStack_44e + (uint)CARRY2(uVar17,uStack_450);
  puStack_18 = (undefined1 *)0x0;
  ppppuStack_28 = (undefined2 ****)0xffc7;
  iVar15 = func_0x00027932();
  ppppuStack_28 = (undefined2 ****)(iVar15 + *(int *)0xbe9a);
  auStack_2c._2_2_ = 0x22b2;
  auStack_2c._0_2_ = 0xffde;
  func_0x000129e6();
  ppppuStack_28 = (undefined2 ****)0x11f2;
  auStack_2c._2_2_ = 0xfff6;
  uVar32 = extraout_DX_03;
  uVar16 = FUN_12c1_0061();
  uStack_47a._0_2_ = *(undefined2 *)0xc0ac;
  uStack_47a._2_2_ = *(undefined2 *)0xc0ae;
  auStack_2c._2_2_ = 0x11f2;
  uVar31 = 0x11f2;
  auStack_2c._0_2_ = 0x22;
  uStack_492._0_2_ = uVar16;
  uStack_492._2_2_ = uVar32;
  ppppuStack_28 = (undefined2 ****)(int)uStack_47a;
  func_0x000129e6();
  for (ppppuStack_49a = (undefined2 ****)0x1; (int)ppppuStack_49a <= (int)pppuStack_47c;
      ppppuStack_49a = (undefined2 ****)((int)ppppuStack_49a + 1)) {
    puVar37 = (undefined2 *)func_0x00000398();
    puVar26 = (undefined2 *)puVar37;
    puVar14 = auStack_472;
    for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar4 = puVar26;
      puVar26 = puVar26 + 1;
      *puVar5 = *puVar4;
    }
    ppppuStack_28 = (undefined2 ****)0x0;
    auStack_2c._2_2_ = 0x62;
    iStack_462 = FUN_12c1_0061();
    iStack_462 = iStack_462 + *(int *)0xc0ac;
    uStack_460 = *(undefined2 *)0xc0ae;
    uVar31 = 0;
    apuStack_524[0] = (undefined2 *)func_0x00000398();
    puVar26 = (undefined2 *)apuStack_524[0];
    puVar14 = auStack_472;
    for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar4 = puVar26;
      puVar26 = puVar26 + 1;
      puVar37 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar4 = *puVar37;
    }
  }
  auStack_2c._2_2_ = 0xbc;
  ppppuStack_28 = (undefined2 ****)uVar31;
  iVar15 = FUN_12c1_0061();
  *(int *)0xc0ac = *(int *)0xc0ac + iVar15;
  *(int *)0x150 = *(int *)0x150 + (int)pppuStack_47c;
  lVar9 = (long)(int)puStack_18;
  ppppuStack_28 = (undefined2 ****)0x11f2;
  auStack_2c._2_2_ = 0xf4;
  uStack_492 = lVar9 * 0xc;
  uVar36 = func_0x00027932();
  uStack_47a._0_2_ = (uint)uVar36 + *(uint *)0xbe82;
  uStack_47a._2_2_ =
       ((int)((ulong)uVar36 >> 0x10) + (uint)CARRY2((uint)uVar36,*(uint *)0xbe82)) * 0x1000 +
       *(int *)0xbe84;
  ppppuStack_28 = (undefined2 ****)0x0;
  puStack_32 = (undefined1 *)0x22b2;
  puStack_34 = (undefined1 *)0x118;
  piStack_30 = (int *)(int)uStack_47a;
  puStack_2e = (undefined1 *)uStack_47a._2_2_;
  auStack_2c = (undefined1  [4])(lVar9 * 0xc);
  func_0x000129e6();
  *(int *)0x152 = (int)(puStack_18 + *(int *)0x152);
  ppppuStack_28 = (undefined2 ****)*(undefined2 *)0xd12;
  auStack_2c._2_2_ = 0x11f2;
  auStack_2c._0_2_ = 299;
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  *(undefined1 *)0xd14 = 2;
  local_484 = '\0';
  local_4a8 = *(undefined2 *)0xab10;
  local_4a6 = *(undefined2 *)0xab12;
  if ((iStack_ca != *(int *)0xa68) || (*(int *)0x1b3e - (int)pppuVar28 != *(int *)0xa58)) {
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x171;
    func_0x000297e6();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x182;
    func_0x00029b85();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x18b;
    func_0x0002996b();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x194;
    func_0x00029983();
    iStack_4e4 = *(int *)0x1b3e - *(int *)0xa58;
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1a8;
    FUN_28b3_0d8b();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1b0;
    FUN_28b3_0d8b();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1b5;
    FUN_28b3_1172();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1be;
    func_0x0002996b();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1c7;
    func_0x00029b6d();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1d0;
    func_0x00029983();
    local_484 = '\x01';
  }
  pcVar10 = (code *)swi(0x3f);
  (*pcVar10)();
  iStack_47e = 0;
  uVar32 = 0x22b2;
  for (ppppuStack_480 = (undefined2 ****)0x1;
      (iStack_47e < 1 && ((iStack_47e < 0 || (ppppuStack_480 < 0x17))));
      ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + 1)) {
    auStack_2c._2_2_ = 0x20d;
    ppppuStack_28 = (undefined2 ****)uVar32;
    uVar36 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar36 + 0x14);
    *pbVar1 = *pbVar1 & 0xf7;
    iStack_47e = iStack_47e + (uint)(0xfffe < ppppuStack_480);
    uVar32 = 0;
  }
  iStack_47e = 0;
  for (ppppuStack_480 = (undefined2 ****)0x17;
      (iStack_47e <= *(int *)0x14a &&
      ((iStack_47e < *(int *)0x14a || (ppppuStack_480 <= *(uint *)0x148))));
      ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + 1)) {
    if (local_484 != '\0') {
      auStack_2c._2_2_ = 0x267;
      ppppuStack_28 = (undefined2 ****)uVar32;
      puVar37 = (undefined2 *)func_0x0000013f();
      puVar14 = (undefined2 *)puVar37;
      ppuVar25 = apuStack_524;
      for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
        ppuVar6 = ppuVar25;
        ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *(undefined2 *)ppuVar6 = *puVar4;
      }
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x28d;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x2a6;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x2bf;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x2d8;
      func_0x00029b6d();
      func_0x00029983();
      ppppuStack_28 = (undefined2 ****)0x22b2;
      uVar32 = 0;
      auStack_2c._2_2_ = 0x2eb;
      puStack_52c = (uint *)func_0x0000013f();
      puVar23 = (uint *)puStack_52c;
      ppuVar25 = apuStack_524;
      for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar38 = puVar23;
        puVar23 = puVar23 + 1;
        ppuVar6 = ppuVar25;
        ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
        *puVar38 = *(uint *)ppuVar6;
      }
    }
    auStack_2c._2_2_ = 0x30f;
    ppppuStack_28 = (undefined2 ****)uVar32;
    uVar36 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar36 + 0x14);
    *pbVar1 = *pbVar1 & 0xfd;
    ppppuStack_28 = (undefined2 ****)0x0;
    auStack_2c._2_2_ = 0x327;
    uVar36 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar36 + 0x14);
    *pbVar1 = *pbVar1 & 0xfb;
    ppppuStack_28 = (undefined2 ****)0x0;
    auStack_2c._2_2_ = 0x33f;
    uVar36 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar36 + 0x14);
    *pbVar1 = *pbVar1 | 8;
    ppppuStack_28 = (undefined2 ****)0x0;
    uVar32 = 0x11f2;
    auStack_2c._2_2_ = 0x357;
    FUN_13bf_0a80();
    iStack_47e = iStack_47e + (uint)(0xfffe < ppppuStack_480);
  }
  iStack_47e = 0;
  for (ppppuStack_480 = (undefined2 ****)0x1;
      (iStack_47e <= iStack_474 && ((iStack_47e < iStack_474 || (ppppuStack_480 <= ppppuStack_476)))
      ); ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + 1)) {
    auStack_2c._2_2_ = 0x391;
    ppppuStack_28 = (undefined2 ****)uVar32;
    uVar36 = func_0x00000271();
    pbVar1 = (byte *)((int)uVar36 + 0x1e);
    *pbVar1 = *pbVar1 & 0xf7;
    iStack_47e = iStack_47e + (uint)((undefined2 ****)0xfffe < ppppuStack_480);
    uVar32 = 0;
  }
  iStack_47e = iStack_474 + (uint)((undefined2 ****)0xfffe < ppppuStack_476);
  ppppuStack_480 = ppppuStack_476;
  while( true ) {
    ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + 1);
    if ((*(int *)0x14e < iStack_47e) ||
       ((*(int *)0x14e <= iStack_47e && ((undefined2 ****)*(undefined2 *)0x14c < ppppuStack_480))))
    break;
    if (local_484 != '\0') {
      auStack_2c._2_2_ = 0x3ed;
      ppppuStack_28 = (undefined2 ****)uVar32;
      puVar37 = (undefined2 *)func_0x00000271();
      puVar14 = (undefined2 *)puVar37;
      ppuVar25 = apuStack_524;
      for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
        ppuVar6 = ppuVar25;
        ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *(undefined2 *)ppuVar6 = *puVar4;
      }
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x413;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x42c;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x445;
      func_0x00029b6d();
      func_0x00029983();
      ppppuStack_28 = (undefined2 ****)0x22b2;
      uVar32 = 0;
      auStack_2c._2_2_ = 0x458;
      puStack_52c = (uint *)func_0x00000271();
      puVar23 = (uint *)puStack_52c;
      ppuVar25 = apuStack_524;
      for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar38 = puVar23;
        puVar23 = puVar23 + 1;
        ppuVar6 = ppuVar25;
        ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
        *puVar38 = *(uint *)ppuVar6;
      }
    }
    auStack_2c._2_2_ = 0x47c;
    ppppuStack_28 = (undefined2 ****)uVar32;
    uVar36 = func_0x00000271();
    pbVar1 = (byte *)((int)uVar36 + 0x1e);
    *pbVar1 = *pbVar1 & 0xfd;
    ppppuStack_28 = (undefined2 ****)0x0;
    auStack_2c._2_2_ = 0x494;
    uVar36 = func_0x00000271();
    pbVar1 = (byte *)((int)uVar36 + 0x1e);
    *pbVar1 = *pbVar1 & 0xfb;
    ppppuStack_28 = (undefined2 ****)0x0;
    uVar32 = 0;
    auStack_2c._2_2_ = 0x4ac;
    uVar36 = func_0x00000271();
    pbVar1 = (byte *)((int)uVar36 + 0x1e);
    *pbVar1 = *pbVar1 | 8;
    iStack_47e = iStack_47e + (uint)((undefined2 ****)0xfffe < ppppuStack_480);
  }
  for (ppppuStack_49a = (undefined2 ****)0x1; ppppuVar29 = ppppuStack_482,
      (int)ppppuStack_49a <= (int)ppppuStack_482;
      ppppuStack_49a = (undefined2 ****)((int)ppppuStack_49a + 1)) {
    ppppuStack_28 = (undefined2 ****)0x4c8;
    uVar36 = func_0x00000398();
    pbVar1 = (byte *)((int)uVar36 + 0x16);
    *pbVar1 = *pbVar1 & 0xf7;
  }
  while (ppppuStack_49a = (undefined2 ****)((int)ppppuVar29 + 1),
        (int)ppppuStack_49a <= *(int *)0x150) {
    if (local_484 != '\0') {
      ppppuStack_28 = (undefined2 ****)0x4ff;
      puVar37 = (undefined2 *)func_0x00000398();
      puVar14 = (undefined2 *)puVar37;
      ppuVar25 = apuStack_524;
      for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
        ppuVar6 = ppuVar25;
        ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *(undefined2 *)ppuVar6 = *puVar4;
      }
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x56c;
      func_0x00029b6d();
      func_0x0002996b();
      FUN_28b3_117c();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x5a5;
      func_0x00029b6d();
      func_0x0002996b();
      FUN_28b3_117c();
      func_0x00029983();
      ppppuStack_28 = (undefined2 ****)0x5c2;
      uStack_530 = (undefined2 ****)func_0x00000398();
      puVar23 = (uint *)uStack_530;
      ppuVar25 = apuStack_524;
      for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar38 = puVar23;
        puVar23 = puVar23 + 1;
        ppuVar6 = ppuVar25;
        ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
        *puVar38 = *(uint *)ppuVar6;
      }
    }
    ppppuStack_28 = (undefined2 ****)0x5e1;
    uVar36 = func_0x00000398();
    pbVar1 = (byte *)((int)uVar36 + 0x16);
    *pbVar1 = *pbVar1 & 0xfd;
    ppppuStack_28 = (undefined2 ****)0x5f4;
    uVar36 = func_0x00000398();
    pbVar1 = (byte *)((int)uVar36 + 0x16);
    *pbVar1 = *pbVar1 & 0xfb;
    ppppuStack_28 = (undefined2 ****)0x607;
    uVar36 = func_0x00000398();
    pbVar1 = (byte *)((int)uVar36 + 0x16);
    *pbVar1 = *pbVar1 | 8;
    ppppuVar29 = ppppuStack_49a;
  }
  for (ppppuStack_49a = (undefined2 ****)0x1; ppppuVar29 = ppppuStack_60,
      (int)ppppuStack_49a <= (int)ppppuStack_60;
      ppppuStack_49a = (undefined2 ****)((int)ppppuStack_49a + 1)) {
    ppppuStack_28 = (undefined2 ****)0x62f;
    uVar36 = func_0x000003ef();
    pbVar1 = (byte *)((int)uVar36 + 10);
    *pbVar1 = *pbVar1 & 0xf7;
  }
  while (ppppuStack_49a = (undefined2 ****)((int)ppppuVar29 + 1),
        (int)ppppuStack_49a <= *(int *)0x152) {
    if (local_484 != '\0') {
      ppppuStack_28 = (undefined2 ****)0x661;
      puVar37 = (undefined2 *)func_0x000003ef();
      puVar14 = (undefined2 *)puVar37;
      ppuVar25 = apuStack_524;
      for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
        ppuVar6 = ppuVar25;
        ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *(undefined2 *)ppuVar6 = *puVar4;
      }
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x686;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      ppppuStack_28 = (undefined2 ****)0x69f;
      func_0x00029b6d();
      func_0x00029983();
      ppppuStack_28 = (undefined2 ****)0x6ae;
      uStack_530 = (undefined2 ****)func_0x000003ef();
      puVar23 = (uint *)uStack_530;
      ppuVar25 = apuStack_524;
      for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar38 = puVar23;
        puVar23 = puVar23 + 1;
        ppuVar6 = ppuVar25;
        ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
        *puVar38 = *(uint *)ppuVar6;
      }
    }
    ppppuStack_28 = (undefined2 ****)0x6cd;
    uVar36 = func_0x000003ef();
    pbVar1 = (byte *)((int)uVar36 + 10);
    *pbVar1 = *pbVar1 & 0xfd;
    ppppuStack_28 = (undefined2 ****)0x6e0;
    uVar36 = func_0x000003ef();
    pbVar1 = (byte *)((int)uVar36 + 10);
    *pbVar1 = *pbVar1 & 0xfb;
    ppppuStack_28 = (undefined2 ****)0x6f3;
    uVar36 = func_0x000003ef();
    pbVar1 = (byte *)((int)uVar36 + 10);
    *pbVar1 = *pbVar1 | 8;
    ppppuVar29 = ppppuStack_49a;
  }
  if (local_498 == 0) {
    uVar32 = 0x11f2;
    ppppuStack_28 = (undefined2 ****)0x71c;
    func_0x0001470b();
  }
  else {
    func_0x0000c3ca();
    ppppuStack_28 = (undefined2 ****)0x1;
    auStack_2c._2_2_ = 0x19;
    auStack_2c._0_2_ = 0x7b4;
    puStack_2e = (undefined1 *)0x885;
    uVar32 = 0xdef;
    piStack_30 = (int *)0x73d;
    FUN_1000_02b5();
    if (local_62 == '\0') {
      uStack_530._0_2_ = (uint *)0x16;
      uStack_530._2_2_ = 0;
      iStack_494 = 0;
      for (ppppuStack_496 = (undefined2 ****)0x17;
          (iStack_494 <= *(int *)0x14a &&
          ((iStack_494 < *(int *)0x14a || (ppppuStack_496 <= *(uint *)0x148))));
          ppppuStack_496 = (undefined2 ****)((int)ppppuStack_496 + 1)) {
        auStack_2c._2_2_ = 0x7e8;
        ppppuStack_28 = (undefined2 ****)uVar32;
        puVar38 = (uint *)func_0x0000013f();
        puVar24 = (uint *)puVar38;
        puVar23 = &uStack_566;
        for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
          puVar7 = puVar23;
          puVar23 = puVar23 + 1;
          puVar3 = puVar24;
          puVar24 = puVar24 + 1;
          *puVar7 = *puVar3;
        }
        uVar32 = 0x11f2;
        ppppuStack_28 = (undefined2 ****)0x807;
        iVar15 = func_0x000125f1();
        if (iVar15 != 0) {
          bVar34 = 0xfffe < (uint *)uStack_530;
          uStack_530._0_2_ = (uint *)((int)(uint *)uStack_530 + 1);
          uStack_530._2_2_ = uStack_530._2_2_ + (uint)bVar34;
          ppppuStack_28 = (undefined2 ****)0x11f2;
          uVar32 = 0;
          auStack_2c._2_2_ = 0x823;
          puStack_52c = (uint *)func_0x0000013f();
          puVar24 = (uint *)puStack_52c;
          puVar23 = &uStack_566;
          for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar3 = puVar24;
            puVar24 = puVar24 + 1;
            puVar38 = puVar23;
            puVar23 = puVar23 + 1;
            *puVar3 = *puVar38;
          }
        }
        iStack_494 = iStack_494 + (uint)(0xfffe < ppppuStack_496);
      }
      *(uint *)0x148 = (uint)(uint *)uStack_530;
      *(int *)0x14a = uStack_530._2_2_;
      uStack_530 = (undefined2 ****)CONCAT22(iStack_474,ppppuStack_476);
      iStack_494 = iStack_474 + (uint)((undefined2 ****)0xfffe < ppppuStack_476);
      ppppuStack_496 = ppppuStack_476;
      while( true ) {
        ppppuStack_496 = (undefined2 ****)((int)ppppuStack_496 + 1);
        if ((*(int *)0x14e < iStack_494) ||
           ((*(int *)0x14e <= iStack_494 && ((undefined2 ****)*(undefined2 *)0x14c < ppppuStack_496)
            ))) break;
        auStack_2c._2_2_ = 0x892;
        ppppuStack_28 = (undefined2 ****)uVar32;
        puVar38 = (uint *)func_0x00000271();
        puVar24 = (uint *)puVar38;
        puVar23 = auStack_550;
        for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
          puVar7 = puVar23;
          puVar23 = puVar23 + 1;
          puVar3 = puVar24;
          puVar24 = puVar24 + 1;
          *puVar7 = *puVar3;
        }
        uVar32 = 0x11f2;
        ppppuStack_28 = (undefined2 ****)0x8b1;
        iVar15 = func_0x000125f1();
        if (iVar15 != 0) {
          uStack_530 = (undefined2 ****)
                       CONCAT22(uStack_530._2_2_ + (uint)((uint *)0xfffe < (uint *)uStack_530),
                                (undefined2 ****)((int)(uint *)uStack_530 + 1));
          ppppuStack_28 = (undefined2 ****)0x11f2;
          uVar32 = 0;
          auStack_2c._2_2_ = 0x8cd;
          puStack_52c = (uint *)func_0x00000271();
          puVar24 = (uint *)puStack_52c;
          puVar23 = auStack_550;
          for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar3 = puVar24;
            puVar24 = puVar24 + 1;
            puVar38 = puVar23;
            puVar23 = puVar23 + 1;
            *puVar3 = *puVar38;
          }
        }
        iStack_494 = iStack_494 + (uint)((undefined2 ****)0xfffe < ppppuStack_496);
      }
      *(undefined2 *)0x14c = (uint *)uStack_530;
      *(undefined2 *)0x14e = uStack_530._2_2_;
      ppppuStack_49a = ppppuStack_60;
      ppppuStack_4c0 = ppppuStack_60;
      while (ppppuStack_4c0 = (undefined2 ****)((int)ppppuStack_4c0 + 1),
            (int)ppppuStack_4c0 <= *(int *)0x152) {
        ppppuStack_28 = (undefined2 ****)0x90c;
        puVar37 = (undefined2 *)func_0x000003ef();
        puVar14 = (undefined2 *)puVar37;
        ppuVar25 = apuStack_524;
        for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
          ppuVar6 = ppuVar25;
          ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
          puVar4 = puVar14;
          puVar14 = puVar14 + 1;
          *(undefined2 *)ppuVar6 = *puVar4;
        }
        ppppuStack_28 = (undefined2 ****)0x92a;
        iVar15 = func_0x000125f1();
        if (iVar15 != 0) {
          ppppuStack_49a = (undefined2 ****)((int)ppppuStack_49a + 1);
          ppppuStack_28 = (undefined2 ****)0x93c;
          puStack_52c = (uint *)func_0x000003ef();
          puVar23 = (uint *)puStack_52c;
          ppuVar25 = apuStack_524;
          for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar38 = puVar23;
            puVar23 = puVar23 + 1;
            ppuVar6 = ppuVar25;
            ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
            *puVar38 = *(uint *)ppuVar6;
          }
        }
      }
      *(int *)0x152 = (int)ppppuStack_49a;
      for (ppppuStack_4c0 = (undefined2 ****)*(int *)0x150;
          (int)ppppuStack_482 < (int)ppppuStack_4c0;
          ppppuStack_4c0 = (undefined2 ****)((int)ppppuStack_4c0 + -1)) {
        ppppuStack_28 = (undefined2 ****)0x975;
        uVar36 = func_0x00000398();
        uStack_44c = (uint)*(byte *)((int)uVar36 + 0x15);
        ppppuStack_28 = (undefined2 ****)0x98a;
        iVar15 = func_0x000125f1();
        if (iVar15 == 0) {
          ppppuStack_28 = (undefined2 ****)0x998;
          uVar36 = func_0x00000398();
          *(undefined1 *)((int)uVar36 + 0x14) = 0x5a;
          ppppuStack_28 = (undefined2 ****)0x9ab;
          func_0x000190c7();
        }
      }
    }
    else {
      for (ppppuStack_49a = (undefined2 ****)0x0; (int)ppppuStack_49a < 0x10;
          ppppuStack_49a = (undefined2 ****)((int)ppppuStack_49a + 1)) {
        *(undefined1 *)(ppppuStack_49a + 0x5be) = 1;
        *(undefined1 *)(ppppuStack_49a + 0x5b6) = 1;
        *(char *)(ppppuStack_49a + 0x5c7) = (char)ppppuStack_49a << 4;
        for (iStack_486 = 0; iStack_486 < 0x10; iStack_486 = iStack_486 + 1) {
          iVar15 = (int)ppppuStack_49a * 0x10 + iStack_486;
          *(undefined1 *)(iVar15 + -0x4c78) = 1;
          *(undefined1 *)(iVar15 + -0x3e90) = 1;
        }
      }
    }
    func_0x0000c3ca();
    func_0x0000b6ea();
    ppppuStack_28 = (undefined2 ****)0x9cc;
    func_0x0001470b();
    *(undefined2 *)0xbc0 = 1;
    ppppuStack_28 = (undefined2 ****)0x11f2;
    auStack_2c._2_2_ = 0x9dd;
    FUN_1000_0599();
    ppppuStack_28 = (undefined2 ****)0x9e8;
    func_0x00012276();
    ppppuStack_28 = (undefined2 ****)0x11f2;
    auStack_2c._2_2_ = 0x9f5;
    func_0x00024c86();
    *(undefined1 *)(param_2 + 1) = 0;
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0xa0b;
    FUN_1000_0599();
    ppppuVar29 = (undefined2 ****)0x11f2;
    ppppuStack_28 = (undefined2 ****)0xa15;
    func_0x00012276();
    iStack_26c = 0;
    uStack_26e = 0;
    iStack_4b8 = 0;
    uStack_4ba = 0;
    iStack_43c = 0;
    iStack_4ce = 0;
    puVar18 = (undefined1 *)((int)ppppuStack_482 + (int)ppppuStack_60) + (int)ppppuStack_476;
    ppppuStack_44a = (undefined2 ****)(puVar18 + 0x16);
    iStack_448 = ((int)ppppuStack_482 >> 0xf) + ((int)ppppuStack_60 >> 0xf) +
                 (uint)CARRY2((uint)ppppuStack_482,(uint)ppppuStack_60) + iStack_474 +
                 (uint)CARRY2((uint)((int)ppppuStack_482 + (int)ppppuStack_60),(uint)ppppuStack_476)
                 + (uint)((undefined1 *)0xffe9 < puVar18);
    iStack_47e = 0;
    for (ppppuStack_480 = (undefined2 ****)0x1;
        (iStack_47e <= *(int *)0x14a &&
        ((iStack_47e < *(int *)0x14a || (ppppuStack_480 <= *(uint *)0x148))));
        ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + 1)) {
      auStack_2c._2_2_ = 0xa8c;
      ppppuStack_28 = ppppuVar29;
      uVar36 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar36 + 0x14);
      *pbVar1 = *pbVar1 & 0xfd;
      ppppuStack_28 = (undefined2 ****)0x0;
      ppppuVar29 = (undefined2 ****)0x0;
      auStack_2c._2_2_ = 0xaa4;
      uVar36 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar36 + 0x14);
      *pbVar1 = *pbVar1 & 0xfb;
      iStack_47e = iStack_47e + (uint)(0xfffe < ppppuStack_480);
    }
    ppppuStack_4e2 = (undefined2 ****)0x17;
    iStack_4e0 = 0;
    ppppuStack_480 = (undefined2 ****)0x1;
    iStack_47e = 0;
    ppppuStack_5e = ppppuStack_4e2;
    iStack_5c = iStack_4e0;
LAB_3ab8_6304:
    ppppuStack_28 = ppppuVar29;
    if ((iStack_47e < 1) && ((iStack_47e < 0 || (ppppuStack_480 < (undefined2 ****)0x17)))) {
      auStack_2c._2_2_ = 0xe9f;
      puVar38 = (uint *)func_0x0000013f();
      puVar24 = (uint *)puVar38;
      puVar23 = &uStack_566;
      for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar7 = puVar23;
        puVar23 = puVar23 + 1;
        puVar3 = puVar24;
        puVar24 = puVar24 + 1;
        *puVar7 = *puVar3;
      }
      ppppuVar29 = (undefined2 ****)0x0;
      if (local_62 != '\0') {
LAB_3ab8_6349:
        uStack_530 = (undefined2 ****)((ulong)uStack_530 & 0xffff0000);
        iStack_494 = iStack_5c;
        for (ppppuStack_496 = ppppuStack_5e;
            (iStack_494 <= *(int *)0x14a &&
            ((iStack_494 < *(int *)0x14a ||
             (ppppuStack_496 <= (undefined2 ****)*(undefined2 *)0x148))));
            ppppuStack_496 = (undefined2 ****)((int)ppppuStack_496 + 1)) {
          ppppuVar30 = (undefined2 ****)0x0;
          auStack_2c._2_2_ = 0xb07;
          ppppuStack_28 = ppppuVar29;
          puVar38 = (uint *)func_0x0000013f();
          puVar24 = (uint *)puVar38;
          puVar23 = auStack_550;
          for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar7 = puVar23;
            puVar23 = puVar23 + 1;
            puVar3 = puVar24;
            puVar24 = puVar24 + 1;
            *puVar7 = *puVar3;
          }
          if ((((uStack_53c & 2) == 0) && ((char)uStack_53e == cStack_554)) &&
             (uStack_540._1_1_ == cStack_555)) {
            uVar33 = (byte)uStack_540 < bStack_556;
            uVar35 = (byte)uStack_540 == bStack_556;
            if ((bool)uVar35) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              ppppuVar30 = (undefined2 ****)0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar33 || (bool)uVar35) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                ppppuVar30 = (undefined2 ****)0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar33 || (bool)uVar35) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  ppppuVar30 = (undefined2 ****)0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar33 || (bool)uVar35) {
                    func_0x00029834();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    func_0x00029d78();
                    ppppuVar30 = (undefined2 ****)0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar33 || (bool)uVar35) goto LAB_3ab8_61bb;
                  }
                }
              }
            }
          }
          iStack_494 = iStack_494 + (uint)((undefined2 ****)0xfffe < ppppuStack_496);
          ppppuVar29 = ppppuVar30;
        }
        iStack_494 = iStack_4e0;
        for (ppppuStack_496 = ppppuStack_4e2;
            (iStack_494 <= iStack_5c &&
            ((iStack_494 < iStack_5c || (ppppuStack_496 < ppppuStack_5e))));
            ppppuStack_496 = (undefined2 ****)((int)ppppuStack_496 + 1)) {
          ppppuVar30 = (undefined2 ****)0x0;
          auStack_2c._2_2_ = 0xc41;
          ppppuStack_28 = ppppuVar29;
          puVar38 = (uint *)func_0x0000013f();
          puVar24 = (uint *)puVar38;
          puVar23 = auStack_550;
          for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar7 = puVar23;
            puVar23 = puVar23 + 1;
            puVar3 = puVar24;
            puVar24 = puVar24 + 1;
            *puVar7 = *puVar3;
          }
          if ((((uStack_53c & 2) == 0) && ((char)uStack_53e == cStack_554)) &&
             (uStack_540._1_1_ == cStack_555)) {
            uVar33 = (byte)uStack_540 < bStack_556;
            uVar35 = (byte)uStack_540 == bStack_556;
            if ((bool)uVar35) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              ppppuVar30 = (undefined2 ****)0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar33 || (bool)uVar35) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                ppppuVar30 = (undefined2 ****)0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar33 || (bool)uVar35) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  ppppuVar30 = (undefined2 ****)0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar33 || (bool)uVar35) {
                    func_0x00029834();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    func_0x00029d78();
                    ppppuVar30 = (undefined2 ****)0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar33 || (bool)uVar35) goto LAB_3ab8_61bb;
                  }
                }
              }
            }
          }
          iStack_494 = iStack_494 + (uint)((undefined2 ****)0xfffe < ppppuStack_496);
          ppppuVar29 = ppppuVar30;
        }
        goto LAB_3ab8_624f;
      }
      ppppuVar29 = (undefined2 ****)0x11f2;
      ppppuStack_28 = (undefined2 ****)0xec4;
      iVar15 = func_0x000125f1();
      if (iVar15 != 0) goto LAB_3ab8_6349;
      goto LAB_3ab8_62fa;
    }
    auStack_2c._2_2_ = 0xeed;
    FUN_1000_0599();
    bVar34 = ppppuStack_44a < (undefined2 ****)0x16;
    ppppuStack_44a = ppppuStack_44a + -0xb;
    iStack_448 = iStack_448 - (uint)bVar34;
    ppppuStack_28 = (undefined2 ****)0x1fe;
    auStack_2c._2_2_ = 0xdef;
    auStack_2c._0_2_ = 0xf0e;
    func_0x00012276();
    if ((ppppuStack_4e2 != (undefined2 ****)0x17) ||
       (-(uint)((undefined2 ****)0x16 < ppppuStack_4e2) - iStack_4e0 != -1)) {
      ppppuStack_28 = (undefined2 ****)0x11f2;
      auStack_2c._2_2_ = 0xf46;
      uStack_566 = 0x16;
      iStack_564 = 0;
      FUN_1000_0599();
      uVar32 = 0x11f2;
      ppppuStack_28 = (undefined2 ****)0xf51;
      func_0x00012276();
      iStack_494 = 0;
      for (ppppuStack_496 = (undefined2 ****)0x17;
          (ppppuStack_28 = (undefined2 ****)uVar32, iStack_494 <= *(int *)0x14a &&
          ((iStack_494 < *(int *)0x14a || (ppppuStack_496 <= *(uint *)0x148))));
          ppppuStack_496 = (undefined2 ****)((int)ppppuStack_496 + 1)) {
        auStack_2c._2_2_ = 0xf8f;
        uVar36 = func_0x0000013f();
        if ((*(byte *)((int)uVar36 + 0x14) & 2) == 0) {
          ppppuStack_28 = (undefined2 ****)0x0;
          auStack_2c._2_2_ = 0xfa9;
          puVar38 = (uint *)func_0x0000013f();
          puVar24 = (uint *)puVar38;
          puVar23 = auStack_550;
          for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar7 = puVar23;
            puVar23 = puVar23 + 1;
            puVar3 = puVar24;
            puVar24 = puVar24 + 1;
            *puVar7 = *puVar3;
          }
          bVar34 = 0xfffe < uStack_566;
          uStack_566 = uStack_566 + 1;
          iStack_564 = iStack_564 + (uint)bVar34;
          ppppuStack_28 = (undefined2 ****)0x0;
          auStack_2c._2_2_ = 0xfd3;
          uStack_530 = (undefined2 ****)func_0x0000013f();
          puVar24 = (uint *)uStack_530;
          puVar23 = auStack_550;
          for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar3 = puVar24;
            puVar24 = puVar24 + 1;
            puVar38 = puVar23;
            puVar23 = puVar23 + 1;
            *puVar3 = *puVar38;
          }
        }
        uVar32 = 0;
        iStack_494 = iStack_494 + (uint)(0xfffe < ppppuStack_496);
      }
      *(uint *)0x148 = uStack_566;
      *(int *)0x14a = iStack_564;
      auStack_2c._2_2_ = 0x1009;
      FUN_1000_0599();
      ppppuStack_28 = (undefined2 ****)0x1014;
      func_0x00012276();
    }
    iStack_494 = *(int *)0x14a;
    ppppuStack_28 = (undefined2 ****)0x11f2;
    for (ppppuStack_496 = (undefined2 ****)*(undefined2 *)0x148;
        (-1 < iStack_494 && ((0 < iStack_494 || ((undefined2 ****)0x16 < ppppuStack_496))));
        ppppuStack_496 = (undefined2 ****)((int)ppppuStack_496 + -1)) {
      auStack_2c._2_2_ = 0x1057;
      uVar36 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar36 + 0x14);
      *pbVar1 = *pbVar1 | 2;
      iStack_494 = iStack_494 - (uint)(ppppuStack_496 == (undefined2 ****)0x0);
      ppppuStack_28 = (undefined2 ****)0;
    }
    auStack_2c._2_2_ = 0x1071;
    FUN_1000_0599();
    ppppuStack_28 = (undefined2 ****)0x107c;
    func_0x00012276();
    ppppuStack_28 = (undefined2 ****)0x11f2;
    auStack_2c._2_2_ = 0x1089;
    func_0x00024c86();
    *(undefined1 *)(param_2 + 2) = 0;
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x109f;
    FUN_1000_0599();
    ppppuVar29 = (undefined2 ****)0x11f2;
    ppppuStack_28 = (undefined2 ****)0x10a9;
    func_0x00012276();
    bVar34 = ppppuStack_44a < ppppuStack_476;
    ppppuStack_44a = (undefined2 ****)((int)ppppuStack_44a - (int)ppppuStack_476);
    iStack_448 = (iStack_448 - iStack_474) - (uint)bVar34;
    iStack_47e = 0;
    for (ppppuStack_480 = (undefined2 ****)0x1;
        (iStack_47e <= *(int *)0x14e &&
        ((iStack_47e < *(int *)0x14e || (ppppuStack_480 <= *(uint *)0x14c))));
        ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + 1)) {
      auStack_2c._2_2_ = 0x10ef;
      ppppuStack_28 = ppppuVar29;
      uVar36 = func_0x00000271();
      pbVar1 = (byte *)((int)uVar36 + 0x1e);
      *pbVar1 = *pbVar1 & 0xfd;
      ppppuStack_28 = (undefined2 ****)0x0;
      ppppuVar29 = (undefined2 ****)0x0;
      auStack_2c._2_2_ = 0x1107;
      uVar36 = func_0x00000271();
      pbVar1 = (byte *)((int)uVar36 + 0x1e);
      *pbVar1 = *pbVar1 & 0xfb;
      iStack_47e = iStack_47e + (uint)(0xfffe < ppppuStack_480);
    }
    iStack_47e = iStack_474;
    for (ppppuStack_480 = ppppuStack_476;
        (ppppuStack_28 = ppppuVar29, -1 < iStack_47e &&
        ((0 < iStack_47e || (ppppuStack_480 != (undefined2 ****)0x0))));
        ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + -1)) {
      auStack_2c._2_2_ = 0x13df;
      puVar38 = (uint *)func_0x00000271();
      puVar24 = (uint *)puVar38;
      puVar23 = auStack_550;
      for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar7 = puVar23;
        puVar23 = puVar23 + 1;
        puVar3 = puVar24;
        puVar24 = puVar24 + 1;
        *puVar7 = *puVar3;
      }
      ppppuStack_28 = (undefined2 ****)0x0;
      ppppuVar29 = (undefined2 ****)0x0;
      auStack_2c._2_2_ = 0x13ff;
      puVar37 = (undefined2 *)func_0x00000271();
      puVar14 = (undefined2 *)puVar37;
      ppuVar22 = apuStack_586;
      for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
        ppuVar8 = ppuVar22;
        ppuVar22 = ppuVar22 + 1;
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *ppuVar8 = (undefined1 *)*puVar4;
      }
      if (local_62 != '\0') {
LAB_3ab8_68a9:
        uStack_566 = 0;
        uVar11 = (ulong)uStack_530 >> 0x10;
        uStack_530 = (undefined2 ****)((ulong)uStack_530 & 0xffff0000);
        if (((iStack_544 + 0xd8f0U < 6) && (uStack_542 == uStack_53e)) && (uStack_540 == uStack_53c)
           ) {
          uStack_530 = (undefined2 ****)CONCAT22((int)uVar11,(undefined2 ****)0x1);
        }
        ppppuStack_496 = (undefined2 ****)*(undefined2 *)0x14c;
        iStack_494 = *(int *)0x14e;
LAB_3ab8_65d6:
        iVar15 = iStack_474 + (uint)((undefined2 ****)0xfffe < ppppuStack_476);
        if ((iVar15 <= iStack_494) &&
           ((iVar15 < iStack_494 || ((undefined2 ****)((int)ppppuStack_476 + 1) <= ppppuStack_496)))
           ) {
          ppppuVar30 = (undefined2 ****)0x0;
          auStack_2c._2_2_ = 0x1185;
          ppppuStack_28 = ppppuVar29;
          puVar37 = (undefined2 *)func_0x00000271();
          puVar14 = (undefined2 *)puVar37;
          ppuVar25 = apuStack_524;
          for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
            ppuVar6 = ppuVar25;
            ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            *(undefined2 *)ppuVar6 = *puVar4;
          }
          if ((cStack_508 != cStack_534) || (cStack_509 != cStack_535)) goto LAB_3ab8_65cc;
          uVar33 = bStack_50a < bStack_536;
          uVar35 = bStack_50a == bStack_536;
          if (!(bool)uVar35) goto LAB_3ab8_65cc;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          ppppuVar30 = (undefined2 ****)0x22b2;
          if (!(bool)uVar33 && !(bool)uVar35) goto LAB_3ab8_65cc;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          ppppuVar30 = (undefined2 ****)0x22b2;
          if (!(bool)uVar33 && !(bool)uVar35) goto LAB_3ab8_65cc;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          ppppuVar29 = (undefined2 ****)0x22b2;
          FUN_28b3_1181();
          ppppuVar30 = ppppuVar29;
          if ((!(bool)uVar33 && !(bool)uVar35) || (5 < (uint)(iStack_544 - iStack_518)))
          goto LAB_3ab8_65cc;
          if ((uint *)uStack_530 == (uint *)0x0) {
            uVar17 = uStack_53a - uStack_50e;
            iVar15 = (iStack_538 - iStack_50c) - (uint)(uStack_53a < uStack_50e);
            if (iVar15 < 0) {
              bVar34 = uVar17 != 0;
              uVar17 = -uVar17;
              iVar15 = -(iVar15 + (uint)bVar34);
            }
            if ((iVar15 == 0) && (uVar17 < 6)) {
              uVar17 = uStack_542 - uStack_516;
              iVar15 = (uStack_540 - iStack_514) - (uint)(uStack_542 < uStack_516);
              if (iVar15 < 0) {
                bVar34 = uVar17 != 0;
                uVar17 = -uVar17;
                iVar15 = -(iVar15 + (uint)bVar34);
              }
              if ((iVar15 == 0) && (uVar17 < 6)) {
                uVar17 = uStack_53e - uStack_512;
                iVar15 = (uStack_53c - uStack_510) - (uint)(uStack_53e < uStack_512);
                if (iVar15 < 0) {
                  bVar34 = uVar17 != 0;
                  uVar17 = -uVar17;
                  iVar15 = -(iVar15 + (uint)bVar34);
                }
                if ((iVar15 == 0) && (uVar17 < 6)) goto LAB_3ab8_6746;
              }
            }
            goto LAB_3ab8_65cc;
          }
          if ((uStack_516 != uStack_512) || (iStack_514 != uStack_510)) goto LAB_3ab8_65cc;
LAB_3ab8_6746:
          if ((iStack_494 <= *(int *)0x14e) &&
             ((iStack_494 < *(int *)0x14e ||
              (ppppuStack_496 < (undefined2 ****)*(undefined2 *)0x14c)))) {
            ppppuStack_28 = (undefined2 ****)0x22b2;
            ppppuVar29 = (undefined2 ****)0x0;
            auStack_2c._2_2_ = 0x12e3;
            puStack_52c = (uint *)func_0x00000271();
            puVar23 = (uint *)puStack_52c;
            ppuVar22 = apuStack_586;
            for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
              puVar38 = puVar23;
              puVar23 = puVar23 + 1;
              ppuVar8 = ppuVar22;
              ppuVar22 = ppuVar22 + 1;
              *puVar38 = (uint)*ppuVar8;
            }
          }
          piVar2 = (int *)0x14c;
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          *(int *)0x14e = *(int *)0x14e - (uint)(iVar15 == 0);
          uStack_566 = 1;
        }
        if (uStack_566 == 0) {
          cStack_535 = '\a';
          pppiVar27 = (int ***)&pppuStack_42;
          puVar23 = auStack_550;
          for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar3 = (uint *)pppiVar27;
            pppiVar27 = pppiVar27 + 1;
            puVar38 = puVar23;
            puVar23 = puVar23 + 1;
            *puVar3 = *puVar38;
          }
          pppppppuStack_46 = (undefined2 *******)0x132b;
          FUN_12c1_0f1d();
          ppppuStack_28 = ppppuStack_480;
          auStack_2c._2_2_ = 0x11f2;
          auStack_2c._0_2_ = 0x133b;
          uVar36 = func_0x00000271();
          pbVar1 = (byte *)((int)uVar36 + 0x1e);
          *pbVar1 = *pbVar1 | 2;
          ppppuStack_28 = ppppuStack_480;
          auStack_2c._2_2_ = 0;
          ppppuVar29 = (undefined2 ****)0x0;
          auStack_2c._0_2_ = 0x1353;
          uVar36 = func_0x00000271();
          pbVar1 = (byte *)((int)uVar36 + 0x1e);
          *pbVar1 = *pbVar1 | 4;
          bVar34 = 0xfffe < uStack_26e;
          uStack_26e = uStack_26e + 1;
          iStack_26c = iStack_26c + (uint)bVar34;
        }
        if ((((byte)ppppuStack_480 & 0xf) == 0xf) || (uStack_566 == 0)) {
          cVar13 = FUN_12c1_009c();
          if (cVar13 == '\x1b') goto LAB_3ab8_7020;
          ppppuStack_28 = (undefined2 ****)0x11f2;
          auStack_2c._2_2_ = 0x1392;
          FUN_1000_0599();
          ppppuStack_28 = (undefined2 ****)0x1fe;
          auStack_2c._2_2_ = 0xdef;
          ppppuVar29 = (undefined2 ****)0x11f2;
          auStack_2c._0_2_ = 0x13af;
          func_0x00012276();
        }
        goto LAB_3ab8_6832;
      }
      ppppuVar29 = (undefined2 ****)0x11f2;
      ppppuStack_28 = (undefined2 ****)0x1424;
      iVar15 = func_0x000125f1();
      if (iVar15 != 0) goto LAB_3ab8_68a9;
LAB_3ab8_6832:
      iStack_47e = iStack_47e - (uint)(ppppuStack_480 == (undefined2 ****)0x0);
    }
    ppppuStack_496 = (undefined2 ****)*(undefined2 *)0x14c;
    iStack_494 = *(int *)0x14e;
    while( true ) {
      iVar15 = iStack_474 + (uint)((undefined2 ****)0xfffe < ppppuStack_476);
      if ((iStack_494 < iVar15) ||
         ((iStack_494 <= iVar15 && (ppppuStack_496 < (undefined2 ****)((int)ppppuStack_476 + 1)))))
      break;
      auStack_2c._2_2_ = 0x14b5;
      uVar36 = func_0x00000271();
      pbVar1 = (byte *)((int)uVar36 + 0x1e);
      *pbVar1 = *pbVar1 | 2;
      bVar34 = ppppuStack_496 == (undefined2 ****)0x0;
      ppppuStack_496 = (undefined2 ****)((int)ppppuStack_496 + -1);
      iStack_494 = iStack_494 - (uint)bVar34;
      ppppuStack_28 = (undefined2 ****)0x0;
    }
    auStack_2c._2_2_ = 0x14cf;
    FUN_1000_0599();
    ppppuStack_28 = (undefined2 ****)0x14da;
    func_0x00012276();
    ppppuStack_28 = (undefined2 ****)0x11f2;
    auStack_2c._2_2_ = 0x14e8;
    FUN_1000_0599();
    uVar32 = 0x11f2;
    ppppuStack_28 = (undefined2 ****)0x14f3;
    func_0x00012276();
    bVar34 = ppppuStack_44a < ppppuStack_60;
    ppppuStack_44a = (undefined2 ****)((int)ppppuStack_44a - (int)ppppuStack_60);
    iStack_448 = (iStack_448 - ((int)ppppuStack_60 >> 0xf)) - (uint)bVar34;
    for (ppppuStack_49a = (undefined2 ****)0x1; (int)ppppuStack_49a <= *(int *)0x152;
        ppppuStack_49a = (undefined2 ****)((int)ppppuStack_49a + 1)) {
      ppppuStack_28 = (undefined2 ****)0x1511;
      uVar36 = func_0x000003ef();
      pbVar1 = (byte *)((int)uVar36 + 10);
      *pbVar1 = *pbVar1 & 0xfd;
      uVar32 = 0;
      ppppuStack_28 = (undefined2 ****)0x1524;
      uVar36 = func_0x000003ef();
      pbVar1 = (byte *)((int)uVar36 + 10);
      *pbVar1 = *pbVar1 & 0xfb;
    }
    for (ppppuStack_49a = ppppuStack_60; 0 < (int)ppppuStack_49a;
        ppppuStack_49a = (undefined2 ****)((int)ppppuStack_49a + -1)) {
      ppppuStack_28 = (undefined2 ****)0x16b5;
      puVar37 = (undefined2 *)func_0x000003ef();
      puVar14 = (undefined2 *)puVar37;
      ppuVar22 = apuStack_586;
      for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
        ppuVar8 = ppuVar22;
        ppuVar22 = ppuVar22 + 1;
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *ppuVar8 = (undefined1 *)*puVar4;
      }
      uVar32 = 0;
      ppppuStack_28 = (undefined2 ****)0x16d0;
      puVar37 = (undefined2 *)func_0x000003ef();
      puVar14 = (undefined2 *)puVar37;
      ppuVar25 = apuStack_524;
      for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
        ppuVar6 = ppuVar25;
        ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *(undefined2 *)ppuVar6 = *puVar4;
      }
      if (local_62 != '\0') {
LAB_3ab8_6b79:
        auStack_550[0] = 0;
        ppppuStack_4c0 = (undefined2 ****)*(int *)0x152;
LAB_3ab8_69c9:
        if ((int)((int)ppppuStack_60 + 1) <= (int)ppppuStack_4c0) {
          uVar32 = 0;
          ppppuStack_28 = (undefined2 ****)0x155f;
          puVar38 = (uint *)func_0x000003ef();
          puVar24 = (uint *)puVar38;
          puVar23 = &uStack_566;
          for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar7 = puVar23;
            puVar23 = puVar23 + 1;
            puVar3 = puVar24;
            puVar24 = puVar24 + 1;
            *puVar7 = *puVar3;
          }
          if (cStack_55e != cStack_57e) goto LAB_3ab8_69c5;
          uVar33 = bStack_55d < bStack_57d;
          uVar35 = bStack_55d == bStack_57d;
          if (!(bool)uVar35) goto LAB_3ab8_69c5;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          uVar32 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar33 && !(bool)uVar35) goto LAB_3ab8_69c5;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          uVar32 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar33 && !(bool)uVar35) goto LAB_3ab8_69c5;
          if ((int)ppppuStack_4c0 < *(int *)0x152) {
            uVar32 = 0;
            ppppuStack_28 = (undefined2 ****)0x15f2;
            uStack_530 = (undefined2 ****)func_0x000003ef();
            puVar23 = (uint *)uStack_530;
            ppuVar25 = apuStack_524;
            for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
              puVar38 = puVar23;
              puVar23 = puVar23 + 1;
              ppuVar6 = ppuVar25;
              ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
              *puVar38 = *(uint *)ppuVar6;
            }
          }
          *(int *)0x152 = *(int *)0x152 + -1;
          auStack_550[0] = 1;
        }
        if (auStack_550[0] == 0) {
          auStack_2c._2_2_ = 0x1626;
          ppppuStack_28 = (undefined2 ****)uVar32;
          func_0x00007f92();
          ppppuStack_28 = (undefined2 ****)0x1631;
          uVar36 = func_0x000003ef();
          pbVar1 = (byte *)((int)uVar36 + 10);
          *pbVar1 = *pbVar1 | 2;
          uVar32 = 0;
          ppppuStack_28 = (undefined2 ****)0x1644;
          uVar36 = func_0x000003ef();
          pbVar1 = (byte *)((int)uVar36 + 10);
          *pbVar1 = *pbVar1 | 4;
          iStack_4ce = iStack_4ce + 1;
        }
        if ((((byte)ppppuStack_49a & 0xf) == 0xf) || (auStack_550[0] == 0)) {
          cVar13 = FUN_12c1_009c();
          if (cVar13 == '\x1b') goto LAB_3ab8_7020;
          ppppuStack_28 = (undefined2 ****)0x11f2;
          auStack_2c._2_2_ = 0x167c;
          FUN_1000_0599();
          iStack_47e = (int)ppppuStack_49a >> 0xf;
          ppppuStack_480 = ppppuStack_49a;
          ppppuStack_28 = (undefined2 ****)0x1fe;
          auStack_2c._2_2_ = 0xdef;
          uVar32 = 0x11f2;
          auStack_2c._0_2_ = 0x169e;
          func_0x00012276();
        }
        goto LAB_3ab8_6b21;
      }
      uVar32 = 0x11f2;
      ppppuStack_28 = (undefined2 ****)0x16f4;
      iVar15 = func_0x000125f1();
      if (iVar15 != 0) goto LAB_3ab8_6b79;
LAB_3ab8_6b21:
    }
    for (ppppuStack_4c0 = (undefined2 ****)*(int *)0x152;
        (int)((int)ppppuStack_60 + 1) <= (int)ppppuStack_4c0;
        ppppuStack_4c0 = (undefined2 ****)((int)ppppuStack_4c0 + -1)) {
      uVar32 = 0;
      ppppuStack_28 = (undefined2 ****)0x171b;
      uVar36 = func_0x000003ef();
      pbVar1 = (byte *)((int)uVar36 + 10);
      *pbVar1 = *pbVar1 | 2;
    }
    auStack_2c._2_2_ = 0x1740;
    ppppuStack_28 = (undefined2 ****)uVar32;
    FUN_1000_0599();
    ppppuStack_28 = (undefined2 ****)0x174b;
    func_0x00012276();
    ppppuStack_28 = (undefined2 ****)0x11f2;
    auStack_2c._2_2_ = 0x1758;
    func_0x00024c86();
    *(undefined1 *)(param_2 + 2) = 0;
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x176e;
    FUN_1000_0599();
    uVar32 = 0x11f2;
    ppppuStack_28 = (undefined2 ****)0x1778;
    func_0x00012276();
    for (ppppuStack_49a = (undefined2 ****)0x1; (int)ppppuStack_49a <= *(int *)0x150;
        ppppuStack_49a = (undefined2 ****)((int)ppppuStack_49a + 1)) {
      ppppuStack_28 = (undefined2 ****)0x178a;
      uVar36 = func_0x00000398();
      pbVar1 = (byte *)((int)uVar36 + 0x16);
      *pbVar1 = *pbVar1 & 0xfd;
      uVar32 = 0;
      ppppuStack_28 = (undefined2 ****)0x179d;
      uVar36 = func_0x00000398();
      pbVar1 = (byte *)((int)uVar36 + 0x16);
      *pbVar1 = *pbVar1 & 0xfb;
    }
    for (ppppuStack_49a = ppppuStack_482; 0 < (int)ppppuStack_49a;
        ppppuStack_49a = (undefined2 ****)((int)ppppuStack_49a + -1)) {
      uVar32 = 0;
      ppppuStack_28 = (undefined2 ****)0x19c2;
      puVar38 = (uint *)func_0x00000398();
      puVar24 = (uint *)puVar38;
      puVar23 = auStack_550;
      for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar7 = puVar23;
        puVar23 = puVar23 + 1;
        puVar3 = puVar24;
        puVar24 = puVar24 + 1;
        *puVar7 = *puVar3;
      }
      if (local_62 == '\0') {
        uVar32 = 0x11f2;
        ppppuStack_28 = (undefined2 ****)0x19e6;
        iVar15 = func_0x000125f1();
        if (iVar15 != 0) goto LAB_3ab8_6e6b;
      }
      else {
LAB_3ab8_6e6b:
        apuStack_586[0] = (undefined1 *)0x0;
        ppppuStack_28 = (undefined2 ****)auStack_6b2;
        auStack_2c._0_2_ = 0x1a03;
        auStack_2c._2_2_ = uVar32;
        FUN_1885_0344();
        uVar32 = 0x22b2;
        ppppuStack_28 = (undefined2 ****)0x1a10;
        uStack_566 = func_0x00024ce4();
        for (ppppuStack_4c0 = (undefined2 ****)*(int *)0x150;
            (int)((int)ppppuStack_482 + 1) <= (int)ppppuStack_4c0;
            ppppuStack_4c0 = (undefined2 ****)((int)ppppuStack_4c0 + -1)) {
          uVar32 = 0;
          ppppuStack_28 = (undefined2 ****)0x1808;
          puVar37 = (undefined2 *)func_0x00000398();
          puVar14 = (undefined2 *)puVar37;
          ppuVar25 = apuStack_524;
          for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
            ppuVar6 = ppuVar25;
            ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            *(undefined2 *)ppuVar6 = *puVar4;
          }
          if (uStack_510._1_1_ == uStack_53c._1_1_) {
            uVar33 = (byte)uStack_510 < (byte)uStack_53c;
            uVar35 = (byte)uStack_510 == (byte)uStack_53c;
            if ((bool)uVar35) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              uVar32 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar33 || (bool)uVar35) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                uVar32 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar33 || (bool)uVar35) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar32 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar33 || (bool)uVar35) {
                    func_0x00029834();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    func_0x00029d78();
                    uVar32 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar33 || (bool)uVar35) {
                      ppppuStack_28 = (undefined2 ****)0xbf48;
                      auStack_2c._2_2_ = 0x22b2;
                      uVar32 = 0x18b3;
                      auStack_2c._0_2_ = 0x18f8;
                      FUN_1885_0344();
                      apuStack_586[0] = (undefined1 *)0x1;
                      for (iStack_486 = 0; iStack_486 <= (int)uStack_566;
                          iStack_486 = iStack_486 + 1) {
                        if (*(char *)((int)auStack_6b2 + iStack_486) !=
                            *(char *)(iStack_486 + -0x40b8)) {
                          apuStack_586[0] = (undefined1 *)0x0;
                          break;
                        }
                      }
                      if (apuStack_586[0] != (undefined1 *)0x0) {
                        ppppuStack_28 = (undefined2 ****)0x1913;
                        uVar36 = func_0x00000398();
                        *(undefined1 *)((int)uVar36 + 0x14) = 0x5a;
                        uVar32 = 0x18b3;
                        ppppuStack_28 = (undefined2 ****)0x1926;
                        func_0x000190c7();
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (apuStack_586[0] == (undefined1 *)0x0) {
          auStack_2c._2_2_ = 0x193b;
          ppppuStack_28 = (undefined2 ****)uVar32;
          func_0x00008009();
          ppppuStack_28 = (undefined2 ****)0x1946;
          uVar36 = func_0x00000398();
          pbVar1 = (byte *)((int)uVar36 + 0x16);
          *pbVar1 = *pbVar1 | 2;
          uVar32 = 0;
          ppppuStack_28 = (undefined2 ****)0x1959;
          uVar36 = func_0x00000398();
          pbVar1 = (byte *)((int)uVar36 + 0x16);
          *pbVar1 = *pbVar1 | 4;
          iStack_43c = iStack_43c + 1;
        }
        if ((((byte)ppppuStack_49a & 0xf) == 0xf) || (apuStack_586[0] == (undefined1 *)0x0)) {
          cVar13 = FUN_12c1_009c();
          if (cVar13 == '\x1b') goto LAB_3ab8_7020;
          ppppuStack_28 = (undefined2 ****)0x11f2;
          auStack_2c._2_2_ = 0x1991;
          FUN_1000_0599();
          iStack_47e = (int)ppppuStack_49a >> 0xf;
          ppppuStack_480 = ppppuStack_49a;
          ppppuStack_28 = (undefined2 ****)0x1fe;
          auStack_2c._2_2_ = 0xdef;
          uVar32 = 0x11f2;
          auStack_2c._0_2_ = 0x19ab;
          func_0x00012276();
        }
      }
    }
    for (ppppuStack_4c0 = (undefined2 ****)*(int *)0x150;
        (int)((int)ppppuStack_482 + 1) <= (int)ppppuStack_4c0;
        ppppuStack_4c0 = (undefined2 ****)((int)ppppuStack_4c0 + -1)) {
      uVar32 = 0;
      ppppuStack_28 = (undefined2 ****)0x1a31;
      uVar36 = func_0x00000398();
      pbVar1 = (byte *)((int)uVar36 + 0x16);
      *pbVar1 = *pbVar1 | 2;
    }
    auStack_2c._2_2_ = 0x1a57;
    ppppuStack_28 = (undefined2 ****)uVar32;
    FUN_1000_0599();
    ppppuStack_28 = (undefined2 ****)0x1a62;
    func_0x00012276();
    func_0x0000abfa();
    ppppuStack_28 = (undefined2 ****)0x1a70;
    func_0x0000b1d8();
    func_0x0000b6ea();
    ppppuStack_28 = (undefined2 ****)0x1a7e;
    func_0x0001470b();
    *(undefined1 *)0x121 = 1;
    *(undefined2 *)0xbc0 = 1;
    uVar32 = 0x7a6;
    ppppuStack_28 = (undefined2 ****)0x1a90;
    func_0x00008095();
  }
  *(undefined2 *)0xbc0 = 1;
LAB_3ab8_6f17:
  while (ppppuStack_28 = (undefined2 ****)uVar32, local_498 != 0) {
    auStack_2c._2_2_ = 0x1abe;
    func_0x00024c86();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1acd;
    func_0x00024c86();
    if ((((((iStack_4b8 != 0 || uStack_4ba != 0) || (iStack_26c != 0 || uStack_26e != 0)) ||
          (iStack_4ce != 0)) || ((iStack_43c != 0 || (*(int *)0x148 != 0x16)))) ||
        (*(int *)0x14a != 0)) ||
       ((((undefined2 ****)*(undefined2 *)0x14c != ppppuStack_476 || (*(int *)0x14e != iStack_474))
        || ((ppppuStack_60 != (undefined2 ****)*(undefined2 *)0x152 ||
            (ppppuStack_482 != (undefined2 ****)*(undefined2 *)0x150)))))) {
      ppppuStack_28 = (undefined2 ****)0x22b2;
      auStack_2c._2_2_ = 0x1c10;
      func_0x00024c86();
      *(undefined1 *)(param_2 + 2) = 0;
      ppppuStack_28 = (undefined2 ****)0x22b2;
      auStack_2c._2_2_ = 0x1c23;
      FUN_21f2_2d26();
      ppppuStack_28 = (undefined2 ****)0x22b2;
      auStack_2c._2_2_ = 0x1c31;
      FUN_21f2_2d26();
      ppppuStack_28 = (undefined2 ****)iStack_43c;
      auStack_2c._2_2_ = iStack_4ce;
      auStack_2c._0_2_ = iStack_26c;
      puStack_2e = (undefined1 *)uStack_26e;
      piStack_30 = (int *)iStack_4b8;
      puStack_32 = (undefined1 *)uStack_4ba;
      puStack_34 = (undefined1 *)0x22e;
      puStack_36 = (undefined1 *)0xbf48;
      puStack_38 = (undefined1 *)0x22b2;
      puStack_3a = (undefined1 *)0x1c5c;
      FUN_21f2_3454();
      ppppuStack_28 = (undefined2 ****)0x22b2;
      auStack_2c._2_2_ = 0x1c6c;
      apuStack_586[0] = (undefined1 *)func_0x00025b06();
      if (apuStack_586[0] != (undefined1 *)0x0) {
        *apuStack_586[0] = 0;
      }
      ppppuStack_28 = (undefined2 ****)0x22b2;
      auStack_2c._2_2_ = 0x1c88;
      FUN_1000_0599();
      *(undefined2 *)0xc22 = 2;
      ppppuStack_28 = (undefined2 ****)0x1c98;
      func_0x00012276();
      ppppuStack_28 = (undefined2 ****)0x1cd6;
      func_0x00012276();
      ppppuStack_28 = (undefined2 ****)(*(int *)0x150 - (int)ppppuStack_482);
      auStack_2c._2_2_ = *(int *)0x152 - (int)ppppuStack_60;
      puStack_2e = (undefined1 *)((int)*(undefined2 *)0x14c - (int)ppppuStack_476);
      auStack_2c._0_2_ =
           (*(int *)0x14e - iStack_474) -
           (uint)((undefined2 ****)*(undefined2 *)0x14c < ppppuStack_476);
      puStack_32 = (undefined1 *)(*(uint *)0x148 - 0x16);
      piStack_30 = (int *)(*(int *)0x14a - (uint)(*(uint *)0x148 < 0x16));
      puStack_34 = (undefined1 *)0x22e;
      puStack_36 = (undefined1 *)0xbf48;
      puStack_38 = (undefined1 *)0x11f2;
      puStack_3a = (undefined1 *)0x1d17;
      FUN_21f2_3454();
      ppppuStack_28 = (undefined2 ****)0x22b2;
      auStack_2c._2_2_ = 0x1d27;
      apuStack_586[0] = (undefined1 *)func_0x00025b06();
      if (apuStack_586[0] != (undefined1 *)0x0) {
        *apuStack_586[0] = 0;
      }
      ppppuStack_28 = (undefined2 ****)0x22b2;
      auStack_2c._2_2_ = 0x1d43;
      FUN_1000_0599();
      *(undefined2 *)0xc22 = 2;
      *(undefined1 *)param_2 = *(undefined1 *)0x992;
      *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)0x993;
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)0x994;
      *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)0x995;
      ppppuStack_28 = (undefined2 ****)0x1d6b;
      func_0x00012276();
      uVar17 = (uint)(*(uint *)0x148 < 0x16);
      bVar34 = (int)(*(uint *)0x14a - uVar17) < 0;
      if ((*(uint *)0x14a == uVar17 || bVar34) && ((bVar34 || (*(uint *)0x148 == 0x16)))) {
        uVar17 = (uint)((undefined2 ****)*(undefined2 *)0x14c < ppppuStack_476);
        bVar34 = (int)((*(int *)0x14e - iStack_474) - uVar17) < 0;
        if ((*(int *)0x14e - iStack_474 == uVar17 || bVar34) &&
           ((((bVar34 || ((undefined2 ****)*(undefined2 *)0x14c == ppppuStack_476)) &&
             ((undefined2 ****)*(undefined2 *)0x152 == ppppuStack_60 ||
              (int)*(undefined2 *)0x152 - (int)ppppuStack_60 < 0)) &&
            ((undefined2 ****)*(undefined2 *)0x150 == ppppuStack_482 ||
             (int)*(undefined2 *)0x150 - (int)ppppuStack_482 < 0)))) {
          ppppuStack_28 = (undefined2 ****)0x1e60;
          func_0x00012276();
          ppppuStack_28 = (undefined2 ****)0x11f2;
          auStack_2c._2_2_ = 0x1e6e;
          FUN_21f2_2d26();
          ppppuStack_28 = (undefined2 ****)0x22b2;
          auStack_2c._2_2_ = 0x1e7c;
          FUN_21f2_2d26();
          ppppuStack_28 = (undefined2 ****)0x22b2;
          auStack_2c._2_2_ = 0x1e8a;
          FUN_21f2_2d26();
          ppppuStack_28 = (undefined2 ****)0x22b2;
          auStack_2c._2_2_ = 0x1e98;
          FUN_1def_07a4();
          ppppuStack_28 = param_2;
          auStack_2c._2_2_ = 9999;
          auStack_2c._0_2_ = 0x1bb4;
          puStack_2e = (undefined1 *)0x1eb1;
          iStack_cc = FUN_1def_0904();
          if (*(int *)0x158 == 0) goto LAB_3ab8_7342;
          goto LAB_3ab8_701a;
        }
      }
      uVar32 = 0x11f2;
      ppppuStack_28 = (undefined2 ****)0x1dbd;
      func_0x00012276();
      *(undefined1 *)(param_2 + 7) = 0;
      goto LAB_3ab8_7245;
    }
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1b37;
    func_0x00024c86();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1b46;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1b54;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1b62;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1b70;
    FUN_1def_07a4();
    ppppuStack_28 = param_2;
    auStack_2c._2_2_ = 9999;
    auStack_2c._0_2_ = 0x1bb4;
    puStack_2e = (undefined1 *)0x1b89;
    iStack_cc = FUN_1def_0904();
    if (*(int *)0x158 != 0) goto LAB_3ab8_701a;
LAB_3ab8_7342:
    uVar32 = 0x1bb4;
    if ((iStack_cc == 1) || (iStack_cc == -1)) goto LAB_3ab8_734f;
  }
  uVar32 = 0x22b2;
  auStack_2c._2_2_ = 0x1aab;
  func_0x00024c86();
LAB_3ab8_7245:
  auStack_2c._2_2_ = 0x1dd1;
  ppppuStack_28 = (undefined2 ****)uVar32;
  FUN_21f2_2d26();
  ppppuStack_28 = (undefined2 ****)0x22b2;
  auStack_2c._2_2_ = 0x1de0;
  func_0x00024c86();
  *(undefined1 *)0xbf54 = 0;
  ppppuStack_28 = (undefined2 ****)0x22b2;
  auStack_2c._2_2_ = 0x1df3;
  FUN_21f2_2d26();
  ppppuStack_28 = (undefined2 ****)0x22b2;
  auStack_2c._2_2_ = 0x1e01;
  FUN_21f2_2d26();
  *(undefined2 *)0xbc0 = 1;
  ppppuStack_28 = (undefined2 ****)0x1e12;
  func_0x000257c0();
  if (local_498 == 0) {
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1e29;
    FUN_21f2_2d26();
    ppppuStack_28 = param_2;
    auStack_2c._2_2_ = 9999;
    auStack_2c._0_2_ = 0x22b2;
    puStack_2e = (undefined1 *)0x1e42;
    iStack_cc = FUN_1def_0904();
    if (*(int *)0x158 == 0) {
      if ((iStack_cc != 1) && (iStack_486 != 1)) {
        bVar34 = iStack_cc == 2;
        goto LAB_3ab8_7367;
      }
LAB_3ab8_734f:
      iStack_4ae = 1;
LAB_3ab8_7020:
      func_0x0000c3ca();
      ppppuStack_28 = (undefined2 ****)0x1bad;
      func_0x0000daa6();
      *(undefined2 *)0xbc0 = 1;
      *(undefined1 *)0x121 = 0;
      *(undefined2 *)0xbc2 = 0;
      if (iStack_4ae == 0) {
        *(undefined2 *)0x148 = 0x16;
        *(undefined2 *)0x14a = 0;
        *(undefined2 *)0x14c = ppppuStack_476;
        *(int *)0x14e = iStack_474;
        *(int *)0x152 = (int)ppppuStack_60;
        *(undefined2 *)0x150 = ppppuStack_482;
        *(undefined2 *)0xc0ac = uStack_442;
        *(undefined2 *)0xc0ae = uStack_440;
      }
      else if (iStack_4ae == 2) {
        iStack_47e = 0;
        uVar32 = 0x885;
        for (ppppuStack_480 = (undefined2 ****)0x17;
            (iStack_47e <= *(int *)0x14a &&
            ((iStack_47e < *(int *)0x14a || (ppppuStack_480 <= *(uint *)0x148))));
            ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + 1)) {
          auStack_2c._2_2_ = 0x2018;
          ppppuStack_28 = (undefined2 ****)uVar32;
          auStack_6b2[0] = func_0x0000013f();
          *(undefined1 *)((int)auStack_6b2[0] + 0x12) = *(undefined1 *)0xb310;
          iStack_47e = iStack_47e + (uint)(0xfffe < ppppuStack_480);
          uVar32 = 0;
        }
        iStack_47e = iStack_474 + (uint)((undefined2 ****)0xfffe < ppppuStack_476);
        ppppuStack_480 = ppppuStack_476;
        while( true ) {
          ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + 1);
          ppppuVar29 = ppppuStack_60;
          if ((*(int *)0x14e < iStack_47e) ||
             ((*(int *)0x14e <= iStack_47e &&
              ((undefined2 ****)*(undefined2 *)0x14c < ppppuStack_480)))) break;
          auStack_2c._2_2_ = 0x206e;
          ppppuStack_28 = (undefined2 ****)uVar32;
          auStack_6b2[0] = func_0x00000271();
          *(undefined1 *)((int)auStack_6b2[0] + 0x1c) = *(undefined1 *)0xb310;
          iStack_47e = iStack_47e + (uint)((undefined2 ****)0xfffe < ppppuStack_480);
          uVar32 = 0;
        }
        while (ppppuStack_49a = (undefined2 ****)((int)ppppuVar29 + 1), ppppuVar29 = ppppuStack_482,
              (int)ppppuStack_49a <= *(int *)0x152) {
          ppppuStack_28 = (undefined2 ****)0x2098;
          auStack_6b2[0] = func_0x000003ef();
          *(undefined1 *)((int)auStack_6b2[0] + 8) = *(undefined1 *)0xb310;
          ppppuVar29 = ppppuStack_49a;
        }
        while (ppppuStack_49a = (undefined2 ****)((int)ppppuVar29 + 1),
              (int)ppppuStack_49a <= *(int *)0x150) {
          ppppuStack_28 = (undefined2 ****)0x20cd;
          auStack_6b2[0] = func_0x00000398();
          *(undefined1 *)((int)auStack_6b2[0] + 0x15) = *(undefined1 *)0xb310;
          ppppuVar29 = ppppuStack_49a;
        }
      }
      *(undefined1 *)0x121 = 0;
      *(undefined2 *)0xbc2 = 0;
      func_0x0000abfa();
      ppppuStack_28 = (undefined2 ****)0x2106;
      func_0x0000b1d8();
      func_0x0000b6ea();
      ppppuStack_28 = (undefined2 ****)0x2114;
      func_0x0001470b();
      *(undefined2 *)0xbc0 = 1;
      return;
    }
  }
  else {
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1f0d;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1f1b;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1f29;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1f37;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1f45;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1f53;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1f61;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1f6f;
    FUN_21f2_2d26();
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0x1f7d;
    FUN_1def_07a4();
    ppppuStack_28 = param_2;
    auStack_2c._2_2_ = 9999;
    auStack_2c._0_2_ = 0x1bb4;
    puStack_2e = (undefined1 *)0x1f96;
    iStack_cc = FUN_1def_0904();
    if (*(int *)0x158 == 0) {
      if (iStack_cc == 1) {
        iStack_4ae = iStack_cc;
      }
      if (iStack_cc == 2) {
        iStack_4ae = iStack_cc;
      }
      if ((iStack_cc == 1) || (iStack_cc == 2)) {
        *(undefined1 *)0xcf6 = 0;
        goto LAB_3ab8_7020;
      }
      bVar34 = iStack_cc == 3;
LAB_3ab8_7367:
      uVar32 = 0x1bb4;
      if (((!bVar34) && (iStack_486 != 2)) && (iStack_cc != -1)) goto LAB_3ab8_6f17;
    }
  }
LAB_3ab8_701a:
  iStack_4ae = 0;
  goto LAB_3ab8_7020;
LAB_3ab8_61bb:
  ppppuVar30 = (undefined2 ****)0x22b2;
  if ((ppppuStack_4e2 != ppppuStack_496) || (iStack_4e0 != iStack_494)) {
    ppppuStack_28 = (undefined2 ****)0x22b2;
    auStack_2c._2_2_ = 0xd5c;
    puVar37 = (undefined2 *)func_0x0000013f();
    puVar14 = (undefined2 *)puVar37;
    ppuVar25 = apuStack_524;
    for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
      ppuVar6 = ppuVar25;
      ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
      puVar4 = puVar14;
      puVar14 = puVar14 + 1;
      *(undefined2 *)ppuVar6 = *puVar4;
    }
    ppppuStack_28 = (undefined2 ****)0x0;
    ppppuVar30 = (undefined2 ****)0x0;
    auStack_2c._2_2_ = 0xd7c;
    puStack_52c = (uint *)func_0x0000013f();
    puVar23 = (uint *)puStack_52c;
    ppuVar25 = apuStack_524;
    for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar38 = puVar23;
      puVar23 = puVar23 + 1;
      ppuVar6 = ppuVar25;
      ppuVar25 = (undefined2 **)((int)ppuVar25 + 2);
      *puVar38 = *(uint *)ppuVar6;
    }
  }
  ppppuVar29 = (undefined2 ****)0x0;
  auStack_2c._2_2_ = 0xda0;
  ppppuStack_28 = ppppuVar30;
  uVar36 = func_0x0000013f();
  pbVar1 = (byte *)((int)uVar36 + 0x14);
  *pbVar1 = *pbVar1 | 2;
  bVar34 = (undefined2 ****)0xfffe < ppppuStack_4e2;
  ppppuStack_4e2 = (undefined2 ****)((int)ppppuStack_4e2 + 1);
  iStack_4e0 = iStack_4e0 + (uint)bVar34;
  ppppuStack_5e = (undefined2 ****)((int)ppppuStack_496 + 1);
  iStack_5c = iStack_494 + (uint)((undefined2 ****)0xfffe < ppppuStack_496);
  uStack_530 = (undefined2 ****)CONCAT22(uStack_530._2_2_,(undefined2 ****)0x1);
LAB_3ab8_624f:
  if ((uint *)uStack_530 == (uint *)0x0) {
    cStack_555 = '\a';
    ppuVar22 = &puStack_3a;
    puVar23 = &uStack_566;
    for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar3 = (uint *)ppuVar22;
      ppuVar22 = ppuVar22 + 1;
      puVar38 = puVar23;
      puVar23 = puVar23 + 1;
      *puVar3 = *puVar38;
    }
    puStack_3e = (undefined1 *)0xdf3;
    func_0x00018396();
    ppppuStack_28 = (undefined2 ****)0x11f2;
    auStack_2c._2_2_ = 0xe03;
    uVar36 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar36 + 0x14);
    *pbVar1 = *pbVar1 | 2;
    ppppuStack_28 = (undefined2 ****)0x0;
    ppppuVar29 = (undefined2 ****)0x0;
    auStack_2c._2_2_ = 0xe1b;
    uVar36 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar36 + 0x14);
    *pbVar1 = *pbVar1 | 4;
    bVar34 = 0xfffe < uStack_4ba;
    uStack_4ba = uStack_4ba + 1;
    iStack_4b8 = iStack_4b8 + (uint)bVar34;
  }
  if ((((byte)ppppuStack_480 & 0xf) == 0xf) || ((uint *)uStack_530 == (uint *)0x0)) {
    cVar13 = FUN_12c1_009c();
    if (cVar13 == '\x1b') goto LAB_3ab8_7020;
    ppppuStack_28 = (undefined2 ****)0x11f2;
    auStack_2c._2_2_ = 0xe5a;
    FUN_1000_0599();
    ppppuStack_28 = (undefined2 ****)0x1fe;
    auStack_2c._2_2_ = 0xdef;
    ppppuVar29 = (undefined2 ****)0x11f2;
    auStack_2c._0_2_ = 0xe77;
    func_0x00012276();
  }
LAB_3ab8_62fa:
  bVar34 = (undefined2 ****)0xfffe < ppppuStack_480;
  ppppuStack_480 = (undefined2 ****)((int)ppppuStack_480 + 1);
  iStack_47e = iStack_47e + (uint)bVar34;
  goto LAB_3ab8_6304;
LAB_3ab8_65cc:
  bVar34 = ppppuStack_496 == (undefined2 ****)0x0;
  ppppuStack_496 = (undefined2 ****)((int)ppppuStack_496 + -1);
  iStack_494 = iStack_494 - (uint)bVar34;
  ppppuVar29 = ppppuVar30;
  goto LAB_3ab8_65d6;
LAB_3ab8_69c5:
  ppppuStack_4c0 = (undefined2 ****)((int)ppppuStack_4c0 + -1);
  goto LAB_3ab8_69c9;
}



/* 3ab8:4c91  FUN_3ab8_4c91  143 bytes, 1 callers */

void FUN_3ab8_4c91(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  code *pcVar10;
  char cVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar18;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 extraout_DX_04;
  int unaff_BP;
  undefined2 *puVar19;
  undefined2 *unaff_DI;
  int *piVar20;
  undefined2 unaff_ES;
  int iVar21;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar22;
  undefined1 uVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined2 *puVar26;
  int iStack_3e;
  int iStack_3c;
  int iStack_3a;
  int iStack_36;
  int iStack_34;
  int iStack_32;
  int iStack_30;
  int iStack_2e;
  int iStack_2c;
  int iStack_2a;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  
  *(undefined2 *)(unaff_BP + -0x496) = 1;
  func_0x00024c86();
  FUN_21f2_3454();
  FUN_21f2_2d26();
  uVar13 = *(undefined2 *)0x14a;
  *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)0x148;
  *(undefined2 *)(unaff_BP + -0xe) = uVar13;
  uVar13 = *(undefined2 *)0x14e;
  *(undefined2 *)(unaff_BP + -0x474) = *(undefined2 *)0x14c;
  *(undefined2 *)(unaff_BP + -0x472) = uVar13;
  *(undefined2 *)(unaff_BP + -0x480) = *(undefined2 *)0x150;
  *(undefined2 *)(unaff_BP + -0x5e) = *(undefined2 *)0x152;
  uVar13 = *(undefined2 *)0xc0ae;
  *(undefined2 *)(unaff_BP + -0x440) = *(undefined2 *)0xc0ac;
  *(undefined2 *)(unaff_BP + -0x43e) = uVar13;
  do {
    *(undefined1 *)0xd04 = 0;
    *(undefined1 *)0xd74 = 0;
    pcVar10 = (code *)swi(0x3f);
    uVar25 = (*pcVar10)();
    uVar13 = (undefined2)((ulong)uVar25 >> 0x10);
    if ((int)uVar25 != 0) {
      func_0x0000ac64();
      uVar13 = extraout_DX_01;
LAB_2bb4_65d9_2:
      uVar13 = in(uVar13);
      *unaff_DI = uVar13;
      FUN_32b2_6eb1();
      FUN_32b2_75ec();
      uVar13 = extraout_DX;
      FUN_32b2_6d14();
      FUN_32b2_6e99();
      FUN_32b2_717d();
      iStack_10 = 0x214f;
      FUN_32b2_6eb1();
      iStack_10 = 0x2157;
      FUN_32b2_6d14();
      iStack_10 = 0x215f;
      FUN_32b2_710c();
      iStack_10 = 0x2168;
      FUN_32b2_6e99();
      iStack_10 = 0x2170;
      FUN_32b2_6d14();
      iStack_10 = 0x2178;
      FUN_32b2_710c();
      iStack_10 = 0x2181;
      FUN_32b2_6e99();
      iStack_10 = 0x2186;
      FUN_32b2_718c();
      iStack_10 = 0x218f;
      FUN_32b2_6e99();
      iStack_10 = 0x2197;
      FUN_32b2_710c();
      FUN_32b2_6eb1();
      iStack_24 = *(undefined2 *)0x93c0;
      uStack_28._2_2_ = 0x32b2;
      uStack_28._0_2_ = 0x21c6;
      uVar12 = FUN_1def_2828();
      *(undefined2 *)(unaff_BP + -0x24) = uVar12;
      *(undefined2 *)(unaff_BP + -0x22) = uVar13;
      uVar12 = 0;
      FUN_32b2_6d14();
      FUN_32b2_70dc();
      FUN_32b2_710c();
      iStack_12 = 0x32b2;
      iStack_14 = 0x21fa;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2203;
      FUN_32b2_6d14();
      iStack_12 = 0x32b2;
      iStack_14 = 0x220c;
      FUN_32b2_70dc();
      iStack_12 = 0x32b2;
      iStack_14 = 0x2214;
      FUN_32b2_710c();
      FUN_32b2_6eb1();
      iStack_24 = *(undefined2 *)0x93c4;
      uStack_28._2_2_ = *(undefined2 *)0x93c2;
      uStack_28._0_2_ = *(undefined2 *)0x93c0;
      iStack_2a = 0x32b2;
      iStack_2c = 0x2243;
      uVar13 = FUN_1def_2828();
      *(undefined2 *)(unaff_BP + -0xa0) = uVar13;
      *(undefined2 *)(unaff_BP + -0x9e) = uVar12;
      iStack_10 = 0x225b;
      uVar25 = FUN_32b2_4d78();
      *(undefined2 *)(unaff_BP + -0x28) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x26) = (int)((ulong)uVar25 >> 0x10);
      iStack_10 = 0x227c;
      uVar25 = FUN_32b2_4d78();
      *(undefined2 *)(unaff_BP + -0x94) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x92) = (int)((ulong)uVar25 >> 0x10);
      FUN_32b2_6d94();
      FUN_32b2_710c();
      FUN_32b2_6e99();
      iStack_10 = 0x22a8;
      FUN_32b2_6eb1();
      iStack_10 = 0x22ad;
      puVar14 = (undefined2 *)FUN_32b2_75ec();
      *(undefined2 *)(unaff_BP + -0x9c) = *puVar14;
      *(undefined2 *)(unaff_BP + -0x9a) = puVar14[1];
      *(undefined2 *)(unaff_BP + -0x98) = puVar14[2];
      *(undefined2 *)(unaff_BP + -0x96) = puVar14[3];
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6d14();
      iStack_10 = 0x32b2;
      iStack_12 = 0x22dd;
      FUN_32b2_6eb1();
      iStack_10 = 0x32b2;
      iStack_12 = 0x22e2;
      FUN_32b2_75fe();
      uVar22 = (undefined1 *)0xfff7 < &iStack_10;
      uVar23 = &stack0x0000 == (undefined1 *)0x8;
      FUN_32b2_6d14();
      FUN_32b2_6e99();
      FUN_32b2_6fc7();
      FUN_32b2_7191();
      if ((bool)uVar22 || (bool)uVar23) {
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_718c();
        FUN_32b2_7124();
      }
      else {
        FUN_32b2_6d14();
        FUN_32b2_7124();
      }
      FUN_32b2_710c();
      FUN_32b2_6eb1();
      FUN_32b2_6d94();
      FUN_32b2_710c();
      FUN_32b2_6e99();
      iStack_12 = 0x32b2;
      iStack_14 = 0x237a;
      FUN_32b2_6eb1();
      iStack_12 = 0x32b2;
      iStack_14 = 0x237f;
      puVar14 = (undefined2 *)FUN_32b2_75ec();
      *(undefined2 *)(unaff_BP + -0x9c) = *puVar14;
      *(undefined2 *)(unaff_BP + -0x9a) = puVar14[1];
      *(undefined2 *)(unaff_BP + -0x98) = puVar14[2];
      *(undefined2 *)(unaff_BP + -0x96) = puVar14[3];
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6d14();
      iStack_14 = 0x32b2;
      FUN_32b2_6eb1();
      iStack_14 = 0x32b2;
      FUN_32b2_75fe();
      uVar22 = (undefined1 *)0xfff7 < &iStack_14;
      uVar23 = &stack0x0000 == (undefined1 *)0xc;
      iStack_10 = 0x23be;
      uVar13 = extraout_DX_00;
      FUN_32b2_6d14();
      iStack_10 = 0x23c6;
      FUN_32b2_6e99();
      iStack_10 = 0x23cb;
      FUN_32b2_6fc7();
      iStack_10 = 0x23d0;
      FUN_32b2_7191();
      if ((bool)uVar22 || (bool)uVar23) {
        iStack_10 = 0x240c;
        FUN_32b2_6d14();
        iStack_10 = 0x2414;
        FUN_32b2_710c();
        iStack_10 = 0x241c;
        FUN_32b2_6d14();
        iStack_10 = 0x2424;
        FUN_32b2_710c();
        iStack_10 = 0x2429;
        FUN_32b2_7173();
        iStack_10 = 0x2432;
        FUN_32b2_7124();
      }
      else {
        iStack_10 = 0x23da;
        FUN_32b2_6d14();
        iStack_10 = 0x23e2;
        FUN_32b2_710c();
        iStack_10 = 0x23ea;
        FUN_32b2_6d14();
        iStack_10 = 0x23f2;
        FUN_32b2_710c();
        iStack_10 = 0x23f7;
        FUN_32b2_7173();
        iStack_10 = 0x23ff;
        FUN_32b2_7124();
      }
      iStack_10 = 0x243b;
      FUN_32b2_710c();
      iStack_10 = 0x2443;
      FUN_32b2_6eb1();
      iStack_10 = 0x244c;
      FUN_32b2_6d14();
      iStack_10 = 0x2454;
      FUN_32b2_70dc();
      iStack_10 = 0x245d;
      FUN_32b2_710c();
      iStack_10 = 0x2466;
      FUN_32b2_6e99();
      iStack_10 = 0x246e;
      FUN_32b2_6eb1();
      iStack_10 = 0x2477;
      FUN_32b2_6d14();
      iStack_10 = 0x247f;
      FUN_32b2_6d14();
      iStack_10 = 0x2488;
      FUN_32b2_7154();
      iStack_10 = 0x2491;
      FUN_32b2_710c();
      iStack_10 = 0x2499;
      FUN_32b2_6e99();
      iStack_10 = 0x249e;
      FUN_32b2_7191();
      if ((bool)uVar22) {
        iStack_10 = 0x24a9;
        FUN_32b2_6d14();
        iStack_10 = 0x24b2;
        FUN_32b2_6eb1();
        iStack_10 = 0x24ba;
        FUN_32b2_6d14();
        iStack_10 = 0x24c2;
        FUN_32b2_6eb1();
        iStack_10 = 0x24cb;
        FUN_32b2_6d14();
        iStack_10 = 0x24d3;
        FUN_32b2_6eb1();
        *(undefined2 *)(unaff_BP + -0x28) = *(undefined2 *)(unaff_BP + -0x28);
        *(int *)(unaff_BP + -0x26) = *(int *)(unaff_BP + -0x26) + -0x5a;
        *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)(unaff_BP + -0x94);
        *(int *)(unaff_BP + -0x92) = *(int *)(unaff_BP + -0x92) + -0x5a;
      }
      iStack_10 = *(int *)(unaff_BP + -0x28);
      iStack_12 = 0x32b2;
      iStack_14 = 0x24ef;
      uVar12 = FUN_2bb4_63ae();
      *(undefined2 *)(unaff_BP + -10) = uVar12;
      *(undefined2 *)(unaff_BP + -8) = uVar13;
      iStack_10 = *(uint *)(unaff_BP + -0x94) + *(uint *)(unaff_BP + -0x12);
      iVar18 = *(int *)(unaff_BP + -0x92) + *(int *)(unaff_BP + -0x10) +
               (uint)CARRY2(*(uint *)(unaff_BP + -0x94),*(uint *)(unaff_BP + -0x12));
      iStack_12 = 0x32b2;
      iStack_14 = 0x250b;
      uVar13 = FUN_2bb4_63ae();
      *(undefined2 *)(unaff_BP + -0x12) = uVar13;
      *(int *)(unaff_BP + -0x10) = iVar18;
      iStack_10 = *(uint *)(unaff_BP + -0x94) + *(uint *)(unaff_BP + -0xe);
      uVar15 = (uint)CARRY2(*(uint *)(unaff_BP + -0x94),*(uint *)(unaff_BP + -0xe));
      uVar8 = *(uint *)(unaff_BP + -0x92) + *(uint *)(unaff_BP + -0xc);
      uVar23 = CARRY2(*(uint *)(unaff_BP + -0x92),*(uint *)(unaff_BP + -0xc)) ||
               CARRY2(uVar8,uVar15);
      iVar18 = uVar8 + uVar15;
      iStack_12 = 0x32b2;
      iStack_14 = 0x2527;
      uVar13 = FUN_2bb4_63ae();
      *(undefined2 *)(unaff_BP + -0xe) = uVar13;
      *(int *)(unaff_BP + -0xc) = iVar18;
      iStack_10 = 0x2538;
      FUN_32b2_6d14();
      iStack_10 = 0x2540;
      FUN_32b2_6d14();
      iStack_10 = 0x2545;
      FUN_32b2_7191();
      uVar22 = 0;
      if ((bool)uVar23) {
        iStack_10 = 0x254f;
        FUN_32b2_6d14();
        iStack_10 = 0x2554;
        FUN_32b2_6fd6();
        iStack_10 = 0x255c;
        FUN_32b2_6eb1();
        iStack_10 = -*(int *)(unaff_BP + -0xe);
        iVar18 = (0xb4 - *(int *)(unaff_BP + -0xc)) - (uint)(*(int *)(unaff_BP + -0xe) != 0);
        iStack_12 = 0x32b2;
        iStack_14 = 0x256d;
        uVar13 = FUN_2bb4_63ae();
        *(undefined2 *)(unaff_BP + -0x74) = uVar13;
        *(int *)(unaff_BP + -0x72) = iVar18;
        iStack_10 = -*(int *)(unaff_BP + -0x12);
        uVar15 = (uint)(*(int *)(unaff_BP + -0x12) != 0);
        uVar8 = 0xb4 - *(uint *)(unaff_BP + -0x10);
        uVar22 = 0xb4 < *(uint *)(unaff_BP + -0x10) || uVar8 < uVar15;
        iVar18 = uVar8 - uVar15;
        iStack_12 = 0x32b2;
        iStack_14 = 0x2586;
        uVar13 = FUN_2bb4_63ae();
        *(undefined2 *)(unaff_BP + -0x80) = uVar13;
        *(int *)(unaff_BP + -0x7e) = iVar18;
        uVar13 = *(undefined2 *)(unaff_BP + -0x72);
        *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)(unaff_BP + -0x74);
        *(undefined2 *)(unaff_BP + -0x10) = uVar13;
        uVar13 = *(undefined2 *)(unaff_BP + -0x7e);
        *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x80);
        *(undefined2 *)(unaff_BP + -0xc) = uVar13;
      }
      iStack_10 = 0x25af;
      FUN_32b2_6d14();
      iStack_10 = 0x25b7;
      FUN_32b2_6d14();
      iStack_10 = 0x25bc;
      FUN_32b2_7191();
      if ((bool)uVar22) {
        iStack_10 = 0x25c6;
        FUN_32b2_6d14();
        iStack_10 = 0x25cb;
        FUN_32b2_6fd6();
        iStack_10 = 0x25d3;
        FUN_32b2_6eb1();
        iStack_10 = -*(int *)(unaff_BP + -0xe);
        iVar18 = -(*(int *)(unaff_BP + -0xc) + (uint)(*(int *)(unaff_BP + -0xe) != 0));
        iStack_12 = 0x32b2;
        iStack_14 = 0x25e6;
        uVar13 = FUN_2bb4_63ae();
        *(undefined2 *)(unaff_BP + -0x74) = uVar13;
        *(int *)(unaff_BP + -0x72) = iVar18;
        iStack_10 = -*(int *)(unaff_BP + -0x12);
        iVar18 = -(*(int *)(unaff_BP + -0x10) + (uint)(*(int *)(unaff_BP + -0x12) != 0));
        iStack_12 = 0x32b2;
        iStack_14 = 0x2601;
        uVar13 = FUN_2bb4_63ae();
        *(undefined2 *)(unaff_BP + -0x80) = uVar13;
        *(int *)(unaff_BP + -0x7e) = iVar18;
        uVar13 = *(undefined2 *)(unaff_BP + -0x72);
        *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)(unaff_BP + -0x74);
        *(undefined2 *)(unaff_BP + -0x10) = uVar13;
        uVar13 = *(undefined2 *)(unaff_BP + -0x7e);
        *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x80);
        *(undefined2 *)(unaff_BP + -0xc) = uVar13;
      }
      iStack_10 = 0x2629;
      FUN_32b2_6d14();
      iStack_10 = 0x2631;
      FUN_32b2_6e63();
      iStack_10 = 0x2639;
      FUN_32b2_6d14();
      iStack_10 = 0x2641;
      FUN_32b2_7124();
      iStack_10 = 0x264a;
      FUN_32b2_710c();
      iStack_10 = 0x264f;
      uVar13 = FUN_32b2_6f61();
      *(undefined2 *)(unaff_BP + -0x14) = uVar13;
      if (*(uint *)(unaff_BP + -0x14) < 100) {
        *(undefined2 *)(unaff_BP + -0x14) = 100;
      }
      if ((0x270d < *(uint *)(unaff_BP + -0x14)) && (*(uint *)(unaff_BP + -0x14) < 0x2713)) {
        *(undefined2 *)(unaff_BP + -0x14) = 10000;
      }
      puVar19 = (undefined2 *)0xb1ca;
      puVar14 = (undefined2 *)(unaff_BP + -0x20);
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        puVar26 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar4 = *puVar26;
      }
      return;
    }
    if (*(int *)0x158 != 0) goto LAB_2bb4_65d9_2;
    while( true ) {
      FUN_1000_0599();
      func_0x00010526();
      FUN_1000_0599();
      func_0x00010526();
      iStack_10 = *(int *)0xa5e;
      iStack_12 = 0x27f;
      iStack_14 = 0xdef;
      func_0x0000f350();
      FUN_21f2_3454();
      *(undefined2 *)0xc22 = 1;
      iStack_10 = -0x6c5;
      FUN_1000_02b5();
      func_0x00024c86();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      if (*(int *)(unaff_BP + -0x496) != 0) {
        FUN_21f2_2d26();
        func_0x00024c86();
        *(undefined1 *)0xbf4c = 0;
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
        FUN_21f2_2d26();
      }
      *(undefined2 *)0xc26 = 1;
      uVar13 = FUN_1def_0904();
      *(undefined2 *)(unaff_BP + -0xca) = uVar13;
      *(undefined2 *)(unaff_BP + -0x4ac) = 0;
      *(undefined2 *)0xc26 = 0;
      if ((*(int *)(unaff_BP + -0xca) != 3) || (*(int *)(unaff_BP + -0x496) == 0)) break;
      if (*(char *)(unaff_BP + -0x60) == '\0') {
        *(undefined1 *)(unaff_BP + -0x60) = 1;
      }
      else {
        *(undefined1 *)(unaff_BP + -0x60) = 0;
      }
    }
    FUN_10ad_18a4();
    uVar13 = extraout_DX_02;
    if (*(int *)0x158 != 0) goto LAB_2bb4_65d9_2;
    if (*(int *)(unaff_BP + -0x484) == 1) {
      *(undefined2 *)(unaff_BP + -0xca) = 1;
    }
  } while (*(int *)(unaff_BP + -0xca) != 1);
  func_0x0000c3ca();
  iVar18 = func_0x00027724();
  if (iVar18 != 0) {
    FUN_13bf_0a03();
  }
  iVar18 = FUN_3ab8_035c();
  if (iVar18 != 0) {
    FUN_13bf_0a03();
  }
  *(undefined1 *)(unaff_BP + -0x434) = 0;
  if (*(char *)0xbf5e == 'f') {
    *(undefined1 *)(unaff_BP + -0x434) = 1;
  }
  *(undefined1 *)0xbf5c = 0;
  iVar21 = 0x22b2;
  iVar18 = func_0x00024cb8();
  if (iVar18 != 0) {
    iVar21 = 0x11f2;
    FUN_13bf_0a03();
  }
  iVar18 = FUN_3ab8_035c();
  if (iVar18 != 0) {
    iVar21 = 0x11f2;
    FUN_13bf_0a03();
  }
  iStack_12 = 0xfaff;
  iStack_10 = iVar21;
  func_0x000253ce();
  iVar18 = FUN_3ab8_035c();
  if (iVar18 != 0) {
    FUN_13bf_0a03();
  }
  iVar18 = FUN_3ab8_035c();
  if (iVar18 != 0) {
    FUN_13bf_0a03();
  }
  func_0x000253ce();
  uVar13 = extraout_DX_03;
  uVar12 = FUN_12c1_0061();
  *(undefined2 *)(unaff_BP + -0x490) = uVar12;
  *(undefined2 *)(unaff_BP + -0x48e) = uVar13;
  iVar18 = *(int *)0x14a + *(int *)(unaff_BP + -10) +
           (uint)CARRY2(*(uint *)0x148,*(uint *)(unaff_BP + -0xc));
  if ((iVar18 <= *(int *)0x13e) &&
     ((iVar18 < *(int *)0x13e || (*(uint *)0x148 + *(uint *)(unaff_BP + -0xc) <= *(uint *)0x13c))))
  {
    iVar18 = *(int *)0x14e + *(int *)(unaff_BP + -0x44c) +
             (uint)CARRY2(*(uint *)0x14c,*(uint *)(unaff_BP + -0x44e));
    if ((iVar18 <= *(int *)0x142) &&
       ((((iVar18 < *(int *)0x142 ||
          (*(uint *)0x14c + *(uint *)(unaff_BP + -0x44e) <= *(uint *)0x140)) &&
         (*(int *)(unaff_BP + -0x47a) + *(int *)0x150 <= *(int *)0x144)) &&
        (((uint)(*(int *)(unaff_BP + -0x490) + *(int *)0xc0ac) <=
          (uint)(*(int *)0xbefa + *(int *)0x166) &&
         (*(int *)(unaff_BP + -0x16) + *(int *)0x152 <= *(int *)0x146)))))) goto LAB_3ab8_50f9;
  }
  *(undefined2 *)(unaff_BP + -0x4e2) = 0;
  iVar18 = *(int *)0x14a + *(int *)(unaff_BP + -10) +
           (uint)CARRY2(*(uint *)0x148,*(uint *)(unaff_BP + -0xc));
  if (((iVar18 < *(int *)0x13e) ||
      ((iVar18 <= *(int *)0x13e && (*(uint *)0x148 + *(uint *)(unaff_BP + -0xc) <= *(uint *)0x13c)))
      ) || (*(int *)0xbed2 == 0)) {
    iVar18 = *(int *)0x14e + *(int *)(unaff_BP + -0x44c) +
             (uint)CARRY2(*(uint *)0x14c,*(uint *)(unaff_BP + -0x44e));
    if ((*(int *)0x142 <= iVar18) &&
       (((*(int *)0x142 < iVar18 || (*(uint *)0x140 < *(uint *)0x14c + *(uint *)(unaff_BP + -0x44e))
         ) && (*(int *)0xbed2 != 0)))) goto LAB_3ab8_5071;
    iStack_10 = *(int *)(unaff_BP + -0x490) + *(int *)0x166;
    pcVar10 = (code *)swi(0x3f);
    iVar18 = (*pcVar10)();
    if (iVar18 == -1) goto LAB_3ab8_5071;
    *(undefined2 *)(unaff_BP + -0x4e2) = 0;
  }
  else {
LAB_3ab8_5071:
    *(undefined2 *)(unaff_BP + -0x4e2) = 1;
  }
  if (*(int *)(unaff_BP + -0x4e2) != 0) {
    FUN_13bf_0a03();
  }
LAB_3ab8_50f9:
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  uVar13 = 0x22b2;
  iVar18 = func_0x00027724();
  if (iVar18 != 0) {
    uVar13 = 0x11f2;
    FUN_13bf_0a03();
  }
  iVar18 = FUN_3ab8_035c();
  if (iVar18 != 0) {
    uVar13 = 0x11f2;
    FUN_13bf_0a03();
  }
  iVar18 = FUN_3ab8_035c();
  if (iVar18 != 0) {
    uVar13 = 0x11f2;
    FUN_13bf_0a03();
  }
  *(undefined1 *)0xd98 = 0x67;
  iStack_10 = unaff_BP + -0x4c4;
  iStack_12 = unaff_BP + -8;
  iStack_14 = unaff_BP + -0x4d6;
  iStack_24 = unaff_BP + -0x4b4;
  uStack_28._2_2_ = unaff_BP + -0x4a0;
  uStack_28._0_2_ = unaff_BP + -0x48c;
  iStack_2a = unaff_BP + -0x4a2;
  iStack_2c = unaff_BP + -200;
  iStack_2e = unaff_BP + -0x264;
  iStack_30 = unaff_BP + -0x48a;
  iStack_32 = unaff_BP + -0x43c;
  iStack_34 = unaff_BP + -0x266;
  iStack_36 = unaff_BP + -0x4dc;
  iStack_3a = unaff_BP + -0x268;
  iStack_3c = unaff_BP + -0x16;
  iStack_3e = unaff_BP + -0x47a;
  iVar18 = func_0x000253ce(uVar13,0xbf48,0xd7a,unaff_BP + -0xc,unaff_BP + -0x44e);
  *(int *)(unaff_BP + -0xca) = iVar18;
  if (0x1e < iVar18) {
    *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -0x4ae);
  }
  iVar18 = FUN_3ab8_035c();
  if (iVar18 != 0) {
    FUN_13bf_0a03();
  }
  iVar18 = FUN_3ab8_035c();
  if (iVar18 != 0) {
    FUN_13bf_0a03();
  }
  func_0x000253ce();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  FUN_3ab8_039a();
  uVar25 = func_0x00027932();
  *(undefined2 *)(unaff_BP + -0x490) = (int)uVar25;
  *(undefined2 *)(unaff_BP + -0x48e) = (int)((ulong)uVar25 >> 0x10);
  if (*(int *)0xbed2 == 0) {
    iStack_12 = *(uint *)0x148 + 1;
    iStack_10 = *(int *)0x14a + (uint)(0xfffe < *(uint *)0x148);
    iStack_14 = 0x22b2;
    uVar25 = func_0x00027932();
    uVar25 = CONCAT22(((int)((ulong)uVar25 >> 0x10) + (uint)CARRY2((uint)uVar25,*(uint *)0xbc7e)) *
                      0x1000 + *(int *)0xbc80,(uint)uVar25 + *(uint *)0xbc7e);
  }
  else {
    iStack_12 = *(uint *)0x148 + 1;
    iStack_10 = *(int *)0x14a + (uint)(0xfffe < *(uint *)0x148);
    iStack_14 = 0x22b2;
    uVar25 = func_0x00027932();
  }
  *(undefined2 *)(unaff_BP + -0x478) = (int)uVar25;
  *(undefined2 *)(unaff_BP + -0x476) = (int)((ulong)uVar25 >> 0x10);
  iStack_14 = *(int *)0xbed2;
  func_0x000129e6();
  uVar8 = *(uint *)(unaff_BP + -0xc);
  iVar18 = *(int *)(unaff_BP + -10);
  puVar2 = (uint *)0x148;
  uVar15 = *puVar2;
  *puVar2 = *puVar2 + uVar8;
  *(int *)0x14a = *(int *)0x14a + iVar18 + (uint)CARRY2(uVar15,uVar8);
  iStack_14 = 0x11f2;
  uVar25 = func_0x00027a04();
  *(undefined2 *)(unaff_BP + -0x490) = (int)uVar25;
  *(undefined2 *)(unaff_BP + -0x48e) = (int)((ulong)uVar25 >> 0x10);
  iStack_14 = *(int *)0xc718;
  if (*(int *)0xbed2 == 0) {
    uVar25 = func_0x00027a04();
    uVar25 = CONCAT22(((int)((ulong)uVar25 >> 0x10) + (uint)CARRY2((uint)uVar25,*(uint *)0xb788)) *
                      0x1000 + *(int *)0xb78a,(uint)uVar25 + *(uint *)0xb788);
  }
  else {
    uVar25 = func_0x00027a04();
  }
  *(undefined2 *)(unaff_BP + -0x478) = (int)uVar25;
  *(undefined2 *)(unaff_BP + -0x476) = (int)((ulong)uVar25 >> 0x10);
  func_0x000129e6();
  uVar8 = *(uint *)(unaff_BP + -0x44e);
  iVar18 = *(int *)(unaff_BP + -0x44c);
  puVar2 = (uint *)0x14c;
  uVar15 = *puVar2;
  *puVar2 = *puVar2 + uVar8;
  *(int *)0x14e = *(int *)0x14e + iVar18 + (uint)CARRY2(uVar15,uVar8);
  iStack_14 = 0;
  iStack_24 = 0xffc7;
  iStack_24 = func_0x00027932();
  iStack_24 = iStack_24 + *(int *)0xbe9a;
  uStack_28._2_2_ = 0x22b2;
  uStack_28._0_2_ = 0xffde;
  func_0x000129e6();
  iStack_24 = 0x11f2;
  uStack_28._2_2_ = 0xfff6;
  uVar13 = extraout_DX_04;
  uVar12 = FUN_12c1_0061();
  *(undefined2 *)(unaff_BP + -0x490) = uVar12;
  *(undefined2 *)(unaff_BP + -0x48e) = uVar13;
  iStack_24 = *(undefined2 *)0xc0ac;
  uVar13 = *(undefined2 *)0xc0ae;
  *(undefined2 *)(unaff_BP + -0x478) = iStack_24;
  *(undefined2 *)(unaff_BP + -0x476) = uVar13;
  uStack_28._2_2_ = 0x11f2;
  uVar13 = 0x11f2;
  uStack_28._0_2_ = 0x22;
  func_0x000129e6();
  *(undefined2 *)(unaff_BP + -0x498) = 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)(unaff_BP + -0x47a)) {
    puVar26 = (undefined2 *)func_0x00000398();
    puVar19 = (undefined2 *)puVar26;
    puVar14 = (undefined2 *)(unaff_BP + -0x470);
    for (iVar18 = 0xc; iVar18 != 0; iVar18 = iVar18 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar4 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar5 = *puVar4;
    }
    iStack_24 = 0;
    uStack_28._2_2_ = 0x62;
    iVar18 = FUN_12c1_0061();
    uVar13 = *(undefined2 *)0xc0ae;
    *(int *)(unaff_BP + -0x460) = iVar18 + *(int *)0xc0ac;
    *(undefined2 *)(unaff_BP + -0x45e) = uVar13;
    uVar13 = 0;
    uVar25 = func_0x00000398();
    *(undefined2 *)(unaff_BP + -0x522) = (int)uVar25;
    *(undefined2 *)(unaff_BP + -0x520) = (int)((ulong)uVar25 >> 0x10);
    puVar14 = (undefined2 *)(unaff_BP + -0x470);
    puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x522);
    puVar19 = (undefined2 *)puVar26;
    for (iVar18 = 0xc; iVar18 != 0; iVar18 = iVar18 + -1) {
      puVar5 = puVar19;
      puVar19 = puVar19 + 1;
      puVar4 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar5 = *puVar4;
    }
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  uStack_28._2_2_ = 0xbc;
  iStack_24 = uVar13;
  iVar18 = FUN_12c1_0061();
  *(int *)0xc0ac = *(int *)0xc0ac + iVar18;
  *(int *)0x150 = *(int *)0x150 + *(int *)(unaff_BP + -0x47a);
  lVar9 = (long)*(int *)(unaff_BP + -0x16) * 0xc;
  *(undefined2 *)(unaff_BP + -0x490) = (int)lVar9;
  *(undefined2 *)(unaff_BP + -0x48e) = (int)((ulong)lVar9 >> 0x10);
  iStack_24 = 0x11f2;
  uStack_28._2_2_ = 0xf4;
  uVar25 = func_0x00027932();
  iStack_2c = (uint)uVar25 + *(uint *)0xbe82;
  iStack_2a = ((int)((ulong)uVar25 >> 0x10) + (uint)CARRY2((uint)uVar25,*(uint *)0xbe82)) * 0x1000 +
              *(int *)0xbe84;
  *(int *)(unaff_BP + -0x478) = iStack_2c;
  *(int *)(unaff_BP + -0x476) = iStack_2a;
  iStack_24 = 0;
  iStack_2e = 0x22b2;
  iStack_30 = 0x118;
  uStack_28 = lVar9;
  func_0x000129e6();
  *(int *)0x152 = *(int *)0x152 + *(int *)(unaff_BP + -0x16);
  iStack_24 = *(undefined2 *)0xd12;
  uStack_28._2_2_ = 0x11f2;
  uStack_28._0_2_ = 299;
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  *(undefined1 *)0xd14 = 2;
  *(undefined1 *)(unaff_BP + -0x482) = 0;
  uVar13 = *(undefined2 *)0xab12;
  *(undefined2 *)(unaff_BP + -0x4a6) = *(undefined2 *)0xab10;
  *(undefined2 *)(unaff_BP + -0x4a4) = uVar13;
  if ((*(int *)(unaff_BP + -200) != *(int *)0xa68) ||
     (*(int *)0x1b3e - *(int *)(unaff_BP + -2) != *(int *)0xa58)) {
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x171;
    func_0x000297e6();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x182;
    func_0x00029b85();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x18b;
    func_0x0002996b();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x194;
    func_0x00029983();
    *(int *)(unaff_BP + -0x4e2) = *(int *)0x1b3e - *(int *)0xa58;
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1a8;
    FUN_28b3_0d8b();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1b0;
    FUN_28b3_0d8b();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1b5;
    FUN_28b3_1172();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1be;
    func_0x0002996b();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1c7;
    func_0x00029b6d();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1d0;
    func_0x00029983();
    *(undefined1 *)(unaff_BP + -0x482) = 1;
  }
  pcVar10 = (code *)swi(0x3f);
  (*pcVar10)();
  *(undefined2 *)(unaff_BP + -0x47e) = 1;
  *(undefined2 *)(unaff_BP + -0x47c) = 0;
  uVar13 = 0x22b2;
  while( true ) {
    if ((*(int *)(unaff_BP + -0xe) < *(int *)(unaff_BP + -0x47c)) ||
       ((*(int *)(unaff_BP + -0xe) <= *(int *)(unaff_BP + -0x47c) &&
        (*(uint *)(unaff_BP + -0x10) < *(uint *)(unaff_BP + -0x47e))))) break;
    uStack_28._2_2_ = 0x20d;
    iStack_24 = uVar13;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 & 0xf7;
    puVar2 = (uint *)(unaff_BP + -0x47e);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar15);
    uVar13 = 0;
  }
  uVar15 = *(uint *)(unaff_BP + -0x10);
  iVar18 = *(int *)(unaff_BP + -0xe);
  *(int *)(unaff_BP + -0x47e) = uVar15 + 1;
  *(int *)(unaff_BP + -0x47c) = iVar18 + (uint)(0xfffe < uVar15);
  while( true ) {
    if ((*(int *)0x14a < *(int *)(unaff_BP + -0x47c)) ||
       ((*(int *)0x14a <= *(int *)(unaff_BP + -0x47c) &&
        (*(uint *)0x148 < *(uint *)(unaff_BP + -0x47e))))) break;
    if (*(char *)(unaff_BP + -0x482) != '\0') {
      uStack_28._2_2_ = 0x267;
      iStack_24 = uVar13;
      puVar26 = (undefined2 *)func_0x0000013f();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      func_0x000297e6();
      iStack_24 = 0x28d;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_24 = 0x2a6;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_24 = 0x2bf;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_24 = 0x2d8;
      func_0x00029b6d();
      func_0x00029983();
      iStack_24 = 0x22b2;
      uVar13 = 0;
      uStack_28._2_2_ = 0x2eb;
      uVar25 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
      puVar14 = (undefined2 *)(unaff_BP + -0x522);
      puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
      puVar19 = (undefined2 *)puVar26;
      for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar5 = *puVar4;
      }
    }
    uStack_28._2_2_ = 0x30f;
    iStack_24 = uVar13;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 & 0xfd;
    iStack_24 = 0;
    uStack_28._2_2_ = 0x327;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 & 0xfb;
    iStack_24 = 0;
    uStack_28._2_2_ = 0x33f;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 | 8;
    iStack_24 = 0;
    uVar13 = 0x11f2;
    uStack_28._2_2_ = 0x357;
    FUN_13bf_0a80();
    puVar2 = (uint *)(unaff_BP + -0x47e);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar15);
  }
  *(undefined2 *)(unaff_BP + -0x47e) = 1;
  *(undefined2 *)(unaff_BP + -0x47c) = 0;
  while( true ) {
    if ((*(int *)(unaff_BP + -0x472) < *(int *)(unaff_BP + -0x47c)) ||
       ((*(int *)(unaff_BP + -0x472) <= *(int *)(unaff_BP + -0x47c) &&
        (*(uint *)(unaff_BP + -0x474) < *(uint *)(unaff_BP + -0x47e))))) break;
    uStack_28._2_2_ = 0x391;
    iStack_24 = uVar13;
    uVar25 = func_0x00000271();
    pbVar3 = (byte *)((int)uVar25 + 0x1e);
    *pbVar3 = *pbVar3 & 0xf7;
    puVar2 = (uint *)(unaff_BP + -0x47e);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar15);
    uVar13 = 0;
  }
  uVar15 = *(uint *)(unaff_BP + -0x474);
  iVar18 = *(int *)(unaff_BP + -0x472);
  *(int *)(unaff_BP + -0x47e) = uVar15 + 1;
  *(int *)(unaff_BP + -0x47c) = iVar18 + (uint)(0xfffe < uVar15);
  while( true ) {
    if ((*(int *)0x14e < *(int *)(unaff_BP + -0x47c)) ||
       ((*(int *)0x14e <= *(int *)(unaff_BP + -0x47c) &&
        (*(uint *)0x14c < *(uint *)(unaff_BP + -0x47e))))) break;
    if (*(char *)(unaff_BP + -0x482) != '\0') {
      uStack_28._2_2_ = 0x3ed;
      iStack_24 = uVar13;
      puVar26 = (undefined2 *)func_0x00000271();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      func_0x000297e6();
      iStack_24 = 0x413;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_24 = 0x42c;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_24 = 0x445;
      func_0x00029b6d();
      func_0x00029983();
      iStack_24 = 0x22b2;
      uVar13 = 0;
      uStack_28._2_2_ = 0x458;
      uVar25 = func_0x00000271();
      *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
      puVar14 = (undefined2 *)(unaff_BP + -0x522);
      puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
      puVar19 = (undefined2 *)puVar26;
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar5 = *puVar4;
      }
    }
    uStack_28._2_2_ = 0x47c;
    iStack_24 = uVar13;
    uVar25 = func_0x00000271();
    pbVar3 = (byte *)((int)uVar25 + 0x1e);
    *pbVar3 = *pbVar3 & 0xfd;
    iStack_24 = 0;
    uStack_28._2_2_ = 0x494;
    uVar25 = func_0x00000271();
    pbVar3 = (byte *)((int)uVar25 + 0x1e);
    *pbVar3 = *pbVar3 & 0xfb;
    iStack_24 = 0;
    uVar13 = 0;
    uStack_28._2_2_ = 0x4ac;
    uVar25 = func_0x00000271();
    pbVar3 = (byte *)((int)uVar25 + 0x1e);
    *pbVar3 = *pbVar3 | 8;
    puVar2 = (uint *)(unaff_BP + -0x47e);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar15);
  }
  *(undefined2 *)(unaff_BP + -0x498) = 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)(unaff_BP + -0x480)) {
    iStack_24 = 0x4c8;
    uVar25 = func_0x00000398();
    pbVar3 = (byte *)((int)uVar25 + 0x16);
    *pbVar3 = *pbVar3 & 0xf7;
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x480) + 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)0x150) {
    if (*(char *)(unaff_BP + -0x482) != '\0') {
      iStack_24 = 0x4ff;
      puVar26 = (undefined2 *)func_0x00000398();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar18 = 0xc; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      iStack_24 = 0x56c;
      func_0x00029b6d();
      func_0x0002996b();
      FUN_28b3_117c();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      iStack_24 = 0x5a5;
      func_0x00029b6d();
      func_0x0002996b();
      FUN_28b3_117c();
      func_0x00029983();
      iStack_24 = 0x5c2;
      uVar25 = func_0x00000398();
      *(undefined2 *)(unaff_BP + -0x52e) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x52c) = (int)((ulong)uVar25 >> 0x10);
      puVar14 = (undefined2 *)(unaff_BP + -0x522);
      puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52e);
      puVar19 = (undefined2 *)puVar26;
      for (iVar18 = 0xc; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar5 = *puVar4;
      }
    }
    iStack_24 = 0x5e1;
    uVar25 = func_0x00000398();
    pbVar3 = (byte *)((int)uVar25 + 0x16);
    *pbVar3 = *pbVar3 & 0xfd;
    iStack_24 = 0x5f4;
    uVar25 = func_0x00000398();
    pbVar3 = (byte *)((int)uVar25 + 0x16);
    *pbVar3 = *pbVar3 & 0xfb;
    iStack_24 = 0x607;
    uVar25 = func_0x00000398();
    pbVar3 = (byte *)((int)uVar25 + 0x16);
    *pbVar3 = *pbVar3 | 8;
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  *(undefined2 *)(unaff_BP + -0x498) = 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)(unaff_BP + -0x5e)) {
    iStack_24 = 0x62f;
    uVar25 = func_0x000003ef();
    pbVar3 = (byte *)((int)uVar25 + 10);
    *pbVar3 = *pbVar3 & 0xf7;
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x5e) + 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)0x152) {
    if (*(char *)(unaff_BP + -0x482) != '\0') {
      iStack_24 = 0x661;
      puVar26 = (undefined2 *)func_0x000003ef();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      func_0x000297e6();
      iStack_24 = 0x686;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_24 = 0x69f;
      func_0x00029b6d();
      func_0x00029983();
      iStack_24 = 0x6ae;
      uVar25 = func_0x000003ef();
      *(undefined2 *)(unaff_BP + -0x52e) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x52c) = (int)((ulong)uVar25 >> 0x10);
      puVar14 = (undefined2 *)(unaff_BP + -0x522);
      puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52e);
      puVar19 = (undefined2 *)puVar26;
      for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar5 = *puVar4;
      }
    }
    iStack_24 = 0x6cd;
    uVar25 = func_0x000003ef();
    pbVar3 = (byte *)((int)uVar25 + 10);
    *pbVar3 = *pbVar3 & 0xfd;
    iStack_24 = 0x6e0;
    uVar25 = func_0x000003ef();
    pbVar3 = (byte *)((int)uVar25 + 10);
    *pbVar3 = *pbVar3 & 0xfb;
    iStack_24 = 0x6f3;
    uVar25 = func_0x000003ef();
    pbVar3 = (byte *)((int)uVar25 + 10);
    *pbVar3 = *pbVar3 | 8;
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  if (*(int *)(unaff_BP + -0x496) == 0) {
    uVar13 = 0x11f2;
    iStack_24 = 0x71c;
    func_0x0001470b();
  }
  else {
    func_0x0000c3ca();
    iStack_24 = 1;
    uStack_28._2_2_ = 0x19;
    uStack_28._0_2_ = 0x7b4;
    iStack_2a = 0x885;
    uVar13 = 0xdef;
    iStack_2c = 0x73d;
    FUN_1000_02b5();
    if (*(char *)(unaff_BP + -0x60) == '\0') {
      uVar15 = *(uint *)(unaff_BP + -0x10);
      iVar18 = *(int *)(unaff_BP + -0xe);
      *(uint *)(unaff_BP + -0x52e) = uVar15;
      *(int *)(unaff_BP + -0x52c) = iVar18;
      *(int *)(unaff_BP + -0x494) = uVar15 + 1;
      *(int *)(unaff_BP + -0x492) = iVar18 + (uint)(0xfffe < uVar15);
      while( true ) {
        if ((*(int *)0x14a < *(int *)(unaff_BP + -0x492)) ||
           ((*(int *)0x14a <= *(int *)(unaff_BP + -0x492) &&
            (*(uint *)0x148 < *(uint *)(unaff_BP + -0x494))))) break;
        uStack_28._2_2_ = 0x7e8;
        iStack_24 = uVar13;
        puVar26 = (undefined2 *)func_0x0000013f();
        puVar19 = (undefined2 *)puVar26;
        puVar14 = (undefined2 *)(unaff_BP + -0x564);
        for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
          puVar5 = puVar14;
          puVar14 = puVar14 + 1;
          puVar4 = puVar19;
          puVar19 = puVar19 + 1;
          *puVar5 = *puVar4;
        }
        uVar13 = 0x11f2;
        iStack_24 = 0x807;
        iVar18 = func_0x000125f1();
        if (iVar18 != 0) {
          puVar2 = (uint *)(unaff_BP + -0x52e);
          uVar15 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x52c) = *(int *)(unaff_BP + -0x52c) + (uint)(0xfffe < uVar15);
          iStack_24 = 0x11f2;
          uVar13 = 0;
          uStack_28._2_2_ = 0x823;
          uVar25 = func_0x0000013f();
          *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
          puVar14 = (undefined2 *)(unaff_BP + -0x564);
          puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
          puVar19 = (undefined2 *)puVar26;
          for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar19;
            puVar19 = puVar19 + 1;
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = *puVar4;
          }
        }
        puVar2 = (uint *)(unaff_BP + -0x494);
        uVar15 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar15);
      }
      uVar12 = *(undefined2 *)(unaff_BP + -0x52c);
      *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x52e);
      *(undefined2 *)0x14a = uVar12;
      uVar15 = *(uint *)(unaff_BP + -0x474);
      iVar18 = *(int *)(unaff_BP + -0x472);
      *(uint *)(unaff_BP + -0x52e) = uVar15;
      *(int *)(unaff_BP + -0x52c) = iVar18;
      *(int *)(unaff_BP + -0x494) = uVar15 + 1;
      *(int *)(unaff_BP + -0x492) = iVar18 + (uint)(0xfffe < uVar15);
      while( true ) {
        if ((*(int *)0x14e < *(int *)(unaff_BP + -0x492)) ||
           ((*(int *)0x14e <= *(int *)(unaff_BP + -0x492) &&
            (*(uint *)0x14c < *(uint *)(unaff_BP + -0x494))))) break;
        uStack_28._2_2_ = 0x892;
        iStack_24 = uVar13;
        puVar26 = (undefined2 *)func_0x00000271();
        puVar19 = (undefined2 *)puVar26;
        puVar14 = (undefined2 *)(unaff_BP + -0x54e);
        for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
          puVar5 = puVar14;
          puVar14 = puVar14 + 1;
          puVar4 = puVar19;
          puVar19 = puVar19 + 1;
          *puVar5 = *puVar4;
        }
        uVar13 = 0x11f2;
        iStack_24 = 0x8b1;
        iVar18 = func_0x000125f1();
        if (iVar18 != 0) {
          puVar2 = (uint *)(unaff_BP + -0x52e);
          uVar15 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x52c) = *(int *)(unaff_BP + -0x52c) + (uint)(0xfffe < uVar15);
          iStack_24 = 0x11f2;
          uVar13 = 0;
          uStack_28._2_2_ = 0x8cd;
          uVar25 = func_0x00000271();
          *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
          puVar14 = (undefined2 *)(unaff_BP + -0x54e);
          puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
          puVar19 = (undefined2 *)puVar26;
          for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar19;
            puVar19 = puVar19 + 1;
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = *puVar4;
          }
        }
        puVar2 = (uint *)(unaff_BP + -0x494);
        uVar15 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar15);
      }
      uVar13 = *(undefined2 *)(unaff_BP + -0x52c);
      *(undefined2 *)0x14c = *(undefined2 *)(unaff_BP + -0x52e);
      *(undefined2 *)0x14e = uVar13;
      iVar18 = *(int *)(unaff_BP + -0x5e);
      *(int *)(unaff_BP + -0x498) = iVar18;
      *(int *)(unaff_BP + -0x4be) = iVar18 + 1;
      while (*(int *)(unaff_BP + -0x4be) <= *(int *)0x152) {
        iStack_24 = 0x90c;
        puVar26 = (undefined2 *)func_0x000003ef();
        puVar19 = (undefined2 *)puVar26;
        puVar14 = (undefined2 *)(unaff_BP + -0x522);
        for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
          puVar5 = puVar14;
          puVar14 = puVar14 + 1;
          puVar4 = puVar19;
          puVar19 = puVar19 + 1;
          *puVar5 = *puVar4;
        }
        iStack_24 = 0x92a;
        iVar18 = func_0x000125f1();
        if (iVar18 != 0) {
          *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
          iStack_24 = 0x93c;
          uVar25 = func_0x000003ef();
          *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
          puVar14 = (undefined2 *)(unaff_BP + -0x522);
          puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
          puVar19 = (undefined2 *)puVar26;
          for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar19;
            puVar19 = puVar19 + 1;
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = *puVar4;
          }
        }
        *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + 1;
      }
      *(undefined2 *)0x152 = *(undefined2 *)(unaff_BP + -0x498);
      *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x150;
      while (*(int *)(unaff_BP + -0x480) < *(int *)(unaff_BP + -0x4be)) {
        iStack_24 = 0x975;
        uVar25 = func_0x00000398();
        *(uint *)(unaff_BP + -0x44a) = (uint)*(byte *)((int)uVar25 + 0x15);
        iStack_24 = 0x98a;
        iVar18 = func_0x000125f1();
        if (iVar18 == 0) {
          iStack_24 = 0x998;
          uVar25 = func_0x00000398();
          *(undefined1 *)((int)uVar25 + 0x14) = 0x5a;
          iStack_24 = 0x9ab;
          func_0x000190c7();
        }
        *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
      }
    }
    else {
      *(undefined2 *)(unaff_BP + -0x498) = 0;
      while (*(int *)(unaff_BP + -0x498) < 0x10) {
        iVar18 = *(int *)(unaff_BP + -0x498);
        *(undefined1 *)(iVar18 + 0xb7c) = 1;
        *(undefined1 *)(iVar18 + 0xb6c) = 1;
        *(char *)(*(int *)(unaff_BP + -0x498) + 0xb8e) = (char)iVar18 << 4;
        *(undefined2 *)(unaff_BP + -0x484) = 0;
        while (*(int *)(unaff_BP + -0x484) < 0x10) {
          iVar18 = *(int *)(unaff_BP + -0x498) * 0x10 + *(int *)(unaff_BP + -0x484);
          *(undefined1 *)(iVar18 + -0x4c78) = 1;
          *(undefined1 *)(iVar18 + -0x3e90) = 1;
          *(int *)(unaff_BP + -0x484) = *(int *)(unaff_BP + -0x484) + 1;
        }
        *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
      }
    }
    func_0x0000c3ca();
    func_0x0000b6ea();
    iStack_24 = 0x9cc;
    func_0x0001470b();
    *(undefined2 *)0xbc0 = 1;
    iStack_24 = 0x11f2;
    uStack_28._2_2_ = 0x9dd;
    FUN_1000_0599();
    iStack_24 = 0x9e8;
    func_0x00012276();
    iStack_24 = 0x11f2;
    uStack_28._2_2_ = 0x9f5;
    func_0x00024c86();
    *(undefined1 *)(*(int *)(unaff_BP + 6) + 2) = 0;
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0xa0b;
    FUN_1000_0599();
    uVar13 = 0x11f2;
    iStack_24 = 0xa15;
    func_0x00012276();
    *(undefined2 *)(unaff_BP + -0x26a) = 0;
    *(undefined2 *)(unaff_BP + -0x26c) = 0;
    *(undefined2 *)(unaff_BP + -0x4b6) = 0;
    *(undefined2 *)(unaff_BP + -0x4b8) = 0;
    *(undefined2 *)(unaff_BP + -0x43a) = 0;
    *(undefined2 *)(unaff_BP + -0x4cc) = 0;
    uVar15 = *(uint *)(unaff_BP + -0x480);
    uVar8 = *(uint *)(unaff_BP + -0x5e);
    uVar6 = *(uint *)(unaff_BP + -0x474);
    uVar17 = uVar15 + uVar8 + *(uint *)(unaff_BP + -0x474);
    iVar18 = *(int *)(unaff_BP + -0x472);
    uVar7 = *(uint *)(unaff_BP + -0x10);
    iVar21 = *(int *)(unaff_BP + -0xe);
    *(int *)(unaff_BP + -0x448) = uVar17 + *(uint *)(unaff_BP + -0x10);
    *(int *)(unaff_BP + -0x446) =
         ((int)uVar15 >> 0xf) + ((int)uVar8 >> 0xf) + (uint)CARRY2(uVar15,uVar8) + iVar18 +
         (uint)CARRY2(uVar15 + uVar8,uVar6) + iVar21 + (uint)CARRY2(uVar17,uVar7);
    *(undefined2 *)(unaff_BP + -0x47e) = 1;
    *(undefined2 *)(unaff_BP + -0x47c) = 0;
    while( true ) {
      if ((*(int *)0x14a < *(int *)(unaff_BP + -0x47c)) ||
         ((*(int *)0x14a <= *(int *)(unaff_BP + -0x47c) &&
          (*(uint *)0x148 < *(uint *)(unaff_BP + -0x47e))))) break;
      uStack_28._2_2_ = 0xa8c;
      iStack_24 = uVar13;
      uVar25 = func_0x0000013f();
      pbVar3 = (byte *)((int)uVar25 + 0x14);
      *pbVar3 = *pbVar3 & 0xfd;
      iStack_24 = 0;
      uVar13 = 0;
      uStack_28._2_2_ = 0xaa4;
      uVar25 = func_0x0000013f();
      pbVar3 = (byte *)((int)uVar25 + 0x14);
      *pbVar3 = *pbVar3 & 0xfb;
      puVar2 = (uint *)(unaff_BP + -0x47e);
      uVar15 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar15);
    }
    iVar18 = *(uint *)(unaff_BP + -0x10) + 1;
    iVar21 = *(int *)(unaff_BP + -0xe) + (uint)(0xfffe < *(uint *)(unaff_BP + -0x10));
    *(int *)(unaff_BP + -0x5c) = iVar18;
    *(int *)(unaff_BP + -0x5a) = iVar21;
    *(int *)(unaff_BP + -0x4e0) = iVar18;
    *(int *)(unaff_BP + -0x4de) = iVar21;
    *(undefined2 *)(unaff_BP + -0x47e) = 1;
    *(undefined2 *)(unaff_BP + -0x47c) = 0;
LAB_3ab8_6304:
    iStack_24 = uVar13;
    if ((*(int *)(unaff_BP + -0x47c) <= *(int *)(unaff_BP + -0xe)) &&
       ((*(int *)(unaff_BP + -0x47c) < *(int *)(unaff_BP + -0xe) ||
        (*(uint *)(unaff_BP + -0x47e) <= *(uint *)(unaff_BP + -0x10))))) {
      uStack_28._2_2_ = 0xe9f;
      puVar26 = (undefined2 *)func_0x0000013f();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x564);
      for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      uVar13 = 0;
      if (*(char *)(unaff_BP + -0x60) != '\0') {
LAB_3ab8_6349:
        *(undefined2 *)(unaff_BP + -0x52e) = 0;
        uVar12 = *(undefined2 *)(unaff_BP + -0x5a);
        *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)(unaff_BP + -0x5c);
        *(undefined2 *)(unaff_BP + -0x492) = uVar12;
        while( true ) {
          if ((*(int *)0x14a < *(int *)(unaff_BP + -0x492)) ||
             ((*(int *)0x14a <= *(int *)(unaff_BP + -0x492) &&
              (*(uint *)0x148 < *(uint *)(unaff_BP + -0x494))))) break;
          uVar12 = 0;
          uStack_28._2_2_ = 0xb07;
          iStack_24 = uVar13;
          puVar26 = (undefined2 *)func_0x0000013f();
          puVar19 = (undefined2 *)puVar26;
          puVar14 = (undefined2 *)(unaff_BP + -0x54e);
          for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if ((((*(byte *)(unaff_BP + -0x53a) & 2) == 0) &&
              (*(char *)(unaff_BP + -0x53c) == *(char *)(unaff_BP + -0x552))) &&
             (*(char *)(unaff_BP + -0x53d) == *(char *)(unaff_BP + -0x553))) {
            uVar22 = *(byte *)(unaff_BP + -0x53e) < *(byte *)(unaff_BP + -0x554);
            uVar23 = *(byte *)(unaff_BP + -0x53e) == *(byte *)(unaff_BP + -0x554);
            if ((bool)uVar23) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              uVar12 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar22 || (bool)uVar23) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                uVar12 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar22 || (bool)uVar23) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar12 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar22 || (bool)uVar23) {
                    func_0x00029834();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    func_0x00029d78();
                    uVar12 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar22 || (bool)uVar23) goto LAB_3ab8_61bb;
                  }
                }
              }
            }
          }
          puVar2 = (uint *)(unaff_BP + -0x494);
          uVar15 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar15);
          uVar13 = uVar12;
        }
        uVar12 = *(undefined2 *)(unaff_BP + -0x4de);
        *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)(unaff_BP + -0x4e0);
        *(undefined2 *)(unaff_BP + -0x492) = uVar12;
        while( true ) {
          if ((*(int *)(unaff_BP + -0x5a) < *(int *)(unaff_BP + -0x492)) ||
             ((*(int *)(unaff_BP + -0x5a) <= *(int *)(unaff_BP + -0x492) &&
              (*(uint *)(unaff_BP + -0x5c) <= *(uint *)(unaff_BP + -0x494))))) break;
          uVar12 = 0;
          uStack_28._2_2_ = 0xc41;
          iStack_24 = uVar13;
          puVar26 = (undefined2 *)func_0x0000013f();
          puVar19 = (undefined2 *)puVar26;
          puVar14 = (undefined2 *)(unaff_BP + -0x54e);
          for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if ((((*(byte *)(unaff_BP + -0x53a) & 2) == 0) &&
              (*(char *)(unaff_BP + -0x53c) == *(char *)(unaff_BP + -0x552))) &&
             (*(char *)(unaff_BP + -0x53d) == *(char *)(unaff_BP + -0x553))) {
            uVar22 = *(byte *)(unaff_BP + -0x53e) < *(byte *)(unaff_BP + -0x554);
            uVar23 = *(byte *)(unaff_BP + -0x53e) == *(byte *)(unaff_BP + -0x554);
            if ((bool)uVar23) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              uVar12 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar22 || (bool)uVar23) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                uVar12 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar22 || (bool)uVar23) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar12 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar22 || (bool)uVar23) {
                    func_0x00029834();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    func_0x00029d78();
                    uVar12 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar22 || (bool)uVar23) goto LAB_3ab8_61bb;
                  }
                }
              }
            }
          }
          puVar2 = (uint *)(unaff_BP + -0x494);
          uVar15 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar15);
          uVar13 = uVar12;
        }
        goto LAB_3ab8_624f;
      }
      uVar13 = 0x11f2;
      iStack_24 = 0xec4;
      iVar18 = func_0x000125f1();
      if (iVar18 != 0) goto LAB_3ab8_6349;
      goto LAB_3ab8_62fa;
    }
    uStack_28._2_2_ = 0xeed;
    FUN_1000_0599();
    uVar8 = *(uint *)(unaff_BP + -0x10);
    iVar18 = *(int *)(unaff_BP + -0xe);
    puVar2 = (uint *)(unaff_BP + -0x448);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 - uVar8;
    *(int *)(unaff_BP + -0x446) = (*(int *)(unaff_BP + -0x446) - iVar18) - (uint)(uVar15 < uVar8);
    iStack_24 = 0x1fe;
    uStack_28._2_2_ = 0xdef;
    uStack_28._0_2_ = 0xf0e;
    func_0x00012276();
    if ((*(uint *)(unaff_BP + -0x10) - *(uint *)(unaff_BP + -0x4e0) != -1) ||
       ((*(int *)(unaff_BP + -0xe) - *(int *)(unaff_BP + -0x4de)) -
        (uint)(*(uint *)(unaff_BP + -0x10) < *(uint *)(unaff_BP + -0x4e0)) != -1)) {
      uVar13 = *(undefined2 *)(unaff_BP + -0xe);
      *(undefined2 *)(unaff_BP + -0x564) = *(undefined2 *)(unaff_BP + -0x10);
      *(undefined2 *)(unaff_BP + -0x562) = uVar13;
      iStack_24 = 0x11f2;
      uStack_28._2_2_ = 0xf46;
      FUN_1000_0599();
      uVar13 = 0x11f2;
      iStack_24 = 0xf51;
      func_0x00012276();
      uVar15 = *(uint *)(unaff_BP + -0x10);
      iVar18 = *(int *)(unaff_BP + -0xe);
      *(int *)(unaff_BP + -0x494) = uVar15 + 1;
      *(int *)(unaff_BP + -0x492) = iVar18 + (uint)(0xfffe < uVar15);
      while( true ) {
        iStack_24 = uVar13;
        if ((*(int *)0x14a < *(int *)(unaff_BP + -0x492)) ||
           ((*(int *)0x14a <= *(int *)(unaff_BP + -0x492) &&
            (*(uint *)0x148 < *(uint *)(unaff_BP + -0x494))))) break;
        uStack_28._2_2_ = 0xf8f;
        uVar25 = func_0x0000013f();
        if ((*(byte *)((int)uVar25 + 0x14) & 2) == 0) {
          iStack_24 = 0;
          uStack_28._2_2_ = 0xfa9;
          puVar26 = (undefined2 *)func_0x0000013f();
          puVar19 = (undefined2 *)puVar26;
          puVar14 = (undefined2 *)(unaff_BP + -0x54e);
          for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          puVar2 = (uint *)(unaff_BP + -0x564);
          uVar15 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x562) = *(int *)(unaff_BP + -0x562) + (uint)(0xfffe < uVar15);
          iStack_24 = 0;
          uStack_28._2_2_ = 0xfd3;
          uVar25 = func_0x0000013f();
          *(undefined2 *)(unaff_BP + -0x52e) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x52c) = (int)((ulong)uVar25 >> 0x10);
          puVar14 = (undefined2 *)(unaff_BP + -0x54e);
          puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52e);
          puVar19 = (undefined2 *)puVar26;
          for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar19;
            puVar19 = puVar19 + 1;
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = *puVar4;
          }
        }
        uVar13 = 0;
        puVar2 = (uint *)(unaff_BP + -0x494);
        uVar15 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar15);
      }
      uVar13 = *(undefined2 *)(unaff_BP + -0x562);
      *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x564);
      *(undefined2 *)0x14a = uVar13;
      uStack_28._2_2_ = 0x1009;
      FUN_1000_0599();
      iStack_24 = 0x1014;
      func_0x00012276();
    }
    uVar13 = *(undefined2 *)0x14a;
    *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)0x148;
    *(undefined2 *)(unaff_BP + -0x492) = uVar13;
    iStack_24 = 0x11f2;
    while( true ) {
      iVar18 = *(int *)(unaff_BP + -0xe) + (uint)(0xfffe < *(uint *)(unaff_BP + -0x10));
      if ((*(int *)(unaff_BP + -0x492) < iVar18) ||
         ((*(int *)(unaff_BP + -0x492) <= iVar18 &&
          (*(uint *)(unaff_BP + -0x494) < *(uint *)(unaff_BP + -0x10) + 1)))) break;
      uStack_28._2_2_ = 0x1057;
      uVar25 = func_0x0000013f();
      pbVar3 = (byte *)((int)uVar25 + 0x14);
      *pbVar3 = *pbVar3 | 2;
      piVar1 = (int *)(unaff_BP + -0x494);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) - (uint)(iVar18 == 0);
      iStack_24 = 0;
    }
    uStack_28._2_2_ = 0x1071;
    FUN_1000_0599();
    iStack_24 = 0x107c;
    func_0x00012276();
    iStack_24 = 0x11f2;
    uStack_28._2_2_ = 0x1089;
    func_0x00024c86();
    *(undefined1 *)(*(int *)(unaff_BP + 6) + 4) = 0;
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x109f;
    FUN_1000_0599();
    uVar13 = 0x11f2;
    iStack_24 = 0x10a9;
    func_0x00012276();
    uVar8 = *(uint *)(unaff_BP + -0x474);
    iVar18 = *(int *)(unaff_BP + -0x472);
    puVar2 = (uint *)(unaff_BP + -0x448);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 - uVar8;
    *(int *)(unaff_BP + -0x446) = (*(int *)(unaff_BP + -0x446) - iVar18) - (uint)(uVar15 < uVar8);
    *(undefined2 *)(unaff_BP + -0x47e) = 1;
    *(undefined2 *)(unaff_BP + -0x47c) = 0;
    while( true ) {
      if ((*(int *)0x14e < *(int *)(unaff_BP + -0x47c)) ||
         ((*(int *)0x14e <= *(int *)(unaff_BP + -0x47c) &&
          (*(uint *)0x14c < *(uint *)(unaff_BP + -0x47e))))) break;
      uStack_28._2_2_ = 0x10ef;
      iStack_24 = uVar13;
      uVar25 = func_0x00000271();
      pbVar3 = (byte *)((int)uVar25 + 0x1e);
      *pbVar3 = *pbVar3 & 0xfd;
      iStack_24 = 0;
      uVar13 = 0;
      uStack_28._2_2_ = 0x1107;
      uVar25 = func_0x00000271();
      pbVar3 = (byte *)((int)uVar25 + 0x1e);
      *pbVar3 = *pbVar3 & 0xfb;
      puVar2 = (uint *)(unaff_BP + -0x47e);
      uVar15 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar15);
    }
    uVar12 = *(undefined2 *)(unaff_BP + -0x472);
    *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)(unaff_BP + -0x474);
    *(undefined2 *)(unaff_BP + -0x47c) = uVar12;
    while ((iStack_24 = uVar13, -1 < *(int *)(unaff_BP + -0x47c) &&
           ((0 < *(int *)(unaff_BP + -0x47c) || (*(int *)(unaff_BP + -0x47e) != 0))))) {
      uStack_28._2_2_ = 0x13df;
      puVar26 = (undefined2 *)func_0x00000271();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x54e);
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      iStack_24 = 0;
      uVar13 = 0;
      uStack_28._2_2_ = 0x13ff;
      puVar26 = (undefined2 *)func_0x00000271();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x584);
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      if (*(char *)(unaff_BP + -0x60) != '\0') {
LAB_3ab8_68a9:
        *(undefined2 *)(unaff_BP + -0x564) = 0;
        *(undefined2 *)(unaff_BP + -0x52e) = 0;
        if (((*(int *)(unaff_BP + -0x542) + 0xd8f0U < 6) &&
            (*(int *)(unaff_BP + -0x540) == *(int *)(unaff_BP + -0x53c))) &&
           (*(int *)(unaff_BP + -0x53e) == *(int *)(unaff_BP + -0x53a))) {
          *(undefined2 *)(unaff_BP + -0x52e) = 1;
        }
        uVar12 = *(undefined2 *)0x14e;
        *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)0x14c;
        *(undefined2 *)(unaff_BP + -0x492) = uVar12;
LAB_3ab8_65d6:
        iVar18 = *(int *)(unaff_BP + -0x472) + (uint)(0xfffe < *(uint *)(unaff_BP + -0x474));
        if ((iVar18 <= *(int *)(unaff_BP + -0x492)) &&
           ((iVar18 < *(int *)(unaff_BP + -0x492) ||
            (*(uint *)(unaff_BP + -0x474) + 1 <= *(uint *)(unaff_BP + -0x494))))) {
          uVar12 = 0;
          uStack_28._2_2_ = 0x1185;
          iStack_24 = uVar13;
          puVar26 = (undefined2 *)func_0x00000271();
          puVar19 = (undefined2 *)puVar26;
          puVar14 = (undefined2 *)(unaff_BP + -0x522);
          for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if ((*(char *)(unaff_BP + -0x506) != *(char *)(unaff_BP + -0x532)) ||
             (*(char *)(unaff_BP + -0x507) != *(char *)(unaff_BP + -0x533))) goto LAB_3ab8_65cc;
          uVar22 = *(byte *)(unaff_BP + -0x508) < *(byte *)(unaff_BP + -0x534);
          uVar23 = *(byte *)(unaff_BP + -0x508) == *(byte *)(unaff_BP + -0x534);
          if (!(bool)uVar23) goto LAB_3ab8_65cc;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          uVar12 = 0x22b2;
          if (!(bool)uVar22 && !(bool)uVar23) goto LAB_3ab8_65cc;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          uVar12 = 0x22b2;
          if (!(bool)uVar22 && !(bool)uVar23) goto LAB_3ab8_65cc;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          uVar13 = 0x22b2;
          FUN_28b3_1181();
          uVar12 = uVar13;
          if ((!(bool)uVar22 && !(bool)uVar23) ||
             (5 < (uint)(*(int *)(unaff_BP + -0x542) - *(int *)(unaff_BP + -0x516))))
          goto LAB_3ab8_65cc;
          if (*(int *)(unaff_BP + -0x52e) == 0) {
            uVar15 = *(uint *)(unaff_BP + -0x538) - *(uint *)(unaff_BP + -0x50c);
            iVar18 = (*(int *)(unaff_BP + -0x536) - *(int *)(unaff_BP + -0x50a)) -
                     (uint)(*(uint *)(unaff_BP + -0x538) < *(uint *)(unaff_BP + -0x50c));
            if (iVar18 < 0) {
              bVar24 = uVar15 != 0;
              uVar15 = -uVar15;
              iVar18 = -(iVar18 + (uint)bVar24);
            }
            if ((iVar18 == 0) && (uVar15 < 6)) {
              uVar15 = *(uint *)(unaff_BP + -0x540) - *(uint *)(unaff_BP + -0x514);
              iVar18 = (*(int *)(unaff_BP + -0x53e) - *(int *)(unaff_BP + -0x512)) -
                       (uint)(*(uint *)(unaff_BP + -0x540) < *(uint *)(unaff_BP + -0x514));
              if (iVar18 < 0) {
                bVar24 = uVar15 != 0;
                uVar15 = -uVar15;
                iVar18 = -(iVar18 + (uint)bVar24);
              }
              if ((iVar18 == 0) && (uVar15 < 6)) {
                uVar15 = *(uint *)(unaff_BP + -0x53c) - *(uint *)(unaff_BP + -0x510);
                iVar18 = (*(int *)(unaff_BP + -0x53a) - *(int *)(unaff_BP + -0x50e)) -
                         (uint)(*(uint *)(unaff_BP + -0x53c) < *(uint *)(unaff_BP + -0x510));
                if (iVar18 < 0) {
                  bVar24 = uVar15 != 0;
                  uVar15 = -uVar15;
                  iVar18 = -(iVar18 + (uint)bVar24);
                }
                if ((iVar18 == 0) && (uVar15 < 6)) goto LAB_3ab8_6746;
              }
            }
            goto LAB_3ab8_65cc;
          }
          if ((*(int *)(unaff_BP + -0x514) != *(int *)(unaff_BP + -0x510)) ||
             (*(int *)(unaff_BP + -0x512) != *(int *)(unaff_BP + -0x50e))) goto LAB_3ab8_65cc;
LAB_3ab8_6746:
          if ((*(int *)(unaff_BP + -0x492) <= *(int *)0x14e) &&
             ((*(int *)(unaff_BP + -0x492) < *(int *)0x14e ||
              (*(uint *)(unaff_BP + -0x494) < *(uint *)0x14c)))) {
            iStack_24 = 0x22b2;
            uVar13 = 0;
            uStack_28._2_2_ = 0x12e3;
            uVar25 = func_0x00000271();
            *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
            *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
            puVar14 = (undefined2 *)(unaff_BP + -0x584);
            puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
            puVar19 = (undefined2 *)puVar26;
            for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
              puVar5 = puVar19;
              puVar19 = puVar19 + 1;
              puVar4 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar5 = *puVar4;
            }
          }
          piVar1 = (int *)0x14c;
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          *(int *)0x14e = *(int *)0x14e - (uint)(iVar18 == 0);
          *(undefined2 *)(unaff_BP + -0x564) = 1;
        }
        if (*(int *)(unaff_BP + -0x564) == 0) {
          *(undefined1 *)(unaff_BP + -0x533) = 7;
          piVar20 = &iStack_3e;
          puVar14 = (undefined2 *)(unaff_BP + -0x54e);
          for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar4 = piVar20;
            piVar20 = piVar20 + 1;
            puVar26 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar4 = *puVar26;
          }
          FUN_12c1_0f1d(uVar13);
          iStack_24 = *(undefined2 *)(unaff_BP + -0x47e);
          uStack_28._2_2_ = 0x11f2;
          uStack_28._0_2_ = 0x133b;
          uVar25 = func_0x00000271();
          pbVar3 = (byte *)((int)uVar25 + 0x1e);
          *pbVar3 = *pbVar3 | 2;
          iStack_24 = *(undefined2 *)(unaff_BP + -0x47e);
          uStack_28._2_2_ = 0;
          uVar13 = 0;
          uStack_28._0_2_ = 0x1353;
          uVar25 = func_0x00000271();
          pbVar3 = (byte *)((int)uVar25 + 0x1e);
          *pbVar3 = *pbVar3 | 4;
          puVar2 = (uint *)(unaff_BP + -0x26c);
          uVar15 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x26a) = *(int *)(unaff_BP + -0x26a) + (uint)(0xfffe < uVar15);
        }
        if (((*(byte *)(unaff_BP + -0x47e) & 0xf) == 0xf) || (*(int *)(unaff_BP + -0x564) == 0)) {
          cVar11 = FUN_12c1_009c();
          if (cVar11 == '\x1b') goto LAB_3ab8_7020;
          iStack_24 = 0x11f2;
          uStack_28._2_2_ = 0x1392;
          FUN_1000_0599();
          iStack_24 = 0x1fe;
          uStack_28._2_2_ = 0xdef;
          uVar13 = 0x11f2;
          uStack_28._0_2_ = 0x13af;
          func_0x00012276();
        }
        goto LAB_3ab8_6832;
      }
      uVar13 = 0x11f2;
      iStack_24 = 0x1424;
      iVar18 = func_0x000125f1();
      if (iVar18 != 0) goto LAB_3ab8_68a9;
LAB_3ab8_6832:
      piVar1 = (int *)(unaff_BP + -0x47e);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) - (uint)(iVar18 == 0);
    }
    uVar13 = *(undefined2 *)0x14e;
    *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)0x14c;
    *(undefined2 *)(unaff_BP + -0x492) = uVar13;
    while( true ) {
      iVar18 = *(int *)(unaff_BP + -0x472) + (uint)(0xfffe < *(uint *)(unaff_BP + -0x474));
      if ((*(int *)(unaff_BP + -0x492) < iVar18) ||
         ((*(int *)(unaff_BP + -0x492) <= iVar18 &&
          (*(uint *)(unaff_BP + -0x494) < *(uint *)(unaff_BP + -0x474) + 1)))) break;
      uStack_28._2_2_ = 0x14b5;
      uVar25 = func_0x00000271();
      pbVar3 = (byte *)((int)uVar25 + 0x1e);
      *pbVar3 = *pbVar3 | 2;
      piVar1 = (int *)(unaff_BP + -0x494);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) - (uint)(iVar18 == 0);
      iStack_24 = 0;
    }
    uStack_28._2_2_ = 0x14cf;
    FUN_1000_0599();
    iStack_24 = 0x14da;
    func_0x00012276();
    iStack_24 = 0x11f2;
    uStack_28._2_2_ = 0x14e8;
    FUN_1000_0599();
    uVar13 = 0x11f2;
    iStack_24 = 0x14f3;
    func_0x00012276();
    uVar8 = *(uint *)(unaff_BP + -0x5e);
    puVar2 = (uint *)(unaff_BP + -0x448);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 - uVar8;
    *(int *)(unaff_BP + -0x446) =
         (*(int *)(unaff_BP + -0x446) - ((int)uVar8 >> 0xf)) - (uint)(uVar15 < uVar8);
    *(undefined2 *)(unaff_BP + -0x498) = 1;
    while (*(int *)(unaff_BP + -0x498) <= *(int *)0x152) {
      iStack_24 = 0x1511;
      uVar25 = func_0x000003ef();
      pbVar3 = (byte *)((int)uVar25 + 10);
      *pbVar3 = *pbVar3 & 0xfd;
      uVar13 = 0;
      iStack_24 = 0x1524;
      uVar25 = func_0x000003ef();
      pbVar3 = (byte *)((int)uVar25 + 10);
      *pbVar3 = *pbVar3 & 0xfb;
      *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
    }
    *(undefined2 *)(unaff_BP + -0x498) = *(undefined2 *)(unaff_BP + -0x5e);
    while (0 < *(int *)(unaff_BP + -0x498)) {
      iStack_24 = 0x16b5;
      puVar26 = (undefined2 *)func_0x000003ef();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x584);
      for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      uVar13 = 0;
      iStack_24 = 0x16d0;
      puVar26 = (undefined2 *)func_0x000003ef();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      if (*(char *)(unaff_BP + -0x60) != '\0') {
LAB_3ab8_6b79:
        *(undefined2 *)(unaff_BP + -0x54e) = 0;
        *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x152;
LAB_3ab8_69c9:
        if (*(int *)(unaff_BP + -0x5e) + 1 <= *(int *)(unaff_BP + -0x4be)) {
          uVar13 = 0;
          iStack_24 = 0x155f;
          puVar26 = (undefined2 *)func_0x000003ef();
          puVar19 = (undefined2 *)puVar26;
          puVar14 = (undefined2 *)(unaff_BP + -0x564);
          for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if (*(char *)(unaff_BP + -0x55c) != *(char *)(unaff_BP + -0x57c)) goto LAB_3ab8_69c5;
          uVar22 = *(byte *)(unaff_BP + -0x55b) < *(byte *)(unaff_BP + -0x57b);
          uVar23 = *(byte *)(unaff_BP + -0x55b) == *(byte *)(unaff_BP + -0x57b);
          if (!(bool)uVar23) goto LAB_3ab8_69c5;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          uVar13 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar22 && !(bool)uVar23) goto LAB_3ab8_69c5;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          uVar13 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar22 && !(bool)uVar23) goto LAB_3ab8_69c5;
          if (*(int *)(unaff_BP + -0x4be) < *(int *)0x152) {
            uVar13 = 0;
            iStack_24 = 0x15f2;
            uVar25 = func_0x000003ef();
            *(undefined2 *)(unaff_BP + -0x52e) = (int)uVar25;
            *(undefined2 *)(unaff_BP + -0x52c) = (int)((ulong)uVar25 >> 0x10);
            puVar14 = (undefined2 *)(unaff_BP + -0x522);
            puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52e);
            puVar19 = (undefined2 *)puVar26;
            for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
              puVar5 = puVar19;
              puVar19 = puVar19 + 1;
              puVar4 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar5 = *puVar4;
            }
          }
          *(int *)0x152 = *(int *)0x152 + -1;
          *(undefined2 *)(unaff_BP + -0x54e) = 1;
        }
        if (*(int *)(unaff_BP + -0x54e) == 0) {
          uStack_28._2_2_ = 0x1626;
          iStack_24 = uVar13;
          func_0x00007f92();
          iStack_24 = 0x1631;
          uVar25 = func_0x000003ef();
          pbVar3 = (byte *)((int)uVar25 + 10);
          *pbVar3 = *pbVar3 | 2;
          uVar13 = 0;
          iStack_24 = 0x1644;
          uVar25 = func_0x000003ef();
          pbVar3 = (byte *)((int)uVar25 + 10);
          *pbVar3 = *pbVar3 | 4;
          *(int *)(unaff_BP + -0x4cc) = *(int *)(unaff_BP + -0x4cc) + 1;
        }
        if (((*(byte *)(unaff_BP + -0x498) & 0xf) == 0xf) || (*(int *)(unaff_BP + -0x54e) == 0)) {
          cVar11 = FUN_12c1_009c();
          if (cVar11 == '\x1b') goto LAB_3ab8_7020;
          iStack_24 = 0x11f2;
          uStack_28._2_2_ = 0x167c;
          FUN_1000_0599();
          iVar18 = *(int *)(unaff_BP + -0x498);
          *(int *)(unaff_BP + -0x47e) = iVar18;
          *(int *)(unaff_BP + -0x47c) = iVar18 >> 0xf;
          iStack_24 = 0x1fe;
          uStack_28._2_2_ = 0xdef;
          uVar13 = 0x11f2;
          uStack_28._0_2_ = 0x169e;
          func_0x00012276();
        }
        goto LAB_3ab8_6b21;
      }
      uVar13 = 0x11f2;
      iStack_24 = 0x16f4;
      iVar18 = func_0x000125f1();
      if (iVar18 != 0) goto LAB_3ab8_6b79;
LAB_3ab8_6b21:
      *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + -1;
    }
    *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x152;
    while (*(int *)(unaff_BP + -0x5e) + 1 <= *(int *)(unaff_BP + -0x4be)) {
      uVar13 = 0;
      iStack_24 = 0x171b;
      uVar25 = func_0x000003ef();
      pbVar3 = (byte *)((int)uVar25 + 10);
      *pbVar3 = *pbVar3 | 2;
      *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
    }
    uStack_28._2_2_ = 0x1740;
    iStack_24 = uVar13;
    FUN_1000_0599();
    iStack_24 = 0x174b;
    func_0x00012276();
    iStack_24 = 0x11f2;
    uStack_28._2_2_ = 0x1758;
    func_0x00024c86();
    *(undefined1 *)(*(int *)(unaff_BP + 6) + 4) = 0;
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x176e;
    FUN_1000_0599();
    uVar13 = 0x11f2;
    iStack_24 = 0x1778;
    func_0x00012276();
    *(undefined2 *)(unaff_BP + -0x498) = 1;
    while (*(int *)(unaff_BP + -0x498) <= *(int *)0x150) {
      iStack_24 = 0x178a;
      uVar25 = func_0x00000398();
      pbVar3 = (byte *)((int)uVar25 + 0x16);
      *pbVar3 = *pbVar3 & 0xfd;
      uVar13 = 0;
      iStack_24 = 0x179d;
      uVar25 = func_0x00000398();
      pbVar3 = (byte *)((int)uVar25 + 0x16);
      *pbVar3 = *pbVar3 & 0xfb;
      *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
    }
    *(undefined2 *)(unaff_BP + -0x498) = *(undefined2 *)(unaff_BP + -0x480);
    while (0 < *(int *)(unaff_BP + -0x498)) {
      uVar13 = 0;
      iStack_24 = 0x19c2;
      puVar26 = (undefined2 *)func_0x00000398();
      puVar19 = (undefined2 *)puVar26;
      puVar14 = (undefined2 *)(unaff_BP + -0x54e);
      for (iVar18 = 0xc; iVar18 != 0; iVar18 = iVar18 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      if (*(char *)(unaff_BP + -0x60) == '\0') {
        uVar13 = 0x11f2;
        iStack_24 = 0x19e6;
        iVar18 = func_0x000125f1();
        if (iVar18 != 0) goto LAB_3ab8_6e6b;
      }
      else {
LAB_3ab8_6e6b:
        *(undefined2 *)(unaff_BP + -0x584) = 0;
        iStack_24 = unaff_BP + -0x6b0;
        uStack_28._0_2_ = 0x1a03;
        uStack_28._2_2_ = uVar13;
        FUN_1885_0344();
        uVar13 = 0x22b2;
        iStack_24 = 0x1a10;
        uVar12 = func_0x00024ce4();
        *(undefined2 *)(unaff_BP + -0x564) = uVar12;
        *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x150;
        while (*(int *)(unaff_BP + -0x480) + 1 <= *(int *)(unaff_BP + -0x4be)) {
          uVar13 = 0;
          iStack_24 = 0x1808;
          puVar26 = (undefined2 *)func_0x00000398();
          puVar19 = (undefined2 *)puVar26;
          puVar14 = (undefined2 *)(unaff_BP + -0x522);
          for (iVar18 = 0xc; iVar18 != 0; iVar18 = iVar18 + -1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if (*(char *)(unaff_BP + -0x50d) == *(char *)(unaff_BP + -0x539)) {
            uVar22 = *(byte *)(unaff_BP + -0x50e) < *(byte *)(unaff_BP + -0x53a);
            uVar23 = *(byte *)(unaff_BP + -0x50e) == *(byte *)(unaff_BP + -0x53a);
            if ((bool)uVar23) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              uVar13 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar22 || (bool)uVar23) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                uVar13 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar22 || (bool)uVar23) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar13 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar22 || (bool)uVar23) {
                    func_0x00029834();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    func_0x00029d78();
                    uVar13 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar22 || (bool)uVar23) {
                      iStack_24 = 0xbf48;
                      uStack_28._2_2_ = 0x22b2;
                      uVar13 = 0x18b3;
                      uStack_28._0_2_ = 0x18f8;
                      FUN_1885_0344();
                      *(undefined2 *)(unaff_BP + -0x584) = 1;
                      *(undefined2 *)(unaff_BP + -0x484) = 0;
                      while (*(int *)(unaff_BP + -0x484) <= *(int *)(unaff_BP + -0x564)) {
                        if (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x484) + -0x6b0) !=
                            *(char *)(*(int *)(unaff_BP + -0x484) + -0x40b8)) {
                          *(undefined2 *)(unaff_BP + -0x584) = 0;
                          break;
                        }
                        *(int *)(unaff_BP + -0x484) = *(int *)(unaff_BP + -0x484) + 1;
                      }
                      if (*(int *)(unaff_BP + -0x584) != 0) {
                        iStack_24 = 0x1913;
                        uVar25 = func_0x00000398();
                        *(undefined1 *)((int)uVar25 + 0x14) = 0x5a;
                        uVar13 = 0x18b3;
                        iStack_24 = 0x1926;
                        func_0x000190c7();
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
          *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
        }
        if (*(int *)(unaff_BP + -0x584) == 0) {
          uStack_28._2_2_ = 0x193b;
          iStack_24 = uVar13;
          func_0x00008009();
          iStack_24 = 0x1946;
          uVar25 = func_0x00000398();
          pbVar3 = (byte *)((int)uVar25 + 0x16);
          *pbVar3 = *pbVar3 | 2;
          uVar13 = 0;
          iStack_24 = 0x1959;
          uVar25 = func_0x00000398();
          pbVar3 = (byte *)((int)uVar25 + 0x16);
          *pbVar3 = *pbVar3 | 4;
          *(int *)(unaff_BP + -0x43a) = *(int *)(unaff_BP + -0x43a) + 1;
        }
        if (((*(byte *)(unaff_BP + -0x498) & 0xf) == 0xf) || (*(int *)(unaff_BP + -0x584) == 0)) {
          cVar11 = FUN_12c1_009c();
          if (cVar11 == '\x1b') goto LAB_3ab8_7020;
          iStack_24 = 0x11f2;
          uStack_28._2_2_ = 0x1991;
          FUN_1000_0599();
          iVar18 = *(int *)(unaff_BP + -0x498);
          *(int *)(unaff_BP + -0x47e) = iVar18;
          *(int *)(unaff_BP + -0x47c) = iVar18 >> 0xf;
          iStack_24 = 0x1fe;
          uStack_28._2_2_ = 0xdef;
          uVar13 = 0x11f2;
          uStack_28._0_2_ = 0x19ab;
          func_0x00012276();
        }
      }
      *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + -1;
    }
    *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x150;
    while (*(int *)(unaff_BP + -0x480) + 1 <= *(int *)(unaff_BP + -0x4be)) {
      uVar13 = 0;
      iStack_24 = 0x1a31;
      uVar25 = func_0x00000398();
      pbVar3 = (byte *)((int)uVar25 + 0x16);
      *pbVar3 = *pbVar3 | 2;
      *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
    }
    uStack_28._2_2_ = 0x1a57;
    iStack_24 = uVar13;
    FUN_1000_0599();
    iStack_24 = 0x1a62;
    func_0x00012276();
    func_0x0000abfa();
    iStack_24 = 0x1a70;
    func_0x0000b1d8();
    func_0x0000b6ea();
    iStack_24 = 0x1a7e;
    func_0x0001470b();
    *(undefined1 *)0x121 = 1;
    *(undefined2 *)0xbc0 = 1;
    uVar13 = 0x7a6;
    iStack_24 = 0x1a90;
    func_0x00008095();
  }
  *(undefined2 *)0xbc0 = 1;
LAB_3ab8_6f17:
  while (iStack_24 = uVar13, *(int *)(unaff_BP + -0x496) != 0) {
    uStack_28._2_2_ = 0x1abe;
    func_0x00024c86();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1acd;
    func_0x00024c86();
    if ((((((*(int *)(unaff_BP + -0x4b6) != 0 || *(int *)(unaff_BP + -0x4b8) != 0) ||
           (*(int *)(unaff_BP + -0x26a) != 0 || *(int *)(unaff_BP + -0x26c) != 0)) ||
          (*(int *)(unaff_BP + -0x4cc) != 0)) ||
         ((*(int *)(unaff_BP + -0x43a) != 0 || (*(int *)0x148 != *(int *)(unaff_BP + -0x10))))) ||
        (*(int *)0x14a != *(int *)(unaff_BP + -0xe))) ||
       (((*(int *)0x14c != *(int *)(unaff_BP + -0x474) ||
         (*(int *)0x14e != *(int *)(unaff_BP + -0x472))) ||
        ((*(int *)(unaff_BP + -0x5e) != *(int *)0x152 ||
         (*(int *)(unaff_BP + -0x480) != *(int *)0x150)))))) {
      iStack_24 = 0x22b2;
      uStack_28._2_2_ = 0x1c10;
      func_0x00024c86();
      *(undefined1 *)(*(int *)(unaff_BP + 6) + 4) = 0;
      iStack_24 = 0x22b2;
      uStack_28._2_2_ = 0x1c23;
      FUN_21f2_2d26();
      iStack_24 = 0x22b2;
      uStack_28._2_2_ = 0x1c31;
      FUN_21f2_2d26();
      iStack_24 = *(undefined2 *)(unaff_BP + -0x43a);
      uStack_28._2_2_ = *(undefined2 *)(unaff_BP + -0x4cc);
      uStack_28._0_2_ = *(undefined2 *)(unaff_BP + -0x26a);
      iStack_2a = *(undefined2 *)(unaff_BP + -0x26c);
      iStack_2c = *(undefined2 *)(unaff_BP + -0x4b6);
      iStack_2e = *(undefined2 *)(unaff_BP + -0x4b8);
      iStack_30 = 0x22e;
      iStack_32 = 0xbf48;
      iStack_34 = 0x22b2;
      iStack_36 = 0x1c5c;
      FUN_21f2_3454();
      iStack_24 = 0x22b2;
      uStack_28._2_2_ = 0x1c6c;
      puVar16 = (undefined1 *)func_0x00025b06();
      *(undefined2 *)(unaff_BP + -0x584) = puVar16;
      if (puVar16 != (undefined1 *)0x0) {
        *puVar16 = 0;
      }
      iStack_24 = 0x22b2;
      uStack_28._2_2_ = 0x1c88;
      FUN_1000_0599();
      *(undefined2 *)0xc22 = 2;
      iStack_24 = 0x1c98;
      func_0x00012276();
      iStack_24 = 0x1cd6;
      func_0x00012276();
      iStack_24 = *(int *)0x150 - *(int *)(unaff_BP + -0x480);
      uStack_28._2_2_ = *(int *)0x152 - *(int *)(unaff_BP + -0x5e);
      iStack_2a = *(uint *)0x14c - *(uint *)(unaff_BP + -0x474);
      uStack_28._0_2_ =
           (*(int *)0x14e - *(int *)(unaff_BP + -0x472)) -
           (uint)(*(uint *)0x14c < *(uint *)(unaff_BP + -0x474));
      iStack_2e = *(uint *)0x148 - *(uint *)(unaff_BP + -0x10);
      iStack_2c = (*(int *)0x14a - *(int *)(unaff_BP + -0xe)) -
                  (uint)(*(uint *)0x148 < *(uint *)(unaff_BP + -0x10));
      iStack_30 = 0x22e;
      iStack_32 = -0x40b8;
      iStack_34 = 0x11f2;
      iStack_36 = 0x1d17;
      FUN_21f2_3454();
      iStack_24 = 0x22b2;
      uStack_28._2_2_ = 0x1d27;
      puVar16 = (undefined1 *)func_0x00025b06();
      *(undefined2 *)(unaff_BP + -0x584) = puVar16;
      if (puVar16 != (undefined1 *)0x0) {
        *puVar16 = 0;
      }
      iStack_24 = 0x22b2;
      uStack_28._2_2_ = 0x1d43;
      FUN_1000_0599();
      *(undefined2 *)0xc22 = 2;
      puVar16 = (undefined1 *)*(undefined2 *)(unaff_BP + 6);
      *puVar16 = *(undefined1 *)0x992;
      puVar16[1] = *(undefined1 *)0x993;
      puVar16[2] = *(undefined1 *)0x994;
      puVar16[3] = *(undefined1 *)0x995;
      iStack_24 = 0x1d6b;
      func_0x00012276();
      uVar15 = (uint)(*(uint *)0x148 < *(uint *)(unaff_BP + -0x10));
      uVar8 = *(int *)0x14a - *(int *)(unaff_BP + -0xe);
      bVar24 = (int)(uVar8 - uVar15) < 0;
      if ((uVar8 == uVar15 || bVar24) &&
         ((bVar24 || (*(uint *)0x148 == *(uint *)(unaff_BP + -0x10))))) {
        uVar15 = (uint)(*(uint *)0x14c < *(uint *)(unaff_BP + -0x474));
        uVar8 = *(int *)0x14e - *(int *)(unaff_BP + -0x472);
        bVar24 = (int)(uVar8 - uVar15) < 0;
        if ((uVar8 == uVar15 || bVar24) &&
           ((((bVar24 || (*(uint *)0x14c == *(uint *)(unaff_BP + -0x474))) &&
             (*(int *)0x152 == *(int *)(unaff_BP + -0x5e) ||
              *(int *)0x152 - *(int *)(unaff_BP + -0x5e) < 0)) &&
            (*(int *)0x150 == *(int *)(unaff_BP + -0x480) ||
             *(int *)0x150 - *(int *)(unaff_BP + -0x480) < 0)))) {
          iStack_24 = 0x1e60;
          func_0x00012276();
          iStack_24 = 0x11f2;
          uStack_28._2_2_ = 0x1e6e;
          FUN_21f2_2d26();
          iStack_24 = 0x22b2;
          uStack_28._2_2_ = 0x1e7c;
          FUN_21f2_2d26();
          iStack_24 = 0x22b2;
          uStack_28._2_2_ = 0x1e8a;
          FUN_21f2_2d26();
          iStack_24 = 0x22b2;
          uStack_28._2_2_ = 0x1e98;
          FUN_1def_07a4();
          iStack_24 = *(undefined2 *)(unaff_BP + 6);
          uStack_28._2_2_ = 9999;
          uStack_28._0_2_ = 0x1bb4;
          iStack_2a = 0x1eb1;
          iVar18 = FUN_1def_0904();
          *(int *)(unaff_BP + -0xca) = iVar18;
          if (*(int *)0x158 == 0) goto LAB_3ab8_7342;
          goto LAB_3ab8_701a;
        }
      }
      uVar13 = 0x11f2;
      iStack_24 = 0x1dbd;
      func_0x00012276();
      *(undefined1 *)(*(int *)(unaff_BP + 6) + 0xe) = 0;
      goto LAB_3ab8_7245;
    }
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1b37;
    func_0x00024c86();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1b46;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1b54;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1b62;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1b70;
    FUN_1def_07a4();
    iStack_24 = *(undefined2 *)(unaff_BP + 6);
    uStack_28._2_2_ = 9999;
    uStack_28._0_2_ = 0x1bb4;
    iStack_2a = 0x1b89;
    iVar18 = FUN_1def_0904();
    *(int *)(unaff_BP + -0xca) = iVar18;
    if (*(int *)0x158 != 0) goto LAB_3ab8_701a;
LAB_3ab8_7342:
    uVar13 = 0x1bb4;
    if ((iVar18 == 1) || (iVar18 == -1)) goto LAB_3ab8_734f;
  }
  uVar13 = 0x22b2;
  uStack_28._2_2_ = 0x1aab;
  func_0x00024c86();
LAB_3ab8_7245:
  uStack_28._2_2_ = 0x1dd1;
  iStack_24 = uVar13;
  FUN_21f2_2d26();
  iStack_24 = 0x22b2;
  uStack_28._2_2_ = 0x1de0;
  func_0x00024c86();
  *(undefined1 *)0xbf54 = 0;
  iStack_24 = 0x22b2;
  uStack_28._2_2_ = 0x1df3;
  FUN_21f2_2d26();
  iStack_24 = 0x22b2;
  uStack_28._2_2_ = 0x1e01;
  FUN_21f2_2d26();
  *(undefined2 *)0xbc0 = 1;
  iStack_24 = 0x1e12;
  func_0x000257c0();
  if (*(int *)(unaff_BP + -0x496) == 0) {
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1e29;
    FUN_21f2_2d26();
    iStack_24 = *(undefined2 *)(unaff_BP + 6);
    uStack_28._2_2_ = 9999;
    uStack_28._0_2_ = 0x22b2;
    iStack_2a = 0x1e42;
    iVar18 = FUN_1def_0904();
    *(int *)(unaff_BP + -0xca) = iVar18;
    if (*(int *)0x158 == 0) {
      if ((iVar18 != 1) && (*(int *)(unaff_BP + -0x484) != 1)) {
        bVar24 = iVar18 == 2;
        goto LAB_3ab8_7367;
      }
LAB_3ab8_734f:
      *(undefined2 *)(unaff_BP + -0x4ac) = 1;
LAB_3ab8_7020:
      func_0x0000c3ca();
      iStack_24 = 0x1bad;
      func_0x0000daa6();
      *(undefined2 *)0xbc0 = 1;
      *(undefined1 *)0x121 = 0;
      *(undefined2 *)0xbc2 = 0;
      if (*(int *)(unaff_BP + -0x4ac) == 0) {
        uVar13 = *(undefined2 *)(unaff_BP + -0xe);
        *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x10);
        *(undefined2 *)0x14a = uVar13;
        uVar13 = *(undefined2 *)(unaff_BP + -0x472);
        *(undefined2 *)0x14c = *(undefined2 *)(unaff_BP + -0x474);
        *(undefined2 *)0x14e = uVar13;
        *(undefined2 *)0x152 = *(undefined2 *)(unaff_BP + -0x5e);
        *(undefined2 *)0x150 = *(undefined2 *)(unaff_BP + -0x480);
        uVar13 = *(undefined2 *)(unaff_BP + -0x43e);
        *(undefined2 *)0xc0ac = *(undefined2 *)(unaff_BP + -0x440);
        *(undefined2 *)0xc0ae = uVar13;
      }
      else if (*(int *)(unaff_BP + -0x4ac) == 2) {
        uVar15 = *(uint *)(unaff_BP + -0x10);
        iVar18 = *(int *)(unaff_BP + -0xe);
        *(int *)(unaff_BP + -0x47e) = uVar15 + 1;
        *(int *)(unaff_BP + -0x47c) = iVar18 + (uint)(0xfffe < uVar15);
        uVar13 = 0x885;
        while( true ) {
          if ((*(int *)0x14a < *(int *)(unaff_BP + -0x47c)) ||
             ((*(int *)0x14a <= *(int *)(unaff_BP + -0x47c) &&
              (*(uint *)0x148 < *(uint *)(unaff_BP + -0x47e))))) break;
          uStack_28._2_2_ = 0x2018;
          iStack_24 = uVar13;
          uVar25 = func_0x0000013f();
          *(undefined2 *)(unaff_BP + -0x6b0) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x6ae) = (int)((ulong)uVar25 >> 0x10);
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x6b0) + 0x12) = *(undefined1 *)0xb310;
          puVar2 = (uint *)(unaff_BP + -0x47e);
          uVar15 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar15);
          uVar13 = 0;
        }
        uVar15 = *(uint *)(unaff_BP + -0x474);
        iVar18 = *(int *)(unaff_BP + -0x472);
        *(int *)(unaff_BP + -0x47e) = uVar15 + 1;
        *(int *)(unaff_BP + -0x47c) = iVar18 + (uint)(0xfffe < uVar15);
        while( true ) {
          if ((*(int *)0x14e < *(int *)(unaff_BP + -0x47c)) ||
             ((*(int *)0x14e <= *(int *)(unaff_BP + -0x47c) &&
              (*(uint *)0x14c < *(uint *)(unaff_BP + -0x47e))))) break;
          uStack_28._2_2_ = 0x206e;
          iStack_24 = uVar13;
          uVar25 = func_0x00000271();
          *(undefined2 *)(unaff_BP + -0x6b0) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x6ae) = (int)((ulong)uVar25 >> 0x10);
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x6b0) + 0x1c) = *(undefined1 *)0xb310;
          puVar2 = (uint *)(unaff_BP + -0x47e);
          uVar15 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar15);
          uVar13 = 0;
        }
        *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x5e) + 1;
        while (*(int *)(unaff_BP + -0x498) <= *(int *)0x152) {
          iStack_24 = 0x2098;
          uVar25 = func_0x000003ef();
          *(undefined2 *)(unaff_BP + -0x6b0) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x6ae) = (int)((ulong)uVar25 >> 0x10);
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x6b0) + 8) = *(undefined1 *)0xb310;
          *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
        }
        *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x480) + 1;
        while (*(int *)(unaff_BP + -0x498) <= *(int *)0x150) {
          iStack_24 = 0x20cd;
          uVar25 = func_0x00000398();
          *(undefined2 *)(unaff_BP + -0x6b0) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x6ae) = (int)((ulong)uVar25 >> 0x10);
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x6b0) + 0x15) = *(undefined1 *)0xb310;
          *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
        }
      }
      *(undefined1 *)0x121 = 0;
      *(undefined2 *)0xbc2 = 0;
      func_0x0000abfa();
      iStack_24 = 0x2106;
      func_0x0000b1d8();
      func_0x0000b6ea();
      iStack_24 = 0x2114;
      func_0x0001470b();
      *(undefined2 *)0xbc0 = 1;
      return;
    }
  }
  else {
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1f0d;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1f1b;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1f29;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1f37;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1f45;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1f53;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1f61;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1f6f;
    FUN_21f2_2d26();
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0x1f7d;
    FUN_1def_07a4();
    iStack_24 = *(undefined2 *)(unaff_BP + 6);
    uStack_28._2_2_ = 9999;
    uStack_28._0_2_ = 0x1bb4;
    iStack_2a = 0x1f96;
    iVar18 = FUN_1def_0904();
    *(int *)(unaff_BP + -0xca) = iVar18;
    if (*(int *)0x158 == 0) {
      if (iVar18 == 1) {
        *(undefined2 *)(unaff_BP + -0x4ac) = 1;
      }
      if (iVar18 == 2) {
        *(undefined2 *)(unaff_BP + -0x4ac) = 2;
      }
      if ((iVar18 == 1) || (iVar18 == 2)) {
        *(undefined1 *)0xcf6 = 0;
        goto LAB_3ab8_7020;
      }
      bVar24 = iVar18 == 3;
LAB_3ab8_7367:
      uVar13 = 0x1bb4;
      if (((!bVar24) && (*(int *)(unaff_BP + -0x484) != 2)) && (iVar18 != -1)) goto LAB_3ab8_6f17;
    }
  }
LAB_3ab8_701a:
  *(undefined2 *)(unaff_BP + -0x4ac) = 0;
  goto LAB_3ab8_7020;
LAB_3ab8_61bb:
  uVar12 = 0x22b2;
  if ((*(int *)(unaff_BP + -0x4e0) != *(int *)(unaff_BP + -0x494)) ||
     (*(int *)(unaff_BP + -0x4de) != *(int *)(unaff_BP + -0x492))) {
    iStack_24 = 0x22b2;
    uStack_28._2_2_ = 0xd5c;
    puVar26 = (undefined2 *)func_0x0000013f();
    puVar19 = (undefined2 *)puVar26;
    puVar14 = (undefined2 *)(unaff_BP + -0x522);
    for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar4 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar5 = *puVar4;
    }
    iStack_24 = 0;
    uVar12 = 0;
    uStack_28._2_2_ = 0xd7c;
    uVar25 = func_0x0000013f();
    *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
    *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
    puVar14 = (undefined2 *)(unaff_BP + -0x522);
    puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
    puVar19 = (undefined2 *)puVar26;
    for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
      puVar5 = puVar19;
      puVar19 = puVar19 + 1;
      puVar4 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar5 = *puVar4;
    }
  }
  uVar13 = 0;
  uStack_28._2_2_ = 0xda0;
  iStack_24 = uVar12;
  uVar25 = func_0x0000013f();
  pbVar3 = (byte *)((int)uVar25 + 0x14);
  *pbVar3 = *pbVar3 | 2;
  puVar2 = (uint *)(unaff_BP + -0x4e0);
  uVar15 = *puVar2;
  *puVar2 = *puVar2 + 1;
  *(int *)(unaff_BP + -0x4de) = *(int *)(unaff_BP + -0x4de) + (uint)(0xfffe < uVar15);
  uVar15 = *(uint *)(unaff_BP + -0x494);
  iVar18 = *(int *)(unaff_BP + -0x492);
  *(int *)(unaff_BP + -0x5c) = uVar15 + 1;
  *(int *)(unaff_BP + -0x5a) = iVar18 + (uint)(0xfffe < uVar15);
  *(undefined2 *)(unaff_BP + -0x52e) = 1;
LAB_3ab8_624f:
  if (*(int *)(unaff_BP + -0x52e) == 0) {
    *(undefined1 *)(unaff_BP + -0x553) = 7;
    piVar20 = &iStack_36;
    puVar14 = (undefined2 *)(unaff_BP + -0x564);
    for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
      puVar4 = piVar20;
      piVar20 = piVar20 + 1;
      puVar26 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar4 = *puVar26;
    }
    iStack_3a = 0xdf3;
    func_0x00018396();
    iStack_24 = 0x11f2;
    uStack_28._2_2_ = 0xe03;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 | 2;
    iStack_24 = 0;
    uVar13 = 0;
    uStack_28._2_2_ = 0xe1b;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 | 4;
    puVar2 = (uint *)(unaff_BP + -0x4b8);
    uVar15 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x4b6) = *(int *)(unaff_BP + -0x4b6) + (uint)(0xfffe < uVar15);
  }
  if (((*(byte *)(unaff_BP + -0x47e) & 0xf) == 0xf) || (*(int *)(unaff_BP + -0x52e) == 0)) {
    cVar11 = FUN_12c1_009c();
    if (cVar11 == '\x1b') goto LAB_3ab8_7020;
    iStack_24 = 0x11f2;
    uStack_28._2_2_ = 0xe5a;
    FUN_1000_0599();
    iStack_24 = 0x1fe;
    uStack_28._2_2_ = 0xdef;
    uVar13 = 0x11f2;
    uStack_28._0_2_ = 0xe77;
    func_0x00012276();
  }
LAB_3ab8_62fa:
  puVar2 = (uint *)(unaff_BP + -0x47e);
  uVar15 = *puVar2;
  *puVar2 = *puVar2 + 1;
  *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar15);
  goto LAB_3ab8_6304;
LAB_3ab8_65cc:
  piVar1 = (int *)(unaff_BP + -0x494);
  iVar18 = *piVar1;
  *piVar1 = *piVar1 + -1;
  *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) - (uint)(iVar18 == 0);
  uVar13 = uVar12;
  goto LAB_3ab8_65d6;
LAB_3ab8_69c5:
  *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
  goto LAB_3ab8_69c9;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  1672 bytes, 2 callers */

void FUN_3ab8_4fbd(void)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  code *pcVar10;
  char cVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined2 in_DX;
  int iVar16;
  undefined2 extraout_DX;
  int iVar17;
  int unaff_BP;
  undefined2 *puVar18;
  undefined2 *puVar19;
  int *piVar20;
  undefined2 uVar21;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar22;
  undefined1 uVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined2 *puVar26;
  int iStack0002;
  int iStack0004;
  int iStack0006;
  int iStack_34;
  int iStack_32;
  int iStack_30;
  int iStack_2c;
  int iStack_2a;
  int iStack_28;
  int iStack_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  undefined4 uStack_1e;
  int iStack_1a;
  
  iStack0006 = *(undefined2 *)(unaff_BP + -0x442);
  iStack0004 = *(undefined2 *)(unaff_BP + -0x444);
  iStack0002 = *(undefined2 *)(unaff_BP + -0x4ba);
  uVar12 = FUN_12c1_0061();
  *(undefined2 *)(unaff_BP + -0x490) = uVar12;
  *(undefined2 *)(unaff_BP + -0x48e) = in_DX;
  iVar16 = *(int *)0x14a + *(int *)(unaff_BP + -10) +
           (uint)CARRY2(*(uint *)0x148,*(uint *)(unaff_BP + -0xc));
  if ((iVar16 <= *(int *)0x13e) &&
     ((iVar16 < *(int *)0x13e || (*(uint *)0x148 + *(uint *)(unaff_BP + -0xc) <= *(uint *)0x13c))))
  {
    iVar16 = *(int *)0x14e + *(int *)(unaff_BP + -0x44c) +
             (uint)CARRY2(*(uint *)0x14c,*(uint *)(unaff_BP + -0x44e));
    if ((iVar16 <= *(int *)0x142) &&
       ((((iVar16 < *(int *)0x142 ||
          (*(uint *)0x14c + *(uint *)(unaff_BP + -0x44e) <= *(uint *)0x140)) &&
         (*(int *)(unaff_BP + -0x47a) + *(int *)0x150 <= *(int *)0x144)) &&
        (((uint)(*(int *)(unaff_BP + -0x490) + *(int *)0xc0ac) <=
          (uint)(*(int *)0xbefa + *(int *)0x166) &&
         (*(int *)(unaff_BP + -0x16) + *(int *)0x152 <= *(int *)0x146)))))) goto LAB_3ab8_50f9;
  }
  *(undefined2 *)(unaff_BP + -0x4e2) = 0;
  iVar16 = *(int *)0x14a + *(int *)(unaff_BP + -10) +
           (uint)CARRY2(*(uint *)0x148,*(uint *)(unaff_BP + -0xc));
  if (((iVar16 < *(int *)0x13e) ||
      ((iVar16 <= *(int *)0x13e && (*(uint *)0x148 + *(uint *)(unaff_BP + -0xc) <= *(uint *)0x13c)))
      ) || (*(int *)0xbed2 == 0)) {
    iVar16 = *(int *)0x14e + *(int *)(unaff_BP + -0x44c) +
             (uint)CARRY2(*(uint *)0x14c,*(uint *)(unaff_BP + -0x44e));
    if ((*(int *)0x142 <= iVar16) &&
       (((*(int *)0x142 < iVar16 || (*(uint *)0x140 < *(uint *)0x14c + *(uint *)(unaff_BP + -0x44e))
         ) && (*(int *)0xbed2 != 0)))) goto LAB_3ab8_5071;
    iStack0006 = *(int *)(unaff_BP + -0x47a) + *(int *)0x150;
    iStack0004 = *(int *)(unaff_BP + -0x16) + *(int *)0x152;
    iStack0002 = *(int *)0x14e + *(int *)(unaff_BP + -0x44c) +
                 (uint)CARRY2(*(uint *)0x14c,*(uint *)(unaff_BP + -0x44e));
    pcVar10 = (code *)swi(0x3f);
    iVar16 = (*pcVar10)();
    if (iVar16 == -1) goto LAB_3ab8_5071;
    *(undefined2 *)(unaff_BP + -0x4e2) = 0;
  }
  else {
LAB_3ab8_5071:
    *(undefined2 *)(unaff_BP + -0x4e2) = 1;
  }
  if (*(int *)(unaff_BP + -0x4e2) != 0) {
    iStack0006 = 0x764;
    iStack0004 = 0x11f2;
    iStack0002 = 0xfc78;
    FUN_13bf_0a03();
  }
LAB_3ab8_50f9:
  iStack0006 = *(undefined2 *)0xd12;
  iStack0004 = 0x11f2;
  iStack0002 = 0xfc82;
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  iStack0006 = 0xd12;
  iStack0004 = 0;
  iStack0002 = unaff_BP + -0x58;
  uVar12 = 0x22b2;
  iVar16 = func_0x00027724();
  if (iVar16 != 0) {
    iStack0006 = unaff_BP + -0x29e;
    iStack0004 = 0x22b2;
    uVar12 = 0x11f2;
    iStack0002 = -0x356;
    FUN_13bf_0a03();
  }
  iStack0004 = 0xfcaf;
  iStack0006 = uVar12;
  iVar16 = FUN_3ab8_035c();
  uVar21 = uVar12;
  if (iVar16 != 0) {
    iStack0006 = 0x370;
    uVar21 = 0x11f2;
    iStack0002 = -0x344;
    iStack0004 = uVar12;
    FUN_13bf_0a03();
  }
  iStack0004 = 0xfcc1;
  iStack0006 = uVar21;
  iVar16 = FUN_3ab8_035c();
  uVar12 = uVar21;
  if (iVar16 != 0) {
    iStack0006 = 0x370;
    uVar12 = 0x11f2;
    iStack0002 = 0xfcce;
    iStack0004 = uVar21;
    FUN_13bf_0a03();
  }
  *(undefined1 *)0xd98 = 0x67;
  iStack0006 = unaff_BP + -0x4c0;
  iStack0004 = unaff_BP + -0x4ae;
  iStack0002 = unaff_BP + -0x49a;
  iStack_1a = unaff_BP + -0x4b4;
  uStack_1e._2_2_ = unaff_BP + -0x4a0;
  uStack_1e._0_2_ = unaff_BP + -0x48c;
  iStack_20 = unaff_BP + -0x4a2;
  iStack_22 = unaff_BP + -200;
  iStack_24 = unaff_BP + -0x264;
  iStack_26 = unaff_BP + -0x48a;
  iStack_28 = unaff_BP + -0x43c;
  iStack_2a = unaff_BP + -0x266;
  iStack_2c = unaff_BP + -0x4dc;
  iStack_30 = unaff_BP + -0x268;
  iStack_32 = unaff_BP + -0x16;
  iStack_34 = unaff_BP + -0x47a;
  uVar21 = 0x22b2;
  iVar16 = func_0x000253ce(uVar12,0xbf48,0xd7a,unaff_BP + -0xc,unaff_BP + -0x44e);
  *(int *)(unaff_BP + -0xca) = iVar16;
  if (0x1e < iVar16) {
    *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -0x4ae);
  }
  iStack0006 = 0x22b2;
  iStack0004 = 0xfd93;
  iVar16 = FUN_3ab8_035c();
  if (iVar16 != 0) {
    iStack0006 = 0x370;
    iStack0004 = 0x22b2;
    uVar21 = 0x11f2;
    iStack0002 = -0x260;
    FUN_13bf_0a03();
  }
  iStack0004 = 0xfda5;
  iStack0006 = uVar21;
  iVar16 = FUN_3ab8_035c();
  if (iVar16 != 0) {
    iStack0006 = 0x370;
    iStack0002 = 0xfdb2;
    iStack0004 = uVar21;
    FUN_13bf_0a03();
  }
  iStack0006 = unaff_BP + -0x4bc;
  iStack0004 = unaff_BP + -0x444;
  iStack0002 = 0x79d3;
  func_0x000253ce();
  iStack0006 = 0x194;
  iStack0004 = unaff_BP + -0x262;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x194;
  iStack0004 = unaff_BP + -0x432;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x65;
  iStack0004 = unaff_BP + -0xc6;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x16;
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x16;
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x16;
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x16;
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  if (*(char *)(unaff_BP + -0x434) == '\0') {
    iStack0006 = 0x20;
  }
  else {
    iStack0006 = 0x40;
  }
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x10;
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x100;
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x10;
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x100;
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0x10;
  iStack0004 = 0xbf48;
  iStack0002 = 0x22b2;
  FUN_3ab8_039a();
  iStack0006 = 0;
  iStack0004 = 0x16;
  iStack0002 = *(undefined2 *)(unaff_BP + -10);
  uVar25 = func_0x00027932();
  *(undefined2 *)(unaff_BP + -0x490) = (int)uVar25;
  *(undefined2 *)(unaff_BP + -0x48e) = (int)((ulong)uVar25 >> 0x10);
  if (*(int *)0xbed2 == 0) {
    uVar25 = func_0x00027932();
    uVar25 = CONCAT22(((int)((ulong)uVar25 >> 0x10) + (uint)CARRY2((uint)uVar25,*(uint *)0xbc7e)) *
                      0x1000 + *(int *)0xbc80,(uint)uVar25 + *(uint *)0xbc7e);
  }
  else {
    uVar25 = func_0x00027932();
  }
  *(undefined2 *)(unaff_BP + -0x478) = (int)uVar25;
  *(undefined2 *)(unaff_BP + -0x476) = (int)((ulong)uVar25 >> 0x10);
  func_0x000129e6();
  uVar6 = *(uint *)(unaff_BP + -0xc);
  iVar16 = *(int *)(unaff_BP + -10);
  puVar2 = (uint *)0x148;
  uVar13 = *puVar2;
  *puVar2 = *puVar2 + uVar6;
  *(int *)0x14a = *(int *)0x14a + iVar16 + (uint)CARRY2(uVar13,uVar6);
  uVar25 = func_0x00027a04();
  *(undefined2 *)(unaff_BP + -0x490) = (int)uVar25;
  *(undefined2 *)(unaff_BP + -0x48e) = (int)((ulong)uVar25 >> 0x10);
  if (*(int *)0xbed2 == 0) {
    uVar25 = func_0x00027a04();
    uVar25 = CONCAT22(((int)((ulong)uVar25 >> 0x10) + (uint)CARRY2((uint)uVar25,*(uint *)0xb788)) *
                      0x1000 + *(int *)0xb78a,(uint)uVar25 + *(uint *)0xb788);
  }
  else {
    uVar25 = func_0x00027a04();
  }
  *(undefined2 *)(unaff_BP + -0x478) = (int)uVar25;
  *(undefined2 *)(unaff_BP + -0x476) = (int)((ulong)uVar25 >> 0x10);
  func_0x000129e6();
  uVar6 = *(uint *)(unaff_BP + -0x44e);
  iVar16 = *(int *)(unaff_BP + -0x44c);
  puVar2 = (uint *)0x14c;
  uVar13 = *puVar2;
  *puVar2 = *puVar2 + uVar6;
  *(int *)0x14e = *(int *)0x14e + iVar16 + (uint)CARRY2(uVar13,uVar6);
  iStack_1a = 0xffc7;
  iStack_1a = func_0x00027932();
  iStack_1a = iStack_1a + *(int *)0xbe9a;
  uStack_1e._2_2_ = 0x22b2;
  uStack_1e._0_2_ = 0xffde;
  func_0x000129e6();
  iStack_1a = 0x11f2;
  uStack_1e._2_2_ = 0xfff6;
  uVar12 = extraout_DX;
  uVar21 = FUN_12c1_0061();
  *(undefined2 *)(unaff_BP + -0x490) = uVar21;
  *(undefined2 *)(unaff_BP + -0x48e) = uVar12;
  iStack_1a = *(undefined2 *)0xc0ac;
  uVar12 = *(undefined2 *)0xc0ae;
  *(undefined2 *)(unaff_BP + -0x478) = iStack_1a;
  *(undefined2 *)(unaff_BP + -0x476) = uVar12;
  uStack_1e._2_2_ = 0x11f2;
  uVar12 = 0x11f2;
  uStack_1e._0_2_ = 0x22;
  func_0x000129e6();
  *(undefined2 *)(unaff_BP + -0x498) = 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)(unaff_BP + -0x47a)) {
    puVar26 = (undefined2 *)func_0x00000398();
    puVar19 = (undefined2 *)puVar26;
    puVar18 = (undefined2 *)(unaff_BP + -0x470);
    for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
      puVar5 = puVar18;
      puVar18 = puVar18 + 1;
      puVar4 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar5 = *puVar4;
    }
    iStack_1a = 0;
    uStack_1e._2_2_ = 0x62;
    iVar16 = FUN_12c1_0061();
    uVar12 = *(undefined2 *)0xc0ae;
    *(int *)(unaff_BP + -0x460) = iVar16 + *(int *)0xc0ac;
    *(undefined2 *)(unaff_BP + -0x45e) = uVar12;
    uVar12 = 0;
    uVar25 = func_0x00000398();
    *(undefined2 *)(unaff_BP + -0x522) = (int)uVar25;
    *(undefined2 *)(unaff_BP + -0x520) = (int)((ulong)uVar25 >> 0x10);
    puVar18 = (undefined2 *)(unaff_BP + -0x470);
    puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x522);
    puVar19 = (undefined2 *)puVar26;
    for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
      puVar5 = puVar19;
      puVar19 = puVar19 + 1;
      puVar4 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar5 = *puVar4;
    }
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  uStack_1e._2_2_ = 0xbc;
  iStack_1a = uVar12;
  iVar16 = FUN_12c1_0061();
  *(int *)0xc0ac = *(int *)0xc0ac + iVar16;
  *(int *)0x150 = *(int *)0x150 + *(int *)(unaff_BP + -0x47a);
  lVar9 = (long)*(int *)(unaff_BP + -0x16) * 0xc;
  *(undefined2 *)(unaff_BP + -0x490) = (int)lVar9;
  *(undefined2 *)(unaff_BP + -0x48e) = (int)((ulong)lVar9 >> 0x10);
  iStack_1a = 0x11f2;
  uStack_1e._2_2_ = 0xf4;
  uVar25 = func_0x00027932();
  iStack_22 = (uint)uVar25 + *(uint *)0xbe82;
  iStack_20 = ((int)((ulong)uVar25 >> 0x10) + (uint)CARRY2((uint)uVar25,*(uint *)0xbe82)) * 0x1000 +
              *(int *)0xbe84;
  *(int *)(unaff_BP + -0x478) = iStack_22;
  *(int *)(unaff_BP + -0x476) = iStack_20;
  iStack_1a = 0;
  iStack_24 = 0x22b2;
  iStack_26 = 0x118;
  uStack_1e = lVar9;
  func_0x000129e6();
  *(int *)0x152 = *(int *)0x152 + *(int *)(unaff_BP + -0x16);
  iStack_1a = *(undefined2 *)0xd12;
  uStack_1e._2_2_ = 0x11f2;
  uStack_1e._0_2_ = 299;
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  *(undefined1 *)0xd14 = 2;
  *(undefined1 *)(unaff_BP + -0x482) = 0;
  uVar12 = *(undefined2 *)0xab12;
  *(undefined2 *)(unaff_BP + -0x4a6) = *(undefined2 *)0xab10;
  *(undefined2 *)(unaff_BP + -0x4a4) = uVar12;
  if ((*(int *)(unaff_BP + -200) != *(int *)0xa68) ||
     (*(int *)0x1b3e - *(int *)(unaff_BP + -2) != *(int *)0xa58)) {
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x171;
    func_0x000297e6();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x182;
    func_0x00029b85();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x18b;
    func_0x0002996b();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x194;
    func_0x00029983();
    *(int *)(unaff_BP + -0x4e2) = *(int *)0x1b3e - *(int *)0xa58;
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1a8;
    FUN_28b3_0d8b();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1b0;
    FUN_28b3_0d8b();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1b5;
    FUN_28b3_1172();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1be;
    func_0x0002996b();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1c7;
    func_0x00029b6d();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1d0;
    func_0x00029983();
    *(undefined1 *)(unaff_BP + -0x482) = 1;
  }
  pcVar10 = (code *)swi(0x3f);
  (*pcVar10)();
  *(undefined2 *)(unaff_BP + -0x47e) = 1;
  *(undefined2 *)(unaff_BP + -0x47c) = 0;
  uVar12 = 0x22b2;
  while( true ) {
    if ((*(int *)(unaff_BP + -0xe) < *(int *)(unaff_BP + -0x47c)) ||
       ((*(int *)(unaff_BP + -0xe) <= *(int *)(unaff_BP + -0x47c) &&
        (*(uint *)(unaff_BP + -0x10) < *(uint *)(unaff_BP + -0x47e))))) break;
    uStack_1e._2_2_ = 0x20d;
    iStack_1a = uVar12;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 & 0xf7;
    puVar2 = (uint *)(unaff_BP + -0x47e);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar13);
    uVar12 = 0;
  }
  uVar13 = *(uint *)(unaff_BP + -0x10);
  iVar16 = *(int *)(unaff_BP + -0xe);
  *(int *)(unaff_BP + -0x47e) = uVar13 + 1;
  *(int *)(unaff_BP + -0x47c) = iVar16 + (uint)(0xfffe < uVar13);
  while( true ) {
    if ((*(int *)0x14a < *(int *)(unaff_BP + -0x47c)) ||
       ((*(int *)0x14a <= *(int *)(unaff_BP + -0x47c) &&
        (*(uint *)0x148 < *(uint *)(unaff_BP + -0x47e))))) break;
    if (*(char *)(unaff_BP + -0x482) != '\0') {
      uStack_1e._2_2_ = 0x267;
      iStack_1a = uVar12;
      puVar26 = (undefined2 *)func_0x0000013f();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      func_0x000297e6();
      iStack_1a = 0x28d;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_1a = 0x2a6;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_1a = 0x2bf;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_1a = 0x2d8;
      func_0x00029b6d();
      func_0x00029983();
      iStack_1a = 0x22b2;
      uVar12 = 0;
      uStack_1e._2_2_ = 0x2eb;
      uVar25 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
      puVar18 = (undefined2 *)(unaff_BP + -0x522);
      puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
      puVar19 = (undefined2 *)puVar26;
      for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        puVar4 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar5 = *puVar4;
      }
    }
    uStack_1e._2_2_ = 0x30f;
    iStack_1a = uVar12;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 & 0xfd;
    iStack_1a = 0;
    uStack_1e._2_2_ = 0x327;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 & 0xfb;
    iStack_1a = 0;
    uStack_1e._2_2_ = 0x33f;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 | 8;
    iStack_1a = 0;
    uVar12 = 0x11f2;
    uStack_1e._2_2_ = 0x357;
    FUN_13bf_0a80();
    puVar2 = (uint *)(unaff_BP + -0x47e);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar13);
  }
  *(undefined2 *)(unaff_BP + -0x47e) = 1;
  *(undefined2 *)(unaff_BP + -0x47c) = 0;
  while( true ) {
    if ((*(int *)(unaff_BP + -0x472) < *(int *)(unaff_BP + -0x47c)) ||
       ((*(int *)(unaff_BP + -0x472) <= *(int *)(unaff_BP + -0x47c) &&
        (*(uint *)(unaff_BP + -0x474) < *(uint *)(unaff_BP + -0x47e))))) break;
    uStack_1e._2_2_ = 0x391;
    iStack_1a = uVar12;
    uVar25 = func_0x00000271();
    pbVar3 = (byte *)((int)uVar25 + 0x1e);
    *pbVar3 = *pbVar3 & 0xf7;
    puVar2 = (uint *)(unaff_BP + -0x47e);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar13);
    uVar12 = 0;
  }
  uVar13 = *(uint *)(unaff_BP + -0x474);
  iVar16 = *(int *)(unaff_BP + -0x472);
  *(int *)(unaff_BP + -0x47e) = uVar13 + 1;
  *(int *)(unaff_BP + -0x47c) = iVar16 + (uint)(0xfffe < uVar13);
  while( true ) {
    if ((*(int *)0x14e < *(int *)(unaff_BP + -0x47c)) ||
       ((*(int *)0x14e <= *(int *)(unaff_BP + -0x47c) &&
        (*(uint *)0x14c < *(uint *)(unaff_BP + -0x47e))))) break;
    if (*(char *)(unaff_BP + -0x482) != '\0') {
      uStack_1e._2_2_ = 0x3ed;
      iStack_1a = uVar12;
      puVar26 = (undefined2 *)func_0x00000271();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      func_0x000297e6();
      iStack_1a = 0x413;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_1a = 0x42c;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_1a = 0x445;
      func_0x00029b6d();
      func_0x00029983();
      iStack_1a = 0x22b2;
      uVar12 = 0;
      uStack_1e._2_2_ = 0x458;
      uVar25 = func_0x00000271();
      *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
      puVar18 = (undefined2 *)(unaff_BP + -0x522);
      puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
      puVar19 = (undefined2 *)puVar26;
      for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        puVar4 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar5 = *puVar4;
      }
    }
    uStack_1e._2_2_ = 0x47c;
    iStack_1a = uVar12;
    uVar25 = func_0x00000271();
    pbVar3 = (byte *)((int)uVar25 + 0x1e);
    *pbVar3 = *pbVar3 & 0xfd;
    iStack_1a = 0;
    uStack_1e._2_2_ = 0x494;
    uVar25 = func_0x00000271();
    pbVar3 = (byte *)((int)uVar25 + 0x1e);
    *pbVar3 = *pbVar3 & 0xfb;
    iStack_1a = 0;
    uVar12 = 0;
    uStack_1e._2_2_ = 0x4ac;
    uVar25 = func_0x00000271();
    pbVar3 = (byte *)((int)uVar25 + 0x1e);
    *pbVar3 = *pbVar3 | 8;
    puVar2 = (uint *)(unaff_BP + -0x47e);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar13);
  }
  *(undefined2 *)(unaff_BP + -0x498) = 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)(unaff_BP + -0x480)) {
    iStack_1a = 0x4c8;
    uVar25 = func_0x00000398();
    pbVar3 = (byte *)((int)uVar25 + 0x16);
    *pbVar3 = *pbVar3 & 0xf7;
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x480) + 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)0x150) {
    if (*(char *)(unaff_BP + -0x482) != '\0') {
      iStack_1a = 0x4ff;
      puVar26 = (undefined2 *)func_0x00000398();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      iStack_1a = 0x56c;
      func_0x00029b6d();
      func_0x0002996b();
      FUN_28b3_117c();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029b6d();
      func_0x000297e6();
      iStack_1a = 0x5a5;
      func_0x00029b6d();
      func_0x0002996b();
      FUN_28b3_117c();
      func_0x00029983();
      iStack_1a = 0x5c2;
      uVar25 = func_0x00000398();
      *(undefined2 *)(unaff_BP + -0x52e) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x52c) = (int)((ulong)uVar25 >> 0x10);
      puVar18 = (undefined2 *)(unaff_BP + -0x522);
      puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52e);
      puVar19 = (undefined2 *)puVar26;
      for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        puVar4 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar5 = *puVar4;
      }
    }
    iStack_1a = 0x5e1;
    uVar25 = func_0x00000398();
    pbVar3 = (byte *)((int)uVar25 + 0x16);
    *pbVar3 = *pbVar3 & 0xfd;
    iStack_1a = 0x5f4;
    uVar25 = func_0x00000398();
    pbVar3 = (byte *)((int)uVar25 + 0x16);
    *pbVar3 = *pbVar3 & 0xfb;
    iStack_1a = 0x607;
    uVar25 = func_0x00000398();
    pbVar3 = (byte *)((int)uVar25 + 0x16);
    *pbVar3 = *pbVar3 | 8;
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  *(undefined2 *)(unaff_BP + -0x498) = 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)(unaff_BP + -0x5e)) {
    iStack_1a = 0x62f;
    uVar25 = func_0x000003ef();
    pbVar3 = (byte *)((int)uVar25 + 10);
    *pbVar3 = *pbVar3 & 0xf7;
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x5e) + 1;
  while (*(int *)(unaff_BP + -0x498) <= *(int *)0x152) {
    if (*(char *)(unaff_BP + -0x482) != '\0') {
      iStack_1a = 0x661;
      puVar26 = (undefined2 *)func_0x000003ef();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      func_0x000297e6();
      iStack_1a = 0x686;
      func_0x00029b6d();
      func_0x00029983();
      func_0x000297e6();
      iStack_1a = 0x69f;
      func_0x00029b6d();
      func_0x00029983();
      iStack_1a = 0x6ae;
      uVar25 = func_0x000003ef();
      *(undefined2 *)(unaff_BP + -0x52e) = (int)uVar25;
      *(undefined2 *)(unaff_BP + -0x52c) = (int)((ulong)uVar25 >> 0x10);
      puVar18 = (undefined2 *)(unaff_BP + -0x522);
      puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52e);
      puVar19 = (undefined2 *)puVar26;
      for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        puVar4 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar5 = *puVar4;
      }
    }
    iStack_1a = 0x6cd;
    uVar25 = func_0x000003ef();
    pbVar3 = (byte *)((int)uVar25 + 10);
    *pbVar3 = *pbVar3 & 0xfd;
    iStack_1a = 0x6e0;
    uVar25 = func_0x000003ef();
    pbVar3 = (byte *)((int)uVar25 + 10);
    *pbVar3 = *pbVar3 & 0xfb;
    iStack_1a = 0x6f3;
    uVar25 = func_0x000003ef();
    pbVar3 = (byte *)((int)uVar25 + 10);
    *pbVar3 = *pbVar3 | 8;
    *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
  }
  if (*(int *)(unaff_BP + -0x496) == 0) {
    uVar12 = 0x11f2;
    iStack_1a = 0x71c;
    func_0x0001470b();
  }
  else {
    func_0x0000c3ca();
    iStack_1a = 1;
    uStack_1e._2_2_ = 0x19;
    uStack_1e._0_2_ = 0x7b4;
    iStack_20 = 0x885;
    uVar12 = 0xdef;
    iStack_22 = 0x73d;
    FUN_1000_02b5();
    if (*(char *)(unaff_BP + -0x60) == '\0') {
      uVar13 = *(uint *)(unaff_BP + -0x10);
      iVar16 = *(int *)(unaff_BP + -0xe);
      *(uint *)(unaff_BP + -0x52e) = uVar13;
      *(int *)(unaff_BP + -0x52c) = iVar16;
      *(int *)(unaff_BP + -0x494) = uVar13 + 1;
      *(int *)(unaff_BP + -0x492) = iVar16 + (uint)(0xfffe < uVar13);
      while( true ) {
        if ((*(int *)0x14a < *(int *)(unaff_BP + -0x492)) ||
           ((*(int *)0x14a <= *(int *)(unaff_BP + -0x492) &&
            (*(uint *)0x148 < *(uint *)(unaff_BP + -0x494))))) break;
        uStack_1e._2_2_ = 0x7e8;
        iStack_1a = uVar12;
        puVar26 = (undefined2 *)func_0x0000013f();
        puVar19 = (undefined2 *)puVar26;
        puVar18 = (undefined2 *)(unaff_BP + -0x564);
        for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
          puVar5 = puVar18;
          puVar18 = puVar18 + 1;
          puVar4 = puVar19;
          puVar19 = puVar19 + 1;
          *puVar5 = *puVar4;
        }
        uVar12 = 0x11f2;
        iStack_1a = 0x807;
        iVar16 = func_0x000125f1();
        if (iVar16 != 0) {
          puVar2 = (uint *)(unaff_BP + -0x52e);
          uVar13 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x52c) = *(int *)(unaff_BP + -0x52c) + (uint)(0xfffe < uVar13);
          iStack_1a = 0x11f2;
          uVar12 = 0;
          uStack_1e._2_2_ = 0x823;
          uVar25 = func_0x0000013f();
          *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
          puVar18 = (undefined2 *)(unaff_BP + -0x564);
          puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
          puVar19 = (undefined2 *)puVar26;
          for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar19;
            puVar19 = puVar19 + 1;
            puVar4 = puVar18;
            puVar18 = puVar18 + 1;
            *puVar5 = *puVar4;
          }
        }
        puVar2 = (uint *)(unaff_BP + -0x494);
        uVar13 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar13);
      }
      uVar21 = *(undefined2 *)(unaff_BP + -0x52c);
      *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x52e);
      *(undefined2 *)0x14a = uVar21;
      uVar13 = *(uint *)(unaff_BP + -0x474);
      iVar16 = *(int *)(unaff_BP + -0x472);
      *(uint *)(unaff_BP + -0x52e) = uVar13;
      *(int *)(unaff_BP + -0x52c) = iVar16;
      *(int *)(unaff_BP + -0x494) = uVar13 + 1;
      *(int *)(unaff_BP + -0x492) = iVar16 + (uint)(0xfffe < uVar13);
      while( true ) {
        if ((*(int *)0x14e < *(int *)(unaff_BP + -0x492)) ||
           ((*(int *)0x14e <= *(int *)(unaff_BP + -0x492) &&
            (*(uint *)0x14c < *(uint *)(unaff_BP + -0x494))))) break;
        uStack_1e._2_2_ = 0x892;
        iStack_1a = uVar12;
        puVar26 = (undefined2 *)func_0x00000271();
        puVar19 = (undefined2 *)puVar26;
        puVar18 = (undefined2 *)(unaff_BP + -0x54e);
        for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
          puVar5 = puVar18;
          puVar18 = puVar18 + 1;
          puVar4 = puVar19;
          puVar19 = puVar19 + 1;
          *puVar5 = *puVar4;
        }
        uVar12 = 0x11f2;
        iStack_1a = 0x8b1;
        iVar16 = func_0x000125f1();
        if (iVar16 != 0) {
          puVar2 = (uint *)(unaff_BP + -0x52e);
          uVar13 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x52c) = *(int *)(unaff_BP + -0x52c) + (uint)(0xfffe < uVar13);
          iStack_1a = 0x11f2;
          uVar12 = 0;
          uStack_1e._2_2_ = 0x8cd;
          uVar25 = func_0x00000271();
          *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
          puVar18 = (undefined2 *)(unaff_BP + -0x54e);
          puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
          puVar19 = (undefined2 *)puVar26;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar19;
            puVar19 = puVar19 + 1;
            puVar4 = puVar18;
            puVar18 = puVar18 + 1;
            *puVar5 = *puVar4;
          }
        }
        puVar2 = (uint *)(unaff_BP + -0x494);
        uVar13 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar13);
      }
      uVar12 = *(undefined2 *)(unaff_BP + -0x52c);
      *(undefined2 *)0x14c = *(undefined2 *)(unaff_BP + -0x52e);
      *(undefined2 *)0x14e = uVar12;
      iVar16 = *(int *)(unaff_BP + -0x5e);
      *(int *)(unaff_BP + -0x498) = iVar16;
      *(int *)(unaff_BP + -0x4be) = iVar16 + 1;
      while (*(int *)(unaff_BP + -0x4be) <= *(int *)0x152) {
        iStack_1a = 0x90c;
        puVar26 = (undefined2 *)func_0x000003ef();
        puVar19 = (undefined2 *)puVar26;
        puVar18 = (undefined2 *)(unaff_BP + -0x522);
        for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
          puVar5 = puVar18;
          puVar18 = puVar18 + 1;
          puVar4 = puVar19;
          puVar19 = puVar19 + 1;
          *puVar5 = *puVar4;
        }
        iStack_1a = 0x92a;
        iVar16 = func_0x000125f1();
        if (iVar16 != 0) {
          *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
          iStack_1a = 0x93c;
          uVar25 = func_0x000003ef();
          *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
          puVar18 = (undefined2 *)(unaff_BP + -0x522);
          puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
          puVar19 = (undefined2 *)puVar26;
          for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar19;
            puVar19 = puVar19 + 1;
            puVar4 = puVar18;
            puVar18 = puVar18 + 1;
            *puVar5 = *puVar4;
          }
        }
        *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + 1;
      }
      *(undefined2 *)0x152 = *(undefined2 *)(unaff_BP + -0x498);
      *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x150;
      while (*(int *)(unaff_BP + -0x480) < *(int *)(unaff_BP + -0x4be)) {
        iStack_1a = 0x975;
        uVar25 = func_0x00000398();
        *(uint *)(unaff_BP + -0x44a) = (uint)*(byte *)((int)uVar25 + 0x15);
        iStack_1a = 0x98a;
        iVar16 = func_0x000125f1();
        if (iVar16 == 0) {
          iStack_1a = 0x998;
          uVar25 = func_0x00000398();
          *(undefined1 *)((int)uVar25 + 0x14) = 0x5a;
          iStack_1a = 0x9ab;
          func_0x000190c7();
        }
        *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
      }
    }
    else {
      *(undefined2 *)(unaff_BP + -0x498) = 0;
      while (*(int *)(unaff_BP + -0x498) < 0x10) {
        iVar16 = *(int *)(unaff_BP + -0x498);
        *(undefined1 *)(iVar16 + 0xb7c) = 1;
        *(undefined1 *)(iVar16 + 0xb6c) = 1;
        *(char *)(*(int *)(unaff_BP + -0x498) + 0xb8e) = (char)iVar16 << 4;
        *(undefined2 *)(unaff_BP + -0x484) = 0;
        while (*(int *)(unaff_BP + -0x484) < 0x10) {
          iVar16 = *(int *)(unaff_BP + -0x498) * 0x10 + *(int *)(unaff_BP + -0x484);
          *(undefined1 *)(iVar16 + -0x4c78) = 1;
          *(undefined1 *)(iVar16 + -0x3e90) = 1;
          *(int *)(unaff_BP + -0x484) = *(int *)(unaff_BP + -0x484) + 1;
        }
        *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
      }
    }
    func_0x0000c3ca();
    func_0x0000b6ea();
    iStack_1a = 0x9cc;
    func_0x0001470b();
    *(undefined2 *)0xbc0 = 1;
    iStack_1a = 0x11f2;
    uStack_1e._2_2_ = 0x9dd;
    FUN_1000_0599();
    iStack_1a = 0x9e8;
    func_0x00012276();
    iStack_1a = 0x11f2;
    uStack_1e._2_2_ = 0x9f5;
    func_0x00024c86();
    *(undefined1 *)(*(int *)(unaff_BP + 6) + 2) = 0;
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0xa0b;
    FUN_1000_0599();
    uVar12 = 0x11f2;
    iStack_1a = 0xa15;
    func_0x00012276();
    *(undefined2 *)(unaff_BP + -0x26a) = 0;
    *(undefined2 *)(unaff_BP + -0x26c) = 0;
    *(undefined2 *)(unaff_BP + -0x4b6) = 0;
    *(undefined2 *)(unaff_BP + -0x4b8) = 0;
    *(undefined2 *)(unaff_BP + -0x43a) = 0;
    *(undefined2 *)(unaff_BP + -0x4cc) = 0;
    uVar13 = *(uint *)(unaff_BP + -0x480);
    uVar6 = *(uint *)(unaff_BP + -0x5e);
    uVar7 = *(uint *)(unaff_BP + -0x474);
    uVar15 = uVar13 + uVar6 + *(uint *)(unaff_BP + -0x474);
    iVar16 = *(int *)(unaff_BP + -0x472);
    uVar8 = *(uint *)(unaff_BP + -0x10);
    iVar17 = *(int *)(unaff_BP + -0xe);
    *(int *)(unaff_BP + -0x448) = uVar15 + *(uint *)(unaff_BP + -0x10);
    *(int *)(unaff_BP + -0x446) =
         ((int)uVar13 >> 0xf) + ((int)uVar6 >> 0xf) + (uint)CARRY2(uVar13,uVar6) + iVar16 +
         (uint)CARRY2(uVar13 + uVar6,uVar7) + iVar17 + (uint)CARRY2(uVar15,uVar8);
    *(undefined2 *)(unaff_BP + -0x47e) = 1;
    *(undefined2 *)(unaff_BP + -0x47c) = 0;
    while( true ) {
      if ((*(int *)0x14a < *(int *)(unaff_BP + -0x47c)) ||
         ((*(int *)0x14a <= *(int *)(unaff_BP + -0x47c) &&
          (*(uint *)0x148 < *(uint *)(unaff_BP + -0x47e))))) break;
      uStack_1e._2_2_ = 0xa8c;
      iStack_1a = uVar12;
      uVar25 = func_0x0000013f();
      pbVar3 = (byte *)((int)uVar25 + 0x14);
      *pbVar3 = *pbVar3 & 0xfd;
      iStack_1a = 0;
      uVar12 = 0;
      uStack_1e._2_2_ = 0xaa4;
      uVar25 = func_0x0000013f();
      pbVar3 = (byte *)((int)uVar25 + 0x14);
      *pbVar3 = *pbVar3 & 0xfb;
      puVar2 = (uint *)(unaff_BP + -0x47e);
      uVar13 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar13);
    }
    iVar16 = *(uint *)(unaff_BP + -0x10) + 1;
    iVar17 = *(int *)(unaff_BP + -0xe) + (uint)(0xfffe < *(uint *)(unaff_BP + -0x10));
    *(int *)(unaff_BP + -0x5c) = iVar16;
    *(int *)(unaff_BP + -0x5a) = iVar17;
    *(int *)(unaff_BP + -0x4e0) = iVar16;
    *(int *)(unaff_BP + -0x4de) = iVar17;
    *(undefined2 *)(unaff_BP + -0x47e) = 1;
    *(undefined2 *)(unaff_BP + -0x47c) = 0;
LAB_3ab8_6304:
    iStack_1a = uVar12;
    if ((*(int *)(unaff_BP + -0x47c) <= *(int *)(unaff_BP + -0xe)) &&
       ((*(int *)(unaff_BP + -0x47c) < *(int *)(unaff_BP + -0xe) ||
        (*(uint *)(unaff_BP + -0x47e) <= *(uint *)(unaff_BP + -0x10))))) {
      uStack_1e._2_2_ = 0xe9f;
      puVar26 = (undefined2 *)func_0x0000013f();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x564);
      for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      uVar12 = 0;
      if (*(char *)(unaff_BP + -0x60) != '\0') {
LAB_3ab8_6349:
        *(undefined2 *)(unaff_BP + -0x52e) = 0;
        uVar21 = *(undefined2 *)(unaff_BP + -0x5a);
        *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)(unaff_BP + -0x5c);
        *(undefined2 *)(unaff_BP + -0x492) = uVar21;
        while( true ) {
          if ((*(int *)0x14a < *(int *)(unaff_BP + -0x492)) ||
             ((*(int *)0x14a <= *(int *)(unaff_BP + -0x492) &&
              (*(uint *)0x148 < *(uint *)(unaff_BP + -0x494))))) break;
          uVar21 = 0;
          uStack_1e._2_2_ = 0xb07;
          iStack_1a = uVar12;
          puVar26 = (undefined2 *)func_0x0000013f();
          puVar19 = (undefined2 *)puVar26;
          puVar18 = (undefined2 *)(unaff_BP + -0x54e);
          for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar18;
            puVar18 = puVar18 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if ((((*(byte *)(unaff_BP + -0x53a) & 2) == 0) &&
              (*(char *)(unaff_BP + -0x53c) == *(char *)(unaff_BP + -0x552))) &&
             (*(char *)(unaff_BP + -0x53d) == *(char *)(unaff_BP + -0x553))) {
            uVar22 = *(byte *)(unaff_BP + -0x53e) < *(byte *)(unaff_BP + -0x554);
            uVar23 = *(byte *)(unaff_BP + -0x53e) == *(byte *)(unaff_BP + -0x554);
            if ((bool)uVar23) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              uVar21 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar22 || (bool)uVar23) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                uVar21 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar22 || (bool)uVar23) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar21 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar22 || (bool)uVar23) {
                    func_0x00029834();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    func_0x00029d78();
                    uVar21 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar22 || (bool)uVar23) goto LAB_3ab8_61bb;
                  }
                }
              }
            }
          }
          puVar2 = (uint *)(unaff_BP + -0x494);
          uVar13 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar13);
          uVar12 = uVar21;
        }
        uVar21 = *(undefined2 *)(unaff_BP + -0x4de);
        *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)(unaff_BP + -0x4e0);
        *(undefined2 *)(unaff_BP + -0x492) = uVar21;
        while( true ) {
          if ((*(int *)(unaff_BP + -0x5a) < *(int *)(unaff_BP + -0x492)) ||
             ((*(int *)(unaff_BP + -0x5a) <= *(int *)(unaff_BP + -0x492) &&
              (*(uint *)(unaff_BP + -0x5c) <= *(uint *)(unaff_BP + -0x494))))) break;
          uVar21 = 0;
          uStack_1e._2_2_ = 0xc41;
          iStack_1a = uVar12;
          puVar26 = (undefined2 *)func_0x0000013f();
          puVar19 = (undefined2 *)puVar26;
          puVar18 = (undefined2 *)(unaff_BP + -0x54e);
          for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar18;
            puVar18 = puVar18 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if ((((*(byte *)(unaff_BP + -0x53a) & 2) == 0) &&
              (*(char *)(unaff_BP + -0x53c) == *(char *)(unaff_BP + -0x552))) &&
             (*(char *)(unaff_BP + -0x53d) == *(char *)(unaff_BP + -0x553))) {
            uVar22 = *(byte *)(unaff_BP + -0x53e) < *(byte *)(unaff_BP + -0x554);
            uVar23 = *(byte *)(unaff_BP + -0x53e) == *(byte *)(unaff_BP + -0x554);
            if ((bool)uVar23) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              uVar21 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar22 || (bool)uVar23) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                uVar21 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar22 || (bool)uVar23) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar21 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar22 || (bool)uVar23) {
                    func_0x00029834();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    func_0x00029d78();
                    uVar21 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar22 || (bool)uVar23) goto LAB_3ab8_61bb;
                  }
                }
              }
            }
          }
          puVar2 = (uint *)(unaff_BP + -0x494);
          uVar13 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar13);
          uVar12 = uVar21;
        }
        goto LAB_3ab8_624f;
      }
      uVar12 = 0x11f2;
      iStack_1a = 0xec4;
      iVar16 = func_0x000125f1();
      if (iVar16 != 0) goto LAB_3ab8_6349;
      goto LAB_3ab8_62fa;
    }
    uStack_1e._2_2_ = 0xeed;
    FUN_1000_0599();
    uVar6 = *(uint *)(unaff_BP + -0x10);
    iVar16 = *(int *)(unaff_BP + -0xe);
    puVar2 = (uint *)(unaff_BP + -0x448);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 - uVar6;
    *(int *)(unaff_BP + -0x446) = (*(int *)(unaff_BP + -0x446) - iVar16) - (uint)(uVar13 < uVar6);
    iStack_1a = 0x1fe;
    uStack_1e._2_2_ = 0xdef;
    uStack_1e._0_2_ = 0xf0e;
    func_0x00012276();
    if ((*(uint *)(unaff_BP + -0x10) - *(uint *)(unaff_BP + -0x4e0) != -1) ||
       ((*(int *)(unaff_BP + -0xe) - *(int *)(unaff_BP + -0x4de)) -
        (uint)(*(uint *)(unaff_BP + -0x10) < *(uint *)(unaff_BP + -0x4e0)) != -1)) {
      uVar12 = *(undefined2 *)(unaff_BP + -0xe);
      *(undefined2 *)(unaff_BP + -0x564) = *(undefined2 *)(unaff_BP + -0x10);
      *(undefined2 *)(unaff_BP + -0x562) = uVar12;
      iStack_1a = 0x11f2;
      uStack_1e._2_2_ = 0xf46;
      FUN_1000_0599();
      uVar12 = 0x11f2;
      iStack_1a = 0xf51;
      func_0x00012276();
      uVar13 = *(uint *)(unaff_BP + -0x10);
      iVar16 = *(int *)(unaff_BP + -0xe);
      *(int *)(unaff_BP + -0x494) = uVar13 + 1;
      *(int *)(unaff_BP + -0x492) = iVar16 + (uint)(0xfffe < uVar13);
      while( true ) {
        iStack_1a = uVar12;
        if ((*(int *)0x14a < *(int *)(unaff_BP + -0x492)) ||
           ((*(int *)0x14a <= *(int *)(unaff_BP + -0x492) &&
            (*(uint *)0x148 < *(uint *)(unaff_BP + -0x494))))) break;
        uStack_1e._2_2_ = 0xf8f;
        uVar25 = func_0x0000013f();
        if ((*(byte *)((int)uVar25 + 0x14) & 2) == 0) {
          iStack_1a = 0;
          uStack_1e._2_2_ = 0xfa9;
          puVar26 = (undefined2 *)func_0x0000013f();
          puVar19 = (undefined2 *)puVar26;
          puVar18 = (undefined2 *)(unaff_BP + -0x54e);
          for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar18;
            puVar18 = puVar18 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          puVar2 = (uint *)(unaff_BP + -0x564);
          uVar13 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x562) = *(int *)(unaff_BP + -0x562) + (uint)(0xfffe < uVar13);
          iStack_1a = 0;
          uStack_1e._2_2_ = 0xfd3;
          uVar25 = func_0x0000013f();
          *(undefined2 *)(unaff_BP + -0x52e) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x52c) = (int)((ulong)uVar25 >> 0x10);
          puVar18 = (undefined2 *)(unaff_BP + -0x54e);
          puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52e);
          puVar19 = (undefined2 *)puVar26;
          for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar19;
            puVar19 = puVar19 + 1;
            puVar4 = puVar18;
            puVar18 = puVar18 + 1;
            *puVar5 = *puVar4;
          }
        }
        uVar12 = 0;
        puVar2 = (uint *)(unaff_BP + -0x494);
        uVar13 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) + (uint)(0xfffe < uVar13);
      }
      uVar12 = *(undefined2 *)(unaff_BP + -0x562);
      *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x564);
      *(undefined2 *)0x14a = uVar12;
      uStack_1e._2_2_ = 0x1009;
      FUN_1000_0599();
      iStack_1a = 0x1014;
      func_0x00012276();
    }
    uVar12 = *(undefined2 *)0x14a;
    *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)0x148;
    *(undefined2 *)(unaff_BP + -0x492) = uVar12;
    iStack_1a = 0x11f2;
    while( true ) {
      iVar16 = *(int *)(unaff_BP + -0xe) + (uint)(0xfffe < *(uint *)(unaff_BP + -0x10));
      if ((*(int *)(unaff_BP + -0x492) < iVar16) ||
         ((*(int *)(unaff_BP + -0x492) <= iVar16 &&
          (*(uint *)(unaff_BP + -0x494) < *(uint *)(unaff_BP + -0x10) + 1)))) break;
      uStack_1e._2_2_ = 0x1057;
      uVar25 = func_0x0000013f();
      pbVar3 = (byte *)((int)uVar25 + 0x14);
      *pbVar3 = *pbVar3 | 2;
      piVar1 = (int *)(unaff_BP + -0x494);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) - (uint)(iVar16 == 0);
      iStack_1a = 0;
    }
    uStack_1e._2_2_ = 0x1071;
    FUN_1000_0599();
    iStack_1a = 0x107c;
    func_0x00012276();
    iStack_1a = 0x11f2;
    uStack_1e._2_2_ = 0x1089;
    func_0x00024c86();
    *(undefined1 *)(*(int *)(unaff_BP + 6) + 4) = 0;
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x109f;
    FUN_1000_0599();
    uVar12 = 0x11f2;
    iStack_1a = 0x10a9;
    func_0x00012276();
    uVar6 = *(uint *)(unaff_BP + -0x474);
    iVar16 = *(int *)(unaff_BP + -0x472);
    puVar2 = (uint *)(unaff_BP + -0x448);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 - uVar6;
    *(int *)(unaff_BP + -0x446) = (*(int *)(unaff_BP + -0x446) - iVar16) - (uint)(uVar13 < uVar6);
    *(undefined2 *)(unaff_BP + -0x47e) = 1;
    *(undefined2 *)(unaff_BP + -0x47c) = 0;
    while( true ) {
      if ((*(int *)0x14e < *(int *)(unaff_BP + -0x47c)) ||
         ((*(int *)0x14e <= *(int *)(unaff_BP + -0x47c) &&
          (*(uint *)0x14c < *(uint *)(unaff_BP + -0x47e))))) break;
      uStack_1e._2_2_ = 0x10ef;
      iStack_1a = uVar12;
      uVar25 = func_0x00000271();
      pbVar3 = (byte *)((int)uVar25 + 0x1e);
      *pbVar3 = *pbVar3 & 0xfd;
      iStack_1a = 0;
      uVar12 = 0;
      uStack_1e._2_2_ = 0x1107;
      uVar25 = func_0x00000271();
      pbVar3 = (byte *)((int)uVar25 + 0x1e);
      *pbVar3 = *pbVar3 & 0xfb;
      puVar2 = (uint *)(unaff_BP + -0x47e);
      uVar13 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar13);
    }
    uVar21 = *(undefined2 *)(unaff_BP + -0x472);
    *(undefined2 *)(unaff_BP + -0x47e) = *(undefined2 *)(unaff_BP + -0x474);
    *(undefined2 *)(unaff_BP + -0x47c) = uVar21;
    while ((iStack_1a = uVar12, -1 < *(int *)(unaff_BP + -0x47c) &&
           ((0 < *(int *)(unaff_BP + -0x47c) || (*(int *)(unaff_BP + -0x47e) != 0))))) {
      uStack_1e._2_2_ = 0x13df;
      puVar26 = (undefined2 *)func_0x00000271();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x54e);
      for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      iStack_1a = 0;
      uVar12 = 0;
      uStack_1e._2_2_ = 0x13ff;
      puVar26 = (undefined2 *)func_0x00000271();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x584);
      for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      if (*(char *)(unaff_BP + -0x60) != '\0') {
LAB_3ab8_68a9:
        *(undefined2 *)(unaff_BP + -0x564) = 0;
        *(undefined2 *)(unaff_BP + -0x52e) = 0;
        if (((*(int *)(unaff_BP + -0x542) + 0xd8f0U < 6) &&
            (*(int *)(unaff_BP + -0x540) == *(int *)(unaff_BP + -0x53c))) &&
           (*(int *)(unaff_BP + -0x53e) == *(int *)(unaff_BP + -0x53a))) {
          *(undefined2 *)(unaff_BP + -0x52e) = 1;
        }
        uVar21 = *(undefined2 *)0x14e;
        *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)0x14c;
        *(undefined2 *)(unaff_BP + -0x492) = uVar21;
LAB_3ab8_65d6:
        iVar16 = *(int *)(unaff_BP + -0x472) + (uint)(0xfffe < *(uint *)(unaff_BP + -0x474));
        if ((iVar16 <= *(int *)(unaff_BP + -0x492)) &&
           ((iVar16 < *(int *)(unaff_BP + -0x492) ||
            (*(uint *)(unaff_BP + -0x474) + 1 <= *(uint *)(unaff_BP + -0x494))))) {
          uVar21 = 0;
          uStack_1e._2_2_ = 0x1185;
          iStack_1a = uVar12;
          puVar26 = (undefined2 *)func_0x00000271();
          puVar19 = (undefined2 *)puVar26;
          puVar18 = (undefined2 *)(unaff_BP + -0x522);
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar18;
            puVar18 = puVar18 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if ((*(char *)(unaff_BP + -0x506) != *(char *)(unaff_BP + -0x532)) ||
             (*(char *)(unaff_BP + -0x507) != *(char *)(unaff_BP + -0x533))) goto LAB_3ab8_65cc;
          uVar22 = *(byte *)(unaff_BP + -0x508) < *(byte *)(unaff_BP + -0x534);
          uVar23 = *(byte *)(unaff_BP + -0x508) == *(byte *)(unaff_BP + -0x534);
          if (!(bool)uVar23) goto LAB_3ab8_65cc;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          uVar21 = 0x22b2;
          if (!(bool)uVar22 && !(bool)uVar23) goto LAB_3ab8_65cc;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          FUN_28b3_1181();
          uVar21 = 0x22b2;
          if (!(bool)uVar22 && !(bool)uVar23) goto LAB_3ab8_65cc;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          uVar12 = 0x22b2;
          FUN_28b3_1181();
          uVar21 = uVar12;
          if ((!(bool)uVar22 && !(bool)uVar23) ||
             (5 < (uint)(*(int *)(unaff_BP + -0x542) - *(int *)(unaff_BP + -0x516))))
          goto LAB_3ab8_65cc;
          if (*(int *)(unaff_BP + -0x52e) == 0) {
            uVar13 = *(uint *)(unaff_BP + -0x538) - *(uint *)(unaff_BP + -0x50c);
            iVar16 = (*(int *)(unaff_BP + -0x536) - *(int *)(unaff_BP + -0x50a)) -
                     (uint)(*(uint *)(unaff_BP + -0x538) < *(uint *)(unaff_BP + -0x50c));
            if (iVar16 < 0) {
              bVar24 = uVar13 != 0;
              uVar13 = -uVar13;
              iVar16 = -(iVar16 + (uint)bVar24);
            }
            if ((iVar16 == 0) && (uVar13 < 6)) {
              uVar13 = *(uint *)(unaff_BP + -0x540) - *(uint *)(unaff_BP + -0x514);
              iVar16 = (*(int *)(unaff_BP + -0x53e) - *(int *)(unaff_BP + -0x512)) -
                       (uint)(*(uint *)(unaff_BP + -0x540) < *(uint *)(unaff_BP + -0x514));
              if (iVar16 < 0) {
                bVar24 = uVar13 != 0;
                uVar13 = -uVar13;
                iVar16 = -(iVar16 + (uint)bVar24);
              }
              if ((iVar16 == 0) && (uVar13 < 6)) {
                uVar13 = *(uint *)(unaff_BP + -0x53c) - *(uint *)(unaff_BP + -0x510);
                iVar16 = (*(int *)(unaff_BP + -0x53a) - *(int *)(unaff_BP + -0x50e)) -
                         (uint)(*(uint *)(unaff_BP + -0x53c) < *(uint *)(unaff_BP + -0x510));
                if (iVar16 < 0) {
                  bVar24 = uVar13 != 0;
                  uVar13 = -uVar13;
                  iVar16 = -(iVar16 + (uint)bVar24);
                }
                if ((iVar16 == 0) && (uVar13 < 6)) goto LAB_3ab8_6746;
              }
            }
            goto LAB_3ab8_65cc;
          }
          if ((*(int *)(unaff_BP + -0x514) != *(int *)(unaff_BP + -0x510)) ||
             (*(int *)(unaff_BP + -0x512) != *(int *)(unaff_BP + -0x50e))) goto LAB_3ab8_65cc;
LAB_3ab8_6746:
          if ((*(int *)(unaff_BP + -0x492) <= *(int *)0x14e) &&
             ((*(int *)(unaff_BP + -0x492) < *(int *)0x14e ||
              (*(uint *)(unaff_BP + -0x494) < *(uint *)0x14c)))) {
            iStack_1a = 0x22b2;
            uVar12 = 0;
            uStack_1e._2_2_ = 0x12e3;
            uVar25 = func_0x00000271();
            *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
            *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
            puVar18 = (undefined2 *)(unaff_BP + -0x584);
            puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
            puVar19 = (undefined2 *)puVar26;
            for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
              puVar5 = puVar19;
              puVar19 = puVar19 + 1;
              puVar4 = puVar18;
              puVar18 = puVar18 + 1;
              *puVar5 = *puVar4;
            }
          }
          piVar1 = (int *)0x14c;
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          *(int *)0x14e = *(int *)0x14e - (uint)(iVar16 == 0);
          *(undefined2 *)(unaff_BP + -0x564) = 1;
        }
        if (*(int *)(unaff_BP + -0x564) == 0) {
          *(undefined1 *)(unaff_BP + -0x533) = 7;
          piVar20 = &iStack_34;
          puVar18 = (undefined2 *)(unaff_BP + -0x54e);
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar4 = piVar20;
            piVar20 = piVar20 + 1;
            puVar26 = puVar18;
            puVar18 = puVar18 + 1;
            *puVar4 = *puVar26;
          }
          FUN_12c1_0f1d(uVar12);
          iStack_1a = *(undefined2 *)(unaff_BP + -0x47e);
          uStack_1e._2_2_ = 0x11f2;
          uStack_1e._0_2_ = 0x133b;
          uVar25 = func_0x00000271();
          pbVar3 = (byte *)((int)uVar25 + 0x1e);
          *pbVar3 = *pbVar3 | 2;
          iStack_1a = *(undefined2 *)(unaff_BP + -0x47e);
          uStack_1e._2_2_ = 0;
          uVar12 = 0;
          uStack_1e._0_2_ = 0x1353;
          uVar25 = func_0x00000271();
          pbVar3 = (byte *)((int)uVar25 + 0x1e);
          *pbVar3 = *pbVar3 | 4;
          puVar2 = (uint *)(unaff_BP + -0x26c);
          uVar13 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x26a) = *(int *)(unaff_BP + -0x26a) + (uint)(0xfffe < uVar13);
        }
        if (((*(byte *)(unaff_BP + -0x47e) & 0xf) == 0xf) || (*(int *)(unaff_BP + -0x564) == 0)) {
          cVar11 = FUN_12c1_009c();
          if (cVar11 == '\x1b') goto LAB_3ab8_7020;
          iStack_1a = 0x11f2;
          uStack_1e._2_2_ = 0x1392;
          FUN_1000_0599();
          iStack_1a = 0x1fe;
          uStack_1e._2_2_ = 0xdef;
          uVar12 = 0x11f2;
          uStack_1e._0_2_ = 0x13af;
          func_0x00012276();
        }
        goto LAB_3ab8_6832;
      }
      uVar12 = 0x11f2;
      iStack_1a = 0x1424;
      iVar16 = func_0x000125f1();
      if (iVar16 != 0) goto LAB_3ab8_68a9;
LAB_3ab8_6832:
      piVar1 = (int *)(unaff_BP + -0x47e);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) - (uint)(iVar16 == 0);
    }
    uVar12 = *(undefined2 *)0x14e;
    *(undefined2 *)(unaff_BP + -0x494) = *(undefined2 *)0x14c;
    *(undefined2 *)(unaff_BP + -0x492) = uVar12;
    while( true ) {
      iVar16 = *(int *)(unaff_BP + -0x472) + (uint)(0xfffe < *(uint *)(unaff_BP + -0x474));
      if ((*(int *)(unaff_BP + -0x492) < iVar16) ||
         ((*(int *)(unaff_BP + -0x492) <= iVar16 &&
          (*(uint *)(unaff_BP + -0x494) < *(uint *)(unaff_BP + -0x474) + 1)))) break;
      uStack_1e._2_2_ = 0x14b5;
      uVar25 = func_0x00000271();
      pbVar3 = (byte *)((int)uVar25 + 0x1e);
      *pbVar3 = *pbVar3 | 2;
      piVar1 = (int *)(unaff_BP + -0x494);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) - (uint)(iVar16 == 0);
      iStack_1a = 0;
    }
    uStack_1e._2_2_ = 0x14cf;
    FUN_1000_0599();
    iStack_1a = 0x14da;
    func_0x00012276();
    iStack_1a = 0x11f2;
    uStack_1e._2_2_ = 0x14e8;
    FUN_1000_0599();
    uVar12 = 0x11f2;
    iStack_1a = 0x14f3;
    func_0x00012276();
    uVar6 = *(uint *)(unaff_BP + -0x5e);
    puVar2 = (uint *)(unaff_BP + -0x448);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 - uVar6;
    *(int *)(unaff_BP + -0x446) =
         (*(int *)(unaff_BP + -0x446) - ((int)uVar6 >> 0xf)) - (uint)(uVar13 < uVar6);
    *(undefined2 *)(unaff_BP + -0x498) = 1;
    while (*(int *)(unaff_BP + -0x498) <= *(int *)0x152) {
      iStack_1a = 0x1511;
      uVar25 = func_0x000003ef();
      pbVar3 = (byte *)((int)uVar25 + 10);
      *pbVar3 = *pbVar3 & 0xfd;
      uVar12 = 0;
      iStack_1a = 0x1524;
      uVar25 = func_0x000003ef();
      pbVar3 = (byte *)((int)uVar25 + 10);
      *pbVar3 = *pbVar3 & 0xfb;
      *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
    }
    *(undefined2 *)(unaff_BP + -0x498) = *(undefined2 *)(unaff_BP + -0x5e);
    while (0 < *(int *)(unaff_BP + -0x498)) {
      iStack_1a = 0x16b5;
      puVar26 = (undefined2 *)func_0x000003ef();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x584);
      for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      uVar12 = 0;
      iStack_1a = 0x16d0;
      puVar26 = (undefined2 *)func_0x000003ef();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x522);
      for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      if (*(char *)(unaff_BP + -0x60) != '\0') {
LAB_3ab8_6b79:
        *(undefined2 *)(unaff_BP + -0x54e) = 0;
        *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x152;
LAB_3ab8_69c9:
        if (*(int *)(unaff_BP + -0x5e) + 1 <= *(int *)(unaff_BP + -0x4be)) {
          uVar12 = 0;
          iStack_1a = 0x155f;
          puVar26 = (undefined2 *)func_0x000003ef();
          puVar19 = (undefined2 *)puVar26;
          puVar18 = (undefined2 *)(unaff_BP + -0x564);
          for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar18;
            puVar18 = puVar18 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if (*(char *)(unaff_BP + -0x55c) != *(char *)(unaff_BP + -0x57c)) goto LAB_3ab8_69c5;
          uVar22 = *(byte *)(unaff_BP + -0x55b) < *(byte *)(unaff_BP + -0x57b);
          uVar23 = *(byte *)(unaff_BP + -0x55b) == *(byte *)(unaff_BP + -0x57b);
          if (!(bool)uVar23) goto LAB_3ab8_69c5;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          uVar12 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar22 && !(bool)uVar23) goto LAB_3ab8_69c5;
          func_0x00029834();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          func_0x00029d78();
          uVar12 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar22 && !(bool)uVar23) goto LAB_3ab8_69c5;
          if (*(int *)(unaff_BP + -0x4be) < *(int *)0x152) {
            uVar12 = 0;
            iStack_1a = 0x15f2;
            uVar25 = func_0x000003ef();
            *(undefined2 *)(unaff_BP + -0x52e) = (int)uVar25;
            *(undefined2 *)(unaff_BP + -0x52c) = (int)((ulong)uVar25 >> 0x10);
            puVar18 = (undefined2 *)(unaff_BP + -0x522);
            puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52e);
            puVar19 = (undefined2 *)puVar26;
            for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
              puVar5 = puVar19;
              puVar19 = puVar19 + 1;
              puVar4 = puVar18;
              puVar18 = puVar18 + 1;
              *puVar5 = *puVar4;
            }
          }
          *(int *)0x152 = *(int *)0x152 + -1;
          *(undefined2 *)(unaff_BP + -0x54e) = 1;
        }
        if (*(int *)(unaff_BP + -0x54e) == 0) {
          uStack_1e._2_2_ = 0x1626;
          iStack_1a = uVar12;
          func_0x00007f92();
          iStack_1a = 0x1631;
          uVar25 = func_0x000003ef();
          pbVar3 = (byte *)((int)uVar25 + 10);
          *pbVar3 = *pbVar3 | 2;
          uVar12 = 0;
          iStack_1a = 0x1644;
          uVar25 = func_0x000003ef();
          pbVar3 = (byte *)((int)uVar25 + 10);
          *pbVar3 = *pbVar3 | 4;
          *(int *)(unaff_BP + -0x4cc) = *(int *)(unaff_BP + -0x4cc) + 1;
        }
        if (((*(byte *)(unaff_BP + -0x498) & 0xf) == 0xf) || (*(int *)(unaff_BP + -0x54e) == 0)) {
          cVar11 = FUN_12c1_009c();
          if (cVar11 == '\x1b') goto LAB_3ab8_7020;
          iStack_1a = 0x11f2;
          uStack_1e._2_2_ = 0x167c;
          FUN_1000_0599();
          iVar16 = *(int *)(unaff_BP + -0x498);
          *(int *)(unaff_BP + -0x47e) = iVar16;
          *(int *)(unaff_BP + -0x47c) = iVar16 >> 0xf;
          iStack_1a = 0x1fe;
          uStack_1e._2_2_ = 0xdef;
          uVar12 = 0x11f2;
          uStack_1e._0_2_ = 0x169e;
          func_0x00012276();
        }
        goto LAB_3ab8_6b21;
      }
      uVar12 = 0x11f2;
      iStack_1a = 0x16f4;
      iVar16 = func_0x000125f1();
      if (iVar16 != 0) goto LAB_3ab8_6b79;
LAB_3ab8_6b21:
      *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + -1;
    }
    *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x152;
    while (*(int *)(unaff_BP + -0x5e) + 1 <= *(int *)(unaff_BP + -0x4be)) {
      uVar12 = 0;
      iStack_1a = 0x171b;
      uVar25 = func_0x000003ef();
      pbVar3 = (byte *)((int)uVar25 + 10);
      *pbVar3 = *pbVar3 | 2;
      *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
    }
    uStack_1e._2_2_ = 0x1740;
    iStack_1a = uVar12;
    FUN_1000_0599();
    iStack_1a = 0x174b;
    func_0x00012276();
    iStack_1a = 0x11f2;
    uStack_1e._2_2_ = 0x1758;
    func_0x00024c86();
    *(undefined1 *)(*(int *)(unaff_BP + 6) + 4) = 0;
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x176e;
    FUN_1000_0599();
    uVar12 = 0x11f2;
    iStack_1a = 0x1778;
    func_0x00012276();
    *(undefined2 *)(unaff_BP + -0x498) = 1;
    while (*(int *)(unaff_BP + -0x498) <= *(int *)0x150) {
      iStack_1a = 0x178a;
      uVar25 = func_0x00000398();
      pbVar3 = (byte *)((int)uVar25 + 0x16);
      *pbVar3 = *pbVar3 & 0xfd;
      uVar12 = 0;
      iStack_1a = 0x179d;
      uVar25 = func_0x00000398();
      pbVar3 = (byte *)((int)uVar25 + 0x16);
      *pbVar3 = *pbVar3 & 0xfb;
      *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
    }
    *(undefined2 *)(unaff_BP + -0x498) = *(undefined2 *)(unaff_BP + -0x480);
    while (0 < *(int *)(unaff_BP + -0x498)) {
      uVar12 = 0;
      iStack_1a = 0x19c2;
      puVar26 = (undefined2 *)func_0x00000398();
      puVar19 = (undefined2 *)puVar26;
      puVar18 = (undefined2 *)(unaff_BP + -0x54e);
      for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar5 = *puVar4;
      }
      if (*(char *)(unaff_BP + -0x60) == '\0') {
        uVar12 = 0x11f2;
        iStack_1a = 0x19e6;
        iVar16 = func_0x000125f1();
        if (iVar16 != 0) goto LAB_3ab8_6e6b;
      }
      else {
LAB_3ab8_6e6b:
        *(undefined2 *)(unaff_BP + -0x584) = 0;
        iStack_1a = unaff_BP + -0x6b0;
        uStack_1e._0_2_ = 0x1a03;
        uStack_1e._2_2_ = uVar12;
        FUN_1885_0344();
        uVar12 = 0x22b2;
        iStack_1a = 0x1a10;
        uVar21 = func_0x00024ce4();
        *(undefined2 *)(unaff_BP + -0x564) = uVar21;
        *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x150;
        while (*(int *)(unaff_BP + -0x480) + 1 <= *(int *)(unaff_BP + -0x4be)) {
          uVar12 = 0;
          iStack_1a = 0x1808;
          puVar26 = (undefined2 *)func_0x00000398();
          puVar19 = (undefined2 *)puVar26;
          puVar18 = (undefined2 *)(unaff_BP + -0x522);
          for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar18;
            puVar18 = puVar18 + 1;
            puVar4 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar5 = *puVar4;
          }
          if (*(char *)(unaff_BP + -0x50d) == *(char *)(unaff_BP + -0x539)) {
            uVar22 = *(byte *)(unaff_BP + -0x50e) < *(byte *)(unaff_BP + -0x53a);
            uVar23 = *(byte *)(unaff_BP + -0x50e) == *(byte *)(unaff_BP + -0x53a);
            if ((bool)uVar23) {
              func_0x00029834();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029ae7();
              func_0x00029d78();
              uVar12 = 0x22b2;
              FUN_28b3_1181();
              if ((bool)uVar22 || (bool)uVar23) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                uVar12 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar22 || (bool)uVar23) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar12 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar22 || (bool)uVar23) {
                    func_0x00029834();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029ae7();
                    func_0x00029d78();
                    uVar12 = 0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar22 || (bool)uVar23) {
                      iStack_1a = 0xbf48;
                      uStack_1e._2_2_ = 0x22b2;
                      uVar12 = 0x18b3;
                      uStack_1e._0_2_ = 0x18f8;
                      FUN_1885_0344();
                      *(undefined2 *)(unaff_BP + -0x584) = 1;
                      *(undefined2 *)(unaff_BP + -0x484) = 0;
                      while (*(int *)(unaff_BP + -0x484) <= *(int *)(unaff_BP + -0x564)) {
                        if (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x484) + -0x6b0) !=
                            *(char *)(*(int *)(unaff_BP + -0x484) + -0x40b8)) {
                          *(undefined2 *)(unaff_BP + -0x584) = 0;
                          break;
                        }
                        *(int *)(unaff_BP + -0x484) = *(int *)(unaff_BP + -0x484) + 1;
                      }
                      if (*(int *)(unaff_BP + -0x584) != 0) {
                        iStack_1a = 0x1913;
                        uVar25 = func_0x00000398();
                        *(undefined1 *)((int)uVar25 + 0x14) = 0x5a;
                        uVar12 = 0x18b3;
                        iStack_1a = 0x1926;
                        func_0x000190c7();
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
          *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
        }
        if (*(int *)(unaff_BP + -0x584) == 0) {
          uStack_1e._2_2_ = 0x193b;
          iStack_1a = uVar12;
          func_0x00008009();
          iStack_1a = 0x1946;
          uVar25 = func_0x00000398();
          pbVar3 = (byte *)((int)uVar25 + 0x16);
          *pbVar3 = *pbVar3 | 2;
          uVar12 = 0;
          iStack_1a = 0x1959;
          uVar25 = func_0x00000398();
          pbVar3 = (byte *)((int)uVar25 + 0x16);
          *pbVar3 = *pbVar3 | 4;
          *(int *)(unaff_BP + -0x43a) = *(int *)(unaff_BP + -0x43a) + 1;
        }
        if (((*(byte *)(unaff_BP + -0x498) & 0xf) == 0xf) || (*(int *)(unaff_BP + -0x584) == 0)) {
          cVar11 = FUN_12c1_009c();
          if (cVar11 == '\x1b') goto LAB_3ab8_7020;
          iStack_1a = 0x11f2;
          uStack_1e._2_2_ = 0x1991;
          FUN_1000_0599();
          iVar16 = *(int *)(unaff_BP + -0x498);
          *(int *)(unaff_BP + -0x47e) = iVar16;
          *(int *)(unaff_BP + -0x47c) = iVar16 >> 0xf;
          iStack_1a = 0x1fe;
          uStack_1e._2_2_ = 0xdef;
          uVar12 = 0x11f2;
          uStack_1e._0_2_ = 0x19ab;
          func_0x00012276();
        }
      }
      *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + -1;
    }
    *(undefined2 *)(unaff_BP + -0x4be) = *(undefined2 *)0x150;
    while (*(int *)(unaff_BP + -0x480) + 1 <= *(int *)(unaff_BP + -0x4be)) {
      uVar12 = 0;
      iStack_1a = 0x1a31;
      uVar25 = func_0x00000398();
      pbVar3 = (byte *)((int)uVar25 + 0x16);
      *pbVar3 = *pbVar3 | 2;
      *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
    }
    uStack_1e._2_2_ = 0x1a57;
    iStack_1a = uVar12;
    FUN_1000_0599();
    iStack_1a = 0x1a62;
    func_0x00012276();
    func_0x0000abfa();
    iStack_1a = 0x1a70;
    func_0x0000b1d8();
    func_0x0000b6ea();
    iStack_1a = 0x1a7e;
    func_0x0001470b();
    *(undefined1 *)0x121 = 1;
    *(undefined2 *)0xbc0 = 1;
    uVar12 = 0x7a6;
    iStack_1a = 0x1a90;
    func_0x00008095();
  }
  *(undefined2 *)0xbc0 = 1;
LAB_3ab8_6f17:
  while (iStack_1a = uVar12, *(int *)(unaff_BP + -0x496) != 0) {
    uStack_1e._2_2_ = 0x1abe;
    func_0x00024c86();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1acd;
    func_0x00024c86();
    if ((((((*(int *)(unaff_BP + -0x4b6) != 0 || *(int *)(unaff_BP + -0x4b8) != 0) ||
           (*(int *)(unaff_BP + -0x26a) != 0 || *(int *)(unaff_BP + -0x26c) != 0)) ||
          (*(int *)(unaff_BP + -0x4cc) != 0)) ||
         ((*(int *)(unaff_BP + -0x43a) != 0 || (*(int *)0x148 != *(int *)(unaff_BP + -0x10))))) ||
        (*(int *)0x14a != *(int *)(unaff_BP + -0xe))) ||
       (((*(int *)0x14c != *(int *)(unaff_BP + -0x474) ||
         (*(int *)0x14e != *(int *)(unaff_BP + -0x472))) ||
        ((*(int *)(unaff_BP + -0x5e) != *(int *)0x152 ||
         (*(int *)(unaff_BP + -0x480) != *(int *)0x150)))))) {
      iStack_1a = 0x22b2;
      uStack_1e._2_2_ = 0x1c10;
      func_0x00024c86();
      *(undefined1 *)(*(int *)(unaff_BP + 6) + 4) = 0;
      iStack_1a = 0x22b2;
      uStack_1e._2_2_ = 0x1c23;
      FUN_21f2_2d26();
      iStack_1a = 0x22b2;
      uStack_1e._2_2_ = 0x1c31;
      FUN_21f2_2d26();
      iStack_1a = *(undefined2 *)(unaff_BP + -0x43a);
      uStack_1e._2_2_ = *(undefined2 *)(unaff_BP + -0x4cc);
      uStack_1e._0_2_ = *(undefined2 *)(unaff_BP + -0x26a);
      iStack_20 = *(undefined2 *)(unaff_BP + -0x26c);
      iStack_22 = *(undefined2 *)(unaff_BP + -0x4b6);
      iStack_24 = *(undefined2 *)(unaff_BP + -0x4b8);
      iStack_26 = 0x22e;
      iStack_28 = 0xbf48;
      iStack_2a = 0x22b2;
      iStack_2c = 0x1c5c;
      FUN_21f2_3454();
      iStack_1a = 0x22b2;
      uStack_1e._2_2_ = 0x1c6c;
      puVar14 = (undefined1 *)func_0x00025b06();
      *(undefined2 *)(unaff_BP + -0x584) = puVar14;
      if (puVar14 != (undefined1 *)0x0) {
        *puVar14 = 0;
      }
      iStack_1a = 0x22b2;
      uStack_1e._2_2_ = 0x1c88;
      FUN_1000_0599();
      *(undefined2 *)0xc22 = 2;
      iStack_1a = 0x1c98;
      func_0x00012276();
      iStack_1a = 0x1cd6;
      func_0x00012276();
      iStack_1a = *(int *)0x150 - *(int *)(unaff_BP + -0x480);
      uStack_1e._2_2_ = *(int *)0x152 - *(int *)(unaff_BP + -0x5e);
      iStack_20 = *(uint *)0x14c - *(uint *)(unaff_BP + -0x474);
      uStack_1e._0_2_ =
           (*(int *)0x14e - *(int *)(unaff_BP + -0x472)) -
           (uint)(*(uint *)0x14c < *(uint *)(unaff_BP + -0x474));
      iStack_24 = *(uint *)0x148 - *(uint *)(unaff_BP + -0x10);
      iStack_22 = (*(int *)0x14a - *(int *)(unaff_BP + -0xe)) -
                  (uint)(*(uint *)0x148 < *(uint *)(unaff_BP + -0x10));
      iStack_26 = 0x22e;
      iStack_28 = -0x40b8;
      iStack_2a = 0x11f2;
      iStack_2c = 0x1d17;
      FUN_21f2_3454();
      iStack_1a = 0x22b2;
      uStack_1e._2_2_ = 0x1d27;
      puVar14 = (undefined1 *)func_0x00025b06();
      *(undefined2 *)(unaff_BP + -0x584) = puVar14;
      if (puVar14 != (undefined1 *)0x0) {
        *puVar14 = 0;
      }
      iStack_1a = 0x22b2;
      uStack_1e._2_2_ = 0x1d43;
      FUN_1000_0599();
      *(undefined2 *)0xc22 = 2;
      puVar14 = (undefined1 *)*(undefined2 *)(unaff_BP + 6);
      *puVar14 = *(undefined1 *)0x992;
      puVar14[1] = *(undefined1 *)0x993;
      puVar14[2] = *(undefined1 *)0x994;
      puVar14[3] = *(undefined1 *)0x995;
      iStack_1a = 0x1d6b;
      func_0x00012276();
      uVar13 = (uint)(*(uint *)0x148 < *(uint *)(unaff_BP + -0x10));
      uVar6 = *(int *)0x14a - *(int *)(unaff_BP + -0xe);
      bVar24 = (int)(uVar6 - uVar13) < 0;
      if ((uVar6 == uVar13 || bVar24) &&
         ((bVar24 || (*(uint *)0x148 == *(uint *)(unaff_BP + -0x10))))) {
        uVar13 = (uint)(*(uint *)0x14c < *(uint *)(unaff_BP + -0x474));
        uVar6 = *(int *)0x14e - *(int *)(unaff_BP + -0x472);
        bVar24 = (int)(uVar6 - uVar13) < 0;
        if ((uVar6 == uVar13 || bVar24) &&
           ((((bVar24 || (*(uint *)0x14c == *(uint *)(unaff_BP + -0x474))) &&
             (*(int *)0x152 == *(int *)(unaff_BP + -0x5e) ||
              *(int *)0x152 - *(int *)(unaff_BP + -0x5e) < 0)) &&
            (*(int *)0x150 == *(int *)(unaff_BP + -0x480) ||
             *(int *)0x150 - *(int *)(unaff_BP + -0x480) < 0)))) {
          iStack_1a = 0x1e60;
          func_0x00012276();
          iStack_1a = 0x11f2;
          uStack_1e._2_2_ = 0x1e6e;
          FUN_21f2_2d26();
          iStack_1a = 0x22b2;
          uStack_1e._2_2_ = 0x1e7c;
          FUN_21f2_2d26();
          iStack_1a = 0x22b2;
          uStack_1e._2_2_ = 0x1e8a;
          FUN_21f2_2d26();
          iStack_1a = 0x22b2;
          uStack_1e._2_2_ = 0x1e98;
          FUN_1def_07a4();
          iStack_1a = *(undefined2 *)(unaff_BP + 6);
          uStack_1e._2_2_ = 9999;
          uStack_1e._0_2_ = 0x1bb4;
          iStack_20 = 0x1eb1;
          iVar16 = FUN_1def_0904();
          *(int *)(unaff_BP + -0xca) = iVar16;
          if (*(int *)0x158 == 0) goto LAB_3ab8_7342;
          goto LAB_3ab8_701a;
        }
      }
      uVar12 = 0x11f2;
      iStack_1a = 0x1dbd;
      func_0x00012276();
      *(undefined1 *)(*(int *)(unaff_BP + 6) + 0xe) = 0;
      goto LAB_3ab8_7245;
    }
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1b37;
    func_0x00024c86();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1b46;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1b54;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1b62;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1b70;
    FUN_1def_07a4();
    iStack_1a = *(undefined2 *)(unaff_BP + 6);
    uStack_1e._2_2_ = 9999;
    uStack_1e._0_2_ = 0x1bb4;
    iStack_20 = 0x1b89;
    iVar16 = FUN_1def_0904();
    *(int *)(unaff_BP + -0xca) = iVar16;
    if (*(int *)0x158 != 0) goto LAB_3ab8_701a;
LAB_3ab8_7342:
    uVar12 = 0x1bb4;
    if ((iVar16 == 1) || (iVar16 == -1)) goto LAB_3ab8_734f;
  }
  uVar12 = 0x22b2;
  uStack_1e._2_2_ = 0x1aab;
  func_0x00024c86();
LAB_3ab8_7245:
  uStack_1e._2_2_ = 0x1dd1;
  iStack_1a = uVar12;
  FUN_21f2_2d26();
  iStack_1a = 0x22b2;
  uStack_1e._2_2_ = 0x1de0;
  func_0x00024c86();
  *(undefined1 *)0xbf54 = 0;
  iStack_1a = 0x22b2;
  uStack_1e._2_2_ = 0x1df3;
  FUN_21f2_2d26();
  iStack_1a = 0x22b2;
  uStack_1e._2_2_ = 0x1e01;
  FUN_21f2_2d26();
  *(undefined2 *)0xbc0 = 1;
  iStack_1a = 0x1e12;
  func_0x000257c0();
  if (*(int *)(unaff_BP + -0x496) == 0) {
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1e29;
    FUN_21f2_2d26();
    iStack_1a = *(undefined2 *)(unaff_BP + 6);
    uStack_1e._2_2_ = 9999;
    uStack_1e._0_2_ = 0x22b2;
    iStack_20 = 0x1e42;
    iVar16 = FUN_1def_0904();
    *(int *)(unaff_BP + -0xca) = iVar16;
    if (*(int *)0x158 == 0) {
      if ((iVar16 != 1) && (*(int *)(unaff_BP + -0x484) != 1)) {
        bVar24 = iVar16 == 2;
        goto LAB_3ab8_7367;
      }
LAB_3ab8_734f:
      *(undefined2 *)(unaff_BP + -0x4ac) = 1;
LAB_3ab8_7020:
      func_0x0000c3ca();
      iStack_1a = 0x1bad;
      func_0x0000daa6();
      *(undefined2 *)0xbc0 = 1;
      *(undefined1 *)0x121 = 0;
      *(undefined2 *)0xbc2 = 0;
      if (*(int *)(unaff_BP + -0x4ac) == 0) {
        uVar12 = *(undefined2 *)(unaff_BP + -0xe);
        *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x10);
        *(undefined2 *)0x14a = uVar12;
        uVar12 = *(undefined2 *)(unaff_BP + -0x472);
        *(undefined2 *)0x14c = *(undefined2 *)(unaff_BP + -0x474);
        *(undefined2 *)0x14e = uVar12;
        *(undefined2 *)0x152 = *(undefined2 *)(unaff_BP + -0x5e);
        *(undefined2 *)0x150 = *(undefined2 *)(unaff_BP + -0x480);
        uVar12 = *(undefined2 *)(unaff_BP + -0x43e);
        *(undefined2 *)0xc0ac = *(undefined2 *)(unaff_BP + -0x440);
        *(undefined2 *)0xc0ae = uVar12;
      }
      else if (*(int *)(unaff_BP + -0x4ac) == 2) {
        uVar13 = *(uint *)(unaff_BP + -0x10);
        iVar16 = *(int *)(unaff_BP + -0xe);
        *(int *)(unaff_BP + -0x47e) = uVar13 + 1;
        *(int *)(unaff_BP + -0x47c) = iVar16 + (uint)(0xfffe < uVar13);
        uVar12 = 0x885;
        while( true ) {
          if ((*(int *)0x14a < *(int *)(unaff_BP + -0x47c)) ||
             ((*(int *)0x14a <= *(int *)(unaff_BP + -0x47c) &&
              (*(uint *)0x148 < *(uint *)(unaff_BP + -0x47e))))) break;
          uStack_1e._2_2_ = 0x2018;
          iStack_1a = uVar12;
          uVar25 = func_0x0000013f();
          *(undefined2 *)(unaff_BP + -0x6b0) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x6ae) = (int)((ulong)uVar25 >> 0x10);
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x6b0) + 0x12) = *(undefined1 *)0xb310;
          puVar2 = (uint *)(unaff_BP + -0x47e);
          uVar13 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar13);
          uVar12 = 0;
        }
        uVar13 = *(uint *)(unaff_BP + -0x474);
        iVar16 = *(int *)(unaff_BP + -0x472);
        *(int *)(unaff_BP + -0x47e) = uVar13 + 1;
        *(int *)(unaff_BP + -0x47c) = iVar16 + (uint)(0xfffe < uVar13);
        while( true ) {
          if ((*(int *)0x14e < *(int *)(unaff_BP + -0x47c)) ||
             ((*(int *)0x14e <= *(int *)(unaff_BP + -0x47c) &&
              (*(uint *)0x14c < *(uint *)(unaff_BP + -0x47e))))) break;
          uStack_1e._2_2_ = 0x206e;
          iStack_1a = uVar12;
          uVar25 = func_0x00000271();
          *(undefined2 *)(unaff_BP + -0x6b0) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x6ae) = (int)((ulong)uVar25 >> 0x10);
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x6b0) + 0x1c) = *(undefined1 *)0xb310;
          puVar2 = (uint *)(unaff_BP + -0x47e);
          uVar13 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar13);
          uVar12 = 0;
        }
        *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x5e) + 1;
        while (*(int *)(unaff_BP + -0x498) <= *(int *)0x152) {
          iStack_1a = 0x2098;
          uVar25 = func_0x000003ef();
          *(undefined2 *)(unaff_BP + -0x6b0) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x6ae) = (int)((ulong)uVar25 >> 0x10);
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x6b0) + 8) = *(undefined1 *)0xb310;
          *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
        }
        *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x480) + 1;
        while (*(int *)(unaff_BP + -0x498) <= *(int *)0x150) {
          iStack_1a = 0x20cd;
          uVar25 = func_0x00000398();
          *(undefined2 *)(unaff_BP + -0x6b0) = (int)uVar25;
          *(undefined2 *)(unaff_BP + -0x6ae) = (int)((ulong)uVar25 >> 0x10);
          *(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x6b0) + 0x15) = *(undefined1 *)0xb310;
          *(int *)(unaff_BP + -0x498) = *(int *)(unaff_BP + -0x498) + 1;
        }
      }
      *(undefined1 *)0x121 = 0;
      *(undefined2 *)0xbc2 = 0;
      func_0x0000abfa();
      iStack_1a = 0x2106;
      func_0x0000b1d8();
      func_0x0000b6ea();
      iStack_1a = 0x2114;
      func_0x0001470b();
      *(undefined2 *)0xbc0 = 1;
      return;
    }
  }
  else {
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1f0d;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1f1b;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1f29;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1f37;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1f45;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1f53;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1f61;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1f6f;
    FUN_21f2_2d26();
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0x1f7d;
    FUN_1def_07a4();
    iStack_1a = *(undefined2 *)(unaff_BP + 6);
    uStack_1e._2_2_ = 9999;
    uStack_1e._0_2_ = 0x1bb4;
    iStack_20 = 0x1f96;
    iVar16 = FUN_1def_0904();
    *(int *)(unaff_BP + -0xca) = iVar16;
    if (*(int *)0x158 == 0) {
      if (iVar16 == 1) {
        *(undefined2 *)(unaff_BP + -0x4ac) = 1;
      }
      if (iVar16 == 2) {
        *(undefined2 *)(unaff_BP + -0x4ac) = 2;
      }
      if ((iVar16 == 1) || (iVar16 == 2)) {
        *(undefined1 *)0xcf6 = 0;
        goto LAB_3ab8_7020;
      }
      bVar24 = iVar16 == 3;
LAB_3ab8_7367:
      uVar12 = 0x1bb4;
      if (((!bVar24) && (*(int *)(unaff_BP + -0x484) != 2)) && (iVar16 != -1)) goto LAB_3ab8_6f17;
    }
  }
LAB_3ab8_701a:
  *(undefined2 *)(unaff_BP + -0x4ac) = 0;
  goto LAB_3ab8_7020;
LAB_3ab8_61bb:
  uVar21 = 0x22b2;
  if ((*(int *)(unaff_BP + -0x4e0) != *(int *)(unaff_BP + -0x494)) ||
     (*(int *)(unaff_BP + -0x4de) != *(int *)(unaff_BP + -0x492))) {
    iStack_1a = 0x22b2;
    uStack_1e._2_2_ = 0xd5c;
    puVar26 = (undefined2 *)func_0x0000013f();
    puVar19 = (undefined2 *)puVar26;
    puVar18 = (undefined2 *)(unaff_BP + -0x522);
    for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
      puVar5 = puVar18;
      puVar18 = puVar18 + 1;
      puVar4 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar5 = *puVar4;
    }
    iStack_1a = 0;
    uVar21 = 0;
    uStack_1e._2_2_ = 0xd7c;
    uVar25 = func_0x0000013f();
    *(undefined2 *)(unaff_BP + -0x52a) = (int)uVar25;
    *(undefined2 *)(unaff_BP + -0x528) = (int)((ulong)uVar25 >> 0x10);
    puVar18 = (undefined2 *)(unaff_BP + -0x522);
    puVar26 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x52a);
    puVar19 = (undefined2 *)puVar26;
    for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
      puVar5 = puVar19;
      puVar19 = puVar19 + 1;
      puVar4 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar5 = *puVar4;
    }
  }
  uVar12 = 0;
  uStack_1e._2_2_ = 0xda0;
  iStack_1a = uVar21;
  uVar25 = func_0x0000013f();
  pbVar3 = (byte *)((int)uVar25 + 0x14);
  *pbVar3 = *pbVar3 | 2;
  puVar2 = (uint *)(unaff_BP + -0x4e0);
  uVar13 = *puVar2;
  *puVar2 = *puVar2 + 1;
  *(int *)(unaff_BP + -0x4de) = *(int *)(unaff_BP + -0x4de) + (uint)(0xfffe < uVar13);
  uVar13 = *(uint *)(unaff_BP + -0x494);
  iVar16 = *(int *)(unaff_BP + -0x492);
  *(int *)(unaff_BP + -0x5c) = uVar13 + 1;
  *(int *)(unaff_BP + -0x5a) = iVar16 + (uint)(0xfffe < uVar13);
  *(undefined2 *)(unaff_BP + -0x52e) = 1;
LAB_3ab8_624f:
  if (*(int *)(unaff_BP + -0x52e) == 0) {
    *(undefined1 *)(unaff_BP + -0x553) = 7;
    piVar20 = &iStack_2c;
    puVar18 = (undefined2 *)(unaff_BP + -0x564);
    for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
      puVar4 = piVar20;
      piVar20 = piVar20 + 1;
      puVar26 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar4 = *puVar26;
    }
    iStack_30 = 0xdf3;
    func_0x00018396();
    iStack_1a = 0x11f2;
    uStack_1e._2_2_ = 0xe03;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 | 2;
    iStack_1a = 0;
    uVar12 = 0;
    uStack_1e._2_2_ = 0xe1b;
    uVar25 = func_0x0000013f();
    pbVar3 = (byte *)((int)uVar25 + 0x14);
    *pbVar3 = *pbVar3 | 4;
    puVar2 = (uint *)(unaff_BP + -0x4b8);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x4b6) = *(int *)(unaff_BP + -0x4b6) + (uint)(0xfffe < uVar13);
  }
  if (((*(byte *)(unaff_BP + -0x47e) & 0xf) == 0xf) || (*(int *)(unaff_BP + -0x52e) == 0)) {
    cVar11 = FUN_12c1_009c();
    if (cVar11 == '\x1b') goto LAB_3ab8_7020;
    iStack_1a = 0x11f2;
    uStack_1e._2_2_ = 0xe5a;
    FUN_1000_0599();
    iStack_1a = 0x1fe;
    uStack_1e._2_2_ = 0xdef;
    uVar12 = 0x11f2;
    uStack_1e._0_2_ = 0xe77;
    func_0x00012276();
  }
LAB_3ab8_62fa:
  puVar2 = (uint *)(unaff_BP + -0x47e);
  uVar13 = *puVar2;
  *puVar2 = *puVar2 + 1;
  *(int *)(unaff_BP + -0x47c) = *(int *)(unaff_BP + -0x47c) + (uint)(0xfffe < uVar13);
  goto LAB_3ab8_6304;
LAB_3ab8_65cc:
  piVar1 = (int *)(unaff_BP + -0x494);
  iVar16 = *piVar1;
  *piVar1 = *piVar1 + -1;
  *(int *)(unaff_BP + -0x492) = *(int *)(unaff_BP + -0x492) - (uint)(iVar16 == 0);
  uVar12 = uVar21;
  goto LAB_3ab8_65d6;
LAB_3ab8_69c5:
  *(int *)(unaff_BP + -0x4be) = *(int *)(unaff_BP + -0x4be) + -1;
  goto LAB_3ab8_69c9;
}


