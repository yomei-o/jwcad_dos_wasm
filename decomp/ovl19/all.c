/* Ghidra decompilation of jw19.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  40 bytes, 1 callers */

bool __cdecl16far FUN_3ab8_0000(undefined2 param_1)

{
  int iVar1;
  undefined1 local_20 [22];
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0xab8b;
  FUN_21f2_0ebc();
  puStack_4 = local_20;
  uStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xab97;
  iVar1 = func_0x000271c0();
  return iVar1 == 0;
}



/* 3ab8:0028  FUN_3ab8_0028  35 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0028(char *param_1,char *param_2)

{
  char cVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}



/* 3ab8:004b  FUN_3ab8_004b  42 bytes, 2 callers */

void __cdecl16far FUN_3ab8_004b(undefined1 *param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  while( true ) {
    param_1 = (undefined1 *)func_0x00025a9a(0x22b2,param_1,0x2c);
    if (param_1 == (undefined1 *)0x0) break;
    *param_1 = 0x20;
  }
  return;
}



/* 3ab8:0075  FUN_3ab8_0075  501 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0075(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iVar4;
  int iVar5;
  
  FUN_21f2_0ebc();
  param_1[0x3f8] = 0;
  param_1[0x3d0] = 0;
  param_1[0x3a8] = 0;
  param_1[0x380] = 0;
  param_1[0x358] = 0;
  param_1[0x330] = 0;
  param_1[0x300] = 0;
  param_1[0xce] = 0;
  *param_1 = 0;
  iVar5 = 0;
  do {
    param_1[iVar5 * 0x28 + 0x420] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 9);
  iVar5 = 0;
  do {
    param_1[iVar5 * 0x14 + 0xb42] = 0;
    param_1[iVar5 * 0x14 + 0xab6] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 7);
  param_1[0xd49] = 0;
  param_1[0xd56] = 0;
  param_1[0xd4a] = 0;
  param_1[0xd18] = 0;
  param_1[0xcf0] = 0;
  param_1[0xc26] = 0;
  param_1[0xbd6] = 0;
  param_1[0x9ec] = 0;
  param_1[0x922] = 0;
  param_1[0x858] = 0;
  param_1[0x6e8] = 0;
  param_1[0x684] = 0;
  func_0x00024c86(0x22b2,param_1 + 0xd40,0x49f6);
  param_1[0x804] = 0x20;
  param_1[0xdca] = param_1[0xdca] & 0x5f;
  iVar5 = 0;
  do {
    uVar1 = *(undefined2 *)0x9e60;
    uVar2 = *(undefined2 *)0x9e62;
    *(undefined2 *)(param_1 + iVar5 * 4 + 0x2b0) = uVar1;
    *(undefined2 *)(param_1 + iVar5 * 4 + 0x2b2) = uVar2;
    *(undefined2 *)(param_1 + iVar5 * 4 + 0x268) = uVar1;
    *(undefined2 *)(param_1 + iVar5 * 4 + 0x26a) = uVar2;
    *(undefined2 *)(param_1 + iVar5 * 4 + 0x2d4) = uVar1;
    *(undefined2 *)(param_1 + iVar5 * 4 + 0x2d6) = uVar2;
    *(undefined2 *)(param_1 + iVar5 * 4 + 0x28c) = uVar1;
    *(undefined2 *)(param_1 + iVar5 * 4 + 0x28e) = uVar2;
    param_1[iVar5 * 7 + 0x1ee] = 0;
    param_1[iVar5 * 7 + 0x22d] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 9);
  uVar1 = *(undefined2 *)0x9e64;
  uVar2 = *(undefined2 *)0x9e66;
  *(undefined2 *)(param_1 + 0x32c) = uVar1;
  *(undefined2 *)(param_1 + 0x32e) = uVar2;
  *(undefined2 *)(param_1 + 0x328) = uVar1;
  *(undefined2 *)(param_1 + 0x32a) = uVar2;
  *(undefined2 *)(param_1 + 0x2fc) = uVar1;
  *(undefined2 *)(param_1 + 0x2fe) = uVar2;
  *(undefined2 *)(param_1 + 0x2f8) = uVar1;
  *(undefined2 *)(param_1 + 0x2fa) = uVar2;
  *(undefined2 *)(param_1 + 0xca) = uVar1;
  *(undefined2 *)(param_1 + 0xcc) = uVar2;
  *(undefined2 *)(param_1 + 0x266) = 1;
  for (iVar5 = 1; iVar5 < 9; iVar5 = iVar5 + 1) {
    for (iVar4 = 1; iVar4 < 7; iVar4 = iVar4 + 1) {
      iVar3 = (iVar5 * 7 + iVar4) * 4;
      uVar1 = *(undefined2 *)0x9e62;
      *(undefined2 *)(param_1 + iVar3 + 0x588) = *(undefined2 *)0x9e60;
      *(undefined2 *)(param_1 + iVar3 + 0x58a) = uVar1;
    }
  }
  uVar1 = *(undefined2 *)0x9e64;
  uVar2 = *(undefined2 *)0x9e66;
  *(undefined2 *)(param_1 + 0x82c) = uVar1;
  *(undefined2 *)(param_1 + 0x82e) = uVar2;
  *(undefined2 *)(param_1 + 0x7a8) = uVar1;
  *(undefined2 *)(param_1 + 0x7aa) = uVar2;
  *(undefined2 *)(param_1 + 0x7a4) = uVar1;
  *(undefined2 *)(param_1 + 0x7a6) = uVar2;
  *(undefined2 *)(param_1 + 0x800) = uVar1;
  *(undefined2 *)(param_1 + 0x802) = uVar2;
  *(undefined2 *)(param_1 + 0x7fc) = uVar1;
  *(undefined2 *)(param_1 + 0x7fe) = uVar2;
  *(undefined2 *)(param_1 + 0x7a0) = uVar1;
  *(undefined2 *)(param_1 + 0x7a2) = uVar2;
  *(undefined2 *)(param_1 + 0x79c) = uVar1;
  *(undefined2 *)(param_1 + 0x79e) = uVar2;
  param_1[0xdca] = param_1[0xdca] & 0xbf;
  uVar1 = *(undefined2 *)0x9e60;
  uVar2 = *(undefined2 *)0x9e62;
  *(undefined2 *)(param_1 + 0xbd2) = uVar1;
  *(undefined2 *)(param_1 + 0xbd4) = uVar2;
  *(undefined2 *)(param_1 + 0xbce) = uVar1;
  *(undefined2 *)(param_1 + 0xbd0) = uVar2;
  return;
}



/* 3ab8:026a  FUN_3ab8_026a  108 bytes, 2 callers */

void __cdecl16far FUN_3ab8_026a(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  puVar1 = (undefined1 *)func_0x00025b06(0x22b2,param_1,10);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  puVar1 = (undefined1 *)func_0x00025a9a(0x22b2,param_1,0x27);
  if ((puVar1 != (undefined1 *)0x0) && (puVar1[-1] != '\\')) {
    *puVar1 = 0;
  }
  iVar2 = func_0x00024ce4(0x22b2,param_1);
  while( true ) {
    iVar2 = iVar2 + -1;
    if ((*(char *)(iVar2 + param_1) != ' ') && (*(char *)(iVar2 + param_1) != '\t')) break;
    *(undefined1 *)(iVar2 + param_1) = 0;
  }
  return;
}



/* 3ab8:02d6  FUN_3ab8_02d6  126 bytes, 1 callers */

void __cdecl16far FUN_3ab8_02d6(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_1000_02b5(0x88a,0x11,2,6,0xffff);
  *(undefined2 *)0xc22 = 1;
  func_0x000121f9(0xdef,1);
  iVar2 = FUN_21f2_1348(0x4a24,600);
  *(int *)0xd70 = iVar2;
  if (iVar2 != 0) {
    func_0x0002327e(0x22b2,*(undefined2 *)0xd70,0x4a11,param_1,param_2,0x88a);
    func_0x0002504e(0x22b2);
    *(undefined2 *)0xd70 = 0;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)(0x1078,0x4a24,0);
  }
  return;
}



