/* Ghidra decompilation of jw06.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  43 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0000(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_21f2_3454(param_1,0x8c2);
  *(undefined1 *)(param_1 + 1) = 100;
  *(undefined1 *)(param_1 + 2) = 0x69;
  *(undefined1 *)(param_1 + 3) = 0x72;
  return;
}



/* 3ab8:002b  FUN_3ab8_002b  144 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_002b(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 local_2c [26];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0xabb6;
  FUN_21f2_0ebc();
  puStack_6 = local_2c;
  iStack_8 = 0x22b2;
  uStack_a = 0xabbf;
  FUN_3ab8_0000();
  puStack_6 = (undefined1 *)param_1;
  iStack_8 = 0x22b2;
  uStack_a = 0xabc8;
  iVar1 = func_0x00024ce4();
  iStack_8 = param_1;
  uStack_a = 0x22b2;
  uStack_c = 0xabdb;
  puStack_6 = (undefined1 *)(iVar1 + -1);
  iVar2 = func_0x0002aa38();
  if (((iVar2 == 0) && (*(char *)(param_1 + iVar1 + -1) == '.')) || (iVar1 < 0x29)) {
    uVar3 = 0;
  }
  else {
    *(undefined2 *)0xc22 = 2;
    puStack_6 = (undefined1 *)0x3;
    iStack_8 = 0x11;
    uStack_a = 0x2a75;
    uStack_c = 0xac06;
    FUN_1000_0599();
    puStack_6 = (undefined1 *)0xdef;
    iStack_8 = 0xac0d;
    func_0x00010526();
    puStack_6 = (undefined1 *)0x1dc;
    iStack_8 = 0xdef;
    uStack_a = 0xac16;
    func_0x00012276();
    puStack_6 = (undefined1 *)0xffff;
    iStack_8 = 2;
    uStack_a = 3;
    uStack_c = 0x37;
    puStack_e = local_2c;
    uStack_10 = 0x11f2;
    uStack_12 = 0xac30;
    FUN_1000_02b5();
    uVar3 = 1;
  }
  return uVar3;
}



/* 3ab8:00bb  FUN_3ab8_00bb  188 bytes, 1 callers */

void __cdecl16far FUN_3ab8_00bb(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  int iVar5;
  undefined2 **local_6;
  
  local_6 = (undefined2 **)0xac46;
  FUN_21f2_0ebc();
  iVar5 = 0;
  iVar3 = 0x22b2;
  do {
    iVar5 = iVar5 * 4;
    uVar1 = *(undefined2 *)(iVar5 + 0xb2c);
    local_6 = &local_6;
    func_0x000088e3();
    *(int *)(iVar5 + 0xb2a) = (int)local_6;
    *(undefined2 *)(iVar5 + 0xb2c) = uVar1;
    iVar5 = iVar3 + 1;
    iVar3 = 0x885;
  } while (iVar5 < 0x10);
  local_6 = (undefined2 **)0x885;
  func_0x000297e6();
  uVar2 = (int)*(uint *)0xb310 >> 0xf;
  uVar4 = (((int)((*(uint *)0xb310 ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2 & 0x3fff) == 0;
  local_6 = (undefined2 **)0x22b2;
  func_0x000297e6();
  local_6 = (undefined2 **)0x22b2;
  func_0x0002996b();
  local_6 = (undefined2 **)0x22b2;
  FUN_28b3_1181();
  if (!(bool)uVar4) {
    local_6 = (undefined2 **)0x22b2;
    func_0x000297e6();
    local_6 = (undefined2 **)0x22b2;
    func_0x00029983();
    *(undefined2 *)0xc22 = 1;
    local_6 = (undefined2 **)0xffff;
    FUN_1000_02b5(0x2c31,0x14,2,6);
  }
  return;
}



/* 3ab8:0177  FUN_3ab8_0177  259 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0177(int param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_68;
  uint local_64;
  undefined2 local_5e [40];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  
  FUN_21f2_0ebc();
  while (local_64 = param_2 - 1, local_64 != 0) {
    for (local_68 = 0; param_2 = local_64, local_68 < local_64; local_68 = local_68 + 1) {
      puVar3 = (undefined2 *)(local_68 * 0x5c + param_1);
      puVar8 = puVar3 + 0x2e;
      if ((*(byte *)(puVar3 + 0x2a) & 0x10) == 0) {
        puStack_a = puVar3 + 0x30;
        uStack_c = 0x22b2;
        uStack_e = 0xad49;
        iVar4 = func_0x00024cb8();
        if (iVar4 < 0) {
          puVar7 = local_5e;
          puVar6 = puVar3;
          for (iVar4 = 0x2e; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
          puVar7 = puVar8;
          puVar6 = puVar3;
          for (iVar4 = 0x2e; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          puVar7 = local_5e;
          puVar6 = puVar8;
          for (iVar4 = 0x2e; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
        }
        puStack_a = (undefined2 *)0xbf48;
        uStack_c = 0x22b2;
        uStack_e = 0xad86;
        func_0x00024c86();
        puStack_a = (undefined2 *)0xbf48;
        uStack_c = 0x22b2;
        uStack_e = 0xad95;
        puVar5 = (undefined1 *)func_0x00025b06();
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
        puStack_a = (undefined2 *)0xbf48;
        uStack_c = 0x22b2;
        uStack_e = 0xadb0;
        iVar4 = func_0x00024cb8();
        if (iVar4 == 0) {
          puVar7 = local_5e;
          puVar6 = puVar3;
          for (iVar4 = 0x2e; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
          puVar7 = puVar8;
          for (iVar4 = 0x2e; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar3;
            puVar3 = puVar3 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          puVar3 = local_5e;
          for (iVar4 = 0x2e; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar3;
            puVar3 = puVar3 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
    }
  }
  return;
}



/* 3ab8:027a  FUN_3ab8_027a  264 bytes, 1 callers */

void __cdecl16far FUN_3ab8_027a(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_68;
  uint local_64;
  uint local_5e [40];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  while (local_64 = param_2 - 1, local_64 != 0) {
    for (local_68 = 0; param_2 = local_64, local_68 < local_64; local_68 = local_68 + 1) {
      puVar3 = (uint *)(local_68 * 0x5c + param_1);
      puVar8 = puVar3 + 0x2e;
      if ((puVar3[0x2a] & 0x10) == 0) {
        if ((puVar3[1] <= puVar3[0x2f]) && ((puVar3[1] < puVar3[0x2f] || (*puVar3 < *puVar8)))) {
          puVar6 = local_5e;
          puVar7 = puVar3;
          for (iVar5 = 0x2e; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          puVar6 = puVar8;
          puVar7 = puVar3;
          for (iVar5 = 0x2e; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
          puVar6 = local_5e;
          puVar7 = puVar8;
          for (iVar5 = 0x2e; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
        }
        uStack_c = 0x22b2;
        uStack_e = 0xae8e;
        func_0x00024c86();
        uStack_c = 0x22b2;
        uStack_e = 0xae9d;
        puVar4 = (undefined1 *)func_0x00025b06();
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 0;
        }
        uStack_c = 0x22b2;
        uStack_e = 0xaeb8;
        iVar5 = func_0x00024cb8();
        if (iVar5 == 0) {
          puVar6 = local_5e;
          puVar7 = puVar3;
          for (iVar5 = 0x2e; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          puVar6 = puVar8;
          for (iVar5 = 0x2e; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar3;
            puVar3 = puVar3 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar2 = *puVar1;
          }
          puVar3 = local_5e;
          for (iVar5 = 0x2e; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar3;
            puVar3 = puVar3 + 1;
            *puVar2 = *puVar1;
          }
        }
      }
    }
  }
  return;
}



/* 3ab8:0382  FUN_3ab8_0382  115 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0382(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  uint in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  
  FUN_21f2_0ebc();
  puVar1 = (undefined2 *)(param_1 * 0x5c + param_2);
  func_0x00024d00(0x22b2,puVar1 + 2,&stack0x0026,0xd);
  *puVar1 = in_stack_0000001e;
  puVar1[1] = in_stack_00000020;
  puVar1[0x2b] = in_stack_00000022;
  puVar1[0x2c] = in_stack_00000024;
  *(undefined1 *)(puVar1 + 0x2a) = in_stack_0000001c._1_1_;
  *(undefined1 *)((int)puVar1 + 0x33) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)(puVar1 + 0x2d) = 0;
  if (((in_stack_0000001c & 0x1000) == 0) && ((in_stack_0000001c & 0x100) != 0)) {
    *(undefined1 *)(param_2 + param_1 * 0x5c + 0x5a) = 1;
  }
  return;
}



/* 3ab8:03f5  FUN_3ab8_03f5  431 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_03f5(undefined2 param_1,byte *param_2,byte param_3,int *param_4,undefined2 param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_46 [6];
  undefined2 uStack_3a;
  undefined2 uStack_38;
  int iStack_36;
  undefined2 uStack_32;
  int local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  undefined2 uStack_e;
  byte *local_c;
  uint local_a;
  
  FUN_21f2_0ebc();
  uVar2 = *(undefined2 *)0x975e;
  local_a = *param_2 - 0x40;
  local_c = (byte *)0x22b2;
  uStack_e = 0xafa2;
  iVar4 = func_0x0002776e();
  if (iVar4 == 0) {
    local_a = 0xafc1;
    func_0x00029da5();
    local_a = 0xafda;
    func_0x00029da5();
    local_a = 0xafdf;
    func_0x00029c9d();
    local_a = 0xaff8;
    func_0x00029da5();
    local_a = 0xaffd;
    func_0x00029c9d();
    local_a = 0xb005;
    func_0x000299d1();
  }
  local_a = 0;
  uStack_e = 0;
  local_10 = 0;
  local_14 = param_5;
  local_16 = 0x22b2;
  local_18 = 0xb01d;
  local_12 = uVar2;
  local_c = (byte *)uVar2;
  func_0x0002267f();
  local_1a = *param_4;
  *(int *)0xb386 = local_1a;
  local_a = (uint)param_3;
  local_c = param_2;
  uStack_e = 0x1bb4;
  local_10 = -0x4fb5;
  iVar4 = func_0x000276d7();
  if (iVar4 == 0) {
    if ((param_3 != 0) && ((param_3 & uStack_32._1_1_) == 0)) goto LAB_3ab8_0508;
    if (local_10 <= local_1a) goto LAB_3ab8_0505;
    do {
      iStack_36 = local_1a;
      puVar7 = &uStack_32;
      puVar6 = local_46;
      for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar3 = *puVar1;
      }
      uStack_38 = 0x22b2;
      uStack_3a = 0xb082;
      FUN_3ab8_0382();
LAB_3ab8_0505:
      local_1a = local_1a + 1;
LAB_3ab8_0508:
      *(int *)0xb386 = local_1a;
      while( true ) {
        do {
          local_a = 0x22b2;
          local_c = (byte *)0xb10e;
          iVar4 = func_0x000276cc();
          if (iVar4 != 0) {
            *param_4 = local_1a;
            return;
          }
        } while ((param_3 != 0) && ((param_3 & uStack_32._1_1_) == 0));
        if (local_1a < local_10) break;
        local_a = 0xbf48;
        local_c = (byte *)0x22b2;
        uStack_e = 0xb0b3;
        func_0x00024c86();
        local_a = 0xbf48;
        local_c = (byte *)0x22b2;
        uStack_e = 0xb0c2;
        puVar5 = (undefined1 *)func_0x00025b06();
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
        local_a = 0xbf48;
        local_c = (byte *)0x22b2;
        uStack_e = 0xb0dd;
        iVar4 = func_0x00024cb8();
        if (iVar4 == 0) {
          puVar7 = &uStack_32;
          puVar6 = local_46;
          for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar3 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar6;
            puVar6 = puVar6 + 1;
            *puVar3 = *puVar1;
          }
          iStack_36 = local_1a + -1;
          uStack_38 = 0x22b2;
          uStack_3a = 0xb0fe;
          FUN_3ab8_0382();
        }
        *(int *)0xb386 = *(int *)0xb386 + 1;
      }
    } while( true );
  }
  return;
}



/* 3ab8:05a4  FUN_3ab8_05a4  961 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_05a4(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_9a;
  int local_98;
  int local_96;
  uint local_94;
  undefined1 local_92 [30];
  undefined1 local_74 [14];
  undefined1 local_66 [50];
  undefined1 local_34 [32];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  int iStack_a;
  int *piStack_8;
  
  FUN_21f2_0ebc();
  iVar1 = param_2 * 0x5c + param_1;
  *(undefined1 *)(iVar1 + 0x12) = 0x20;
  *(undefined1 *)(iVar1 + 0x13) = 0;
  *(undefined1 *)(iVar1 + 0x33) = 0x20;
  *(undefined1 *)(iVar1 + 0x34) = 0;
  if (*(char *)0x123 != '\0') {
    piStack_8 = (int *)0x2c3a;
    iStack_a = param_2 * 0x5c + param_1 + 4;
    puStack_c = (undefined1 *)0x22b2;
    puStack_e = (undefined1 *)0xb16e;
    iVar1 = func_0x00025bc2();
    if (iVar1 == 0) {
      piStack_8 = (int *)0x2c3f;
      iStack_a = param_2 * 0x5c + param_1 + 4;
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xb18a;
      iVar1 = func_0x00025bc2();
      if (iVar1 == 0) {
        iVar1 = param_2 * 0x5c + param_1;
        if ((*(byte *)(iVar1 + 0x54) & 0x10) == 0) {
          piStack_8 = (int *)(param_2 * 0x5c + param_1 + 4);
          iStack_a = param_3;
          puStack_c = (undefined1 *)0xbf48;
          puStack_e = (undefined1 *)0x22b2;
          uStack_10 = 0xb35d;
          func_0x0001263c();
          piStack_8 = (int *)0xd12;
          iStack_a = 0;
          puStack_c = (undefined1 *)0xbf48;
          puStack_e = (undefined1 *)0x11f2;
          uVar2 = 0x22b2;
          uStack_10 = 0xb370;
          iVar1 = func_0x00027724();
          if (iVar1 != 0) {
            piStack_8 = (int *)0x568;
            iStack_a = 0x2c6e;
            puStack_c = local_34;
            puStack_e = (undefined1 *)0x22b2;
            uStack_10 = 0xb388;
            FUN_21f2_3454();
            piStack_8 = (int *)local_34;
            iStack_a = 0x22b2;
            uVar2 = 0x11f2;
            puStack_c = (undefined1 *)0xb394;
            FUN_13bf_0a03();
          }
          piStack_8 = &local_96;
          iStack_a = 200;
          puStack_c = (undefined1 *)*(undefined2 *)0xbc78;
          puStack_e = (undefined1 *)0xbf48;
          uStack_10 = *(undefined2 *)0xd12;
          uVar3 = 0x22b2;
          uStack_14 = 46000;
          uStack_12 = uVar2;
          iVar1 = FUN_21f2_581c();
          if (iVar1 != 0) {
            piStack_8 = (int *)0x2c77;
            iStack_a = 0x22b2;
            uVar3 = 0x11f2;
            puStack_c = (undefined1 *)0xb3c0;
            FUN_13bf_0a03();
          }
          *(undefined1 *)(local_96 + -0x40b8) = 0;
          piStack_8 = (int *)0x14;
          iStack_a = 0x5b6;
          puStack_c = (undefined1 *)0xbf48;
          uStack_10 = 0xb3db;
          puStack_e = (undefined1 *)uVar3;
          iVar1 = func_0x00024d28();
          if (iVar1 == 0) {
            piStack_8 = (int *)0x20;
            iStack_a = 0xbf70;
            param_1 = param_2 * 0x5c + param_1;
            puStack_c = (undefined1 *)(param_1 + 0x12);
            puStack_e = (undefined1 *)0x22b2;
            uStack_10 = 0xb400;
            func_0x00024d00();
            *(undefined1 *)(param_1 + 0x32) = 0;
            piStack_8 = (int *)0x20;
            iStack_a = 0xbf90;
            puStack_c = (undefined1 *)(param_1 + 0x33);
            puStack_e = (undefined1 *)0x22b2;
            uStack_10 = 0xb418;
            func_0x00024d00();
            *(undefined1 *)(param_1 + 0x53) = 0;
          }
          else {
            local_94 = CONCAT11(local_94._1_1_,0x20);
            local_98 = 0;
            do {
              if (*(char *)(local_98 + -0x40b8) == '\0') {
                local_94 = local_94 & 0xff00;
              }
              if ((*(byte *)(local_98 + -0x40b8) < 0x20) || ((char)local_94 == '\0')) {
                *(char *)(local_98 + -0x40b8) = (char)local_94;
              }
              local_98 = local_98 + 1;
            } while (local_98 < 0x40);
            piStack_8 = (int *)0x20;
            iStack_a = 0xbf48;
            puStack_c = (undefined1 *)0x22b2;
            puStack_e = (undefined1 *)0xb46b;
            iVar1 = func_0x0002aa38();
            if (iVar1 == 2) {
              local_9a = 0x1f;
            }
            else {
              local_9a = 0x20;
            }
            piStack_8 = (int *)local_9a;
            iStack_a = 0xbf48;
            iVar1 = param_2 * 0x5c + param_1;
            puStack_c = (undefined1 *)(iVar1 + 0x12);
            puStack_e = (undefined1 *)0x2a75;
            uStack_10 = 0xb4a2;
            func_0x00024d00();
            *(undefined1 *)(param_1 + param_2 * 0x5c + local_9a + 0x12) = 0;
            piStack_8 = (int *)0x20;
            iStack_a = local_9a + -0x40b8;
            puStack_c = (undefined1 *)(iVar1 + 0x33);
            puStack_e = (undefined1 *)0x22b2;
            uStack_10 = 0xb4c5;
            func_0x00024d00();
            *(undefined1 *)(iVar1 + 0x53) = 0;
          }
          piStack_8 = (int *)*(undefined2 *)0xd12;
          iStack_a = 0x22b2;
          puStack_c = (undefined1 *)0xb4d5;
          func_0x000276be();
          *(undefined2 *)0xd12 = 0;
        }
        else {
          local_96 = 0;
          local_94 = 0;
          piStack_8 = (int *)(iVar1 + 4);
          iStack_a = param_3;
          puStack_c = local_66;
          puStack_e = (undefined1 *)0x22b2;
          uStack_10 = 0xb1be;
          piStack_8 = (int *)func_0x0001263c();
          iStack_a = 0xebc;
          puStack_c = (undefined1 *)0xbf48;
          puStack_e = (undefined1 *)0x11f2;
          uStack_10 = 0xb1cf;
          FUN_21f2_3454();
          piStack_8 = (int *)local_92;
          iStack_a = 0;
          puStack_c = (undefined1 *)0xbf48;
          puStack_e = (undefined1 *)0x22b2;
          uStack_10 = 0xb1e3;
          iVar1 = func_0x000276d7();
          if (iVar1 == 0) {
            piStack_8 = (int *)0x254;
            iStack_a = 0xbf48;
            puStack_c = (undefined1 *)0x22b2;
            puStack_e = (undefined1 *)0xb1f7;
            piStack_8 = (int *)FUN_21f2_1348();
            *(int *)0xd70 = (int)piStack_8;
            if (piStack_8 == (int *)0x0) {
              piStack_8 = (int *)0x2c44;
              iStack_a = 0x22b2;
              puStack_c = (undefined1 *)0xb209;
              FUN_13bf_0a03();
            }
            else {
              iStack_a = 0xb;
              puStack_c = (undefined1 *)0xbf48;
              puStack_e = (undefined1 *)0x22b2;
              uStack_10 = 0xb21b;
              func_0x0002509c();
              param_1 = param_2 * 0x5c + param_1;
              *(undefined1 *)(param_1 + 0x33) = 0;
              *(undefined1 *)0xbf52 = 0;
              piStack_8 = (int *)0xbf48;
              iStack_a = 0x2c49;
              puStack_c = (undefined1 *)(param_1 + 0x12);
              puStack_e = (undefined1 *)0x22b2;
              uStack_10 = 0xb244;
              FUN_21f2_3454();
              *(undefined1 *)(param_1 + 0x33) = 0;
              piStack_8 = (int *)*(undefined2 *)0xd70;
              iStack_a = 0x22b2;
              puStack_c = (undefined1 *)0xb254;
              FUN_21f2_1262();
              *(undefined2 *)0xd70 = 0;
            }
          }
          else {
            piStack_8 = (int *)param_4;
            iStack_a = param_2 * 0x5c + param_1 + 4;
            puStack_c = (undefined1 *)param_3;
            puStack_e = local_66;
            uStack_10 = 0x22b2;
            uStack_12 = 0xb27a;
            iStack_a = func_0x0001263c();
            puStack_c = (undefined1 *)0x2c54;
            puStack_e = (undefined1 *)0xbf48;
            uStack_10 = 0x11f2;
            uStack_12 = 0xb28b;
            FUN_21f2_3454();
            piStack_8 = (int *)local_92;
            iStack_a = 0;
            puStack_c = (undefined1 *)0xbf48;
            puStack_e = (undefined1 *)0x22b2;
            uStack_10 = 0xb29f;
            iVar1 = func_0x000276d7();
            if (iVar1 == 0) {
              local_96 = local_96 + 1;
              if (local_96 != 1) goto LAB_3ab8_0751;
              iStack_a = 0x2c5c;
LAB_3ab8_073b:
              puStack_c = (undefined1 *)(param_2 * 0x5c + param_1 + 0x12);
              do {
                piStack_8 = (int *)local_74;
                puStack_e = (undefined1 *)0x22b2;
                uStack_10 = 0xb2ce;
                FUN_21f2_3454();
LAB_3ab8_0751:
                piStack_8 = (int *)local_92;
                iStack_a = 0x22b2;
                puStack_c = (undefined1 *)0xb2db;
                iVar1 = func_0x000276cc();
                if (iVar1 != 0) {
                  return 1;
                }
                local_96 = local_96 + 1;
                if (local_96 == 1) {
                  iStack_a = 0x2c62;
                  goto LAB_3ab8_073b;
                }
                if (local_96 == 2) {
                  iStack_a = param_2 * 0x5c + param_1 + 0x12;
                  goto LAB_3ab8_07ba;
                }
                if (local_96 != 3) goto code_r0x0003b2f4;
                iStack_a = 0x2c68;
                puStack_c = (undefined1 *)(param_2 * 0x5c + param_1 + 0x33);
              } while( true );
            }
          }
        }
        return 1;
      }
    }
  }
  return 0;
code_r0x0003b2f4:
  if (local_96 == 4) {
    iStack_a = param_2 * 0x5c + param_1 + 0x33;
LAB_3ab8_07ba:
    piStack_8 = (int *)local_74;
    puStack_c = (undefined1 *)0x22b2;
    puStack_e = (undefined1 *)0xb340;
    FUN_21f2_2d26();
  }
  goto LAB_3ab8_0751;
}



/* 3ab8:0965  FUN_3ab8_0965  69 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003b526) */

void __cdecl16far FUN_3ab8_0965(int param_1,int param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  FUN_21f2_0ebc();
  uVar1 = 0x22b2;
  do {
    func_0x0000f350(uVar1,param_1,param_2,param_1 + 6,param_3 + param_2,param_4,0,0);
    uVar1 = 0xdef;
  } while( true );
}



/* 3ab8:09aa  FUN_3ab8_09aa  419 bytes, 1 callers */

void __cdecl16far FUN_3ab8_09aa(void)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  func_0x0000daa6(0x22b2,0);
  func_0x0000f350(0x885,0x27f,0x38,*(undefined2 *)0xa58,0x39,7,1,0,0);
  func_0x0000f350(0xdef,0x27f,0x62,*(undefined2 *)0xa58,0x6e,7,6,6,0x2c7c);
  func_0x0000f350(0xdef,0x27f,*(int *)0x1b42 * 0x10 + -0x1c,*(undefined2 *)0xa58,
                  *(undefined2 *)0xa5a,7,6,6,0x2c7c);
  func_0x0000f350(0xdef,0xe7,0x6e,0xf7,*(int *)0x1b42 * 0x10 + -0x1c,7,1,0,0);
  func_0x0000f350(0xdef,0x26f,0x6e,0x26f,*(int *)0x1b42 * 0x10 + -0x1c,7,1,0,0);
  func_0x0000f350(0xdef,0xe7,0x81,0xf7,*(int *)0x1b42 * 0x10 + -0x2f,7,1,0,0);
  func_0x0000f350(0xdef,0x26f,0x81,0x27f,*(int *)0x1b42 * 0x10 + -0x2f,7,1,0,0);
  FUN_3ab8_0965(0xe9,0x7e,0xfff3,7);
  FUN_3ab8_0965(0xe9,*(int *)0x1b42 * 0x10 + -0x2c,0xd,7);
  FUN_3ab8_0965(0x271,0x7e,0xfff3,7);
  FUN_3ab8_0965(0x271,*(int *)0x1b42 * 0x10 + -0x2c,0xd,7);
  func_0x0000daa6(0xdef,1);
  return;
}



/* 3ab8:0b4d  FUN_3ab8_0b4d  547 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0b4d(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_21f2_0ebc();
  iVar1 = ((*(int *)0x1b42 * 0x10 + -0xb2) * param_2) / 0x3e + 0x82;
  func_0x0000daa6(0x22b2,0,iVar1);
  func_0x0000f350(0x885,0xe8,0x82,0xf6,iVar1,7,6,6,0x2c7c);
  func_0x0000f350(0xdef,0x270,0x82,0x27e,iVar1,7,6,6,0x2c7c);
  func_0x0000f350(0xdef,0xe8,iVar1,0xf6,0,7,5,1);
  iVar4 = 0;
  iVar3 = 1;
  iVar2 = 5;
  func_0x0000f350(0xdef,0x270,iVar1,0x27e,0,7);
  if (iVar4 < iVar3) {
    func_0x0000f350(0xdef,0xe8,0x2c7c,0xf6,6,7,6);
    iVar3 = 6;
    iVar2 = 6;
    func_0x0000f350(0xdef,0x270,0x2c7c,0x27e,6,7);
  }
  if (iVar3 < iVar2) {
    func_0x0000f350(0xdef,0xe8,iVar3,0xf6,5,7,5,0,0);
    func_0x0000f350(0xdef,0x270,0,0x27e,5,7,5,0,0);
  }
  iVar1 = *(int *)0x1b42 * 0x10 + -0xb2;
  func_0x0000f350(0xdef,0xe9,(iVar1 * param_3) / 0x3e + 0x82,0xf5,
                  (iVar1 * (param_3 + 1)) / 0x3e + 0x82,6,5,6,0);
  iVar1 = *(int *)0x1b42 * 0x10 + -0xb2;
  func_0x0000f350(0xdef,0x271,(iVar1 * param_3) / 0x3e + 0x82,0x27d,
                  (iVar1 * (param_3 + 1)) / 0x3e + 0x82,6,5,6,0);
  func_0x0000daa6(0xdef,1);
  return;
}



/* 3ab8:0d70  FUN_3ab8_0d70  29 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0d70(undefined2 param_1,undefined2 param_2)

{
  undefined2 local_8;
  undefined2 uStack_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  uStack_6 = 0xb8fb;
  FUN_21f2_0ebc();
  puStack_4 = &local_8;
  uStack_6 = param_2;
  local_8 = param_1;
  FUN_3ab8_0d8d();
  return;
}



/* 3ab8:0d8d  FUN_3ab8_0d8d  37 bytes, 2 callers */

void __cdecl16far FUN_3ab8_0d8d(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined1 local_38 [40];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  undefined1 *puStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  local_6 = 0xb918;
  FUN_21f2_0ebc();
  uStack_4 = param_3;
  local_6 = param_2;
  puStack_8 = local_38;
  puStack_a = &local_6;
  uStack_c = param_1;
  uStack_e = 0x22b2;
  uStack_10 = 0xb92e;
  func_0x000265e6();
  return;
}



/* 3ab8:0db2  FUN_3ab8_0db2  60 bytes, 2 callers */

void __cdecl16far FUN_3ab8_0db2(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  func_0x00012276(0x22b2,0x2c82);
  func_0x00012276(0x11f2,0x42e);
  func_0x00012276(0x11f2,0x2c87);
  if (*(char *)0xcf6 == '\0') {
    uVar1 = 0x7f2;
  }
  else {
    uVar1 = 0xcf6;
  }
  func_0x00012276(0x11f2,uVar1);
  return;
}



/* 3ab8:0dee  FUN_3ab8_0dee  94 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0dee(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  uVar1 = *(uint *)(param_2 * 0x5c + param_1);
  uVar2 = *(uint *)(param_1 + param_2 * 0x5c + 2);
  FUN_21f2_3454(0xbf48,0x2c89,(uVar2 >> 9) + 0x50,(uVar2 & 0x1e0) >> 5,uVar2 & 0x1f,uVar1 >> 0xb,
                (uVar1 & 0x7e0) >> 5);
  return;
}



/* 3ab8:0e4c  FUN_3ab8_0e4c  1474 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_0e4c(int param_1,undefined1 *param_2,int param_3,int param_4,undefined2 param_5,int param_6
             ,undefined2 param_7,undefined2 param_8)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  undefined1 local_bc [10];
  int local_b2;
  undefined1 local_b0 [20];
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  int local_94;
  int local_92;
  int local_90;
  undefined1 local_8e [50];
  undefined1 local_5c [10];
  undefined1 local_52 [58];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *local_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 **ppuStack_6;
  
  ppuStack_6 = (undefined1 **)0xb9d7;
  FUN_21f2_0ebc();
  local_9a = 7;
  local_98 = 0;
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xc08 = 1;
  ppuStack_6 = (undefined1 **)0x2;
  puStack_8 = (undefined1 *)0x11;
  puStack_a = (undefined1 *)0x22b2;
  local_c = (undefined1 *)0xb9fa;
  FUN_1000_0599();
  ppuStack_6 = (undefined1 **)0xdef;
  puStack_8 = (undefined1 *)0xba01;
  func_0x00010526();
  ppuStack_6 = (undefined1 **)*(undefined2 *)0xd72;
  puStack_8 = (undefined1 *)0x2ca4;
  puStack_a = (undefined1 *)param_5;
  local_c = local_8e;
  puStack_e = (undefined1 *)0xdef;
  uStack_10 = 0xba16;
  puStack_8 = (undefined1 *)func_0x0001263c();
  puStack_a = (undefined1 *)&SUB_0000_2ca6;
  local_c = local_52;
  puStack_e = (undefined1 *)0x11f2;
  uStack_10 = 0xba27;
  FUN_21f2_3454();
  local_96 = 5;
  if ((*(char *)*(undefined2 *)0xd72 == 'b') || (*(char *)*(undefined2 *)0xd72 == 'B')) {
    local_96 = 4;
  }
  ppuStack_6 = (undefined1 **)0x0;
  puStack_8 = (undefined1 *)local_96;
  puStack_a = (undefined1 *)0x2;
  local_c = (undefined1 *)0x11;
  puStack_e = local_52;
  uStack_10 = 0x22b2;
  uStack_12 = 0xba5c;
  FUN_1000_02b5();
  ppuStack_6 = (undefined1 **)*(undefined2 *)0xb386;
  puStack_8 = (undefined1 *)0x2cb1;
  puStack_a = local_52;
  local_c = (undefined1 *)0xdef;
  puStack_e = (undefined1 *)0xba70;
  FUN_21f2_3454();
  if (*(int *)0xb386 < 0x3c) {
    ppuStack_6 = (undefined1 **)0x0;
    puStack_8 = (undefined1 *)0x5;
  }
  else {
    ppuStack_6 = (undefined1 **)0xffff;
    puStack_8 = (undefined1 *)0x2;
  }
  puStack_a = (undefined1 *)0x2;
  local_c = (undefined1 *)0x46;
  puStack_e = local_52;
  uStack_10 = 0x22b2;
  uStack_12 = 0xba9c;
  FUN_1000_02b5();
  ppuStack_6 = (undefined1 **)0x3;
  puStack_8 = (undefined1 *)0x11;
  puStack_a = (undefined1 *)0xdef;
  local_c = (undefined1 *)0xbaac;
  FUN_1000_0599();
  ppuStack_6 = (undefined1 **)param_7;
  puStack_8 = (undefined1 *)0x2cbb;
  puStack_a = (undefined1 *)param_8;
  local_c = (undefined1 *)0x2cbc;
  puStack_e = (undefined1 *)0x2cbd;
  uStack_10 = 0xdef;
  uVar2 = 0x11f2;
  uStack_12 = 0xbac5;
  func_0x00012276();
  if (*(int *)0xc22 == 0) {
    if (*(int *)0xa62 == 0x1e) {
      ppuStack_6 = (undefined1 **)0x11f2;
      puStack_8 = (undefined1 *)0xbada;
      FUN_3ab8_0db2();
    }
    ppuStack_6 = (undefined1 **)0x11f2;
    uVar2 = 0xdef;
    puStack_8 = (undefined1 *)0xbadf;
    func_0x00010526();
  }
  *(undefined2 *)0xc22 = 0;
  ppuStack_6 = (undefined1 **)0x3;
  puStack_8 = (undefined1 *)0x4e;
  local_c = (undefined1 *)0xbaf2;
  puStack_a = (undefined1 *)uVar2;
  FUN_1000_0599();
  ppuStack_6 = (undefined1 **)0x0;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x1;
  local_c = (undefined1 *)0x7;
  puStack_e = (undefined1 *)*(undefined2 *)0xa5a;
  uStack_10 = 0x27f;
  uStack_12 = *(undefined2 *)0xa5e;
  uStack_14 = *(undefined2 *)0xa58;
  uStack_16 = 0xdef;
  uStack_18 = 0xbb15;
  func_0x0000f350();
  if (param_6 != 0) {
    ppuStack_6 = (undefined1 **)param_4;
    puStack_8 = (undefined1 *)param_3;
    puStack_a = (undefined1 *)param_6;
    local_c = (undefined1 *)0xdef;
    puStack_e = (undefined1 *)0xbb2e;
    FUN_3ab8_0b4d();
    for (local_90 = param_3; local_90 < param_3 + *(int *)0x1b42 + -9; local_90 = local_90 + 1) {
      ppuStack_6 = (undefined1 **)0x2cd9;
      puStack_8 = (undefined1 *)0xdef;
      puStack_a = (undefined1 *)0xbebf;
      func_0x00012276();
      local_b2 = (local_90 - param_3) + 8;
      if (local_90 < param_6) {
        if ((param_2[local_90 * 0x5c + 0x54] & 0x10) == 0) {
          ppuStack_6 = &local_c;
          puStack_8 = local_5c;
          puStack_a = param_2 + local_90 * 0x5c + 4;
          local_c = (undefined1 *)0x11f2;
          puStack_e = (undefined1 *)0xbb55;
          FUN_3ab8_0d8d();
          ppuStack_6 = &local_c;
          puStack_8 = local_5c;
          puStack_a = (undefined1 *)0x2cef;
          local_c = local_b0;
          puStack_e = (undefined1 *)0x11f2;
          uStack_10 = 0xbb6e;
          FUN_21f2_3454();
        }
        else {
          iVar1 = local_90 * 0x5c;
          puStack_8 = (undefined1 *)0x2cda;
          puStack_a = local_b0;
          local_c = (undefined1 *)0x11f2;
          puStack_e = (undefined1 *)0xbf03;
          ppuStack_6 = (undefined1 **)(param_2 + iVar1 + 4);
          FUN_21f2_3454();
          ppuStack_6 = (undefined1 **)0x2cdf;
          puStack_a = (undefined1 *)0x22b2;
          local_c = (undefined1 *)0xbf10;
          puStack_8 = param_2 + iVar1 + 4;
          iVar1 = func_0x00024cb8();
          if (iVar1 == 0) {
            ppuStack_6 = (undefined1 **)0x2ce1;
            puStack_8 = local_b0;
            puStack_a = (undefined1 *)0x22b2;
            local_c = (undefined1 *)0xbf24;
            func_0x00024c86();
            ppuStack_6 = (undefined1 **)0x87a;
            puStack_8 = local_b0;
            puStack_a = (undefined1 *)0x22b2;
            local_c = (undefined1 *)0xbf34;
            FUN_21f2_2d26();
          }
          ppuStack_6 = (undefined1 **)0x2ce6;
          puStack_8 = param_2 + local_90 * 0x5c + 4;
          puStack_a = (undefined1 *)0x22b2;
          local_c = (undefined1 *)0xbf4d;
          iVar1 = func_0x00024cb8();
          if (iVar1 == 0) {
            ppuStack_6 = (undefined1 **)0x2ce9;
            puStack_8 = local_b0;
            puStack_a = (undefined1 *)0x22b2;
            local_c = (undefined1 *)0xbf64;
            func_0x00024c86();
            ppuStack_6 = (undefined1 **)0x87a;
            puStack_8 = local_b0;
            puStack_a = (undefined1 *)0x22b2;
            local_c = (undefined1 *)0xbf74;
            FUN_21f2_2d26();
            ppuStack_6 = (undefined1 **)0x2ced;
            puStack_8 = local_b0;
            puStack_a = (undefined1 *)0x22b2;
            local_c = (undefined1 *)0xbf84;
            FUN_21f2_2d26();
          }
        }
        puVar3 = (undefined1 *)0x22b2;
        if (param_2[local_90 * 0x5c + 0x12] == '\0') {
          ppuStack_6 = (undefined1 **)*(undefined2 *)0xd72;
          puStack_8 = (undefined1 *)param_5;
          puStack_a = (undefined1 *)local_90;
          local_c = param_2;
          puStack_e = (undefined1 *)0x22b2;
          uStack_10 = 0xbb93;
          FUN_3ab8_05a4();
        }
        if (param_4 == local_90) {
          ppuStack_6 = (undefined1 **)local_b0;
          puStack_8 = (undefined1 *)0x2cf7;
          puStack_a = (undefined1 *)0xbf48;
          local_c = (undefined1 *)0x22b2;
          puStack_e = (undefined1 *)0xbbb4;
          FUN_21f2_3454();
          ppuStack_6 = (undefined1 **)0x22b2;
          puStack_8 = (undefined1 *)0xbbbc;
          func_0x00010526();
          ppuStack_6 = (undefined1 **)local_98;
          puStack_8 = (undefined1 *)local_9a;
          puStack_a = (undefined1 *)0x5;
          local_c = (undefined1 *)0x11;
          puStack_e = (undefined1 *)0xbf48;
          uStack_10 = 0xdef;
          uStack_12 = 0xbbd5;
          FUN_1000_02b5();
          ppuStack_6 = (undefined1 **)local_90;
          puStack_8 = param_2;
          puStack_a = (undefined1 *)0xdef;
          local_c = (undefined1 *)0xbbe3;
          FUN_3ab8_0dee();
          ppuStack_6 = (undefined1 **)local_98;
          puStack_8 = (undefined1 *)local_9a;
          puStack_a = (undefined1 *)0x5;
          local_c = (undefined1 *)0x20;
          puStack_e = (undefined1 *)0xbf48;
          uStack_10 = 0xdef;
          uStack_12 = 0xbbfe;
          FUN_1000_02b5();
          ppuStack_6 = (undefined1 **)0x0;
          puStack_8 = (undefined1 *)0x0;
          puStack_a = (undefined1 *)0x1;
          local_c = (undefined1 *)0x7;
          puStack_e = (undefined1 *)*(undefined2 *)0xa5a;
          uStack_10 = 0x27f;
          uStack_12 = *(undefined2 *)0xa5e;
          uStack_14 = *(undefined2 *)0xa58;
          uStack_16 = 0xdef;
          uStack_18 = 0xbc22;
          func_0x0000f350();
          if ((param_2[local_90 * 0x5c + 0x54] & 0x10) == 0) {
            ppuStack_6 = *(undefined1 ***)(param_2 + local_90 * 0x5c + 0x58);
            puStack_8 = *(undefined1 **)(param_2 + local_90 * 0x5c + 0x56);
            puStack_a = (undefined1 *)0x2cfd;
            local_c = (undefined1 *)0xbf48;
            puStack_e = (undefined1 *)0xdef;
            uStack_10 = 0xbc4a;
            FUN_21f2_3454();
          }
          else {
            ppuStack_6 = (undefined1 **)0x2d0b;
            puStack_8 = (undefined1 *)0x2d0d;
            puStack_a = (undefined1 *)0xbf48;
            local_c = (undefined1 *)0xdef;
            puStack_e = (undefined1 *)0xbc60;
            FUN_21f2_3454();
          }
          ppuStack_6 = (undefined1 **)local_98;
          puStack_8 = (undefined1 *)local_9a;
          puStack_a = (undefined1 *)0x6;
          local_c = (undefined1 *)0x20;
          puStack_e = (undefined1 *)0xbf48;
          uStack_10 = 0x22b2;
          uStack_12 = 0xbc7c;
          FUN_1000_02b5();
          iVar1 = local_90;
          ppuStack_6 = (undefined1 **)(param_2 + local_90 * 0x5c + 0x12);
          puStack_8 = (undefined1 *)0x2d12;
          puStack_a = (undefined1 *)0xbf48;
          local_c = (undefined1 *)0xdef;
          puStack_e = (undefined1 *)0xbc9e;
          FUN_21f2_3454();
          ppuStack_6 = (undefined1 **)local_98;
          puStack_8 = (undefined1 *)local_9a;
          puStack_a = (undefined1 *)0x5;
          local_c = (undefined1 *)0x2f;
          puStack_e = (undefined1 *)0xbf48;
          uStack_10 = 0x22b2;
          uStack_12 = 0xbcba;
          FUN_1000_02b5();
          ppuStack_6 = (undefined1 **)(param_2 + iVar1 * 0x5c + 0x33);
          puStack_8 = (undefined1 *)0x2d18;
          puStack_a = (undefined1 *)0xbf48;
          local_c = (undefined1 *)0xdef;
          puStack_e = (undefined1 *)0xbcce;
          FUN_21f2_3454();
          ppuStack_6 = (undefined1 **)local_98;
          puStack_8 = (undefined1 *)local_9a;
          puStack_a = (undefined1 *)0x6;
          local_c = (undefined1 *)0x2f;
          puStack_e = (undefined1 *)0xbf48;
          uStack_10 = 0x22b2;
          puVar3 = (undefined1 *)0xdef;
          uStack_12 = 0xbcea;
          FUN_1000_02b5();
          if (param_1 == 0) {
            local_9a = *(undefined2 *)0xa84;
          }
          else {
            local_9a = *(undefined2 *)0xa82;
          }
          local_98 = 1;
        }
        ppuStack_6 = (undefined1 **)local_b0;
        puStack_8 = (undefined1 *)0x2d1e;
        puStack_a = (undefined1 *)0xbf48;
        puStack_e = (undefined1 *)0xbd17;
        local_c = puVar3;
        FUN_21f2_3454();
        local_9c = local_9a;
        if (param_2[local_90 * 0x5c + 0x5a] != '\0') {
          local_9c = 4;
        }
        ppuStack_6 = (undefined1 **)local_98;
        puStack_8 = (undefined1 *)local_9c;
        puStack_a = (undefined1 *)local_b2;
        local_c = (undefined1 *)0x11;
        puStack_e = (undefined1 *)0xbf48;
        uStack_10 = 0x22b2;
        uStack_12 = 0xbd53;
        FUN_1000_02b5();
        iVar1 = local_90;
        ppuStack_6 = (undefined1 **)(param_2 + local_90 * 0x5c + 0x12);
        puStack_8 = (undefined1 *)0x2d24;
        puStack_a = (undefined1 *)0xbf48;
        local_c = (undefined1 *)0xdef;
        puStack_e = (undefined1 *)0xbd75;
        FUN_21f2_3454();
        if ((param_2[iVar1 * 0x5c + 0x54] & 0x10) == 0) {
          ppuStack_6 = (undefined1 **)0xbf48;
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xbd87;
          iVar1 = func_0x00024ce4();
          while ((local_92 = iVar1 + -1, -1 < local_92 && (*(char *)(iVar1 + -0x40b9) == ' '))) {
            *(undefined1 *)(iVar1 + -0x40b9) = 0;
            iVar1 = local_92;
          }
          ppuStack_6 = (undefined1 **)0x2d2a;
          puStack_8 = (undefined1 *)0xbf48;
          puStack_a = (undefined1 *)0x22b2;
          local_c = (undefined1 *)0xbdb7;
          FUN_21f2_2d26();
        }
        ppuStack_6 = (undefined1 **)(param_2 + local_90 * 0x5c + 0x33);
        puStack_8 = (undefined1 *)0xbf48;
        puStack_a = (undefined1 *)0x22b2;
        local_c = (undefined1 *)0xbdd0;
        FUN_21f2_2d26();
        local_94 = 0;
        do {
          ppuStack_6 = (undefined1 **)0x2d2c;
          puStack_8 = (undefined1 *)0xbf48;
          puStack_a = (undefined1 *)0x22b2;
          local_c = (undefined1 *)0xbde5;
          FUN_21f2_2d26();
          local_94 = local_94 + 1;
        } while (local_94 < 0x2d);
        ppuStack_6 = (undefined1 **)0x2d;
        puStack_8 = (undefined1 *)0xbf48;
        puStack_a = (undefined1 *)0x22b2;
        local_c = (undefined1 *)0xbdff;
        iVar1 = func_0x0002aa38();
        if (iVar1 == 2) {
          *(undefined1 *)0xbf74 = 0x20;
        }
        *(undefined1 *)0xbf75 = 0;
        ppuStack_6 = (undefined1 **)local_98;
        puStack_8 = (undefined1 *)local_9c;
        puStack_a = (undefined1 *)local_b2;
        local_c = (undefined1 *)0x21;
        puStack_e = (undefined1 *)0xbf48;
        uStack_10 = 0x2a75;
        uStack_12 = 0xbe29;
        FUN_1000_02b5();
        local_9a = 7;
        local_98 = 0;
      }
      else {
        local_bc[0] = 0;
        ppuStack_6 = (undefined1 **)local_bc;
        puStack_8 = (undefined1 *)0x2d2e;
        puStack_a = (undefined1 *)0xbf48;
        local_c = (undefined1 *)0x11f2;
        puStack_e = (undefined1 *)0xbe51;
        FUN_21f2_3454();
        ppuStack_6 = (undefined1 **)0x0;
        puStack_8 = (undefined1 *)0x7;
        puStack_a = (undefined1 *)local_b2;
        local_c = (undefined1 *)0x11;
        puStack_e = (undefined1 *)0xbf48;
        uStack_10 = 0x22b2;
        uStack_12 = 0xbe6c;
        FUN_1000_02b5();
        ppuStack_6 = (undefined1 **)local_bc;
        puStack_8 = (undefined1 *)0x2d34;
        puStack_a = (undefined1 *)0xbf48;
        local_c = (undefined1 *)0xdef;
        puStack_e = (undefined1 *)0xbe81;
        FUN_21f2_3454();
        ppuStack_6 = (undefined1 **)0x0;
        puStack_8 = (undefined1 *)0x7;
        puStack_a = (undefined1 *)local_b2;
        local_c = (undefined1 *)0x21;
        puStack_e = (undefined1 *)0xbf48;
        uStack_10 = 0x22b2;
        uStack_12 = 0xbe9c;
        FUN_1000_02b5();
      }
    }
  }
  return;
}



/* 3ab8:140e  FUN_3ab8_140e  1085 bytes, 1 callers */

uint __cdecl16far FUN_3ab8_140e(int param_1,uint *param_2,uint *param_3,uint *param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_DI;
  uint uVar4;
  undefined2 unaff_DS;
  int local_1c;
  int local_1a;
  uint local_18;
  int local_16;
  int local_14;
  int *local_12;
  uint local_10;
  undefined1 *local_e;
  int *local_c;
  undefined1 **local_a;
  uint *local_8;
  
  FUN_21f2_0ebc();
  uVar3 = 0x22b2;
LAB_3ab8_141b:
  do {
    *param_5 = 0;
    local_c = (int *)0x0;
    local_12 = (int *)0x0;
    local_18 = 0;
    local_1a = 0;
LAB_3ab8_142e:
    while ((*param_5 == 0 && (local_c == (int *)0x0))) {
      local_a = (undefined1 **)0xbfc4;
      local_8 = (uint *)uVar3;
      FUN_1000_0632();
      local_8 = &local_10;
      local_a = &local_e;
      local_c = &local_14;
      local_e = &stack0xfffc;
      local_10 = 0xdef;
      uVar3 = 0x885;
      local_12 = (int *)0xbfdc;
      func_0x0000dcbd();
      *param_5 = local_14 + unaff_DI;
      *param_3 = (uint)local_e;
      *param_4 = local_10;
      if (*(int *)0x158 != 0) {
        return 0xfba9;
      }
      if ((((*(int *)0xa58 < (int)*param_3) || ((int)*param_3 < 8)) || ((int)*param_4 < 0x40)) ||
         (0x12e < (int)*param_4)) goto LAB_3ab8_14f4;
      if (((*param_5 == 0) && (local_c == (int *)0x0)) && (*(int *)0x158 == 0)) {
        uVar3 = (int)(*param_4 - 0x40) >> 0xf;
        iVar2 = ((int)((*param_4 - 0x40 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3;
        local_1c = iVar2 + 1;
        if ((int)*param_3 < 0x45) {
          local_1c = iVar2 + 0x10;
        }
        local_a = (undefined1 **)local_1c;
        local_c = (int *)0x1;
        goto LAB_3ab8_14e8;
      }
    }
    do {
      uVar4 = 0xdef;
      local_a = (undefined1 **)0xc08b;
      local_8 = (uint *)uVar3;
      iVar2 = FUN_1000_0632();
      uVar3 = uVar4;
    } while (iVar2 != 0);
    if (((*(char *)0xb782 == '\0') || (*param_5 == 0)) ||
       ((*(int *)0xa58 < (int)*param_3 || ((int)*param_4 <= *(int *)0xa5e)))) {
      if (*param_5 == 0) {
        local_1a = 0;
      }
      if (local_1a != 0) {
        local_16 = local_1a;
        local_8 = (uint *)&local_1a;
        local_a = (undefined1 **)0x0;
        local_c = (int *)0x0;
        local_e = (undefined1 *)0xdef;
        uVar4 = 0x3bf;
        local_10 = 0xc14f;
        func_0x0000580a();
        local_1a = local_16;
      }
      if (param_1 < 10000) {
        uVar3 = (int)*param_3 >> 0xf;
        iVar2 = (((int)((*param_3 ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3) + 1;
        uVar3 = (int)*param_4 >> 0xf;
        local_a = (undefined1 **)((((int)((*param_4 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3) + -7);
        if (((local_12 != local_c) || (((iVar2 < 0x4f && (iVar2 != 0x1e)) && (iVar2 != 0x1f)))) ||
           (((int)local_a < 0 || (*(int *)0x1b42 + -10 < (int)local_a)))) {
LAB_3ab8_16c5:
          while ((unaff_DI != 0 || (local_14 != 0))) {
            local_8 = &local_10;
            local_a = &local_e;
            local_c = &local_14;
            local_e = &stack0xfffc;
            local_12 = (int *)0xc266;
            local_10 = uVar4;
            func_0x0000dcbd();
            uVar4 = 0x885;
          }
          local_18 = (uint)local_c & 0xff;
          uVar3 = (uint)local_c >> 8;
          local_12 = (int *)(uVar3 << 8);
          if (local_c != (int *)0x0) {
            *param_5 = 0;
            local_16 = 1;
            do {
              if (*(byte *)(local_16 + 0xedc) == local_18) {
                local_1a = local_16;
              }
              local_16 = local_16 + 1;
            } while (local_16 < 0x1f);
          }
          if (local_1a != 0) {
            *(int *)0xa62 = local_1a;
            *(undefined2 *)0x158 = 1;
            return 0xd499;
          }
          if ((((*param_5 != 0) && ((int)*param_3 < 0x25)) && ((int)*param_4 <= *(int *)0xa5e)) ||
             (local_18 == 0x1b)) {
            return 0xffff;
          }
          if ((0x30 < local_18) && (local_18 < 0x3a)) {
            return local_18;
          }
          if (local_18 == 0xd) {
            return 0xd;
          }
          if (uVar3 == 0x36) {
            return 0x3600;
          }
          if (uVar3 == 0x37) {
            return 0x3700;
          }
          if (uVar3 == 0x3a) {
            return 0x3a00;
          }
          if (uVar3 == 0x3d) {
            return 0x3d00;
          }
          if (uVar3 != 0x62) {
            if (uVar3 == 0x6b) {
              return 0x6b00;
            }
            if (uVar3 != 0x3e) {
              if (uVar3 == 0x3f) {
                local_a = (undefined1 **)0xc343;
                local_8 = (uint *)uVar4;
                uVar3 = func_0x0000db57();
                if (((uVar3 & 4) != 0) && (*(int *)0xca0 == 0)) {
                  pcVar1 = (code *)swi(0x3f);
                  (*pcVar1)();
                  return 99;
                }
              }
              return 0;
            }
            return 0x3e00;
          }
          return 0x6200;
        }
      }
      else {
        uVar3 = (int)*param_4 >> 0xf;
        local_a = (undefined1 **)((((int)((*param_4 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3) + 1);
        if (((((local_12 != local_c) || ((int)*param_3 < 0x87)) || (0x99 < (int)*param_3)) ||
            (((int)local_a < 2 || (*(int *)0x1b42 + -1 < (int)local_a)))) &&
           ((((local_12 != local_c || (((int)*param_3 < 0x1ff || (0x211 < (int)*param_3)))) ||
             ((int)local_a < 2)) || (*(int *)0x1b42 + -1 < (int)local_a)))) goto LAB_3ab8_16c5;
      }
      do {
        if (9999 < param_1) {
          return 0;
        }
        if (local_a == (undefined1 **)0x0) {
          return 0;
        }
        if (*(int *)0x1b42 - (int)local_a == 10) {
          return 0;
        }
        iVar2 = (int)((*param_4 - 0x82) * 0x3e) / (*(int *)0x1b42 * 0x10 + -0xb2);
        uVar3 = uVar4;
        if ((param_1 <= iVar2) || (iVar2 < 0)) break;
        local_8 = &local_10;
        local_a = &local_e;
        local_c = &local_14;
        local_e = &stack0xfffc;
        uVar3 = 0x885;
        local_12 = (int *)0xc39b;
        local_10 = uVar4;
        func_0x0000dcbd();
        *param_4 = local_10;
        if (*(int *)0x158 != 0) {
          return 0xfba9;
        }
        if (local_8 != param_2) {
          return 0;
        }
        uVar4 = uVar3;
      } while ((unaff_DI != 0) || (local_14 != 0));
      goto LAB_3ab8_141b;
    }
    while ((unaff_DI != 0 || (local_14 != 0))) {
      local_8 = &local_10;
      local_a = &local_e;
      local_c = &local_14;
      local_e = &stack0xfffc;
      local_12 = (int *)0xc0d8;
      local_10 = uVar3;
      func_0x0000dcbd();
      uVar3 = 0x885;
    }
    uVar4 = (int)*param_4 >> 0xf;
    local_16 = ((int)((*param_4 ^ uVar4) - uVar4) >> 4 ^ uVar4) - uVar4;
    if (((int)*param_3 < *(int *)0xa5c) && (5 < local_16)) {
      *(int *)0xa62 = local_16 + 10000;
      *(undefined2 *)0x158 = 1;
      if (*param_5 == 2) {
        *(undefined2 *)0x158 = 10000;
      }
      return 0xfba9;
    }
  } while( true );
LAB_3ab8_14f4:
  if (local_1a != 0) {
    local_c = (int *)0x0;
    local_a = (undefined1 **)0x0;
LAB_3ab8_14e8:
    local_8 = (uint *)&local_1a;
    local_e = (undefined1 *)0x885;
    uVar3 = 0x3bf;
    local_10 = 0xc06e;
    func_0x0000580a();
  }
  goto LAB_3ab8_142e;
}



/* 3ab8:1853  FUN_3ab8_1853  94 bytes, 1 callers */

void __cdecl16far FUN_3ab8_1853(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  FUN_21f2_0ebc();
  iVar4 = 0;
  uVar3 = 0x22b2;
  while( true ) {
    if (*(char *)(iVar4 + param_1) == '\0') break;
    iVar2 = func_0x0002aa38(uVar3,param_1,iVar4);
    if (iVar2 == 0) {
      bVar1 = *(byte *)(iVar4 + param_1);
      if (bVar1 == 0x20) {
        *(undefined1 *)(iVar4 + param_1) = 0x5f;
      }
      if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
        *(char *)(iVar4 + param_1) = bVar1 - 0x20;
      }
    }
    iVar4 = iVar4 + 1;
    uVar3 = 0x2a75;
  }
  return;
}



/* 3ab8:18b1  FUN_3ab8_18b1  5857 bytes, 1 callers */

/* WARNING: Type propagation algorithm not settling */

int FUN_3ab8_18b1(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  byte ****ppppbVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  byte ***local_18ba [40];
  uint local_186a [22];
  undefined1 local_183e [2];
  undefined1 local_183c;
  uint local_182a;
  int local_1828;
  uint local_1826;
  byte ***local_1824;
  undefined1 local_1822 [4];
  byte ***local_181e [2];
  int local_181a;
  int local_1818;
  uint local_1816;
  uint local_1814 [5];
  undefined1 local_180a [10];
  uint uStack_1800;
  undefined1 local_17fe [20];
  char local_17ea;
  byte ****local_17e8;
  char local_17e6;
  int local_17e4;
  char local_17e2;
  char local_17e0;
  int local_17de;
  int local_17dc;
  undefined1 local_17d6;
  undefined1 local_17d5;
  undefined2 local_17bc;
  undefined2 local_17ba;
  char local_17b8;
  char local_17b6;
  int local_17b4;
  char local_17b2;
  byte ***local_17b0 [2];
  uint auStack_17ac [6];
  undefined1 auStack_17a0 [35];
  undefined1 auStack_177d [33];
  byte abStack_175c [5804];
  undefined2 local_b0;
  undefined2 local_ae;
  int local_ac;
  char local_aa;
  char local_a8;
  byte ***local_a6 [40];
  undefined1 local_56;
  char local_42;
  byte ****local_40;
  char local_3e;
  byte ****local_3c;
  uint local_3a;
  byte ****local_38;
  undefined1 local_36 [30];
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  byte ****ppppbStack_12;
  uint *puStack_10;
  byte ****ppppbStack_e;
  byte ****ppppbStack_c;
  byte ****ppppbStack_a;
  byte ****local_8;
  byte ****local_6;
  
  local_6 = (byte ****)0xc43c;
  FUN_21f2_0ebc();
  local_17e8 = (byte ****)0x0;
  local_b0 = *(undefined2 *)0x2d3a;
  local_ae = *(undefined2 *)0x2d3c;
  local_3c = (byte ****)0x1;
  local_38 = (byte ****)0x1;
  local_6 = (byte ****)0x1;
  local_8 = (byte ****)0x22b2;
  ppppbStack_a = (byte ****)0xc464;
  func_0x00011f2c();
  local_6 = (byte ****)0x992;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x11f2;
  ppppbStack_c = (byte ****)0xc471;
  iVar2 = func_0x00024cb8();
  local_17e0 = iVar2 == 0;
  local_6 = (byte ****)0x2d3e;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc48a;
  iVar2 = func_0x00024cb8();
  local_17ea = iVar2 == 0;
  local_6 = (byte ****)0x2d43;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc4a3;
  func_0x00024cb8();
  local_6 = (byte ****)0x2d48;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc4bb;
  iVar2 = func_0x00024cb8();
  local_3e = iVar2 == 0;
  local_6 = (byte ****)0x2d4d;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc4d3;
  iVar2 = func_0x00024cb8();
  if (iVar2 == 0) {
LAB_3ab8_1971:
    local_42 = '\x01';
  }
  else {
    local_6 = (byte ****)0x2d52;
    local_8 = (byte ****)param_4;
    ppppbStack_a = (byte ****)0x22b2;
    ppppbStack_c = (byte ****)0xc4e5;
    iVar2 = func_0x00024cb8();
    if (iVar2 == 0) goto LAB_3ab8_1971;
    local_42 = '\0';
  }
  local_6 = (byte ****)0x2d59;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc501;
  iVar2 = func_0x00024cb8();
  if (iVar2 == 0) {
LAB_3ab8_19a0:
    local_aa = '\x01';
  }
  else {
    local_6 = (byte ****)0x2d62;
    local_8 = (byte ****)param_4;
    ppppbStack_a = (byte ****)0x22b2;
    ppppbStack_c = (byte ****)0xc513;
    iVar2 = func_0x00024cb8();
    if (iVar2 == 0) goto LAB_3ab8_19a0;
    local_aa = '\0';
  }
  local_6 = (byte ****)0x2d69;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc531;
  iVar2 = func_0x00024cb8();
  bVar10 = iVar2 == 0;
  local_6 = (byte ****)0x2d6d;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc549;
  iVar2 = func_0x00024cb8();
  local_17e6 = iVar2 == 0;
  local_6 = (byte ****)0x2d72;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc562;
  iVar2 = func_0x00024cb8();
  local_17b2 = iVar2 == 0;
  local_6 = (byte ****)0x2d78;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc57b;
  iVar2 = func_0x00024cb8();
  local_17b8 = iVar2 == 0;
  local_6 = (byte ****)0x7a4;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc594;
  iVar2 = func_0x00024cb8();
  local_17e2 = iVar2 == 0;
  local_6 = (byte ****)0x2d7f;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc5ad;
  iVar2 = func_0x00024cb8();
  local_a8 = iVar2 == 0;
  local_6 = (byte ****)0x2d84;
  local_8 = (byte ****)param_4;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc5c6;
  iVar2 = func_0x00024cb8();
  if (iVar2 == 0) {
LAB_3ab8_1a65:
    local_17b6 = '\x01';
  }
  else {
    local_6 = (byte ****)0x2d8d;
    local_8 = (byte ****)param_4;
    ppppbStack_a = (byte ****)0x22b2;
    ppppbStack_c = (byte ****)0xc5d8;
    iVar2 = func_0x00024cb8();
    if (iVar2 == 0) goto LAB_3ab8_1a65;
    local_17b6 = '\0';
  }
  local_6 = (byte ****)0x22b2;
  local_8 = (byte ****)0xc5ef;
  func_0x0000c3ca();
  if ((((local_17ea == '\0') && (local_17b8 == '\0')) && (local_aa == '\0')) && (local_3e == '\0'))
  {
    local_17e4 = 0;
  }
  else {
    local_17e4 = 1;
  }
  local_6 = (byte ****)0x885;
  puVar6 = (uint *)0x885;
  local_8 = (byte ****)0xc61d;
  func_0x0000c354();
  if ((((local_17b2 == '\0') && (local_17b8 == '\0')) &&
      ((local_17e2 == '\0' && ((local_17b6 == '\0' && (local_42 == '\0')))))) && (local_aa == '\0'))
  {
    puVar7 = puVar6;
    if ((bVar10) || (local_17e6 != '\0')) {
      local_40 = (byte ****)*param_5;
      if ((param_2 == 0) && (1 < *(byte *)0x132)) {
        if (bVar10) {
          local_8 = (byte ****)0x1b;
          ppppbStack_a = (byte ****)0x885;
          puVar6 = (uint *)0x11f2;
          ppppbStack_c = (byte ****)0xc70c;
          local_6 = local_40;
          func_0x00012038();
        }
        puVar7 = puVar6;
        if (local_17e6 != '\0') {
          local_6 = local_40;
          local_8 = (byte ****)0x1c;
          puVar7 = (uint *)0x11f2;
          ppppbStack_c = (byte ****)0xc721;
          ppppbStack_a = (byte ****)puVar6;
          func_0x00012038();
        }
      }
      goto LAB_3ab8_1bbc;
    }
    if (local_a8 == '\0') {
      local_40 = (byte ****)0xd18;
    }
    else {
      local_40 = (byte ****)0xe82;
    }
  }
  else {
    if ((param_2 == 0) && (1 < *(byte *)0x132)) {
      if (local_17b2 != '\0') {
        local_6 = (byte ****)0xd44;
        local_8 = (byte ****)0x15;
        ppppbStack_a = (byte ****)0x885;
        puVar6 = (uint *)0x11f2;
        ppppbStack_c = (byte ****)0xc66c;
        func_0x00012038();
      }
      puVar7 = puVar6;
      if (local_17b8 != '\0') {
        local_6 = (byte ****)0xd44;
        local_8 = (byte ****)0x16;
        puVar7 = (uint *)0x11f2;
        ppppbStack_c = (byte ****)0xc682;
        ppppbStack_a = (byte ****)puVar6;
        func_0x00012038();
      }
      puVar6 = puVar7;
      if (local_17b6 != '\0') {
        if (*(int *)0xa62 == 0x11) {
          local_8 = (byte ****)0x17;
        }
        else {
          local_8 = (byte ****)0x18;
        }
        local_6 = (byte ****)0xd44;
        puVar6 = (uint *)0x11f2;
        ppppbStack_c = (byte ****)0xc6a8;
        ppppbStack_a = (byte ****)puVar7;
        func_0x00012038();
      }
      puVar7 = puVar6;
      if (local_42 != '\0') {
        local_6 = (byte ****)0xd44;
        local_8 = (byte ****)0x19;
        puVar7 = (uint *)0x11f2;
        ppppbStack_c = (byte ****)0xc6bd;
        ppppbStack_a = (byte ****)puVar6;
        func_0x00012038();
      }
      puVar6 = puVar7;
      if (local_aa != '\0') {
        local_6 = (byte ****)0xd44;
        local_8 = (byte ****)0x1a;
        puVar6 = (uint *)0x11f2;
        ppppbStack_c = (byte ****)0xc6d3;
        ppppbStack_a = (byte ****)puVar7;
        func_0x00012038();
      }
    }
    local_40 = (byte ****)0xd44;
    puVar7 = puVar6;
  }
  *param_5 = (int)local_40;
LAB_3ab8_1bbc:
  local_17b4 = 0;
  do {
    *(undefined1 *)((int)local_a6 + local_17b4) = 0x20;
    local_17b4 = local_17b4 + 1;
  } while (local_17b4 < 0x50);
  local_56 = 0;
  if (local_17e4 == 0) {
    local_17bc = *(undefined2 *)0xa84;
    local_17ba = 0;
  }
  else {
    local_17bc = *(undefined2 *)0xa82;
    local_17ba = 0xffff;
  }
  local_6 = (byte ****)local_17ba;
  local_8 = (byte ****)local_17bc;
  ppppbStack_a = (byte ****)0x1;
  ppppbStack_c = (byte ****)0x1;
  ppppbStack_e = local_a6;
  ppppbStack_12 = (byte ****)0xc794;
  puStack_10 = puVar7;
  FUN_1000_02b5();
  local_6 = (byte ****)0x42e;
  local_8 = (byte ****)0x2d96;
  ppppbStack_a = local_a6;
  ppppbStack_c = (byte ****)0xdef;
  ppppbStack_e = (byte ****)0xc7a9;
  FUN_21f2_3454();
  local_6 = (byte ****)local_17ba;
  local_8 = (byte ****)local_17bc;
  ppppbStack_a = (byte ****)0x1;
  ppppbStack_c = (byte ****)0x22;
  ppppbVar3 = local_a6;
  puStack_10 = (uint *)0x22b2;
  uVar8 = 0xdef;
  ppppbStack_12 = (byte ****)0xc7c6;
  ppppbStack_e = ppppbVar3;
  FUN_1000_02b5();
  uVar4 = (undefined1)((uint)ppppbVar3 >> 8);
  local_17dc = 0;
  if (*(byte *)((int)local_40 + 1) != 0x3a) {
    local_6 = (byte ****)0xc13f;
    local_8 = local_40;
    ppppbStack_a = (byte ****)0xdef;
    uVar8 = 0x22b2;
    ppppbStack_c = (byte ****)0xc7e2;
    func_0x00024c86();
  }
  local_6 = (byte ****)&local_17b4;
  local_8 = (byte ****)(*(byte *)local_40 - 0x40);
  ppppbStack_c = (byte ****)0xc7f9;
  ppppbStack_a = (byte ****)uVar8;
  func_0x00027882();
  local_6 = (byte ****)0x29;
  local_8 = (byte ****)local_36;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc808;
  iVar2 = func_0x0002701e();
  if (iVar2 == 0) {
    local_17dc = 1;
  }
  else {
    local_6 = local_40;
    local_8 = (byte ****)0x22b2;
    ppppbStack_a = (byte ****)0xc81e;
    FUN_21f2_50a5();
    local_6 = (byte ****)0x29;
    local_8 = local_40;
    ppppbStack_a = (byte ****)0x22b2;
    ppppbStack_c = (byte ****)0xc82b;
    func_0x0002701e();
    local_6 = (byte ****)local_36;
    local_8 = (byte ****)0x22b2;
    ppppbStack_a = (byte ****)0xc836;
    FUN_21f2_50a5();
  }
  local_6 = (byte ****)&local_17b4;
  local_8 = (byte ****)(*(byte *)0xc13f - 0x40);
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xc84a;
  func_0x00027882();
  if ((local_42 == '\0') && (local_aa == '\0')) {
    if (local_a8 == '\0') {
      if (local_3e == '\0') {
        if (bVar10) {
          local_6 = (byte ****)0x2da3;
        }
        else if (local_17e6 == '\0') {
          if ((local_17b8 == '\0') && (local_17b2 == '\0')) {
            if (local_17e2 == '\0') {
              if (local_17b6 == '\0') {
                local_6 = (byte ****)0x2db3;
              }
              else {
                local_6 = (byte ****)&local_b0;
              }
            }
            else {
              local_6 = (byte ****)0x2daf;
            }
          }
          else {
            local_6 = (byte ****)0x2dab;
          }
        }
        else {
          local_6 = (byte ****)0x2da7;
        }
      }
      else {
        local_6 = (byte ****)0x2efc;
      }
    }
    else {
      local_6 = (byte ****)0x2d9f;
    }
  }
  else {
    local_6 = (byte ****)0x10c;
  }
  local_8 = (byte ****)*(undefined2 *)0xd72;
  ppppbStack_a = (byte ****)0x22b2;
  puVar6 = (uint *)0x22b2;
  ppppbStack_c = (byte ****)0xc8c5;
  func_0x00024c86();
  if (local_17e0 != '\0') {
    local_6 = (byte ****)*(int *)0xd72;
    local_8 = (byte ****)0x28;
    ppppbStack_a = (byte ****)0x22b2;
    puVar6 = (uint *)0x11f2;
    ppppbStack_c = (byte ****)0xc8db;
    func_0x00012038();
  }
  local_3a = (uint)(local_17e4 == 0);
  if (local_a8 != '\0') {
    local_3a = 2;
  }
  if ((param_2 != 0) ||
     ((((*(int *)0xd76 == 0 && ((*(int *)0xa62 != 0x1b || (*(byte *)0x13b < 2)))) &&
       (((((char)local_6 == '\0' && ((local_17b2 == '\0' && (local_42 == '\0')))) ||
         (*(byte *)0x132 % 10 < 3)) &&
        (((((!bVar10 && (local_a8 == '\0')) && (local_17e6 == '\0')) &&
          ((local_17b6 == '\0' && (local_17e2 == '\0')))) || (*(byte *)0x132 % 10 < 4)))))) &&
      ((local_17e4 == 0 || (*(byte *)0x132 % 10 < 5)))))) {
    local_6 = (byte ****)0x2db7;
    local_8 = local_40;
    ppppbStack_a = (byte ****)0xbf48;
    ppppbStack_e = (byte ****)0xc99e;
    ppppbStack_c = (byte ****)puVar6;
    func_0x0001263c();
    local_17e8 = (byte ****)0x0;
    local_17d6 = 0x30;
    local_17d5 = 0;
    local_6 = (byte ****)&local_17d6;
    local_8 = (byte ****)&local_17e8;
    ppppbStack_a = (byte ****)CONCAT11(uVar4,0x10);
    ppppbStack_c = (byte ****)0xbf48;
    ppppbStack_e = local_17b0;
    puStack_10 = (uint *)0x11f2;
    ppppbStack_12 = (byte ****)0xc9cb;
    FUN_3ab8_03f5();
    local_38 = local_17e8;
    local_3c = local_17e8;
    puVar6 = (uint *)0x11f2;
    if (local_a8 == '\0') {
      local_6 = local_40;
      local_8 = (byte ****)0xbf48;
      ppppbStack_a = (byte ****)0x11f2;
      ppppbStack_c = (byte ****)0xc9fa;
      func_0x00024c86();
      local_6 = (byte ****)0x2dbb;
      local_8 = local_40;
      ppppbStack_a = (byte ****)0xbf48;
      ppppbStack_c = (byte ****)0x22b2;
      ppppbStack_e = (byte ****)0xca0c;
      func_0x0001263c();
      local_6 = (byte ****)*(undefined2 *)0xd72;
      local_8 = (byte ****)0xbf48;
      ppppbStack_a = (byte ****)0x11f2;
      puVar6 = (uint *)0x22b2;
      ppppbStack_c = (byte ****)0xca1c;
      FUN_21f2_2d26();
      local_6 = (byte ****)&local_17d6;
      local_8 = (byte ****)&local_17e8;
      ppppbStack_a = (byte ****)&uStack_1800;
      ppppbStack_c = (byte ****)0xbf48;
      ppppbStack_e = local_17b0;
      puStack_10 = (uint *)0x22b2;
      ppppbStack_12 = (byte ****)0xca38;
      FUN_3ab8_03f5();
    }
    if (((*(char *)0x139 == '\x01') &&
        ((((bVar10 || (local_17e6 != '\0')) || (local_17e2 != '\0')) || (local_17b6 != '\0')))) ||
       (*(char *)0x139 == '\x02')) {
      if (local_17e8 != (byte ****)0x0) {
        local_6 = local_17e8;
        local_8 = local_17b0;
        ppppbStack_c = (byte ****)0xca78;
        ppppbStack_a = (byte ****)puVar6;
        FUN_3ab8_0177();
      }
    }
    else if (local_17e8 != (byte ****)0x0) {
      local_6 = local_17e8;
      local_8 = local_17b0;
      ppppbStack_c = (byte ****)0xca8e;
      ppppbStack_a = (byte ****)puVar6;
      FUN_3ab8_027a();
    }
    if ((int)local_17e8 <= (int)local_3c) {
      local_3c = (byte ****)((int)local_17e8 + -1);
    }
    local_8 = (byte ****)0xcad0;
    local_6 = (byte ****)puVar6;
    FUN_3ab8_09aa();
    ppppbVar3 = local_3c;
LAB_3ab8_1f50:
    local_3c = ppppbVar3;
    local_6 = (byte ****)0x87a;
    local_8 = (byte ****)local_180a;
    ppppbStack_c = (byte ****)0xcade;
    ppppbStack_a = (byte ****)puVar6;
    FUN_21f2_3454();
    local_6 = (byte ****)local_180a;
    local_8 = (byte ****)local_17fe;
    ppppbStack_a = (byte ****)0x22b2;
    ppppbStack_c = (byte ****)0xcaef;
    FUN_21f2_3454();
    local_6 = (byte ****)0x2dbe;
    local_8 = (byte ****)local_17fe;
    ppppbStack_a = (byte ****)0x22b2;
    puVar6 = (uint *)0x22b2;
    ppppbStack_c = (byte ****)0xcaff;
    FUN_21f2_2d26();
    if (local_17dc == 0) {
      local_6 = (byte ****)param_4;
      puStack_10 = (uint *)&local_17d6;
      ppppbStack_a = local_17e8;
      ppppbStack_c = local_40;
      ppppbStack_e = local_3c;
      ppppbStack_12 = local_17b0;
      iStack_14 = local_17e4;
      uStack_16 = 0x22b2;
      uStack_18 = 0xcb2a;
      local_8 = (byte ****)puStack_10;
      FUN_3ab8_0e4c();
    }
LAB_3ab8_1fad:
    do {
      local_8 = (byte ****)0xcb32;
      local_6 = (byte ****)puVar6;
      func_0x0000c340();
      local_6 = (byte ****)0x885;
      local_8 = (byte ****)0xcb37;
      func_0x00010526();
      local_6 = (byte ****)0xdef;
      local_8 = (byte ****)0xcb3c;
      func_0x0000c340();
      local_6 = (byte ****)0x652;
      local_8 = (byte ****)(uint)*(byte *)local_40;
      ppppbStack_a = (byte ****)0x640;
      ppppbStack_c = (byte ****)0x2dc4;
      ppppbStack_e = local_a6;
      puStack_10 = (uint *)0x885;
      ppppbStack_12 = (byte ****)0xcb5a;
      FUN_21f2_3454();
      if ((local_17ea == '\0') && (local_17b8 == '\0')) {
        if (local_aa != '\0') {
          local_6 = (byte ****)0x2df8;
          local_8 = local_a6;
          ppppbStack_a = (byte ****)0x22b2;
          ppppbStack_c = (byte ****)0xcbb6;
          FUN_21f2_2d26();
          local_6 = (byte ****)0x7f2;
          local_8 = local_a6;
          ppppbStack_a = (byte ****)0x22b2;
          ppppbStack_c = (byte ****)0xcbc6;
          FUN_21f2_2d26();
          local_6 = (byte ****)0x2dfa;
          goto LAB_3ab8_206f;
        }
        if (((local_42 != '\0') || (local_3e != '\0')) || (local_17e0 != '\0')) {
          local_6 = (byte ****)0x2e00;
          goto LAB_3ab8_206f;
        }
        if (local_17b6 != '\0') {
          local_6 = (byte ****)0x2e0b;
          goto LAB_3ab8_206f;
        }
      }
      else {
        local_6 = (byte ****)0x2dee;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcb79;
        FUN_21f2_2d26();
        local_6 = (byte ****)0x7f2;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcb89;
        FUN_21f2_2d26();
        local_6 = (byte ****)0x2df0;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcb99;
        FUN_21f2_2d26();
        local_6 = (byte ****)local_17fe;
LAB_3ab8_206f:
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcbfa;
        FUN_21f2_2d26();
      }
      if ((((local_aa != '\0') || (local_42 != '\0')) || (local_3e != '\0')) ||
         ((local_17b6 != '\0' || (local_17e0 != '\0')))) {
        local_6 = (byte ****)0x2e16;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcc2b;
        FUN_21f2_2d26();
      }
      if (local_a8 != '\0') {
        local_6 = (byte ****)0x2e25;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcc45;
        FUN_21f2_3454();
        local_6 = (byte ****)local_180a;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcc56;
        FUN_21f2_2d26();
        local_6 = (byte ****)0x2e2d;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcc66;
        FUN_21f2_2d26();
        local_6 = (byte ****)0x640;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcc76;
        FUN_21f2_2d26();
        local_6 = (byte ****)0x2e3e;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcc86;
        FUN_21f2_2d26();
        local_6 = (byte ****)(uint)*(byte *)local_40;
        local_8 = (byte ****)0x2e40;
        ppppbStack_a = (byte ****)local_1814;
        ppppbStack_c = (byte ****)0x22b2;
        ppppbStack_e = (byte ****)0xcc9e;
        FUN_21f2_3454();
        local_6 = (byte ****)local_1814;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xccb0;
        FUN_21f2_2d26();
        local_6 = (byte ****)0x652;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xccc0;
        FUN_21f2_2d26();
        local_6 = (byte ****)0x2e45;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xccd0;
        FUN_21f2_2d26();
        local_6 = (byte ****)local_17fe;
        local_8 = local_a6;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xcce1;
        FUN_21f2_2d26();
      }
      local_6 = local_a6;
      local_8 = (byte ****)0x4;
      ppppbStack_a = (byte ****)0x22b2;
      puVar6 = (uint *)0x1bb4;
      ppppbStack_c = (byte ****)0xccf1;
      FUN_1def_07a4();
      while( true ) {
        if (((local_17ea == '\0') && (local_17b8 == '\0')) && (local_aa == '\0')) {
          local_6 = (byte ****)0x0;
          local_8 = (byte ****)0x7;
        }
        else {
          local_6 = (byte ****)0xffff;
          local_8 = (byte ****)*(undefined2 *)0xa82;
        }
        ppppbStack_a = (byte ****)0x1;
        ppppbStack_c = (byte ****)0x1;
        ppppbStack_e = local_a6;
        puVar7 = (uint *)0xdef;
        ppppbStack_12 = (byte ****)0xcd28;
        puStack_10 = puVar6;
        FUN_1000_02b5();
        *(undefined2 *)0xc26 = 1;
        *(undefined2 *)0xa4a = 1;
        *(undefined2 *)0xa48 = 2;
        if ((((local_17ea != '\0') || (local_17b8 != '\0')) || (local_aa != '\0')) ||
           (((local_42 != '\0' || (local_3e != '\0')) ||
            ((local_17b6 != '\0' || (local_17e0 != '\0')))))) {
          *(undefined2 *)0xa48 = 4;
        }
        local_6 = (byte ****)&local_181a;
        local_8 = (byte ****)&local_1816;
        ppppbStack_a = (byte ****)local_1814;
        ppppbStack_c = local_3c;
        ppppbStack_e = local_17e8;
        puStack_10 = (uint *)0xdef;
        ppppbStack_12 = (byte ****)0xcd89;
        local_17b4 = FUN_3ab8_140e();
        *(undefined2 *)0xc26 = 0;
        *(undefined2 *)0xa4a = 0;
        *(undefined2 *)0xa48 = 0;
        if (((local_181a != 0) && (0x1a0 < (int)local_1814[0])) &&
           (((int)local_1814[0] < 0x208 && ((int)local_1816 < *(int *)0xa5e)))) {
          local_17b4 = 0x33;
        }
        puVar6 = puVar7;
        if (((*(int *)0x158 != 0) || (local_17b4 == -1)) ||
           ((local_17b4 == 0x33 && (local_a8 != '\0')))) goto LAB_3ab8_225d;
        if (local_17b4 == 99) goto LAB_3ab8_1bbc;
        if (((local_181a != 0) && (0x80 < (int)local_1814[0])) && ((int)local_1816 < *(int *)0xa5e))
        {
          local_6 = (byte ****)&local_1828;
          local_8 = (byte ****)&local_1826;
          ppppbStack_a = (byte ****)&local_182a;
          ppppbStack_c = &local_1824;
          ppppbStack_e = (byte ****)0xdef;
          puVar6 = (uint *)0x885;
          puStack_10 = (uint *)0xce22;
          func_0x0000dcbd();
          if (0x40 < local_1828) {
            local_181a = 0;
            local_17b4 = 0x6200;
          }
        }
        if (((local_17b4 == 0x31) || (local_17b4 == 0xd)) ||
           (((local_181a != 0 && ((0xa0 < (int)local_1814[0] && ((int)local_1814[0] < 0xf8)))) &&
            ((int)local_1816 < *(int *)0xa5e)))) {
          if ((local_17dc == 0) && (0 < (int)local_17e8)) {
            local_17b4 = 1;
            goto LAB_3ab8_2339;
          }
          local_6 = (byte ****)0x1dc;
          ppppbStack_a = (byte ****)0xce7e;
          local_8 = (byte ****)puVar6;
          func_0x00012276();
          puVar6 = (uint *)0x11f2;
        }
        if ((local_17b4 == 0x32) ||
           ((((local_181a != 0 && (0x100 < (int)local_1814[0])) && ((int)local_1814[0] < 0x198)) &&
            ((int)local_1816 < *(int *)0xa5e)))) {
          local_ac = 100;
          goto LAB_3ab8_2fa3;
        }
        if ((local_17b4 == 0x6200) && (*(char *)0x132 != '\0')) goto LAB_3ab8_1d8a;
        if ((local_17b6 != '\0') && (local_17b4 == 0x33)) {
          if (3 < *(byte *)0xb782) {
            local_6 = (byte ****)0x0;
            pcVar1 = (code *)swi(0x3f);
            (*pcVar1)();
          }
          local_ac = 2;
          goto LAB_3ab8_2fa3;
        }
        local_6 = (byte ****)puVar6;
        if ((((local_17ea != '\0') || (local_17b8 != '\0')) ||
            ((local_aa != '\0' ||
             (((local_42 != '\0' || (local_3e != '\0')) || (local_17e0 != '\0')))))) &&
           (local_17b4 == 0x33)) break;
        while (((((local_17ea != '\0' || (local_17b8 != '\0')) || (local_aa != '\0')) ||
                (((local_42 != '\0' || (local_3e != '\0')) ||
                 ((local_a8 != '\0' || ((local_17b6 != '\0' || (local_17e0 != '\0')))))))) &&
               ((local_17b4 == 0x34 ||
                (((local_181a != 0 && (0x210 < (int)local_1814[0])) &&
                 ((int)local_1816 < *(int *)0xa5e))))))) {
          if (((local_17ea != '\0') || (local_17b8 != '\0')) || (local_a8 != '\0')) {
            local_8 = (byte ****)0xd235;
            func_0x0000c340();
            local_6 = (byte ****)0x2e6b;
            local_8 = (byte ****)0x885;
            ppppbStack_a = (byte ****)0xd23e;
            func_0x00012276();
            local_6 = (byte ****)0x11f2;
            local_8 = (byte ****)0xd244;
            func_0x00010526();
            local_186a[0] = local_186a[0] & 0xff00;
            local_6 = (byte ****)0xa;
            *(undefined2 *)0xc26 = 1;
            local_8 = (byte ****)0x1;
            ppppbStack_a = (byte ****)0x1e;
            ppppbStack_c = (byte ****)local_186a;
            ppppbStack_e = (byte ****)0xdef;
            puStack_10 = (uint *)0xd262;
            local_17de = FUN_12c1_03d3();
            *(undefined2 *)0xc26 = 0;
            local_6 = (byte ****)0x11f2;
            puVar7 = (uint *)0x2c1;
            local_8 = (byte ****)0xd274;
            func_0x00002cc6();
            if (3 < *(byte *)0xb782) {
              local_6 = (byte ****)0x1;
              pcVar1 = (code *)swi(0x3f);
              (*pcVar1)();
            }
            if ((*(char *)0xbf48 == '\0') || (local_17de == -1)) goto LAB_3ab8_1bbc;
            local_6 = (byte ****)local_186a;
            local_8 = local_40;
            ppppbStack_a = (byte ****)0xbf48;
            ppppbStack_c = (byte ****)0x2c1;
            puVar7 = (uint *)0x11f2;
            ppppbStack_e = (byte ****)0xd2aa;
            func_0x0001263c();
            local_6 = (byte ****)0xbf48;
            local_8 = (byte ****)0x11f2;
            ppppbStack_a = (byte ****)0xd2b5;
            iVar2 = FUN_3ab8_002b();
            if (iVar2 == 0) {
              local_6 = (byte ****)0xbf48;
              local_8 = (byte ****)0x11f2;
              ppppbStack_a = (byte ****)0xd2ce;
              FUN_3ab8_1853();
              local_6 = (byte ****)0xbf48;
              local_8 = (byte ****)0x11f2;
              puVar7 = (uint *)0x22b2;
              ppppbStack_a = (byte ****)0xd2d8;
              FUN_21f2_509e();
            }
            goto LAB_3ab8_273a;
          }
          if ((((local_aa != '\0') || (local_42 != '\0')) || (local_3e != '\0')) ||
             ((local_17b6 != '\0' || (local_17e0 != '\0')))) goto LAB_3ab8_277f;
        }
        if (local_17b4 == 0x3a00) {
          local_181a = 1;
          local_1814[0] = 0x270;
          local_1816 = 0x78;
        }
        if (local_17b4 == 0x3d00) {
          local_181a = 1;
          local_1814[0] = 0x270;
          local_1816 = *(int *)0x1b42 * 0x10 - 0x28;
        }
        if (local_17b4 == 0x3600) {
          local_181a = 1;
          local_1814[0] = 600;
          local_1816 = *(int *)0x1b42 * 0x10 - 0x14;
        }
        if (local_17b4 == 0x3700) {
          local_181a = 1;
          local_1814[0] = 600;
          local_1816 = 0x68;
        }
        if (local_181a != 0) {
          if (*(int *)0xa58 <= (int)local_1814[0]) {
            if ((*(int *)0x1b42 * 0x10 + -0x1c < (int)local_1816) &&
               ((int)local_1816 <= *(int *)0xa5a)) {
              local_8 = (byte ****)((int)local_8 + *(int *)0x1b42 + -10);
              if ((int)local_17e8 < (int)((int)local_8 + *(int *)0x1b42 + -9)) {
                local_8 = (byte ****)((int)local_17e8 + (9 - *(int *)0x1b42));
              }
            }
            else {
              if ((0x6d < (int)local_1816) || ((int)local_1816 < 0x62)) goto LAB_3ab8_2a62;
              local_8 = (byte ****)((int)local_8 + (8 - *(int *)0x1b42));
            }
            if ((int)local_8 < 0) {
              local_8 = (byte ****)0x0;
            }
            local_3c = (byte ****)0xffff;
            local_38 = local_8;
            goto LAB_3ab8_2339;
          }
LAB_3ab8_2a62:
          uVar5 = (int)local_1816 >> 0xf;
          local_1818 = (((int)((local_1816 ^ uVar5) - uVar5) >> 4 ^ uVar5) - uVar5) + -7;
          uVar5 = (int)local_1814[0] >> 0xf;
          local_1814[0] = (((int)((local_1814[0] ^ uVar5) - uVar5) >> 3 ^ uVar5) - uVar5) + 1;
          if ((((0x4e < (int)local_1814[0]) || (local_1814[0] == 0x1e)) || (local_1814[0] == 0x1f))
             && ((-1 < local_1818 && (local_1818 <= *(int *)0x1b42 + -10)))) {
            if (local_1818 == 0) {
              local_3c = (byte ****)0xffff;
              local_38 = (byte ****)((int)local_38 + -1);
              if ((int)local_38 < 0) {
                local_38 = (byte ****)0x0;
              }
            }
            else if (*(int *)0x1b42 - local_1818 == 10) {
              local_3c = (byte ****)((9 - *(int *)0x1b42) / 2 + -1);
              local_38 = (byte ****)((int)local_38 + 1);
              if ((int)local_17e8 <= (int)local_38) {
                local_38 = (byte ****)((int)local_17e8 + -1);
              }
            }
            else {
              local_38 = (byte ****)
                         ((int)((local_1816 - 0x82) * 0x3e) / (*(int *)0x1b42 * 0x10 + -0xb2));
              if ((int)local_17e8 <= (int)local_38) {
                local_38 = (byte ****)((int)local_17e8 + -1);
              }
              if ((int)local_38 < 0) {
                local_38 = (byte ****)0x0;
              }
            }
            goto LAB_3ab8_2339;
          }
          if (((0x10 < (int)local_1814[0]) && ((int)local_1814[0] < 0x4e)) &&
             ((-1 < local_1818 && (local_1818 < *(int *)0x1b42 + -9)))) {
            local_38 = (byte ****)((int)local_8 + local_1818);
            goto LAB_3ab8_2339;
          }
        }
      }
      local_17b4 = 1;
      local_8 = (byte ****)0xcf89;
      func_0x0001bb4e();
      local_6 = (byte ****)0x42e;
      local_8 = (byte ****)0x2e54;
      ppppbStack_a = (byte ****)0x1bb4;
      ppppbStack_c = (byte ****)0xcf96;
      func_0x00012276();
      local_6 = (byte ****)0xd;
      local_8 = (byte ****)0xcf6;
      ppppbStack_a = (byte ****)0xbf48;
      ppppbStack_c = (byte ****)0x11f2;
      ppppbStack_e = (byte ****)0xcfa9;
      func_0x00024d00();
      if (((local_aa != '\0') || (local_42 != '\0')) || (local_3e != '\0')) {
        *(undefined1 *)0xbf48 = 0;
      }
      *(undefined2 *)0xc26 = 1;
      local_6 = (byte ****)0x5;
      local_8 = (byte ****)0x11;
      ppppbStack_a = (byte ****)0x22b2;
      ppppbStack_c = (byte ****)0xcfd7;
      FUN_1000_0599();
      local_6 = (byte ****)0xdef;
      local_8 = (byte ****)0xcfde;
      func_0x00010526();
      local_6 = (byte ****)0x6;
      local_8 = (byte ****)0x11;
      ppppbStack_a = (byte ****)0xdef;
      ppppbStack_c = (byte ****)0xcfeb;
      FUN_1000_0599();
      local_6 = (byte ****)0xdef;
      local_8 = (byte ****)0xcff2;
      func_0x00010526();
      local_6 = (byte ****)0x0;
      local_8 = (byte ****)0x0;
      ppppbStack_a = (byte ****)0x1;
      ppppbStack_c = (byte ****)0x7;
      ppppbStack_e = (byte ****)*(undefined2 *)0xa5a;
      puStack_10 = (uint *)0x27f;
      ppppbStack_12 = (byte ****)*(int *)0xa5e;
      iStack_14 = 0x27f;
      uStack_16 = 0xdef;
      uStack_18 = 0xd010;
      func_0x0000f350();
      ppppbVar3 = (byte ****)0xdef;
      do {
        local_6 = (byte ****)0xc;
        local_8 = (byte ****)0x5;
        ppppbStack_a = (byte ****)0x11;
        ppppbStack_c = (byte ****)0xbf48;
        puStack_10 = (uint *)0xd028;
        ppppbStack_e = ppppbVar3;
        local_17de = FUN_12c1_03d3();
        ppppbVar3 = (byte ****)0x11f2;
      } while (local_17de == 0);
      *(undefined2 *)0xc26 = 0;
      local_6 = (byte ****)0x11f2;
      puVar6 = (uint *)0x2c1;
      local_8 = (byte ****)0xd03e;
      func_0x00002cc6();
      local_6 = (byte ****)0xbf48;
      local_8 = (byte ****)0x2c1;
      ppppbStack_a = (byte ****)0xd046;
      FUN_3ab8_1853();
      if (3 < *(byte *)0xb782) {
        local_6 = (byte ****)0x1;
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      ppppbVar3 = local_3c;
      if (local_17de == -1) goto LAB_3ab8_1f50;
      local_6 = (byte ****)0x2c1;
      local_8 = (byte ****)0xd067;
      FUN_1000_0620();
      local_6 = (byte ****)0x2e;
      local_8 = (byte ****)0xbf48;
      ppppbStack_a = (byte ****)0xdef;
      ppppbStack_c = (byte ****)0xd074;
      iVar2 = func_0x00025b06();
      if (iVar2 == 0) {
        local_6 = (byte ****)0xbf48;
        local_8 = (byte ****)0x22b2;
        ppppbStack_a = (byte ****)0xd083;
        uVar5 = func_0x00024ce4();
        if (8 < uVar5) {
          *(undefined1 *)0xbf50 = 0;
        }
        local_6 = (byte ****)0x2e5e;
        local_8 = (byte ****)0xbf48;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xd09b;
        FUN_21f2_2d26();
        local_6 = (byte ****)*(undefined2 *)0xd72;
        local_8 = (byte ****)0xbf48;
        ppppbStack_a = (byte ****)0x22b2;
        ppppbStack_c = (byte ****)0xd0aa;
        FUN_21f2_2d26();
      }
      local_6 = (byte ****)0x3;
      local_8 = local_40;
      ppppbStack_a = (byte ****)local_183e;
      ppppbStack_c = (byte ****)0x22b2;
      ppppbStack_e = (byte ****)0xd0bd;
      func_0x00024d00();
      local_183c = 0;
      local_6 = (byte ****)0xbf48;
      local_8 = (byte ****)local_183e;
      ppppbStack_a = (byte ****)0x22b2;
      ppppbStack_c = (byte ****)0xd0d3;
      FUN_21f2_2d26();
      if ((local_42 == '\0') && (local_3e == '\0')) goto LAB_3ab8_25f6;
      local_6 = (byte ****)local_186a;
      local_8 = (byte ****)0x0;
      ppppbStack_a = (byte ****)local_183e;
      ppppbStack_c = (byte ****)0x22b2;
      ppppbStack_e = (byte ****)0xd0f6;
      iVar2 = func_0x000276d7();
      if (iVar2 == 0) goto LAB_3ab8_25f6;
      local_6 = (byte ****)0x2;
      local_8 = (byte ****)0x11;
      ppppbStack_a = (byte ****)0x22b2;
      ppppbStack_c = (byte ****)0xd10a;
      FUN_1000_0599();
      local_6 = (byte ****)0xdef;
      local_8 = (byte ****)0xd111;
      func_0x00010526();
      local_6 = (byte ****)0x3;
      local_8 = (byte ****)0x11;
      ppppbStack_a = (byte ****)0xdef;
      ppppbStack_c = (byte ****)0xd11e;
      FUN_1000_0599();
      local_6 = (byte ****)0xdef;
      local_8 = (byte ****)0xd125;
      func_0x00010526();
      local_6 = (byte ****)0x0;
      local_8 = (byte ****)0x0;
      ppppbStack_a = (byte ****)0x1;
      ppppbStack_c = (byte ****)0x7;
      ppppbStack_e = (byte ****)*(int *)0xa5a;
      puStack_10 = (uint *)0x27f;
      ppppbStack_12 = (byte ****)*(int *)0xa5e;
      iStack_14 = 0x27f;
      uStack_16 = 0xdef;
      uStack_18 = 0xd143;
      func_0x0000f350();
      local_6 = (byte ****)0x2;
      local_8 = (byte ****)0x14;
      ppppbStack_a = (byte ****)0xdef;
      ppppbStack_c = (byte ****)0xd153;
      FUN_1000_0599();
      *(undefined2 *)0xc22 = 1;
      local_6 = (byte ****)0x42e;
      local_8 = (byte ****)0x2e60;
      ppppbStack_a = (byte ****)0xdef;
      puVar6 = (uint *)0x11f2;
      ppppbStack_c = (byte ****)0xd168;
      func_0x00012276();
      *(undefined2 *)0xc08 = 1;
      *(undefined2 *)0xbc0 = 1;
    } while( true );
  }
LAB_3ab8_1d8a:
  local_ac = local_3a + 200;
  goto LAB_3ab8_2fa3;
LAB_3ab8_25f6:
  local_38 = local_17e8;
  local_3c = local_17e8;
  local_6 = (byte ****)0xc;
  local_8 = (byte ****)0xbf48;
  ppppbStack_a = (byte ****)(auStack_17ac + (int)local_17e8 * 0x2e);
  ppppbStack_c = (byte ****)0x22b2;
  puVar6 = (uint *)0x22b2;
  ppppbStack_e = (byte ****)0xd199;
  func_0x00024d00();
  iVar2 = (int)local_3c * 0x5c;
  auStack_17a0[iVar2] = 0;
  auStack_177d[iVar2] = 0;
  auStack_17a0[iVar2 + 2] = 0;
  abStack_175c[iVar2] = 0;
LAB_3ab8_2339:
  if ((local_38 == local_3c) || (local_17b4 == 1)) goto LAB_3ab8_234b;
  ppppbVar3 = local_38;
  if ((int)local_17e8 <= (int)local_38) {
    ppppbVar3 = local_3c;
  }
  goto LAB_3ab8_1f50;
LAB_3ab8_277f:
  local_6 = (byte ****)0xed4;
  local_8 = (byte ****)0x2e88;
  ppppbStack_a = local_18ba;
  ppppbStack_e = (byte ****)0xd311;
  ppppbStack_c = (byte ****)puVar6;
  FUN_21f2_3454();
  local_6 = local_18ba;
  local_8 = (byte ****)0x5;
  ppppbStack_a = (byte ****)0x22b2;
  ppppbStack_c = (byte ****)0xd322;
  FUN_1def_07a4();
  local_6 = (byte ****)&local_181a;
  local_8 = (byte ****)local_1822;
  ppppbStack_a = local_181e;
  ppppbStack_c = local_18ba;
  *(undefined2 *)0xc26 = 1;
  ppppbStack_e = (byte ****)0x1;
  puStack_10 = (uint *)0x1bb4;
  puVar6 = (uint *)0x1bb4;
  ppppbStack_12 = (byte ****)0xd344;
  local_186a[0] = FUN_1def_0904();
  *(undefined2 *)0xc26 = 0;
  if (*(int *)0x158 != 0) {
    if (3 < *(byte *)0xb782) {
      local_6 = (byte ****)0x0;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
LAB_3ab8_225d:
    local_ac = -1;
    goto LAB_3ab8_2fa3;
  }
  if (local_186a[0] != 0xffff) {
    if (local_186a[0] == 5) goto code_r0x0003d37b;
    goto LAB_3ab8_2871;
  }
  goto LAB_3ab8_1fad;
code_r0x0003d37b:
  local_6 = (byte ****)0x1bb4;
  local_8 = (byte ****)0xd380;
  func_0x0000c340();
  local_6 = (byte ****)0x2eb8;
  local_8 = (byte ****)0x885;
  ppppbStack_a = (byte ****)0xd389;
  func_0x00012276();
  local_6 = (byte ****)0x11f2;
  local_8 = (byte ****)0xd38f;
  func_0x00010526();
  local_18ba[0]._0_1_ = 0;
  local_6 = (byte ****)0x3;
  *(undefined2 *)0xc26 = 1;
  local_8 = (byte ****)0x1;
  ppppbStack_a = (byte ****)0x16;
  ppppbStack_c = local_18ba;
  ppppbStack_e = (byte ****)0xdef;
  puStack_10 = (uint *)0xd3ad;
  local_17de = FUN_12c1_03d3();
  *(undefined2 *)0xc26 = 0;
  local_6 = (byte ****)0x11f2;
  puVar6 = (uint *)0x2c1;
  local_8 = (byte ****)0xd3bf;
  func_0x00002cc6();
  if (3 < *(byte *)0xb782) {
    local_6 = (byte ****)0x1;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  if (local_17de == 0) {
    local_6 = (byte ****)0x2ed2;
    local_8 = local_18ba;
    ppppbStack_a = (byte ****)0x2c1;
    puVar6 = (uint *)0x22b2;
    ppppbStack_c = (byte ****)0xd3e5;
    func_0x00024c86();
  }
  if (local_17de == -1) goto LAB_3ab8_277f;
LAB_3ab8_2871:
  puVar7 = puVar6;
  if (local_186a[0] == 4) {
    local_6 = (byte ****)0xed4;
    local_8 = local_18ba;
    puVar7 = (uint *)0x22b2;
    ppppbStack_c = (byte ****)0xd406;
    ppppbStack_a = (byte ****)puVar6;
    func_0x00024c86();
  }
  puVar6 = puVar7;
  if (local_186a[0] == 3) {
    local_6 = (byte ****)0x2ed4;
    local_8 = local_18ba;
    puVar6 = (uint *)0x22b2;
    ppppbStack_c = (byte ****)0xd41d;
    ppppbStack_a = (byte ****)puVar7;
    func_0x00024c86();
  }
  puVar7 = puVar6;
  if (local_186a[0] == 2) {
    local_6 = (byte ****)0x2ed8;
    local_8 = local_18ba;
    puVar7 = (uint *)0x22b2;
    ppppbStack_c = (byte ****)0xd434;
    ppppbStack_a = (byte ****)puVar6;
    func_0x00024c86();
  }
  puVar6 = puVar7;
  if (local_186a[0] == 1) {
    local_6 = (byte ****)0x2edc;
    local_8 = local_18ba;
    puVar6 = (uint *)0x22b2;
    ppppbStack_c = (byte ****)0xd44b;
    ppppbStack_a = (byte ****)puVar7;
    func_0x00024c86();
  }
  if (((int)local_186a[0] < 1) || (5 < (int)local_186a[0])) goto LAB_3ab8_277f;
  ppppbStack_a = (byte ****)puVar6;
  if (local_17e0 == '\0') {
    if (local_3e == '\0') {
      if (local_17b6 == '\0') {
        local_8 = (byte ****)0x10c;
      }
      else {
        local_8 = (byte ****)&local_b0;
      }
    }
    else {
      local_8 = (byte ****)0x2efc;
    }
    local_6 = local_18ba;
    uVar8 = 0x22b2;
    ppppbStack_c = (byte ****)0xd4b0;
    func_0x00024c86();
  }
  else {
    local_6 = local_18ba;
    local_8 = (byte ****)0x28;
    uVar8 = 0x11f2;
    ppppbStack_c = (byte ****)0xd476;
    func_0x000120ec();
  }
  for (local_17b4 = 2; ppppbStack_a = (byte ****)uVar8, local_17b4 < 0x19;
      local_17b4 = local_17b4 + 1) {
    local_6 = (byte ****)local_17b4;
    local_8 = (byte ****)0x11;
    ppppbStack_c = (byte ****)0xd4ca;
    FUN_1000_0599();
    local_6 = (byte ****)0xdef;
    uVar8 = 0xdef;
    local_8 = (byte ****)0xd4d1;
    func_0x00010526();
  }
  local_6 = (byte ****)0x1;
  local_8 = (byte ****)0x1;
  puVar7 = (uint *)0xdef;
  ppppbStack_c = (byte ****)0xd4dd;
  FUN_1000_0599();
LAB_3ab8_273a:
  *(undefined2 *)0xc08 = 1;
  *(undefined2 *)0xbc0 = 1;
  goto LAB_3ab8_1bbc;
LAB_3ab8_234b:
  if ((abStack_175c[(int)local_3c * 0x5c] & 0x10) != 0) {
    local_6 = (byte ****)(auStack_17ac + (int)local_3c * 0x2e);
    local_8 = local_40;
    ppppbStack_a = (byte ****)0xbf48;
    puVar7 = (uint *)0x11f2;
    ppppbStack_e = (byte ****)0xceee;
    ppppbStack_c = (byte ****)puVar6;
    func_0x0001263c();
    local_6 = (byte ****)0xbf48;
    local_8 = (byte ****)0x11f2;
    ppppbStack_a = (byte ****)0xcef9;
    iVar2 = FUN_3ab8_002b();
    if (iVar2 == 0) {
      local_6 = (byte ****)0xbf48;
      local_8 = local_40;
      ppppbStack_a = (byte ****)0x11f2;
      puVar7 = (uint *)0x22b2;
      ppppbStack_c = (byte ****)0xcf0d;
      func_0x00024c86();
    }
    goto LAB_3ab8_1bbc;
  }
  if (local_17e4 != 0) {
    local_6 = (byte ****)(auStack_17ac + (int)local_3c * 0x2e);
    local_8 = local_40;
    ppppbStack_a = (byte ****)0xbf48;
    ppppbStack_e = (byte ****)0xd786;
    ppppbStack_c = (byte ****)puVar6;
    func_0x0001263c();
    local_6 = (byte ****)0x2;
    local_8 = (byte ****)0xbf48;
    ppppbStack_a = (byte ****)0x11f2;
    puVar6 = (uint *)0x22b2;
    ppppbStack_c = (byte ****)0xd796;
    iVar2 = func_0x00026f7a();
    if ((iVar2 != 0) && (*(int *)0x7a34 == 0xd)) {
      local_6 = (byte ****)0x1;
      local_8 = (byte ****)0x1;
      ppppbStack_a = (byte ****)0x22b2;
      ppppbStack_c = (byte ****)0xd7ad;
      FUN_1000_0599();
      local_6 = (byte ****)0xdef;
      local_8 = (byte ****)0xd7b4;
      func_0x00010526();
      local_6 = (byte ****)0x0;
      local_8 = (byte ****)0x2;
      ppppbStack_a = (byte ****)0x1;
      ppppbStack_c = (byte ****)0x14;
      ppppbStack_e = (byte ****)0xbf48;
      puStack_10 = (uint *)0xdef;
      ppppbStack_12 = (byte ****)0xd7cc;
      FUN_1000_02b5();
      local_6 = (byte ****)0xffff;
      local_8 = (byte ****)0x2;
      ppppbStack_a = (byte ****)0x1;
      ppppbStack_c = (byte ****)0x4;
      ppppbStack_e = (byte ****)0x860;
      puStack_10 = (uint *)0x584;
      ppppbStack_12 = (byte ****)0xdef;
      iStack_14 = -0x2814;
      ppppbStack_e = (byte ****)func_0x0001450d();
      puStack_10 = (uint *)0x11f2;
      ppppbStack_12 = (byte ****)0xd7f4;
      FUN_1000_02b5();
      local_6 = (byte ****)0x1;
      local_8 = (byte ****)0xdef;
      puVar7 = (uint *)0x11f2;
      ppppbStack_a = (byte ****)0xd800;
      func_0x000121f9();
      goto LAB_3ab8_1bbc;
    }
  }
  if (local_17ea == '\0') goto LAB_3ab8_2e36;
  local_8 = (byte ****)0xd812;
  local_6 = (byte ****)puVar6;
  func_0x0001bb4e();
  local_6 = (byte ****)0x2ee0;
  local_8 = (byte ****)0x1bb4;
  ppppbStack_a = (byte ****)0xd81b;
  func_0x00012276();
  local_6 = (byte ****)0x11f2;
  local_8 = (byte ****)0xd821;
  FUN_1000_060e();
  local_6 = (byte ****)0x0;
  local_8 = (byte ****)0xdef;
  ppppbStack_a = (byte ****)0xd829;
  func_0x0000daa6();
  if (local_17e8 == local_3c) {
    local_8 = (byte ****)0xbefe;
  }
  else {
    local_8 = (byte ****)(auStack_17a0 + (int)local_3c * 0x5c + 2);
  }
  local_6 = (byte ****)0x20;
  ppppbStack_a = (byte ****)0xbf48;
  ppppbStack_c = (byte ****)0x885;
  ppppbStack_e = (byte ****)0xd856;
  func_0x00024d00();
  *(undefined1 *)0xbf68 = 0;
  if ((local_17e8 == local_3c) && (*(char *)0xcf6 == '\0')) {
    *(undefined1 *)0xbf48 = 0;
  }
  local_6 = (byte ****)0x22b2;
  local_8 = (byte ****)0xd878;
  func_0x00002ca6();
  *(undefined2 *)0xc26 = 1;
  local_6 = (byte ****)0x20;
  local_8 = (byte ****)0x5;
  ppppbStack_a = (byte ****)0x2f;
  ppppbStack_c = (byte ****)0xbf48;
  ppppbStack_e = (byte ****)0x2c1;
  puStack_10 = (uint *)0xd893;
  local_17de = FUN_12c1_03d3();
  *(undefined2 *)0xc26 = 0;
  local_6 = (byte ****)0x11f2;
  local_8 = (byte ****)0xd8a5;
  func_0x00002cc6();
  if (3 < *(byte *)0xb782) {
    local_6 = (byte ****)0x1;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  local_6 = (byte ****)0x2c1;
  puVar7 = (uint *)0xdef;
  local_8 = (byte ****)0xd8bb;
  FUN_1000_0620();
  if ((local_17de != -1) && (local_17de != 99)) {
    local_6 = (byte ****)0x20;
    local_8 = (byte ****)0xbf48;
    ppppbStack_a = (byte ****)(auStack_17a0 + (int)local_3c * 0x5c + 2);
    ppppbStack_c = (byte ****)0xdef;
    ppppbStack_e = (byte ****)0xd8e6;
    func_0x00024d00();
    local_6 = (byte ****)0x22b2;
    local_8 = (byte ****)0xd8ee;
    FUN_1000_060e();
    if (local_17e8 == local_3c) {
      local_8 = (byte ****)0xbf1e;
    }
    else {
      local_8 = (byte ****)(auStack_177d + (int)local_3c * 0x5c);
    }
    local_6 = (byte ****)0x20;
    ppppbStack_a = (byte ****)0xbf48;
    ppppbStack_c = (byte ****)0xdef;
    ppppbStack_e = (byte ****)0xd91a;
    func_0x00024d00();
    *(undefined1 *)0xbf68 = 0;
    if ((local_17e8 == local_3c) && (*(char *)0xcf6 == '\0')) {
      *(undefined1 *)0xbf48 = 0;
    }
    local_6 = (byte ****)0x22b2;
    local_8 = (byte ****)0xd93c;
    func_0x00002ca6();
    *(undefined2 *)0xc26 = 1;
    local_6 = (byte ****)0x20;
    local_8 = (byte ****)0x6;
    ppppbStack_a = (byte ****)0x2f;
    ppppbStack_c = (byte ****)0xbf48;
    ppppbStack_e = (byte ****)0x2c1;
    puStack_10 = (uint *)0xd957;
    local_17de = FUN_12c1_03d3();
    *(undefined2 *)0xc26 = 0;
    local_6 = (byte ****)0x11f2;
    local_8 = (byte ****)0xd969;
    func_0x00002cc6();
    if (3 < *(byte *)0xb782) {
      local_6 = (byte ****)0x1;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    local_6 = (byte ****)0x2c1;
    puVar7 = (uint *)0xdef;
    local_8 = (byte ****)0xd97f;
    FUN_1000_0620();
    if ((local_17de != -1) && (local_17de != 99)) {
      local_6 = (byte ****)0x20;
      local_8 = (byte ****)0xbf48;
      ppppbStack_a = (byte ****)(auStack_177d + (int)local_3c * 0x5c);
      ppppbStack_c = (byte ****)0xdef;
      ppppbStack_e = (byte ****)0xd9aa;
      func_0x00024d00();
      local_6 = (byte ****)0x0;
      local_8 = (byte ****)0x22b2;
      puVar6 = (uint *)0x11f2;
      ppppbStack_a = (byte ****)0xd9b5;
      func_0x00012004();
LAB_3ab8_2e36:
      uVar8 = 0x885;
      local_8 = (byte ****)0xd9bb;
      local_6 = (byte ****)puVar6;
      func_0x0000c3ca();
      if (1 < *(byte *)0x132) {
        if (local_17b2 != '\0') {
          local_6 = local_40;
          local_8 = (byte ****)0x15;
          ppppbStack_a = (byte ****)0x885;
          uVar8 = 0x11f2;
          ppppbStack_c = (byte ****)0xd9d8;
          func_0x000120ec();
        }
        uVar9 = uVar8;
        if (local_17b8 != '\0') {
          local_6 = local_40;
          local_8 = (byte ****)0x16;
          uVar9 = 0x11f2;
          ppppbStack_c = (byte ****)0xd9ed;
          ppppbStack_a = (byte ****)uVar8;
          func_0x000120ec();
        }
        uVar8 = uVar9;
        if (local_17b6 != '\0') {
          if (*(int *)0xa62 == 0x11) {
            local_8 = (byte ****)0x17;
          }
          else {
            local_8 = (byte ****)0x18;
          }
          local_6 = (byte ****)0xd44;
          uVar8 = 0x11f2;
          ppppbStack_c = (byte ****)0xda13;
          ppppbStack_a = (byte ****)uVar9;
          func_0x000120ec();
        }
        uVar9 = uVar8;
        if (local_42 != '\0') {
          local_6 = local_40;
          local_8 = (byte ****)0x19;
          uVar9 = 0x11f2;
          ppppbStack_c = (byte ****)0xda27;
          ppppbStack_a = (byte ****)uVar8;
          func_0x000120ec();
        }
        uVar8 = uVar9;
        if (local_aa != '\0') {
          local_6 = local_40;
          local_8 = (byte ****)0x1a;
          uVar8 = 0x11f2;
          ppppbStack_c = (byte ****)0xda3c;
          ppppbStack_a = (byte ****)uVar9;
          func_0x000120ec();
        }
        uVar9 = uVar8;
        if (bVar10) {
          local_6 = local_40;
          local_8 = (byte ****)0x1b;
          uVar9 = 0x11f2;
          ppppbStack_c = (byte ****)0xda50;
          ppppbStack_a = (byte ****)uVar8;
          func_0x000120ec();
        }
        uVar8 = uVar9;
        if (local_17e6 != '\0') {
          local_6 = local_40;
          local_8 = (byte ****)0x1c;
          uVar8 = 0x11f2;
          ppppbStack_c = (byte ****)0xda65;
          ppppbStack_a = (byte ****)uVar9;
          func_0x000120ec();
        }
      }
      iVar2 = (int)local_3c * 0x5c;
      local_6 = (byte ****)(auStack_17ac + (int)local_3c * 0x2e);
      local_8 = local_40;
      ppppbStack_a = (byte ****)0xbf48;
      ppppbStack_e = (byte ****)0xda80;
      ppppbStack_c = (byte ****)uVar8;
      func_0x0001263c();
      local_6 = (byte ****)0xbf48;
      local_8 = (byte ****)param_3;
      ppppbStack_a = (byte ****)0x11f2;
      ppppbStack_c = (byte ****)0xda8f;
      func_0x00024c86();
      if (((((local_42 == '\0') && (local_aa == '\0')) && (local_3e == '\0')) &&
          (((!bVar10 && (local_17e6 == '\0')) &&
           ((local_17b8 == '\0' && ((local_17b2 == '\0' && (local_17e2 == '\0')))))))) &&
         ((local_17b6 == '\0' && (local_a8 == '\0')))) {
        local_6 = (byte ****)0x20;
        local_8 = (byte ****)(auStack_17a0 + iVar2 + 2);
        ppppbStack_a = (byte ****)0xbefe;
        ppppbStack_c = (byte ****)0x22b2;
        ppppbStack_e = (byte ****)0xdae6;
        func_0x00024d00();
        local_6 = (byte ****)0x20;
        local_8 = (byte ****)(auStack_177d + iVar2);
        ppppbStack_a = (byte ****)0xbf1e;
        ppppbStack_c = (byte ****)0x22b2;
        ppppbStack_e = (byte ****)0xdafb;
        func_0x00024d00();
      }
      local_6 = (byte ****)0x22b2;
      local_8 = (byte ****)0xdb03;
      func_0x0000ac64();
      local_6 = (byte ****)0xc13f;
      local_8 = (byte ****)0x885;
      puVar6 = (uint *)0x22b2;
      ppppbStack_a = (byte ****)0xdb0c;
      FUN_21f2_50a5();
      if (3 < *(byte *)0xb782) {
        local_6 = (byte ****)0x0;
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      local_ac = 0;
LAB_3ab8_2fa3:
      local_6 = (byte ****)0x0;
      ppppbStack_a = (byte ****)0xdb2b;
      local_8 = (byte ****)puVar6;
      func_0x00011f2c();
      return local_ac;
    }
  }
  goto LAB_3ab8_1bbc;
}



/* 3ab8:2fb5  FUN_3ab8_2fb5  150 bytes, 1 callers */

void __cdecl16far FUN_3ab8_2fb5(void)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  func_0x0000c3ca(0x22b2);
  func_0x0000c354(0x885);
  func_0x0000a76b(0x885,0,*(int *)0xa5a + 1,*(undefined2 *)0x1b3e,*(undefined2 *)0x1b40);
  func_0x0000a76b(0x885,*(int *)0xa58 + 1,*(int *)0xa5e + 1,*(int *)0x1b3e + -1,*(int *)0xa5a + -1);
  func_0x0000f350(0x885,*(undefined2 *)0xa58,*(undefined2 *)0xa5e,*(undefined2 *)0x1b3e,
                  *(undefined2 *)0xa5a,7,1,0,0);
  func_0x0000f350(0xdef,0,*(undefined2 *)0xa5a,*(undefined2 *)0x1b3e,*(undefined2 *)0xa5a,7,0,0,0);
  func_0x0000a799(0xdef);
  return;
}



/* 3ab8:304b  FUN_3ab8_304b  322 bytes, 2 callers */

int __cdecl16far FUN_3ab8_304b(undefined2 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  int local_36;
  undefined2 local_34;
  undefined1 *local_30;
  undefined1 local_2e [30];
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 **ppuStack_4;
  
  ppuStack_4 = (undefined1 **)0x3ab8;
  puStack_6 = (undefined1 *)0xdbd6;
  FUN_21f2_0ebc();
  ppuStack_4 = (undefined1 **)0x22b2;
  puStack_6 = (undefined1 *)0xdbdb;
  func_0x0000c3ca();
  iVar2 = *(int *)0xa62;
  ppuStack_4 = (undefined1 **)0x0;
  puStack_6 = (undefined1 *)0x885;
  puStack_8 = (undefined1 *)0xdbe9;
  func_0x0000daa6();
  ppuStack_4 = (undefined1 **)0x885;
  puStack_6 = (undefined1 *)0xdbef;
  func_0x0001bb8f();
  ppuStack_4 = (undefined1 **)0x1bb4;
  puStack_6 = (undefined1 *)0xdbf4;
  func_0x0001bba4();
  ppuStack_4 = (undefined1 **)0x1bb4;
  puStack_6 = (undefined1 *)0xdbf8;
  FUN_3ab8_2fb5();
  ppuStack_4 = (undefined1 **)0xc13f;
  puStack_6 = local_2e;
  puStack_8 = (undefined1 *)0x1bb4;
  iVar4 = 0x22b2;
  uStack_a = 0xdc05;
  func_0x00024c86();
  local_30 = local_2e;
  local_36 = 100;
  local_34 = 0;
  while (99 < local_36) {
    ppuStack_4 = &local_30;
    puStack_6 = (undefined1 *)param_2;
    puStack_8 = (undefined1 *)param_1;
    uStack_a = local_34;
    uStack_e = 0xdc2e;
    iStack_c = iVar4;
    local_36 = FUN_3ab8_18b1();
    puStack_6 = (undefined1 *)0xdc39;
    ppuStack_4 = (undefined1 **)iVar4;
    func_0x0000c3ca();
    iVar4 = 0x885;
    if (local_36 < 100) break;
    if (local_36 == 100) {
      ppuStack_4 = (undefined1 **)0xc13f;
      puStack_6 = local_30;
      pcVar3 = (code *)swi(0x3f);
      (*pcVar3)();
    }
    if (((local_36 == 200) || (local_36 == 0xc9)) || (local_36 == 0xca)) {
      ppuStack_4 = (undefined1 **)0x0;
      puStack_6 = (undefined1 *)0x885;
      puStack_8 = (undefined1 *)0xdc91;
      func_0x0000daa6();
      uVar1 = *(undefined1 *)0x4a;
      *(undefined1 *)0x4a = 0;
      ppuStack_4 = (undefined1 **)param_2;
      puStack_6 = (undefined1 *)0xc13f;
      puStack_8 = local_30;
      uStack_a = param_1;
      uStack_e = 0x885;
      uStack_10 = 0xdcb2;
      iStack_c = local_36;
      iVar4 = func_0x00031345();
      if (200 < iVar4) {
        local_36 = 0;
      }
      ppuStack_4 = (undefined1 **)0x0;
      puStack_6 = (undefined1 *)0x885;
      puStack_8 = (undefined1 *)0xdcc7;
      func_0x0000daa6();
      *(undefined1 *)0x4a = uVar1;
    }
    iVar4 = 0x885;
    ppuStack_4 = (undefined1 **)0x885;
    puStack_6 = (undefined1 *)0xdcd2;
    FUN_3ab8_2fb5();
    if (*(int *)0x158 != 0) break;
    local_34 = 1;
  }
  if ((*(int *)0x158 != 0) || (local_36 == -1)) {
    ppuStack_4 = (undefined1 **)iVar4;
    if (iVar2 == 0x1b) {
      puVar5 = (undefined1 *)0x885;
      puStack_6 = (undefined1 *)0xdce9;
      func_0x0000c3ca();
    }
    else {
      puVar5 = (undefined1 *)0x11f2;
      puStack_6 = (undefined1 *)0xdc5d;
      FUN_10ad_18a4();
    }
    ppuStack_4 = (undefined1 **)0xc13f;
    puStack_8 = (undefined1 *)0xdcf2;
    puStack_6 = puVar5;
    FUN_21f2_50a5();
    if (3 < *(byte *)0xb782) {
      ppuStack_4 = (undefined1 **)0x0;
      pcVar3 = (code *)swi(0x3f);
      (*pcVar3)();
    }
  }
  if (3 < *(byte *)0xb782) {
    ppuStack_4 = (undefined1 **)0x0;
    pcVar3 = (code *)swi(0x3f);
    (*pcVar3)();
  }
  return local_36;
}



/* 3ab8:319a  FUN_3ab8_319a  75 bytes, 1 callers */

void __cdecl16far FUN_3ab8_319a(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  FUN_21f2_0ebc();
  local_4 = &local_4;
  iVar1 = func_0x00027743(0x22b2,*(undefined2 *)0xd12,0xbf48,*(undefined2 *)0xbc78,200);
  if (iVar1 != 0) {
    local_4 = (undefined2 ***)0x2f00;
    FUN_13bf_0a03();
  }
  if ((int)local_4 < 200) {
    local_4 = (undefined2 **)0x35c;
    FUN_13bf_0a03();
  }
  return;
}



/* 3ab8:31e5  FUN_3ab8_31e5  75 bytes, 1 callers */

void __cdecl16far FUN_3ab8_31e5(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  FUN_21f2_0ebc();
  local_4 = &local_4;
  iVar1 = func_0x00027743(0x22b2,*(undefined2 *)0xd12,param_1,*(undefined2 *)0xbc78,param_2);
  if (iVar1 != 0) {
    local_4 = (undefined2 ***)0x2f04;
    FUN_13bf_0a03();
  }
  if ((int)local_4 < param_2) {
    local_4 = (undefined2 **)0x35c;
    FUN_13bf_0a03();
  }
  return;
}



/* 3ab8:3230  FUN_3ab8_3230  3229 bytes, 3 callers */

void __cdecl16far FUN_3ab8_3230(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 extraout_DX;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined2 local_cc [11];
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  int local_ac;
  undefined2 local_aa;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  uint local_68;
  undefined2 local_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined4 local_3a;
  int local_36;
  int local_34;
  int local_32;
  uint local_30;
  int local_2e;
  undefined2 local_2c;
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
  int iStack_16;
  int iStack_14;
  undefined4 uStack_12;
  undefined2 *puStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 *puStack_8;
  uint *puStack_6;
  
  puStack_6 = (uint *)0xddbb;
  FUN_21f2_0ebc();
  local_2c = (uint)local_2c._1_1_ << 8;
  if (param_1 == 0) {
    puStack_6 = (uint *)0x552;
    puStack_8 = &local_2a;
    uStack_a = 0x22b2;
    uVar4 = 0x22b2;
    uStack_c = 0xde36;
    FUN_21f2_3454();
  }
  else {
    puStack_6 = (uint *)0x424;
    puStack_8 = &local_2a;
    uStack_a = 0x22b2;
    uStack_c = 0xddd3;
    FUN_21f2_3454();
    puStack_6 = (uint *)0x42e;
    puStack_8 = &local_2a;
    uStack_a = 0x22b2;
    uStack_c = 0xdde2;
    FUN_21f2_2d26();
    puStack_6 = (uint *)0x2f06;
    puStack_8 = &local_2a;
    uStack_a = 0x22b2;
    uStack_c = 0xddf1;
    FUN_21f2_2d26();
    puStack_6 = (uint *)0x2;
    puStack_8 = (undefined2 *)param_2;
    uStack_a = 0x22b2;
    uVar4 = 0x22b2;
    uStack_c = 0xddff;
    iVar2 = func_0x00026f7a();
    if ((iVar2 != 0) && (*(int *)0x7a34 == 0xd)) {
      puStack_6 = (uint *)0x180;
      puStack_8 = (undefined2 *)param_2;
      uStack_a = 0x22b2;
      uVar4 = 0x22b2;
      uStack_c = 0xde18;
      iVar2 = FUN_21f2_507a();
      if (iVar2 != 0) {
        puStack_6 = &local_2a;
        puStack_8 = (undefined2 *)0x22b2;
        uVar4 = 0x11f2;
        uStack_a = 0xde27;
        FUN_13bf_0a03();
      }
    }
  }
  puStack_8 = (undefined2 *)0xde3d;
  puStack_6 = (uint *)uVar4;
  func_0x0000c3ca();
  puStack_6 = (uint *)0xbc;
  puStack_8 = (undefined2 *)param_4;
  uStack_a = 0xbf48;
  uStack_c = 0x885;
  puStack_e = (undefined2 *)0xde4d;
  func_0x0001263c();
  puStack_6 = (uint *)0x180;
  puStack_8 = (undefined2 *)0xbf48;
  uStack_a = 0x11f2;
  uVar4 = 0x22b2;
  uStack_c = 0xde5d;
  local_36 = FUN_21f2_34ec();
  if (local_36 == -1) {
    puStack_6 = (uint *)0x2f11;
    puStack_8 = (undefined2 *)0xc13f;
    uStack_a = 0x22b2;
    uStack_c = 0xde72;
    func_0x00024c86();
    puStack_6 = (uint *)0x31;
    puStack_8 = (undefined2 *)0xc13f;
    uStack_a = 0x22b2;
    uStack_c = 0xde81;
    func_0x0002701e();
    puStack_6 = (uint *)0xc13f;
    puStack_8 = (undefined2 *)param_4;
    uStack_a = 0x22b2;
    uStack_c = 0xde8f;
    func_0x00024c86();
    puStack_6 = &local_2a;
    puStack_8 = (undefined2 *)0x22b2;
    uVar4 = 0x11f2;
    uStack_a = 0xde9a;
    FUN_13bf_0a03();
  }
  puStack_6 = (uint *)local_36;
  uStack_a = 0xdea3;
  puStack_8 = (undefined2 *)uVar4;
  FUN_21f2_26c2();
  puStack_6 = (uint *)0xbc;
  puStack_8 = (undefined2 *)param_4;
  uStack_a = 0xbf48;
  uStack_c = 0x22b2;
  puStack_e = (undefined2 *)0xdeb4;
  func_0x0001263c();
  puStack_6 = (uint *)0xd12;
  puStack_8 = (undefined2 *)0x2;
  uStack_a = 0xbf48;
  uStack_c = 0x11f2;
  uVar4 = 0x22b2;
  puStack_e = (undefined2 *)0xdec8;
  iVar2 = func_0x00027724();
  if (iVar2 != 0) {
    puStack_6 = &local_2a;
    puStack_8 = (undefined2 *)0x22b2;
    uVar4 = 0x11f2;
    uStack_a = 0xded8;
    FUN_13bf_0a03();
  }
  local_36 = 0;
  do {
    *(undefined1 *)(local_36 + -0x40b8) = 0x20;
    local_36 = local_36 + 1;
  } while (local_36 < 200);
  *(undefined1 *)0xc00f = 10;
  puStack_6 = (uint *)0x5b6;
  puStack_8 = (undefined2 *)0x2f15;
  uStack_a = 0xbf48;
  puStack_e = (undefined2 *)0xdf06;
  uStack_c = uVar4;
  FUN_21f2_3454();
  local_2c = local_2c & 0xff00;
  local_36 = 0;
  do {
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (undefined2 *)0xdf1b;
    func_0x00029834();
    uVar6 = local_36 << 1 < 0;
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (undefined2 *)0xdf2b;
    func_0x000297e6();
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (undefined2 *)0xdf30;
    func_0x00029d78();
    puStack_6 = (uint *)0x22b2;
    puStack_8 = (undefined2 *)0xdf35;
    FUN_28b3_1181();
    if ((bool)uVar6) {
      local_2c = CONCAT11(local_2c._1_1_,1);
    }
    local_36 = local_36 + 1;
  } while (local_36 < 0x10);
  if ((char)local_2c != '\0') {
    *(undefined1 *)0xbf5e = 0x66;
  }
  local_36 = 0;
  do {
    *(undefined1 *)(local_36 + -0x4090) = *(undefined1 *)(param_3 + local_36);
    local_36 = local_36 + 1;
  } while (local_36 < 0x40);
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (undefined2 *)0xdf6d;
  FUN_3ab8_319a();
  puStack_6 = &local_30;
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xdf76;
  func_0x000257c0();
  local_36 = 0;
  do {
    *(undefined1 *)(local_36 + -0x40b8) = 0x20;
    local_36 = local_36 + 1;
  } while (local_36 < 200);
  *(undefined1 *)0xc00f = 10;
  if ((char)local_2c == '\0') {
    *(undefined1 *)0xd98 = 0x69;
    puStack_6 = (uint *)*(undefined2 *)0x66;
    puStack_8 = (undefined2 *)(*(int *)0x1b3e - *(int *)0xa58);
    uStack_a = *(undefined2 *)0x116c;
    uStack_c = 0x22b2;
    puStack_e = (undefined2 *)0xe11f;
    func_0x000297e6();
    uStack_c = 0x22b2;
    puStack_e = (undefined2 *)0xe124;
    func_0x00029d78();
    iStack_14 = 0x22b2;
    iStack_16 = 0xe12e;
    func_0x000299d1();
    iStack_14 = 0x22b2;
    iStack_16 = 0xe137;
    func_0x000297e6();
    iStack_14 = 0x22b2;
    iStack_16 = 0xe13c;
    func_0x00029d78();
    uStack_1c = 0x22b2;
    uStack_1e = 0xe146;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 0xe14f;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0xe154;
    func_0x00029d78();
    uStack_24 = 0x22b2;
    uStack_26 = 0xe15e;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xe167;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xe16c;
    func_0x00029d78();
    local_2c = 0x22b2;
    local_2e = 0xe176;
    func_0x000299d1();
    local_2c = *(undefined2 *)0x72;
    local_2e = *(int *)0x70;
    local_30 = *(uint *)0x6e;
    local_32 = *(undefined2 *)0x6c;
    local_34 = *(undefined2 *)0x6a;
    local_36 = *(undefined2 *)0x68;
    local_3a._0_2_ = local_30 - *(uint *)0xc134;
    local_3a._2_2_ = (local_2e - *(int *)0xc136) - (uint)(local_30 < *(uint *)0xc134);
    uStack_3c = 0x22b2;
    uStack_3e = 0xe1a7;
    func_0x000297e6();
    uStack_3c = 0x22b2;
    uStack_3e = 0xe1ac;
    func_0x00029d78();
    uStack_44 = 0x22b2;
    uStack_46 = 0xe1b6;
    func_0x000299d1();
    uStack_44 = 0x22b2;
    uStack_46 = 0xe1bf;
    func_0x000297e6();
    uStack_44 = 0x22b2;
    uStack_46 = 0xe1c4;
    func_0x00029d78();
    uStack_4c = 0x22b2;
    uStack_4e = 0xe1ce;
    func_0x000299d1();
    uStack_4c = 0x22b2;
    uStack_4e = 0xe1d7;
    func_0x000297e6();
    uStack_4c = 0x22b2;
    uStack_4e = 0xe1dc;
    func_0x00029d78();
    uStack_54 = 0x22b2;
    uStack_56 = 0xe1e6;
    func_0x000299d1();
    uStack_54 = 0x22b2;
    uStack_56 = 0xe1ef;
    func_0x000297e6();
    uStack_54 = 0x22b2;
    uStack_56 = 0xe1f4;
    func_0x00029d78();
    uStack_5c = 0x22b2;
    uStack_5e = 0xe1fe;
    func_0x000299d1();
    uStack_5c = *(undefined2 *)0xa6c;
    uStack_5e = *(undefined2 *)0xa6a;
    uStack_60 = *(undefined2 *)0xa68;
    uStack_62 = *(undefined2 *)0xb310;
    uStack_64 = 0x22b2;
    local_66 = 0xe217;
    func_0x000297e6();
    uStack_64 = 0x22b2;
    local_66 = 0xe21c;
    func_0x00029d78();
    uStack_64 = 0x22b2;
    local_66 = 0xe225;
    func_0x00029c74();
    uStack_64 = 0x22b2;
    local_66 = 0xe22a;
    local_ac = FUN_28b3_0f51();
    local_66 = *(undefined2 *)0x1d0;
    local_68 = *(undefined2 *)0x1d2;
    uStack_6a = *(undefined2 *)0x1ce;
    uStack_6c = *(undefined2 *)0x168;
    uStack_6e = *(undefined2 *)0x154;
    uStack_70 = *(undefined2 *)0x152;
    uStack_72 = *(undefined2 *)0x150;
    uStack_74 = *(undefined2 *)0x14e;
    uStack_76 = *(undefined2 *)0x14c;
    uStack_78 = *(undefined2 *)0x14a;
    uStack_7a = *(undefined2 *)0x148;
    uStack_7c = 0xd7a;
    uStack_7e = 0xbf48;
    uStack_80 = 0x22b2;
    uStack_82 = 0xe268;
    uStack_64 = local_ac;
    FUN_21f2_3454();
  }
  else {
    *(undefined1 *)0xd98 = 0x67;
    puStack_6 = (uint *)*(undefined2 *)0x66;
    puStack_8 = (undefined2 *)(*(int *)0x1b3e - *(int *)0xa58);
    uStack_a = *(undefined2 *)0x116c;
    uStack_c = 0x22b2;
    puStack_e = (undefined2 *)0xdfba;
    func_0x000297e6();
    uStack_c = 0x22b2;
    puStack_e = (undefined2 *)0xdfbf;
    func_0x00029d78();
    iStack_14 = 0x22b2;
    iStack_16 = 0xdfc9;
    func_0x000299d1();
    iStack_14 = 0x22b2;
    iStack_16 = 0xdfd2;
    func_0x000297e6();
    iStack_14 = 0x22b2;
    iStack_16 = 0xdfd7;
    func_0x00029d78();
    uStack_1c = 0x22b2;
    uStack_1e = 0xdfe1;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 0xdfea;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0xdfef;
    func_0x00029d78();
    uStack_24 = 0x22b2;
    uStack_26 = 0xdff9;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xe002;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xe007;
    func_0x00029d78();
    local_2c = 0x22b2;
    local_2e = 0xe011;
    func_0x000299d1();
    local_2c = *(undefined2 *)0x72;
    local_2e = *(int *)0x70;
    local_30 = *(uint *)0x6e;
    local_32 = *(undefined2 *)0x6c;
    local_34 = *(undefined2 *)0x6a;
    local_36 = *(undefined2 *)0x68;
    local_3a._0_2_ = local_30 - *(uint *)0xc134;
    local_3a._2_2_ = (local_2e - *(int *)0xc136) - (uint)(local_30 < *(uint *)0xc134);
    uStack_3c = 0x22b2;
    uStack_3e = 0xe042;
    func_0x000297e6();
    uStack_3c = 0x22b2;
    uStack_3e = 0xe047;
    func_0x00029d78();
    uStack_44 = 0x22b2;
    uStack_46 = 0xe051;
    func_0x000299d1();
    uStack_44 = 0x22b2;
    uStack_46 = 0xe05a;
    func_0x000297e6();
    uStack_44 = 0x22b2;
    uStack_46 = 0xe05f;
    func_0x00029d78();
    uStack_4c = 0x22b2;
    uStack_4e = 0xe069;
    func_0x000299d1();
    uStack_4c = 0x22b2;
    uStack_4e = 0xe072;
    func_0x000297e6();
    uStack_4c = 0x22b2;
    uStack_4e = 0xe077;
    func_0x00029d78();
    uStack_54 = 0x22b2;
    uStack_56 = 0xe081;
    func_0x000299d1();
    uStack_54 = 0x22b2;
    uStack_56 = 0xe08a;
    func_0x000297e6();
    uStack_54 = 0x22b2;
    uStack_56 = 0xe08f;
    func_0x00029d78();
    uStack_5c = 0x22b2;
    uStack_5e = 0xe099;
    func_0x000299d1();
    uStack_5c = *(undefined2 *)0xa6c;
    uStack_5e = *(undefined2 *)0xa6a;
    uStack_60 = *(undefined2 *)0xa68;
    uStack_62 = *(undefined2 *)0xb310;
    uStack_64 = 0x22b2;
    local_66 = 0xe0b2;
    func_0x000297e6();
    uStack_64 = 0x22b2;
    local_66 = 0xe0b7;
    func_0x00029d78();
    uStack_6c = 0x22b2;
    uStack_6e = 0xe0c1;
    func_0x000299d1();
    uStack_6c = *(undefined2 *)0x1d0;
    uStack_6e = *(undefined2 *)0x1d2;
    uStack_70 = *(undefined2 *)0x1ce;
    uStack_72 = *(undefined2 *)0x168;
    uStack_74 = *(undefined2 *)0x154;
    uStack_76 = *(undefined2 *)0x152;
    uStack_78 = *(undefined2 *)0x150;
    uStack_7a = *(undefined2 *)0x14e;
    uStack_7c = *(undefined2 *)0x14c;
    uStack_7e = *(undefined2 *)0x14a;
    uStack_80 = *(undefined2 *)0x148;
    uStack_82 = 0xd7a;
    uStack_84 = 0xbf48;
    uStack_86 = 0x22b2;
    uStack_88 = 0xe0fa;
    FUN_21f2_3454();
  }
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (undefined2 *)0xe26f;
  FUN_3ab8_319a();
  local_36 = 0;
  do {
    *(undefined1 *)(local_36 + -0x40b8) = 0x20;
    local_36 = local_36 + 1;
  } while (local_36 < 200);
  *(undefined1 *)0xc00f = 10;
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (undefined2 *)0xe294;
  func_0x000297e6();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (undefined2 *)0xe299;
  func_0x00029d78();
  puStack_e = (undefined2 *)0x22b2;
  uStack_12._2_2_ = (undefined2 *)0xe2a3;
  func_0x000299d1();
  puStack_e = (undefined2 *)0x22b2;
  uStack_12._2_2_ = (undefined2 *)0xe2ac;
  func_0x000297e6();
  puStack_e = (undefined2 *)0x22b2;
  uStack_12._2_2_ = (undefined2 *)0xe2b1;
  func_0x00029d78();
  iStack_16 = 0x22b2;
  uStack_18 = 0xe2bb;
  func_0x000299d1();
  iStack_16 = 0x22b2;
  uStack_18 = 0xe2c4;
  func_0x000297e6();
  iStack_16 = 0x22b2;
  uStack_18 = 0xe2c9;
  func_0x00029d78();
  uStack_1e = 0x22b2;
  uStack_20 = 0xe2d3;
  func_0x000299d1();
  uStack_1e = *(undefined2 *)0x102c;
  uStack_20 = *(undefined2 *)0x102a;
  uStack_22 = *(undefined2 *)0x1028;
  uStack_24 = *(undefined2 *)0x1026;
  uStack_26 = *(undefined2 *)0x1024;
  uStack_28 = *(undefined2 *)0x1022;
  local_2a = *(undefined2 *)0x1020;
  local_2c = *(undefined2 *)0x101e;
  local_2e = *(undefined2 *)0x101c;
  local_30 = *(uint *)0x101a;
  local_32 = *(undefined2 *)0x1018;
  local_34 = *(undefined2 *)0x1016;
  local_36 = *(undefined2 *)0x1014;
  local_3a._2_2_ = *(undefined2 *)0x1012;
  local_3a._0_2_ = *(undefined2 *)0x1010;
  uStack_3c = *(undefined2 *)0x100e;
  uStack_3e = *(undefined2 *)0x100c;
  uStack_40 = *(undefined2 *)0x100a;
  uStack_42 = *(undefined2 *)0x1008;
  uStack_44 = *(undefined2 *)0x1006;
  uStack_46 = *(undefined2 *)0xffc;
  uStack_48 = *(undefined2 *)0xffa;
  uStack_4a = *(undefined2 *)0xff8;
  uStack_4c = *(undefined2 *)0xff6;
  uStack_4e = *(undefined2 *)0x1098;
  uStack_50 = *(undefined2 *)0x1096;
  uStack_52 = *(undefined2 *)0x1092;
  uStack_54 = 0x22b2;
  uStack_56 = 0xe348;
  func_0x000297e6();
  uStack_54 = 0x22b2;
  uStack_56 = 0xe34d;
  func_0x00029d78();
  uStack_5c = 0x22b2;
  uStack_5e = 0xe357;
  func_0x000299d1();
  uStack_5c = 0x22b2;
  uStack_5e = 0xe360;
  func_0x000297e6();
  uStack_5c = 0x22b2;
  uStack_5e = 0xe365;
  func_0x00029d78();
  uStack_64 = 0x22b2;
  local_66 = 0xe36f;
  func_0x000299d1();
  uStack_64 = 0x22b2;
  local_66 = 0xe378;
  func_0x000297e6();
  uStack_64 = 0x22b2;
  local_66 = 0xe37d;
  func_0x00029d78();
  uStack_6c = 0x22b2;
  uStack_6e = 0xe387;
  func_0x000299d1();
  uStack_6c = 0x22b2;
  uStack_6e = 0xe390;
  func_0x000297e6();
  uStack_6c = 0x22b2;
  uStack_6e = 0xe395;
  func_0x00029d78();
  uStack_74 = 0x22b2;
  uStack_76 = 0xe39f;
  func_0x000299d1();
  uStack_74 = 0x22b2;
  uStack_76 = 0xe3a8;
  func_0x000297e6();
  uStack_74 = 0x22b2;
  uStack_76 = 0xe3ad;
  func_0x00029d78();
  uStack_7c = 0x22b2;
  uStack_7e = 0xe3b7;
  func_0x000299d1();
  uStack_7c = 0x22b2;
  uStack_7e = 0xe3c0;
  func_0x000297e6();
  uStack_7c = 0x22b2;
  uStack_7e = 0xe3c5;
  func_0x00029d78();
  uStack_84 = 0x22b2;
  uStack_86 = 0xe3cf;
  func_0x000299d1();
  uStack_84 = *(undefined2 *)0x1124;
  uStack_86 = *(undefined2 *)0x112e;
  uStack_88 = *(undefined2 *)0x1126;
  uStack_8a = *(undefined2 *)0x112c;
  uStack_8c = *(undefined2 *)0x112a;
  uStack_8e = *(undefined2 *)0x1128;
  uStack_90 = 0x22b2;
  uStack_92 = 0xe3f0;
  func_0x000297e6();
  uStack_90 = 0x22b2;
  uStack_92 = 0xe3f5;
  func_0x00029d78();
  uStack_98 = 0x22b2;
  uStack_9a = 0xe3ff;
  func_0x000299d1();
  uStack_98 = 0x22b2;
  uStack_9a = 0xe408;
  func_0x000297e6();
  uStack_98 = 0x22b2;
  uStack_9a = 0xe40d;
  func_0x00029d78();
  uStack_a0 = 0x22b2;
  uStack_a2 = 0xe417;
  func_0x000299d1();
  uStack_a0 = 0x22b2;
  uStack_a2 = 0xe420;
  func_0x000297e6();
  uStack_a0 = 0x22b2;
  uStack_a2 = 0xe425;
  func_0x00029d78();
  uStack_a8 = 0x22b2;
  local_aa = 0xe42f;
  func_0x000299d1();
  uStack_a8 = 0x22b2;
  local_aa = 0xe438;
  func_0x000297e6();
  uStack_a8 = 0x22b2;
  local_aa = 0xe43d;
  func_0x00029d78();
  uStack_b0 = 0x22b2;
  uStack_b2 = 0xe447;
  func_0x000299d1();
  uStack_b0 = 0x2f2c;
  uStack_b2 = 0xbf48;
  uStack_b4 = 0x22b2;
  uStack_b6 = 0xe454;
  FUN_21f2_3454();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (undefined2 *)0xe45c;
  FUN_3ab8_319a();
  local_36 = 0;
  do {
    *(undefined1 *)(local_36 + -0x40b8) = 0x20;
    local_36 = local_36 + 1;
  } while (local_36 < 200);
  *(undefined1 *)0xc00f = 10;
  bVar1 = *(byte *)0x135;
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (undefined2 *)0xe48b;
  local_68 = (uint)bVar1;
  func_0x000297e6();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (undefined2 *)0xe490;
  func_0x00029d78();
  puStack_e = (undefined2 *)0x22b2;
  uStack_12._2_2_ = (undefined2 *)0xe49a;
  func_0x000299d1();
  uStack_12._2_2_ = (undefined2 *)*(undefined2 *)0x11ea;
  uStack_12._0_2_ = (undefined2 *)*(undefined2 *)0x11e4;
  iStack_14 = 0x22b2;
  iStack_16 = 0xe4ac;
  puStack_e = (undefined2 *)(uint)bVar1;
  func_0x000297e6();
  iStack_14 = 0x22b2;
  iStack_16 = 0xe4b1;
  func_0x00029d78();
  uStack_1c = 0x22b2;
  uStack_1e = 0xe4bb;
  func_0x000299d1();
  uStack_1c = 0x22b2;
  uStack_1e = 0xe4c4;
  func_0x000297e6();
  uStack_1c = 0x22b2;
  uStack_1e = 0xe4c9;
  func_0x00029d78();
  uStack_24 = 0x22b2;
  uStack_26 = 0xe4d3;
  func_0x000299d1();
  uStack_24 = 0x22b2;
  uStack_26 = 0xe4dc;
  func_0x000297e6();
  uStack_24 = 0x22b2;
  uStack_26 = 0xe4e1;
  func_0x00029d78();
  local_2c = 0x22b2;
  local_2e = 0xe4eb;
  func_0x000299d1();
  local_2c = 0x22b2;
  local_2e = 0xe4f4;
  func_0x000297e6();
  local_2c = 0x22b2;
  local_2e = 0xe4f9;
  func_0x00029d78();
  local_34 = 0x22b2;
  local_36 = 0xe503;
  func_0x000299d1();
  local_34 = 0x22b2;
  local_36 = 0xe50c;
  func_0x000297e6();
  local_34 = 0x22b2;
  local_36 = 0xe511;
  func_0x00029d78();
  uStack_3c = 0x22b2;
  uStack_3e = 0xe51b;
  func_0x000299d1();
  uStack_3c = 0x22b2;
  uStack_3e = 0xe524;
  func_0x000297e6();
  uStack_3c = 0x22b2;
  uStack_3e = 0xe529;
  func_0x00029d78();
  uStack_44 = 0x22b2;
  uStack_46 = 0xe533;
  func_0x000299d1();
  uStack_44 = 0x22b2;
  uStack_46 = 0xe53c;
  func_0x000297e6();
  uStack_44 = 0x22b2;
  uStack_46 = 0xe541;
  func_0x00029d78();
  uStack_4c = 0x22b2;
  uStack_4e = 0xe54b;
  func_0x000299d1();
  uStack_4c = 0x22b2;
  uStack_4e = 0xe554;
  func_0x000297e6();
  uStack_4c = 0x22b2;
  uStack_4e = 0xe559;
  func_0x00029d78();
  uStack_54 = 0x22b2;
  uStack_56 = 0xe563;
  func_0x000299d1();
  uStack_54 = 0x22b2;
  uStack_56 = 0xe56c;
  func_0x000297e6();
  uStack_54 = 0x22b2;
  uStack_56 = 0xe571;
  func_0x00029d78();
  uStack_5c = 0x22b2;
  uStack_5e = 0xe57b;
  func_0x000299d1();
  uStack_5c = 0x22b2;
  uStack_5e = 0xe584;
  func_0x000297e6();
  uStack_5c = 0x22b2;
  uStack_5e = 0xe589;
  func_0x00029d78();
  uStack_64 = 0x22b2;
  local_66 = 0xe593;
  func_0x000299d1();
  uStack_64 = 0x22b2;
  local_66 = 0xe59c;
  func_0x000297e6();
  uStack_64 = 0x22b2;
  local_66 = 0xe5a1;
  func_0x00029d78();
  uStack_6c = 0x22b2;
  uStack_6e = 0xe5ab;
  func_0x000299d1();
  uStack_6c = 0x22b2;
  uStack_6e = 0xe5b4;
  func_0x000297e6();
  uStack_6c = 0x22b2;
  uStack_6e = 0xe5b9;
  func_0x00029d78();
  uStack_74 = 0x22b2;
  uStack_76 = 0xe5c3;
  func_0x000299d1();
  uStack_74 = 0x22b2;
  uStack_76 = 0xe5cc;
  func_0x000297e6();
  uStack_74 = 0x22b2;
  uStack_76 = 0xe5d1;
  func_0x00029d78();
  uStack_7c = 0x22b2;
  uStack_7e = 0xe5db;
  func_0x000299d1();
  uStack_7c = 0x22b2;
  uStack_7e = 0xe5e4;
  func_0x000297e6();
  uStack_7c = 0x22b2;
  uStack_7e = 0xe5e9;
  func_0x00029d78();
  uStack_84 = 0x22b2;
  uStack_86 = 0xe5f3;
  func_0x000299d1();
  uStack_84 = 0x22b2;
  uStack_86 = 0xe5fc;
  func_0x000297e6();
  uStack_84 = 0x22b2;
  uStack_86 = 0xe601;
  func_0x00029d78();
  uStack_8c = 0x22b2;
  uStack_8e = 0xe60b;
  func_0x000299d1();
  uStack_8c = 0x22b2;
  uStack_8e = 0xe614;
  func_0x000297e6();
  uStack_8c = 0x22b2;
  uStack_8e = 0xe619;
  func_0x00029d78();
  uStack_94 = 0x22b2;
  uStack_96 = 0xe623;
  func_0x000299d1();
  uStack_94 = 0x22b2;
  uStack_96 = 0xe62c;
  func_0x000297e6();
  uStack_94 = 0x22b2;
  uStack_96 = 0xe631;
  func_0x00029d78();
  uStack_9c = 0x22b2;
  uStack_9e = 0xe63b;
  func_0x000299d1();
  uStack_9c = 0x22b2;
  uStack_9e = 0xe644;
  func_0x000297e6();
  uStack_9c = 0x22b2;
  uStack_9e = 0xe649;
  func_0x00029d78();
  uStack_a4 = 0x22b2;
  uStack_a6 = 0xe653;
  func_0x000299d1();
  uStack_a4 = *(undefined2 *)0xc0ae;
  uStack_a6 = *(undefined2 *)0xc0ac;
  uStack_a8 = *(undefined2 *)0xbefc;
  local_aa = *(undefined2 *)0xbefa;
  local_ac = 0xdde;
  uStack_ae = 0xbf48;
  uStack_b0 = 0x22b2;
  uStack_b2 = 0xe670;
  FUN_21f2_3454();
  puStack_6 = (uint *)0x22b2;
  puStack_8 = (undefined2 *)0xe678;
  FUN_3ab8_319a();
  puStack_6 = (uint *)0x194;
  puStack_8 = (undefined2 *)0xc3f0;
  uStack_a = 0x22b2;
  uStack_c = 0xe684;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x194;
  puStack_8 = (undefined2 *)0xc584;
  uStack_a = 0x22b2;
  uStack_c = 0xe692;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x65;
  puStack_8 = (undefined2 *)0xc0b4;
  uStack_a = 0x22b2;
  uStack_c = 0xe6a0;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x16;
  puStack_8 = (undefined2 *)0x16c;
  uStack_a = 0x22b2;
  uStack_c = 0xe6ae;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x16;
  puStack_8 = (undefined2 *)0x182;
  uStack_a = 0x22b2;
  uStack_c = 0xe6bc;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x16;
  puStack_8 = (undefined2 *)0x198;
  uStack_a = 0x22b2;
  uStack_c = 0xe6ca;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x16;
  puStack_8 = (undefined2 *)0x1ae;
  uStack_a = 0x22b2;
  uStack_c = 0xe6d8;
  FUN_3ab8_31e5();
  if ((char)local_2c == '\0') {
    local_ac = 0;
    do {
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (undefined2 *)0xe700;
      func_0x000297e6();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (undefined2 *)0xe705;
      func_0x00029d78();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (undefined2 *)0xe70e;
      func_0x00029c74();
      puStack_6 = (uint *)0x22b2;
      puStack_8 = (undefined2 *)0xe713;
      uVar4 = FUN_28b3_0f51();
      local_cc[local_ac] = uVar4;
      local_ac = local_ac + 1;
    } while (local_ac < 0x10);
    puStack_6 = (uint *)0x20;
    puStack_8 = local_cc;
  }
  else {
    puStack_6 = (uint *)0x40;
    puStack_8 = (undefined2 *)0xb2a;
  }
  uStack_a = 0x22b2;
  uStack_c = 0xe735;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x10;
  puStack_8 = (undefined2 *)0xb6c;
  uStack_a = 0x22b2;
  uStack_c = 0xe743;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x100;
  puStack_8 = (undefined2 *)0xc170;
  uStack_a = 0x22b2;
  uStack_c = 0xe751;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x10;
  puStack_8 = (undefined2 *)0xb7c;
  uStack_a = 0x22b2;
  uStack_c = 0xe75f;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x100;
  puStack_8 = (undefined2 *)0xb388;
  uStack_a = 0x22b2;
  uStack_c = 0xe76d;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x10;
  puStack_8 = (undefined2 *)0xb8e;
  uStack_a = 0x22b2;
  uStack_c = 0xe77b;
  FUN_3ab8_31e5();
  puStack_6 = (uint *)0x0;
  puStack_8 = (undefined2 *)0x16;
  uStack_a = *(undefined2 *)0x14a;
  uStack_c = *(undefined2 *)0x148;
  puStack_e = (undefined2 *)0x22b2;
  uStack_12._2_2_ = (undefined2 *)0xe790;
  local_3a = func_0x00027932();
  if (*(int *)0xbed2 == 0) {
    local_34 = *(uint *)0xbc7e + 0x16;
    local_32 = *(int *)0xbc80 + (-(uint)(0xffe9 < *(uint *)0xbc7e) & 0x1000);
  }
  else {
    local_34 = 0x16;
    local_32 = 0;
  }
  puStack_e = (undefined2 *)*(undefined2 *)0xbed2;
  uStack_18 = 0x22b2;
  uStack_1a = 0xe7cc;
  iStack_16 = local_34;
  iStack_14 = local_32;
  uStack_12 = local_3a;
  func_0x00012835();
  puStack_e = (undefined2 *)0x11f2;
  uStack_12._2_2_ = (undefined2 *)0xe7dd;
  uStack_12 = func_0x00027a04();
  puStack_e = (undefined2 *)*(undefined2 *)0xc718;
  if (*(int *)0xbed2 == 0) {
    local_34 = *(uint *)0xb788 + 0x20;
    local_32 = *(int *)0xb78a + (-(uint)(0xffdf < *(uint *)0xb788) & 0x1000);
  }
  else {
    local_34 = 0x20;
    local_32 = 0;
  }
  uStack_18 = 0x22b2;
  uStack_1a = 0xe815;
  iStack_16 = local_34;
  iStack_14 = local_32;
  local_3a = uStack_12;
  func_0x00012835();
  puStack_e = (undefined2 *)0x0;
  uStack_12 = (long)*(int *)0x150 * 0x18;
  iStack_16 = *(uint *)0xbe9a + 0x18;
  iStack_14 = *(int *)0xbe9c + (-(uint)(0xffe7 < *(uint *)0xbe9a) & 0x1000);
  uStack_18 = 0x11f2;
  uStack_1a = 0xe83d;
  func_0x00012835();
  puStack_e = (undefined2 *)*(undefined2 *)0xbefc;
  uStack_12._2_2_ = (undefined2 *)*(undefined2 *)0xbefa;
  uStack_12._0_2_ = (undefined2 *)*(undefined2 *)0xc0ae;
  iStack_14 = *(undefined2 *)0xc0ac;
  iStack_16 = 0x11f2;
  uStack_18 = 0xe855;
  uVar4 = extraout_DX;
  uStack_12._0_2_ = (undefined2 *)FUN_12c1_0061();
  puStack_e = (undefined2 *)0x0;
  iStack_14 = *(undefined2 *)0xbefc;
  iStack_16 = *(undefined2 *)0xbefa;
  uStack_18 = 0x11f2;
  uStack_1a = 0xe872;
  local_3a._0_2_ = (int)(undefined2 *)uStack_12;
  local_3a._2_2_ = uVar4;
  uStack_12._2_2_ = (undefined2 *)uVar4;
  func_0x00012835();
  puStack_e = (undefined2 *)0x0;
  uStack_12 = (long)*(int *)0x152 * 0xc;
  iStack_16 = *(uint *)0xbe82 + 0xc;
  iStack_14 = *(int *)0xbe84 + (-(uint)(0xfff3 < *(uint *)0xbe82) & 0x1000);
  uStack_18 = 0x11f2;
  uStack_1a = 0xe89a;
  func_0x00012835();
  local_34 = *(undefined2 *)0xb490;
  local_32 = *(undefined2 *)0xb492;
  puStack_e = (undefined2 *)0x0;
  local_3a._0_2_ = 0x900;
  local_3a._2_2_ = 0;
  uStack_12._2_2_ = (undefined2 *)0x0;
  uStack_12._0_2_ = (undefined2 *)0x900;
  uStack_18 = 0x11f2;
  uStack_1a = 0xe8c1;
  iStack_16 = local_34;
  iStack_14 = local_32;
  func_0x00012835();
  puStack_e = (undefined2 *)*(undefined2 *)0xd12;
  uStack_12._2_2_ = (undefined2 *)0x11f2;
  uStack_12._0_2_ = (undefined2 *)0xe8cd;
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  puStack_e = (undefined2 *)0xc0b0;
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uStack_12._0_2_ = (undefined2 *)0xe8db;
  func_0x000257c0();
  if (99 < param_1) {
    return;
  }
  puStack_e = (undefined2 *)param_2;
  uStack_12._2_2_ = &local_aa;
  uStack_12._0_2_ = (undefined2 *)0x22b2;
  iStack_14 = 0xe8f2;
  func_0x00024c86();
  puStack_e = (undefined2 *)0x2e;
  uStack_12._2_2_ = &local_aa;
  uStack_12._0_2_ = (undefined2 *)0x22b2;
  iStack_14 = 0xe902;
  puVar3 = (undefined1 *)func_0x00025b06();
  *puVar3 = 0;
  puStack_e = (undefined2 *)0x2fa6;
  uStack_12._2_2_ = &local_aa;
  uStack_12._0_2_ = (undefined2 *)0x22b2;
  iStack_14 = 0xe917;
  FUN_21f2_2d26();
  if (((*(char *)0x2c30 == '\0') || (param_1 != 0)) && ((*(byte *)0x7e % 10 < 2 || (param_1 == 0))))
  {
    puStack_e = &local_66;
    uStack_12._2_2_ = (undefined2 *)0x0;
    uStack_12._0_2_ = &local_aa;
    iStack_14 = 0x22b2;
    uVar4 = 0x22b2;
    iStack_16 = 0xe9aa;
    iVar2 = func_0x000276d7();
    if ((iVar2 == 0) && (param_1 != 0)) {
      puStack_e = &local_aa;
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uVar4 = 0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xe9c0;
      iVar2 = func_0x00027698();
      if (iVar2 != 0) {
        puStack_e = (undefined2 *)0x830;
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uVar4 = 0x11f2;
        uStack_12._0_2_ = (undefined2 *)0xe9ce;
        FUN_13bf_0a03();
      }
    }
    puStack_e = &local_66;
    uStack_12._2_2_ = (undefined2 *)0x0;
    uStack_12._0_2_ = (undefined2 *)param_2;
    uVar5 = 0x22b2;
    iStack_16 = 0xe9de;
    iStack_14 = uVar4;
    iVar2 = func_0x000276d7();
    if (iVar2 != 0) goto LAB_3ab8_3e7c;
    puStack_e = (undefined2 *)param_2;
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uVar5 = 0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xe9ed;
    iVar2 = func_0x00027698();
    if (iVar2 == 0) goto LAB_3ab8_3e7c;
    puStack_e = (undefined2 *)0x2fb4;
  }
  else {
    puStack_e = &local_66;
    uStack_12._2_2_ = (undefined2 *)0x0;
    uStack_12._0_2_ = &local_aa;
    iStack_14 = 0x22b2;
    uVar4 = 0x22b2;
    iStack_16 = 0xe94b;
    iVar2 = func_0x000276d7();
    if (iVar2 == 0) {
      puStack_e = &local_aa;
      uStack_12._2_2_ = (undefined2 *)0x22b2;
      uVar4 = 0x22b2;
      uStack_12._0_2_ = (undefined2 *)0xe95c;
      iVar2 = func_0x00027698();
      if (iVar2 != 0) {
        puStack_e = (undefined2 *)0x830;
        uStack_12._2_2_ = (undefined2 *)0x22b2;
        uVar4 = 0x11f2;
        uStack_12._0_2_ = (undefined2 *)0xe96a;
        FUN_13bf_0a03();
      }
    }
    puStack_e = &local_66;
    uStack_12._2_2_ = (undefined2 *)0x0;
    uStack_12._0_2_ = (undefined2 *)param_2;
    uVar5 = 0x22b2;
    iStack_16 = 0xe97a;
    iStack_14 = uVar4;
    iVar2 = func_0x000276d7();
    if (iVar2 != 0) goto LAB_3ab8_3e7c;
    puStack_e = &local_aa;
    uStack_12._2_2_ = (undefined2 *)param_2;
    uStack_12._0_2_ = (undefined2 *)0x22b2;
    uVar5 = 0x22b2;
    iStack_14 = 0xe98e;
    iVar2 = func_0x000270f0();
    if (iVar2 == 0) goto LAB_3ab8_3e7c;
    puStack_e = (undefined2 *)0x2fab;
  }
  uStack_12._2_2_ = (undefined2 *)0x22b2;
  uVar5 = 0x11f2;
  uStack_12._0_2_ = (undefined2 *)0xe9fb;
  FUN_13bf_0a03();
LAB_3ab8_3e7c:
  puStack_e = (undefined2 *)0xbc;
  uStack_12._2_2_ = (undefined2 *)param_4;
  uStack_12._0_2_ = (undefined2 *)0xbf48;
  iStack_16 = 0xea0c;
  iStack_14 = uVar5;
  func_0x0001263c();
  puStack_e = (undefined2 *)param_2;
  uStack_12._2_2_ = (undefined2 *)0xbf48;
  uStack_12._0_2_ = (undefined2 *)0x11f2;
  iStack_14 = 0xea1b;
  iVar2 = func_0x000270f0();
  if (iVar2 != 0) {
    if (param_1 == 0) {
      puStack_e = (undefined2 *)0x2fbf;
    }
    else {
      puStack_e = &local_2a;
    }
    uStack_12._2_2_ = (undefined2 *)0x22b2;
    uStack_12._0_2_ = (undefined2 *)0xea35;
    FUN_13bf_0a03();
  }
  if ((param_1 != 0) && (10 < *(byte *)0x7e)) {
    *(char *)0x7e = *(char *)0x7e + -10;
  }
  return;
}



/* 3ab8:3ecd  FUN_3ab8_3ecd  42 bytes, 2 callers */

void __cdecl16far FUN_3ab8_3ecd(undefined2 param_1,undefined2 param_2)

{
  FUN_21f2_0ebc();
  FUN_21f2_3454(param_1,0xd18);
  FUN_21f2_3454(param_2,0xcf6);
  return;
}



/* 3ab8:3ef7  FUN_3ab8_3ef7  42 bytes, 2 callers */

void __cdecl16far FUN_3ab8_3ef7(undefined2 param_1,undefined2 param_2)

{
  FUN_21f2_0ebc();
  FUN_21f2_3454(0xd18,param_1);
  FUN_21f2_3454(0xcf6,param_2);
  return;
}



/* 3ab8:3f21  FUN_3ab8_3f21  980 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_3f21(undefined2 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined2 local_18c;
  undefined1 local_18a [44];
  undefined1 local_15e [76];
  undefined1 local_112 [44];
  undefined2 local_e6;
  undefined2 local_e4;
  int local_de;
  undefined1 local_dc [22];
  undefined1 local_c6 [84];
  int local_72;
  undefined2 local_70 [33];
  undefined1 local_2e [24];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  undefined2 *puStack_8;
  undefined2 *puStack_6;
  int *piStack_4;
  
  piStack_4 = (int *)0x3ab8;
  puStack_6 = (undefined2 *)0xeaac;
  FUN_21f2_0ebc();
  local_e6 = *(undefined2 *)0x9778;
  local_e4 = *(undefined2 *)0x977a;
  piStack_4 = (int *)local_dc;
  puStack_6 = (undefined2 *)local_2e;
  puStack_8 = (undefined2 *)0x22b2;
  uStack_a = 0xeac8;
  FUN_3ab8_3ecd();
  piStack_4 = (int *)0x2fc8;
  puStack_6 = (undefined2 *)local_15e;
  puStack_8 = (undefined2 *)0x22b2;
  uVar3 = 0x22b2;
  uStack_a = 0xead8;
  FUN_21f2_3454();
  do {
    piStack_4 = (int *)0xd;
    puStack_6 = (undefined2 *)0xcf6;
    puStack_8 = (undefined2 *)0xd04;
    uVar4 = 0x22b2;
    puStack_c = (undefined1 *)0xeaeb;
    uStack_a = uVar3;
    func_0x00024d00();
    piStack_4 = (int *)local_15e;
    puStack_6 = local_70;
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xeafb;
    iVar2 = FUN_3ab8_304b();
    if (iVar2 != 0) {
      piStack_4 = (int *)local_dc;
      puStack_6 = (undefined2 *)local_2e;
      puStack_8 = (undefined2 *)0x22b2;
      uStack_a = 0xeb0e;
      FUN_3ab8_3ef7();
      piStack_4 = (int *)0x22b2;
      puStack_6 = (undefined2 *)0xeb15;
      func_0x0000ac64();
      return 0xffff;
    }
    if (*(int *)0x158 != 0) {
LAB_3ab8_3fa2:
      piStack_4 = (int *)local_dc;
      puStack_6 = (undefined2 *)local_2e;
      uStack_a = 0xeb2f;
      puStack_8 = (undefined2 *)uVar4;
      FUN_3ab8_3ef7();
      return 0xff91;
    }
    piStack_4 = (int *)local_15e;
    puStack_6 = (undefined2 *)local_c6;
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xeb46;
    FUN_21f2_3454();
    piStack_4 = (int *)0x860;
    puStack_6 = (undefined2 *)local_c6;
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xeb56;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x2fcd;
    puStack_6 = (undefined2 *)local_c6;
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xeb66;
    FUN_21f2_2d26();
    piStack_4 = local_70;
    puStack_6 = (undefined2 *)local_c6;
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xeb76;
    FUN_21f2_2d26();
    piStack_4 = (int *)0x2;
    puStack_6 = (undefined2 *)0x11;
    puStack_8 = (undefined2 *)0x22b2;
    uStack_a = 0xeb85;
    FUN_1000_0599();
    piStack_4 = (int *)0xdef;
    puStack_6 = (undefined2 *)0xeb8c;
    func_0x00010526();
    piStack_4 = (int *)0x3;
    puStack_6 = (undefined2 *)0x11;
    puStack_8 = (undefined2 *)0xdef;
    uStack_a = 0xeb99;
    FUN_1000_0599();
    piStack_4 = (int *)0xdef;
    puStack_6 = (undefined2 *)0xeba0;
    func_0x00010526();
    piStack_4 = (int *)0x0;
    puStack_6 = (undefined2 *)0x0;
    puStack_8 = (undefined2 *)0x1;
    uStack_a = 7;
    puStack_c = (undefined1 *)*(undefined2 *)0xa5a;
    uStack_e = 0x27f;
    uStack_10 = *(undefined2 *)0xa5e;
    uStack_12 = 0x27f;
    uStack_14 = 0xdef;
    uStack_16 = 0xebbe;
    func_0x0000f350();
    piStack_4 = (int *)0xffff;
    puStack_6 = (undefined2 *)0x7;
    puStack_8 = (undefined2 *)*(undefined2 *)0xa5e;
    uStack_a = *(undefined2 *)0x1b3e;
    puStack_c = (undefined1 *)*(undefined2 *)0xa5e;
    uStack_e = 0;
    uStack_10 = 0xdef;
    uStack_12 = 0xebdd;
    func_0x0000def0();
    piStack_4 = (int *)local_112;
    puStack_6 = (undefined2 *)0x0;
    puStack_8 = local_70;
    uStack_a = 0xdef;
    uVar4 = 0x22b2;
    puStack_c = (undefined1 *)0xebf1;
    iVar2 = func_0x000276d7();
    if (iVar2 == 0) {
      piStack_4 = (int *)local_18a;
      puStack_6 = local_70;
      puStack_8 = (undefined2 *)0x22b2;
      uStack_a = 0xec08;
      FUN_3ab8_0d70();
      local_18c = 7;
      piStack_4 = (int *)local_18a;
      puStack_6 = (undefined2 *)0xcf6;
      puStack_8 = (undefined2 *)0x22b2;
      uVar4 = 0x22b2;
      uStack_a = 0xec1e;
      iVar2 = func_0x00024cb8();
      if (iVar2 != 0) {
        piStack_4 = (int *)0x1dc;
        puStack_6 = (undefined2 *)0x22b2;
        puStack_8 = (undefined2 *)0xec2d;
        func_0x00012276();
        local_18c = 2;
        piStack_4 = (int *)0x2;
        puStack_6 = (undefined2 *)0x11;
        puStack_8 = (undefined2 *)0x11f2;
        uVar4 = 0xdef;
        uStack_a = 0xec3f;
        FUN_1000_0599();
        piStack_4 = (int *)0xdef;
        puStack_6 = (undefined2 *)0xec45;
        FUN_3ab8_0db2();
      }
      do {
        *(undefined2 *)0xc22 = 1;
        piStack_4 = (int *)0xffff;
        puStack_6 = (undefined2 *)local_18c;
        puStack_8 = (undefined2 *)0x3;
        uStack_a = 0x11;
        puStack_c = local_c6;
        uStack_10 = 0xec65;
        uStack_e = uVar4;
        FUN_1000_02b5();
        piStack_4 = (int *)0x43a;
        puStack_6 = (undefined2 *)0x40c;
        puStack_8 = (undefined2 *)0x2fcf;
        uStack_a = param_1;
        puStack_c = (undefined1 *)0xdef;
        uStack_e = 0xec7c;
        FUN_21f2_3454();
        piStack_4 = (int *)0x0;
        puStack_6 = (undefined2 *)0x0;
        puStack_8 = (undefined2 *)0x1;
        uStack_a = 7;
        puStack_c = (undefined1 *)*(undefined2 *)0xa5a;
        uStack_e = 0x27f;
        uStack_10 = *(undefined2 *)0xa5e;
        uStack_12 = 0x27f;
        uStack_14 = 0x22b2;
        uStack_16 = 0xec9d;
        func_0x0000f350();
        piStack_4 = &local_de;
        puStack_8 = &local_e6;
        uStack_a = param_1;
        *(undefined2 *)0xc26 = 1;
        puStack_c = (undefined1 *)0x1;
        uStack_e = 0xdef;
        uVar4 = 0x1bb4;
        uStack_10 = 0xecba;
        puStack_6 = puStack_8;
        local_72 = FUN_1def_0904();
        *(undefined2 *)0xc26 = 0;
        if (*(int *)0x158 != 0) goto LAB_3ab8_3fa2;
        if (((local_72 == -1) || (local_72 == 1)) || (local_72 == 2)) goto LAB_3ab8_417e;
      } while ((local_de != 1) && (local_de != 2));
      local_72 = local_de;
    }
    else {
      local_72 = 1;
    }
LAB_3ab8_417e:
    if (local_72 == 1) {
      while( true ) {
        *(undefined2 *)0xc22 = 1;
        piStack_4 = (int *)0xffff;
        puStack_6 = (undefined2 *)0x7;
        puStack_8 = (undefined2 *)0x3;
        uStack_a = 0x11;
        puStack_c = local_c6;
        uStack_10 = 0xed27;
        uStack_e = uVar4;
        FUN_1000_02b5();
        piStack_4 = (int *)0x45a;
        puStack_6 = (undefined2 *)0x2fd4;
        puStack_8 = (undefined2 *)param_1;
        uStack_a = 0xdef;
        puStack_c = (undefined1 *)0xed3a;
        FUN_21f2_3454();
        if (*(char *)0x2c30 == '\0') {
          piStack_4 = (int *)0x2fec;
        }
        else {
          piStack_4 = (int *)0x2fe7;
        }
        puStack_6 = (undefined2 *)param_1;
        puStack_8 = (undefined2 *)0x22b2;
        uStack_a = 0xed55;
        FUN_21f2_2d26();
        piStack_4 = (int *)0x2ff3;
        puStack_6 = (undefined2 *)param_1;
        puStack_8 = (undefined2 *)0x22b2;
        uStack_a = 0xed63;
        FUN_21f2_2d26();
        piStack_4 = (int *)0x0;
        puStack_6 = (undefined2 *)0x0;
        puStack_8 = (undefined2 *)0x1;
        uStack_a = 7;
        puStack_c = (undefined1 *)*(undefined2 *)0xa5a;
        uStack_e = 0x27f;
        uStack_10 = *(undefined2 *)0xa5e;
        uStack_12 = 0x27f;
        uStack_14 = 0x22b2;
        uStack_16 = 0xed83;
        func_0x0000f350();
        *(undefined2 *)0xc26 = 1;
        piStack_4 = &local_de;
        puStack_8 = &local_e6;
        uStack_a = param_1;
        puStack_c = (undefined1 *)0x270f;
        uStack_e = 0xdef;
        uVar4 = 0x1bb4;
        uStack_10 = 0xeda3;
        puStack_6 = puStack_8;
        local_72 = FUN_1def_0904();
        *(undefined2 *)0xc26 = 0;
        if (*(int *)0x158 != 0) goto LAB_3ab8_3fa2;
        if (local_72 == 0xd) {
          local_72 = 1;
          goto LAB_3ab8_4243;
        }
        if (((local_72 == -1) || (local_72 == 1)) || (local_72 == 2)) goto LAB_3ab8_4243;
        if ((local_de == 1) || (local_de == 2)) break;
        if (local_72 == 3) {
          *(byte *)0x2c30 = *(byte *)0x2c30 ^ 1;
        }
      }
      local_72 = local_de;
    }
LAB_3ab8_4243:
    uVar3 = 0x11f2;
    puStack_6 = (undefined2 *)0xedc8;
    piStack_4 = (int *)uVar4;
    FUN_10ad_18a4();
    if ((local_72 != -1) && (local_72 != 2)) {
      piStack_4 = (int *)0xd18;
      puStack_6 = (undefined2 *)0xbefe;
      puStack_8 = local_70;
      uStack_a = 0;
      puStack_c = (undefined1 *)0x11f2;
      uStack_e = 0xee23;
      FUN_3ab8_3230();
      piStack_4 = (int *)0xcf6;
      puStack_6 = local_70;
      puStack_8 = (undefined2 *)0x11f2;
      uStack_a = 0xee32;
      FUN_3ab8_0d70();
      *(undefined1 *)0xd14 = 0;
      piStack_4 = (int *)0x11f2;
      puStack_6 = (undefined2 *)0xee3e;
      func_0x0000abfa();
      piStack_4 = (int *)0x885;
      puStack_6 = (undefined2 *)0xee43;
      func_0x0000b6ea();
      if (9 < *(int *)0x11f0) {
        piStack_4 = (int *)0x0;
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      piStack_4 = (int *)0x1;
      puStack_6 = (undefined2 *)0x6;
      puStack_8 = (undefined2 *)0x2;
      uStack_a = 0x22;
      puStack_c = (undefined1 *)0x718;
      uStack_e = 0x885;
      uStack_10 = 0xee6c;
      FUN_1000_02b5();
      *(undefined2 *)0xc22 = 1;
      *(undefined2 *)0xbc0 = 1;
      return 1;
    }
  } while( true );
}



/* 3ab8:42f9  FUN_3ab8_42f9  75 bytes, 2 callers */

void __cdecl16far FUN_3ab8_42f9(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  FUN_21f2_0ebc();
  local_4 = &local_4;
  iVar1 = FUN_21f2_581c(*(undefined2 *)0xd12,0xbf48,*(undefined2 *)0xbc78,200);
  if (iVar1 != 0) {
    local_4 = (undefined2 ***)0x2ff7;
    FUN_13bf_0a03();
  }
  if ((int)local_4 < 200) {
    local_4 = (undefined2 **)0x370;
    FUN_13bf_0a03();
  }
  return;
}



/* 3ab8:4344  FUN_3ab8_4344  75 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4344(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  FUN_21f2_0ebc();
  local_4 = &local_4;
  iVar1 = FUN_21f2_581c(*(undefined2 *)0xd12,param_1,*(undefined2 *)0xbc78,param_2);
  if (iVar1 != 0) {
    local_4 = (undefined2 ***)0x2ffb;
    FUN_13bf_0a03();
  }
  if ((int)local_4 < param_2) {
    local_4 = (undefined2 **)0x370;
    FUN_13bf_0a03();
  }
  return;
}



/* 3ab8:438f  FUN_3ab8_438f  33 bytes, 1 callers */

void __cdecl16far FUN_3ab8_438f(void)

{
  FUN_21f2_0ebc();
  FUN_1000_0599(0x22b2,0x19,1);
  func_0x00012276(0xdef,0x7b4);
  return;
}



/* 3ab8:43b0  FUN_3ab8_43b0  780 bytes, 0 callers */

void __cdecl16far FUN_3ab8_43b0(void)

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
  FUN_3ab8_438f();
  iVar11 = 0;
  for (uVar10 = 1;
      (iVar11 <= *(int *)0x14a && ((iVar11 < *(int *)0x14a || (uVar10 <= *(uint *)0x148))));
      uVar10 = uVar10 + 1) {
    uStack_e = 0xef76;
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
    uStack_c = 0xef99;
    func_0x00029b6d();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0xefb0;
    func_0x00029b6d();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0xefc7;
    func_0x00029b6d();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0xefde;
    func_0x00029b6d();
    func_0x00029983();
    uStack_c = 0x22b2;
    uVar8 = 0;
    uStack_e = 0xefef;
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
    uStack_e = 0xf037;
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
    uStack_c = 0xf05a;
    func_0x00029b6d();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0xf071;
    func_0x00029b6d();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0xf088;
    func_0x00029b6d();
    func_0x00029983();
    uStack_c = 0x22b2;
    uVar8 = 0;
    uStack_e = 0xf099;
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
    uStack_c = 0xf0bf;
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
    uStack_c = 0xf111;
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029bb5();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0xf138;
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029bb5();
    func_0x00029983();
    uStack_c = 0xf156;
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
    uStack_c = 0xf183;
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
    uStack_c = 0xf1a5;
    func_0x00029b6d();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0xf1bc;
    func_0x00029b6d();
    func_0x00029983();
    uStack_c = 0xf1ca;
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
    uStack_c = 0xf20c;
    func_0x00029b6d();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0xf224;
    func_0x00029b6d();
    func_0x00029983();
    local_8 = 0x22b3;
  }
  return;
}



/* 3ab8:46bc  FUN_3ab8_46bc  1015 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_3ab8_46bc(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int ***extraout_DX;
  int ***pppiVar6;
  undefined2 extraout_DX_00;
  undefined2 uVar7;
  uint ***pppuVar8;
  uint ***pppuVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iStack_1b4;
  undefined4 local_1b2 [25];
  undefined2 uStack_14e;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined2 uStack_148;
  undefined2 uStack_146;
  uint ***local_144;
  undefined1 local_140;
  undefined2 uStack_13e;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined2 uStack_134;
  int iStack_132;
  uint **local_130;
  int local_12e;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined2 auStack_128 [2];
  int **local_124 [2];
  char local_120;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  uint **ppuStack_118;
  undefined4 local_116;
  undefined2 uStack_112;
  uint **local_110 [2];
  uint **local_10c [7];
  int local_fe;
  uint uStack_fc;
  int iStack_fa;
  int **local_f6;
  int iStack_f4;
  int iStack_f2;
  int ***local_d6;
  uint ***pppuStack_d4;
  int ***local_cc;
  uint ***local_ca;
  uint uStack_c8;
  int iStack_c6;
  undefined2 local_c2;
  char local_c0;
  uint **local_be [27];
  uint local_88;
  char cStack_86;
  char acStack_83 [57];
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  uint ***local_40;
  int **ppiStack_3e;
  undefined2 uStack_3c;
  int **local_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 ****ppppuStack_32;
  undefined4 ***pppuStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 *puStack_26;
  undefined2 *puStack_24;
  undefined2 *puStack_22;
  undefined2 *puStack_20;
  uint *puStack_1e;
  undefined2 *puStack_1c;
  undefined2 *puStack_1a;
  undefined2 *puStack_18;
  undefined2 **ppuStack_16;
  uint ***pppuStack_14;
  int ****ppppiStack_12;
  undefined4 uStack_10;
  uint ****ppppuStack_c;
  undefined2 ****ppppuStack_a;
  undefined4 ****ppppuStack_8;
  
  pppuVar8 = (uint ***)0x22b2;
  FUN_21f2_0ebc();
  local_c2 = 0;
  local_140 = 0;
  local_c0 = 0;
  local_120 = '\0';
  ppppuStack_8 = (undefined4 ****)local_10c;
  ppppuStack_a = (undefined2 ****)&local_3a;
  ppppuStack_c = (uint ****)0x22b2;
  uStack_10._2_2_ = (uint ***)0xf26a;
  FUN_3ab8_3ecd();
  if (param_1 == 0) {
    if (*(char *)0xd14 != '\0') {
      do {
        ppppuStack_8 = (undefined4 ****)0x3a6;
        ppppuStack_a = (undefined2 ****)0x3c2;
        ppppuStack_c = (uint ****)local_1b2;
        uStack_10._0_2_ = (uint ***)0xf620;
        uStack_10._2_2_ = pppuVar8;
        FUN_21f2_3454();
        ppppuStack_8 = (undefined4 ****)local_1b2;
        ppppuStack_a = (undefined2 ****)0x2;
        ppppuStack_c = (uint ****)0x22b2;
        uStack_10._2_2_ = (uint ***)0xf631;
        FUN_1def_07a4();
        ppppuStack_8 = (undefined4 ****)local_110;
        ppppuStack_c = (uint ****)local_124;
        uStack_10._2_2_ = (uint ***)local_1b2;
        *(undefined2 *)0xc26 = 1;
        uStack_10._0_2_ = (uint ***)0x1;
        ppppiStack_12 = (int ****)0x1bb4;
        pppuVar8 = (uint ***)0x1bb4;
        pppuStack_14 = (uint ***)0xf64f;
        ppppuStack_a = ppppuStack_c;
        local_88 = FUN_1def_0904();
        *(undefined2 *)0xc26 = 0;
        if ((((*(int *)0x158 != 0) || (local_88 == -1)) || (local_88 == 2)) ||
           (local_110[0] == (uint **)0x2)) goto LAB_2bb4_4a0f_2;
      } while ((local_88 != 1) && (local_110[0] != (uint **)0x1));
    }
    *(undefined1 *)0xd04 = 0;
    ppppuStack_8 = (undefined4 ****)0x3017;
    ppppuStack_a = (undefined2 ****)((int)acStack_83 + 1);
    uStack_10._2_2_ = (uint ***)0xf696;
    ppppuStack_c = (uint ****)pppuVar8;
    iVar5 = FUN_3ab8_304b();
    if (iVar5 != 0) {
      ppppuStack_8 = (undefined4 ****)local_10c;
      ppppuStack_a = (undefined2 ****)&local_3a;
      uStack_10._2_2_ = (uint ***)0xf6a9;
      ppppuStack_c = (uint ****)pppuVar8;
      FUN_3ab8_3ef7();
      ppppuStack_a = (undefined2 ****)0xf6b0;
      ppppuStack_8 = (undefined4 ****)pppuVar8;
      func_0x0000ac64();
      goto LAB_2bb4_4a0f_2;
    }
    if (*(int *)0x158 != 0) {
      ppppuStack_8 = (undefined4 ****)local_10c;
      ppppuStack_a = (undefined2 ****)&local_3a;
      uStack_10._2_2_ = (uint ***)0xf6c6;
      ppppuStack_c = (uint ****)pppuVar8;
      FUN_3ab8_3ef7();
      goto LAB_2bb4_4a0f_2;
    }
    ppppuStack_8 = (undefined4 ****)0x0;
    ppppuStack_c = (uint ****)0xf6d2;
    ppppuStack_a = (undefined2 ****)pppuVar8;
    func_0x0000daa6();
    ppppuStack_8 = (undefined4 ****)0x885;
    ppppuStack_a = (undefined2 ****)0xf6d8;
    func_0x0000c3ca();
    ppppuStack_8 = (undefined4 ****)(*(int *)0xa5a + -1);
    ppppuStack_a = (undefined2 ****)(*(int *)0x1b3e + -1);
    ppppuStack_c = (uint ****)(*(int *)0xa5e + 1);
    uStack_10._2_2_ = (uint ***)(*(int *)0xa58 + 1);
    uStack_10._0_2_ = (uint ***)0x885;
    ppppiStack_12 = (int ****)0xf6f1;
    func_0x0000a76b();
    *(undefined2 *)0xc08 = 0;
    *(undefined2 *)0xbc0 = 1;
    ppppuStack_8 = (undefined4 ****)0x885;
    ppppuStack_a = (undefined2 ****)0xf705;
    func_0x0000ac64();
    ppppuStack_8 = (undefined4 ****)0x885;
    ppppuStack_a = (undefined2 ****)0xf70a;
    func_0x0000a799();
    ppppuStack_8 = (undefined4 ****)((int)acStack_83 + 1);
    ppppuStack_a = (undefined2 ****)0x885;
    ppppuStack_c = (uint ****)0xf713;
    iVar5 = func_0x00024ce4();
    local_fe = iVar5 + -1;
    if (((acStack_83[iVar5] == 'F') || (acStack_83[iVar5] == 'K')) &&
       ((*(char *)0xd74 != '\0' && ((*(int *)0xa62 == 0x1b && (1 < *(byte *)0x13b)))))) {
      ppppuStack_8 = (undefined4 ****)((int)acStack_83 + 1);
      ppppuStack_a = (undefined2 ****)0xbf48;
      ppppuStack_c = (uint ****)0x22b2;
      uStack_10._2_2_ = (uint ***)0xf74c;
      func_0x00024c86();
      goto LAB_2bb4_4a0f_2;
    }
  }
  else {
    if (param_1 == 4) {
      ppppuStack_8 = (undefined4 ****)0xd18;
      ppppuStack_a = (undefined2 ****)((int)acStack_83 + 1);
      ppppuStack_c = (uint ****)0x22b2;
      uStack_10._2_2_ = (uint ***)0xf292;
      FUN_21f2_3454();
      ppppuStack_8 = (undefined4 ****)((int)acStack_83 + 1);
      ppppuStack_a = (undefined2 ****)0x22b2;
      ppppuStack_c = (uint ****)0xf29d;
      iVar5 = func_0x00024ce4();
      local_144 = (uint ***)(iVar5 + -1);
      ppppuStack_c = (uint ****)0x22b2;
      if (acStack_83[iVar5] == '\\') {
        ppppuStack_a = (undefined2 ****)((int)acStack_83 + 1);
        ppppuStack_c = (uint ****)0x22b2;
        uVar10 = 0x2a75;
        uStack_10._2_2_ = (uint ***)0xf2b5;
        ppppuStack_8 = (undefined4 ****)local_144;
        iVar5 = func_0x0002aa38();
        ppppuStack_c = (uint ****)uVar10;
        if (iVar5 != 0) goto LAB_3ab8_473b;
      }
      else {
LAB_3ab8_473b:
        ppppuStack_8 = (undefined4 ****)0x3004;
        ppppuStack_a = (undefined2 ****)((int)acStack_83 + 1);
        uVar10 = 0x22b2;
        uStack_10._2_2_ = (uint ***)0xf2c8;
        FUN_21f2_2d26();
      }
      ppppuStack_8 = (undefined4 ****)0xcf6;
      ppppuStack_a = (undefined2 ****)((int)acStack_83 + 1);
      uStack_10._2_2_ = (uint ***)0xf2d7;
      ppppuStack_c = (uint ****)uVar10;
      FUN_21f2_2d26();
    }
    else {
      if (param_1 == 3) {
        ppppuStack_8 = (undefined4 ****)0xbc;
        ppppuStack_a = (undefined2 ****)0xc13f;
        ppppuStack_c = (uint ****)0x3006;
        uStack_10._2_2_ = (uint ***)((int)acStack_83 + 1);
        uStack_10._0_2_ = (uint ***)0x22b2;
        ppppiStack_12 = (int ****)0xf2fa;
        FUN_21f2_3454();
        goto LAB_3ab8_477d;
      }
      if ((param_1 == 2) || (param_1 == -2)) {
        ppppuStack_8 = (undefined4 ****)0xb2fe;
        ppppuStack_a = (undefined2 ****)0x90;
        ppppuStack_c = (uint ****)0x300c;
        uStack_10._2_2_ = (uint ***)((int)acStack_83 + 1);
        uStack_10._0_2_ = (uint ***)0x22b2;
        ppppiStack_12 = (int ****)0xf591;
        FUN_21f2_3454();
      }
      else {
        ppppuStack_8 = (undefined4 ****)0x2d;
        ppppuStack_a = (undefined2 ****)0xbefe;
        ppppuStack_c = (uint ****)((int)acStack_83 + 1);
        uStack_10._2_2_ = (uint ***)0x22b2;
        uStack_10._0_2_ = (uint ***)0xf5a7;
        func_0x00024d00();
      }
    }
    ppppuStack_8 = (undefined4 ****)((int)acStack_83 + 1);
    ppppuStack_a = (undefined2 ****)0x22b2;
    ppppuStack_c = (uint ****)0xf5b3;
    local_144 = (uint ***)func_0x00024ce4();
    ppppuStack_c = (uint ****)0x22b2;
    do {
      do {
        local_144 = (uint ***)((int)local_144 + -1);
        uVar10 = ppppuStack_c;
        if ((int)local_144 < 1) goto LAB_3ab8_4a63;
        ppppuStack_8 = (undefined4 ****)local_144;
        ppppuStack_a = (undefined2 ****)((int)acStack_83 + 1);
        uVar10 = 0x2a75;
        uStack_10._2_2_ = (uint ***)0xf5cd;
        iVar5 = func_0x0002aa38();
        ppppuStack_c = (uint ****)uVar10;
      } while (iVar5 != 0);
      if ((acStack_83[(int)local_144 + 1] == '\\') || (acStack_83[(int)local_144 + 1] == ':'))
      goto LAB_3ab8_4a63;
    } while (acStack_83[(int)local_144 + 1] != '.');
    acStack_83[(int)local_144 + 1] = '\0';
LAB_3ab8_4a63:
    ppppuStack_8 = (undefined4 ****)0x3012;
    ppppuStack_a = (undefined2 ****)((int)acStack_83 + 1);
    uStack_10._2_2_ = (uint ***)0xf5f0;
    ppppuStack_c = (uint ****)uVar10;
    FUN_21f2_2d26();
  }
LAB_3ab8_477d:
  ppppuStack_8 = (undefined4 ****)0x2;
  ppppuStack_a = (undefined2 ****)0x11;
  ppppuStack_c = (uint ****)0x22b2;
  uStack_10._2_2_ = (uint ***)0xf30a;
  func_0x0000c35c();
  ppppuStack_8 = (undefined4 ****)0x885;
  ppppuStack_a = (undefined2 ****)0xf311;
  func_0x0000c3ca();
  ppppuStack_8 = (undefined4 ****)0x568;
  ppppuStack_a = (undefined2 ****)0x301c;
  ppppuStack_c = (uint ****)local_be;
  uStack_10._2_2_ = (uint ***)0x885;
  uStack_10._0_2_ = (uint ***)0xf323;
  FUN_21f2_3454();
  ppppuStack_8 = (undefined4 ****)0xd12;
  ppppuStack_a = (undefined2 ****)0x0;
  ppppuStack_c = (uint ****)((int)acStack_83 + 1);
  uStack_10._2_2_ = (uint ***)0x22b2;
  pppuVar8 = (uint ***)0x22b2;
  uStack_10._0_2_ = (uint ***)0xf336;
  iVar5 = func_0x00027724();
  if (iVar5 != 0) {
    ppppuStack_8 = (undefined4 ****)local_be;
    ppppuStack_a = (undefined2 ****)0x22b2;
    pppuVar8 = (uint ***)0x11f2;
    ppppuStack_c = (uint ****)0xf347;
    FUN_13bf_0a03();
  }
  ppppuStack_a = (undefined2 ****)0xf34c;
  ppppuStack_8 = (undefined4 ****)pppuVar8;
  FUN_3ab8_42f9();
  local_140 = *(char *)0xbf5c == 'a';
  local_c0 = *(char *)0xbf5e == 'f';
  if (*(char *)0xbf60 == 'm') {
    local_120 = '\x01';
  }
  *(undefined1 *)0xbf5c = 0;
  ppppuStack_8 = (undefined4 ****)0x5b6;
  ppppuStack_a = (undefined2 ****)0xbf48;
  pppuVar9 = (uint ***)0x22b2;
  uStack_10._2_2_ = (uint ***)0xf38c;
  ppppuStack_c = (uint ****)pppuVar8;
  iVar5 = func_0x00024cb8();
  if (iVar5 != 0) {
    ppppuStack_8 = (undefined4 ****)0x4a4;
    ppppuStack_a = (undefined2 ****)0x22b2;
    pppuVar9 = (uint ***)0x11f2;
    ppppuStack_c = (uint ****)0xf39b;
    FUN_13bf_0a03();
  }
  local_fe = 0;
  do {
    *(undefined1 *)(local_fe + -0x4102) = *(undefined1 *)(local_fe + -0x4090);
    local_fe = local_fe + 1;
  } while (local_fe < 0x40);
  ppppuStack_a = (undefined2 ****)0xf3bd;
  ppppuStack_8 = (undefined4 ****)pppuVar9;
  FUN_3ab8_42f9();
  ppppuStack_8 = (undefined4 ****)&local_40;
  ppppuStack_a = (undefined2 ****)&local_f6;
  ppppuStack_c = (uint ****)&local_d6;
  uStack_10._2_2_ = (uint ***)((int)&uStack_10 + 2);
  uStack_10._0_2_ = (uint ***)0x3025;
  ppppiStack_12 = (int ****)0xbf48;
  ppuStack_16 = (undefined2 **)0xf3dc;
  pppuStack_14 = pppuVar9;
  func_0x000253ce();
  ppppuStack_8 = (undefined4 ****)0x22b2;
  ppppuStack_a = (undefined2 ****)0xf3e3;
  FUN_3ab8_42f9();
  ppppuStack_8 = (undefined4 ****)0x22b2;
  ppppuStack_a = (undefined2 ****)0xf3e7;
  FUN_3ab8_42f9();
  ppppuStack_8 = (undefined4 ****)&local_130;
  ppppuStack_a = &local_cc;
  ppppuStack_c = (uint ****)0x3033;
  uStack_10._2_2_ = (uint ***)0xbf48;
  uStack_10._0_2_ = (uint ***)0x22b2;
  ppppiStack_12 = (int ****)0xf3fe;
  func_0x000253ce();
  ppppuStack_8 = (undefined4 ****)*(undefined2 *)0xd12;
  ppppuStack_a = (undefined2 ****)0x22b2;
  ppppuStack_c = (uint ****)0xf40a;
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  ppppuStack_8 = (undefined4 ****)0x22b2;
  ppppuStack_a = (undefined2 ****)0xf416;
  func_0x0002504e();
  ppppuStack_8 = (undefined4 ****)local_ca;
  ppppuStack_a = (undefined2 ****)local_cc;
  ppppuStack_c = (uint ****)local_12e;
  uStack_10._2_2_ = (uint ***)local_130;
  uStack_10._0_2_ = (uint ***)0x22b2;
  ppppiStack_12 = (int ****)0xf42b;
  pppiVar6 = extraout_DX;
  local_116._0_2_ = FUN_12c1_0061();
  local_116._2_2_ = pppiVar6;
  do {
    ppppuStack_8 = (undefined4 ****)0x0;
    ppppuStack_a = (undefined2 ****)0x8000;
    pcVar4 = (code *)swi(0x3f);
    (*pcVar4)();
    if (((int)ppppuStack_c <= *(int *)0x13e) &&
       (((int)ppppuStack_c < *(int *)0x13e || (uStack_10._2_2_ <= (undefined4 **)*(uint *)0x13c))))
    {
      if ((((int)pppuStack_d4 <= *(int *)0x142) &&
          (((((int)pppuStack_d4 < *(int *)0x142 || (local_d6 <= (int ***)*(uint *)0x140)) &&
            ((int)local_f6 <= *(int *)0x144)) &&
           (((int)local_116._2_2_ < 1 &&
            (((int ***)0x7fff < local_116._2_2_ || ((uint)local_116 <= *(uint *)0x166)))))))) &&
         ((int)local_40 <= *(int *)0x146)) {
        ppppuStack_8 = (undefined4 ****)((int)acStack_83 + 1);
        ppppuStack_a = (undefined2 ****)0x11f2;
        ppppuStack_c = (uint ****)0xf774;
        iVar5 = func_0x00027724();
        if (iVar5 != 0) {
          ppppuStack_8 = (undefined4 ****)0xf785;
          FUN_13bf_0a03();
        }
        FUN_3ab8_42f9();
        ppppuStack_8 = (undefined4 ****)0xf793;
        func_0x000257c0();
        cStack_86 = '\x01';
        FUN_3ab8_42f9();
        *(undefined1 *)0xd98 = 0x67;
        ppppuStack_8 = (undefined4 ****)&ppuStack_118;
        ppppuStack_a = (undefined2 ****)&ppiStack_3e;
        ppppuStack_c = (uint ****)&ppppuStack_8;
        uStack_10._2_2_ = (uint ***)&uStack_148;
        uStack_10._0_2_ = (uint ***)&uStack_138;
        ppppiStack_12 = (int ****)&ppppuStack_a;
        pppuStack_14 = (uint ***)&uStack_14a;
        ppuStack_16 = (undefined2 **)&uStack_13a;
        puStack_18 = auStack_128;
        puStack_1a = &uStack_11a;
        puStack_1c = &uStack_112;
        puStack_1e = &uStack_c8;
        puStack_20 = &uStack_14e;
        puStack_22 = &uStack_13e;
        puStack_24 = &uStack_12c;
        puStack_26 = &uStack_11e;
        uStack_28 = 0xa6c;
        uStack_2a = 0xa6a;
        uStack_2c = 0xa68;
        uStack_2e = 0xb310;
        pppuStack_30 = (undefined4 ***)0xb26;
        ppppuStack_32 = (undefined2 ****)0x1d0;
        uStack_34 = 0x1d2;
        uStack_36 = 0x1ce;
        uStack_38 = 0x168;
        local_3a = (undefined2 **)0x154;
        uStack_3c = 0x152;
        ppiStack_3e = (undefined2 **)0x150;
        local_40 = (uint ***)0x14c;
        uStack_42 = 0x148;
        uStack_44 = 0xd7a;
        uStack_46 = 0xbf48;
        uStack_48 = 0x22b2;
        uStack_4a = 0xf83e;
        local_88 = func_0x000253ce();
        ppppuStack_8 = (undefined4 ****)0xf84b;
        func_0x000088e3();
        if (0x11 < (int)local_88) {
          *(undefined2 *)0x52 = uStack_11e;
          *(undefined2 *)0x54 = uStack_11c;
          *(undefined2 *)0x56 = uStack_12c;
          *(undefined2 *)0x58 = uStack_12a;
          *(undefined2 *)0x5a = uStack_13e;
          *(undefined2 *)0x5c = uStack_13c;
          *(undefined2 *)0x5e = uStack_14e;
          *(undefined2 *)0x60 = uStack_14c;
        }
        if (0x12 < (int)local_88) {
          puVar1 = (uint *)0xc134;
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - uStack_c8;
          *(int *)0xc136 = (*(int *)0xc136 - iStack_c6) - (uint)(uVar3 < uStack_c8);
        }
        uVar11 = local_88 < 0x1e;
        uVar12 = local_88 == 0x1e;
        if (0x1d < (int)local_88) {
          *(undefined2 *)0x68 = uStack_112;
          *(undefined2 *)0x6a = uStack_11a;
          *(undefined2 *)0x6c = auStack_128[0];
          *(undefined2 *)0x6e = uStack_13a;
          *(undefined2 *)0x70 = uStack_14a;
          *(int *)0x72 = (int)ppppuStack_a;
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          uVar10 = 0xf8f5;
          FUN_28b3_1181();
          if (!(bool)uVar11 && !(bool)uVar12) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            uVar10 = 0xf913;
            FUN_28b3_1181();
            if (!(bool)uVar11 && !(bool)uVar12) {
              *(undefined2 *)0x115a = uStack_138;
              *(undefined2 *)0x115c = uStack_136;
              *(undefined2 *)0x115e = uStack_148;
              *(undefined2 *)0x1160 = uStack_146;
            }
          }
          *(undefined2 *)0x1162 = ppppuStack_8;
          *(undefined2 *)0x1164 = uVar10;
          *(undefined2 *)0x1166 = ppiStack_3e;
          *(undefined2 *)0x1168 = uStack_3c;
          *(undefined2 *)0x116c = ppuStack_118;
          cStack_86 = '\0';
        }
        if (0x1f < (int)local_88) {
          *(undefined2 *)0x66 = uStack_134;
        }
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029b9d();
        func_0x00029983();
        FUN_28b3_0d8b();
        func_0x00029b9d();
        func_0x00029983();
        FUN_3ab8_42f9();
        if ((param_1 != 1) && (local_120 != '\0')) {
          ppppuStack_8 = (undefined4 ****)0xc48;
          ppppuStack_a = (undefined2 ****)0x1026;
          ppppuStack_c = (uint ****)0x101e;
          uStack_10._2_2_ = (uint ***)0x1016;
          uStack_10._0_2_ = (uint ***)0x100e;
          ppppiStack_12 = (int ****)0x1006;
          pppuStack_14 = (uint ***)0xff6;
          ppuStack_16 = (undefined2 **)0x1098;
          puStack_18 = (undefined2 *)0x1096;
          puStack_1a = (undefined2 *)0x1092;
          puStack_1c = (undefined2 *)0x10c6;
          puStack_1e = (uint *)0x10c2;
          puStack_20 = (undefined2 *)0x10be;
          puStack_22 = (undefined2 *)0x10ba;
          puStack_24 = (undefined2 *)0x10b6;
          puStack_26 = (undefined2 *)0x10b2;
          uStack_28 = 0x1124;
          uStack_2a = 0x112e;
          uStack_2c = 0x1126;
          uStack_2e = 0x112c;
          pppuStack_30 = (undefined4 ***)0x112a;
          ppppuStack_32 = (undefined2 ****)0x1128;
          uStack_34 = 0x1136;
          uStack_36 = 0x1132;
          uStack_38 = 0x1d8;
          local_3a = (undefined2 **)0x1d4;
          uStack_3c = 0xe28;
          ppiStack_3e = (undefined2 **)0xbf48;
          local_40 = (uint ***)0x22b2;
          uStack_42 = 0xfa5b;
          func_0x000253ce();
        }
        local_fe = 0;
        do {
          uVar10 = *(undefined2 *)0x977a;
          iVar5 = local_fe * 4;
          *(undefined2 *)(iVar5 + 0xc78) = *(undefined2 *)0x9778;
          *(undefined2 *)(iVar5 + 0xc7a) = uVar10;
          uVar10 = *(undefined2 *)0x977a;
          *(undefined2 *)(iVar5 + 0xc8c) = *(undefined2 *)0x9778;
          *(undefined2 *)(iVar5 + 0xc8e) = uVar10;
          uVar10 = *(undefined2 *)0x977a;
          *(undefined2 *)(iVar5 + 0xc64) = *(undefined2 *)0x9778;
          *(undefined2 *)(iVar5 + 0xc66) = uVar10;
          local_fe = local_fe + 1;
        } while (local_fe < 5);
        uVar10 = *(undefined2 *)0x9786;
        *(undefined2 *)0x11d8 = *(undefined2 *)0x9784;
        *(undefined2 *)0x11da = uVar10;
        uVar10 = *(undefined2 *)0x978a;
        *(undefined2 *)0x11dc = *(undefined2 *)0x9788;
        *(undefined2 *)0x11de = uVar10;
        uVar10 = *(undefined2 *)0x977a;
        *(undefined2 *)0x11e0 = *(undefined2 *)0x9778;
        *(undefined2 *)0x11e2 = uVar10;
        *(undefined2 *)0x11e4 = 0;
        FUN_3ab8_42f9();
        iStack_132 = -1;
        ppppuStack_8 = (undefined4 ****)0x11ea;
        ppppuStack_a = (undefined2 ****)0x11e4;
        ppppuStack_c = (uint ****)0x11e0;
        uStack_10._2_2_ = (uint ***)0x11dc;
        uStack_10._0_2_ = (uint ***)0x11d8;
        ppppiStack_12 = (int ****)0xc74;
        pppuStack_14 = (uint ***)0xc9c;
        ppuStack_16 = (undefined2 **)0xc88;
        puStack_18 = (undefined2 *)0xc70;
        puStack_1a = (undefined2 *)0xc98;
        puStack_1c = (undefined2 *)0xc84;
        puStack_1e = (uint *)0xc6c;
        puStack_20 = (undefined2 *)0xc94;
        puStack_22 = (undefined2 *)0xc80;
        puStack_24 = (undefined2 *)0xc68;
        puStack_26 = (undefined2 *)0xc90;
        uStack_28 = 0xc7c;
        uStack_2a = 0xc64;
        uStack_2c = 0xc8c;
        uStack_2e = 0xc78;
        pppuStack_30 = (undefined4 ***)&local_130;
        ppppuStack_32 = &local_cc;
        uStack_34 = 0xdde;
        uStack_36 = 0xbf48;
        uStack_38 = 0x22b2;
        local_3a = (undefined2 **)0xfb4e;
        func_0x000253ce();
        if ((((iStack_132 < 0) || (0xf < iStack_132)) && ((iStack_132 < 100 || (0x73 < iStack_132)))
            ) && ((iStack_132 < 200 || (0xd7 < iStack_132)))) {
          *(char *)0x135 = *(byte *)0x135 % 100 - 0x38;
        }
        else {
          *(undefined1 *)0x135 = (undefined1)iStack_132;
        }
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfba2;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfbb0;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfbbe;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfbcc;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfbda;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfbe8;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfbf6;
        FUN_3ab8_4344();
        if (local_c0 == '\0') {
          ppppuStack_8 = (undefined4 ****)0x22b2;
          ppppuStack_a = (undefined2 ****)0xfc1c;
          FUN_3ab8_4344();
          iStack_1b4 = 0;
          do {
            FUN_28b3_0d8b();
            func_0x00029983();
            iStack_1b4 = iStack_1b4 + 1;
          } while (iStack_1b4 < 0x10);
        }
        else {
          ppppuStack_8 = (undefined4 ****)0x22b2;
          ppppuStack_a = (undefined2 ****)0xfc0b;
          FUN_3ab8_4344();
        }
        FUN_3ab8_00bb();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfc5f;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfc6d;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfc7b;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfc89;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)0x22b2;
        ppppuStack_a = (undefined2 ****)0xfc97;
        FUN_3ab8_4344();
        ppppuStack_8 = (undefined4 ****)*(undefined2 *)0x14a;
        ppppuStack_a = (undefined2 ****)*(undefined2 *)0x148;
        ppppuStack_c = (uint ****)0x22b2;
        uStack_10._2_2_ = (uint ***)0xfcac;
        local_116 = func_0x00027932();
        if (*(int *)0xbed2 == 0) {
          iStack_f4 = *(uint *)0xbc7e + 0x16;
          iStack_f2 = *(int *)0xbc80 + (-(uint)(0xffe9 < *(uint *)0xbc7e) & 0x1000);
        }
        else {
          iStack_f4 = 0x16;
          iStack_f2 = 0;
        }
        ppppuStack_c = (uint ****)*(undefined2 *)0xbed2;
        ppuStack_16 = (undefined2 **)0x22b2;
        uVar10 = 0x11f2;
        puStack_18 = (undefined2 *)0xfcee;
        pppuStack_14 = (uint ***)iStack_f4;
        ppppiStack_12 = (int ****)iStack_f2;
        uStack_10 = local_116;
        func_0x000129e6();
        if (cStack_86 != '\0') {
          iStack_fa = 0;
          for (uStack_fc = 1;
              (iStack_fa <= *(int *)0x14a &&
              ((iStack_fa < *(int *)0x14a || (uStack_fc <= *(uint *)0x148))));
              uStack_fc = uStack_fc + 1) {
            ppppuStack_c = (uint ****)iStack_fa;
            uStack_10._2_2_ = (uint ***)uStack_fc;
            ppppiStack_12 = (int ****)0xfd33;
            uStack_10._0_2_ = (uint ***)uVar10;
            local_1b2[0] = func_0x0000013f();
            ppppuStack_c = (uint ****)iStack_fa;
            uStack_10._2_2_ = (uint ***)uStack_fc;
            uStack_10._0_2_ = (uint ***)0x0;
            ppppiStack_12 = (int ****)0xfd4a;
            uVar13 = func_0x0000013f();
            ppppuStack_c = (uint ****)iStack_fa;
            uStack_10._2_2_ = (uint ***)uStack_fc;
            uStack_10._0_2_ = (uint ***)0x0;
            ppppiStack_12 = (int ****)0xfd61;
            uVar14 = func_0x0000013f();
            ppppuStack_c = (uint ****)iStack_fa;
            uStack_10._2_2_ = (uint ***)uStack_fc;
            uStack_10._0_2_ = (uint ***)0x0;
            ppppiStack_12 = (int ****)0xfd78;
            uVar15 = func_0x0000013f();
            ppppuStack_c = (uint ****)iStack_fa;
            uStack_10._2_2_ = (uint ***)uStack_fc;
            uStack_10._0_2_ = (uint ***)0x0;
            ppppiStack_12 = (int ****)0xfd8f;
            uVar16 = func_0x0000013f();
            ppppuStack_c = (uint ****)iStack_fa;
            uStack_10._2_2_ = (uint ***)uStack_fc;
            uStack_10._0_2_ = (uint ***)0x0;
            ppppiStack_12 = (int ****)0xfda6;
            uVar17 = func_0x0000013f();
            ppppuStack_c = (uint ****)iStack_fa;
            uStack_10._2_2_ = (uint ***)uStack_fc;
            uStack_10._0_2_ = (uint ***)0x0;
            ppppiStack_12 = (int ****)0xfdbd;
            uVar18 = func_0x0000013f();
            ppppuStack_c = (uint ****)iStack_fa;
            uStack_10._2_2_ = (uint ***)uStack_fc;
            uStack_10._0_2_ = (uint ***)0x0;
            uVar10 = 0;
            ppppiStack_12 = (int ****)0xfdd4;
            uVar19 = func_0x0000013f();
            pbVar2 = (byte *)((int)uVar19 + 0x15);
            *pbVar2 = *pbVar2 & 0x7f;
            pbVar2 = (byte *)((int)uVar18 + 0x15);
            *pbVar2 = *pbVar2 & 0xbf;
            pbVar2 = (byte *)((int)uVar17 + 0x15);
            *pbVar2 = *pbVar2 & 0xdf;
            pbVar2 = (byte *)((int)uVar16 + 0x15);
            *pbVar2 = *pbVar2 & 0xef;
            pbVar2 = (byte *)((int)uVar15 + 0x15);
            *pbVar2 = *pbVar2 & 0xf7;
            pbVar2 = (byte *)((int)uVar14 + 0x15);
            *pbVar2 = *pbVar2 & 0xfb;
            pbVar2 = (byte *)((int)uVar13 + 0x15);
            *pbVar2 = *pbVar2 & 0xfd;
            pbVar2 = (byte *)((int)local_1b2[0] + 0x15);
            *pbVar2 = *pbVar2 & 0xfe;
            iStack_fa = iStack_fa + (uint)(0xfffe < uStack_fc);
          }
        }
        uStack_10._2_2_ = (uint ***)0xfe2f;
        ppppuStack_c = (uint ****)uVar10;
        uStack_10 = func_0x00027a04();
        ppppuStack_c = (uint ****)*(undefined2 *)0xc718;
        if (*(int *)0xbed2 == 0) {
          iStack_f4 = *(uint *)0xb788 + 0x20;
          iStack_f2 = *(int *)0xb78a + (-(uint)(0xffdf < *(uint *)0xb788) & 0x1000);
        }
        else {
          iStack_f4 = 0x20;
          iStack_f2 = 0;
        }
        ppuStack_16 = (undefined2 **)0x22b2;
        puStack_18 = (undefined2 *)0xfe6b;
        pppuStack_14 = (uint ***)iStack_f4;
        ppppiStack_12 = (int ****)iStack_f2;
        local_116 = uStack_10;
        func_0x000129e6();
        ppppuStack_c = (uint ****)0x0;
        uStack_10 = (long)*(int *)0x150 * 0x18;
        pppuStack_14 = (uint ***)(*(uint *)0xbe9a + 0x18);
        ppppiStack_12 = (int ****)(*(int *)0xbe9c + (-(uint)(0xffe7 < *(uint *)0xbe9a) & 0x1000));
        ppuStack_16 = (undefined2 **)0x11f2;
        puStack_18 = (undefined2 *)0xfe93;
        func_0x000129e6();
        ppppuStack_c = (uint ****)0x11f2;
        uStack_10._2_2_ = (uint ***)0xfe9b;
        func_0x0001bb8f();
        *(undefined2 *)0xbc0 = 1;
        *(undefined2 *)0xc08 = 1;
        *(undefined2 *)0x11e = 0;
        ppppuStack_c = (uint ****)local_ca;
        uStack_10._2_2_ = (uint ***)local_cc;
        uStack_10._0_2_ = (uint ***)local_12e;
        ppppiStack_12 = (int ****)local_130;
        pppuStack_14 = (uint ***)0x1bb4;
        ppuStack_16 = (undefined2 **)0xfebf;
        uVar7 = extraout_DX_00;
        uStack_10._0_2_ = (uint ***)FUN_12c1_0061();
        iStack_f4 = *(undefined2 *)0xbe90;
        iStack_f2 = *(undefined2 *)0xbe92;
        uVar10 = *(undefined2 *)0xbefc;
        *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
        *(undefined2 *)0xc0ae = uVar10;
        ppppuStack_c = (uint ****)0x0;
        ppuStack_16 = (undefined2 **)0x11f2;
        puStack_18 = (undefined2 *)0xfefb;
        local_116._0_2_ = (uint)(uint ***)uStack_10;
        local_116._2_2_ = (int ***)uVar7;
        pppuStack_14 = (uint ***)iStack_f4;
        ppppiStack_12 = (int ****)iStack_f2;
        uStack_10._2_2_ = (uint ***)uVar7;
        func_0x000129e6();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(undefined2 *)0x152 = 0;
    *(undefined2 *)0x150 = 0;
    *(undefined2 *)0x14e = 0;
    *(undefined2 *)0x14c = 0;
    *(undefined2 *)0x14a = 0;
    *(undefined2 *)0x148 = 0;
    uVar10 = *(undefined2 *)0xbefc;
    *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
    *(undefined2 *)0xc0ae = uVar10;
    ppppuStack_8 = (undefined4 ****)pppuStack_d4;
    ppppuStack_a = (undefined2 ****)local_d6;
    uStack_10._0_2_ = (uint ***)(uint)local_116;
    pcVar4 = (code *)swi(0x3f);
    iVar5 = (*pcVar4)();
  } while (iVar5 != -1);
  ppppuStack_8 = (undefined4 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x11f2;
  ppppuStack_c = (uint ****)0xf4e5;
  func_0x0000daa6();
  ppppuStack_8 = (undefined4 ****)0x885;
  ppppuStack_a = (undefined2 ****)0xf4eb;
  func_0x0000abfa();
  ppppuStack_8 = (undefined4 ****)0x0;
  ppppuStack_a = (undefined2 ****)0x885;
  ppppuStack_c = (uint ****)0xf4f3;
  func_0x0000b1d8();
  ppppuStack_8 = (undefined4 ****)0x885;
  ppppuStack_a = (undefined2 ****)0xf4f9;
  func_0x0000b6ea();
  ppppuStack_8 = (undefined4 ****)0xffff;
  ppppuStack_a = (undefined2 ****)0x6;
  *(undefined2 *)0xc22 = 2;
  ppppuStack_c = (uint ****)0x2;
  uStack_10._2_2_ = (uint ***)0x12;
  uStack_10._0_2_ = (uint ***)0x764;
  ppppiStack_12 = (int ****)0x885;
  pppuStack_14 = (uint ***)0xf516;
  FUN_1000_02b5();
  ppppuStack_8 = (undefined4 ****)local_40;
  ppppuStack_a = (undefined2 ****)local_116._2_2_;
  ppppuStack_c = (uint ****)(uint)local_116;
  uStack_10._2_2_ = (uint ***)local_f6;
  uStack_10._0_2_ = pppuStack_d4;
  ppppiStack_12 = (int ****)local_d6;
  pppuStack_14 = (uint ***)(uint)local_116;
  ppuStack_16 = local_f6;
  puStack_18 = (undefined2 *)0x303b;
  puStack_1a = (undefined2 *)0xbf48;
  puStack_1c = (undefined2 *)0xdef;
  puStack_1e = (uint *)0xf543;
  FUN_21f2_3454();
  ppppuStack_8 = (undefined4 ****)0xffff;
  ppppuStack_a = (undefined2 ****)0x6;
  ppppuStack_c = (uint ****)0x3;
  uStack_10._2_2_ = (uint ***)0x12;
  uStack_10._0_2_ = (uint ***)0xbf48;
  ppppiStack_12 = (int ****)0x22b2;
  pppuStack_14 = (uint ***)0xf55f;
  FUN_1000_02b5();
  *(undefined2 *)0x158 = 1;
  *(undefined1 *)0xcf6 = 0;
LAB_2bb4_4a0f_2:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* 3ab8:4c91  FUN_3ab8_4c91  1778 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far FUN_3ab8_4c91(void)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 extraout_DX;
  int iVar8;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  
  uVar5 = func_0x000253ce(0x3ab8,0xbf48,0xd7a,0x148,0x14c,0x150,0x152,0x154,0x168,0x1ce,0x1d2);
  *(undefined2 *)(unaff_BP + -0x86) = uVar5;
  func_0x000088e3();
  if (0x11 < *(int *)(unaff_BP + -0x86)) {
    uVar5 = *(undefined2 *)(unaff_BP + -0x11a);
    *(undefined2 *)0x52 = *(undefined2 *)(unaff_BP + -0x11c);
    *(undefined2 *)0x54 = uVar5;
    uVar5 = *(undefined2 *)(unaff_BP + -0x128);
    *(undefined2 *)0x56 = *(undefined2 *)(unaff_BP + -0x12a);
    *(undefined2 *)0x58 = uVar5;
    uVar5 = *(undefined2 *)(unaff_BP + -0x13a);
    *(undefined2 *)0x5a = *(undefined2 *)(unaff_BP + -0x13c);
    *(undefined2 *)0x5c = uVar5;
    uVar5 = *(undefined2 *)(unaff_BP + -0x14a);
    *(undefined2 *)0x5e = *(undefined2 *)(unaff_BP + -0x14c);
    *(undefined2 *)0x60 = uVar5;
  }
  if (0x12 < *(int *)(unaff_BP + -0x86)) {
    uVar4 = *(uint *)(unaff_BP + -0xc6);
    iVar8 = *(int *)(unaff_BP + -0xc4);
    puVar1 = (uint *)0xc134;
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - uVar4;
    *(int *)0xc136 = (*(int *)0xc136 - iVar8) - (uint)(uVar3 < uVar4);
  }
  uVar3 = *(uint *)(unaff_BP + -0x86);
  uVar9 = uVar3 < 0x1e;
  uVar10 = uVar3 == 0x1e;
  if (0x1d < (int)uVar3) {
    *(undefined2 *)0x68 = *(undefined2 *)(unaff_BP + -0x110);
    *(undefined2 *)0x6a = *(undefined2 *)(unaff_BP + -0x118);
    *(undefined2 *)0x6c = *(undefined2 *)(unaff_BP + -0x126);
    *(undefined2 *)0x6e = *(undefined2 *)(unaff_BP + -0x138);
    *(undefined2 *)0x70 = *(undefined2 *)(unaff_BP + -0x148);
    *(undefined2 *)0x72 = *(undefined2 *)(unaff_BP + -8);
    func_0x00029834();
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar9 && !(bool)uVar10) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar9 && !(bool)uVar10) {
        uVar5 = *(undefined2 *)(unaff_BP + -0x134);
        *(undefined2 *)0x115a = *(undefined2 *)(unaff_BP + -0x136);
        *(undefined2 *)0x115c = uVar5;
        uVar5 = *(undefined2 *)(unaff_BP + -0x144);
        *(undefined2 *)0x115e = *(undefined2 *)(unaff_BP + -0x146);
        *(undefined2 *)0x1160 = uVar5;
      }
    }
    uVar5 = *(undefined2 *)(unaff_BP + -4);
    *(undefined2 *)0x1162 = *(undefined2 *)(unaff_BP + -6);
    *(undefined2 *)0x1164 = uVar5;
    uVar5 = *(undefined2 *)(unaff_BP + -0x3a);
    *(undefined2 *)0x1166 = *(undefined2 *)(unaff_BP + -0x3c);
    *(undefined2 *)0x1168 = uVar5;
    *(undefined2 *)0x116c = *(undefined2 *)(unaff_BP + -0x116);
    *(undefined1 *)(unaff_BP + -0x84) = 0;
  }
  if (0x1e < *(int *)(unaff_BP + -0x86)) {
    *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -0x124);
  }
  if (0x1f < *(int *)(unaff_BP + -0x86)) {
    *(undefined2 *)0x66 = *(undefined2 *)(unaff_BP + -0x132);
  }
  func_0x000297e6();
  func_0x0002996b();
  func_0x00029b9d();
  func_0x00029983();
  *(int *)(unaff_BP + -0x1b2) = *(int *)0x1b3e - *(int *)0xa58;
  FUN_28b3_0d8b();
  func_0x00029b9d();
  func_0x00029983();
  FUN_3ab8_42f9();
  if ((*(int *)(unaff_BP + 6) != 1) && (*(char *)(unaff_BP + -0x11e) != '\0')) {
    func_0x000253ce(0x22b2,0xbf48,0xe28,0x1d4,0x1d8,0x1132,0x1136);
  }
  *(undefined2 *)(unaff_BP + -0xfc) = 0;
  do {
    uVar5 = *(undefined2 *)0x977a;
    iVar8 = *(int *)(unaff_BP + -0xfc) * 4;
    *(undefined2 *)(iVar8 + 0xc78) = *(undefined2 *)0x9778;
    *(undefined2 *)(iVar8 + 0xc7a) = uVar5;
    uVar5 = *(undefined2 *)0x977a;
    *(undefined2 *)(iVar8 + 0xc8c) = *(undefined2 *)0x9778;
    *(undefined2 *)(iVar8 + 0xc8e) = uVar5;
    uVar5 = *(undefined2 *)0x977a;
    *(undefined2 *)(iVar8 + 0xc64) = *(undefined2 *)0x9778;
    *(undefined2 *)(iVar8 + 0xc66) = uVar5;
    *(int *)(unaff_BP + -0xfc) = *(int *)(unaff_BP + -0xfc) + 1;
  } while (*(int *)(unaff_BP + -0xfc) < 5);
  uVar5 = *(undefined2 *)0x9786;
  *(undefined2 *)0x11d8 = *(undefined2 *)0x9784;
  *(undefined2 *)0x11da = uVar5;
  uVar5 = *(undefined2 *)0x978a;
  *(undefined2 *)0x11dc = *(undefined2 *)0x9788;
  *(undefined2 *)0x11de = uVar5;
  uVar5 = *(undefined2 *)0x977a;
  *(undefined2 *)0x11e0 = *(undefined2 *)0x9778;
  *(undefined2 *)0x11e2 = uVar5;
  *(undefined2 *)0x11e4 = 0;
  FUN_3ab8_42f9();
  *(undefined2 *)(unaff_BP + -0x130) = 0xffff;
  func_0x000253ce(0x22b2,0xbf48,0xdde);
  if ((((*(int *)(unaff_BP + -0x130) < 0) || (0xf < *(int *)(unaff_BP + -0x130))) &&
      ((*(int *)(unaff_BP + -0x130) < 100 || (0x73 < *(int *)(unaff_BP + -0x130))))) &&
     ((*(int *)(unaff_BP + -0x130) < 200 || (0xd7 < *(int *)(unaff_BP + -0x130))))) {
    *(char *)0x135 = *(byte *)0x135 % 100 - 0x38;
  }
  else {
    *(undefined1 *)0x135 = *(undefined1 *)(unaff_BP + -0x130);
  }
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  if (*(char *)(unaff_BP + -0xbe) == '\0') {
    FUN_3ab8_4344();
    *(undefined2 *)(unaff_BP + -0x1b2) = 0;
    do {
      FUN_28b3_0d8b();
      func_0x00029983();
      *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
    } while (*(int *)(unaff_BP + -0x1b2) < 0x10);
  }
  else {
    FUN_3ab8_4344();
  }
  FUN_3ab8_00bb();
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  FUN_3ab8_4344();
  uVar11 = func_0x00027932();
  *(undefined2 *)(unaff_BP + -0x114) = (int)uVar11;
  *(undefined2 *)(unaff_BP + -0x112) = (int)((ulong)uVar11 >> 0x10);
  if (*(int *)0xbed2 == 0) {
    iVar8 = *(uint *)0xbc7e + 0x16;
    iVar7 = *(int *)0xbc80 + (-(uint)(0xffe9 < *(uint *)0xbc7e) & 0x1000);
  }
  else {
    iVar8 = 0x16;
    iVar7 = 0;
  }
  *(int *)(unaff_BP + -0xf2) = iVar8;
  *(int *)(unaff_BP + -0xf0) = iVar7;
  func_0x000129e6();
  if (*(char *)(unaff_BP + -0x84) != '\0') {
    *(undefined2 *)(unaff_BP + -0xfa) = 1;
    *(undefined2 *)(unaff_BP + -0xf8) = 0;
    while( true ) {
      if ((*(int *)0x14a < *(int *)(unaff_BP + -0xf8)) ||
         ((*(int *)0x14a <= *(int *)(unaff_BP + -0xf8) &&
          (*(uint *)0x148 < *(uint *)(unaff_BP + -0xfa))))) break;
      uVar11 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x1b0) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x1ae) = (int)((ulong)uVar11 >> 0x10);
      uVar11 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x1b6) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x1b4) = (int)((ulong)uVar11 >> 0x10);
      uVar11 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x1ba) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x1b8) = (int)((ulong)uVar11 >> 0x10);
      uVar11 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x1be) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x1bc) = (int)((ulong)uVar11 >> 0x10);
      uVar11 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x1c2) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x1c0) = (int)((ulong)uVar11 >> 0x10);
      uVar11 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x1c6) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x1c4) = (int)((ulong)uVar11 >> 0x10);
      uVar11 = func_0x0000013f();
      *(undefined2 *)(unaff_BP + -0x1ca) = (int)uVar11;
      *(undefined2 *)(unaff_BP + -0x1c8) = (int)((ulong)uVar11 >> 0x10);
      uVar11 = func_0x0000013f();
      pbVar2 = (byte *)((int)uVar11 + 0x15);
      *pbVar2 = *pbVar2 & 0x7f;
      pbVar2 = (byte *)((int)*(undefined4 *)(unaff_BP + -0x1ca) + 0x15);
      *pbVar2 = *pbVar2 & 0xbf;
      pbVar2 = (byte *)((int)*(undefined4 *)(unaff_BP + -0x1c6) + 0x15);
      *pbVar2 = *pbVar2 & 0xdf;
      pbVar2 = (byte *)((int)*(undefined4 *)(unaff_BP + -0x1c2) + 0x15);
      *pbVar2 = *pbVar2 & 0xef;
      pbVar2 = (byte *)((int)*(undefined4 *)(unaff_BP + -0x1be) + 0x15);
      *pbVar2 = *pbVar2 & 0xf7;
      pbVar2 = (byte *)((int)*(undefined4 *)(unaff_BP + -0x1ba) + 0x15);
      *pbVar2 = *pbVar2 & 0xfb;
      pbVar2 = (byte *)((int)*(undefined4 *)(unaff_BP + -0x1b6) + 0x15);
      *pbVar2 = *pbVar2 & 0xfd;
      pbVar2 = (byte *)((int)*(undefined4 *)(unaff_BP + -0x1b0) + 0x15);
      *pbVar2 = *pbVar2 & 0xfe;
      puVar1 = (uint *)(unaff_BP + -0xfa);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)(unaff_BP + -0xf8) = *(int *)(unaff_BP + -0xf8) + (uint)(0xfffe < uVar3);
    }
  }
  uVar11 = func_0x00027a04();
  *(undefined2 *)(unaff_BP + -0x114) = (int)uVar11;
  *(undefined2 *)(unaff_BP + -0x112) = (int)((ulong)uVar11 >> 0x10);
  if (*(int *)0xbed2 == 0) {
    iVar8 = *(uint *)0xb788 + 0x20;
    iVar7 = *(int *)0xb78a + (-(uint)(0xffdf < *(uint *)0xb788) & 0x1000);
  }
  else {
    iVar8 = 0x20;
    iVar7 = 0;
  }
  *(int *)(unaff_BP + -0xf2) = iVar8;
  *(int *)(unaff_BP + -0xf0) = iVar7;
  func_0x000129e6();
  func_0x000129e6();
  func_0x0001bb8f();
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xc08 = 1;
  *(undefined2 *)0x11e = 0;
  uVar5 = extraout_DX;
  uVar6 = FUN_12c1_0061();
  *(undefined2 *)(unaff_BP + -0x114) = uVar6;
  *(undefined2 *)(unaff_BP + -0x112) = uVar5;
  uVar5 = *(undefined2 *)0xbe92;
  *(undefined2 *)(unaff_BP + -0xf2) = *(undefined2 *)0xbe90;
  *(undefined2 *)(unaff_BP + -0xf0) = uVar5;
  uVar5 = *(undefined2 *)0xbefc;
  *(undefined2 *)0xc0ac = *(undefined2 *)0xbefa;
  *(undefined2 *)0xc0ae = uVar5;
  func_0x000129e6();
  *(undefined2 *)(unaff_BP + -0xfc) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 3ab8:59d7  FUN_3ab8_59d7  294 bytes, 2 callers */

void __cdecl16far
FUN_3ab8_59d7(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_7a [4];
  undefined1 local_76 [4];
  undefined2 local_72;
  int local_70;
  int local_6e;
  undefined1 local_6c [4];
  char local_68 [86];
  undefined2 uStack_12;
  undefined2 uStack_10;
  char *pcStack_e;
  int iStack_c;
  undefined2 uStack_a;
  char *pcStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0x562;
  FUN_21f2_0ebc();
  pcStack_6 = (char *)0x3086;
  pcStack_8 = local_76;
  uStack_a = 0x22b2;
  iStack_c = 0x570;
  FUN_21f2_3454();
  pcStack_6 = (char *)0x308a;
  pcStack_8 = local_7a;
  uStack_a = 0x22b2;
  iStack_c = 0x57f;
  FUN_21f2_3454();
  pcStack_6 = (char *)0x308e;
  pcStack_8 = local_6c;
  uStack_a = 0x22b2;
  iStack_c = 0x58e;
  FUN_21f2_3454();
  local_72 = 0;
  if (param_4 < 0) {
    param_4 = -param_4;
    local_72 = 0xffff;
  }
  local_70 = 0;
  local_68[0] = '\0';
  uStack_a = 0x22b2;
  do {
    while( true ) {
      pcVar2 = (char *)(param_1 + local_70);
      pcStack_6 = (char *)local_70;
      pcStack_8 = (char *)param_1;
      iStack_c = 0x5c0;
      iVar3 = func_0x0002aa38();
      if (iVar3 == 0) break;
LAB_3ab8_5a96:
      cVar1 = *pcVar2;
      local_68[local_70] = cVar1;
      if (cVar1 == '\0') {
        pcStack_6 = local_68;
        pcStack_8 = (char *)0x2a75;
        uStack_a = 0x63b;
        local_6e = func_0x00024ce4();
        pcStack_6 = (char *)local_72;
        pcStack_8 = (char *)param_4;
        uStack_a = param_3;
        iStack_c = 0x16;
        pcStack_e = local_68;
        uStack_10 = 0x22b2;
        uStack_12 = 0x655;
        FUN_1000_02b5();
        pcStack_6 = (char *)0x0;
        pcStack_8 = (char *)0x7;
        uStack_a = param_3;
        iStack_c = local_6e + 0x16;
        pcStack_e = (char *)(param_5 + local_6e);
        uStack_10 = 0xdef;
        uStack_12 = 0x675;
        FUN_1000_02b5();
        return;
      }
      local_68[local_70 + 1] = '\0';
      uStack_a = 0x2a75;
      local_70 = local_70 + 1;
    }
    if (*pcVar2 == '|') {
      if ((pcVar2[1] == ' ') && (pcVar2[2] == ' ')) {
        pcStack_6 = local_76;
      }
      else {
        if ((pcVar2[1] != '-') || (pcVar2[2] != '<')) goto LAB_3ab8_5a80;
        pcStack_6 = local_7a;
      }
    }
    else {
LAB_3ab8_5a80:
      if (((*pcVar2 != -0x5b) || (pcVar2[1] != '-')) || (pcVar2[2] != '<')) goto LAB_3ab8_5a96;
      pcStack_6 = local_6c;
    }
    pcStack_8 = local_68;
    uStack_a = 0x2a75;
    iStack_c = 0x5e7;
    FUN_21f2_2d26();
    uStack_a = 0x22b2;
    local_70 = local_70 + 3;
  } while( true );
}



/* 3ab8:5afd  FUN_3ab8_5afd  533 bytes, 2 callers */

undefined2 __cdecl16far
FUN_3ab8_5afd(int param_1,int param_2,undefined1 *param_3,int param_4,char *param_5,int *param_6,
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
  
  local_6 = (char *)0x688;
  FUN_21f2_0ebc();
  local_6 = (char *)param_2;
  local_8 = (char *)0x22b2;
  local_a = (char *)0x691;
  uVar1 = func_0x00024ce4();
  if (uVar1 < 0x3c) {
    local_b2 = 0;
    local_8 = (char *)0x0;
    local_a = (char *)0x22b2;
    while( true ) {
      local_6 = local_8;
      local_8 = (char *)param_2;
      local_c = 0x6b4;
      iVar2 = func_0x0002aa38();
      if (iVar2 != 0) break;
      pcVar4 = (char *)((int)local_8 + param_2);
      if (((*pcVar4 != ' ') || (pcVar4[1] != ' ')) || (pcVar4[2] != ' ')) {
        if (*pcVar4 == '|') {
          if ((pcVar4[1] == ' ') && (pcVar4[2] == ' ')) goto LAB_3ab8_5b98;
          if ((pcVar4[1] != '-') || (pcVar4[2] != '<')) goto LAB_3ab8_5bc9;
        }
        else {
LAB_3ab8_5bc9:
          if (((*pcVar4 != -0x5b) || (pcVar4[1] != '-')) || (pcVar4[2] != '<')) break;
        }
        local_8 = (char *)((int)local_8 + 3);
        break;
      }
LAB_3ab8_5b98:
      local_8 = (char *)((int)local_8 + 3);
      local_a = (char *)0x2a75;
    }
    local_6 = (char *)((int)local_8 + param_2);
    local_8 = local_ac;
    local_a = (char *)0x2a75;
    local_c = 0x6cb;
    FUN_21f2_3454();
    local_6 = (char *)0xa;
    local_8 = local_ac;
    local_a = (char *)0x22b2;
    local_c = 0x6db;
    puVar3 = (undefined1 *)func_0x00025b06();
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
    }
    local_6 = local_ac;
    local_8 = (char *)0x22b2;
    local_a = (char *)0x6f3;
    iVar2 = func_0x00024ce4();
    local_a = (char *)(iVar2 - 1);
    iVar2 = 0x22b2;
    for (; (pcVar4 = local_a, iVar5 = iVar2, 0 < (int)local_a && (local_ac[(int)local_a] == '>'));
        local_a = (char *)((int)local_a - 1)) {
      local_6 = local_a;
      local_8 = local_ac;
      iVar5 = 0x2a75;
      local_c = 0x781;
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
      local_c = 0x82e;
      local_a = (char *)iVar5;
      local_8 = (char *)iVar2;
      FUN_21f2_3454();
      *(undefined1 *)(iVar2 + 0xe) = local_6._0_1_;
      *param_3 = 0;
      if (param_1 != 0) {
        local_6 = (char *)param_9;
        local_8 = param_3;
        local_a = (char *)0x22b2;
        local_c = 0x84b;
        FUN_21f2_3454();
        for (local_c = 1; local_c <= local_b2; local_c = local_c + 1) {
          local_6 = (char *)(local_c * 0xf + param_9);
          local_8 = param_3;
          local_a = (char *)0x22b2;
          local_c = 0x866;
          FUN_21f2_2d26();
          if (local_c < local_b2) {
            local_6 = (char *)0x3092;
            local_8 = param_3;
            local_a = (char *)0x22b2;
            local_c = 0x87d;
            FUN_21f2_2d26();
          }
        }
      }
      return 0;
    }
  }
  return 0xffff;
}



/* 3ab8:5d12  FUN_3ab8_5d12  174 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_5d12(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_2e [30];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0x89d;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)param_1;
  uStack_6 = 0xebc;
  uStack_8 = 0xbf48;
  uStack_a = 0x22b2;
  uStack_c = 0x8ad;
  FUN_21f2_3454();
  puStack_4 = local_2e;
  uStack_6 = 0;
  uStack_8 = 0xbf48;
  uStack_a = 0x22b2;
  uStack_c = 0x8c0;
  iVar1 = func_0x000276d7();
  if (iVar1 == 0) {
    puStack_4 = (undefined1 *)0x254;
    uStack_6 = 0xbf48;
    uStack_8 = 0x22b2;
    uStack_a = 0x8d4;
    iVar1 = FUN_21f2_1348();
    *(int *)0xd70 = iVar1;
    if (iVar1 != 0) {
      puStack_4 = (undefined1 *)0x0;
      uStack_6 = 7;
      uStack_8 = *(undefined2 *)0x1b42;
      uStack_a = 0x20;
      uStack_c = 0x3094;
      uStack_e = 0x22b2;
      uStack_10 = 0x8f9;
      FUN_1000_02b5();
      puStack_4 = (undefined1 *)*(undefined2 *)0xd70;
      uStack_6 = 0xb;
      uStack_8 = 0xbf48;
      uStack_a = 0xdef;
      uStack_c = 0x90d;
      func_0x0002509c();
      puStack_4 = (undefined1 *)*(undefined2 *)0xd70;
      uStack_6 = 0x22b2;
      uStack_8 = 0x919;
      FUN_21f2_1262();
      *(undefined2 *)0xd70 = 0;
      puStack_4 = (undefined1 *)0xffff;
      uStack_6 = 7;
      uStack_8 = *(undefined2 *)0x1b42;
      uStack_a = 0x28;
      uStack_c = 0xbf48;
      uStack_e = 0x22b2;
      uStack_10 = 0x939;
      FUN_1000_02b5();
      return 1;
    }
  }
  return 0;
}



/* 3ab8:5dc0  FUN_3ab8_5dc0  702 bytes, 3 callers */

void __cdecl16far
FUN_3ab8_5dc0(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  func_0x0000a76b(0x22b2,0,0,0,0);
  FUN_1000_02b5(0x309b,param_1,2,7,0);
  FUN_1000_02b5(0x309e,param_1,*(int *)0x1b42 + -1,7,0);
  func_0x0000f350(0xdef,1,*(undefined2 *)0xa5e,7,*(undefined2 *)0xa5a,7,1,0,0);
  func_0x0000f350(0xdef,1,*(int *)0xa5e + 0x10,7,*(int *)0xa5a + -0x10,7,1,0,0);
  func_0x0000f350(0xdef,7,*(int *)0xa5e + 0x11,6,*(int *)0xa5a + -0x11,7,6,6,0x2c7c);
  FUN_28b3_0d8b(0xdef);
  func_0x0002996b(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  func_0x00029983(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  func_0x00029b85(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029c9d(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x00029c74(0x22b2);
  iVar1 = FUN_28b3_0f51(0x22b2);
  if (iVar1 < *(int *)0xa5e + 0x12) {
    iVar1 = *(int *)0xa5e + 0x12;
  }
  if (*(int *)0xa5a + -0x13 < iVar1) {
    iVar1 = *(int *)0xa5a + -0x13;
  }
  func_0x000297e6(0x22b2);
  func_0x00029b6d(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029d78(0x22b2);
  iVar2 = FUN_28b3_0f51(0x22b2);
  if (*(int *)0xa5a + -0x12 < iVar2) {
    iVar2 = *(int *)0xa5a + -0x12;
  }
  func_0x0000f350(0x22b2,4,iVar1,0xffff,iVar2,1,2,0,0);
  if (param_4 != 0) {
    FUN_28b3_0d8b(0xdef);
    func_0x00029b6d(0x22b2);
    FUN_28b3_0d8b(0x22b2);
    FUN_28b3_117c(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x00029c74(0x22b2);
    iVar1 = FUN_28b3_0f51(0x22b2);
    if (iVar1 < *(int *)0xa5e + 0x12) {
      iVar1 = *(int *)0xa5e + 0x12;
    }
    if (*(int *)0xa5a + -0x13 < iVar1) {
      iVar1 = *(int *)0xa5a + -0x13;
    }
    iVar2 = iVar1 + 1;
    if (*(int *)0xa5a + -0x12 < iVar1 + 1) {
      iVar2 = *(int *)0xa5a + -0x12;
    }
    func_0x0000f350(0x22b2,4,iVar1,0xfffe,iVar2,0,2,0,0);
  }
  return;
}



/* 3ab8:607e  FUN_3ab8_607e  837 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_607e(int param_1,undefined2 *****param_2,undefined2 ******param_3,undefined2 *****param_4,
             int param_5,int param_6)

{
  int iVar1;
  undefined2 *****pppppuVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 ****local_10a;
  undefined2 ***local_108 [11];
  undefined2 ***local_f2;
  undefined2 local_f0;
  undefined2 ****local_dc;
  int local_da;
  undefined2 ***local_d8;
  undefined2 **appuStack_d6 [6];
  undefined1 local_ca;
  undefined2 ***local_c8;
  undefined2 local_c6;
  undefined2 ***local_c4 [7];
  undefined2 **local_b6 [16];
  undefined2 **local_95 [16];
  undefined1 local_74;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  int iStack_12;
  undefined2 ****local_10;
  undefined2 ****local_e;
  undefined2 *****local_c;
  undefined2 ****local_a;
  undefined2 *****local_8;
  undefined2 *****local_6;
  
  local_6 = (undefined2 *****)0xc09;
  FUN_21f2_0ebc();
  local_da = 0;
  do {
    *(undefined1 *)((int)appuStack_d6 + local_da) = 0x20;
    local_da = local_da + 1;
  } while (local_da < 0xc);
  local_ca = 0;
  local_6 = (undefined2 *****)0x0;
  local_8 = (undefined2 *****)0x0;
  local_a = (undefined2 ****)0x0;
  local_c = (undefined2 *****)0x0;
  local_e = (undefined2 ****)0x22b2;
  local_10 = (undefined2 ****)0xc39;
  func_0x0000a76b();
  local_6 = (undefined2 *****)0x0;
  local_8 = (undefined2 *****)0x0;
  local_a = (undefined2 ****)0x1;
  local_c = (undefined2 *****)0x7;
  local_e = (undefined2 ****)*(undefined2 *)0xa5a;
  local_10 = (undefined2 ****)*(undefined2 *)0x1b3e;
  iStack_12 = *(int *)0xa5e;
  uStack_14 = *(undefined2 *)0xa58;
  uStack_16 = 0x885;
  uStack_18 = 0xc5d;
  func_0x0000f350();
  if (param_1 == 0xc9) {
    local_6 = param_3;
    local_8 = param_2;
    local_a = (undefined2 ****)param_6;
    local_c = (undefined2 *****)0x41;
    local_e = (undefined2 ****)0xdef;
    local_10 = (undefined2 ****)0xc78;
    FUN_3ab8_5dc0();
  }
  else {
    local_6 = (undefined2 *****)0x0;
    local_8 = (undefined2 *****)0x0;
    local_a = (undefined2 ****)0x2;
    local_c = (undefined2 *****)0x5;
    local_e = (undefined2 ****)(*(int *)0xa5a + -1);
    local_10 = (undefined2 ****)0x213;
    iStack_12 = *(int *)0xa5e + 1;
    uStack_14 = 0x212;
    uStack_16 = 0xdef;
    uStack_18 = 0xca0;
    func_0x0000f350();
  }
  for (local_a = (undefined2 ****)0x2; (int)local_a <= *(int *)0x1b42 + -1;
      local_a = (undefined2 ****)((int)local_a + 1)) {
    local_6 = &local_e;
    local_8 = &local_6;
    local_a = &local_d8;
    local_c = &local_8;
    local_e = (undefined2 ****)0xdef;
    pppppuVar2 = (undefined2 *****)0x885;
    local_10 = (undefined2 *****)0xdd4;
    func_0x0000dcbd();
    if (param_6 < (int)local_c) {
      local_6 = (undefined2 *****)local_a;
      local_8 = (undefined2 *****)local_10;
      local_a = (undefined2 ****)0x885;
      local_c = (undefined2 *****)0xd9f;
      FUN_1000_0599();
      local_6 = (undefined2 *****)0xdef;
      local_8 = (undefined2 *****)0xda6;
      func_0x00010526();
    }
    else {
      local_10a = (undefined2 *****)0x7;
      if (*(char *)(param_5 + (int)local_c * 0xf + 0xe) != '\0') {
        local_10a = (undefined2 *****)0x4;
      }
      if (*(int *)0xa62 == 0x1b) {
        local_6 = (undefined2 *****)((int)local_c * 0xf + param_5);
        local_8 = (undefined2 *****)0xbf48;
        local_a = (undefined2 ****)0x885;
        local_c = (undefined2 ******)0xe15;
        func_0x00024c86();
        local_6 = (undefined2 *****)0xbf48;
        local_8 = (undefined2 *****)0x22b2;
        pppppuVar2 = (undefined2 *****)0x22b2;
        local_a = (undefined2 *****)0xe20;
        iVar1 = func_0x00024ce4();
        if (*(char *)(iVar1 + -0x40b9) == 'F') {
          local_10a = (undefined2 *****)0x5;
        }
        if (*(char *)(iVar1 + -0x40b9) == 'K') {
          local_10a = (undefined2 *****)0x6;
        }
      }
      if ((undefined2 ******)local_c == param_3) {
        local_dc = (undefined2 *****)0xffff;
        local_8 = (undefined2 *****)0xe58;
        local_6 = pppppuVar2;
        func_0x0000c354();
        local_6 = (undefined2 *****)*(undefined2 *)0x1b40;
        local_8 = (undefined2 *****)*(undefined2 *)0x1b3e;
        local_a = (undefined2 ****)(*(int *)0xa5a + 1);
        local_c = (undefined2 *****)0x0;
        local_e = (undefined2 ****)0x885;
        local_10 = (undefined2 ****)0xe6d;
        func_0x0000a76b();
        local_6 = (undefined2 *****)((int)local_c * 0xf + param_5);
        local_8 = param_4;
        local_a = (undefined2 ****)0xbf48;
        local_c = (undefined2 *****)0x885;
        local_e = (undefined2 ****)0xe86;
        func_0x0001263c();
        local_6 = (undefined2 *****)local_108;
        local_8 = (undefined2 *****)0x0;
        local_a = (undefined2 *****)0xbf48;
        local_c = (undefined2 *****)0x11f2;
        pppppuVar2 = (undefined2 *****)0x22b2;
        local_e = (undefined2 ****)0xe9a;
        iVar1 = func_0x000276d7();
        if (iVar1 == 0) {
          local_c8 = local_f2;
          local_c6 = local_f0;
          local_6 = (undefined2 *****)0x0;
          local_8 = (undefined2 *****)&local_c8;
          local_a = (undefined2 ****)0x22b2;
          local_c = (undefined2 *****)0xec0;
          FUN_4375_821e();
          local_6 = (undefined2 *****)0x1;
          local_8 = (undefined2 *****)0x1;
          local_a = (undefined2 ****)0x22b2;
          local_c = (undefined2 *****)0xecc;
          FUN_1000_0599();
          local_6 = (undefined2 *****)0xffff;
          local_8 = (undefined2 *****)local_10a;
          local_a = (undefined2 ****)*(undefined2 *)0x1b42;
          local_c = (undefined2 *****)0x1;
          local_e = (undefined2 ****)0xbf48;
          local_10 = (undefined2 ****)0xdef;
          iStack_12 = 0xee7;
          FUN_1000_02b5();
          if ((undefined2 *****)local_10a == (undefined2 *****)0x6) {
            local_a = (undefined2 ****)*(undefined2 *)0x1b42;
            local_c = (undefined2 *****)0x14;
            local_e = (undefined2 ****)0xfbd;
          }
          else {
            local_6 = (undefined2 *****)((int)local_c * 0xf + param_5);
            local_8 = (undefined2 *****)local_c4;
            local_a = (undefined2 ****)0xdef;
            local_c = (undefined2 *****)0xccf;
            FUN_21f2_3454();
            local_74 = 0;
            local_6 = (undefined2 *****)*(undefined2 *)0xd72;
            local_8 = param_4;
            local_a = (undefined2 ****)0x0;
            local_c = (undefined2 *****)&local_c8;
            local_e = (undefined2 ****)0x22b2;
            local_10 = (undefined2 ****)0xce8;
            FUN_4375_79d4();
            local_6 = (undefined2 *****)0x0;
            local_8 = (undefined2 *****)local_10a;
            local_a = (undefined2 ****)*(undefined2 *)0x1b42;
            local_c = (undefined2 *****)0xf;
            local_e = (undefined2 ****)local_b6;
            local_10 = (undefined2 ****)0x22b2;
            iStack_12 = 0xd04;
            FUN_1000_02b5();
            local_6 = (undefined2 *****)0x1;
            local_8 = (undefined2 *****)0x1;
            local_a = (undefined2 ****)0xdef;
            local_c = (undefined2 *****)0xd11;
            FUN_1000_0599();
            local_a = (undefined2 ****)*(undefined2 *)0x1b42;
            local_c = (undefined2 *****)0x30;
            local_e = (undefined2 ****)local_95;
          }
          local_8 = (undefined2 *****)local_10a;
          local_6 = (undefined2 *****)0x0;
          local_10 = (undefined2 ****)0xdef;
          iStack_12 = 0xd2c;
          FUN_1000_02b5();
          local_6 = (undefined2 *****)0x1;
          local_8 = (undefined2 *****)0x1;
          local_a = (undefined2 *****)0xdef;
          pppppuVar2 = (undefined2 *****)0xdef;
          local_c = (undefined2 *****)0xd39;
          FUN_1000_0599();
        }
      }
      else {
        local_dc = (undefined2 *****)0x0;
      }
      local_6 = (undefined2 *****)local_dc;
      local_8 = (undefined2 *****)local_10a;
      iStack_12 = 0xd62;
      local_10 = pppppuVar2;
      local_e = (undefined2 *****)(param_5 + 0x3fc);
      local_c = (undefined2 *****)0x44;
      FUN_1000_02b5();
      local_8 = (undefined2 *****)0xdef;
      local_a = (undefined2 ****)0xd6b;
      local_6 = (undefined2 *****)(param_5 + 0x3fc);
      local_da = func_0x00024ce4();
      local_c = (undefined2 *****)(local_da + 0x44);
      local_6 = (undefined2 *****)0x0;
      local_8 = (undefined2 *****)local_10a;
      local_e = (undefined2 ****)((int)appuStack_d6 + local_da);
      local_10 = (undefined2 ****)0x22b2;
      iStack_12 = 0xd8f;
      FUN_1000_02b5();
    }
  }
  local_6 = (undefined2 *****)0x0;
  local_8 = (undefined2 *****)0x0;
  local_a = (undefined2 ****)0x1;
  local_c = (undefined2 *****)0x7;
  local_e = (undefined2 ****)*(undefined2 *)0xa5a;
  local_10 = (undefined2 ****)*(undefined2 *)0x1b3e;
  iStack_12 = *(undefined2 *)0xa5e;
  uStack_14 = *(undefined2 *)0xa58;
  uStack_16 = 0xdef;
  uStack_18 = 0xf2a;
  func_0x0000f350();
  local_6 = (undefined2 *****)0x1;
  local_8 = (undefined2 *****)0x1;
  local_a = (undefined2 ****)0xdef;
  local_c = (undefined2 *****)0xf37;
  FUN_1000_0599();
  local_6 = (undefined2 *****)0xdef;
  local_8 = (undefined2 *****)0xf3e;
  func_0x0000a799();
  return;
}



/* 3ab8:63c3  FUN_3ab8_63c3  799 bytes, 1 callers */

int __cdecl16far FUN_3ab8_63c3(int *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
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
  
  FUN_21f2_0ebc();
  local_59a = 0;
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0xf69;
  FUN_21f2_3454();
  puStack_c = (undefined1 *)0xf73;
  iVar4 = func_0x00024ce4();
  if (iVar4 != 3) {
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0xf87;
    FUN_21f2_2d26();
  }
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0xf97;
  FUN_21f2_2d26();
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0xfa7;
  FUN_21f2_2d26();
  local_14 = 0;
  local_598 = 1;
  if (((*(int *)0xa62 == 0x1b) && (1 < *(byte *)0x13b)) && (*(char *)0xd74 != '\0')) {
    local_59a = 2;
  }
  while( true ) {
    puStack_c = local_5ee;
    uStack_e = 0x22b2;
    uStack_10 = 0xfe1;
    iVar4 = func_0x000276d7();
    while (iVar4 == 0) {
      local_14 = local_14 + 1;
      if (local_14 < 0x15f) {
        iVar5 = local_14 * 0xf + param_3;
        puStack_c = (undefined1 *)0x22b2;
        uStack_e = 0x1008;
        FUN_21f2_3454();
        iVar4 = local_14;
        *(undefined1 *)(iVar5 + 0xe) = 0;
        if ((local_60b & 1) != 0) {
          *(undefined1 *)(iVar5 + 0xe) = 1;
        }
        auStack_596[local_14 * 2] = local_60a;
        auStack_596[iVar4 * 2 + 1] = local_608;
      }
      puStack_c = (undefined1 *)0x103a;
      iVar4 = func_0x000276cc();
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
          puStack_c = (undefined1 *)0x22b2;
          uStack_e = 0x1161;
          iVar4 = func_0x00024cb8();
          if (iVar4 < 0) {
            local_16 = local_5f4;
          }
        }
        if (local_5f2 < local_16) {
          puVar6 = (undefined2 *)(local_5f2 * 0xf + param_3);
          puVar8 = &local_12;
          puVar7 = puVar6;
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined2 *)(local_16 * 0xf + param_3);
          puVar8 = puVar7;
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar6 = *(undefined1 *)puVar8;
          puVar8 = &local_12;
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
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
        while (iVar4 = local_16, local_5f4 = local_5f4 + 1, local_5f4 <= local_14) {
          if ((auStack_596[local_16 * 2 + 1] <= auStack_596[local_5f4 * 2 + 1]) &&
             ((auStack_596[local_16 * 2 + 1] < auStack_596[local_5f4 * 2 + 1] ||
              (auStack_596[local_16 * 2] < auStack_596[local_5f4 * 2])))) {
            local_16 = local_5f4;
          }
        }
        if (local_5f2 < local_16) {
          local_59e = auStack_596[local_5f2 * 2];
          local_59c = auStack_596[local_5f2 * 2 + 1];
          uVar3 = auStack_596[local_16 * 2 + 1];
          auStack_596[local_5f2 * 2] = auStack_596[local_16 * 2];
          auStack_596[local_5f2 * 2 + 1] = uVar3;
          auStack_596[iVar4 * 2] = local_59e;
          auStack_596[iVar4 * 2 + 1] = local_59c;
          puVar6 = (undefined2 *)(local_5f2 * 0xf + param_3);
          puVar8 = &local_12;
          puVar7 = puVar6;
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined2 *)(local_16 * 0xf + param_3);
          puVar8 = puVar7;
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined1 *)puVar6 = *(undefined1 *)puVar8;
          puVar8 = &local_12;
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0x11f6;
    FUN_21f2_3454();
    puStack_c = (undefined1 *)0x1200;
    iVar4 = func_0x00024ce4();
    if (iVar4 != 3) {
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0x1214;
      FUN_21f2_2d26();
    }
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0x1224;
    FUN_21f2_2d26();
    puStack_c = (undefined1 *)0x22b2;
    uStack_e = 0x1240;
    FUN_21f2_2d26();
    local_59a = local_59a + -1;
    if (9 < *(byte *)0x13b) {
      local_59a = 0;
    }
  }
  return local_14;
}



/* 3ab8:66e2  FUN_3ab8_66e2  64 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_66e2(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((*(byte *)0x123 < 9) &&
     (((param_1 != 0 || (*(char *)0xcf4 != '\0')) ||
      (iVar2 = func_0x00024cb8(0x22b2,*(undefined2 *)0xd72,0x30b3), iVar2 == 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* 3ab8:6722  FUN_3ab8_6722  163 bytes, 2 callers */

void __cdecl16far FUN_3ab8_6722(undefined2 param_1,byte *param_2)

{
  undefined2 unaff_DS;
  undefined1 local_16 [10];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0x12ad;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)0x87a;
  uStack_6 = param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0x12b9;
  func_0x00024c86();
  puStack_4 = (undefined1 *)0x30b7;
  uStack_6 = param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0x12c7;
  FUN_21f2_2d26();
  if (*(char *)0x133 == '\0') {
    puStack_4 = (undefined1 *)0x30be;
  }
  else {
    puStack_4 = (undefined1 *)0x30bc;
  }
  uStack_6 = param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0x12e1;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x98a;
  uStack_6 = param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0x12ef;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x640;
  uStack_6 = param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0x12fd;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)(uint)*param_2;
  uStack_6 = 0x30c0;
  puStack_8 = local_16;
  uStack_a = 0x22b2;
  uStack_c = 0x1314;
  FUN_21f2_3454();
  puStack_4 = local_16;
  uStack_6 = param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0x1323;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x98a;
  uStack_6 = param_1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0x1331;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)param_1;
  uStack_6 = 1;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0x133f;
  FUN_1def_07a4();
  return;
}



/* 3ab8:67c5  FUN_3ab8_67c5  123 bytes, 0 callers */

int __cdecl16far
FUN_3ab8_67c5(undefined2 param_1,undefined2 param_2,undefined1 *param_3,undefined2 param_4,
             undefined2 param_5)

{
  code *pcVar1;
  undefined2 unaff_DS;
  undefined1 local_150e [5280];
  undefined1 local_6e [86];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *****local_a;
  undefined1 **ppuStack_8;
  undefined1 *local_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  local_6 = (undefined1 *)0x1350;
  FUN_21f2_0ebc();
  do {
    if (*(int *)0xd76 == 0) {
      local_4 = local_150e;
      local_6 = local_6e;
      ppuStack_8 = &local_4;
      local_a = &local_a;
      uStack_c = param_5;
      uStack_e = param_4;
      puStack_10 = param_3;
      uStack_12 = param_2;
      uStack_14 = param_1;
      uStack_16 = 0x22b2;
      uStack_18 = 0x1383;
      local_6 = (undefined1 *)FUN_3ab8_687b();
    }
    else {
      local_4 = param_3;
      local_6 = local_6e;
      ppuStack_8 = (undefined1 **)0x22b2;
      local_a = (undefined2 ******)0x1397;
      func_0x00024c86();
      local_6 = (undefined1 *)0x1388;
    }
    if (local_6 != (undefined1 *)0x1388) {
      return (int)local_6;
    }
    ppuStack_8 = (undefined1 **)local_150e;
    local_6 = local_6e;
    uStack_c = param_2;
    pcVar1 = (code *)swi(0x3f);
    local_4 = (undefined1 *)ppuStack_8;
    ppuStack_8 = (undefined1 **)(*pcVar1)();
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0x13ce;
    func_0x00024c86();
    *(undefined2 *)0xbc0 = 1;
    if (*(int *)0x158 != 0) {
      return -0xb;
    }
  } while ((ppuStack_8 == (undefined1 **)0xffff) || (ppuStack_8 == (undefined1 **)0xff9c));
  return (int)local_6;
}



/* 3ab8:687b  FUN_3ab8_687b  3551 bytes, 1 callers */

int __cdecl16far
FUN_3ab8_687b(int param_1,undefined2 param_2,byte *param_3,undefined2 param_4,undefined2 param_5,
             undefined2 *param_6,undefined2 *param_7,undefined1 *param_8,int param_9)

{
  code *pcVar1;
  undefined1 **ppuVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  int local_234;
  byte local_232 [14];
  undefined1 local_224 [80];
  int local_1d4 [3];
  undefined2 local_1ce;
  int local_1cc;
  undefined1 **local_1ca;
  undefined1 **local_1c8;
  undefined1 **local_1c6;
  undefined2 local_1c4;
  undefined1 local_1c0 [182];
  byte local_10a;
  char local_109;
  char local_108;
  undefined1 local_107;
  undefined1 *local_102;
  undefined1 **local_100;
  undefined1 **local_fe;
  int local_fc;
  int local_fa;
  int local_f8;
  undefined1 local_f6 [20];
  undefined1 **local_e2;
  undefined1 **local_e0;
  undefined2 local_de;
  byte local_dc [40];
  undefined1 local_b4 [100];
  uint local_50;
  undefined1 **local_4e;
  int local_4c;
  undefined1 *local_4a;
  undefined2 local_48;
  int local_46;
  undefined2 local_44;
  uint local_42;
  undefined1 local_40 [38];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int local_14;
  undefined1 *local_12;
  int local_10;
  undefined1 **ppuStack_e;
  undefined1 **local_c;
  undefined1 **local_a;
  undefined1 **local_8;
  undefined1 **local_6;
  
  local_6 = (undefined1 **)0x1406;
  FUN_21f2_0ebc();
  local_4c = 0;
  local_50 = 0;
  local_e0 = (undefined1 **)0x0;
  local_48 = 0;
  local_46 = 0;
  local_224[0] = 0;
  local_102 = (undefined1 *)0x16;
  do {
    local_6 = (undefined1 **)0x30c6;
    local_8 = (undefined1 **)local_224;
    local_a = (undefined1 **)0x22b2;
    puVar7 = (undefined1 *)0x22b2;
    local_c = (undefined1 **)0x1432;
    FUN_21f2_2d26();
    local_102 = local_102 + 1;
  } while ((int)local_102 < 0x40);
  local_1cc = param_1;
  if (9 < *(byte *)0x132) {
    local_1cc = 0xc9;
  }
LAB_3ab8_68d3:
  local_8 = (undefined1 **)0x1458;
  local_6 = (undefined1 **)puVar7;
  func_0x0000c3ca();
  local_4e = (undefined1 **)0x1;
  local_1c8 = (undefined1 **)0x0;
  local_10a = *param_3;
  local_109 = ':';
  local_108 = '\\';
  local_107 = 0;
  if ((0x60 < local_10a) && (local_10a < 0x7b)) {
    local_10a = local_10a - 0x20;
  }
  local_6 = (undefined1 **)0x30c8;
  local_8 = (undefined1 **)local_232;
  local_a = (undefined1 **)0x885;
  local_c = (undefined1 **)0x1497;
  FUN_21f2_3454();
  local_6 = (undefined1 **)&local_10a;
  local_8 = (undefined1 **)local_dc;
  local_a = (undefined1 **)0x22b2;
  local_c = (undefined1 **)0x14a8;
  FUN_21f2_3454();
  local_6 = (undefined1 **)local_232;
  local_8 = (undefined1 **)local_dc;
  local_a = (undefined1 **)0x22b2;
  local_c = (undefined1 **)0x14b9;
  FUN_21f2_2d26();
  if (*(char *)0x133 != '\0') {
    local_6 = (undefined1 **)local_232;
    local_8 = (undefined1 **)local_dc;
    local_a = (undefined1 **)0x22b2;
    local_c = (undefined1 **)0x14d1;
    FUN_21f2_3454();
    local_dc[0] = local_10a;
    local_dc[1] = 0x5f;
  }
  local_6 = (undefined1 **)0x22b2;
  local_8 = (undefined1 **)0x14e4;
  FUN_4375_a3e5();
  local_6 = (undefined1 **)local_40;
  local_8 = (undefined1 **)0x0;
  local_a = (undefined1 **)local_dc;
  local_c = (undefined1 **)0x22b2;
  ppuStack_e = (undefined1 **)0x14f5;
  iVar4 = func_0x000276d7();
  if (iVar4 != 0) {
    local_6 = (undefined1 **)local_48;
    local_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 **)0x1503;
    iVar4 = FUN_3ab8_66e2();
    if (iVar4 != 0) {
      return 0;
    }
    local_6 = (undefined1 **)local_1c0;
    local_8 = (undefined1 **)&local_10a;
    local_a = (undefined1 **)local_232;
    local_c = (undefined1 **)0x1;
    pcVar1 = (code *)swi(0x3f);
    iVar4 = (*pcVar1)();
    if (iVar4 < 1) {
      return 0;
    }
  }
  do {
    local_6 = (undefined1 **)0x22b2;
    local_8 = (undefined1 **)0x1536;
    func_0x0000c3ca();
    local_100 = (undefined1 **)0x0;
    local_6 = (undefined1 **)0x254;
    local_8 = (undefined1 **)local_dc;
    local_a = (undefined1 **)0x885;
    local_c = (undefined1 **)0x154d;
    local_6 = (undefined1 **)FUN_21f2_1348();
    *(int *)0xd70 = (int)local_6;
    if (local_6 == (undefined1 **)0x0) {
LAB_3ab8_69d6:
      local_6 = (undefined1 **)0x22b2;
      local_8 = (undefined1 **)0x155b;
      func_0x0002504e();
      *(undefined2 *)0xd70 = 0;
      return 0;
    }
    local_8 = (undefined1 **)0x50;
    local_a = (undefined1 **)0xbf48;
    local_c = (undefined1 **)0x22b2;
    ppuStack_e = (undefined1 **)0x1571;
    iVar4 = func_0x0002509c();
    if (iVar4 == 0) {
      local_a = (undefined1 **)0x1;
    }
    if ((((*(char *)0xbf56 == 'P') || (*(char *)0xbf56 == 'p')) && (local_a == (undefined1 **)0x0))
       && (*(byte *)0x132 < 10)) {
      local_48 = 1;
    }
    local_6 = (undefined1 **)*(undefined2 *)0xd70;
    local_8 = (undefined1 **)0x50;
    local_a = (undefined1 **)0xbf48;
    local_c = (undefined1 **)0x22b2;
    ppuStack_e = (undefined1 **)0x15ae;
    iVar4 = func_0x0002509c();
    if (iVar4 == 0) {
      local_a = (undefined1 **)0x1;
    }
    if ((*(char *)0xbf49 != local_109) || (*(char *)0xbf4a != local_108)) {
      local_a = (undefined1 **)0x1;
    }
    if (local_a == (undefined1 **)0x0) {
      local_de = 0;
      local_f8 = 0;
      local_1ce = 0;
      local_234 = 0;
      local_1c6 = (undefined1 **)0x0;
      local_100 = (undefined1 **)0x1;
      *param_8 = 0;
      local_6 = (undefined1 **)param_3;
      local_8 = (undefined1 **)0x22b2;
      local_a = (undefined1 **)0x164e;
      uVar5 = func_0x00024ce4();
      if (uVar5 < 4) {
        local_1c6 = (undefined1 **)0x1;
      }
      while( true ) {
        if (local_1c6 == (undefined1 **)0x0) {
          local_6 = (undefined1 **)local_1c0;
          local_8 = (undefined1 **)&local_10a;
          local_a = (undefined1 **)&local_de;
          local_c = (undefined1 **)&local_f8;
          ppuStack_e = (undefined1 **)local_1ce;
          local_10 = local_234;
          local_12 = param_8;
          local_14 = -0x40b8;
          uStack_16 = 1;
          uStack_18 = 0x22b2;
          uStack_1a = 0x168c;
          FUN_3ab8_5afd();
          local_234 = local_f8;
          local_1ce = local_de;
          local_6 = (undefined1 **)param_3;
          local_8 = (undefined1 **)param_8;
          local_a = (undefined1 **)0x22b2;
          local_c = (undefined1 **)0x16aa;
          iVar4 = func_0x00024cb8();
          if (iVar4 == 0) {
            local_1c6 = local_100;
          }
        }
        local_6 = (undefined1 **)*(undefined2 *)0xd70;
        local_8 = (undefined1 **)0x50;
        local_a = (undefined1 **)0xbf48;
        local_c = (undefined1 **)0x22b2;
        ppuStack_e = (undefined1 **)0x16c9;
        iVar4 = func_0x0002509c();
        if ((iVar4 == 0) ||
           ((((*(char *)0xbf48 != '|' && (*(char *)0xbf48 != ' ')) && (*(char *)0xbf48 != -0x5b)) ||
            ((*(char *)0xbf49 != ' ' && (*(char *)0xbf49 != '-')))))) break;
        local_100 = (undefined1 **)((int)local_100 + 1);
      }
      local_6 = (undefined1 **)0x22b2;
      local_8 = (undefined1 **)0x16d5;
      func_0x0002504e();
      *(undefined2 *)0xd70 = 0;
      if ((int)local_1c6 < 1) {
        local_1c6 = (undefined1 **)0x1;
      }
      local_4e = (undefined1 **)((2 - *(int *)0x1b42) / 2 + (int)local_1c6);
LAB_3ab8_6b78:
      puVar7 = (undefined1 *)0x22b2;
LAB_3ab8_6b7e:
      ppuVar2 = local_1c6;
      if ((int)local_4e < 1) {
        local_4e = (undefined1 **)0x1;
      }
LAB_3ab8_6b85:
      do {
        local_1c6 = ppuVar2;
        local_8 = (undefined1 **)0x170a;
        local_6 = (undefined1 **)puVar7;
        func_0x0000c3ca();
        local_6 = (undefined1 **)0x885;
        local_8 = (undefined1 **)0x170f;
        func_0x0000c354();
        local_6 = (undefined1 **)*(undefined2 *)0x1b40;
        local_8 = (undefined1 **)*(undefined2 *)0x1b3e;
        local_a = (undefined1 **)(*(int *)0xa5a + 1);
        local_c = (undefined1 **)0x0;
        ppuStack_e = (undefined1 **)0x885;
        local_10 = 0x1724;
        func_0x0000a76b();
        local_6 = (undefined1 **)0x254;
        local_8 = (undefined1 **)local_dc;
        local_a = (undefined1 **)0x885;
        local_c = (undefined1 **)0x1735;
        iVar4 = FUN_21f2_1348();
        *(int *)0xd70 = iVar4;
        if (iVar4 == 0) goto LAB_3ab8_69d6;
        local_6 = local_1c6;
        local_8 = local_4e;
        local_a = local_100;
        local_c = (undefined1 **)0x12;
        ppuStack_e = (undefined1 **)0x22b2;
        local_10 = 0x1784;
        FUN_3ab8_5dc0();
        local_de = 0;
        local_f8 = 0;
        local_1ce = 0;
        local_234 = 0;
        local_1ca = (undefined1 **)0x1;
        local_6 = (undefined1 **)*(undefined2 *)0xd70;
        local_8 = (undefined1 **)0x50;
        local_a = (undefined1 **)0xbf48;
        local_c = (undefined1 **)0x22b2;
        uVar8 = 0x22b2;
        ppuStack_e = (undefined1 **)0x17b0;
        iVar4 = func_0x0002509c();
        if (iVar4 == 0) goto LAB_3ab8_69d6;
        while( true ) {
          local_6 = (undefined1 **)&local_42;
          local_8 = (undefined1 **)&local_10;
          local_a = (undefined1 **)&local_fa;
          local_c = &local_12;
          local_10 = 0x17d0;
          ppuStack_e = (undefined1 **)uVar8;
          func_0x0000dcbd();
          local_6 = (undefined1 **)*(undefined2 *)0xd70;
          local_8 = (undefined1 **)0x50;
          local_a = (undefined1 **)0xbf48;
          local_c = (undefined1 **)0x885;
          uVar8 = 0x22b2;
          ppuStack_e = (undefined1 **)0x17e4;
          iVar4 = func_0x0002509c();
          if (((iVar4 == 0) ||
              ((((1 < (int)local_1ca && (*(char *)0xbf48 != '|')) && (*(char *)0xbf48 != ' ')) &&
               (*(char *)0xbf48 != -0x5b)))) ||
             (((1 < (int)local_1ca && (*(char *)0xbf49 != ' ')) && (*(char *)0xbf49 != '-'))))
          break;
          local_6 = (undefined1 **)0xa;
          local_8 = (undefined1 **)0xbf48;
          local_a = (undefined1 **)0x22b2;
          uVar8 = 0x22b2;
          local_c = (undefined1 **)0x184b;
          puVar7 = (undefined1 *)func_0x00025b06();
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = 0;
          }
          local_6 = (undefined1 **)local_1c0;
          local_8 = (undefined1 **)&local_10a;
          local_a = (undefined1 **)&local_de;
          local_c = (undefined1 **)&local_f8;
          ppuStack_e = (undefined1 **)local_1ce;
          local_10 = local_234;
          local_12 = local_b4;
          local_14 = -0x40b8;
          uStack_16 = 1;
          uStack_18 = 0x22b2;
          uStack_1a = 0x1886;
          FUN_3ab8_5afd();
          local_234 = local_f8;
          local_1ce = local_de;
          local_44 = 0x16;
          local_4a = (undefined1 *)((int)local_1ca + (2 - (int)local_4e));
          if ((int)local_4e <= (int)local_1ca) {
            local_6 = (undefined1 **)0x1;
            local_8 = (undefined1 **)0x1;
            local_a = (undefined1 **)0x22b2;
            uVar8 = 0xdef;
            local_c = (undefined1 **)0x18ba;
            FUN_1000_0599();
            if (local_1ca == (undefined1 **)0x1) {
              *(byte *)0xbf48 = local_10a;
            }
            local_6 = (undefined1 **)local_224;
            if (local_1c6 == local_1ca) {
              local_8 = (undefined1 **)0xfff9;
            }
            else {
              local_8 = (undefined1 **)0x7;
            }
            local_a = (undefined1 **)local_4a;
            local_c = (undefined1 **)local_44;
            ppuStack_e = (undefined1 **)0xbf48;
            local_10 = 0xdef;
            local_12 = (undefined1 *)0x18ef;
            FUN_3ab8_59d7();
            if (local_1c6 == local_1ca) {
              local_6 = (undefined1 **)local_b4;
              local_8 = (undefined1 **)param_8;
              local_a = (undefined1 **)0xdef;
              uVar8 = 0x22b2;
              local_c = (undefined1 **)0x1909;
              FUN_21f2_3454();
            }
          }
          if (*(int *)0x1b42 + -1 <= (int)local_4a) break;
          local_e2 = local_1ca;
          local_1ca = (undefined1 **)((int)local_1ca + 1);
        }
        local_6 = (undefined1 **)0x1;
        local_8 = (undefined1 **)0x1;
        local_c = (undefined1 **)0x17f5;
        local_a = (undefined1 **)uVar8;
        FUN_1000_0599();
        local_6 = (undefined1 **)0xdef;
        local_8 = (undefined1 **)0x17fc;
        func_0x0002504e();
        *(undefined2 *)0xd70 = 0;
        ppuStack_e = (undefined1 **)0x22b2;
        local_102 = local_4a;
        while (local_102 = local_102 + 1, (int)local_102 <= *(int *)0x1b42 + -1) {
          local_6 = (undefined1 **)0x0;
          local_8 = (undefined1 **)0x7;
          local_a = (undefined1 **)local_102;
          local_c = (undefined1 **)0x16;
          local_12 = (undefined1 *)0x194d;
          local_10 = (int)ppuStack_e;
          ppuStack_e = (undefined1 **)local_224;
          FUN_1000_02b5();
          ppuStack_e = (undefined1 **)0xdef;
        }
        local_6 = (undefined1 **)0x0;
        local_8 = (undefined1 **)0x0;
        local_a = (undefined1 **)0x0;
        local_c = (undefined1 **)0x0;
        local_10 = 0x195d;
        func_0x0000a76b();
        local_6 = (undefined1 **)0x0;
        local_8 = (undefined1 **)0x0;
        local_a = (undefined1 **)0x1;
        local_c = (undefined1 **)0x7;
        ppuStack_e = (undefined1 **)*(undefined2 *)0xa5a;
        local_10 = *(int *)0x1b3e;
        local_12 = (undefined1 *)*(undefined2 *)0xa5e;
        local_14 = *(int *)0xa58;
        uStack_16 = 0x885;
        uStack_18 = 0x1981;
        func_0x0000f350();
        local_6 = (undefined1 **)0xdef;
        local_8 = (undefined1 **)0x1989;
        func_0x0000a799();
        if (local_1c6 != local_1c8) {
          local_1c8 = local_1c6;
          local_6 = (undefined1 **)param_9;
          local_8 = (undefined1 **)param_8;
          local_a = (undefined1 **)local_1d4;
          local_c = (undefined1 **)0x885;
          ppuStack_e = (undefined1 **)0x19aa;
          local_fe = (undefined1 **)FUN_3ab8_63c3();
          *param_6 = local_fe;
          local_8 = (undefined1 **)param_9;
          local_a = (undefined1 **)param_8;
          local_c = (undefined1 **)0x0;
          local_6 = (undefined1 **)0x1;
          ppuStack_e = (undefined1 **)0x1;
          local_10 = local_1cc;
          local_12 = (undefined1 *)0x885;
          local_14 = 0x19d2;
          FUN_3ab8_607e();
          local_6 = (undefined1 **)0x885;
          local_8 = (undefined1 **)0x19da;
          func_0x0000c354();
          local_6 = (undefined1 **)*(undefined2 *)0x1b40;
          local_8 = (undefined1 **)*(undefined2 *)0x1b3e;
          local_a = (undefined1 **)(*(int *)0xa5a + 1);
          local_46 = 0;
          local_c = (undefined1 **)0x0;
          ppuStack_e = (undefined1 **)0x885;
          local_10 = 0x19f2;
          func_0x0000a76b();
        }
        puVar7 = (undefined1 *)0x885;
        if (*(char *)0x133 != '\0') {
          local_6 = (undefined1 **)param_8;
          local_8 = (undefined1 **)0x885;
          puVar7 = (undefined1 *)0x22b2;
          local_a = (undefined1 **)0x1a04;
          uVar5 = func_0x00024ce4();
          if (3 < uVar5) {
            local_6 = (undefined1 **)local_40;
            local_8 = (undefined1 **)0x10;
            local_a = (undefined1 **)param_8;
            local_c = (undefined1 **)0x22b2;
            puVar7 = (undefined1 *)0x22b2;
            ppuStack_e = (undefined1 **)0x1a1a;
            iVar4 = func_0x000276d7();
            if (iVar4 != 0) {
              local_6 = (undefined1 **)local_1c0;
              local_8 = (undefined1 **)&local_10a;
              local_a = (undefined1 **)local_232;
              local_c = (undefined1 **)0xa;
              pcVar1 = (code *)swi(0x3f);
              iVar4 = (*pcVar1)();
              if (iVar4 < 1) {
                return 0;
              }
LAB_3ab8_6ec6:
              if (*(int *)0x158 != 0) {
                return -0xb;
              }
              goto LAB_3ab8_68d3;
            }
          }
        }
LAB_3ab8_726a:
        do {
          local_6 = (undefined1 **)&local_42;
          local_8 = (undefined1 **)&local_10;
          local_a = (undefined1 **)&local_fa;
          local_c = &local_12;
          local_10 = 0x1e00;
          ppuStack_e = (undefined1 **)puVar7;
          func_0x0000dcbd();
          local_6 = (undefined1 **)(undefined1 *)0x885;
          do {
            puVar7 = (undefined1 *)0xdef;
            local_8 = (undefined1 **)0x1e08;
            iVar4 = FUN_1000_0632();
            local_6 = (undefined1 **)puVar7;
          } while (iVar4 != 0);
          if (local_12 + local_fa == (undefined1 *)0x0) {
            if (local_46 == 0) {
              local_6 = (undefined1 **)0x30d5;
              local_8 = (undefined1 **)local_b4;
              local_a = (undefined1 **)0xdef;
              local_c = (undefined1 **)0x1a6d;
              FUN_21f2_3454();
              local_6 = (undefined1 **)0x860;
              local_8 = (undefined1 **)local_b4;
              local_a = (undefined1 **)0x22b2;
              local_c = (undefined1 **)0x1a7d;
              FUN_21f2_2d26();
              local_6 = (undefined1 **)local_1d4[0];
              local_8 = (undefined1 **)0x30da;
              local_a = (undefined1 **)local_f6;
              local_c = (undefined1 **)0x22b2;
              ppuStack_e = (undefined1 **)0x1a91;
              FUN_21f2_3454();
              local_6 = (undefined1 **)local_f6;
              local_8 = (undefined1 **)local_b4;
              local_a = (undefined1 **)0x22b2;
              local_c = (undefined1 **)0x1aa3;
              FUN_21f2_2d26();
              local_1c4 = 5;
              if (300 < local_1d4[0]) {
                local_1c4 = 6;
              }
              if (0x15e < local_1d4[0]) {
                local_1c4 = 2;
              }
              local_6 = (undefined1 **)0xffff;
              local_8 = (undefined1 **)local_1c4;
              local_a = (undefined1 **)*(undefined2 *)0x1b42;
              local_c = (undefined1 **)0x44;
              ppuStack_e = (undefined1 **)local_b4;
              local_10 = 0x22b2;
              local_12 = (undefined1 *)0x1ae1;
              FUN_1000_02b5();
              if (*(char *)0x133 != '\0') {
                local_1c4 = 6;
              }
              local_6 = (undefined1 **)0x0;
              local_8 = (undefined1 **)local_1c4;
              local_a = (undefined1 **)*(undefined2 *)0x1b42;
              local_c = (undefined1 **)0x4;
              ppuStack_e = (undefined1 **)0x30de;
              local_10 = 0xdef;
              local_12 = (undefined1 *)0x1b09;
              FUN_1000_02b5();
              if (*(char *)0x13a == '\0') {
                local_6 = (undefined1 **)0x30ef;
              }
              else {
                local_6 = (undefined1 **)0x30f4;
              }
              local_8 = (undefined1 **)local_b4;
              local_a = (undefined1 **)0xdef;
              local_c = (undefined1 **)0x1b26;
              FUN_21f2_3454();
              local_6 = (undefined1 **)0x30f9;
              local_8 = (undefined1 **)local_b4;
              local_a = (undefined1 **)0x22b2;
              local_c = (undefined1 **)0x1b36;
              FUN_21f2_2d26();
              local_6 = (undefined1 **)0x0;
              local_8 = (undefined1 **)local_1c4;
              local_a = (undefined1 **)*(undefined2 *)0x1b42;
              local_c = (undefined1 **)0x3c;
              ppuStack_e = (undefined1 **)local_b4;
              local_10 = 0x22b2;
              local_12 = (undefined1 *)0x1b51;
              FUN_1000_02b5();
              local_6 = (undefined1 **)0x30fc;
              local_8 = (undefined1 **)*(undefined2 *)0xd72;
              local_a = (undefined1 **)0xdef;
              local_c = (undefined1 **)0x1b61;
              iVar4 = func_0x00024cb8();
              if (iVar4 == 0) {
                local_6 = (undefined1 **)param_8;
                local_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 **)0x1b6e;
                FUN_3ab8_5d12();
              }
              local_6 = (undefined1 **)0x1;
              local_8 = (undefined1 **)0x1;
              local_a = (undefined1 **)0x22b2;
              local_c = (undefined1 **)0x1b79;
              FUN_1000_0599();
            }
            uVar8 = 0xdef;
            local_6 = (undefined1 **)&local_10a;
            local_8 = (undefined1 **)local_b4;
            local_a = (undefined1 **)0xdef;
            local_c = (undefined1 **)0x1b89;
            FUN_3ab8_6722();
            if (9 < *(byte *)0x132) {
              local_6 = (undefined1 **)0x3100;
              local_8 = (undefined1 **)local_b4;
              local_a = (undefined1 **)0xdef;
              uVar8 = 0x22b2;
              local_c = (undefined1 **)0x1ba0;
              FUN_21f2_2d26();
            }
            local_6 = (undefined1 **)0x3102;
            local_8 = (undefined1 **)local_b4;
            local_c = (undefined1 **)0x1bb0;
            local_a = (undefined1 **)uVar8;
            FUN_21f2_2d26();
            local_6 = (undefined1 **)param_8;
            local_8 = (undefined1 **)local_b4;
            local_a = (undefined1 **)0x22b2;
            local_c = (undefined1 **)0x1bbf;
            FUN_21f2_2d26();
            local_6 = (undefined1 **)0x22b2;
            local_8 = (undefined1 **)0x1bc6;
            func_0x0001bb4e();
            local_6 = (undefined1 **)local_b4;
            local_8 = (undefined1 **)0x1bb4;
            local_a = (undefined1 **)0x1bd0;
            func_0x00012276();
            local_6 = (undefined1 **)&local_fc;
            local_8 = (undefined1 **)&local_50;
            local_a = (undefined1 **)&local_4c;
            local_c = (undefined1 **)0x0;
            ppuStack_e = (undefined1 **)0x2710;
            local_10 = 0x11f2;
            local_12 = (undefined1 *)0x1be9;
            local_14 = FUN_4375_883e();
            local_6 = (undefined1 **)0x11f2;
            puVar7 = (undefined1 *)0x885;
            local_8 = (undefined1 **)0x1bf4;
            func_0x0000c3ca();
            if (*(int *)0x158 != 0) {
              return -0xb;
            }
            if (local_14 == -1) {
              return -0xb;
            }
            local_6 = (undefined1 **)puVar7;
            if (((local_fc != 0) && (0xa0 < local_4c)) &&
               ((local_4c < 0x110 && ((int)local_50 < 0x10)))) {
              local_14 = 0x31;
            }
          }
          else {
            if ((((local_4c < 0x87) || (0x9a < local_4c)) &&
                ((local_4c < 0x1ff || ((0x212 < local_4c || (local_1cc != 0xc9)))))) ||
               ((local_10 < 100 || (((200 < local_10 && (local_10 < 400)) || (600 < local_10))))))
            goto LAB_3ab8_726a;
            uVar5 = (int)local_42 >> 0xf;
            local_e0 = (undefined1 **)
                       ((((int)((local_42 ^ uVar5) - uVar5) >> 4 ^ uVar5) - uVar5) + 1);
            if (((local_42 == local_50) && (local_e0 != (undefined1 **)0x2)) &&
               ((int)local_e0 - *(int *)0x1b42 != -1)) goto LAB_3ab8_726a;
            local_50 = local_42;
            local_fc = 1;
            if (*(int *)0x1b42 <= (int)local_e0) goto LAB_3ab8_726a;
          }
          puVar7 = (undefined1 *)0x885;
          local_8 = (undefined1 **)0x1c29;
          func_0x0000c3ca();
          if (local_14 == 0x31) {
            local_4e = (undefined1 **)0x1;
            local_6 = (undefined1 **)param_4;
            local_8 = (undefined1 **)param_3;
            pcVar1 = (code *)swi(0x3f);
            (*pcVar1)();
            goto LAB_3ab8_68d3;
          }
          if ((local_14 == 0x32) && (9 < *(byte *)0x132)) {
            local_6 = (undefined1 **)0x0;
            local_8 = (undefined1 **)local_dc;
            local_a = (undefined1 **)0x1078;
            local_c = (undefined1 **)0x3104;
            pcVar1 = (code *)swi(0x3f);
            (*pcVar1)();
            *(undefined2 *)0x158 = 0;
            goto LAB_3ab8_68d3;
          }
          while( true ) {
            if (local_14 == 0x6200) {
              if (*(char *)0x13a == '\0') {
                *(undefined1 *)0x13a = 1;
              }
              else {
                *(undefined1 *)0x13a = 0;
              }
              local_1c8 = (undefined1 **)0x0;
              ppuVar2 = local_1c6;
              goto LAB_3ab8_6b85;
            }
            if (local_14 == 0x6b00) {
              local_6 = (undefined1 **)local_48;
              local_8 = (undefined1 **)0x885;
              local_a = (undefined1 **)0x1c91;
              iVar4 = FUN_3ab8_66e2();
              if (iVar4 != 0) goto LAB_3ab8_726a;
              local_6 = (undefined1 **)local_1c0;
              local_8 = (undefined1 **)&local_10a;
              local_a = (undefined1 **)local_232;
              local_c = (undefined1 **)0x0;
              pcVar1 = (code *)swi(0x3f);
              iVar4 = (*pcVar1)();
              if (iVar4 == 0) {
                return 0;
              }
              goto LAB_3ab8_6ec6;
            }
            if (local_14 == 0x3e00) {
              if (*(char *)0x133 == '\0') {
                *(undefined1 *)0x133 = 1;
              }
              else {
                *(undefined1 *)0x133 = 0;
              }
              goto LAB_3ab8_68d3;
            }
            if (local_fc == 0) goto LAB_3ab8_760d;
            local_14 = 0;
            uVar5 = (int)local_50 >> 0xf;
            local_e0 = (undefined1 **)
                       ((((int)((local_50 ^ uVar5) - uVar5) >> 4 ^ uVar5) - uVar5) + 1);
            if ((1 < (int)local_e0) && ((int)local_e0 <= *(int *)0x1b42 + -1)) break;
            if ((int)local_e0 < *(int *)0x1b42) goto LAB_3ab8_760d;
            local_14 = 0x6200;
          }
          if ((0x9a < local_4c) && (local_4c < 0x1fe)) {
            puVar6 = (undefined1 *)((int)local_e0 + (int)local_4e);
            local_e0 = (undefined1 **)(puVar6 + -2);
            if ((int)local_100 < (int)(puVar6 + -2)) {
              local_e0 = local_100;
            }
            ppuVar2 = local_e0;
            if (local_1c6 != local_e0) goto LAB_3ab8_6b85;
            if (((local_fc == 2) && (8 < *(byte *)0x123)) && (*(char *)0xd74 != '\0')) {
              *param_7 = 0;
              goto LAB_3ab8_71db;
            }
            local_14 = 0xd;
          }
          if ((0x212 < local_4c) && (local_1cc == 0xc9)) {
            local_e0 = (undefined1 **)((int)local_e0 + (int)((int)local_6 + -2));
            local_46 = 1;
            local_6 = (undefined1 **)0x885;
            puVar7 = (undefined1 *)0x885;
            local_8 = (undefined1 **)0x1d9b;
            bVar3 = func_0x0000db57();
            if (((bVar3 & 0xe) == 4) && (9 < *(byte *)0x132)) {
              local_6 = (undefined1 **)((int)local_e0 * 0xf + param_9);
              local_8 = (undefined1 **)param_8;
              local_a = (undefined1 **)0xbf48;
              local_c = (undefined1 **)0x885;
              ppuStack_e = (undefined1 **)0x1dc5;
              func_0x0001263c();
              local_6 = (undefined1 **)0x3107;
              local_8 = (undefined1 **)0x2e;
              local_a = (undefined1 **)0xbf48;
              local_c = (undefined1 **)0x11f2;
              ppuStack_e = (undefined1 **)0x1dd9;
              local_8 = (undefined1 **)func_0x00025b06();
              local_a = (undefined1 **)0x22b2;
              puVar7 = (undefined1 *)0x22b2;
              local_c = (undefined1 **)0x1de1;
              iVar4 = func_0x00024cb8();
              if (iVar4 == 0) goto LAB_3ab8_726a;
              local_6 = (undefined1 **)0x2;
              local_8 = (undefined1 **)0xbf48;
              local_a = (undefined1 **)0x22b2;
              puVar7 = (undefined1 *)0x22b2;
              local_c = (undefined1 **)0x1eb6;
              iVar4 = func_0x00026f7a();
              if (iVar4 == 0) {
                local_6 = (undefined1 **)0x100;
                local_8 = (undefined1 **)0xbf48;
                local_a = (undefined1 **)0x22b2;
                puVar7 = (undefined1 *)0x22b2;
                local_c = (undefined1 **)0x1ef8;
                iVar4 = FUN_21f2_507a();
                if (iVar4 != 0) goto LAB_3ab8_726a;
                *(undefined1 *)(param_9 + (int)local_e0 * 0xf + 0xe) = 1;
              }
              else if (*(int *)0x7a34 == 0xd) {
                local_6 = (undefined1 **)0x180;
                local_8 = (undefined1 **)0xbf48;
                local_a = (undefined1 **)0x22b2;
                puVar7 = (undefined1 *)0x22b2;
                local_c = (undefined1 **)0x1ed0;
                iVar4 = FUN_21f2_507a();
                if (iVar4 != 0) goto LAB_3ab8_726a;
                *(undefined1 *)(param_9 + (int)local_e0 * 0xf + 0xe) = 0;
              }
            }
            else {
              if (local_e0 == local_c) {
                if (((local_fc != 2) || (*(byte *)0x123 < 9)) || (*(char *)0xd74 == '\0')) {
                  local_6 = (undefined1 **)param_8;
                  local_8 = (undefined1 **)param_3;
                  local_a = (undefined1 **)0x885;
                  local_c = (undefined1 **)0x1f60;
                  FUN_21f2_3454();
                  param_9 = (int)local_c * 0xf + param_9;
                  local_8 = (undefined1 **)param_3;
                  local_a = (undefined1 **)param_2;
                  local_c = (undefined1 **)0x22b2;
                  ppuStack_e = (undefined1 **)0x1f79;
                  local_6 = (undefined1 **)param_9;
                  func_0x0001263c();
                  local_8 = (undefined1 **)0xd04;
                  local_a = (undefined1 **)0x11f2;
                  local_c = (undefined1 **)0x1f86;
                  local_6 = (undefined1 **)param_9;
                  FUN_21f2_3454();
                  local_6 = (undefined1 **)0x2e;
                  local_8 = (undefined1 **)0xd04;
                  local_a = (undefined1 **)0x22b2;
                  local_c = (undefined1 **)0x1f95;
                  puVar7 = (undefined1 *)func_0x00025b06();
                  if (puVar7 != (undefined1 *)0x0) {
                    *puVar7 = 0;
                    return param_1;
                  }
                  return param_1;
                }
                *param_7 = local_c;
LAB_3ab8_71db:
                local_6 = (undefined1 **)param_8;
                local_8 = (undefined1 **)param_3;
                local_a = (undefined1 **)0x885;
                local_c = (undefined1 **)0x1d66;
                FUN_21f2_3454();
                return 5000;
              }
              local_c = local_e0;
              if ((int)local_fe < (int)local_e0) {
                local_c = local_fe;
              }
            }
LAB_3ab8_7391:
            local_6 = local_fe;
            local_8 = (undefined1 **)param_9;
            local_a = (undefined1 **)param_8;
            ppuStack_e = local_fe;
            local_10 = local_1cc;
            local_14 = 0x1f29;
            local_12 = puVar7;
            FUN_3ab8_607e();
            goto LAB_3ab8_726a;
          }
          if ((0x86 < local_4c) && (local_4c < 0x9b)) {
            if (local_e0 == (undefined1 **)0x2) {
              local_4e = (undefined1 **)((int)local_4e - local_fc);
              goto LAB_3ab8_6b7e;
            }
            if (*(int *)0x1b42 - (int)local_e0 == 1) {
              local_4e = (undefined1 **)((int)local_4e + local_fc);
              goto LAB_3ab8_747b;
            }
            if ((2 < (int)local_e0) && ((int)local_e0 <= *(int *)0x1b42 + -2)) {
              local_6 = (undefined1 **)0x885;
              local_8 = (undefined1 **)0x2030;
              FUN_28b3_0d8b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2043;
              FUN_28b3_0d8b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2048;
              FUN_28b3_1172();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2051;
              func_0x0002996b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x205a;
              FUN_28b3_0d8b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x205f;
              func_0x00029c9d();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2073;
              FUN_28b3_0d8b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2078;
              FUN_28b3_1163();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x207d;
              func_0x00029d78();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2082;
              local_4e = (undefined1 **)FUN_28b3_0f51();
              goto LAB_3ab8_6b78;
            }
          }
          if (((0x1fe < local_4c) && (local_4c < 0x213)) && (local_1cc == 0xc9)) {
            if ((2 < (int)local_e0) && ((int)local_e0 <= *(int *)0x1b42 + -2)) {
              local_6 = (undefined1 **)0x885;
              local_8 = (undefined1 **)0x2101;
              FUN_28b3_0d8b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2114;
              FUN_28b3_0d8b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2119;
              FUN_28b3_1172();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2122;
              func_0x0002996b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x212b;
              FUN_28b3_0d8b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2130;
              func_0x00029c9d();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2144;
              FUN_28b3_0d8b();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x2149;
              FUN_28b3_1163();
              local_6 = (undefined1 **)0x22b2;
              local_8 = (undefined1 **)0x214e;
              func_0x00029d78();
              local_6 = (undefined1 **)0x22b2;
              puVar7 = (undefined1 *)0x22b2;
              local_8 = (undefined1 **)0x2153;
              FUN_28b3_0f51();
            }
            goto LAB_3ab8_7391;
          }
LAB_3ab8_760d:
          if (local_14 == 0xd) {
            local_6 = (undefined1 **)param_8;
            local_8 = (undefined1 **)param_3;
            local_a = (undefined1 **)0x885;
            local_c = (undefined1 **)0x219e;
            FUN_21f2_3454();
            if (param_1 != 0xca) {
              return 1;
            }
            return 0xca;
          }
          if (local_14 == 0x3a00) {
            local_1c6 = (undefined1 **)((int)local_1c6 + -1);
            if ((int)local_1c6 < 1) {
              local_1c6 = (undefined1 **)0x1;
            }
            ppuVar2 = local_1c6;
            if ((int)local_1c6 < (int)local_4e) {
              local_4e = (undefined1 **)((int)local_4e + -1);
            }
            goto LAB_3ab8_6b85;
          }
          if (local_14 == 0x3d00) {
            local_1c6 = (undefined1 **)((int)local_1c6 + 1);
            if ((int)local_100 < (int)local_1c6) {
              local_1c6 = local_100;
            }
            ppuVar2 = local_1c6;
            if ((int)local_e2 < (int)local_1c6) {
              local_4e = (undefined1 **)((int)local_4e + 1);
            }
            goto LAB_3ab8_6b85;
          }
          if (local_14 == 0x3600) {
            local_4e = local_4e + -10;
            goto LAB_3ab8_6b7e;
          }
        } while (local_14 != 0x3700);
        local_4e = local_4e + 10;
LAB_3ab8_747b:
        ppuVar2 = local_1c6;
        if ((int)local_100 < (int)local_4e) {
          local_4e = local_100;
        }
      } while( true );
    }
    local_6 = (undefined1 **)0x22b2;
    local_8 = (undefined1 **)0x15de;
    func_0x0002504e();
    *(undefined2 *)0xd70 = 0;
    if (1 < (int)local_8 + 1) {
      return 0;
    }
    local_6 = (undefined1 **)local_48;
    local_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 **)0x15f7;
    iVar4 = FUN_3ab8_66e2();
    if (iVar4 != 0) {
      return 0;
    }
    local_6 = (undefined1 **)local_1c0;
    local_8 = (undefined1 **)&local_10a;
    local_a = (undefined1 **)local_232;
    local_c = (undefined1 **)0x1;
    pcVar1 = (code *)swi(0x3f);
    iVar4 = (*pcVar1)();
    if (iVar4 < 1) {
      return 0;
    }
  } while( true );
}



/* 3ab8:76b2  FUN_3ab8_76b2  732 bytes, 1 callers */

int __cdecl16far FUN_3ab8_76b2(int param_1,undefined2 param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_ba;
  undefined1 local_b8 [44];
  undefined2 local_8c;
  undefined1 local_8a [80];
  int local_3a;
  undefined1 local_38 [10];
  int local_2e;
  int local_2c;
  undefined1 local_2a [18];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0x223d;
  FUN_21f2_0ebc();
  puStack_6 = (undefined1 *)param_2;
  puStack_8 = local_8a;
  puStack_a = (undefined1 *)0x22b2;
  uStack_c = 0x224b;
  FUN_21f2_3454();
  puStack_6 = local_8a;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x2257;
  local_3a = func_0x00024ce4();
  if ((0 < local_3a) && (local_8a[local_3a + -1] != '\\')) {
    puStack_6 = (undefined1 *)0x310c;
    puStack_8 = local_8a;
    puStack_a = (undefined1 *)0x22b2;
    uStack_c = 0x2276;
    FUN_21f2_2d26();
  }
  puStack_6 = local_8a;
  puStack_8 = (undefined1 *)0x310e;
  puStack_a = (undefined1 *)0xbf48;
  uStack_c = 0x22b2;
  uStack_e = 0x228a;
  FUN_21f2_3454();
  if (param_1 == 1) {
    puStack_6 = (undefined1 *)0x3117;
    puStack_8 = (undefined1 *)0xbf48;
    puStack_a = (undefined1 *)0x22b2;
    uStack_c = 0x22a0;
    FUN_21f2_2d26();
  }
  if (param_1 == 2) {
    puStack_6 = (undefined1 *)0x3119;
    puStack_8 = (undefined1 *)0xbf48;
    puStack_a = (undefined1 *)0x22b2;
    uStack_c = 0x22b5;
    FUN_21f2_2d26();
  }
  if (param_1 == 3) {
    puStack_6 = (undefined1 *)0x311b;
    puStack_8 = (undefined1 *)0xbf48;
    puStack_a = (undefined1 *)0x22b2;
    uStack_c = 0x22ca;
    FUN_21f2_2d26();
  }
  if (param_1 == 4) {
    puStack_6 = (undefined1 *)0x311d;
    puStack_8 = (undefined1 *)0xbf48;
    puStack_a = (undefined1 *)0x22b2;
    uStack_c = 0x22df;
    FUN_21f2_2d26();
  }
  puStack_6 = (undefined1 *)0xbf48;
  puStack_8 = local_8a;
  puStack_a = (undefined1 *)0x22b2;
  uStack_c = 0x22ef;
  FUN_21f2_3454();
  puStack_6 = (undefined1 *)0x0;
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x0;
  uStack_c = 7;
  uStack_e = *(undefined2 *)0xa5a;
  uStack_10 = 0x206;
  uStack_12 = *(undefined2 *)0xa5e;
  uStack_14 = 0x206;
  uStack_16 = 0x22b2;
  uStack_18 = 0x230c;
  func_0x0000f350();
  local_8c = 0;
  local_2c = 2;
  local_2a[0] = 0;
  local_3a = 0x42;
  uVar4 = 0xdef;
  for (local_2e = 0x42; local_2e < 0x50; local_2e = local_2e + 1) {
    puStack_6 = (undefined1 *)0x311f;
    puStack_8 = local_2a;
    uStack_c = 0x2336;
    puStack_a = (undefined1 *)uVar4;
    FUN_21f2_2d26();
    uVar4 = 0x22b2;
  }
  local_2e = 0;
  do {
    if (0x19 < local_2e) {
      for (local_2e = local_2c; puStack_a = (undefined1 *)uVar4, local_2e < *(int *)0x1b42;
          local_2e = local_2e + 1) {
        puStack_6 = (undefined1 *)local_2e;
        puStack_8 = (undefined1 *)local_3a;
        uStack_c = 0x24b8;
        FUN_1000_0599();
        puStack_6 = local_2a;
        puStack_8 = (undefined1 *)0xdef;
        uVar4 = 0x11f2;
        puStack_a = (undefined1 *)0x24c3;
        func_0x00012276();
      }
      puStack_6 = (undefined1 *)*(undefined2 *)0x1b42;
      puStack_8 = (undefined1 *)local_3a;
      uStack_c = 0x24dc;
      FUN_1000_0599();
      puStack_6 = (undefined1 *)local_8c;
      puStack_8 = (undefined1 *)0x312c;
      puStack_a = (undefined1 *)0xdef;
      uStack_c = 0x24eb;
      func_0x00012276();
      puStack_6 = (undefined1 *)0x0;
      puStack_8 = (undefined1 *)0x0;
      puStack_a = (undefined1 *)0x0;
      uStack_c = 7;
      uStack_e = *(undefined2 *)0xa5a;
      uStack_10 = *(undefined2 *)0x1b3e;
      uStack_12 = *(undefined2 *)0xa5a;
      uStack_14 = 0;
      uStack_16 = 0x11f2;
      uStack_18 = 0x2508;
      func_0x0000f350();
      return local_8c;
    }
    puStack_6 = local_8a;
    puStack_8 = (undefined1 *)0xbf48;
    uStack_c = 0x238a;
    puStack_a = (undefined1 *)uVar4;
    FUN_21f2_3454();
    if (0 < local_2e) {
      puStack_6 = (undefined1 *)(local_2e + 0x41);
      puStack_8 = (undefined1 *)0x3121;
      puStack_a = local_38;
      uStack_c = 0x22b2;
      uStack_e = 0x23a6;
      FUN_21f2_3454();
      puStack_6 = local_38;
      puStack_8 = (undefined1 *)0xbf48;
      puStack_a = (undefined1 *)0x22b2;
      uStack_c = 0x23b6;
      FUN_21f2_2d26();
    }
    puStack_6 = (undefined1 *)0x3124;
    puStack_8 = (undefined1 *)0xbf48;
    puStack_a = (undefined1 *)0x22b2;
    uStack_c = 0x23c5;
    FUN_21f2_2d26();
    puStack_6 = local_b8;
    puStack_8 = (undefined1 *)0x0;
    puStack_a = (undefined1 *)0xbf48;
    uStack_c = 0x22b2;
    uVar4 = 0x22b2;
    uStack_e = 0x23d8;
    iVar2 = func_0x000276d7();
    if (iVar2 == 0) {
      puStack_6 = (undefined1 *)0x254;
      puStack_8 = (undefined1 *)0xbf48;
      puStack_a = (undefined1 *)0x22b2;
      uVar4 = 0x22b2;
      uStack_c = 0x23ec;
      iVar2 = FUN_21f2_1348();
      *(int *)0xd70 = iVar2;
      if (iVar2 == 0) {
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      else {
        puStack_8 = (undefined1 *)0x50;
        puStack_a = (undefined1 *)0xbf48;
        uStack_c = 0x22b2;
        uStack_e = 0x2356;
        puStack_6 = (undefined1 *)iVar2;
        iVar2 = func_0x0002509c();
        if (iVar2 == 0) {
          puStack_6 = (undefined1 *)*(undefined2 *)0xd70;
          puStack_8 = (undefined1 *)0x22b2;
          uVar4 = 0x22b2;
          puStack_a = (undefined1 *)0x2369;
          FUN_21f2_1262();
          *(undefined2 *)0xd70 = 0;
        }
        else {
          puStack_6 = (undefined1 *)*(undefined2 *)0xd70;
          puStack_8 = (undefined1 *)0x22b2;
          uVar4 = 0x22b2;
          puStack_a = (undefined1 *)0x2409;
          FUN_21f2_1262();
          *(undefined2 *)0xd70 = 0;
          if (local_8c == 0) {
            *param_3 = local_2e;
          }
          local_8c = local_8c + 1;
          if (local_2c < *(int *)0x1b42) {
            puStack_6 = (undefined1 *)local_2c;
            puStack_8 = (undefined1 *)local_3a;
            puStack_a = (undefined1 *)0x22b2;
            uStack_c = 0x2438;
            FUN_1000_0599();
            puStack_6 = local_2a;
            puStack_8 = (undefined1 *)0xdef;
            puStack_a = (undefined1 *)0x2443;
            func_0x00012276();
            puStack_6 = (undefined1 *)local_2c;
            puStack_8 = (undefined1 *)local_3a;
            puStack_a = (undefined1 *)0x11f2;
            uVar3 = 0xdef;
            uStack_c = 0x244f;
            FUN_1000_0599();
            local_2c = local_2c + 1;
            if (*(char *)0xbf48 == '#') {
              puStack_6 = (undefined1 *)0xbf48;
              puStack_8 = (undefined1 *)0xdef;
              uVar4 = 0x22b2;
              puStack_a = (undefined1 *)0x2464;
              iVar2 = func_0x00024ce4();
              local_ba = iVar2 + -1;
              if (*(char *)(iVar2 + -0x40b9) == '\n') {
                *(undefined1 *)(iVar2 + -0x40b9) = 0;
                local_ba = iVar2 + -2;
              }
              if (local_ba < 1) goto LAB_3ab8_77f0;
              puStack_6 = (undefined1 *)0xbf49;
              puStack_8 = (undefined1 *)0x1de;
              uVar3 = uVar4;
            }
            else {
              puStack_6 = (undefined1 *)(local_2e + 0x41);
              puStack_8 = (undefined1 *)0x3129;
            }
            uVar4 = 0x11f2;
            uStack_c = 0x2496;
            puStack_a = (undefined1 *)uVar3;
            func_0x00012276();
          }
        }
      }
    }
LAB_3ab8_77f0:
    local_2e = local_2e + 1;
  } while( true );
}



/* 3ab8:7994  FUN_3ab8_7994  2283 bytes, 0 callers */

undefined2 __cdecl16far
FUN_3ab8_7994(undefined2 param_1,undefined1 *param_2,undefined2 param_3,byte *param_4,
             undefined2 param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int local_29a;
  undefined1 local_298 [14];
  undefined1 local_28a [86];
  undefined2 local_234;
  int local_232;
  undefined2 local_230;
  int local_22e;
  undefined1 local_22a [102];
  int local_1c4;
  undefined1 local_1c2 [182];
  byte local_10c;
  char local_10b;
  char local_10a;
  undefined1 local_109;
  int local_104;
  int local_102;
  int local_fe;
  int local_fc;
  int local_fa [11];
  int local_e4;
  int local_e2;
  undefined2 local_e0;
  byte local_de [40];
  undefined1 local_b6 [100];
  uint local_52;
  undefined1 local_50 [2];
  int local_4e;
  int local_4c;
  int local_4a;
  undefined2 local_48;
  int local_46;
  undefined2 local_44;
  uint local_42;
  undefined1 local_40 [38];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int local_14;
  undefined1 *local_12;
  int local_10;
  undefined1 *puStack_e;
  undefined1 **ppuStack_c;
  byte *local_a;
  uint *local_8;
  uint *puStack_6;
  
  puStack_6 = (uint *)0x251f;
  FUN_21f2_0ebc();
  local_4c = 0;
  local_52 = 0;
  local_e2 = 0;
  local_48 = 0;
  local_46 = 0;
  local_28a[0] = 0;
  local_104 = 0x16;
  do {
    puStack_6 = (uint *)0x3136;
    local_8 = (uint *)local_28a;
    local_a = (byte *)0x22b2;
    uVar5 = 0x22b2;
    ppuStack_c = (undefined1 **)0x254b;
    FUN_21f2_2d26();
    local_104 = local_104 + 1;
  } while (local_104 < 0x40);
LAB_3ab8_79d8:
  uVar6 = 0x885;
  local_8 = (uint *)0x255d;
  puStack_6 = (uint *)uVar5;
  func_0x0000c3ca();
  local_4e = 1;
  local_230 = 0;
  if ((*param_4 == 0) || (param_4[1] != 0x3a)) {
    puStack_6 = (uint *)param_5;
    local_8 = (uint *)param_4;
    local_a = (byte *)0x885;
    uVar6 = 0x22b2;
    ppuStack_c = (undefined1 **)0x257f;
    FUN_21f2_3454();
  }
  local_10b = ':';
  local_10a = '\\';
  local_109 = 0;
  local_10c = *param_4;
  if ((0x60 < local_10c) && (local_10c < 0x7b)) {
    local_10c = local_10c - 0x20;
  }
  puStack_6 = (uint *)0x3138;
  local_8 = (uint *)local_298;
  ppuStack_c = (undefined1 **)0x25b5;
  local_a = (byte *)uVar6;
  FUN_21f2_3454();
  puStack_6 = (uint *)&local_10c;
  local_8 = (uint *)local_de;
  local_a = (byte *)0x22b2;
  ppuStack_c = (undefined1 **)0x25c6;
  FUN_21f2_3454();
  puStack_6 = (uint *)local_298;
  local_8 = (uint *)local_de;
  local_a = (byte *)0x22b2;
  ppuStack_c = (undefined1 **)0x25d7;
  FUN_21f2_2d26();
  if (*(char *)0x133 != '\0') {
    puStack_6 = (uint *)local_298;
    local_8 = (uint *)local_de;
    local_a = (byte *)0x22b2;
    ppuStack_c = (undefined1 **)0x25ef;
    FUN_21f2_3454();
    local_de[0] = local_10c;
    local_de[1] = 0x5f;
  }
  puStack_6 = (uint *)local_40;
  local_8 = (uint *)0x0;
  local_a = local_de;
  ppuStack_c = (undefined1 **)0x22b2;
  puStack_e = (undefined1 *)0x260f;
  iVar2 = func_0x000276d7();
  if (iVar2 == 0) {
    puStack_6 = (uint *)0x22b2;
    local_8 = (uint *)0x2688;
    func_0x0000c3ca();
    local_102 = 0;
    puStack_6 = (uint *)0x254;
    local_8 = (uint *)local_de;
    local_a = (byte *)0x885;
    ppuStack_c = (undefined1 **)0x269f;
    puStack_6 = (uint *)FUN_21f2_1348();
    *(int *)0xd70 = (int)puStack_6;
    if (puStack_6 != (uint *)0x0) {
      local_8 = (uint *)0x50;
      local_a = (byte *)0xbf48;
      ppuStack_c = (undefined1 **)0x22b2;
      puStack_e = (undefined1 *)0x26c3;
      func_0x0002509c();
      puStack_6 = (uint *)*(undefined2 *)0xd70;
      local_8 = (uint *)0x50;
      local_a = (byte *)0xbf48;
      ppuStack_c = (undefined1 **)0x22b2;
      puStack_e = (undefined1 *)0x26e0;
      iVar2 = func_0x0002509c();
      if (iVar2 == 0) {
        local_a = (byte *)0x1;
      }
      if ((local_10b != *(char *)0xbf49) || (local_10a != *(char *)0xbf4a)) {
        local_a = (byte *)0x1;
      }
      if (local_a == (byte *)0x0) {
        puStack_6 = (uint *)0x22b2;
        local_8 = (uint *)0x270d;
        FUN_4375_a3e5();
        local_e0 = 0;
        local_fa[0] = 0;
        local_234 = 0;
        local_29a = 0;
        local_22e = 0;
        local_102 = 1;
        local_22a[0] = 0;
        puStack_6 = (uint *)param_4;
        local_8 = (uint *)0x22b2;
        local_a = (byte *)0x2736;
        uVar3 = func_0x00024ce4();
        if (uVar3 < 4) {
          local_22e = 1;
        }
        while( true ) {
          if (local_22e == 0) {
            puStack_6 = (uint *)local_1c2;
            local_8 = (uint *)&local_10c;
            local_a = (byte *)&local_e0;
            ppuStack_c = (undefined1 **)local_fa;
            puStack_e = (undefined1 *)local_234;
            local_10 = local_29a;
            local_12 = local_22a;
            local_14 = -0x40b8;
            uStack_16 = 1;
            uStack_18 = 0x22b2;
            uStack_1a = 0x2776;
            FUN_3ab8_5afd();
            local_29a = local_fa[0];
            local_234 = local_e0;
            puStack_6 = (uint *)param_4;
            local_8 = (uint *)local_22a;
            local_a = (byte *)0x22b2;
            ppuStack_c = (undefined1 **)0x2796;
            iVar2 = func_0x00024cb8();
            if (iVar2 == 0) {
              local_22e = local_102;
            }
          }
          puStack_6 = (uint *)*(undefined2 *)0xd70;
          local_8 = (uint *)0x50;
          local_a = (byte *)0xbf48;
          ppuStack_c = (undefined1 **)0x22b2;
          puStack_e = (undefined1 *)0x27b5;
          iVar2 = func_0x0002509c();
          if ((iVar2 == 0) ||
             ((((*(char *)0xbf48 != '|' && (*(char *)0xbf48 != ' ')) && (*(char *)0xbf48 != -0x5b))
              || ((*(char *)0xbf49 != ' ' && (*(char *)0xbf49 != '-')))))) break;
          local_102 = local_102 + 1;
        }
        puStack_6 = (uint *)0x22b2;
        local_8 = (uint *)0x27c1;
        func_0x0002504e();
        *(undefined2 *)0xd70 = 0;
        if (local_22e < 1) {
          local_22e = 1;
        }
        local_4e = (2 - *(int *)0x1b42) / 2 + local_22e;
LAB_3ab8_7c64:
        uVar5 = 0x22b2;
LAB_3ab8_7c6a:
        if (local_4e < 1) {
          local_4e = 1;
        }
LAB_3ab8_7c71:
        do {
          local_8 = (uint *)0x27f6;
          puStack_6 = (uint *)uVar5;
          func_0x0000c3ca();
          puStack_6 = (uint *)0x885;
          local_8 = (uint *)0x27fb;
          func_0x0000c354();
          puStack_6 = (uint *)*(undefined2 *)0x1b40;
          local_8 = (uint *)*(undefined2 *)0x1b3e;
          local_a = (byte *)(*(int *)0xa5a + 1);
          ppuStack_c = (undefined1 **)0x0;
          puStack_e = (undefined1 *)0x885;
          local_10 = 0x2810;
          func_0x0000a76b();
          puStack_6 = (uint *)0x254;
          local_8 = (uint *)local_de;
          local_a = (byte *)0x885;
          ppuStack_c = (undefined1 **)0x2821;
          iVar2 = FUN_21f2_1348();
          *(int *)0xd70 = iVar2;
          if (iVar2 == 0) break;
          puStack_6 = (uint *)local_22e;
          local_8 = (uint *)local_4e;
          local_a = (byte *)local_102;
          ppuStack_c = (undefined1 **)0x12;
          puStack_e = (undefined1 *)0x22b2;
          local_10 = 0x2870;
          FUN_3ab8_5dc0();
          local_e0 = 0;
          local_fa[0] = 0;
          local_234 = 0;
          local_29a = 0;
          local_232 = 1;
          puStack_6 = (uint *)*(undefined2 *)0xd70;
          local_8 = (uint *)0x50;
          local_a = (byte *)0xbf48;
          ppuStack_c = (undefined1 **)0x22b2;
          uVar5 = 0x22b2;
          puStack_e = (undefined1 *)0x289c;
          iVar2 = func_0x0002509c();
          if (iVar2 == 0) break;
          while( true ) {
            puStack_6 = &local_42;
            local_8 = (uint *)&local_10;
            local_a = (byte *)&local_fc;
            ppuStack_c = &local_12;
            local_10 = 0x28bc;
            puStack_e = (undefined1 *)uVar5;
            func_0x0000dcbd();
            puStack_6 = (uint *)*(undefined2 *)0xd70;
            local_8 = (uint *)0x50;
            local_a = (byte *)0xbf48;
            ppuStack_c = (undefined1 **)0x885;
            uVar5 = 0x22b2;
            puStack_e = (undefined1 *)0x28d0;
            iVar2 = func_0x0002509c();
            if (((iVar2 == 0) ||
                (((1 < local_232 && (*(char *)0xbf48 != '|')) &&
                 ((*(char *)0xbf48 != ' ' && (*(char *)0xbf48 != -0x5b)))))) ||
               (((1 < local_232 && (*(char *)0xbf49 != ' ')) && (*(char *)0xbf49 != '-')))) break;
            puStack_6 = (uint *)0xa;
            local_8 = (uint *)0xbf48;
            local_a = (byte *)0x22b2;
            uVar5 = 0x22b2;
            ppuStack_c = (undefined1 **)0x2937;
            puVar4 = (undefined1 *)func_0x00025b06();
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
            }
            puStack_6 = (uint *)local_1c2;
            local_8 = (uint *)&local_10c;
            local_a = (byte *)&local_e0;
            ppuStack_c = (undefined1 **)local_fa;
            puStack_e = (undefined1 *)local_234;
            local_10 = local_29a;
            local_12 = local_b6;
            local_14 = -0x40b8;
            uStack_16 = 1;
            uStack_18 = 0x22b2;
            uStack_1a = 0x2972;
            FUN_3ab8_5afd();
            local_29a = local_fa[0];
            local_234 = local_e0;
            local_44 = 0x16;
            local_4a = (local_232 - local_4e) + 2;
            if (local_4e <= local_232) {
              puStack_6 = (uint *)0x1;
              local_8 = (uint *)0x1;
              local_a = (byte *)0x22b2;
              uVar5 = 0xdef;
              ppuStack_c = (undefined1 **)0x29a6;
              FUN_1000_0599();
              if (local_232 == 1) {
                *(byte *)0xbf48 = local_10c;
              }
              puStack_6 = (uint *)local_28a;
              if (local_232 == local_22e) {
                local_8 = (uint *)0xfff9;
              }
              else {
                local_8 = (uint *)0x7;
              }
              local_a = (byte *)local_4a;
              ppuStack_c = (undefined1 **)local_44;
              puStack_e = (undefined1 *)0xbf48;
              local_10 = 0xdef;
              local_12 = (undefined1 *)0x29db;
              FUN_3ab8_59d7();
              if (local_232 == local_22e) {
                puStack_6 = (uint *)local_b6;
                local_8 = (uint *)local_22a;
                local_a = (byte *)0xdef;
                uVar5 = 0x22b2;
                ppuStack_c = (undefined1 **)0x29f7;
                FUN_21f2_3454();
              }
            }
            if (*(int *)0x1b42 + -1 <= local_4a) break;
            local_e4 = local_232;
            local_232 = local_232 + 1;
          }
          puStack_6 = (uint *)0x1;
          local_8 = (uint *)0x1;
          ppuStack_c = (undefined1 **)0x28e1;
          local_a = (byte *)uVar5;
          FUN_1000_0599();
          puStack_6 = (uint *)0xdef;
          local_8 = (uint *)0x28e8;
          func_0x0002504e();
          *(undefined2 *)0xd70 = 0;
          puStack_e = (undefined1 *)0x22b2;
          local_104 = local_4a;
          while (local_104 = local_104 + 1, local_104 <= *(int *)0x1b42 + -1) {
            puStack_6 = (uint *)0x0;
            local_8 = (uint *)0x7;
            local_a = (byte *)local_104;
            ppuStack_c = (undefined1 **)0x16;
            local_12 = (undefined1 *)0x2a3b;
            local_10 = (int)puStack_e;
            puStack_e = local_28a;
            FUN_1000_02b5();
            puStack_e = (undefined1 *)0xdef;
          }
          puStack_6 = (uint *)0x0;
          local_8 = (uint *)0x0;
          local_a = (byte *)0x0;
          ppuStack_c = (undefined1 **)0x0;
          local_10 = 0x2a4b;
          func_0x0000a76b();
          puStack_6 = (uint *)0x0;
          local_8 = (uint *)0x0;
          local_a = (byte *)0x1;
          ppuStack_c = (undefined1 **)0x7;
          puStack_e = (undefined1 *)*(undefined2 *)0xa5a;
          local_10 = *(int *)0x1b3e;
          local_12 = (undefined1 *)*(int *)0xa5e;
          local_14 = *(int *)0xa58;
          uStack_16 = 0x885;
          uStack_18 = 0x2a6f;
          func_0x0000f350();
          puStack_6 = (uint *)0xdef;
          local_8 = (uint *)0x2a77;
          func_0x0000a799();
          puStack_6 = (uint *)0x885;
          local_8 = (uint *)0x2a7c;
          func_0x0000c354();
          puStack_6 = (uint *)*(undefined2 *)0x1b40;
          local_8 = (uint *)*(undefined2 *)0x1b3e;
          local_a = (byte *)(*(int *)0xa5a + 1);
          local_46 = 0;
          ppuStack_c = (undefined1 **)0x0;
          puStack_e = (undefined1 *)0x885;
          local_10 = 0x2a94;
          func_0x0000a76b();
          uVar5 = 0x885;
LAB_3ab8_7f17:
          do {
            puStack_6 = &local_42;
            local_8 = (uint *)&local_10;
            local_a = (byte *)&local_fc;
            ppuStack_c = &local_12;
            local_10 = 0x2aad;
            puStack_e = (undefined1 *)uVar5;
            func_0x0000dcbd();
            puStack_6 = (uint *)0x885;
            do {
              uVar6 = 0xdef;
              local_8 = (uint *)0x2ab5;
              iVar2 = FUN_1000_0632();
              puStack_6 = (uint *)uVar6;
            } while (iVar2 != 0);
            if (local_12 + local_fc == (undefined1 *)0x0) {
              if (local_46 == 0) {
                local_46 = 1;
                puStack_6 = (uint *)local_50;
                local_8 = (uint *)local_22a;
                local_a = (byte *)param_3;
                ppuStack_c = (undefined1 **)0xdef;
                puStack_e = (undefined1 *)0x2b50;
                local_1c4 = FUN_3ab8_76b2();
              }
              puStack_6 = (uint *)&local_10c;
              local_8 = (uint *)local_b6;
              local_a = (byte *)0xdef;
              ppuStack_c = (undefined1 **)0x2b65;
              FUN_3ab8_6722();
              puStack_6 = (uint *)0x314c;
              local_8 = (uint *)local_b6;
              local_a = (byte *)0xdef;
              ppuStack_c = (undefined1 **)0x2b75;
              FUN_21f2_2d26();
              puStack_6 = (uint *)local_22a;
              local_8 = (uint *)local_b6;
              local_a = (byte *)0x22b2;
              ppuStack_c = (undefined1 **)0x2b86;
              FUN_21f2_2d26();
              puStack_6 = (uint *)0x22b2;
              local_8 = (uint *)0x2b8d;
              func_0x0001bb4e();
              puStack_6 = (uint *)local_b6;
              local_8 = (uint *)0x1bb4;
              local_a = (byte *)0x2b97;
              func_0x00012276();
              puStack_6 = (uint *)&local_fe;
              local_8 = &local_52;
              local_a = (byte *)&local_4c;
              ppuStack_c = (undefined1 **)0x0;
              puStack_e = (undefined1 *)0x2710;
              local_10 = 0x11f2;
              local_12 = (undefined1 *)0x2bb0;
              local_14 = FUN_4375_883e();
              puStack_6 = (uint *)0x11f2;
              uVar6 = 0x885;
              local_8 = (uint *)0x2bbb;
              func_0x0000c3ca();
              if ((*(int *)0x158 != 0) || (local_14 == -1)) {
                return 0xfff5;
              }
              if (((local_fe != 0) && (0xa0 < local_4c)) &&
                 ((local_4c < 0x110 && ((int)local_52 < 0x10)))) {
                local_14 = 0x31;
              }
            }
            else {
              uVar5 = uVar6;
              if (((local_4c < 0x87) || (0x9a < local_4c)) ||
                 (((local_10 < 100 || ((200 < local_10 && (local_10 < 400)))) || (600 < local_10))))
              goto LAB_3ab8_7f17;
              uVar3 = (int)local_42 >> 0xf;
              local_e2 = (((int)((local_42 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3) + 1;
              if (((local_52 == local_42) && (local_e2 != 2)) && (local_e2 - *(int *)0x1b42 != -1))
              goto LAB_3ab8_7f17;
              local_52 = local_42;
              local_fe = 1;
              if (*(int *)0x1b42 <= local_e2) goto LAB_3ab8_7f17;
            }
            uVar5 = 0x885;
            local_8 = (uint *)0x2bf3;
            puStack_6 = (uint *)uVar6;
            func_0x0000c3ca();
            if (local_14 == 0x31) {
              local_4e = 1;
              puStack_6 = (uint *)param_5;
              local_8 = (uint *)param_4;
              pcVar1 = (code *)swi(0x3f);
              (*pcVar1)();
              goto LAB_3ab8_79d8;
            }
            if (local_fe != 0) {
              local_14 = 0;
              uVar3 = (int)local_52 >> 0xf;
              local_e2 = (((int)((local_52 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3) + 1;
              if ((local_e2 < 2) || (*(int *)0x1b42 + -1 < local_e2)) {
                if (*(int *)0x1b42 <= local_e2) {
                  local_14 = 0x6200;
                  goto LAB_3ab8_7f17;
                }
              }
              else {
                if ((0x9a < local_4c) && (local_4c < 0x1fe)) {
                  local_e2 = local_e2 + local_4e + -2;
                  if (local_102 < local_e2) {
                    local_e2 = local_102;
                  }
                  if (local_e2 != local_22e) {
                    local_22e = local_e2;
                    goto LAB_3ab8_7c71;
                  }
                  local_14 = 0xd;
                }
                if ((0x86 < local_4c) && (local_4c < 0x9b)) {
                  if (local_e2 == 2) {
                    local_4e = local_4e - local_fe;
                    goto LAB_3ab8_7c6a;
                  }
                  if (*(int *)0x1b42 - local_e2 == 1) {
                    local_4e = local_4e + local_fe;
                    goto LAB_3ab8_8144;
                  }
                  if ((2 < local_e2) && (local_e2 <= *(int *)0x1b42 + -2)) {
                    puStack_6 = (uint *)0x885;
                    local_8 = (uint *)0x2cf9;
                    FUN_28b3_0d8b();
                    puStack_6 = (uint *)0x22b2;
                    local_8 = (uint *)0x2d0c;
                    FUN_28b3_0d8b();
                    puStack_6 = (uint *)0x22b2;
                    local_8 = (uint *)0x2d11;
                    FUN_28b3_1172();
                    puStack_6 = (uint *)0x22b2;
                    local_8 = (uint *)0x2d1a;
                    func_0x0002996b();
                    puStack_6 = (uint *)0x22b2;
                    local_8 = (uint *)0x2d23;
                    FUN_28b3_0d8b();
                    puStack_6 = (uint *)0x22b2;
                    local_8 = (uint *)0x2d28;
                    func_0x00029c9d();
                    puStack_6 = (uint *)0x22b2;
                    local_8 = (uint *)0x2d3c;
                    FUN_28b3_0d8b();
                    puStack_6 = (uint *)0x22b2;
                    local_8 = (uint *)0x2d41;
                    FUN_28b3_1163();
                    puStack_6 = (uint *)0x22b2;
                    local_8 = (uint *)0x2d46;
                    func_0x00029d78();
                    puStack_6 = (uint *)0x22b2;
                    local_8 = (uint *)0x2d4b;
                    local_4e = FUN_28b3_0f51();
                    goto LAB_3ab8_7c64;
                  }
                }
              }
            }
            if (local_14 == 0xd) {
              if (local_1c4 != 0) {
                *param_2 = local_50[0];
                puStack_6 = (uint *)local_22a;
                local_8 = (uint *)param_4;
                local_a = (byte *)0x885;
                ppuStack_c = (undefined1 **)0x2d73;
                FUN_21f2_3454();
                return 1;
              }
              goto LAB_3ab8_7f17;
            }
            if (local_14 == 0x3a00) {
              local_22e = local_22e + -1;
              if (local_22e < 1) {
                local_22e = 1;
              }
              if (local_22e < local_4e) {
                local_4e = local_4e + -1;
              }
              goto LAB_3ab8_7c71;
            }
            if (local_14 == 0x3d00) {
              local_22e = local_22e + 1;
              if (local_102 < local_22e) {
                local_22e = local_102;
              }
              if (local_e4 < local_22e) {
                local_4e = local_4e + 1;
              }
              goto LAB_3ab8_7c71;
            }
            if (local_14 == 0x3600) {
              local_4e = local_4e + -0x14;
              goto LAB_3ab8_7c6a;
            }
          } while (local_14 != 0x3700);
          local_4e = local_4e + 0x14;
LAB_3ab8_8144:
          if (local_102 < local_4e) {
            local_4e = local_102;
          }
        } while( true );
      }
    }
    puStack_6 = (uint *)0x22b2;
    local_8 = (uint *)0x26ad;
    func_0x0002504e();
    *(undefined2 *)0xd70 = 0;
  }
  else {
    puStack_6 = (uint *)0x1;
    local_8 = (uint *)0x1;
    local_a = (byte *)0x22b2;
    ppuStack_c = (undefined1 **)0x2620;
    FUN_1000_0599();
    puStack_6 = (uint *)0xdef;
    local_8 = (uint *)0x2627;
    func_0x00010526();
    puStack_6 = (uint *)0x1;
    local_8 = (uint *)0x14;
    local_a = (byte *)0xdef;
    ppuStack_c = (undefined1 **)0x2634;
    FUN_1000_0599();
    puStack_6 = (uint *)0x3145;
    local_8 = (uint *)0xdef;
    local_a = (byte *)0x263f;
    func_0x00012276();
    puStack_6 = (uint *)0x860;
    local_8 = (uint *)0x11f2;
    local_a = (byte *)0x2649;
    func_0x00012276();
    puStack_6 = (uint *)0x3149;
    local_8 = (uint *)0x11f2;
    local_a = (byte *)0x2653;
    func_0x00012276();
    puStack_6 = (uint *)0x4a4;
    local_8 = (uint *)param_6;
    local_a = (byte *)0x11f2;
    ppuStack_c = (undefined1 **)0x2660;
    FUN_21f2_3454();
    puStack_6 = (uint *)(param_6 + 0xe);
    local_8 = (uint *)0x22b2;
    local_a = (byte *)0x266e;
    func_0x00012276();
    puStack_6 = (uint *)0x1;
    local_8 = (uint *)0x11f2;
    local_a = (byte *)0x2678;
    func_0x000121f9();
  }
  return 0;
}


