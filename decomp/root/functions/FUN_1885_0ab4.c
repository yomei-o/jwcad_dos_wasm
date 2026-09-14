/* 1885:0ab4 */

void __cdecl16far FUN_1885_0ab4(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int unaff_DI;
  undefined2 ****ppppuVar6;
  undefined2 uVar7;
  undefined2 ****ppppuVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_10;
  undefined2 ***local_e;
  int *local_c;
  undefined2 ***local_a;
  undefined2 ****local_8;
  undefined2 ***local_6;
  
  ppppuVar6 = (undefined2 ****)0x32b2;
  local_6 = (undefined2 ***)0x930f;
  FUN_32b2_02bc();
LAB_1885_0ac0:
  local_6 = (undefined2 ***)0x12f;
  local_8 = (undefined2 ****)(*(int *)0xa5c + -2);
  local_a = (undefined2 ***)0x32;
  local_c = (int *)0x2;
  local_10 = -0x6cda;
  local_e = ppppuVar6;
  FUN_1885_1f1b();
  local_6 = (undefined2 ***)0x0;
  local_8 = (undefined2 ****)0x0;
  local_a = (undefined2 ***)0x2;
  local_c = (int *)0x7;
  local_e = (undefined2 ***)0x40;
  local_10 = *(int *)0xa5c + -1;
  FUN_1def_1460(1,0x31);
  local_6 = (undefined2 ***)0x0;
  local_8 = (undefined2 ****)0x0;
  local_a = (undefined2 ***)0x1;
  local_c = (int *)0x7;
  local_e = (undefined2 ***)0x120;
  local_10 = -(1 - *(int *)0xa5c);
  uVar7 = 0x1def;
  FUN_1def_1460(1,0x40);
  local_e = (undefined2 ***)0x5;
  do {
    local_6 = local_e;
    local_8 = (undefined2 ****)0x2;
    local_c = (int *)0x9386;
    local_a = (undefined2 ***)uVar7;
    FUN_1def_26a9();
    local_6 = (undefined2 ***)0x187c;
    local_8 = (undefined2 ****)0x1def;
    uVar7 = 0x21f2;
    local_a = (undefined2 ***)0x9391;
    FUN_21f2_0356();
    local_e = (undefined2 ***)((int)local_e + 1);
  } while ((int)local_e < 0x14);
  local_6 = (undefined2 ***)0x0;
  local_8 = (undefined2 ****)0x0;
  local_a = (undefined2 ***)0x4;
  *(undefined2 *)0xb6a = 2;
  local_c = (int *)0x2;
  local_e = (undefined2 ***)0x188b;
  local_10 = 0x21f2;
  FUN_1def_23c5();
  local_e = (undefined2 ***)0x0;
  do {
    local_6 = (undefined2 ***)((int)local_e + 5);
    local_8 = (undefined2 ****)0x2;
    local_a = (undefined2 ***)0x1def;
    local_c = (int *)0x93cc;
    FUN_1def_26a9();
    local_6 = (undefined2 ***)((int)local_e + 1);
    local_8 = (undefined2 ****)0x1899;
    local_a = (undefined2 ***)0x1def;
    local_c = (int *)0x93dc;
    FUN_21f2_0356();
    if (*(char *)0xa4c != '\0') {
      local_6 = (undefined2 ***)((int)local_e + 5);
      local_8 = (undefined2 ****)0xf;
      local_a = (undefined2 ***)0x21f2;
      local_c = (int *)0x93f5;
      FUN_1def_26a9();
      local_10 = *(int *)((int)local_e * 2 + 0xa72);
      local_6 = (undefined2 ***)(uint)*(byte *)(local_10 + 0xa4e);
      local_8 = (undefined2 ****)0x18a0;
      local_a = (undefined2 ***)0x1def;
      local_c = (int *)0x9413;
      FUN_21f2_0356();
    }
    local_6 = (undefined2 ***)0x0;
    local_8 = (undefined2 ****)0x0;
    local_a = (undefined2 ***)0x2;
    local_c = (int *)*(undefined2 *)((int)local_e * 2 + 0xa72);
    iVar2 = (int)local_e * 0x10;
    local_e = (undefined2 ***)(iVar2 + 0x4e);
    local_10 = 0x6e;
    FUN_1def_1460(0x40,iVar2 + 0x43);
    local_e = (undefined2 ***)((int)local_e + 1);
  } while ((int)local_e < 6);
  local_e = (undefined2 ***)0x1;
  do {
    local_6 = (undefined2 ***)0x0;
    local_8 = (undefined2 ****)*(undefined2 *)((int)local_e * 2 + 0xa88);
    local_a = (undefined2 ***)0x3;
    local_c = (int *)0x7;
    local_e = (undefined2 ***)((int)local_e * 0x10 + 0x98);
    local_10 = 0x6e;
    FUN_1def_1460(0x40,local_e);
    local_6 = local_e + 5;
    local_8 = (undefined2 ****)0x2;
    local_a = (undefined2 ***)0x1def;
    ppppuVar6 = (undefined2 ****)0x1def;
    local_c = (int *)0x9498;
    FUN_1def_26a9();
    if (local_e == (undefined2 ***)0x1) {
      local_6 = (undefined2 ***)0x18a3;
      local_8 = (undefined2 ****)0x1def;
      ppppuVar6 = (undefined2 ****)0x21f2;
      local_a = (undefined2 ***)0x94a9;
      FUN_21f2_0356();
    }
    ppppuVar8 = ppppuVar6;
    if ((1 < (int)local_e) && ((int)local_e < 5)) {
      local_6 = (undefined2 ***)0x18aa;
      ppppuVar8 = (undefined2 ****)0x21f2;
      local_a = (undefined2 ***)0x94bf;
      local_8 = ppppuVar6;
      FUN_21f2_0356();
    }
    if ((local_e == (undefined2 ***)0x5) || (ppppuVar6 = ppppuVar8, local_e == (undefined2 ***)0x6))
    {
      local_6 = (undefined2 ***)0x18b1;
      ppppuVar6 = (undefined2 ****)0x21f2;
      local_a = (undefined2 ***)0x94d5;
      local_8 = ppppuVar8;
      FUN_21f2_0356();
    }
    if ((local_e == (undefined2 ***)0x7) || (ppppuVar8 = ppppuVar6, local_e == (undefined2 ***)0x8))
    {
      local_6 = (undefined2 ***)0x18b8;
      ppppuVar8 = (undefined2 ****)0x21f2;
      local_a = (undefined2 ***)0x94eb;
      local_8 = ppppuVar6;
      FUN_21f2_0356();
    }
    if (local_e == (undefined2 ***)0x9) {
      local_6 = (undefined2 ***)0x18bf;
      local_a = (undefined2 ***)0x94fb;
      local_8 = ppppuVar8;
      FUN_21f2_0356();
    }
    local_e = (undefined2 ***)((int)local_e + 1);
  } while ((int)local_e < 10);
  local_6 = (undefined2 ***)0x0;
  local_8 = (undefined2 ****)0x0;
  local_a = (undefined2 ***)0x1;
  local_c = (int *)0x7;
  local_e = (undefined2 ***)0x120;
  local_10 = -(1 - *(int *)0xa5c);
  uVar7 = 0x1def;
  FUN_1def_1460(1,0x40);
LAB_1885_0cdf:
  local_8 = (undefined2 ****)0x9533;
  local_6 = (undefined2 ***)uVar7;
  FUN_1885_3af0();
  local_8 = (undefined2 ****)0x9538;
  local_6 = (undefined2 ***)uVar7;
  FUN_1def_2636();
  local_6 = (undefined2 ***)0x1;
  local_8 = (undefined2 ****)0x14;
  local_a = (undefined2 ***)0x1def;
  local_c = (int *)0x9545;
  FUN_1def_26a9();
  local_6 = (undefined2 ***)0x33c;
  local_8 = (undefined2 ****)0x1de;
  local_a = (undefined2 ***)0x1def;
  ppppuVar6 = (undefined2 ****)0x21f2;
  local_c = (int *)0x9554;
  FUN_21f2_0356();
LAB_1885_0fab:
  local_6 = (undefined2 ***)&local_c;
  local_8 = &local_8;
  local_a = &local_e;
  local_c = &local_10;
  local_10 = -0x67f1;
  local_e = ppppuVar6;
  FUN_1885_546d();
  local_6 = ppppuVar6;
  if (((*(int *)0x158 != 0) || (*(int *)0xa5c < (int)local_8)) || (0x140 < (int)local_c)) {
    ppppuVar8 = ppppuVar6;
    if (*(char *)0xb9e != '\0') {
      *(undefined1 *)0xb9e = 0;
      *(undefined2 *)0xbc0 = 1;
      local_8 = (undefined2 ****)0x9832;
      FUN_1885_1f49();
      local_6 = (undefined2 ***)0x0;
      ppppuVar8 = (undefined2 ****)0x21f2;
      local_a = (undefined2 ***)0x983a;
      local_8 = ppppuVar6;
      FUN_21f2_27eb();
    }
    local_6 = (undefined2 ***)0x12f;
    local_8 = (undefined2 ****)(*(int *)0xa5c + -2);
    local_a = (undefined2 ***)0x34;
    local_c = (int *)0x2;
    local_10 = -0x67af;
    local_e = ppppuVar8;
    FUN_1885_1f1b();
    local_8 = (undefined2 ****)0x9858;
    local_6 = ppppuVar8;
    FUN_1885_1f49();
    return;
  }
  local_8 = (undefined2 ****)0x9578;
  uVar3 = FUN_1def_2742();
  uVar3 = uVar3 & 0xff00;
  if (((*(char *)0x126 != '\0') && (0x61ff < (int)uVar3)) && ((int)uVar3 < 0x6901)) {
    if (*(int *)0xa6c < 10) {
      local_6 = (undefined2 ***)0x0;
      local_8 = (undefined2 ****)0x7;
      local_a = (undefined2 ***)(*(int *)0xa6c + 10);
      local_c = (int *)0x8;
      local_e = (undefined2 ****)0x18c6;
      local_10 = 0x1def;
      FUN_1def_23c5();
    }
    uVar5 = (int)(uVar3 + 0x9f00) >> 0xf;
    *(int *)0xa6c = (((int)((uVar3 + 0x9f00 ^ uVar5) - uVar5) >> 8 ^ uVar5) - uVar5) + 10;
    local_6 = (undefined2 ***)0x1def;
    local_8 = (undefined2 ****)0x95d0;
    FUN_1885_2ba3();
  }
  if ((undefined2 ****)local_a != (undefined2 ****)0x0) {
    local_6 = (undefined2 ***)0x0;
    local_8 = (undefined2 ****)0x7;
    local_a = (undefined2 ***)(*(int *)0xa6a + 4);
    local_c = (int *)0x8;
    local_e = (undefined2 ***)0x18c8;
    local_10 = 0x1def;
    FUN_1def_23c5();
    if (*(int *)0xa6c < 10) {
      local_6 = (undefined2 ***)0x0;
      local_8 = (undefined2 ****)0x7;
      local_a = (undefined2 ***)(*(int *)0xa6c + 10);
      local_c = (int *)0x8;
      local_e = (undefined2 ***)0x18ca;
      local_10 = 0x1def;
      FUN_1def_23c5();
    }
    local_6 = (undefined2 ***)0xffff;
    local_8 = (undefined2 ****)0x7;
    local_a = (undefined2 ***)0x40;
    local_c = (int *)*(undefined2 *)0xa5c;
    local_e = (undefined2 ***)0x40;
    local_10 = 0;
    FUN_1def_0000();
    local_6 = (undefined2 ***)0xffff;
    local_8 = (undefined2 ****)0x7;
    local_a = (undefined2 ***)0x120;
    local_c = (int *)*(undefined2 *)0xa5c;
    local_e = (undefined2 ***)0x120;
    local_10 = 0;
    FUN_1def_0000();
    local_6 = (undefined2 ***)0xffff;
    local_8 = (undefined2 ****)0x7;
    local_a = (undefined2 ***)0x131;
    local_c = (int *)*(undefined2 *)0xa5c;
    local_e = (undefined2 ***)0x131;
    local_10 = 0;
    FUN_1def_0000();
    local_6 = (undefined2 ***)0xffff;
    local_8 = (undefined2 ****)0x7;
    local_a = (undefined2 ***)0x130;
    local_c = (int *)*(undefined2 *)0xa5c;
    local_e = (undefined2 ***)0x130;
    local_10 = 0;
    FUN_1def_0000();
  }
LAB_1885_0e40:
  do {
    local_6 = (undefined2 ***)&local_c;
    local_8 = &local_8;
    local_a = &local_e;
    local_c = &local_10;
    local_e = (undefined2 ***)0x1def;
    local_10 = -0x6953;
    FUN_1885_546d();
    if (local_e != (undefined2 ***)0x0) {
      if (local_10 == 0) goto LAB_1885_0e40;
    }
    if ((local_e != (undefined2 ***)0x0) || (local_10 == 0)) break;
  } while( true );
  uVar3 = (int)((int)local_c - 0x41U) >> 0xf;
  bVar4 = 4;
  iVar2 = (((int)(((int)local_c - 0x41U ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3) + 1;
  if ((local_e != (undefined2 ***)0x0) && (((local_10 != 0 && (0 < iVar2)) && (iVar2 < 7)))) {
    local_6 = (undefined2 ***)0x0;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
    (&stack0xfffe)[unaff_DI] = (&stack0xfffe)[unaff_DI] | bVar4;
    local_6 = (undefined2 ***)*(undefined2 *)(iVar2 * 2 + 0xa70);
    local_8 = (undefined2 ****)0x1;
    local_a = (undefined2 ***)0x1def;
    local_c = (int *)0x9711;
    FUN_1def_141b();
    do {
      do {
        local_6 = (undefined2 ***)&local_c;
        local_8 = &local_8;
        local_a = &local_e;
        local_c = &local_10;
        local_e = (undefined2 ***)0x1def;
        local_10 = -0x68d9;
        FUN_1885_546d();
      } while (local_e != (undefined2 ***)0x0);
    } while (local_10 != 0);
    local_6 = (undefined2 ***)0x0;
  }
  ppppuVar6 = (undefined2 ****)0x1def;
  if ((local_6 != (undefined2 ***)0x0) && ((int)local_c < 0x40)) {
    *(char *)0xa4c = '\x01' - *(char *)0xa4c;
    goto LAB_1885_0ac0;
  }
  if (((local_6 == (undefined2 ***)0x0) || ((int)local_c < 0x41)) || ((iVar2 < 1 || (0xf < iVar2))))
  goto LAB_1885_0fab;
  local_a = (undefined2 ***)0x1;
  if (iVar2 < 7) {
    local_6 = (undefined2 ***)0x0;
    local_8 = (undefined2 ****)0x7;
    local_a = (undefined2 ***)(*(int *)0xa6a + 4);
    local_c = (int *)0x8;
    local_e = (undefined2 ***)0x18cc;
    local_10 = 0x1def;
    iVar2 = -0x6869;
    FUN_1def_23c5();
    *(int *)0xa6a = iVar2;
  }
  else {
    if (*(int *)0xa6c < 10) {
      local_6 = (undefined2 ***)0x0;
      local_8 = (undefined2 ****)0x7;
      local_a = (undefined2 ***)(*(int *)0xa6c + 10);
      local_c = (int *)0x8;
      local_e = (undefined2 ***)0x18ce;
      local_10 = 0x1def;
      iVar2 = -0x683c;
      FUN_1def_23c5();
    }
    *(int *)0xa6c = iVar2 + -6;
  }
  ppppuVar6 = (undefined2 ****)0x1def;
  local_6 = (undefined2 ***)0x1def;
  local_8 = (undefined2 ****)0x97d4;
  FUN_1885_2ba3();
  local_6 = (undefined2 ***)0x1def;
  local_8 = (undefined2 ****)0x97d8;
  FUN_1885_1f49();
  if (((local_6 != (undefined2 ***)0x2) || (6 < iVar2)) || (param_1 != 0)) goto LAB_1885_0fab;
  *(undefined1 *)0xb9e = 1;
  local_6 = (undefined2 ***)0x0;
  local_8 = (undefined2 ****)0x1def;
  uVar7 = 0x21f2;
  local_a = (undefined2 ***)0x97f7;
  FUN_21f2_27eb();
  goto LAB_1885_0cdf;
}