/* 3ab8:0357  FUN_3ab8_0357  2600 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0357(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_2da;
  int local_2d8 [2];
  undefined1 local_2d4 [50];
  undefined1 local_2a2 [10];
  undefined1 local_298 [6];
  char local_292 [300];
  undefined2 local_166;
  char local_164 [4];
  byte local_160;
  byte local_15f;
  int local_38;
  int local_36;
  undefined1 local_34 [24];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int iStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  int *piStack_c;
  char *pcStack_a;
  char *pcStack_8;
  int *piStack_6;
  
  uVar5 = 0x22b2;
  piStack_6 = (int *)0xaee2;
  FUN_21f2_0ebc();
  local_38 = 2;
LAB_3ab8_0368:
  while( true ) {
    while( true ) {
      do {
        local_164[0] = '\0';
        do {
          piStack_6 = (int *)param_2;
          pcStack_8 = (char *)0x12b;
          pcStack_a = local_292;
          iStack_e = 0xaefe;
          piStack_c = (int *)uVar5;
          iVar1 = func_0x0002509c();
          if (iVar1 == 0) {
            if ((*(byte *)(param_2 + 6) & 0x10) == 0) {
              return 0xffff;
            }
            return 0;
          }
          local_38 = local_38 + 1;
          piStack_6 = (int *)local_292;
          pcStack_8 = (char *)0x22b2;
          pcStack_a = (char *)0xaf20;
          FUN_3ab8_026a();
          piStack_6 = (int *)local_292;
          pcStack_8 = (char *)0x22b2;
          pcStack_a = (char *)0xaf2b;
          iVar1 = func_0x00024ce4();
          piStack_6 = (int *)local_164;
          pcStack_8 = (char *)0x22b2;
          uVar5 = 0x22b2;
          pcStack_a = (char *)0xaf38;
          iVar2 = func_0x00024ce4();
          if (0x12a < (uint)(iVar1 + iVar2)) goto LAB_3ab8_0d67;
          if ((local_292[0] != '#') && (local_292[0] != '\'')) {
            piStack_6 = (int *)local_164;
            pcStack_8 = (char *)0x22b2;
            pcStack_a = (char *)0xaf5c;
            iVar1 = func_0x00024ce4();
            local_166 = iVar1 + -1;
            if ((local_164[iVar1 + -2] != '\\') && (local_164[iVar1 + -1] == '\\')) {
              local_164[iVar1 + -1] = '\0';
            }
            piStack_6 = (int *)local_292;
            pcStack_8 = local_164;
            pcStack_a = (char *)0x22b2;
            piStack_c = (int *)0xaf86;
            FUN_21f2_2d26();
          }
          piStack_6 = (int *)local_164;
          pcStack_8 = (char *)0x22b2;
          uVar5 = 0x22b2;
          pcStack_a = (char *)0xaf92;
          iVar1 = func_0x00024ce4();
          local_166 = iVar1 + -1;
        } while ((local_164[iVar1 + -2] != '\\') && (local_164[iVar1 + -1] == '\\'));
      } while (local_164[0] == '#');
      piStack_6 = (int *)0x3d;
      pcStack_8 = local_164;
      pcStack_a = (char *)0x22b2;
      uVar5 = 0x22b2;
      piStack_c = (int *)0xafc3;
      iVar1 = func_0x00025a9a();
      if (iVar1 != 0) break;
      local_36 = 0;
    }
    local_36 = iVar1 + 1;
    piStack_6 = (int *)0x4a30;
    pcStack_8 = local_164;
    pcStack_a = (char *)0x22b2;
    piStack_c = (int *)0xafe0;
    iVar1 = func_0x00012232();
    if (iVar1 == 0) break;
    iVar1 = param_1 + 0xd58;
    pcStack_8 = local_34;
    pcStack_a = (char *)0x11f2;
    piStack_c = (int *)0xaffb;
    piStack_6 = (int *)iVar1;
    func_0x00024c86();
    piStack_6 = (int *)local_298;
    pcStack_8 = local_2a2;
    pcStack_a = local_2d4;
    piStack_c = local_2d8;
    iStack_10 = 0x22b2;
    iStack_12 = -0x4fe9;
    iStack_e = iVar1;
    func_0x000265e6();
    piStack_6 = local_2d8;
    pcStack_a = (char *)0x22b2;
    piStack_c = (int *)0xb025;
    pcStack_8 = (char *)iVar1;
    func_0x00024c86();
    piStack_6 = (int *)local_2d4;
    pcStack_a = (char *)0x22b2;
    piStack_c = (int *)0xb032;
    pcStack_8 = (char *)iVar1;
    FUN_21f2_2d26();
    piStack_6 = (int *)local_36;
    pcStack_a = (char *)0x22b2;
    piStack_c = (int *)0xb03d;
    pcStack_8 = (char *)iVar1;
    FUN_21f2_2d26();
    piStack_6 = (int *)0x254;
    pcStack_a = (char *)0x22b2;
    uVar5 = 0x22b2;
    piStack_c = (int *)0xb049;
    pcStack_8 = (char *)iVar1;
    iVar2 = FUN_21f2_1348();
    if (iVar2 == 0) {
      pcStack_8 = (char *)0x2;
      pcStack_a = (char *)0x1;
      piStack_c = (int *)0x1;
      iStack_10 = 0x22b2;
      iStack_12 = -0x4f9d;
      iStack_e = iVar1;
      piStack_6 = (int *)iVar2;
      FUN_1000_02b5();
      piStack_6 = (int *)0x568;
      pcStack_8 = (char *)0xdef;
      uVar5 = 0x11f2;
      pcStack_a = (char *)0xb06f;
      FUN_13bf_0a03();
    }
    pcStack_a = (char *)0xb079;
    pcStack_8 = (char *)uVar5;
    piStack_6 = (int *)iVar2;
    FUN_21f2_1262();
    *(undefined1 *)(param_1 + 0xd94) = 0;
    piStack_6 = (int *)0x22b2;
    uVar6 = 0x22b2;
    pcStack_8 = (char *)0xb087;
    uVar3 = func_0x00024a62();
    if (uVar3 < 2000) {
      piStack_6 = (int *)0x8c2;
      pcStack_8 = (char *)0x22b2;
      uVar6 = 0x11f2;
      pcStack_a = (char *)0xb095;
      FUN_13bf_0a03();
    }
    piStack_6 = (int *)param_1;
    pcStack_a = (char *)0xb09d;
    pcStack_8 = (char *)uVar6;
    FUN_3ab8_1070();
    piStack_6 = (int *)local_34;
    pcStack_8 = (char *)(param_1 + 0xd58);
    uVar5 = 0x22b2;
    piStack_c = (int *)0xb0ae;
    pcStack_a = (char *)uVar6;
    func_0x00024c86();
  }
  piStack_6 = (int *)0x4a35;
  pcStack_8 = local_164;
  pcStack_a = (char *)0x11f2;
  uVar5 = 0x11f2;
  piStack_c = (int *)0xb0c1;
  iVar1 = func_0x00012232();
  if (iVar1 != 0) {
    piStack_6 = (int *)0xc9;
    pcStack_8 = (char *)local_36;
    pcStack_a = (char *)param_1;
    goto LAB_3ab8_0d3d;
  }
  piStack_6 = (int *)0x4a3b;
  pcStack_8 = local_164;
  pcStack_a = (char *)0x11f2;
  piStack_c = (int *)0xb0e2;
  iVar1 = func_0x00012232();
  if (iVar1 != 0) {
    piStack_6 = (int *)(param_1 + 0xca);
    goto LAB_3ab8_056e;
  }
  piStack_6 = (int *)0x4a40;
  pcStack_8 = local_164;
  pcStack_a = (char *)0x11f2;
  uVar5 = 0x11f2;
  piStack_c = (int *)0xb10c;
  iVar1 = func_0x00012232();
  if (iVar1 != 0) {
    piStack_6 = (int *)0xc9;
    pcStack_8 = (char *)local_36;
    pcStack_a = (char *)(param_1 + 0xce);
    goto LAB_3ab8_0d3d;
  }
  piStack_6 = (int *)0x4a46;
  pcStack_8 = local_164;
  pcStack_a = (char *)0x11f2;
  uVar5 = 0x11f2;
  piStack_c = (int *)0xb130;
  iVar1 = func_0x00012232();
  if (iVar1 != 0) {
    piStack_6 = (int *)0xc;
    pcStack_8 = (char *)local_36;
    pcStack_a = (char *)(param_1 + 0xd4a);
    goto LAB_3ab8_0d3d;
  }
  piStack_6 = (int *)0x4a50;
  pcStack_8 = local_164;
  pcStack_a = (char *)0x11f2;
  uVar5 = 0x11f2;
  piStack_c = (int *)0xb154;
  iVar1 = func_0x00012232();
  if (iVar1 != 0) {
    piStack_6 = (int *)0x9;
    pcStack_8 = (char *)local_36;
    pcStack_a = (char *)(param_1 + 0xd40);
    goto LAB_3ab8_0d3d;
  }
  piStack_6 = (int *)0x4a59;
  pcStack_8 = local_164;
  pcStack_a = (char *)0x11f2;
  piStack_c = (int *)0xb178;
  iVar1 = func_0x00012232();
  if (iVar1 != 0) {
    piStack_6 = (int *)0x4a61;
    pcStack_8 = (char *)local_36;
    pcStack_a = (char *)0x11f2;
    piStack_c = (int *)0xb18a;
    local_2d8[0] = FUN_21f2_3c12();
    local_2da = 1;
    while( true ) {
      piStack_6 = (int *)0x6;
      pcStack_8 = (char *)local_2d8[0];
      pcStack_a = (char *)(local_2da * 7 + param_1 + 0x227);
      piStack_c = (int *)0x22b2;
      iStack_e = 0xb1b1;
      func_0x00024d00();
      if (local_2da == 8) break;
      piStack_6 = (int *)0x4a63;
      pcStack_8 = (char *)0x0;
      pcStack_a = (char *)0x22b2;
      piStack_c = (int *)0xb1d5;
      local_2d8[0] = FUN_21f2_3c12();
      if (local_2d8[0] == 0) break;
      local_2da = local_2da + 1;
    }
    uVar5 = 0x22b2;
    *(int *)(param_1 + 0x266) = local_2da;
    goto LAB_3ab8_0368;
  }
  piStack_6 = (int *)0x4a65;
  pcStack_8 = local_164;
  pcStack_a = (char *)0x11f2;
  piStack_c = (int *)0xb1f3;
  iVar1 = func_0x00012232();
  if (iVar1 != 0) {
    piStack_6 = (int *)0x62;
    pcStack_8 = (char *)0x4a6d;
LAB_3ab8_0572:
    pcStack_a = (char *)local_36;
    piStack_c = (int *)0x11f2;
    iStack_e = 0xb0fb;
    func_0x000253ce();
    goto LAB_3ab8_0d42;
  }
  piStack_6 = (int *)0x4a70;
  pcStack_8 = local_164;
  pcStack_a = (char *)0x11f2;
  piStack_c = (int *)0xb211;
  iVar1 = func_0x00012232();
  if (iVar1 != 0) {
    piStack_6 = (int *)0x4a77;
    pcStack_8 = (char *)local_36;
    pcStack_a = (char *)0x11f2;
    piStack_c = (int *)0xb223;
    local_2d8[0] = FUN_21f2_3c12();
    local_2da = 1;
    while( true ) {
      piStack_6 = (int *)0x6;
      pcStack_8 = (char *)local_2d8[0];
      pcStack_a = (char *)(local_2da * 7 + param_1 + 0x1e8);
      piStack_c = (int *)0x22b2;
      iStack_e = 0xb24a;
      func_0x00024d00();
      if (local_2da == 8) break;
      piStack_6 = (int *)0x4a79;
      pcStack_8 = (char *)0x0;
      pcStack_a = (char *)0x22b2;
      piStack_c = (int *)0xb260;
      local_2d8[0] = FUN_21f2_3c12();
      if (local_2d8[0] == 0) break;
      local_2da = local_2da + 1;
    }
    uVar5 = 0x22b2;
    goto LAB_3ab8_0368;
  }
  piStack_6 = (int *)0x4a7b;
  pcStack_8 = local_164;
  pcStack_a = (char *)0x11f2;
  piStack_c = (int *)0xb281;
  iVar1 = func_0x00012232();
  if (iVar1 == 0) {
    piStack_6 = (int *)0x4a81;
    pcStack_8 = local_164;
    pcStack_a = (char *)0x11f2;
    piStack_c = (int *)0xb2d7;
    iVar1 = func_0x00012232();
    if (iVar1 == 0) {
      piStack_6 = (int *)0x4a87;
      pcStack_8 = local_164;
      pcStack_a = (char *)0x11f2;
      piStack_c = (int *)0xb32d;
      iVar1 = func_0x00012232();
      if (iVar1 == 0) {
        piStack_6 = (int *)0x4a8d;
        pcStack_8 = local_164;
        pcStack_a = (char *)0x11f2;
        piStack_c = (int *)0xb382;
        iVar1 = func_0x00012232();
        if (iVar1 == 0) {
          piStack_6 = (int *)0x4a93;
          pcStack_8 = local_164;
          pcStack_a = (char *)0x11f2;
          piStack_c = (int *)0xb3e8;
          iVar1 = func_0x00012232();
          if (iVar1 == 0) {
            piStack_6 = (int *)0x4a9a;
            pcStack_8 = local_164;
            pcStack_a = (char *)0x11f2;
            piStack_c = (int *)0xb405;
            iVar1 = func_0x00012232();
            if (iVar1 == 0) {
              piStack_6 = (int *)0x4aa1;
              pcStack_8 = local_164;
              pcStack_a = (char *)0x11f2;
              uVar5 = 0x11f2;
              piStack_c = (int *)0xb422;
              iVar1 = func_0x00012232();
              cVar4 = (char)((uint)param_1 >> 8);
              if (iVar1 != 0) {
                piStack_6 = (int *)0x27;
                pcStack_8 = (char *)local_36;
                pcStack_a = (char *)CONCAT11(cVar4 + '\x03',(char)param_1);
                goto LAB_3ab8_0d3d;
              }
              piStack_6 = (int *)0x4aa7;
              pcStack_8 = local_164;
              pcStack_a = (char *)0x11f2;
              piStack_c = (int *)0xb446;
              iVar1 = func_0x00012232();
              if (iVar1 == 0) {
                piStack_6 = (int *)0x4aad;
                pcStack_8 = local_164;
                pcStack_a = (char *)0x11f2;
                piStack_c = (int *)0xb463;
                iVar1 = func_0x00012232();
                if (iVar1 == 0) {
                  piStack_6 = (int *)0x4ab4;
                  pcStack_8 = local_164;
                  pcStack_a = (char *)0x11f2;
                  uVar5 = 0x11f2;
                  piStack_c = (int *)0xb480;
                  iVar1 = func_0x00012232();
                  if (iVar1 == 0) {
                    piStack_6 = (int *)0x4ab9;
                    pcStack_8 = local_164;
                    pcStack_a = (char *)0x11f2;
                    uVar5 = 0x11f2;
                    piStack_c = (int *)0xb542;
                    iVar1 = func_0x00012232();
                    if (iVar1 == 0) {
                      piStack_6 = (int *)0x4abf;
                      pcStack_8 = local_164;
                      pcStack_a = (char *)0x11f2;
                      uVar5 = 0x11f2;
                      piStack_c = (int *)0xb585;
                      iVar1 = func_0x00012232();
                      if (iVar1 != 0) {
                        local_166 = local_15f - 0x30;
                        if ((0 < local_166) && (local_166 < 9)) {
                          piStack_6 = (int *)local_36;
                          pcStack_8 = (char *)0x11f2;
                          pcStack_a = (char *)0xb5ac;
                          FUN_3ab8_004b();
                          iStack_10 = local_166 * 0x1c + param_1;
                          piStack_6 = (int *)(iStack_10 + 0x5a0);
                          pcStack_8 = (char *)(iStack_10 + 0x59c);
                          pcStack_a = (char *)(iStack_10 + 0x598);
                          piStack_c = (int *)(iStack_10 + 0x594);
                          iStack_e = iStack_10 + 0x590;
                          iStack_10 = iStack_10 + 0x58c;
                          iStack_12 = 0x49fc;
                          iStack_14 = local_36;
                          uStack_16 = 0x11f2;
                          uVar5 = 0x22b2;
                          iStack_18 = -0x4a18;
                          func_0x000253ce();
                        }
                        goto LAB_3ab8_0368;
                      }
                      piStack_6 = (int *)0x4ac5;
                      pcStack_8 = local_164;
                      pcStack_a = (char *)0x11f2;
                      uVar5 = 0x11f2;
                      piStack_c = (int *)0xb5fc;
                      iVar1 = func_0x00012232();
                      if (iVar1 != 0) {
                        piStack_6 = (int *)0x63;
                        pcStack_8 = (char *)local_36;
                        pcStack_a = (char *)(param_1 + 0x684);
                        goto LAB_3ab8_0d3d;
                      }
                      piStack_6 = (int *)0x4aca;
                      pcStack_8 = local_164;
                      pcStack_a = (char *)0x11f2;
                      uVar5 = 0x11f2;
                      piStack_c = (int *)0xb620;
                      iVar1 = func_0x00012232();
                      if (iVar1 == 0) {
                        piStack_6 = (int *)0x4acf;
                        pcStack_8 = local_164;
                        pcStack_a = (char *)0x11f2;
                        piStack_c = (int *)0xb644;
                        iVar1 = func_0x00012232();
                        if (iVar1 == 0) {
                          piStack_6 = (int *)0x4ad5;
                          pcStack_8 = local_164;
                          pcStack_a = (char *)0x11f2;
                          piStack_c = (int *)0xb661;
                          iVar1 = func_0x00012232();
                          if (iVar1 == 0) {
                            piStack_6 = (int *)0x4adb;
                            pcStack_8 = local_164;
                            pcStack_a = (char *)0x11f2;
                            piStack_c = (int *)0xb67e;
                            iVar1 = func_0x00012232();
                            if (iVar1 == 0) {
                              piStack_6 = (int *)0x4ae1;
                              pcStack_8 = local_164;
                              pcStack_a = (char *)0x11f2;
                              piStack_c = (int *)0xb69b;
                              iVar1 = func_0x00012232();
                              if (iVar1 != 0) {
                                piStack_6 = (int *)CONCAT11(cVar4 + '\b',(char)param_1);
                                goto LAB_3ab8_056e;
                              }
                              piStack_6 = (int *)0x4ae7;
                              pcStack_8 = local_164;
                              pcStack_a = (char *)0x11f2;
                              piStack_c = (int *)0xb6b8;
                              iVar1 = func_0x00012232();
                              if (iVar1 == 0) {
                                piStack_6 = (int *)0x4aee;
                                pcStack_8 = local_164;
                                pcStack_a = (char *)0x11f2;
                                piStack_c = (int *)0xb6d5;
                                iVar1 = func_0x00012232();
                                if (iVar1 == 0) {
                                  piStack_6 = (int *)0x4af5;
                                  pcStack_8 = local_164;
                                  pcStack_a = (char *)0x11f2;
                                  piStack_c = (int *)0xb6f2;
                                  iVar1 = func_0x00012232();
                                  if (iVar1 == 0) {
                                    piStack_6 = (int *)0x4afb;
                                    pcStack_8 = local_164;
                                    pcStack_a = (char *)0x11f2;
                                    uVar5 = 0x11f2;
                                    piStack_c = (int *)0xb70f;
                                    iVar1 = func_0x00012232();
                                    if (iVar1 == 0) {
                                      piStack_6 = (int *)0x4aff;
                                      pcStack_8 = local_164;
                                      pcStack_a = (char *)0x11f2;
                                      piStack_c = (int *)0xb733;
                                      iVar1 = func_0x00012232();
                                      if (iVar1 != 0) {
                                        piStack_6 = (int *)0xc9;
                                        pcStack_8 = (char *)local_36;
                                        pcStack_a = (char *)(param_1 + 0x922);
                                        piStack_c = (int *)0x11f2;
                                        iStack_e = 0xb74c;
                                        func_0x00024d00();
                                        piStack_6 = (int *)0x4b05;
                                        pcStack_8 = local_164;
                                        pcStack_a = (char *)0x22b2;
                                        uVar5 = 0x11f2;
                                        piStack_c = (int *)0xb75d;
                                        iVar1 = func_0x00012232();
                                        if (iVar1 != 0) {
                                          *(byte *)(param_1 + 0xdca) =
                                               *(byte *)(param_1 + 0xdca) | 0x20;
                                        }
                                        goto LAB_3ab8_0368;
                                      }
                                      piStack_6 = (int *)0x4b0c;
                                      pcStack_8 = local_164;
                                      pcStack_a = (char *)0x11f2;
                                      uVar5 = 0x11f2;
                                      piStack_c = (int *)0xb77f;
                                      iVar1 = func_0x00012232();
                                      if (iVar1 == 0) {
                                        piStack_6 = (int *)0x4b11;
                                        pcStack_8 = local_164;
                                        pcStack_a = (char *)0x11f2;
                                        uVar5 = 0x11f2;
                                        piStack_c = (int *)0xb7a3;
                                        iVar1 = func_0x00012232();
                                        if (iVar1 == 0) {
                                          piStack_6 = (int *)0x4b16;
                                          pcStack_8 = local_164;
                                          pcStack_a = (char *)0x11f2;
                                          uVar5 = 0x11f2;
                                          piStack_c = (int *)0xb7e6;
                                          iVar1 = func_0x00012232();
                                          if (iVar1 != 0) {
                                            local_166 = local_160 - 0x30;
                                            if ((0 < local_166) && (local_166 < 7)) {
                                              piStack_6 = (int *)0x13;
                                              pcStack_8 = (char *)local_36;
                                              pcStack_a = (char *)(local_166 * 0x14 + param_1 +
                                                                  0xb42);
                                              goto LAB_3ab8_0d3d;
                                            }
                                            goto LAB_3ab8_0368;
                                          }
                                          piStack_6 = (int *)0x4b1b;
                                          pcStack_8 = local_164;
                                          pcStack_a = (char *)0x11f2;
                                          piStack_c = (int *)0xb829;
                                          iVar1 = func_0x00012232();
                                          if (iVar1 != 0) {
                                            piStack_6 = (int *)(param_1 + 0xbce);
                                            goto LAB_3ab8_056e;
                                          }
                                          piStack_6 = (int *)0x4b23;
                                          pcStack_8 = local_164;
                                          pcStack_a = (char *)0x11f2;
                                          piStack_c = (int *)0xb846;
                                          iVar1 = func_0x00012232();
                                          if (iVar1 != 0) {
                                            piStack_6 = (int *)(param_1 + 0xbd2);
                                            goto LAB_3ab8_056e;
                                          }
                                          piStack_6 = (int *)0x4b2b;
                                          pcStack_8 = local_164;
                                          pcStack_a = (char *)0x11f2;
                                          uVar5 = 0x11f2;
                                          piStack_c = (int *)0xb863;
                                          iVar1 = func_0x00012232();
                                          if (iVar1 == 0) {
                                            piStack_6 = (int *)0x4b31;
                                            pcStack_8 = local_164;
                                            pcStack_a = (char *)0x11f2;
                                            uVar5 = 0x11f2;
                                            piStack_c = (int *)0xb886;
                                            iVar1 = func_0x00012232();
                                            if (iVar1 != 0) {
                                              piStack_6 = (int *)0xc9;
                                              pcStack_8 = (char *)local_36;
                                              pcStack_a = (char *)(param_1 + 0xc26);
                                              goto LAB_3ab8_0d3d;
                                            }
                                            piStack_6 = (int *)0x4b38;
                                            pcStack_8 = local_164;
                                            pcStack_a = (char *)0x11f2;
                                            uVar5 = 0x11f2;
                                            piStack_c = (int *)0xb8a9;
                                            iVar1 = func_0x00012232();
                                            if (iVar1 == 0) {
                                              piStack_6 = (int *)0x4b3d;
                                              pcStack_8 = local_164;
                                              pcStack_a = (char *)0x11f2;
                                              uVar5 = 0x11f2;
                                              piStack_c = (int *)0xb8d6;
                                              iVar1 = func_0x00012232();
                                              if (iVar1 == 0) {
LAB_3ab8_0d67:
                                                piStack_6 = (int *)local_38;
                                                pcStack_8 = (char *)(param_1 + 0xd58);
                                                piStack_c = (int *)0xb8f5;
                                                pcStack_a = (char *)uVar5;
                                                FUN_3ab8_02d6();
                                                return 0xffff;
                                              }
                                              *(byte *)(param_1 + 0xdca) =
                                                   *(byte *)(param_1 + 0xdca) | 0x80;
                                              goto LAB_3ab8_0368;
                                            }
                                            piStack_6 = (int *)0x27;
                                            pcStack_8 = (char *)local_36;
                                            pcStack_a = (char *)(param_1 + 0xbfe);
                                          }
                                          else {
                                            piStack_6 = (int *)0x27;
                                            pcStack_8 = (char *)local_36;
                                            pcStack_a = (char *)(param_1 + 0xbd6);
                                          }
                                        }
                                        else {
                                          local_166 = local_160 - 0x30;
                                          if ((local_166 < 1) || (6 < local_166))
                                          goto LAB_3ab8_0368;
                                          piStack_6 = (int *)0x13;
                                          pcStack_8 = (char *)local_36;
                                          pcStack_a = (char *)(local_166 * 0x14 + param_1 + 0xab6);
                                        }
                                      }
                                      else {
                                        piStack_6 = (int *)0xc9;
                                        pcStack_8 = (char *)local_36;
                                        pcStack_a = (char *)(param_1 + 0x9ec);
                                      }
                                    }
                                    else {
                                      piStack_6 = (int *)0xc9;
                                      pcStack_8 = (char *)local_36;
                                      pcStack_a = (char *)(param_1 + 0x858);
                                    }
                                    goto LAB_3ab8_0d3d;
                                  }
                                  piStack_6 = (int *)(param_1 + 0x82c);
                                }
                                else {
                                  piStack_6 = (int *)(param_1 + 0x7a8);
                                }
                              }
                              else {
                                piStack_6 = (int *)(param_1 + 0x7a4);
                              }
                            }
                            else {
                              piStack_6 = (int *)(param_1 + 0x7fc);
                            }
                          }
                          else {
                            piStack_6 = (int *)(param_1 + 0x7a0);
                          }
                        }
                        else {
                          piStack_6 = (int *)(param_1 + 0x79c);
                        }
                        goto LAB_3ab8_056e;
                      }
                      piStack_6 = (int *)0x63;
                      pcStack_8 = (char *)local_36;
                      pcStack_a = (char *)(param_1 + 0x6e8);
                    }
                    else {
                      local_166 = local_15f - 0x30;
                      if ((local_166 < 1) || (8 < local_166)) goto LAB_3ab8_0368;
                      piStack_6 = (int *)0x27;
                      pcStack_8 = (char *)local_36;
                      pcStack_a = (char *)(local_166 * 0x28 + param_1 + 0x420);
                    }
                  }
                  else {
                    if (local_160 == 0x31) {
                      piStack_6 = (int *)0x27;
                      pcStack_8 = (char *)local_36;
                      pcStack_a = (char *)(param_1 + 0x330);
                      piStack_c = (int *)0x11f2;
                      uVar5 = 0x22b2;
                      iStack_e = 0xb4a3;
                      func_0x00024d00();
                    }
                    uVar6 = uVar5;
                    if (local_160 == 0x32) {
                      piStack_6 = (int *)0x27;
                      pcStack_8 = (char *)local_36;
                      pcStack_a = (char *)(param_1 + 0x358);
                      uVar6 = 0x22b2;
                      iStack_e = 0xb4c0;
                      piStack_c = (int *)uVar5;
                      func_0x00024d00();
                    }
                    uVar5 = uVar6;
                    if (local_160 == 0x33) {
                      piStack_6 = (int *)0x27;
                      pcStack_8 = (char *)local_36;
                      pcStack_a = (char *)(param_1 + 0x380);
                      uVar5 = 0x22b2;
                      iStack_e = 0xb4dd;
                      piStack_c = (int *)uVar6;
                      func_0x00024d00();
                    }
                    uVar6 = uVar5;
                    if (local_160 == 0x34) {
                      piStack_6 = (int *)0x27;
                      pcStack_8 = (char *)local_36;
                      pcStack_a = (char *)(param_1 + 0x3a8);
                      uVar6 = 0x22b2;
                      iStack_e = 0xb4fa;
                      piStack_c = (int *)uVar5;
                      func_0x00024d00();
                    }
                    uVar5 = uVar6;
                    if (local_160 == 0x35) {
                      piStack_6 = (int *)0x27;
                      pcStack_8 = (char *)local_36;
                      pcStack_a = (char *)(param_1 + 0x3d0);
                      uVar5 = 0x22b2;
                      iStack_e = 0xb517;
                      piStack_c = (int *)uVar6;
                      func_0x00024d00();
                    }
                    if (local_160 != 0x36) goto LAB_3ab8_0368;
                    piStack_6 = (int *)0x27;
                    pcStack_8 = (char *)local_36;
                    pcStack_a = (char *)(param_1 + 0x3f8);
                  }
LAB_3ab8_0d3d:
                  iStack_e = 0xb8c2;
                  local_36 = (int)pcStack_8;
                  piStack_c = (int *)uVar5;
                  func_0x00024d00();
LAB_3ab8_0d42:
                  uVar5 = 0x22b2;
                  goto LAB_3ab8_0368;
                }
                piStack_6 = (int *)(param_1 + 0x32c);
              }
              else {
                piStack_6 = (int *)(param_1 + 0x328);
              }
            }
            else {
              piStack_6 = (int *)(param_1 + 0x2fc);
            }
          }
          else {
            piStack_6 = (int *)(param_1 + 0x2f8);
          }
LAB_3ab8_056e:
          pcStack_8 = (char *)0x206;
          goto LAB_3ab8_0572;
        }
        piStack_6 = (int *)local_36;
        pcStack_8 = (char *)0x11f2;
        pcStack_a = (char *)0xb38f;
        FUN_3ab8_004b();
        piStack_6 = (int *)(param_1 + 0x2d0);
        pcStack_8 = (char *)(param_1 + 0x2cc);
        pcStack_a = (char *)(param_1 + 0x2c8);
        piStack_c = (int *)(param_1 + 0x2c4);
        iStack_e = param_1 + 0x2c0;
        iStack_10 = param_1 + 700;
        iStack_12 = param_1 + 0x2b8;
        iStack_14 = param_1 + 0x2b4;
      }
      else {
        piStack_6 = (int *)local_36;
        pcStack_8 = (char *)0x11f2;
        pcStack_a = (char *)0xb33a;
        FUN_3ab8_004b();
        piStack_6 = (int *)(param_1 + 0x288);
        pcStack_8 = (char *)(param_1 + 0x284);
        pcStack_a = (char *)(param_1 + 0x280);
        piStack_c = (int *)(param_1 + 0x27c);
        iStack_e = param_1 + 0x278;
        iStack_10 = param_1 + 0x274;
        iStack_12 = param_1 + 0x270;
        iStack_14 = param_1 + 0x26c;
      }
    }
    else {
      piStack_6 = (int *)local_36;
      pcStack_8 = (char *)0x11f2;
      pcStack_a = (char *)0xb2e4;
      FUN_3ab8_004b();
      piStack_6 = (int *)(param_1 + 0x2f4);
      pcStack_8 = (char *)(param_1 + 0x2f0);
      pcStack_a = (char *)(param_1 + 0x2ec);
      piStack_c = (int *)(param_1 + 0x2e8);
      iStack_e = param_1 + 0x2e4;
      iStack_10 = param_1 + 0x2e0;
      iStack_12 = param_1 + 0x2dc;
      iStack_14 = param_1 + 0x2d8;
    }
  }
  else {
    piStack_6 = (int *)local_36;
    pcStack_8 = (char *)0x11f2;
    pcStack_a = (char *)0xb28e;
    FUN_3ab8_004b();
    piStack_6 = (int *)(param_1 + 0x2ac);
    pcStack_8 = (char *)(param_1 + 0x2a8);
    pcStack_a = (char *)(param_1 + 0x2a4);
    piStack_c = (int *)(param_1 + 0x2a0);
    iStack_e = param_1 + 0x29c;
    iStack_10 = param_1 + 0x298;
    iStack_12 = param_1 + 0x294;
    iStack_14 = param_1 + 0x290;
  }
  uStack_16 = 0x49fc;
  iStack_18 = local_36;
  uStack_1a = 0x11f2;
  uVar5 = 0x22b2;
  uStack_1c = 0xb3d4;
  func_0x000253ce();
  goto LAB_3ab8_0368;
}



/* 3ab8:0d7f  FUN_3ab8_0d7f  253 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0d7f(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 unaff_DS;
  undefined2 local_8;
  undefined2 *local_6;
  
  local_6 = (undefined2 *)0xb90a;
  FUN_21f2_0ebc();
  do {
    local_6 = (undefined2 *)*(undefined2 *)0xd70;
    local_8 = (undefined1 *)0x12c;
    iVar1 = func_0x0002509c(0x22b2,0xbf48);
    if (iVar1 == 0) {
      *(undefined1 *)0xbf48 = 0;
    }
  } while (*(char *)0xbf48 == '#');
  *(undefined1 *)(param_1 + -0x40b8) = 0;
  local_6 = (undefined2 *)0xbf48;
  local_8 = (undefined1 *)0x22b2;
  FUN_3ab8_026a();
  local_6 = (undefined2 *)0xbf48;
  local_8 = (undefined1 *)param_2;
  func_0x00024c86(0x22b2);
  local_6 = (undefined2 *)0x0;
  while( true ) {
    if (*(char *)((int)local_6 + param_2) == '\0') break;
    if (*(char *)((int)local_6 + param_2) == '\\') {
      puVar2 = (undefined1 *)((int)local_6 + param_2);
      if (puVar2[1] == 'n') {
        *puVar2 = 0xd;
        puVar2[1] = 10;
      }
      else {
        if ((*(char *)((int)local_6 + param_2 + 1) == 'x') ||
           (*(char *)((int)local_6 + param_2 + 1) == 'X')) {
          local_6 = &local_8;
          local_8 = (undefined1 *)0x4b41;
          puVar2 = (undefined1 *)((int)local_6 + param_2);
          func_0x000253ce(0x22b2,(int)&local_6 + param_2);
          *puVar2 = (undefined1)local_8;
          local_6 = (undefined2 *)(&stack0xfffc + param_2);
          local_8 = (undefined1 *)((int)&local_8 + param_2 + 1);
        }
        else {
          if (*(char *)((int)local_6 + param_2 + 1) == 'e') {
            *(undefined1 *)((int)local_6 + param_2 + 1) = 0x1b;
          }
          if (*(char *)((int)local_6 + param_2 + 1) == 'r') {
            *(undefined1 *)((int)local_6 + param_2 + 1) = 0x1e;
          }
          if (*(char *)((int)local_6 + param_2 + 1) == 'u') {
            *(undefined1 *)((int)local_6 + param_2 + 1) = 0x1f;
          }
          local_8 = (undefined1 *)((int)local_6 + param_2);
          local_6 = (undefined2 *)(local_8 + 1);
        }
        FUN_3ab8_0028();
      }
    }
    local_6 = (undefined2 *)((int)local_6 + 1);
  }
  return 0;
}



/* 3ab8:0e7c  FUN_3ab8_0e7c  147 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0e7c(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  uVar2 = *(undefined2 *)0x9e6a;
  *param_1 = *(undefined2 *)0x9e68;
  param_1[1] = uVar2;
  uVar2 = *(undefined2 *)0x9e6a;
  *param_2 = *(undefined2 *)0x9e68;
  param_2[1] = uVar2;
  do {
    iVar1 = func_0x0002509c(0x22b2,0xbf48,100,*(undefined2 *)0xd70);
    if (iVar1 == 0) {
      *(undefined1 *)0xbf48 = 0;
    }
  } while (*(char *)0xbf48 == '#');
  if (*(char *)0xbf48 == '\0') {
    uVar2 = 0xffff;
  }
  else {
    while (puVar3 = (undefined1 *)func_0x00025a9a(0x22b2,0x2c), puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0x20;
    }
    func_0x000253ce(0x22b2,0xbf48,0x4b45,param_1,param_2);
    uVar2 = 0;
  }
  return uVar2;
}



/* 3ab8:0f0f  FUN_3ab8_0f0f  178 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0f0f(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  uVar3 = *(undefined2 *)0x9e60;
  uVar1 = *(undefined2 *)0x9e62;
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  param_1[7] = uVar1;
  param_1[8] = uVar3;
  param_1[9] = uVar1;
  param_1[10] = uVar3;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar1;
  do {
    iVar2 = func_0x0002509c(0x22b2,0xbf48,100,*(undefined2 *)0xd70);
    if (iVar2 == 0) {
      *(undefined1 *)0xbf48 = 0;
    }
  } while (*(char *)0xbf48 == '#');
  if (*(char *)0xbf48 == '\0') {
    uVar3 = 0xffff;
  }
  else {
    FUN_3ab8_004b(0xbf48);
    func_0x000253ce(0x22b2,0xbf48,0x49fc,param_1 + 2,param_1 + 4,param_1 + 6,param_1 + 8,
                    param_1 + 10,param_1 + 0xc);
    uVar3 = 0;
  }
  return uVar3;
}



/* 3ab8:0fc1  FUN_3ab8_0fc1  175 bytes, 1 callers */

