/* 1000:0446 */

/* WARNING: Instruction at (ram,0x00010800) overlaps instruction at (ram,0x000107fe)
    */

void FUN_1000_0446(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 in_CX;
  int iVar8;
  int in_BX;
  uint uVar9;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar10;
  uint auStack_77 [52];
  undefined2 uStack_e;
  int local_c;
  undefined2 local_a;
  undefined2 uStack_8;
  int local_6;
  int local_4;
  
  local_4 = 0x1000;
  local_6 = 0x451;
  FUN_32b2_02bc();
  *(byte *)0xbe98 = *(byte *)0xbe98 & 0xf8;
  local_4 = param_3;
  local_6 = param_2;
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  *(int *)(&stack0x0059 + unaff_DI) = *(int *)(&stack0x0059 + unaff_DI) + in_BX;
  local_4 = 0xc0b0;
  local_6 = 0x32b2;
  uStack_8 = 0x46c;
  FUN_32b2_2ca0();
  uVar7 = *(undefined2 *)0xc0b2;
  *(undefined2 *)0xb5b6 = *(undefined2 *)0xc0b0;
  *(undefined2 *)0xb5b8 = uVar7;
  local_4 = 0x32b2;
  local_6 = 0x480;
  FUN_1def_0074();
  local_4 = 0;
  local_6 = 0;
  uStack_8 = 0;
  local_a = 3;
  local_c = 0x1def;
  uStack_e = 0x494;
  FUN_1def_13db();
  local_4 = 3;
  local_6 = 0x1def;
  uStack_8 = 0x4a0;
  FUN_1def_13e3();
  local_4 = 0x1202;
  local_6 = 0xc13f;
  uStack_8 = 0x1def;
  local_a = 0x4ae;
  FUN_32b2_2166();
  local_4 = 0x31;
  local_6 = 0xc13f;
  uStack_8 = 0x32b2;
  local_a = 0x4bd;
  FUN_32b2_44fe();
  local_4 = 0xc13f;
  local_6 = 0x90;
  uStack_8 = 0x32b2;
  local_a = 0x4cc;
  FUN_32b2_2166();
  local_4 = 0x86;
  local_6 = 0xb2fe;
  uStack_8 = 0x32b2;
  local_a = 0x4db;
  FUN_32b2_2166();
  local_4 = 0x254;
  local_6 = 0x1206;
  uStack_8 = 0x32b2;
  local_a = 0x4ea;
  iVar5 = FUN_32b2_0748();
  if (iVar5 != 0) {
    local_4 = 0x1210;
    local_6 = 0x32b2;
    uStack_8 = 0x4f9;
    FUN_32b2_43a0();
  }
  local_4 = 0x32b2;
  local_6 = 0x4ff;
  FUN_32b2_252e();
  local_4 = 0;
  local_6 = 0x32b2;
  uStack_8 = 0x507;
  FUN_1def_2716();
  local_4 = 0x1def;
  local_6 = 0x50d;
  FUN_1def_2730();
  local_4 = 0x1def;
  local_6 = 0x512;
  FUN_12c1_000a();
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3f);
  bVar2 = (*pcVar1)();
  bVar2 = 0x99 < bVar2;
  pcVar1 = (code *)swi(0x3f);
  bVar3 = (*pcVar1)();
  cVar4 = (char)in_CX;
  (&stack0xfffe)[unaff_DI] =
       (&stack0xfffe)[unaff_DI] + cVar4 + (bVar3 < 0x68 || (byte)(bVar3 + 0x98) < bVar2);
  *(char *)(unaff_DI + 3) = *(char *)(unaff_DI + 3) << 3;
  iVar5 = CONCAT11((char)((uint)in_CX >> 8) + cVar4,cVar4);
  FUN_1def_2716();
  FUN_1def_2730();
  *(undefined2 *)0xb310 = 0;
  for (local_6 = 0; local_6 < 0x100; local_6 = local_6 + 1) {
    *(undefined1 *)(local_6 + -0x3e90) = 1;
    *(undefined1 *)(local_6 + -0x4c78) = 1;
    *(undefined1 *)(local_6 + -0x3d6e) = 0;
    *(undefined1 *)(local_6 + -0x4996) = 0;
  }
  iVar8 = 0x21f2;
  iVar6 = FUN_32b2_33be();
  if ((iVar6 == -1) && (iVar8 == -1)) {
    FUN_32b2_075e();
    FUN_32b2_236c();
  }
  iVar8 = 0x21f2;
  iVar6 = FUN_32b2_33be();
  do {
    if ((iVar6 == -1) && (iVar8 == -1)) {
      FUN_32b2_075e();
      FUN_32b2_236c();
    }
    iVar8 = 0x21f2;
    iVar6 = FUN_32b2_33be();
    bVar2 = iVar6 != -1;
    if (iVar6 != -1) goto LAB_1000_05ff;
    bVar2 = iVar8 != -1;
    if (iVar8 != -1) goto LAB_1000_05ff;
    while( true ) {
      FUN_32b2_075e();
      FUN_32b2_236c();
LAB_1000_05ff:
      FUN_32b2_4c9e();
      uVar9 = 0x21f2;
      pcVar1 = (code *)swi(0x3f);
      uVar10 = (*pcVar1)();
      iVar8 = (int)((ulong)uVar10 >> 0x10);
      bVar3 = (byte)uVar10 - 5;
      cVar4 = bVar3 - bVar2;
      iVar6 = CONCAT11((char)((ulong)uVar10 >> 8),cVar4);
      bVar2 = CARRY2(uVar9,*(uint *)((int)auStack_77 + unaff_DI)) ||
              CARRY2(uVar9 + *(uint *)((int)auStack_77 + unaff_DI),
                     (uint)((byte)uVar10 < 5 || bVar3 < bVar2));
      if (iVar5 != 0) break;
      *(char *)0x507a = cVar4;
    }
  } while (iVar5 == 0);
  FUN_32b2_6e4b();
  FUN_32b2_707d();
  FUN_32b2_6e63();
  local_c = *(int *)0x1b3e - *(int *)0xa5c;
  FUN_32b2_6d9b();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_7187();
  FUN_32b2_6e63();
  local_6 = *(undefined2 *)0x116c;
  FUN_13bf_137e();
  FUN_32b2_2ca0();
  if ((*(char *)0x124 == '(') || (*(char *)0x124 == '<')) {
    *(undefined1 *)0xb782 = 4;
  }
  else {
    *(undefined1 *)0xb782 = 0;
  }
  FUN_32b2_336e();
  if (*(int *)0x112 == 1) {
    *(undefined2 *)0x112 = 0;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  *(undefined2 *)0xc728 = 0xffff;
  *(undefined2 *)0xbee2 = 0xffff;
  if (*(int *)0xc2a != 0) {
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  if (*(int *)0xc08 != 0) {
    FUN_1def_13e3();
  }
  *(undefined1 *)0xc168 = 0;
  FUN_1885_3b7a();
  if (*(byte *)0xb782 < 4) {
    FUN_1885_1f75();
    local_4 = 1;
    local_6 = 0;
    uStack_8 = 0x1885;
    local_a = 0x70d;
    FUN_2bb4_0730();
    *(undefined2 *)0xc08 = 0;
    *(undefined2 *)0xc04 = 0;
    *(undefined2 *)0xbc0 = 1;
  }
  else {
    *(undefined2 *)0xa62 = 0x22;
  }
  if (0 < local_4) {
    local_4 = 0x739;
    uVar7 = FUN_32b2_0748();
    *(undefined2 *)0xd70 = uVar7;
    FUN_32b2_252e();
    *(undefined2 *)0xd70 = 0;
  }
  local_4 = local_4 + 1;
  *(undefined2 *)0xc728 = 0xffff;
  *(undefined2 *)0xbee2 = 0xffff;
  if ((0x28 < local_4) && (*(int *)0xa62 != 0x1e)) {
    *(undefined2 *)0xc22 = 2;
    local_4 = 0x775;
    FUN_1def_26a9();
    local_4 = 0x784;
    FUN_21f2_0356();
  }
  if (*(byte *)0xb782 < 4) {
    FUN_10ad_0f45();
    if (*(char *)0x118 != '\0') {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    FUN_1885_3364();
  }
  if ((((*(int *)0xa62 == 0xd) || (*(int *)0xa62 == 0xe)) || (*(int *)0xa62 == 0xf)) ||
     ((*(int *)0xa62 == 0x1c || (*(int *)0xa62 == 0x1e)))) {
    *(undefined1 *)0xc13e = 1;
  }
  else {
    *(undefined1 *)0xc13e = 0;
  }
  if ((*(char *)0x124 != '\0') && (*(int *)0xc22 == 0)) {
    FUN_17a6_000a();
  }
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  FUN_1000_0a81();
  return;
}


