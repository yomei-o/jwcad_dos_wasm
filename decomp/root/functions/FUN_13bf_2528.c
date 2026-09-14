/* 13bf:2528 */

/* WARNING: Instruction at (ram,0x00016218) overlaps instruction at (ram,0x00016217)
    */

uint __cdecl16far FUN_13bf_2528(undefined2 ******param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined2 *******pppppppuVar3;
  uint uVar4;
  uint uVar5;
  undefined2 ******ppppppuVar6;
  undefined2 unaff_BP;
  int *unaff_SI;
  int unaff_DI;
  undefined2 ******ppppppuVar7;
  undefined2 ******ppppppuVar8;
  undefined2 unaff_DS;
  undefined2 uVar9;
  byte bVar10;
  undefined2 *****local_18;
  undefined2 ****local_10;
  undefined2 local_e;
  undefined2 *****local_c;
  undefined2 ******local_a;
  undefined2 ******local_8;
  undefined2 ******local_6;
  undefined2 ******local_4;
  
  local_4 = (undefined2 ******)0x13bf;
  local_6 = (undefined2 ******)0x6123;
  FUN_32b2_02bc();
  *(undefined2 *)0xb6a = 0xffff;
  local_4 = (undefined2 ******)0x32b2;
  local_6 = (undefined2 ******)0x612e;
  FUN_2b6e_0033();
  local_4 = (undefined2 ******)0x2b6e;
  local_6 = (undefined2 ******)0x6133;
  FUN_21f2_1ef9();
  local_4 = (undefined2 ******)0x2;
  local_6 = (undefined2 ******)0x11;
  local_8 = (undefined2 ******)0x21f2;
  local_a = (undefined2 ******)0x6140;
  FUN_1def_26a9();
  local_4 = (undefined2 ******)0x1def;
  local_6 = (undefined2 ******)0x6147;
  FUN_1def_2636();
  local_4 = (undefined2 ******)0x3;
  local_6 = (undefined2 ******)0x11;
  local_8 = (undefined2 ******)0x1def;
  local_a = (undefined2 ******)0x6154;
  FUN_1def_26a9();
  ppppppuVar6 = local_4;
  local_4 = (undefined2 ******)0x1def;
  local_6 = (undefined2 ******)0x615b;
  FUN_1def_2636();
  local_4 = (undefined2 ******)0x0;
  local_6 = (undefined2 ******)0x7;
  local_8 = (undefined2 ******)0x2;
  local_a = (undefined2 ******)0x11;
  local_c = (undefined2 *****)0x177b;
  local_e = 0x1def;
  local_10 = (undefined2 *****)0x6173;
  FUN_1def_23c5();
  *(undefined2 *)0xc2c = 0;
  ppppppuVar7 = (undefined2 ******)0x1def;
  do {
    do {
      local_4 = &local_8;
      local_6 = &local_6;
      local_8 = &local_a;
      pppppppuVar3 = &local_4;
      ppppppuVar8 = (undefined2 ******)0x1885;
      local_e = 0x6197;
      local_c = ppppppuVar7;
      local_a = pppppppuVar3;
      FUN_1885_546d();
      ppppppuVar7 = ppppppuVar8;
    } while ((undefined2 *******)local_4 != (undefined2 *******)0x0);
  } while ((undefined2 *******)local_a != (undefined2 *******)0x0);
  *(undefined2 *)0xc2c = local_c;
  if (*(int *)0xa5c < (int)local_6) {
    *(int *)0xc14 = 1 - *(int *)0xc14;
    if (*(char *)0x124 != '\0') {
      *(int *)0xc1c = -*(int *)0xc1c;
    }
    local_4 = (undefined2 ******)0x1885;
    local_6 = (undefined2 ******)0x61ce;
    FUN_1885_23aa();
    *(undefined2 *)0xb6a = 0;
    return 0;
  }
  uVar9 = unaff_DS;
  if (param_3 < 0x21) {
    if (0x1e < (int)param_2) {
      uVar4 = (int)(param_2 - 0x28) >> 0xf;
      uVar4 = (param_2 - 0x28 ^ uVar4) - uVar4;
      uVar5 = (int)uVar4 >> 0xf;
      pppppppuVar3 = (undefined2 *******)0x4;
      local_4 = (undefined2 ******)(((int)((uVar4 ^ uVar5) - uVar5) >> 4 ^ uVar5) - uVar5);
      local_6 = (undefined2 ******)0x1885;
      local_8 = (undefined2 *******)0x6200;
      FUN_13bf_137e();
      ppppppuVar6 = local_4;
    }
    bVar10 = param_2 < 0x1f;
    if (0x1e < (int)param_2) goto LAB_13bf_279a;
    local_4 = (undefined2 ******)0x1885;
    local_6 = (undefined2 ******)0x620f;
    FUN_1885_23aa();
    pcVar1 = (code *)swi(0x3f);
    uVar4 = (*pcVar1)();
    *unaff_SI = (*unaff_SI - uVar4) - (uint)bVar10;
    bVar10 = (byte)((uint)pppppppuVar3 >> 8);
    if ((bVar10 <= (byte)pppppppuVar3) &&
       (uVar9 = unaff_BP, (char)(byte)pppppppuVar3 <= (char)bVar10)) {
      return uVar4 & *(uint *)(unaff_DI + -0x5ee8);
    }
  }
  ppppppuVar8 = (undefined2 ******)0x1885;
  if ((int)param_2 < 0x1f) {
    local_4 = (undefined2 ******)0x1885;
    local_6 = (undefined2 ******)0x6225;
    FUN_1885_23aa();
    local_10 = (undefined2 ****)*(undefined2 *)0xcc2;
    local_e = *(undefined2 *)0xcc4;
    local_4 = (undefined2 ******)&local_10;
    local_6 = (undefined2 ******)0xa;
    pcVar1 = (code *)swi(0x3f);
    iVar2 = (*pcVar1)();
    *(byte *)((int)unaff_SI + (int)(ppppppuVar6 + 1)) =
         *(byte *)((int)unaff_SI + (int)(ppppppuVar6 + 1)) | (byte)((uint)ppppppuVar6 >> 8);
    local_4 = (undefined2 ******)0x0;
    local_6 = (undefined2 ******)0x1885;
    ppppppuVar8 = (undefined2 ******)0x1885;
    local_8 = (undefined2 ******)0x624c;
    FUN_1885_5256();
    if (0 < iVar2) {
      *(undefined2 *)0xcb6 = 0xffff;
      *(undefined2 *)0xcc2 = local_10;
      *(undefined2 *)0xcc4 = local_e;
      local_4 = (undefined2 ******)0x1885;
      local_6 = (undefined2 ******)0x6271;
      FUN_32b2_6cc6();
      local_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 ******)0x6276;
      FUN_32b2_7258();
      local_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 ******)0x627f;
      FUN_32b2_710c();
      local_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 ******)0x6287;
      FUN_32b2_6e99();
      local_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 ******)0x628f;
      FUN_32b2_6eb1();
      local_4 = (undefined2 ******)0x32b2;
      local_6 = (undefined2 ******)0x6297;
      FUN_32b2_6d14();
      local_c = (undefined2 *****)0x32b2;
      local_e = 0x62a1;
      FUN_32b2_6eb1();
      local_c = (undefined2 *****)0x32b2;
      local_e = 0x62a6;
      FUN_32b2_75fe();
      local_6 = (undefined2 ******)0x32b2;
      local_8 = (undefined2 ******)0x62b0;
      FUN_32b2_6d14();
      local_6 = (undefined2 ******)0x32b2;
      local_8 = (undefined2 ******)0x62b9;
      FUN_32b2_6e63();
      local_c = local_18;
      local_e = 0x32b2;
      local_10 = (undefined2 *****)0x62ca;
      FUN_32b2_75ec();
      local_8 = (undefined2 ******)0x32b2;
      local_a = (undefined2 ******)0x62d4;
      FUN_32b2_6d14();
      local_8 = (undefined2 ******)0x32b2;
      ppppppuVar8 = (undefined2 ******)0x32b2;
      local_a = (undefined2 *******)0x62dd;
      FUN_32b2_6e63();
    }
    if (iVar2 == 0) {
      *(undefined2 *)0xcb6 = 0xfffe;
    }
  }
  if ((0x1e < (int)param_2) && ((int)param_2 < 0x37)) {
    *(undefined2 *)0xcb6 = 0xfffe;
  }
  if ((0x36 < (int)param_2) && ((int)param_2 < 0x47)) {
    *(undefined2 *)0xcb6 = 0xffff;
  }
  if (0x46 < (int)param_2) {
    if (*(char *)0x15b == '\x02') {
      if (*(char *)0x1cc == '\0') {
        *(undefined1 *)0x1cc = 1;
      }
      else {
        *(undefined1 *)0x1cc = 0;
      }
    }
    else {
      uVar4 = (int)*(uint *)0x1c6 >> 0xf;
      if ((int)((*(uint *)0x1c6 ^ uVar4) - uVar4) < 0x32) {
        *(undefined2 *)0x1c6 = 10000;
      }
      else if (*(int *)0x1c6 < -0x32) {
        *(undefined2 *)0x1c6 = *(undefined2 *)0x1c4;
      }
      else if (0x32 < *(int *)0x1c6) {
        *(undefined2 *)0x1c6 = 0xd8f0;
      }
    }
  }
  unaff_DS = uVar9;
  if ((*(int *)0xcb6 < 0) && (*(int *)0xcb6 = *(int *)0xcb6 + 2, *(int *)0x11c == 0)) {
    local_4 = (undefined2 ******)0x0;
    local_8 = (undefined2 ******)0x637b;
    local_6 = ppppppuVar8;
    FUN_1885_5256();
    local_4 = (undefined2 ******)0x1885;
    local_6 = (undefined2 ******)0x6381;
    FUN_1885_23aa();
    local_4 = (undefined2 ******)0x0;
    local_6 = (undefined2 ******)0x1885;
    ppppppuVar8 = (undefined2 ******)0x1885;
    local_8 = (undefined2 ******)0x6389;
    FUN_1885_5256();
  }
LAB_13bf_279a:
  *param_1 = (undefined2 *****)0x1;
  local_4 = param_1;
  local_8 = (undefined2 ******)0x6396;
  local_6 = ppppppuVar8;
  FUN_13bf_1074();
  *param_1 = (undefined2 *****)0xa;
  local_4 = (undefined2 ******)*(undefined2 *)0x90ce;
  local_6 = (undefined2 ******)*(undefined2 *)0x90cc;
  local_8 = (undefined2 ******)*(undefined2 *)0x90ca;
  local_a = (undefined2 ******)*(undefined2 *)0x90c8;
  local_c = (undefined2 *****)*(undefined2 *)0x90ce;
  local_e = *(undefined2 *)0x90cc;
  local_10 = (undefined2 ****)*(undefined2 *)0x90ca;
  uVar9 = *(undefined2 *)0x90c8;
  *(undefined2 *)0xb6a = 0;
  FUN_21f2_23a2(0,uVar9);
  return 99;
}