uint __cdecl16far FUN_3ab8_0fc1(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_134 [296];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *local_8;
  undefined1 *local_6;
  undefined1 **ppuStack_4;
  
  ppuStack_4 = (undefined1 **)0x3ab8;
  local_6 = (undefined1 *)0xbb4c;
  FUN_21f2_0ebc();
  ppuStack_4 = &local_6;
  local_6 = param_2;
  local_8 = (undefined1 *)0x22b2;
  uVar2 = 0x22b2;
  uStack_a = 0xbb5d;
  FUN_21f2_3154();
  while( true ) {
    ppuStack_4 = (undefined1 **)param_2;
    local_6 = (undefined1 *)0x12b;
    local_8 = local_134;
    uStack_c = 0xbbbb;
    uStack_a = uVar2;
    iVar1 = func_0x0002509c();
    if (iVar1 == 0) break;
    ppuStack_4 = (undefined1 **)0x4b4a;
    local_6 = local_134;
    local_8 = (undefined1 *)0x22b2;
    uStack_a = 0xbb6f;
    func_0x00012232();
    ppuStack_4 = (undefined1 **)0x4b50;
    local_6 = local_134;
    local_8 = (undefined1 *)0x11f2;
    uStack_a = 0xbb87;
    func_0x00012232();
    ppuStack_4 = (undefined1 **)0x4b56;
    local_6 = local_134;
    local_8 = (undefined1 *)0x11f2;
    uVar2 = 0x11f2;
    uStack_a = 0xbb9f;
    func_0x00012232();
  }
  if (local_8 == (undefined1 *)0x3) {
    *(byte *)(param_1 + 0xdca) = *(byte *)(param_1 + 0xdca) | 0x40;
  }
  ppuStack_4 = &local_6;
  local_6 = param_2;
  local_8 = (undefined1 *)0x22b2;
  uStack_a = 0xbbdc;
  FUN_21f2_32c4();
  return (*(byte *)(param_1 + 0xdca) & 0x40) >> 6;
}



/* 3ab8:1070  FUN_3ab8_1070  931 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_1070(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_6c;
  undefined2 local_4e;
  undefined1 local_4a [6];
  undefined2 local_44;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  iStack_6 = 0xbbfb;
  FUN_21f2_0ebc();
  local_44 = 0;
  local_4 = (undefined1 *)(param_1 + 0xd58);
  iStack_6 = 0xbf48;
  uStack_8 = 0x22b2;
  uStack_a = 0xbc10;
  FUN_21f2_3454();
  local_4 = (undefined1 *)0x254;
  iStack_6 = 0xbf48;
  uStack_8 = 0x22b2;
  uVar5 = 0x22b2;
  uStack_a = 0xbc1f;
  iVar1 = FUN_21f2_1348();
  if (iVar1 == 0) {
    local_4 = (undefined1 *)0x4b5b;
    iStack_6 = 0xe;
    uStack_8 = 0x22b2;
    uStack_a = 0xbc35;
    func_0x000120ec();
    local_4 = (undefined1 *)0x568;
    iStack_6 = 0x11f2;
    uVar5 = 0x11f2;
    uStack_8 = 0xbc40;
    FUN_13bf_0a03();
  }
  iStack_6 = 300;
  uStack_8 = 0xbf48;
  uStack_c = 0xbc51;
  uStack_a = uVar5;
  local_4 = (undefined1 *)iVar1;
  func_0x0002509c();
  iStack_6 = 300;
  uStack_8 = 0xbf48;
  uStack_a = 0x22b2;
  uStack_c = 0xbc64;
  local_4 = (undefined1 *)iVar1;
  func_0x0002509c();
  while( true ) {
    local_4 = (undefined1 *)0xa;
    iStack_6 = 0xbf48;
    uStack_8 = 0x22b2;
    uStack_a = 0xbc7b;
    puVar2 = (undefined1 *)func_0x00025a9a();
    if (puVar2 == (undefined1 *)0x0) break;
    *puVar2 = 0;
  }
  local_4 = (undefined1 *)0xbf48;
  iStack_6 = 0x22b2;
  uStack_8 = 0xbc8d;
  iVar3 = func_0x00024ce4();
  if ((*(char *)(iVar3 + -0x40b9) == 'L') && (*(char *)(iVar3 + -0x40ba) == 'L')) {
    local_4e = 200;
  }
  else {
    local_4e = 0x27;
  }
  iStack_6 = param_1;
  uStack_8 = 0x22b2;
  uStack_a = 0xbcb8;
  local_4 = (undefined1 *)iVar1;
  iVar3 = FUN_3ab8_0fc1();
  if ((iVar3 == 0) && (*(char *)(param_1 + 0xd94) != '\0')) {
    *(int *)0xd70 = iVar1;
    *(undefined2 *)(param_1 + 0x266) = 1;
    local_4 = (undefined1 *)param_1;
    iStack_6 = local_4e;
    uStack_8 = 0x22b2;
    uStack_a = 0xbd01;
    FUN_3ab8_0d7f();
    local_4 = local_4a;
    iStack_6 = param_1 + 0xca;
    uStack_8 = 0x22b2;
    uStack_a = 0xbd12;
    FUN_3ab8_0e7c();
    local_4 = (undefined1 *)(param_1 + 0xce);
    iStack_6 = local_4e;
    uStack_8 = 0x22b2;
    uStack_a = 0xbd22;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x198);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbd33;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x1c0);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbd44;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x290);
    iStack_6 = param_1 + 0x26c;
    uStack_8 = 0x22b2;
    uStack_a = 0xbd58;
    FUN_3ab8_0e7c();
    local_4 = (undefined1 *)(param_1 + 0x2d8);
    iStack_6 = param_1 + 0x2b4;
    uStack_8 = 0x22b2;
    uStack_a = 0xbd6c;
    FUN_3ab8_0e7c();
    local_4 = (undefined1 *)(param_1 + 0x2fc);
    iStack_6 = param_1 + 0x2f8;
    uStack_8 = 0x22b2;
    uStack_a = 0xbd80;
    FUN_3ab8_0e7c();
    cVar4 = (char)((uint)param_1 >> 8);
    local_4 = (undefined1 *)CONCAT11(cVar4 + '\x03',(char)param_1);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbd91;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x32c);
    iStack_6 = param_1 + 0x328;
    uStack_8 = 0x22b2;
    uStack_a = 0xbda5;
    FUN_3ab8_0e7c();
    local_4 = (undefined1 *)(param_1 + 0x330);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbdb6;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x358);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbdc7;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x380);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbdd8;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x3a8);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbde9;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x3d0);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbdfa;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x3f8);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbe0b;
    FUN_3ab8_0d7f();
    local_6c = 1;
    do {
      local_4 = (undefined1 *)(local_6c * 0x28 + param_1 + 0x420);
      iStack_6 = 0x27;
      uStack_8 = 0x22b2;
      uStack_a = 0xbe27;
      FUN_3ab8_0d7f();
      local_4 = (undefined1 *)(local_6c * 0x1c + param_1 + 0x588);
      iStack_6 = 0x22b2;
      uStack_8 = 0xbe3a;
      FUN_3ab8_0f0f();
      local_6c = local_6c + 1;
    } while (local_6c < 9);
    local_4 = (undefined1 *)(param_1 + 0x684);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbe53;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x6e8);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbe64;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x74c);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbe75;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x774);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbe86;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x7a0);
    iStack_6 = param_1 + 0x79c;
    uStack_8 = 0x22b2;
    uStack_a = 0xbe9a;
    FUN_3ab8_0e7c();
    local_4 = (undefined1 *)(param_1 + 0x7ac);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbeab;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x7d4);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbebc;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)CONCAT11(cVar4 + '\b',(char)param_1);
    iStack_6 = param_1 + 0x7fc;
    uStack_8 = 0x22b2;
    uStack_a = 0xbed0;
    FUN_3ab8_0e7c();
    local_4 = (undefined1 *)(param_1 + 0x804);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbee1;
    FUN_3ab8_0d7f();
    local_4 = local_4a;
    iStack_6 = param_1 + 0x82c;
    uStack_8 = 0x22b2;
    uStack_a = 0xbef2;
    FUN_3ab8_0e7c();
    local_4 = (undefined1 *)(param_1 + 0x830);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbf03;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x858);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbf14;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0x922);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbf25;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0xbd6);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbf36;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0xbfe);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbf47;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0xc26);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbf58;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0xcf0);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbf69;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)(param_1 + 0xd18);
    iStack_6 = 0x27;
    uStack_8 = 0x22b2;
    uStack_a = 0xbf7a;
    FUN_3ab8_0d7f();
    local_4 = (undefined1 *)*(undefined2 *)0xd70;
    iStack_6 = 0x22b2;
    uStack_8 = 0xbf85;
    FUN_21f2_1262();
    *(undefined2 *)0xd70 = 0;
  }
  else {
    iStack_6 = param_1;
    uStack_8 = 0x22b2;
    uStack_a = 0xbcd2;
    local_4 = (undefined1 *)iVar1;
    uVar5 = FUN_3ab8_0357();
    iStack_6 = 0x22b2;
    uStack_8 = 0xbce0;
    local_4 = (undefined1 *)iVar1;
    FUN_21f2_1262();
    local_44 = uVar5;
  }
  return local_44;
}



/* 3ab8:1413  FUN_3ab8_1413  63 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_1413(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9)

{
  undefined1 local_16 [4];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  uStack_6 = 0xbf9e;
  FUN_21f2_0ebc();
  uStack_4 = param_9;
  uStack_6 = param_8;
  uStack_8 = param_7;
  uStack_a = param_6;
  puStack_c = (undefined1 *)param_1;
  puStack_e = local_16;
  uStack_10 = 0x22b2;
  uStack_12 = 0xbfb6;
  FUN_21f2_3454();
  uStack_4 = param_5;
  uStack_6 = param_4;
  uStack_8 = param_3;
  uStack_a = param_2;
  puStack_c = local_16;
  puStack_e = (undefined1 *)0x22b2;
  uStack_10 = 0xbfce;
  FUN_1000_02b5();
  return;
}



/* 3ab8:1452  FUN_3ab8_1452  149 bytes, 1 callers */

void __cdecl16far FUN_3ab8_1452(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  iVar2 = param_2 * 4 + param_1;
  uVar1 = *(undefined2 *)(iVar2 + 0x26a);
  *(undefined2 *)(param_1 + 0x268) = *(undefined2 *)(iVar2 + 0x268);
  *(undefined2 *)(param_1 + 0x26a) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x2b2);
  *(undefined2 *)(param_1 + 0x2b0) = *(undefined2 *)(iVar2 + 0x2b0);
  *(undefined2 *)(param_1 + 0x2b2) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x28e);
  *(undefined2 *)(param_1 + 0x28c) = *(undefined2 *)(iVar2 + 0x28c);
  *(undefined2 *)(param_1 + 0x28e) = uVar1;
  uVar1 = *(undefined2 *)(iVar2 + 0x2d6);
  *(undefined2 *)(param_1 + 0x2d4) = *(undefined2 *)(iVar2 + 0x2d4);
  *(undefined2 *)(param_1 + 0x2d6) = uVar1;
  iVar2 = param_1 + param_2 * 7;
  func_0x00024d00(0x22b2,param_1 + 0x227,iVar2 + 0x227,6);
  func_0x00024d00(0x22b2,param_1 + 0x1e8,iVar2 + 0x1e8,6);
  return;
}



/* 3ab8:14e7  FUN_3ab8_14e7  6438 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_14e7(int param_1,byte *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 auStack_13c4 [16];
  char acStack_13b4 [256];
  undefined2 local_12b4 [128];
  undefined2 local_11b4;
  undefined2 local_11b2;
  undefined1 auStack_10b4 [256];
  undefined2 local_fb4;
  undefined2 local_fb2;
  char acStack_fa4 [16];
  undefined2 local_f94;
  undefined1 uStack_f92;
  int local_f8c;
  int local_f88;
  byte *local_f86;
  byte local_f80 [4];
  int local_f7c;
  uint local_f7a;
  byte local_f78 [614];
  byte *local_d12;
  char local_890 [1648];
  byte local_220 [60];
  undefined1 local_1e4;
  int local_1be;
  uint local_1bc;
  int local_1ba;
  uint local_1b8;
  int local_1b6;
  uint local_1b4;
  int local_1b2;
  uint local_1b0;
  byte local_1ae;
  int iStack_1ac;
  byte local_1a6 [4];
  int local_1a2;
  uint local_1a0;
  undefined2 local_19e;
  int local_19c;
  uint local_19a;
  int local_198;
  uint local_196;
  byte *local_194;
  int local_192;
  int local_190;
  uint local_18e;
  int local_18c;
  uint local_18a;
  undefined2 local_188;
  undefined2 local_186;
  byte local_184 [204];
  byte local_b8 [14];
  byte local_aa [14];
  byte *local_9c;
  int local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  byte *local_8e;
  int local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  char *local_86;
  int local_84;
  undefined2 local_82;
  undefined2 local_80;
  byte local_7e [2];
  undefined2 local_7c;
  undefined2 local_7a;
  byte local_78;
  byte local_76 [52];
  uint local_42;
  int local_40;
  byte local_3e [2];
  byte local_3c [2];
  int iStack_3a;
  uint local_38;
  byte *local_32;
  int local_2e;
  byte local_2c [2];
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 uStack_16;
  byte local_14 [2];
  undefined2 *puStack_12;
  undefined2 *puStack_10;
  byte *pbStack_e;
  byte *pbStack_c;
  byte *pbStack_a;
  
  FUN_21f2_0ebc();
  local_42 = 2;
  local_3c[0] = 0x77;
  pbStack_a = local_14;
  pbStack_c = (byte *)0x22b2;
  pbStack_e = (byte *)0xc08a;
  FUN_21f2_3454();
  pbStack_a = local_14;
  pbStack_c = (byte *)0x22b2;
  pbStack_e = (byte *)0xc099;
  FUN_21f2_2d26();
  pbStack_a = local_b8;
  pbStack_c = (byte *)0x22b2;
  pbStack_e = (byte *)0xc0a9;
  FUN_21f2_3454();
  pbStack_a = local_b8;
  pbStack_c = (byte *)0x22b2;
  pbStack_e = (byte *)0xc0b9;
  FUN_21f2_2d26();
  pbStack_a = local_aa;
  pbStack_c = (byte *)0x22b2;
  pbStack_e = (byte *)0xc0c9;
  FUN_21f2_3454();
  pbStack_a = local_aa;
  pbStack_c = (byte *)0x22b2;
  pbStack_e = (byte *)0xc0d9;
  FUN_21f2_2d26();
  local_38 = 0;
  local_19e = 0;
  local_98 = 0;
  local_2e = 0;
  local_8c = 0;
  local_18a = 0;
  local_196 = 0;
  for (local_8e = (byte *)0x0; (int)local_8e < 0xcb; local_8e = (byte *)((int)local_8e + 1)) {
    local_184[(int)local_8e] = 0;
  }
  local_76[0] = 0;
  pbStack_a = local_220;
  pbStack_c = (byte *)0x22b2;
  pbStack_e = (byte *)0xc123;
  func_0x00024c86();
LAB_3ab8_15a5:
  do {
    uVar12 = 0x1b6e;
    pbStack_a = (byte *)0xc12a;
    FUN_1885_2ec3();
    local_1e4 = 1;
    if (local_2e == 0) {
      local_3c[0] = 0x77;
    }
    if (param_1 == 1) {
      pcVar3 = (code *)swi(0x3f);
      iVar4 = (*pcVar3)();
      if (iVar4 != 0) {
        return 0xffff;
      }
      local_76[0] = 0;
    }
    if (param_1 == 2) {
      pbStack_a = local_76;
      pbStack_c = (byte *)0x1b6e;
      uVar12 = 0x22b2;
      pbStack_e = (byte *)0xc165;
      func_0x00024c86();
    }
    do {
      if (param_1 != 3) goto LAB_3ab8_1705;
      local_76[0] = 0;
      pbStack_a = (byte *)0x12;
      pbStack_e = (byte *)0xc181;
      pbStack_c = (byte *)uVar12;
      func_0x00012038();
      pbStack_a = (byte *)0xc188;
      func_0x0001bb4e();
      pbStack_a = (byte *)0x4b6b;
      pbStack_c = (byte *)0x1bb4;
      pbStack_e = (byte *)0xc195;
      func_0x00012276();
      pbStack_a = (byte *)0x49e8;
      pbStack_c = (byte *)0x11f2;
      pbStack_e = (byte *)0xc1a4;
      iVar4 = func_0x00024cb8();
      if (iVar4 == 0) {
LAB_3ab8_163d:
        local_76[0] = 0;
      }
      else {
        pbStack_a = (byte *)0x49ec;
        pbStack_c = (byte *)0x22b2;
        pbStack_e = (byte *)0xc1b7;
        iVar4 = func_0x00024cb8();
        if (iVar4 == 0) goto LAB_3ab8_163d;
      }
      pbStack_a = (byte *)0x1;
      pbStack_c = (byte *)0x19;
      pbStack_e = local_76;
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xc1d6;
      local_f88 = FUN_12c1_03d3();
      pbStack_a = (byte *)0xc1e2;
      func_0x00002cc6();
      pbStack_a = (byte *)0x49e8;
      pbStack_c = (byte *)0x2c1;
      pbStack_e = (byte *)0xc1ef;
      iVar4 = func_0x00024cb8();
      if (iVar4 == 0) {
LAB_3ab8_1688:
        local_76[0] = 0;
      }
      else {
        pbStack_a = (byte *)0x49ec;
        pbStack_c = (byte *)0x22b2;
        pbStack_e = (byte *)0xc202;
        iVar4 = func_0x00024cb8();
        if (iVar4 == 0) goto LAB_3ab8_1688;
      }
      pbStack_a = (byte *)0xc211;
      func_0x0000abfa();
      pbStack_a = (byte *)0xc216;
      func_0x0000ac64();
      uVar12 = 0x885;
      pbStack_a = (byte *)0xc21b;
      func_0x0000a799();
      if (3 < *(byte *)0xb782) {
        pcVar3 = (code *)swi(0x3f);
        (*pcVar3)();
      }
      if (local_f88 < 0) {
        return 0xffff;
      }
      if (*(int *)0x158 != 0) {
        return 0xfff5;
      }
    } while (local_76[0] == 0);
    pbStack_a = (byte *)0xc251;
    func_0x0000c3ca();
    pbStack_a = local_3c;
    pbStack_c = local_76;
    pcVar3 = (code *)swi(0x3f);
    iVar4 = (*pcVar3)();
    if (iVar4 == -1) {
      return 0xffff;
    }
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    func_0x0000c3ca();
    uVar12 = 0x11f2;
    pbStack_a = (byte *)0xc283;
    func_0x000120ec();
LAB_3ab8_1705:
    if (param_1 == 5) {
      pbStack_a = local_76;
      pbStack_e = (byte *)0xc299;
      pbStack_c = (byte *)uVar12;
      func_0x00024c86();
      pbStack_a = local_220;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xc2aa;
      func_0x00024c86();
    }
    pbStack_a = (byte *)0xc2b1;
    func_0x0000c3ca();
    pbStack_a = (byte *)0x885;
    pbStack_c = (byte *)0xc2ba;
    FUN_3ab8_0075();
    pbStack_a = (byte *)0x885;
    pbStack_c = (byte *)0xc2c4;
    local_198 = FUN_3ab8_1070();
    pbVar13 = (byte *)*(uint *)0x62;
    if ((int)local_d12 < (int)*(uint *)0x62) {
      *(uint *)0x62 = (uint)local_d12;
      pbVar13 = local_d12;
    }
    if ((int)pbVar13 < 1) {
      *(undefined2 *)0x62 = 1;
    }
    pbStack_a = local_f78;
    pbStack_c = (byte *)0x885;
    pbStack_e = (byte *)0xc2f1;
    FUN_3ab8_1452();
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
  } while (local_198 == -1);
  pbStack_a = (byte *)0xe;
  pbStack_c = (byte *)0x885;
  pbStack_e = (byte *)0xc315;
  func_0x000120ec();
  pbStack_a = (byte *)0xc320;
  func_0x000297e6();
  pbStack_a = (byte *)0xc325;
  func_0x00029d78();
  pbStack_a = (byte *)0xc32a;
  local_32 = (byte *)FUN_28b3_0f51();
  if ((int)local_32 < 0) {
    local_32 = (byte *)-(int)local_32;
  }
  if ((int)local_32 < 1) {
    local_32 = (byte *)0x1;
  }
  uVar15 = local_32 < (byte *)0xa;
  uVar16 = local_32 == (byte *)0xa;
  if (10 < (int)local_32) {
    local_32 = (byte *)0xa;
  }
LAB_3ab8_17cb:
  pbStack_a = (byte *)0xc350;
  FUN_1885_2ec3();
LAB_3ab8_17d0:
  pbStack_a = (byte *)0xc359;
  func_0x000297e6();
  pbStack_a = (byte *)0xc362;
  func_0x000297e6();
  pbStack_a = (byte *)0xc36b;
  func_0x00029b85();
  pbStack_a = (byte *)0xc374;
  func_0x0002996b();
  pbStack_a = (byte *)0xc379;
  FUN_28b3_1181();
  if ((bool)uVar15) {
LAB_3ab8_1814:
    uVar12 = *(undefined2 *)0x9e76;
    *(undefined2 *)0x52 = *(undefined2 *)0x9e74;
    *(undefined2 *)0x54 = uVar12;
  }
  else {
    pbStack_a = (byte *)0xc384;
    func_0x000297e6();
    pbStack_a = (byte *)0xc38d;
    func_0x000297e6();
    pbStack_a = (byte *)0xc392;
    FUN_28b3_1181();
    if (!(bool)uVar15 && !(bool)uVar16) goto LAB_3ab8_1814;
  }
  pbStack_a = (byte *)0xc3ab;
  func_0x000297e6();
  pbStack_a = (byte *)0xc3b4;
  func_0x000297e6();
  pbStack_a = (byte *)0xc3bd;
  func_0x00029b85();
  pbStack_a = (byte *)0xc3c6;
  func_0x0002996b();
  pbStack_a = (byte *)0xc3cb;
  FUN_28b3_1181();
  if ((bool)uVar15) {
LAB_3ab8_1866:
    uVar12 = *(undefined2 *)0x9e76;
    *(undefined2 *)0x56 = *(undefined2 *)0x9e74;
    *(undefined2 *)0x58 = uVar12;
  }
  else {
    pbStack_a = (byte *)0xc3d6;
    func_0x000297e6();
    pbStack_a = (byte *)0xc3df;
    func_0x000297e6();
    pbStack_a = (byte *)0xc3e4;
    FUN_28b3_1181();
    if (!(bool)uVar15 && !(bool)uVar16) goto LAB_3ab8_1866;
  }
  pbStack_a = (byte *)0xc3fd;
  func_0x000297e6();
  pbStack_a = (byte *)0xc406;
  func_0x000297e6();
  pbStack_a = (byte *)0xc40b;
  FUN_28b3_1181();
  if ((bool)uVar15 || (bool)uVar16) {
    pbStack_a = (byte *)0xc416;
    func_0x000297e6();
    pbStack_a = (byte *)0xc41f;
    func_0x000297e6();
    pbStack_a = (byte *)0xc424;
    FUN_28b3_1181();
    if ((bool)uVar15) goto LAB_3ab8_18a6;
  }
  else {
LAB_3ab8_18a6:
    uVar12 = *(undefined2 *)0x9e76;
    *(undefined2 *)0x5a = *(undefined2 *)0x9e74;
    *(undefined2 *)0x5c = uVar12;
  }
  pbStack_a = (byte *)0xc43d;
  func_0x000297e6();
  pbStack_a = (byte *)0xc446;
  func_0x000297e6();
  pbStack_a = (byte *)0xc44b;
  FUN_28b3_1181();
  if ((bool)uVar15 || (bool)uVar16) {
    pbStack_a = (byte *)0xc456;
    func_0x000297e6();
    pbStack_a = (byte *)0xc45f;
    func_0x000297e6();
    pbStack_a = (byte *)0xc464;
    FUN_28b3_1181();
    if ((bool)uVar15) goto LAB_3ab8_18e6;
  }
  else {
LAB_3ab8_18e6:
    uVar12 = *(undefined2 *)0x9e8a;
    *(undefined2 *)0x5e = *(undefined2 *)0x9e88;
    *(undefined2 *)0x60 = uVar12;
  }
  pbStack_a = (byte *)0xc47d;
  func_0x000297e6();
  pbStack_a = (byte *)0xc486;
  FUN_28b3_100d();
  pbStack_a = (byte *)0xc48f;
  func_0x00029b85();
  pbStack_a = (byte *)0xc498;
  func_0x00029b85();
  pbStack_a = (byte *)0xc4a1;
  func_0x0002996b();
  pbStack_a = (byte *)0xc4a9;
  FUN_28b3_0ee9();
  pbStack_a = (byte *)0xc4b2;
  func_0x000297e6();
  pbStack_a = (byte *)0xc4bb;
  func_0x000297e6();
  pbStack_a = (byte *)0xc4c4;
  FUN_28b3_100d();
  pbStack_a = (byte *)0xc4cd;
  func_0x00029b85();
  pbStack_a = (byte *)0xc4d6;
  func_0x00029b85();
  pbStack_a = (byte *)0xc4df;
  func_0x0002996b();
  pbStack_a = (byte *)0xc4e4;
  FUN_28b3_1181();
  if (!(bool)uVar15) {
    pbStack_a = (byte *)0xc4ef;
    func_0x000297e6();
    pbStack_a = (byte *)0xc4f8;
    func_0x000297e6();
    pbStack_a = (byte *)0xc4fd;
    FUN_28b3_1181();
    if (!(bool)uVar15) goto LAB_3ab8_19a1;
  }
  pbStack_a = (byte *)0x6;
  pbStack_c = (byte *)0x2;
  pbStack_e = (byte *)0x11;
  puStack_10 = (undefined2 *)0x88a;
  puStack_12 = (undefined2 *)0x22b2;
  local_14[0] = 0x18;
  local_14[1] = 0xc5;
  FUN_1000_02b5();
  *(undefined2 *)0xc22 = 1;
LAB_3ab8_19a1:
  pbStack_a = (byte *)0xc52a;
  func_0x000297e6();
  pbStack_a = (byte *)0xc533;
  func_0x00029b85();
  pbStack_a = (byte *)0xc53c;
  func_0x0002996b();
  pbStack_a = (byte *)0xc545;
  func_0x00029983();
  pbStack_a = (byte *)0xc54e;
  func_0x000297e6();
  pbStack_a = (byte *)0xc557;
  func_0x00029b85();
  pbStack_a = (byte *)0xc560;
  func_0x0002996b();
  pbStack_a = (byte *)0xc569;
  func_0x00029bb5();
  pbStack_a = (byte *)0xc572;
  func_0x00029983();
  pbStack_a = (byte *)0xc57b;
  func_0x000297e6();
  pbStack_a = (byte *)0xc584;
  func_0x00029bb5();
  pbVar13 = (byte *)0x22b2;
  pbStack_a = (byte *)0xc58d;
  func_0x00029983();
LAB_3ab8_1a0d:
  if (local_2e == 0) {
    pbStack_a = (byte *)0xc59b;
    FUN_1885_2ec3();
    pbStack_a = (byte *)0x1b6e;
    pbStack_c = (byte *)0xc5a8;
    func_0x000297e6();
    pbStack_a = (byte *)0x22b2;
    pbStack_c = (byte *)0xc5ad;
    func_0x00029d78();
    puStack_12 = (undefined2 *)0x22b2;
    local_14[0] = 0xb7;
    local_14[1] = 0xc5;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x22b2;
    local_14[0] = 0xc0;
    local_14[1] = 0xc5;
    func_0x000297e6();
    puStack_12 = (undefined2 *)0x22b2;
    local_14[0] = 0xc5;
    local_14[1] = 0xc5;
    func_0x00029d78();
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xc5cf;
    func_0x000299d1();
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xc5d8;
    func_0x000297e6();
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xc5dd;
    func_0x00029d78();
    local_22 = 0x22b2;
    local_24 = 0xc5e7;
    func_0x000299d1();
    local_22 = 0x22b2;
    local_24 = 0xc5f0;
    func_0x000297e6();
    local_22 = 0x22b2;
    local_24 = 0xc5f5;
    func_0x00029d78();
    local_2a = 0x22b2;
    local_2c[0] = 0xff;
    local_2c[1] = 0xc5;
    func_0x000299d1();
    local_2a = 0x22b2;
    local_2c[0] = 4;
    local_2c[1] = 0xc6;
    FUN_1885_5284();
    pbStack_a = (byte *)0x4b75;
    pbStack_c = param_2;
    pbStack_e = (byte *)0x1bb4;
    puStack_10 = (undefined2 *)0xc617;
    FUN_21f2_3454();
    pbStack_a = (byte *)0xc623;
    func_0x000297e6();
    pbStack_a = (byte *)0xc62c;
    func_0x000297e6();
    pbStack_a = (byte *)0xc631;
    FUN_28b3_1181();
    pbStack_a = param_2;
    pbStack_c = (byte *)0x22b2;
    pbStack_e = (byte *)0xc644;
    FUN_21f2_2d26();
    pbStack_a = param_2;
    pbStack_c = (byte *)0x22b2;
    pbStack_e = (byte *)0xc652;
    FUN_21f2_2d26();
    if (1 < (int)local_d12) {
      pbStack_a = (byte *)0xffff;
      pbStack_c = (byte *)0x7;
      pbStack_e = (byte *)0x2;
      puStack_10 = (undefined2 *)0x3f;
      puStack_12 = (undefined2 *)0x1de;
      local_14[0] = 0xb2;
      local_14[1] = 0x22;
      uStack_16 = 0xc678;
      FUN_3ab8_1413();
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xc687;
      FUN_21f2_2d26();
      if (*(char *)0x132 != '\0') {
        pbStack_a = param_2;
        pbStack_c = (byte *)0x22b2;
        pbStack_e = (byte *)0xc69c;
        FUN_21f2_2d26();
      }
    }
    pbStack_a = (byte *)0x6;
    pbStack_c = (byte *)0x22b2;
    pbStack_e = (byte *)0xc6aa;
    FUN_1def_07a4();
    pbStack_a = (byte *)0xc6b5;
    func_0x000297e6();
    pbStack_a = (byte *)0xc6ba;
    func_0x00029d78();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xc6c4;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0xffff;
    puStack_12 = (undefined2 *)0x7;
    local_14[0] = 2;
    local_14[1] = 0;
    uStack_16 = 0x26;
    local_18 = (undefined2 *)0x4b91;
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xc6dc;
    FUN_3ab8_1413();
    pbStack_a = (byte *)0xc6e8;
    func_0x000297e6();
    pbStack_a = (byte *)0xc6ed;
    func_0x00029d78();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xc6f7;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0xffff;
    puStack_12 = (undefined2 *)0x7;
    local_14[0] = 2;
    local_14[1] = 0;
    uStack_16 = 0x2e;
    local_18 = (undefined2 *)0x4b99;
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xc70f;
    FUN_3ab8_1413();
    pbStack_a = (byte *)0xffff;
    pbStack_c = (byte *)0x7;
    pbStack_e = (byte *)0x2;
    puStack_10 = (undefined2 *)0x38;
    puStack_12 = (undefined2 *)0x4ba1;
    local_14[0] = 0xb2;
    local_14[1] = 0x22;
    uStack_16 = 0xc72d;
    FUN_3ab8_1413();
    if (*(int *)0xc22 < 1) {
      *(undefined2 *)0xc22 = 1;
    }
    pbStack_a = local_f80;
    pbStack_c = local_1a6;
    pbStack_e = param_2;
    puStack_10 = (undefined2 *)0x270f;
    puStack_12 = (undefined2 *)0x22b2;
    pbVar13 = (byte *)0x1bb4;
    local_14[0] = 0x58;
    local_14[1] = 199;
    local_198 = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    if (local_198 == -1) {
      return 0xffff;
    }
    if (((local_198 == 1) && (*(char *)0x15a == '\0')) && (param_1 != 4)) {
      pbStack_a = local_3e;
      pbStack_c = local_7e;
      pbStack_e = local_2c;
      puStack_10 = (undefined2 *)0x1bb4;
      pbVar13 = (byte *)0x885;
      puStack_12 = (undefined2 *)0xc798;
      func_0x0000dcbd();
      if ((0x30 < local_40) && (*(char *)0x74 != '\x01')) goto LAB_3ab8_1c28;
    }
    if ((local_198 != 1) && (local_84 != 1)) {
      if ((local_198 != 2) && (local_84 != 2)) {
        do {
          if ((local_198 != 3) && (local_198 != 4)) goto LAB_3ab8_1eb7;
          pbStack_a = (byte *)0xc9a1;
          func_0x0000c340();
          pbStack_a = (byte *)0x885;
          pbStack_c = (byte *)0xc9aa;
          func_0x00012276();
          if (local_198 == 3) {
            local_7c = *(undefined2 *)0x5a;
            local_7a = *(undefined2 *)0x5c;
            pbStack_a = (byte *)0x11f2;
            pbStack_c = (byte *)0xc9c8;
            func_0x00012276();
          }
          if (local_198 == 4) {
            local_7c = *(undefined2 *)0x5e;
            local_7a = *(undefined2 *)0x60;
            pbStack_a = (byte *)0x11f2;
            pbStack_c = (byte *)0xc9e6;
            func_0x00012276();
          }
          pbStack_a = (byte *)0x11f2;
          pbStack_c = (byte *)0xc9f0;
          func_0x00012276();
          pbStack_a = (byte *)0xc9f6;
          func_0x00010526();
          local_82 = local_7c;
          local_80 = local_7a;
          pbStack_a = (byte *)0x2e;
          pbStack_c = local_f80;
          pbStack_e = local_1a6;
          puStack_10 = &local_82;
          puStack_12 = &local_7c;
          local_14[0] = 0xef;
          local_14[1] = 0xd;
          pbVar13 = (byte *)0xad;
          uStack_16 = 0xca21;
          local_f86 = (byte *)func_0x000021a4();
          if (*(int *)0x158 != 0) {
            return 0xfff5;
          }
          uVar16 = local_f86 != (byte *)0xffff;
          uVar15 = local_f86 == (byte *)0xffff;
          if ((bool)uVar15) goto LAB_3ab8_1eb7;
          pbStack_a = (byte *)0xca5f;
          func_0x000297e6();
          pbStack_a = (byte *)0xca68;
          func_0x000297e6();
          pbStack_a = (byte *)0xca6d;
          FUN_28b3_1181();
          if ((bool)uVar16 || (bool)uVar15) {
            pbStack_a = (byte *)0xca77;
            func_0x000297e6();
            pbStack_a = (byte *)0xca80;
            func_0x000297e6();
            pbVar13 = (byte *)0x22b2;
            pbStack_a = (byte *)0xca85;
            FUN_28b3_1181();
            if (!(bool)uVar16) goto LAB_3ab8_1f0a;
          }
          pbVar13 = (byte *)0x22b2;
        } while( true );
      }
      pbStack_a = (byte *)0xc8fa;
      func_0x0000c3ca();
      pbStack_a = (byte *)0xc903;
      func_0x000297e6();
      pbStack_a = (byte *)0xc908;
      func_0x00029d78();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xc912;
      func_0x000299d1();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xc91b;
      func_0x000297e6();
      puStack_10 = (undefined2 *)0x22b2;
      puStack_12 = (undefined2 *)0xc920;
      func_0x00029d78();
      local_18 = (undefined2 *)0x22b2;
      local_1a = (undefined2 *)0xc92a;
      func_0x000299d1();
      local_18 = &local_96;
      local_1a = &local_8a;
      pcVar3 = (code *)swi(0x3f);
      iStack_1ac = (*pcVar3)();
      if (*(int *)0x158 != 0) {
        return 0xfff5;
      }
      uVar15 = iStack_1ac == 0;
      uVar16 = iStack_1ac == 1;
      if ((bool)uVar16) {
        pbStack_a = (byte *)0xc95b;
        func_0x000297e6();
        pbStack_a = (byte *)0xc964;
        func_0x00029b6d();
        pbStack_a = (byte *)0xc96d;
        func_0x00029983();
        pbStack_a = (byte *)0xc976;
        func_0x000297e6();
        pbStack_a = (byte *)0xc97f;
        func_0x00029b6d();
        pbStack_a = (byte *)0xc988;
        func_0x00029983();
      }
      goto LAB_3ab8_17d0;
    }
  }
  if ((local_2e == 0) && (param_1 == 4)) {
    pbStack_a = (byte *)0xc7d9;
    FUN_1885_2ec3();
    pbStack_a = (byte *)0x1b6e;
    pbStack_c = (byte *)0xc7e1;
    func_0x0000daa6();
    local_1a = (undefined2 *)CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
    local_18 = (undefined2 *)CONCAT11(local_18._1_1_,*(undefined1 *)0xb310);
    local_2a = local_8a;
    local_28 = local_88;
    local_26 = local_96;
    local_24 = local_94;
    local_22 = local_92;
    local_20 = local_90;
    local_1c = local_94;
    puVar8 = &local_1c;
    puVar9 = &local_1c;
    puVar10 = &local_1c;
    puVar11 = &local_1c;
    puVar7 = &local_2a;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    local_20 = 0xc840;
    FUN_17a6_0cba();
    local_2a = local_92;
    local_28 = local_90;
    local_26 = local_188;
    local_24 = local_186;
    puVar7 = &local_2a;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    local_20 = 0xc873;
    FUN_17a6_0cba();
    local_22 = local_8a;
    local_20 = local_88;
    local_1c = local_186;
    puVar7 = &local_2a;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    local_20 = 0xc8a6;
    FUN_17a6_0cba();
    local_2a = local_8a;
    local_28 = local_88;
    local_26 = local_96;
    local_24 = local_94;
    puVar7 = &local_2a;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar11;
      puVar11 = puVar11 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    local_20 = 0xc8d9;
    FUN_17a6_0cba();
    pbStack_a = (byte *)0xc8e1;
    func_0x0000abfa();
    return 0;
  }
  goto LAB_3ab8_21c4;
LAB_3ab8_1f0a:
  if (local_198 == 3) {
    *(undefined2 *)0x5a = local_7c;
    *(undefined2 *)0x5c = local_7a;
  }
  if (local_198 == 4) {
    *(undefined2 *)0x5e = local_7c;
    *(undefined2 *)0x60 = local_7a;
  }
  if (*(char *)0xd14 == '\0') {
    *(undefined1 *)0xd14 = 0x16;
  }
LAB_3ab8_1eb7:
  do {
    pbVar14 = local_32;
    if (local_198 != 5) break;
    pbStack_a = param_2;
    pbStack_e = (byte *)0xca4d;
    pbStack_c = pbVar13;
    FUN_21f2_3454();
    for (local_f8c = 1; local_f8c < 0xb; local_f8c = local_f8c + 1) {
      pbStack_a = (byte *)0x4bc3;
      pbStack_c = (byte *)&local_f94;
      pbStack_e = (byte *)0x22b2;
      puStack_10 = (undefined2 *)0xcae1;
      FUN_21f2_3454();
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xcaf1;
      FUN_21f2_2d26();
    }
    pbStack_a = param_2;
    pbStack_c = (byte *)0x22b2;
    pbStack_e = (byte *)0xcb01;
    FUN_21f2_2d26();
    pbStack_a = local_f80;
    pbStack_c = local_1a6;
    pbStack_e = param_2;
    puStack_10 = (undefined2 *)0x1;
    puStack_12 = (undefined2 *)0x22b2;
    pbVar13 = (byte *)0x1bb4;
    local_14[0] = 0x1e;
    local_14[1] = 0xcb;
    local_f86 = (byte *)FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    pbVar14 = local_32;
    if ((local_f86 == (byte *)0xffff) ||
       ((0 < (int)local_f86 && (pbVar14 = local_f86, (int)local_f86 < 0xb)))) break;
  } while( true );
LAB_3ab8_1fb7:
  local_32 = pbVar14;
  if (local_198 == 6) {
    pbStack_a = (byte *)0xcb46;
    FUN_1885_2ec3();
    pbStack_a = (byte *)0x1b6e;
    pbStack_c = (byte *)0xcb53;
    func_0x000297e6();
    pbStack_a = (byte *)0x22b2;
    pbStack_c = (byte *)0xcb58;
    func_0x00029d78();
    puStack_12 = (undefined2 *)0x22b2;
    local_14[0] = 0x62;
    local_14[1] = 0xcb;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x22b2;
    local_14[0] = 0x6b;
    local_14[1] = 0xcb;
    func_0x000297e6();
    puStack_12 = (undefined2 *)0x22b2;
    local_14[0] = 0x70;
    local_14[1] = 0xcb;
    func_0x00029d78();
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xcb7a;
    func_0x000299d1();
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xcb83;
    func_0x000297e6();
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xcb88;
    func_0x00029d78();
    local_22 = 0x22b2;
    local_24 = 0xcb92;
    func_0x000299d1();
    local_22 = 0x22b2;
    local_24 = 0xcb9b;
    func_0x000297e6();
    local_22 = 0x22b2;
    local_24 = 0xcba0;
    func_0x00029d78();
    local_2a = 0x22b2;
    local_2c[0] = 0xaa;
    local_2c[1] = 0xcb;
    func_0x000299d1();
    local_2a = 0x22b2;
    local_2c[0] = 0xaf;
    local_2c[1] = 0xcb;
    FUN_1885_5284();
    pbStack_a = param_2;
    pbStack_c = (byte *)0x1bb4;
    pbStack_e = (byte *)0xcbbe;
    func_0x00024c86();
    for (local_f94 = (char *)0x1; (int)local_f94 <= (int)local_d12; local_f94 = local_f94 + 1) {
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xcbfd;
      FUN_21f2_2d26();
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xcc0b;
      FUN_21f2_2d26();
    }
    pbStack_a = local_d12;
    pbStack_c = (byte *)0x22b2;
    pbStack_e = (byte *)0xcc1b;
    FUN_1def_07a4();
    pbStack_a = local_f80;
    pbStack_c = local_1a6;
    pbStack_e = param_2;
    puStack_10 = (undefined2 *)0x270f;
    puStack_12 = (undefined2 *)0x1bb4;
    pbVar13 = (byte *)0x1bb4;
    local_14[0] = 0x38;
    local_14[1] = 0xcc;
    local_f86 = (byte *)FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    if (local_f86 == (byte *)0xffff) goto LAB_3ab8_20ce;
    pbVar14 = local_32;
    if (0 < (int)local_f86) {
      uVar15 = local_d12 < local_f86;
      uVar16 = local_d12 == local_f86;
      if ((int)local_f86 <= (int)local_d12) {
        *(uint *)0x62 = (uint)local_f86;
        goto LAB_3ab8_2130;
      }
    }
    goto LAB_3ab8_1fb7;
  }
LAB_3ab8_20ce:
  if (local_198 == 7) goto LAB_3ab8_20d8;
  goto LAB_3ab8_1a0d;
LAB_3ab8_20d8:
  pbStack_a = local_220;
  pbStack_c = (byte *)0x1078;
  pbStack_e = (byte *)0x4bd5;
  pcVar3 = (code *)swi(0x3f);
  (*pcVar3)();
  uVar15 = (undefined1 *)0xfff7 < &pbStack_a;
  uVar16 = &stack0x0000 == (undefined1 *)0x2;
  *(undefined2 *)0x158 = 0;
  pbVar13 = (byte *)0xdef;
  FUN_1000_0620();
  local_1e4 = 0;
  pbStack_a = (byte *)0xdef;
  pbStack_c = (byte *)0xcc8a;
  FUN_3ab8_0075();
  pbStack_a = (byte *)0xdef;
  pbStack_c = (byte *)0xcc94;
  FUN_3ab8_1070();
LAB_3ab8_2130:
  pbStack_a = local_f78;
  pbStack_e = (byte *)0xccb9;
  pbStack_c = pbVar13;
  FUN_3ab8_1452();
  goto LAB_3ab8_17d0;
LAB_3ab8_24a3:
  uVar15 = iStack_1ac == 0;
  uVar16 = iStack_1ac == 1;
  if ((bool)uVar16) {
    pbStack_a = (byte *)0xd031;
    func_0x000297e6();
    pbStack_a = (byte *)0xd03a;
    func_0x00029b6d();
    pbStack_a = (byte *)0xd043;
    func_0x00029983();
    pbStack_a = (byte *)0xd04c;
    func_0x000297e6();
    pbStack_a = (byte *)0xd055;
    func_0x00029b6d();
    pbStack_a = (byte *)0xd05e;
    func_0x00029983();
  }
  local_2e = -1;
  goto LAB_3ab8_17d0;
LAB_3ab8_21c4:
  if (local_2e < 1) {
    local_38 = 0;
    local_19e = 0;
    pbStack_c = (byte *)0xcd63;
    pbStack_a = pbVar13;
    func_0x000297e6();
    pbStack_a = (byte *)0x22b2;
    pbStack_c = (byte *)0xcd68;
    func_0x00029d78();
    puStack_12 = (undefined2 *)0x22b2;
    local_14[0] = 0x72;
    local_14[1] = 0xcd;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x22b2;
    local_14[0] = 0x7b;
    local_14[1] = 0xcd;
    func_0x000297e6();
    puStack_12 = (undefined2 *)0x22b2;
    local_14[0] = 0x80;
    local_14[1] = 0xcd;
    func_0x00029d78();
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xcd8a;
    func_0x000299d1();
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xcd93;
    func_0x000297e6();
    local_1a = (undefined2 *)0x22b2;
    local_1c = 0xcd98;
    func_0x00029d78();
    local_22 = 0x22b2;
    local_24 = 0xcda2;
    func_0x000299d1();
    local_22 = 0x22b2;
    local_24 = 0xcdab;
    func_0x000297e6();
    local_22 = 0x22b2;
    local_24 = 0xcdb0;
    func_0x00029d78();
    local_2a = 0x22b2;
    local_2c[0] = 0xba;
    local_2c[1] = 0xcd;
    func_0x000299d1();
    local_2a = 0x22b2;
    local_2c[0] = 0xbf;
    local_2c[1] = 0xcd;
    FUN_1885_5284();
    pbStack_a = param_2;
    pbStack_c = (byte *)0x1bb4;
    pbStack_e = (byte *)0xcdce;
    FUN_21f2_3454();
    pbStack_a = param_2;
    pbStack_c = (byte *)0x22b2;
    pbStack_e = (byte *)0xcddc;
    FUN_21f2_2d26();
    pbStack_a = param_2;
    pbStack_c = (byte *)0x22b2;
    pbStack_e = (byte *)0xcdea;
    FUN_21f2_2d26();
    pbStack_a = param_2;
    pbStack_c = (byte *)0x22b2;
    pbStack_e = (byte *)0xcdf8;
    FUN_21f2_2d26();
    pbStack_a = param_2;
    pbStack_c = (byte *)0x22b2;
    pbStack_e = (byte *)0xce06;
    FUN_21f2_2d26();
    if (*(char *)0x74 == '\x01') {
      if (param_1 != 4) {
        pbStack_a = param_2;
        pbStack_c = (byte *)0x22b2;
        pbStack_e = (byte *)0xccd0;
        FUN_21f2_2d26();
        pbStack_a = param_2;
        pbStack_c = (byte *)0x22b2;
        pbStack_e = (byte *)0xccde;
        FUN_21f2_2d26();
        pbStack_a = param_2;
        pbStack_c = (byte *)0x22b2;
        pbStack_e = (byte *)0xccec;
        FUN_21f2_2d26();
        if ((local_1ae & 0x80) != 0) goto LAB_3ab8_2178;
      }
    }
    else {
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xce1e;
      FUN_21f2_2d26();
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xce2c;
      FUN_21f2_2d26();
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xce3a;
      FUN_21f2_2d26();
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xce48;
      FUN_21f2_2d26();
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xce56;
      FUN_21f2_2d26();
LAB_3ab8_2178:
      pbStack_a = param_2;
      pbStack_c = (byte *)0x22b2;
      pbStack_e = (byte *)0xcd01;
      FUN_21f2_2d26();
    }
    pbStack_a = local_f80;
    pbStack_c = local_1a6;
    pbStack_e = param_2;
    puStack_10 = (undefined2 *)0x270f;
    puStack_12 = (undefined2 *)0x22b2;
    pbVar13 = (byte *)0x1bb4;
    local_14[0] = 0x1e;
    local_14[1] = 0xcd;
    local_198 = FUN_1def_0904();
    if (*(char *)0x118 != '\0') {
      *(undefined2 *)0x158 = 0;
      *(undefined1 *)0x118 = 0;
      pbStack_a = (byte *)0x1bb4;
      pbVar13 = (byte *)0x22b2;
      pbStack_c = (byte *)0xcd43;
      func_0x000257c0();
      goto LAB_3ab8_21c4;
    }
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    if (local_198 == -1) {
      local_2e = 0;
      uVar16 = 1;
      uVar15 = 0;
      goto LAB_3ab8_17d0;
    }
    if (((local_198 == 1) && (*(char *)0x15a == '\0')) && (param_1 != 4)) {
      pbStack_a = local_3e;
      pbStack_c = local_7e;
      pbStack_e = local_2c;
      puStack_10 = (undefined2 *)0x1bb4;
      pbVar13 = (byte *)0x885;
      puStack_12 = (undefined2 *)0xce9c;
      func_0x0000dcbd();
      if ((0x30 < local_40) && (*(char *)0x74 != '\x01')) {
LAB_3ab8_1c28:
        local_198 = 4;
        goto LAB_3ab8_2347;
      }
    }
    if (((local_198 == 1) || (local_198 == 0xd)) || (local_84 == 1)) goto LAB_3ab8_2347;
    if ((local_198 == 2) || (local_84 == 2)) {
      pbStack_a = (byte *)0xcf72;
      FUN_1885_2ec3();
      return 0;
    }
    if (local_198 == 3) {
      local_38 = 1;
      goto LAB_3ab8_2347;
    }
    if ((local_198 == 4) && (*(char *)0x74 == '\x01')) {
      local_38 = 2;
      goto LAB_3ab8_2347;
    }
    if (local_198 == 4) goto LAB_3ab8_2347;
    if ((local_198 == 5) && (*(char *)0x74 == '\x01')) {
      local_38 = 3;
      goto LAB_3ab8_2347;
    }
    if (local_198 != 5) goto LAB_3ab8_21c4;
    pbStack_a = (byte *)0xcfcb;
    func_0x0000c3ca();
    pbStack_a = (byte *)0xcfd4;
    func_0x000297e6();
    pbStack_a = (byte *)0xcfd9;
    func_0x00029d78();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xcfe3;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xcfec;
    func_0x000297e6();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined2 *)0xcff1;
    func_0x00029d78();
    local_18 = (undefined2 *)0x22b2;
    pbVar13 = (byte *)0x22b2;
    local_1a = (undefined2 *)0xcffb;
    func_0x000299d1();
    local_18 = &local_96;
    local_1a = &local_8a;
    pcVar3 = (code *)swi(0x3f);
    iStack_1ac = (*pcVar3)();
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    if (iStack_1ac != -1) goto LAB_3ab8_24a3;
    goto LAB_3ab8_21c4;
  }
LAB_3ab8_2347:
  if (((local_2e < 1) && (local_198 == 4)) && (*(char *)0x74 != '\x01')) {
    pbStack_a = (byte *)0xcee3;
    FUN_1885_2ec3();
    pbVar13 = (byte *)0x885;
    pbStack_a = (byte *)0xcee8;
    func_0x0000c3ca();
    local_8c = 0;
    if ((*(char *)0xcf6 == '\0') && ((*(char *)0xd14 == '\0' || (*(char *)0xd14 == '\x16')))) {
      local_8c = 1;
    }
    local_184[0] = 0;
    local_18a = 0;
    local_196 = 0;
    pbStack_a = local_184;
    pcVar3 = (code *)swi(0x3f);
    iStack_3a = (*pcVar3)();
    if (local_184[0] != 0) {
      local_18a = (uint)(local_184[0] % 10);
      local_196 = (uint)(local_184[0] / 10);
    }
    local_184[0] = 0;
    if (*(int *)0x158 != 0) {
      return 0xfff5;
    }
    if ((iStack_3a != -1) && (iStack_3a != 0)) {
      if (iStack_3a == -2) {
        local_2e = -1;
        goto LAB_3ab8_15a5;
      }
      if (iStack_3a == -100) {
        return 0xff9c;
      }
      local_98 = 0;
      local_2e = 1;
      goto LAB_3ab8_303a;
    }
    local_2e = 0;
    goto LAB_3ab8_21c4;
  }
  pbStack_a = (byte *)0xd0a7;
  FUN_1885_2ec3();
  pbStack_a = (byte *)0x1b6e;
  pbStack_c = (byte *)0xd0b4;
  func_0x000297e6();
  pbStack_a = (byte *)0x22b2;
  pbStack_c = (byte *)0xd0b9;
  func_0x00029d78();
  puStack_12 = (undefined2 *)0x22b2;
  local_14[0] = 0xc3;
  local_14[1] = 0xd0;
  func_0x000299d1();
  puStack_12 = (undefined2 *)0x22b2;
  local_14[0] = 0xcc;
  local_14[1] = 0xd0;
  func_0x000297e6();
  puStack_12 = (undefined2 *)0x22b2;
  local_14[0] = 0xd1;
  local_14[1] = 0xd0;
  func_0x00029d78();
  local_1a = (undefined2 *)0x22b2;
  local_1c = 0xd0db;
  func_0x000299d1();
  local_1a = (undefined2 *)0x22b2;
  local_1c = 0xd0e4;
  func_0x000297e6();
  local_1a = (undefined2 *)0x22b2;
  local_1c = 0xd0e9;
  func_0x00029d78();
  local_22 = 0x22b2;
  local_24 = 0xd0f3;
  func_0x000299d1();
  local_22 = 0x22b2;
  local_24 = 0xd0fc;
  func_0x000297e6();
  local_22 = 0x22b2;
  local_24 = 0xd101;
  func_0x00029d78();
  local_2a = 0x22b2;
  local_2c[0] = 0xb;
  local_2c[1] = 0xd1;
  func_0x000299d1();
  local_2a = 0x22b2;
  pbVar13 = (byte *)0x1bb4;
  local_2c[0] = 0x10;
  local_2c[1] = 0xd1;
  FUN_1885_5284();
  if (local_2e == 0) goto LAB_3ab8_25cb;
  pbStack_a = (byte *)0xd11e;
  func_0x0000c3ca();
  pbStack_a = (byte *)0x885;
  pbStack_c = (byte *)0xd127;
  func_0x000121f9();
  while( true ) {
    pbVar13 = (byte *)0xdef;
    pbStack_a = (byte *)0xd13a;
    local_18c = FUN_1000_0632();
    if (local_18c == 0) break;
    if (local_18c == 0x1b) {
      *(undefined2 *)0xa4a = 1;
    }
  }
  if (*(int *)0xa4a == 0) {
LAB_3ab8_25cb:
    if (local_76[0] == 0) {
      *(undefined2 *)0xd70 = 0;
    }
    else {
      uStack_f92 = *(undefined1 *)0x4be2;
      local_f94 = (char *)CONCAT11((char)((uint)*(undefined2 *)0x4be0 >> 8),local_3c[0]);
      pbStack_a = local_76;
      pbStack_e = (byte *)0xd171;
      pbStack_c = pbVar13;
      iVar4 = FUN_21f2_1348();
      *(int *)0xd70 = iVar4;
      if (iVar4 == 0) {
        *(undefined2 *)0xc22 = 2;
        pbStack_a = (byte *)0x19;
        pbStack_c = (byte *)0x22b2;
        pbStack_e = (byte *)0xd18a;
        FUN_1000_0599();
        pbStack_a = (byte *)0xdef;
        pbStack_c = (byte *)0xd195;
        func_0x00012276();
        pbStack_a = (byte *)0x19;
        pbStack_c = (byte *)0x11f2;
        pbStack_e = (byte *)0xd1a3;
        FUN_1000_0599();
        pbStack_a = (byte *)0x4be3;
        pbStack_c = (byte *)0xdef;
        pbStack_e = (byte *)0xd1b2;
        func_0x00012276();
        local_2e = 0;
        goto LAB_3ab8_15a5;
      }
    }
    pbStack_a = (byte *)0xd1c7;
    func_0x0000c3ca();
    local_42 = (uint)*(byte *)0xd14;
    pbStack_a = (byte *)0xd1d8;
    func_0x000297e6();
    pbStack_a = (byte *)0xd1e1;
    func_0x00029b6d();
    pbStack_a = (byte *)0xd1ea;
    func_0x00029b55();
    pbStack_a = (byte *)0xd1f3;
    func_0x00029983();
    pbStack_a = (byte *)0xd1fc;
    func_0x000297e6();
    pbStack_a = (byte *)0xd205;
    func_0x00029b6d();
    pbStack_a = (byte *)0xd20e;
    func_0x00029b55();
    pbStack_a = (byte *)0xd217;
    func_0x00029983();
    pbStack_a = (byte *)0xd220;
    func_0x000297e6();
    pbStack_a = (byte *)0xd229;
    func_0x00029b6d();
    pbStack_a = (byte *)0xd232;
    func_0x00029983();
    pbStack_a = (byte *)0xd23b;
    func_0x000297e6();
    pbStack_a = (byte *)0xd244;
    func_0x00029b6d();
    pbStack_a = (byte *)0xd24d;
    func_0x00029983();
    pbStack_a = (byte *)0xd255;
    FUN_28b3_0d8b();
    pbStack_a = (byte *)0xd25e;
    func_0x00029b6d();
    pbStack_a = (byte *)0xd263;
    func_0x00029d78();
    pbStack_a = (byte *)0xd26c;
    func_0x00029c2c();
    pbStack_a = (byte *)0xd275;
    func_0x00029983();
    pbStack_a = (byte *)0xd27e;
    func_0x000297e6();
    pbStack_a = (byte *)0xd287;
    func_0x00029b85();
    pbStack_a = (byte *)0xd290;
    func_0x0002996b();
    pbStack_a = (byte *)0xd298;
    FUN_28b3_0ee9();
    pbStack_a = (byte *)0xd2a1;
    func_0x000297e6();
    pbStack_a = (byte *)0xd2aa;
    func_0x00029983();
    local_1be = local_190;
    local_1bc = local_18e;
    if ((int)local_18e < 0) {
      local_1be = -local_190;
      local_1bc = -((local_18e & 0x7fff) + (uint)(local_190 != 0));
    }
    pbStack_a = (byte *)0xd2de;
    func_0x000297e6();
    pbStack_a = (byte *)0xd2e7;
    func_0x00029b85();
    pbStack_a = (byte *)0xd2f0;
    func_0x0002996b();
    pbStack_a = (byte *)0xd2f8;
    FUN_28b3_0ee9();
    pbStack_a = (byte *)0xd301;
    func_0x000297e6();
    pbStack_a = (byte *)0xd30a;
    func_0x00029983();
    local_1ba = local_19c;
    local_1b8 = local_19a;
    if ((int)local_19a < 0) {
      local_1ba = -local_19c;
      local_1b8 = -((local_19a & 0x7fff) + (uint)(local_19c != 0));
    }
    pbStack_a = (byte *)0xd33e;
    func_0x000297e6();
    pbStack_a = (byte *)0xd347;
    func_0x00029bb5();
    pbStack_a = (byte *)0xd350;
    func_0x0002996b();
    pbStack_a = (byte *)0xd358;
    FUN_28b3_0ee9();
    pbStack_a = (byte *)0xd361;
    func_0x000297e6();
    pbStack_a = (byte *)0xd36a;
    func_0x00029983();
    local_1b6 = local_1a2;
    local_1b4 = local_1a0;
    if ((int)local_1a0 < 0) {
      local_1b6 = -local_1a2;
      local_1b4 = -((local_1a0 & 0x7fff) + (uint)(local_1a2 != 0));
    }
    pbStack_a = (byte *)0xd39e;
    func_0x000297e6();
    pbStack_a = (byte *)0xd3a7;
    func_0x00029bb5();
    pbStack_a = (byte *)0xd3b0;
    func_0x0002996b();
    pbStack_a = (byte *)0xd3b8;
    FUN_28b3_0ee9();
    pbStack_a = (byte *)0xd3c1;
    func_0x000297e6();
    pbVar13 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd3ca;
    func_0x00029983();
    local_1b2 = local_f7c;
    local_1b0 = local_f7a;
    if ((int)local_f7a < 0) {
      local_1b2 = -local_f7c;
      local_1b0 = -((local_f7a & 0x7fff) + (uint)(local_f7c != 0));
    }
    local_1ae = local_1ae & 0xe0;
    local_86 = local_890;
    for (local_8e = (byte *)0x0; local_86[(int)local_8e] != '\0';
        local_8e = (byte *)((int)local_8e + 1)) {
      local_f94 = local_86 + (int)local_8e;
      if (((*local_f94 == -0x26) && (local_890[(int)local_8e + 1] == '[')) ||
         ((*local_f94 == '[' && (local_890[(int)local_8e + 2] == -0x26)))) {
        local_1ae = local_1ae | 1;
        break;
      }
      if ((*local_f94 == 'l') && (local_890[(int)local_8e + 1] == 'G')) {
        local_1ae = local_1ae | 2;
        break;
      }
    }
    *(undefined2 *)0xa4a = 0;
    pbVar14 = (byte *)*(int *)0x148;
    iVar4 = *(int *)0x14a;
    local_194 = pbVar14;
    local_192 = iVar4;
    if (local_38 == 0) {
      if (*(char *)0x126 == '\0') {
LAB_3ab8_2970:
        pbVar14 = (byte *)*(int *)0x148;
        iVar4 = *(int *)0x14a;
        *(int *)0x148 = (int)local_194;
        *(int *)0x14a = local_192;
        pbStack_c = local_f78;
        pbStack_e = (byte *)0x0;
        pcVar3 = (code *)swi(0x3f);
        pbStack_a = pbVar14;
        (*pcVar3)();
        if ((param_1 == 5) && (*(int *)0xa4a == 0)) {
          pbStack_a = (byte *)0xd534;
          func_0x0002504e();
          *(undefined2 *)0xd70 = 0;
          pbStack_a = (byte *)0xd53f;
          FUN_1885_2ec3();
          pbStack_a = local_aa;
          pbStack_c = local_14;
          pbStack_e = (byte *)0x4be7;
          pcVar3 = (code *)swi(0x3f);
          (*pcVar3)();
          *(undefined2 *)0x158 = 0;
          iVar4 = 0x1b6e;
          pbVar14 = (byte *)0xd563;
          func_0x0000b6ea();
        }
      }
      else {
        local_9c = (byte *)0x0;
        while( true ) {
          if (0xff < (int)local_9c) goto LAB_3ab8_2970;
          pbStack_c = (byte *)0xd498;
          pbStack_a = pbVar13;
          iVar5 = FUN_10ad_1ad0();
          if (iVar5 != 0) break;
LAB_3ab8_2903:
          pbVar13 = (byte *)0x11f2;
          local_9c = local_9c + 1;
        }
        pbStack_a = param_2;
        pbStack_c = (byte *)0x11f2;
        pbStack_e = (byte *)0xd4a9;
        FUN_10ad_20a9();
        if ((*param_2 != 0x23) ||
           ((((local_78 = param_2[1], local_78 != 0x70 && (local_78 != 0x68)) && (local_78 != 0x69))
            && (local_78 != 0x6a)))) goto LAB_3ab8_2903;
        pbStack_a = local_194;
        pbStack_c = local_9c;
        pbStack_e = param_2;
        puStack_10 = (undefined2 *)0x1;
        puStack_12 = (undefined2 *)0x0;
        pcVar3 = (code *)swi(0x3f);
        iVar5 = (*pcVar3)();
        if (iVar5 != -1) goto LAB_3ab8_2903;
        *(undefined2 *)0xa4a = 1;
      }
      pbStack_a = (byte *)0xd568;
      uVar6 = func_0x0000db57();
      if ((uVar6 & 2) != 0) {
        local_194 = pbVar14;
        local_192 = iVar4;
      }
      pbVar13 = (byte *)0x1b6e;
      pbStack_a = (byte *)0xd57f;
      FUN_1885_2ec3();
      *(int *)0x148 = (int)local_194;
      *(int *)0x14a = local_192;
      if ((local_194 != pbVar14) || (local_192 != iVar4)) {
        pbStack_a = (byte *)0x1b6e;
        pbStack_c = (byte *)0xd5a0;
        func_0x0001470b();
        pbVar13 = (byte *)0x885;
        pbStack_a = (byte *)0xd5a6;
        func_0x0000b6ea();
      }
    }
    if (local_38 == 1) {
      pbStack_c = (byte *)0xd5b7;
      pbStack_a = pbVar13;
      func_0x0000b1d8();
      local_8e = (byte *)0x0;
      do {
        acStack_fa4[(int)local_8e] = '\0';
        local_8e = (byte *)((int)local_8e + 1);
      } while ((int)local_8e < 0x10);
      local_8e = (byte *)0x0;
      do {
        uVar6 = (int)local_8e >> 0xf;
        local_f94 = (char *)(((int)(((uint)local_8e ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6);
        if (*(char *)((int)local_8e + 0xb4a6) != '\0') {
          acStack_fa4[(int)local_f94] = '\x01';
        }
        if (*(char *)((int)local_8e + 0xbb78) != '\0') {
          acStack_fa4[(int)local_f94] = '\x01';
        }
        local_8e = (byte *)((int)local_8e + 1);
      } while ((int)local_8e < 0x100);
      local_8e = (byte *)0x0;
      do {
        pbVar13 = local_8e;
        *(undefined1 *)((int)&local_fb4 + (int)local_8e) = *(undefined1 *)((int)local_8e + 0xb7c);
        if ((*(byte *)((int)pbVar13 + 0xb6c) & 1) != 0) {
          *(undefined1 *)((int)pbVar13 + 0xb7c) = 0;
        }
        local_8e = (byte *)((int)local_8e + 1);
      } while ((int)local_8e < 0x10);
      for (local_8e = (byte *)0x0; (int)local_8e < 0x10; local_8e = (byte *)((int)local_8e + 1)) {
        if (*(char *)((int)local_8e + 0xb7c) == '\0') {
          if (((*(byte *)((int)local_8e + 0xb6c) & 1) != 0) && (acStack_fa4[(int)local_8e] != '\0'))
          {
            *(undefined1 *)((int)local_8e + 0xb7c) = 1;
            pbStack_a = (byte *)0xd7a9;
            FUN_1885_2ec3();
            pbStack_a = (byte *)0x1b6e;
            pbStack_c = (byte *)0xd7b1;
            func_0x0001470b();
            pbStack_a = (byte *)0xd7b7;
            func_0x0000b6ea();
            pbStack_a = (byte *)0x885;
            pbStack_c = (byte *)0xd7c4;
            func_0x000297e6();
            pbStack_a = (byte *)0x22b2;
            pbStack_c = (byte *)0xd7c9;
            func_0x00029d78();
            puStack_12 = (undefined2 *)0x22b2;
            local_14[0] = 0xd3;
            local_14[1] = 0xd7;
            func_0x000299d1();
            puStack_12 = (undefined2 *)0x22b2;
            local_14[0] = 0xdc;
            local_14[1] = 0xd7;
            func_0x000297e6();
            puStack_12 = (undefined2 *)0x22b2;
            local_14[0] = 0xe1;
            local_14[1] = 0xd7;
            func_0x00029d78();
            local_1a = (undefined2 *)0x22b2;
            local_1c = 0xd7eb;
            func_0x000299d1();
            local_1a = (undefined2 *)0x22b2;
            local_1c = 0xd7f4;
            func_0x000297e6();
            local_1a = (undefined2 *)0x22b2;
            local_1c = 0xd7f9;
            func_0x00029d78();
            local_22 = 0x22b2;
            local_24 = 0xd803;
            func_0x000299d1();
            local_22 = 0x22b2;
            local_24 = 0xd80c;
            func_0x000297e6();
            local_22 = 0x22b2;
            local_24 = 0xd811;
            func_0x00029d78();
            local_2a = 0x22b2;
            local_2c[0] = 0x1b;
            local_2c[1] = 0xd8;
            func_0x000299d1();
            local_2a = 0x22b2;
            pbVar13 = (byte *)0x1bb4;
            local_2c[0] = 0x20;
            local_2c[1] = 0xd8;
            FUN_1885_5284();
            *(int *)0x148 = (int)local_194;
            *(int *)0x14a = local_192;
            if (*(char *)0x126 != '\0') {
              for (local_9c = (byte *)0x0; (int)local_9c < 0x100; local_9c = local_9c + 1) {
                pbStack_c = (byte *)0xd669;
                pbStack_a = pbVar13;
                iVar4 = FUN_10ad_1ad0();
                if (iVar4 != 0) {
                  pbStack_a = param_2;
                  pbStack_c = (byte *)0x11f2;
                  pbStack_e = (byte *)0xd67a;
                  FUN_10ad_20a9();
                  if ((*param_2 == 0x23) &&
                     ((((local_78 = param_2[1], local_78 == 0x70 || (local_78 == 0x68)) ||
                       (local_78 == 0x69)) || (local_78 == 0x6a)))) {
                    pbStack_a = local_194;
                    pbStack_c = local_9c;
                    pbStack_e = param_2;
                    puStack_10 = (undefined2 *)0x1;
                    puStack_12 = (undefined2 *)0x0;
                    pcVar3 = (code *)swi(0x3f);
                    iVar4 = (*pcVar3)();
                    if (iVar4 == -1) {
                      *(undefined2 *)0xa4a = 1;
                      goto LAB_3ab8_2be1;
                    }
                  }
                }
                pbVar13 = (byte *)0x11f2;
              }
            }
            pbStack_a = (byte *)*(undefined2 *)0x148;
            *(int *)0x148 = (int)local_194;
            *(int *)0x14a = local_192;
            pbStack_c = local_f78;
            pbStack_e = (byte *)0x0;
            pcVar3 = (code *)swi(0x3f);
            (*pcVar3)();
            if ((param_1 == 5) && (*(int *)0xa4a == 0)) {
              pbStack_a = (byte *)0xd706;
              func_0x0002504e();
              *(undefined2 *)0xd70 = 0;
              pbStack_a = (byte *)0xd711;
              FUN_1885_2ec3();
              pbStack_a = local_aa;
              pbStack_c = local_14;
              pbStack_e = (byte *)0x4beb;
              pcVar3 = (code *)swi(0x3f);
              (*pcVar3)();
              *(undefined2 *)0x158 = 0;
              func_0x0000b6ea();
              pbStack_a = local_76;
              pbStack_c = (byte *)0x885;
              pbStack_e = (byte *)0xd742;
              iVar4 = FUN_21f2_1348();
              *(int *)0xd70 = iVar4;
              if (iVar4 == 0) {
                *(undefined2 *)0xa4a = 1;
              }
            }
            *(undefined1 *)((int)local_8e + 0xb7c) = 0;
          }
          if (*(int *)0xa4a != 0) break;
        }
      }
LAB_3ab8_2be1:
      *(int *)0x148 = (int)local_194;
      *(int *)0x14a = local_192;
      for (local_8e = (byte *)0x0; (int)local_8e < 0x10; local_8e = (byte *)((int)local_8e + 1)) {
        *(undefined1 *)((int)local_8e + 0xb7c) = *(undefined1 *)((int)&local_fb4 + (int)local_8e);
      }
      pbStack_a = (byte *)0xd863;
      FUN_1885_2ec3();
      pbStack_a = (byte *)0x1b6e;
      pbStack_c = (byte *)0xd86b;
      func_0x0001470b();
      pbVar13 = (byte *)0x885;
      pbStack_a = (byte *)0xd871;
      func_0x0000b6ea();
    }
    if (local_38 == 2) {
      local_fb4 = *(undefined2 *)0xb310;
      pbStack_c = (byte *)0xd889;
      pbStack_a = pbVar13;
      func_0x0000b1d8();
      local_8e = (byte *)0x0;
      do {
        acStack_13b4[(int)local_8e] = '\0';
        *(undefined1 *)((int)local_12b4 + (int)local_8e) = 0;
        local_8e = (byte *)((int)local_8e + 1);
      } while ((int)local_8e < 0x100);
      local_8e = (byte *)0x0;
      do {
        if (*(char *)((int)local_8e + -0x4b5a) != '\0') {
          acStack_13b4[(int)local_8e] = '\x01';
        }
        if (*(char *)((int)local_8e + -0x4488) != '\0') {
          acStack_13b4[(int)local_8e] = '\x01';
        }
        local_8e = (byte *)((int)local_8e + 1);
      } while ((int)local_8e < 0x100);
      local_8e = (byte *)0x0;
      pbStack_a = (byte *)0x885;
      do {
        pbVar13 = local_8e;
        *(undefined1 *)((int)&local_11b4 + (int)local_8e) = *(undefined1 *)((int)local_8e + -0x4c78)
        ;
        auStack_10b4[(int)local_8e] = *(undefined1 *)((int)local_8e + -0x3e90);
        pbVar14 = pbStack_a;
        if (acStack_13b4[(int)local_8e] != '\0') {
          pbVar14 = (byte *)0x11f2;
          pbStack_c = (byte *)0xd909;
          iVar4 = FUN_10ad_1ad0();
          if (iVar4 != 0) {
            *(undefined1 *)((int)local_12b4 + (int)pbVar13) = 2;
            pbStack_a = (byte *)0x11f2;
            pbVar14 = (byte *)0x11f2;
            pbStack_c = (byte *)0xd919;
            iVar4 = func_0x000125f1();
            if (iVar4 != 0) {
              *(undefined1 *)((int)pbVar13 + -0x4c78) = 0;
              *(undefined1 *)((int)pbVar13 + -0x3e90) = 0;
              *(undefined1 *)((int)local_12b4 + (int)pbVar13) = 1;
            }
          }
        }
        local_8e = (byte *)((int)local_8e + 1);
        pbStack_a = pbVar14;
      } while ((int)local_8e < 0x100);
      for (local_8e = (byte *)0x0; pbVar13 = local_8e, (int)local_8e < 0x100;
          local_8e = local_8e + 1) {
        if ((*(byte *)((int)local_12b4 + (int)local_8e) != 0) &&
           (*(byte *)((int)local_12b4 + (int)local_8e) != 2)) {
          *(undefined2 *)0xb310 = local_8e;
          local_8e[-0x4c78] = 1;
          local_8e[-0x3e90] = 1;
          pbStack_a = (byte *)0xda36;
          FUN_1885_2ec3();
          pbStack_a = (byte *)0x1b6e;
          pbStack_c = (byte *)0xda3e;
          func_0x0001470b();
          pbStack_a = (byte *)0xda44;
          func_0x0000b6ea();
          pbStack_a = (byte *)0x885;
          pbStack_c = (byte *)0xda51;
          func_0x000297e6();
          pbStack_a = (byte *)0x22b2;
          pbStack_c = (byte *)0xda56;
          func_0x00029d78();
          puStack_12 = (undefined2 *)0x22b2;
          local_14[0] = 0x60;
          local_14[1] = 0xda;
          func_0x000299d1();
          puStack_12 = (undefined2 *)0x22b2;
          local_14[0] = 0x69;
          local_14[1] = 0xda;
          func_0x000297e6();
          puStack_12 = (undefined2 *)0x22b2;
          local_14[0] = 0x6e;
          local_14[1] = 0xda;
          func_0x00029d78();
          local_1a = (undefined2 *)0x22b2;
          local_1c = 0xda78;
          func_0x000299d1();
          local_1a = (undefined2 *)0x22b2;
          local_1c = 0xda81;
          func_0x000297e6();
          local_1a = (undefined2 *)0x22b2;
          local_1c = 0xda86;
          func_0x00029d78();
          local_22 = 0x22b2;
          local_24 = 0xda90;
          func_0x000299d1();
          local_22 = 0x22b2;
          local_24 = 0xda99;
          func_0x000297e6();
          local_22 = 0x22b2;
          local_24 = 0xda9e;
          func_0x00029d78();
          local_2a = 0x22b2;
          local_2c[0] = 0xa8;
          local_2c[1] = 0xda;
          func_0x000299d1();
          local_2a = 0x22b2;
          local_2c[0] = 0xad;
          local_2c[1] = 0xda;
          FUN_1885_5284();
          *(int *)0x148 = (int)local_194;
          *(int *)0x14a = local_192;
          if (*(char *)0x126 != '\0') {
            local_9c = pbVar13;
            pbStack_a = param_2;
            pbStack_c = (byte *)0x1bb4;
            pbStack_e = (byte *)0xdad6;
            FUN_10ad_20a9();
            if ((*param_2 == 0x23) &&
               ((((local_78 = param_2[1], local_78 == 0x70 || (local_78 == 0x68)) ||
                 (local_78 == 0x69)) || (local_78 == 0x6a)))) {
              pbStack_a = local_194;
              pbStack_c = local_9c;
              pbStack_e = param_2;
              puStack_10 = (undefined2 *)0x1;
              puStack_12 = (undefined2 *)0x0;
              pcVar3 = (code *)swi(0x3f);
              iVar4 = (*pcVar3)();
              if (iVar4 == -1) {
                *(undefined2 *)0xa4a = 1;
                break;
              }
            }
          }
          pbStack_a = (byte *)*(undefined2 *)0x148;
          *(int *)0x148 = (int)local_194;
          *(int *)0x14a = local_192;
          pbStack_c = local_f78;
          pbStack_e = (byte *)0x0;
          pcVar3 = (code *)swi(0x3f);
          (*pcVar3)();
          if ((param_1 == 5) && (*(int *)0xa4a == 0)) {
            pbStack_a = (byte *)0xd986;
            func_0x0002504e();
            *(undefined2 *)0xd70 = 0;
            pbStack_a = (byte *)0xd991;
            FUN_1885_2ec3();
            pbStack_a = local_aa;
            pbStack_c = local_14;
            pbStack_e = (byte *)0x4bf2;
            pcVar3 = (code *)swi(0x3f);
            (*pcVar3)();
            *(undefined2 *)0x158 = 0;
            func_0x0000b6ea();
            pbStack_a = local_76;
            pbStack_c = (byte *)0x885;
            pbStack_e = (byte *)0xd9c2;
            iVar4 = FUN_21f2_1348();
            *(int *)0xd70 = iVar4;
            if (iVar4 == 0) {
              *(undefined2 *)0xa4a = 1;
            }
          }
          local_8e[-0x4c78] = 0;
          local_8e[-0x3e90] = 0;
        }
        if (*(int *)0xa4a != 0) break;
      }
      *(int *)0x148 = (int)local_194;
      *(int *)0x14a = local_192;
      *(undefined2 *)0xb310 = local_fb4;
      for (local_8e = (byte *)0x0; (int)local_8e < 0x100; local_8e = (byte *)((int)local_8e + 1)) {
        *(undefined1 *)((int)local_8e + -0x4c78) = *(undefined1 *)((int)&local_11b4 + (int)local_8e)
        ;
        *(undefined1 *)((int)local_8e + -0x3e90) = auStack_10b4[(int)local_8e];
      }
      pbStack_a = (byte *)0xdb4e;
      FUN_1885_2ec3();
      pbStack_a = (byte *)0x1b6e;
      pbStack_c = (byte *)0xdb56;
      func_0x0001470b();
      pbStack_a = (byte *)0xdb5c;
      func_0x0000b6ea();
    }
    if (local_38 == 3) {
      pbStack_a = (byte *)*(undefined2 *)0x148;
      *(int *)0x148 = (int)local_194;
      *(int *)0x14a = local_192;
      pbStack_c = local_f78;
      pbStack_e = (byte *)0x1;
      pcVar3 = (code *)swi(0x3f);
      (*pcVar3)();
    }
    *(undefined1 *)0xd14 = (undefined1)local_42;
    pbStack_a = (byte *)0xdba0;
    func_0x0002504e();
    *(undefined2 *)0xd70 = 0;
    pbStack_a = (byte *)0xdbab;
    FUN_1885_2ec3();
    *(int *)0x148 = (int)local_194;
    *(int *)0x14a = local_192;
  }
LAB_3ab8_303a:
  if (local_2e == 0) {
    pbStack_a = (byte *)0xdd87;
    FUN_1885_2ec3();
    *(undefined2 *)0xa4a = 0;
    local_2e = 0;
    local_98 = 0;
    local_8c = 0;
    uVar16 = *(byte *)0x123 == 0x14;
    if (*(byte *)0x123 < 0x14) {
      return 0;
    }
    uVar15 = 0;
    goto LAB_3ab8_17d0;
  }
  if (*(int *)0xa4a == 0) {
    local_12b4[0] = *(undefined2 *)0xb310;
    local_8e = (byte *)0x0;
    do {
      auStack_10b4[(int)local_8e] = *(undefined1 *)((int)local_8e + -0x4c78);
      acStack_13b4[(int)local_8e] = *(char *)((int)local_8e + -0x3e90);
      local_8e = (byte *)((int)local_8e + 1);
    } while ((int)local_8e < 0x100);
    local_8e = (byte *)0x0;
    do {
      auStack_13c4[(int)local_8e] = *(undefined1 *)((int)local_8e + 0xb7c);
      acStack_fa4[(int)local_8e] = *(char *)((int)local_8e + 0xb6c);
      local_8e = (byte *)((int)local_8e + 1);
    } while ((int)local_8e < 0x10);
    local_11b4 = *(undefined2 *)0x52;
    local_11b2 = *(undefined2 *)0x54;
    local_fb4 = *(undefined2 *)0x56;
    local_fb2 = *(undefined2 *)0x58;
    pbStack_a = (byte *)0xdc46;
    FUN_1885_2ec3();
    if (((0 < local_98) && (param_1 < 4)) && (local_76[0] != 0)) {
      local_3c[0] = 0x61;
    }
    local_8e = (byte *)local_98;
    do {
      pbVar13 = local_8e;
      local_8e = (byte *)((int)local_8e + 1);
      if (200 < (int)local_8e) goto LAB_3ab8_3115;
    } while (local_184[(int)pbVar13 + 1] == 0);
    pcVar3 = (code *)swi(0x3f);
    local_98 = (int)local_8e;
    iStack_3a = (*pcVar3)();
    if ((iStack_3a != 0) && (*(int *)0x158 == 0)) {
      pcVar3 = (code *)swi(0x3f);
      iVar4 = (*pcVar3)();
      if (iVar4 == 1) {
        local_38 = 0;
        if (local_184[local_98] == 2) {
          local_38 = 1;
        }
        local_38 = (uint)(local_184[local_98] == 2);
        if (local_18a != 0) {
          *(undefined2 *)0xb310 = local_12b4[0];
          local_8e = (byte *)0x0;
          do {
            *(undefined1 *)((int)local_8e + -0x4c78) = auStack_10b4[(int)local_8e];
            *(char *)((int)local_8e + -0x3e90) = acStack_13b4[(int)local_8e];
            local_8e = (byte *)((int)local_8e + 1);
          } while ((int)local_8e < 0x100);
          local_8e = (byte *)0x0;
          do {
            *(undefined1 *)((int)local_8e + 0xb7c) = auStack_13c4[(int)local_8e];
            *(char *)((int)local_8e + 0xb6c) = acStack_fa4[(int)local_8e];
            local_8e = (byte *)((int)local_8e + 1);
          } while ((int)local_8e < 0x10);
          pbStack_a = (byte *)0x1b6e;
          pbStack_c = (byte *)0xdd44;
          func_0x0001470b();
          pbStack_a = (byte *)0xdd4a;
          func_0x0000b6ea();
        }
        uVar15 = false;
        uVar16 = local_196 == 0;
        if (!(bool)uVar16) {
          *(undefined2 *)0x52 = local_11b4;
          *(undefined2 *)0x54 = local_11b2;
          *(undefined2 *)0x56 = local_fb4;
          *(undefined2 *)0x58 = local_fb2;
        }
        goto LAB_3ab8_17cb;
      }
    }
  }
LAB_3ab8_3115:
  pbStack_a = (byte *)0xdc9a;
  FUN_1885_2ec3();
  *(undefined2 *)0xa4a = 0;
  if (local_8c == 0) {
    pcVar3 = (code *)swi(0x3f);
    (*pcVar3)();
    pcVar3 = (code *)swi(0x3f);
    (*pcVar3)();
  }
  else {
    *(undefined1 *)0xd14 = 0;
    pcVar3 = (code *)swi(0x3f);
    (*pcVar3)();
  }
  return 0;
}



/* 3ab8:322a  FUN_3ab8_322a  753 bytes, 0 callers */

void __cdecl16far FUN_3ab8_322a(char *param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 in_ZF;
  undefined1 local_40 [10];
  undefined1 local_36 [4];
  undefined1 local_32 [4];
  int local_2e;
  undefined1 local_2c [14];
  int local_1e;
  undefined1 local_1c [2];
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  undefined1 local_12 [2];
  undefined2 local_10;
  undefined2 uStack_e;
  char *pcStack_c;
  char *pcStack_a;
  undefined1 *puStack_8;
  int *piStack_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x3ab8;
  piStack_6 = (int *)0xddb5;
  FUN_21f2_0ebc();
  piStack_4 = (int *)0x49f0;
  piStack_6 = &local_10;
  puStack_8 = (undefined1 *)0x22b2;
  pcStack_a = (char *)0xddc2;
  FUN_21f2_3454();
  piStack_4 = (int *)0x4bf8;
  piStack_6 = &local_10;
  puStack_8 = (undefined1 *)0x22b2;
  pcStack_a = (char *)0xddd1;
  FUN_21f2_2d26();
  piStack_4 = (int *)0x49f0;
  piStack_6 = (int *)local_2c;
  puStack_8 = (undefined1 *)0x22b2;
  pcStack_a = (char *)0xdde0;
  FUN_21f2_3454();
  piStack_4 = (int *)0x4bfd;
  piStack_6 = (int *)local_2c;
  puStack_8 = (undefined1 *)0x22b2;
  pcStack_a = (undefined1 *)0xddef;
  FUN_21f2_2d26();
  piStack_4 = (int *)0x22b2;
  piStack_6 = (int *)0xddfa;
  func_0x00029834();
  piStack_4 = (int *)0x22b2;
  piStack_6 = (int *)0xde03;
  func_0x000297e6();
  piStack_4 = (int *)0x22b2;
  piStack_6 = (int *)0xde08;
  func_0x00029d78();
  piStack_4 = (int *)0x22b2;
  puVar4 = (undefined1 *)0x22b2;
  piStack_6 = (int *)0xde0d;
  FUN_28b3_1181();
  if (!(bool)in_CF && !(bool)in_ZF) {
    piStack_4 = (int *)0x22b2;
    piStack_6 = (int *)0xde14;
    func_0x0000b6ea();
    uVar5 = *(undefined2 *)0x9e66;
    *(undefined2 *)0xc30 = *(undefined2 *)0x9e64;
    *(undefined2 *)0xc32 = uVar5;
    uVar5 = *(undefined2 *)0x9e60;
    uVar1 = *(undefined2 *)0x9e62;
    *(undefined2 *)0xc48 = uVar5;
    *(undefined2 *)0xc4a = uVar1;
    *(undefined2 *)0xc4c = uVar5;
    *(undefined2 *)0xc4e = uVar1;
    piStack_4 = (int *)0x0;
    piStack_6 = (int *)0x885;
    puStack_8 = (undefined1 *)0xde3f;
    func_0x0001470b();
    piStack_4 = (int *)0x11f2;
    puVar4 = (undefined1 *)0x885;
    piStack_6 = (int *)0xde45;
    func_0x0000ac64();
  }
LAB_3ab8_32c5:
  uVar5 = 0x1b6e;
  piStack_6 = (int *)0xde4a;
  piStack_4 = (int *)puVar4;
  FUN_1885_2ec3();
  do {
    piStack_4 = (int *)0x4c02;
    piStack_6 = (int *)local_40;
    pcStack_a = (char *)0xde57;
    puStack_8 = (undefined1 *)uVar5;
    FUN_21f2_3454();
    piStack_4 = (int *)0x4c07;
    piStack_6 = (int *)param_1;
    puStack_8 = (undefined1 *)0x22b2;
    pcStack_a = (char *)0xde65;
    FUN_21f2_3454();
    piStack_4 = (int *)local_40;
    piStack_6 = (int *)param_1;
    puStack_8 = (undefined1 *)0x22b2;
    pcStack_a = (char *)0xde73;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x4c10;
    piStack_6 = (int *)param_1;
    puStack_8 = (undefined1 *)0x22b2;
    pcStack_a = (char *)0xde81;
    FUN_21f2_2d26();
    piStack_4 = (int *)local_40;
    piStack_6 = (int *)param_1;
    puStack_8 = (undefined1 *)0x22b2;
    pcStack_a = (char *)0xde8f;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x4c1e;
    piStack_6 = (int *)param_1;
    puStack_8 = (undefined1 *)0x22b2;
    pcStack_a = (char *)0xde9d;
    FUN_21f2_2d26();
    piStack_4 = (int *)local_40;
    piStack_6 = (int *)param_1;
    puStack_8 = (undefined1 *)0x22b2;
    pcStack_a = (char *)0xdeab;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x4c27;
    piStack_6 = (int *)param_1;
    puStack_8 = (undefined1 *)0x22b2;
    uVar5 = 0x22b2;
    pcStack_a = (char *)0xdeb9;
    FUN_21f2_2d26();
    if ((*(char *)0x124 != '\0') && (*(int *)0xc22 == 0)) {
      *(undefined2 *)0xc22 = 1;
      piStack_4 = (int *)0xbf48;
      piStack_6 = (int *)0xe;
      puStack_8 = (undefined1 *)0x22b2;
      uVar5 = 0x11f2;
      pcStack_a = (char *)0xdedc;
      iVar3 = func_0x00012038();
      if (iVar3 != 0) {
        piStack_4 = (int *)0xffff;
        piStack_6 = (int *)0x7;
        puStack_8 = (undefined1 *)0x2;
        pcStack_a = (char *)0x11;
        pcStack_c = (char *)0xbf48;
        uStack_e = 0x11f2;
        uVar5 = 0xdef;
        local_10 = 0xdefb;
        FUN_1000_02b5();
      }
    }
    piStack_4 = (int *)local_2c;
    puStack_8 = (undefined1 *)0xdf06;
    piStack_6 = (int *)uVar5;
    iVar3 = FUN_3ab8_0000();
    if (iVar3 != 0) {
      piStack_4 = &local_10;
      puStack_8 = (undefined1 *)0xdf13;
      piStack_6 = (int *)uVar5;
      iVar3 = FUN_3ab8_0000();
      if (iVar3 != 0) {
        piStack_4 = (int *)0x49f0;
        piStack_6 = (int *)param_1;
        pcStack_a = (char *)0xdf24;
        puStack_8 = (undefined1 *)uVar5;
        FUN_21f2_2d26();
        piStack_4 = (int *)0x4c30;
        piStack_6 = (int *)param_1;
        puStack_8 = (undefined1 *)0x22b2;
        uVar5 = 0x22b2;
        pcStack_a = (char *)0xdf32;
        FUN_21f2_2d26();
      }
    }
    piStack_4 = (int *)param_1;
    piStack_6 = (int *)0x5;
    pcStack_a = (char *)0xdf40;
    puStack_8 = (undefined1 *)uVar5;
    FUN_1def_07a4();
    piStack_4 = &local_1e;
    piStack_6 = (int *)local_36;
    puStack_8 = local_32;
    pcStack_a = param_1;
    pcStack_c = (char *)0x1;
    uStack_e = 0x1bb4;
    local_10 = 0xdf5a;
    local_2e = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_2e == -1) {
      return;
    }
    local_18 = 0;
    piStack_4 = &local_1a;
    piStack_6 = &local_16;
    puStack_8 = local_1c;
    pcStack_a = local_12;
    pcStack_c = (char *)0x1bb4;
    uVar5 = 0x885;
    uStack_e = 0xdf8c;
    func_0x0000dcbd();
    if ((((local_1e == 0) && (*(char *)0x15b != '\0')) && (*(int *)0xa58 < local_16)) &&
       ((0x30 < local_1a && (*(char *)0x124 != '\0')))) {
      local_18 = 1;
    }
    if ((local_1e == 1) || (local_2e == 1)) {
      local_2e = 1;
    }
    if ((local_1e == 2) || (local_2e == 2)) {
      local_2e = 2;
    }
  } while ((local_2e < 1) || (5 < local_2e));
  do {
    *param_1 = '\0';
    puVar4 = (undefined1 *)0x885;
    piStack_6 = (int *)0xdff5;
    piStack_4 = (int *)uVar5;
    func_0x0000c3ca();
    if (local_2e == 5) {
      piStack_4 = (int *)local_2c;
      piStack_6 = (int *)param_1;
      puStack_8 = (undefined1 *)0x885;
      puVar4 = (undefined1 *)0x22b2;
      pcStack_a = (char *)0xe007;
      FUN_21f2_3454();
    }
    else {
      if (local_18 != 0) {
        piStack_4 = (int *)param_1;
        piStack_6 = (int *)0xe;
        puStack_8 = (undefined1 *)0x885;
        puVar4 = (undefined1 *)0x11f2;
        pcStack_a = (undefined1 *)0xe01d;
        func_0x00012038();
      }
      if (*param_1 == '\0') {
        piStack_4 = (int *)0x4c32;
        piStack_6 = (int *)param_1;
        pcVar2 = (code *)swi(0x3f);
        local_14 = (*pcVar2)();
        if (*(int *)0x158 != 0) {
          return;
        }
        if (local_14 == -1) goto LAB_3ab8_32c5;
        puVar4 = (undefined1 *)0x11f2;
        piStack_4 = (int *)0xe081;
        FUN_10ad_18a4();
        if (local_14 != 0) goto LAB_3ab8_32c5;
      }
      else {
        *(undefined2 *)0xc22 = 2;
        piStack_4 = (int *)0x3;
        piStack_6 = (int *)0x11;
        pcStack_a = (char *)0xe03a;
        puStack_8 = puVar4;
        FUN_1000_0599();
        piStack_4 = (int *)0xdef;
        piStack_6 = (int *)0xe041;
        func_0x00010526();
        piStack_4 = (int *)0xffff;
        piStack_6 = (int *)0x7;
        puStack_8 = (undefined1 *)0x3;
        pcStack_a = (char *)0x11;
        pcStack_c = param_1;
        uStack_e = 0xdef;
        puVar4 = (undefined1 *)0xdef;
        local_10 = 0xe059;
        FUN_1000_02b5();
      }
    }
    piStack_4 = (int *)param_1;
    piStack_6 = (int *)local_2e;
    pcStack_a = (undefined1 *)0xe094;
    puStack_8 = puVar4;
    local_14 = FUN_3ab8_14e7();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_14 == -1) goto LAB_3ab8_32c5;
    if (local_14 != -100) {
      return;
    }
    piStack_6 = (int *)0xe0b2;
    piStack_4 = (int *)puVar4;
    func_0x0000c3ca();
    *(undefined1 *)0xd15 = 1;
    piStack_4 = (int *)param_1;
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)();
    *(undefined1 *)0xd15 = 0;
    if (*(int *)0x158 != 0) {
      return;
    }
    piStack_4 = (int *)0x885;
    piStack_6 = (int *)0xe0d9;
    FUN_1000_0599();
    uVar5 = 0xdef;
    func_0x00010526();
    local_18 = 1;
  } while( true );
}



/* 3ab8:356c  FUN_3ab8_356c  961 bytes, 0 callers */

void __cdecl16far FUN_3ab8_356c(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar9;
  undefined2 *local_ac;
  undefined2 *local_aa;
  undefined1 local_a8 [100];
  undefined2 local_44;
  undefined2 local_42;
  undefined2 *local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  int local_3a;
  int local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 *local_18;
  undefined2 *local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 **local_10;
  undefined2 **local_e;
  undefined2 *local_c;
  
  uVar6 = 0x22b2;
  FUN_21f2_0ebc();
  local_16 = (undefined2 *)0xfc19;
  local_3e = param_1[0x6cb];
  local_3c = param_1[0x6cc];
  local_44 = param_1[0x6cd];
  local_42 = param_1[0x6ce];
  local_38 = 0;
LAB_3ab8_35be:
  do {
    local_c = (undefined2 *)0x4c36;
    local_e = (undefined2 **)local_a8;
    local_12 = 0xe154;
    local_10 = (undefined2 **)uVar6;
    FUN_21f2_3454();
    local_c = (undefined2 *)0x22b2;
    local_e = (undefined2 **)0xe161;
    FUN_1000_0599();
    puVar7 = (undefined2 *)0xdef;
    func_0x00010526();
    if (local_38 != 0) {
      puVar7 = (undefined2 *)0x11f2;
      local_c = (undefined2 *)0xe177;
      func_0x00012276();
    }
    local_e = (undefined2 **)0xe185;
    local_c = puVar7;
    FUN_1000_0599();
    local_c = (undefined2 *)0xe191;
    func_0x00012276();
    local_aa = local_16;
    uVar8 = 0x11f2;
    local_ac = local_16;
LAB_3ab8_361d:
    local_c = (undefined2 *)&stack0xfff6;
    local_e = &local_18;
    local_10 = &local_c;
    uVar6 = 0x3bf;
    local_14 = 0xe1b6;
    local_12 = uVar8;
    local_3a = func_0x00006608();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_3a == 99) goto LAB_3ab8_35be;
    if ((local_3a != -1) || (local_38 < 1)) {
      if (local_40 != (undefined2 *)0x0) {
        local_c = local_40;
        local_e = (undefined2 **)0x3bf;
        uVar6 = 0x11f2;
        local_10 = (undefined2 **)0xe252;
        iVar4 = func_0x00015409();
        if (iVar4 != 0) goto LAB_3ab8_36d9;
      }
      if ((local_c != local_aa) || (uVar8 = uVar6, local_18 != local_ac)) {
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029bb5();
        func_0x00029d78();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe2fd;
        func_0x000299d1();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe305;
        func_0x000297e6();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe30d;
        func_0x00029b6d();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe315;
        func_0x00029bb5();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe31a;
        func_0x00029d78();
        local_18 = (undefined2 *)0x22b2;
        uStack_1a = 0xe324;
        func_0x000299d1();
        local_18 = param_1;
        pcVar3 = (code *)swi(0x3f);
        (*pcVar3)();
        FUN_21f2_1878();
        local_aa = local_c;
        uVar8 = 0x22b2;
        local_ac = local_18;
      }
      goto LAB_3ab8_361d;
    }
    local_c = (undefined2 *)0x3bf;
    local_e = (undefined2 **)0xe1e6;
    puVar9 = (undefined2 *)func_0x0000013f();
    puVar5 = (undefined2 *)puVar9;
    puVar7 = &local_2e;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    local_c = (undefined2 *)0xe20f;
    func_0x0000daa6();
    local_c = (undefined2 *)0x885;
    uVar6 = 0x11f2;
    local_e = (undefined2 **)0xe21d;
    func_0x00018779();
    local_38 = local_38 + -1;
    local_14 = local_2a;
LAB_3ab8_36d9:
    do {
      local_c = (undefined2 *)0x4c41;
      local_e = (undefined2 **)local_a8;
      local_12 = 0xe26f;
      local_10 = (undefined2 **)uVar6;
      FUN_21f2_3454();
      local_c = (undefined2 *)0x22b2;
      local_e = (undefined2 **)0xe27c;
      FUN_1000_0599();
      func_0x00010526();
      uVar8 = 0x11f2;
      local_c = (undefined2 *)0xe28d;
      func_0x00012276();
      local_aa = local_16;
LAB_3ab8_3715:
      local_c = &local_32;
      local_e = &local_18;
      local_10 = &local_c;
      uVar6 = 0x3bf;
      local_14 = 0xe2ae;
      local_12 = uVar8;
      local_3a = func_0x00006608();
      if (*(int *)0x158 != 0) {
        return;
      }
    } while (local_3a == 99);
    if (local_3a == -1) {
      uVar6 = 0x1b6e;
      FUN_1885_2ec3();
      goto LAB_3ab8_35be;
    }
    uVar8 = uVar6;
    if (local_40 == (undefined2 *)0x0) {
LAB_3ab8_386f:
      if ((local_c != local_aa) || (local_18 != local_ac)) {
        FUN_1885_2ec3();
        local_c = (undefined2 *)0xe415;
        func_0x000297e6();
        local_c = (undefined2 *)0xe41a;
        func_0x00029d78();
        local_12 = 0x22b2;
        local_14 = 0xe424;
        func_0x000299d1();
        local_12 = 0x22b2;
        local_14 = 0xe42c;
        func_0x000297e6();
        local_12 = 0x22b2;
        local_14 = 0xe431;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        local_1c = 0xe43b;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        local_1c = 0xe443;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        local_1c = 0xe448;
        func_0x00029d78();
        local_22 = 0x22b2;
        local_24 = 0xe452;
        func_0x000299d1();
        local_22 = 0x22b2;
        local_24 = 0xe45a;
        func_0x000297e6();
        local_22 = 0x22b2;
        local_24 = 0xe45f;
        func_0x00029d78();
        local_2a = 0x22b2;
        local_2c = 0xe469;
        func_0x000299d1();
        local_2a = 0x22b2;
        local_2c = 0xe46e;
        func_0x0001e18f();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029bb5();
        func_0x00029d78();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe498;
        func_0x000299d1();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe4a0;
        func_0x000297e6();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe4a8;
        func_0x00029b6d();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe4b0;
        func_0x00029bb5();
        local_10 = (undefined2 **)0x22b2;
        local_12 = 0xe4b5;
        func_0x00029d78();
        local_18 = (undefined2 *)0x22b2;
        uStack_1a = 0xe4bf;
        func_0x000299d1();
        local_18 = param_1;
        pcVar3 = (code *)swi(0x3f);
        (*pcVar3)();
        uVar8 = 0x22b2;
        FUN_21f2_1878();
        local_aa = local_c;
        local_ac = local_18;
      }
      goto LAB_3ab8_3715;
    }
    local_c = local_40;
    local_e = (undefined2 **)0x3bf;
    local_10 = (undefined2 **)0xe374;
    iVar4 = func_0x00015409();
    uVar8 = 0x11f2;
    if (iVar4 == 0) goto LAB_3ab8_386f;
    FUN_1885_2ec3();
    local_1c = CONCAT11(local_1c._1_1_,*(undefined1 *)0xb310);
    local_2e = 0xe380;
    local_2c = 0x11f2;
    local_2a = local_14;
    local_28 = local_12;
    local_26 = local_32;
    local_24 = local_30;
    local_22 = local_36;
    local_20 = local_34;
    local_c = (undefined2 *)0xe3ca;
    func_0x0000daa6();
    puVar5 = &local_1c;
    puVar7 = &local_2e;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar9;
    }
    uVar6 = 0x11f2;
    local_20 = 0xe3df;
    iVar4 = FUN_17a6_0cba();
    if (iVar4 != 0) {
      local_38 = local_38 + 1;
    }
  } while( true );
}


