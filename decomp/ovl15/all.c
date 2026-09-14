/* Ghidra decompilation of jw15.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  225 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0000(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  FUN_21f2_0ebc();
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)in_ZF) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)in_ZF) {
      func_0x000297e6(0x22b2);
      func_0x00029b6d(0x22b2);
      func_0x00029af6(0x22b2);
      func_0x00029983(0x22b2);
    }
  }
  uVar1 = *(undefined2 *)0x3f88;
  *(undefined2 *)0x15e = *(undefined2 *)0x3f86;
  *(undefined2 *)0x160 = uVar1;
  uVar1 = *(undefined2 *)0x3f8c;
  *(undefined2 *)0x162 = *(undefined2 *)0x3f8a;
  *(undefined2 *)0x164 = uVar1;
  uVar2 = func_0x00015409();
  uVar1 = *(undefined2 *)0x160;
  *(undefined2 *)0x3f86 = *(undefined2 *)0x15e;
  *(undefined2 *)0x3f88 = uVar1;
  uVar1 = *(undefined2 *)0x164;
  *(undefined2 *)0x3f8a = *(undefined2 *)0x162;
  *(undefined2 *)0x3f8c = uVar1;
  *(undefined2 *)0x15e = param_2;
  *(undefined2 *)0x160 = param_3;
  *(undefined2 *)0x162 = 0x22b2;
  *(undefined2 *)0x164 = param_1;
  return uVar2;
}



/* 3ab8:00e1  FUN_3ab8_00e1  2002 bytes, 1 callers */

void __cdecl16far FUN_3ab8_00e1(int param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 local_56 [4];
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_42;
  undefined2 uStack_40;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  int local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 local_14 [2];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  int local_a;
  uint uStack_8;
  int *local_6;
  
  local_6 = (int *)0xac6c;
  FUN_21f2_0ebc();
  local_6 = (int *)(uint)*(byte *)0xc3b4;
  uStack_8 = (*(byte *)0xc3b6 & 0x20) >> 5;
  local_a = param_1;
  local_c = 0x22b2;
  uStack_e = 0xac86;
  puVar1 = (undefined2 *)func_0x00018eff();
  local_18 = *puVar1;
  local_16 = puVar1[1];
  local_6 = (int *)0x18b3;
  uStack_8 = 0xac9f;
  FUN_28b3_0d8b();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xaca4;
  func_0x00029d78();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacad;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacb2;
  func_0x00029d78();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacb7;
  FUN_28b3_1172();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacc0;
  func_0x00029c2c();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacc8;
  func_0x0002996b();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacd0;
  FUN_28b3_0ee9();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacd8;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xace1;
  func_0x00029b6d();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xace6;
  func_0x00029af6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacee;
  func_0x00029983();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacf6;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xacff;
  func_0x00029b6d();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xad07;
  func_0x00029983();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xad18;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xad21;
  func_0x00029b85();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xad29;
  func_0x0002996b();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xad31;
  FUN_28b3_0ee9();
  if (*(int *)0x1096 == 1) {
    local_6 = (int *)0x22b2;
    uStack_8 = 0xad40;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xad45;
    func_0x00029d78();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xad4e;
    func_0x00029c2c();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xad56;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xad5b;
    func_0x00029d78();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xad60;
    FUN_28b3_117c();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xad68;
    func_0x00029983();
  }
  if (*(int *)0x1096 == 2) {
    local_6 = (int *)0x22b2;
    uStack_8 = 0xad77;
    func_0x000297e6();
    local_6 = &local_a;
    uStack_8 = 0x22b2;
    local_a = -0x5280;
    func_0x00029b55();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xad86;
    func_0x00029983();
  }
  local_6 = (int *)0x22b2;
  uStack_8 = 0xad97;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xada0;
  func_0x00029b85();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xada8;
  func_0x0002996b();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xadb0;
  FUN_28b3_0ee9();
  if (*(int *)0x1098 == 1) {
    local_6 = (int *)0x22b2;
    uStack_8 = 0xadbf;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xadc4;
    func_0x00029d78();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xadcd;
    func_0x00029c2c();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xadd5;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xadda;
    func_0x00029d78();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xaddf;
    FUN_28b3_117c();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xade7;
    func_0x00029983();
  }
  if (*(int *)0x1098 == 2) {
    local_6 = (int *)0x22b2;
    uStack_8 = 0xadf6;
    func_0x000297e6();
    local_6 = &local_10;
    uStack_8 = 0x22b2;
    local_a = -0x5201;
    func_0x00029b55();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xae05;
    func_0x00029983();
  }
  local_6 = (int *)0x22b2;
  uStack_8 = 0xae0d;
  func_0x000297e6();
  uStack_e = 0x22b2;
  local_10 = 0xae17;
  func_0x000299d1();
  uStack_e = 0x22b2;
  local_10 = 0xae1f;
  func_0x000297e6();
  local_16 = 0x22b2;
  local_18 = 0xae29;
  func_0x000299d1();
  local_16 = 0;
  local_18 = 0x22b2;
  local_1a = 0xae31;
  puVar1 = (undefined2 *)FUN_1def_05d1();
  local_2a = *puVar1;
  local_28 = puVar1[1];
  local_6 = (int *)0x1bb4;
  uStack_8 = 0xae49;
  func_0x000297e6();
  uStack_e = 0x22b2;
  local_10 = 0xae53;
  func_0x000299d1();
  uStack_e = 0x22b2;
  local_10 = 0xae5b;
  func_0x000297e6();
  local_16 = 0x22b2;
  local_18 = 0xae65;
  func_0x000299d1();
  local_16 = 0;
  local_18 = 0x22b2;
  local_1a = 0xae6d;
  puVar1 = (undefined2 *)func_0x0001e558();
  local_3a = *puVar1;
  local_38 = puVar1[1];
  local_6 = (int *)0x1bb4;
  uStack_8 = 0xae85;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xae8e;
  func_0x00029b6d();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xae96;
  func_0x00029bb5();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xae9e;
  func_0x00029983();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xaea6;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xaeaf;
  func_0x00029b6d();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xaeb7;
  func_0x00029bb5();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xaebf;
  func_0x00029983();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xaec4;
  FUN_1885_2ec3();
  local_6 = (int *)0x0;
  uStack_8 = 0x1b6e;
  local_a = -0x5131;
  func_0x000297e6();
  uStack_8 = 0x22b2;
  local_a = -0x5129;
  func_0x00029bb5();
  uStack_8 = 0x22b2;
  local_a = -0x5124;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xaee6;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xaeee;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xaef6;
  func_0x00029bb5();
  local_10 = 0x22b2;
  uStack_12 = 0xaefb;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xaf05;
  func_0x000299d1();
  local_18 = 0x22b2;
  local_1a = 0xaf0d;
  func_0x000297e6();
  local_18 = 0x22b2;
  local_1a = 0xaf15;
  func_0x00029bb5();
  local_18 = 0x22b2;
  local_1a = 0xaf1a;
  func_0x00029d78();
  local_20 = 0x22b2;
  local_22 = 0xaf24;
  func_0x000299d1();
  local_20 = 0x22b2;
  local_22 = 0xaf2c;
  func_0x000297e6();
  local_20 = 0x22b2;
  local_22 = 0xaf34;
  func_0x00029bb5();
  local_20 = 0x22b2;
  local_22 = 0xaf39;
  func_0x00029d78();
  local_28 = 0x22b2;
  local_2a = 0xaf43;
  func_0x000299d1();
  local_28 = 0x22b2;
  local_2a = 0xaf4b;
  func_0x000297e6();
  local_28 = 0x22b2;
  local_2a = 0xaf50;
  func_0x00029d78();
  uStack_30 = 0x22b2;
  local_32 = 0xaf5a;
  func_0x000299d1();
  uStack_30 = 0x22b2;
  local_32 = 0xaf62;
  func_0x000297e6();
  uStack_30 = 0x22b2;
  local_32 = 0xaf67;
  func_0x00029d78();
  local_38 = 0x22b2;
  local_3a = 0xaf71;
  func_0x000299d1();
  local_38 = 0x22b2;
  local_3a = 0xaf79;
  func_0x000297e6();
  local_38 = 0x22b2;
  local_3a = 0xaf7e;
  func_0x00029d78();
  uStack_40 = 0x22b2;
  local_42 = 0xaf88;
  func_0x000299d1();
  uStack_40 = 0x22b2;
  local_42 = 0xaf90;
  func_0x000297e6();
  uStack_40 = 0x22b2;
  local_42 = 0xaf95;
  func_0x00029d78();
  local_48 = 0x22b2;
  local_4a = 0xaf9f;
  func_0x000299d1();
  local_48 = 0x22b2;
  local_4a = 0xafa4;
  FUN_1885_5194();
  local_6 = (int *)0x1bb4;
  uStack_8 = 0xafb0;
  func_0x00029834();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xafb9;
  func_0x00029b85();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xafc1;
  func_0x00029983();
  local_6 = (int *)param_1;
  uStack_8 = 0x22b2;
  uVar4 = 0x18b3;
  local_a = -0x5037;
  iVar2 = func_0x00018e7b();
  if (iVar2 != 0) {
    local_6 = (int *)-(uint)*(byte *)0xc3b4;
    uStack_8 = (*(byte *)0xc3b6 & 0x20) >> 5;
    local_a = param_1;
    local_c = 0x18b3;
    uStack_e = 0xafe9;
    func_0x00018eff();
    local_6 = (int *)0x18b3;
    uStack_8 = 0xaff3;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xaffb;
    func_0x00029b9d();
    local_6 = (int *)local_56;
    uStack_8 = 0x22b2;
    local_a = -0x4ffc;
    func_0x00029b6d();
    local_6 = (int *)0x22b2;
    uVar4 = 0x22b2;
    uStack_8 = 0xb00a;
    func_0x00029983();
  }
  uStack_8 = 0xb013;
  local_6 = (int *)uVar4;
  FUN_28b3_0d8b();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb01b;
  func_0x00029b6d();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb023;
  func_0x0002996b();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb02b;
  func_0x00029983();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb034;
  FUN_28b3_0d8b();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb03c;
  func_0x00029b6d();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb044;
  func_0x00029983();
  local_6 = (int *)param_1;
  uStack_8 = 0x22b2;
  iVar2 = 0x22b2;
  local_a = -0x4fb4;
  local_26 = func_0x00024ce4();
  if ((param_2 <= local_26) && (0 < local_26)) {
    local_6 = (int *)0x0;
    uStack_8 = (uint)*(byte *)(param_2 + param_1);
    local_a = 0x22b2;
    iVar2 = 0x2a75;
    local_c = 0xb06a;
    iVar3 = func_0x0002a752();
    if (iVar3 == 1) {
      local_6 = (int *)0x2a75;
      uStack_8 = 0xb078;
      func_0x000297e6();
      local_6 = (int *)local_14;
      uStack_8 = 0x22b2;
      local_a = -0x4f7f;
      func_0x00029b6d();
      local_6 = (int *)0x22b2;
      iVar2 = 0x22b2;
      uStack_8 = 0xb087;
      func_0x00029983();
    }
  }
  local_6 = (int *)param_2;
  uStack_8 = param_1;
  local_c = 0xb092;
  local_a = iVar2;
  local_c = func_0x00018df4();
  local_6 = (int *)0x18b3;
  uStack_8 = 0xb09f;
  FUN_28b3_0d8b();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0a7;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0af;
  func_0x00029bb5();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0b4;
  func_0x00029c9d();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0bc;
  func_0x0002996b();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0c4;
  func_0x00029983();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0cc;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0d5;
  func_0x00029b6d();
  local_6 = &local_2a;
  uStack_8 = 0x22b2;
  local_a = -0x4f22;
  func_0x00029bb5();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0e4;
  func_0x00029983();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0ec;
  func_0x000297e6();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb0f5;
  func_0x00029b6d();
  local_6 = &local_3a;
  uStack_8 = 0x22b2;
  local_a = -0x4f02;
  func_0x00029bb5();
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb104;
  func_0x00029983();
  if (local_26 == 0) {
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb115;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb11d;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb125;
    func_0x00029983();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb12d;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb135;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb13d;
    func_0x00029983();
    local_1c = *(undefined2 *)0x9b40;
    local_1a = *(undefined2 *)0x9b42;
    if (*(int *)0x1096 == 1) {
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb15a;
      func_0x000297e6();
      local_6 = (int *)local_14;
      uStack_8 = 0x22b2;
      local_a = -0x4e9d;
      func_0x00029b6d();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb169;
      func_0x0002996b();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb16e;
      func_0x00029af6();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb176;
      func_0x00029983();
    }
    if (*(int *)0x1096 == 2) {
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb185;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb18a;
      func_0x00029af6();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb192;
      func_0x00029983();
    }
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb19a;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb1a2;
    func_0x0002996b();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb1aa;
    FUN_28b3_0ee9();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb1b2;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb1ba;
    func_0x0002996b();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb1c2;
    FUN_28b3_0ee9();
    if (*(int *)0x1098 == 1) {
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb1d1;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb1d9;
      FUN_28b3_100d();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb1e2;
      func_0x00029b6d();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb1ea;
      func_0x00029bb5();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb1f2;
      func_0x00029983();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb1fa;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb202;
      FUN_28b3_100d();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb20b;
      func_0x00029b6d();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb213;
      func_0x00029bb5();
      local_6 = (int *)0x22b2;
      uStack_8 = 0xb21b;
      func_0x00029983();
    }
    if (*(int *)0x1098 == 2) {
      local_24 = local_4a;
      local_22 = local_48;
      local_2e = local_52;
      local_2c = local_50;
    }
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb243;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb24b;
    func_0x00029b6d();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb253;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb25b;
    func_0x00029983();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb264;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb26c;
    func_0x00029b6d();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb274;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb27c;
    func_0x00029983();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb285;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb28d;
    func_0x00029b6d();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb295;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb29d;
    func_0x00029983();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2a6;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2ae;
    func_0x00029b6d();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2b6;
    func_0x00029bb5();
  }
  else {
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2c5;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2cd;
    func_0x00029b6d();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2d5;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2dd;
    func_0x0002996b();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2e5;
    func_0x00029983();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2ed;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2f5;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb2fd;
    func_0x00029983();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb305;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb30d;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb315;
    func_0x00029983();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb31e;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb326;
    func_0x00029b6d();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb32e;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb336;
    func_0x0002996b();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb33e;
    func_0x00029bb5();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb346;
    func_0x00029983();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb34e;
    func_0x000297e6();
    local_6 = (int *)0x22b2;
    uStack_8 = 0xb356;
    func_0x00029bb5();
  }
  local_6 = (int *)0x22b2;
  uStack_8 = 0xb35e;
  func_0x00029983();
  local_6 = (int *)0x2;
  uStack_8 = 0x22b2;
  local_a = -0x4c96;
  func_0x000297e6();
  uStack_8 = 0x22b2;
  local_a = -0x4c91;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xb379;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xb381;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xb386;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xb390;
  func_0x000299d1();
  local_18 = 0x22b2;
  local_1a = 0xb398;
  func_0x000297e6();
  local_18 = 0x22b2;
  local_1a = 0xb39d;
  func_0x00029d78();
  local_20 = 0x22b2;
  local_22 = 0xb3a7;
  func_0x000299d1();
  local_20 = 0x22b2;
  local_22 = 45999;
  func_0x000297e6();
  local_20 = 0x22b2;
  local_22 = 0xb3b4;
  func_0x00029d78();
  local_28 = 0x22b2;
  local_2a = 0xb3be;
  func_0x000299d1();
  local_28 = 0x22b2;
  local_2a = 0xb3c3;
  func_0x0001e18f();
  local_6 = (int *)0x2;
  uStack_8 = 0x1bb4;
  local_a = -0x4c2e;
  func_0x000297e6();
  uStack_8 = 0x22b2;
  local_a = -0x4c29;
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xb3e1;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xb3e9;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xb3ee;
  func_0x00029d78();
  local_18 = 0x22b2;
  local_1a = 0xb3f8;
  func_0x000299d1();
  local_18 = 0x22b2;
  local_1a = 0xb400;
  func_0x000297e6();
  local_18 = 0x22b2;
  local_1a = 0xb405;
  func_0x00029d78();
  local_20 = 0x22b2;
  local_22 = 0xb40f;
  func_0x000299d1();
  local_20 = 0x22b2;
  local_22 = 0xb417;
  func_0x000297e6();
  local_20 = 0x22b2;
  local_22 = 0xb41c;
  func_0x00029d78();
  local_28 = 0x22b2;
  local_2a = 0xb426;
  func_0x000299d1();
  local_28 = 0x22b2;
  local_2a = 0xb42b;
  func_0x0001e18f();
  return;
}



/* 3ab8:08b3  FUN_3ab8_08b3  826 bytes, 2 callers */

void __cdecl16far FUN_3ab8_08b3(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  undefined2 local_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  local_6 = 0xb43e;
  FUN_21f2_0ebc();
  uStack_4 = 0x22b2;
  local_6 = 0xb464;
  FUN_28b3_0d8b();
  uStack_4 = 0x22b2;
  local_6 = 0xb46c;
  func_0x00029983();
  uStack_4 = 0x22b2;
  local_6 = 0xb474;
  func_0x000297e6();
  uStack_4 = 0x22b2;
  local_6 = 0xb479;
  func_0x00029d78();
  uStack_4 = 0x22b2;
  local_6 = 0xb482;
  func_0x00029b85();
  uStack_4 = 0x22b2;
  local_6 = 0xb48b;
  func_0x00029c2c();
  uStack_4 = 0x22b2;
  local_6 = 0xb493;
  func_0x00029983();
  uStack_4 = 0x22b2;
  local_6 = 0xb49c;
  func_0x000297e6();
  uStack_4 = 0x22b2;
  local_6 = 0xb4a1;
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
  uStack_4 = 0x1bb4;
  local_6 = 0xb503;
  func_0x00029834();
  uStack_4 = 0x22b2;
  local_6 = 0xb50c;
  func_0x00029983();
  uStack_4 = 0x22b2;
  local_6 = 0xb514;
  func_0x00029834();
  uStack_4 = 0x22b2;
  local_6 = 0xb51d;
  func_0x00029983();
  uStack_4 = 0x22b2;
  local_6 = 0xb52e;
  func_0x000297e6();
  uStack_4 = 0x22b2;
  local_6 = 0xb533;
  func_0x00029d78();
  uStack_4 = 0x22b2;
  local_6 = 0xb53c;
  func_0x00029b85();
  uStack_4 = 0x22b2;
  local_6 = 0xb544;
  func_0x00029c2c();
  uStack_4 = 0x22b2;
  local_6 = 0xb54c;
  func_0x0002996b();
  uStack_4 = 0x22b2;
  local_6 = 0xb554;
  FUN_28b3_0ee9();
  if (*(int *)0x1096 == 1) {
    uStack_4 = 0x22b2;
    local_6 = 0xb564;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    local_6 = 0xb569;
    func_0x00029d78();
    uStack_4 = 0x22b2;
    local_6 = 0xb572;
    func_0x00029c2c();
    uStack_4 = 0x22b2;
    local_6 = 0xb57a;
    func_0x00029c2c();
    uStack_4 = 0x22b2;
    local_6 = 0xb582;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    local_6 = 0xb587;
    func_0x00029d78();
    uStack_4 = 0x22b2;
    local_6 = 0xb58c;
    FUN_28b3_117c();
    uStack_4 = 0x22b2;
    local_6 = 0xb594;
    func_0x00029983();
  }
  if (*(int *)0x1096 == 2) {
    uStack_4 = 0x22b2;
    local_6 = 0xb5a4;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    local_6 = 0xb5a9;
    func_0x00029d78();
    uStack_4 = 0x22b2;
    local_6 = 0xb5b1;
    func_0x00029c2c();
    uStack_4 = 0x22b2;
    local_6 = 0xb5b9;
    func_0x00029b55();
    uStack_4 = 0x22b2;
    local_6 = 0xb5c1;
    func_0x00029983();
  }
  uStack_4 = 0x22b2;
  local_6 = 0xb5d2;
  func_0x000297e6();
  uStack_4 = 0x22b2;
  local_6 = 0xb5d7;
  func_0x00029d78();
  uStack_4 = 0x22b2;
  local_6 = 0xb5e0;
  func_0x00029b85();
  uStack_4 = 0x22b2;
  local_6 = 0xb5e8;
  func_0x00029c2c();
  uStack_4 = 0x22b2;
  local_6 = 0xb5f0;
  func_0x0002996b();
  uStack_4 = 0x22b2;
  local_6 = 0xb5f8;
  FUN_28b3_0ee9();
  if (*(int *)0x1098 == 1) {
    uStack_4 = 0x22b2;
    local_6 = 0xb607;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    local_6 = 0xb60c;
    func_0x00029d78();
    uStack_4 = 0x22b2;
    local_6 = 0xb615;
    func_0x00029c2c();
    uStack_4 = 0x22b2;
    local_6 = 0xb61d;
    func_0x00029c2c();
    uStack_4 = 0x22b2;
    local_6 = 0xb625;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    local_6 = 0xb62a;
    func_0x00029d78();
    uStack_4 = 0x22b2;
    local_6 = 0xb62f;
    FUN_28b3_117c();
    uStack_4 = 0x22b2;
    local_6 = 0xb637;
    func_0x00029983();
  }
  if (*(int *)0x1098 == 2) {
    uStack_4 = 0x22b2;
    local_6 = 0xb646;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    local_6 = 0xb64b;
    func_0x00029d78();
    uStack_4 = 0x22b2;
    local_6 = 0xb653;
    func_0x00029c2c();
    uStack_4 = 0x22b2;
    local_6 = 0xb65b;
    func_0x00029b55();
    uStack_4 = 0x22b2;
    local_6 = 0xb663;
    func_0x00029983();
  }
  uStack_4 = 0x22b2;
  local_6 = 0xb66b;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar1 = puVar2[1];
  *(undefined2 *)0xc3a0 = *puVar2;
  *(undefined2 *)0xc3a2 = uVar1;
  uStack_4 = 0x1bb4;
  local_6 = 0xb6a8;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar1 = puVar2[1];
  *(undefined2 *)0xc3a4 = *puVar2;
  *(undefined2 *)0xc3a6 = uVar1;
  uStack_4 = 0x1bb4;
  local_6 = 0xb6e5;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029bb5(0x22b2,&local_6);
  func_0x0002996b(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)FUN_1def_05d1(0x22b2,0);
  uVar1 = puVar2[1];
  *(undefined2 *)0xc3a8 = *puVar2;
  *(undefined2 *)0xc3aa = uVar1;
  uStack_4 = 0x1bb4;
  local_6 = 0xb737;
  func_0x000297e6();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x000299d1(0x22b2);
  puVar2 = (undefined2 *)func_0x0001e558(0x22b2,0);
  uVar1 = puVar2[1];
  *(undefined2 *)0xc3ac = *puVar2;
  *(undefined2 *)0xc3ae = uVar1;
  return;
}



/* 3ab8:0bed  FUN_3ab8_0bed  55 bytes, 3 callers */

undefined2 __cdecl16far FUN_3ab8_0bed(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_21f2_3454(param_1,0x3f8e,*(int *)0x1096 * 3 + 0x109a,*(int *)0x1098 * 3 + 0x10a4);
  return 1;
}



/* 3ab8:0c24  FUN_3ab8_0c24  64 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0c24(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if (param_1 == 2) {
    *(undefined2 *)0x1096 = 0;
    *(undefined2 *)0x1098 = 0;
  }
  else {
    *(int *)0x1096 = *(int *)0x1096 + 1;
    if (2 < *(int *)0x1096) {
      *(undefined2 *)0x1096 = 0;
      *(int *)0x1098 = *(int *)0x1098 + 1;
      if (2 < *(int *)0x1098) {
        *(undefined2 *)0x1098 = 0;
      }
    }
  }
  return;
}



/* 3ab8:0c64  FUN_3ab8_0c64  259 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_0c64(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_e;
  int iStack_c;
  int iStack_a;
  undefined2 uStack_8;
  int *piStack_6;
  int iVar4;
  
  piStack_6 = (int *)0xb7ef;
  FUN_21f2_0ebc();
  if (*(char *)0xb782 == '\0') {
    iVar4 = 0x11;
    uVar1 = 0x22b2;
    do {
      piStack_6 = (int *)0xffff;
      uStack_8 = 4;
      iStack_c = *(int *)0xa58 + -1;
      uVar2 = 0xb81d;
      local_e = iVar4;
      iStack_a = iVar4;
      func_0x0000def0(uVar1,1);
      iVar4 = iVar4 + 1;
      uVar1 = 0xdef;
    } while (iVar4 < 0x30);
    if (*(int *)0xc22 < 1) {
      *(undefined2 *)0xc22 = 1;
    }
    piStack_6 = &local_e;
    uStack_8 = 0xdef;
    iStack_a = 0xb83e;
    FUN_3ab8_0bed();
    piStack_6 = &local_e;
    uStack_8 = *(undefined2 *)(*(int *)0x168 * 2 + 0x16c);
    iStack_a = 0x3f93;
    iStack_c = 0xbf48;
    local_e = 0xdef;
    FUN_21f2_3454();
    piStack_6 = (int *)0x0;
    uStack_8 = 0;
    iStack_a = 2;
    iStack_c = 1;
    local_e = -0x40b8;
    uVar1 = 0xb872;
    FUN_1000_02b5();
    piStack_6 = (int *)0xdef;
    uStack_8 = 0xb888;
    FUN_28b3_0d8b();
    piStack_6 = (int *)0x22b2;
    uStack_8 = 0xb891;
    func_0x00029c2c();
    local_e = 0x22b2;
    func_0x000299d1();
    local_e = 0x22b2;
    FUN_28b3_0d8b();
    local_e = 0x22b2;
    uVar3 = 0xb8ad;
    func_0x00029c2c();
    func_0x000299d1(0x22b2,uVar2,uVar1,uVar3);
    FUN_21f2_3454(0xbf48,0x978);
    piStack_6 = (int *)0x0;
    uStack_8 = 0;
    iStack_a = 3;
    iStack_c = 1;
    local_e = -0x40b8;
    FUN_1000_02b5();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* 3ab8:0d67  FUN_3ab8_0d67  986 bytes, 3 callers */

undefined2 __cdecl16far FUN_3ab8_0d67(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 local_136 [4];
  undefined1 local_132 [6];
  undefined1 local_12c [4];
  int local_128;
  undefined1 local_126 [6];
  undefined1 local_120 [6];
  undefined1 local_11a [202];
  undefined1 local_50 [2];
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined1 local_46 [20];
  undefined1 local_32 [6];
  int local_2c;
  undefined1 local_2a [24];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *puStack_e;
  undefined2 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uVar2 = 0x22b2;
  puStack_6 = (undefined1 *)0xb8f2;
  FUN_21f2_0ebc();
  do {
    puStack_4 = (undefined1 *)0x3fa3;
    puStack_6 = local_46;
    puStack_a = (undefined1 *)0xb8ff;
    puStack_8 = (undefined1 *)uVar2;
    func_0x00024c86();
    puStack_4 = (undefined1 *)0x3fae;
    puStack_6 = local_132;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb90f;
    func_0x00024c86();
    puStack_4 = (undefined1 *)0x3fb1;
    puStack_6 = local_126;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb91f;
    func_0x00024c86();
    puStack_4 = (undefined1 *)0x3fb4;
    puStack_6 = local_32;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb92e;
    func_0x00024c86();
    puStack_4 = (undefined1 *)0x3fb7;
    puStack_6 = local_120;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb93e;
    func_0x00024c86();
    puStack_4 = (undefined1 *)0x3fba;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb94e;
    func_0x00024c86();
    puStack_4 = (undefined1 *)0x6da;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb95e;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x98a;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb96e;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x3fbf;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb97e;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x98a;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb98e;
    FUN_21f2_2d26();
    puStack_4 = local_132;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb99f;
    FUN_21f2_2d26();
    puStack_4 = local_32;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb9af;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)(*(int *)0x1096 * 3 + 0x109a);
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb9c8;
    FUN_21f2_2d26();
    puStack_4 = local_120;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb9d9;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x98a;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb9e9;
    FUN_21f2_2d26();
    puStack_4 = local_132;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xb9fa;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x22b2;
    puStack_6 = (undefined1 *)0xba0d;
    func_0x000297e6();
    puStack_4 = (undefined1 *)0x22b2;
    puStack_6 = (undefined1 *)0xba12;
    func_0x00029d78();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xba1c;
    func_0x000299d1();
    puStack_c = (undefined2 *)local_46;
    puStack_e = (undefined2 *)local_2a;
    uStack_10 = 0x22b2;
    uStack_12 = 0xba29;
    FUN_21f2_3454();
    puStack_4 = local_2a;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xba3a;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x98a;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xba4a;
    FUN_21f2_2d26();
    puStack_4 = local_126;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xba5b;
    FUN_21f2_2d26();
    puStack_4 = local_32;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xba6b;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)(*(int *)0x1098 * 3 + 0x10a4);
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xba84;
    FUN_21f2_2d26();
    puStack_4 = local_120;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xba95;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x98a;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xbaa5;
    FUN_21f2_2d26();
    puStack_4 = local_126;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xbab6;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x22b2;
    puStack_6 = (undefined1 *)0xbac9;
    func_0x000297e6();
    puStack_4 = (undefined1 *)0x22b2;
    puStack_6 = (undefined1 *)0xbace;
    func_0x00029d78();
    puStack_c = (undefined2 *)0x22b2;
    puStack_e = (undefined2 *)0xbad8;
    func_0x000299d1();
    puStack_c = (undefined2 *)local_46;
    puStack_e = (undefined2 *)local_2a;
    uStack_10 = 0x22b2;
    uStack_12 = 0xbae5;
    FUN_21f2_3454();
    puStack_4 = local_2a;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xbaf6;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x98a;
    puStack_6 = local_11a;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xbb06;
    FUN_21f2_2d26();
    puStack_4 = local_11a;
    puStack_6 = (undefined1 *)0x5;
    puStack_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xbb16;
    FUN_1def_07a4();
    puStack_4 = local_50;
    puStack_6 = local_136;
    puStack_8 = local_12c;
    puStack_a = local_11a;
    puStack_c = (undefined2 *)0x0;
    puStack_e = (undefined2 *)0x1bb4;
    uVar2 = 0x1bb4;
    uStack_10 = 0xbb33;
    local_128 = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return 0xfba9;
    }
    if (local_128 == 1) {
      return 1;
    }
    if (local_128 == 2) {
      *(int *)0x1096 = *(int *)0x1096 + 1;
      if (2 < *(int *)0x1096) {
        *(undefined2 *)0x1096 = 0;
      }
      puStack_4 = (undefined1 *)0x1bb4;
      puStack_6 = (undefined1 *)0xbb68;
      FUN_3ab8_0c64();
    }
    if (local_128 == 4) {
      *(int *)0x1098 = *(int *)0x1098 + 1;
      if (2 < *(int *)0x1098) {
        *(undefined2 *)0x1098 = 0;
      }
      puStack_4 = (undefined1 *)0x1bb4;
      puStack_6 = (undefined1 *)0xbb84;
      FUN_3ab8_0c64();
    }
    do {
      if ((local_128 != 3) && (local_128 != 5)) goto LAB_3ab8_10d5;
      puStack_6 = (undefined1 *)0xbb9a;
      puStack_4 = (undefined1 *)uVar2;
      func_0x0001bb4e();
      puStack_4 = (undefined1 *)0x6da;
      puStack_6 = (undefined1 *)0x1bb4;
      puStack_8 = (undefined1 *)0xbba3;
      func_0x00012276();
      puStack_4 = (undefined1 *)0x3fc7;
      puStack_6 = (undefined1 *)0x11f2;
      puStack_8 = (undefined1 *)0xbbad;
      func_0x00012276();
      if (local_128 == 3) {
        local_4a = *(undefined2 *)(*(int *)0x1096 * 4 + 0x10b2);
        local_48 = *(undefined2 *)(*(int *)0x1096 * 4 + 0x10b4);
        puStack_4 = local_132;
      }
      else {
        local_4a = *(undefined2 *)(*(int *)0x1098 * 4 + 0x10be);
        local_48 = *(undefined2 *)(*(int *)0x1098 * 4 + 0x10c0);
        puStack_4 = local_126;
      }
      puStack_6 = (undefined1 *)0x11f2;
      puStack_8 = (undefined1 *)0xbbf1;
      func_0x00012276();
      puStack_4 = (undefined1 *)0x3fd1;
      puStack_6 = (undefined1 *)0x11f2;
      puStack_8 = (undefined1 *)0xbbfb;
      func_0x00012276();
      puStack_4 = (undefined1 *)0x1;
      puStack_6 = (undefined1 *)0x3c;
      puStack_8 = (undefined1 *)0x11f2;
      puStack_a = (undefined1 *)0xbc09;
      FUN_1000_0599();
      puStack_4 = (undefined1 *)0x612;
      puStack_6 = (undefined1 *)0xdef;
      puStack_8 = (undefined1 *)0xbc14;
      func_0x00012276();
      local_4e = local_4a;
      local_4c = local_48;
      puStack_4 = (undefined1 *)0x2711;
      puStack_6 = (undefined1 *)0x1c;
      puStack_8 = local_136;
      puStack_a = local_12c;
      puStack_c = &local_4e;
      puStack_e = &local_4a;
      uStack_10 = 0x11f2;
      uVar2 = 0xad;
      uStack_12 = 0xbc40;
      local_2c = func_0x000021a4();
      if (*(int *)0x158 != 0) {
        return 0xfba9;
      }
      uVar3 = local_2c != -1;
      uVar4 = local_2c == -1;
      if ((bool)uVar4) goto LAB_3ab8_10d5;
      puStack_4 = (undefined1 *)0xad;
      puStack_6 = (undefined1 *)0xbc6c;
      func_0x000297e6();
      puStack_4 = (undefined1 *)0x22b2;
      puStack_6 = (undefined1 *)0xbc74;
      func_0x000297e6();
      puStack_4 = (undefined1 *)0x22b2;
      puStack_6 = (undefined1 *)0xbc79;
      func_0x00029ae7();
      puStack_4 = (undefined1 *)0x22b2;
      uVar2 = 0x22b2;
      puStack_6 = (undefined1 *)0xbc7e;
      FUN_28b3_1181();
    } while (!(bool)uVar3 && !(bool)uVar4);
    if (local_128 == 3) {
      iVar1 = *(int *)0x1096;
      *(undefined2 *)(iVar1 * 4 + 0x10b2) = local_4a;
      *(undefined2 *)(iVar1 * 4 + 0x10b4) = local_48;
    }
    else {
      iVar1 = *(int *)0x1098;
      *(undefined2 *)(iVar1 * 4 + 0x10be) = local_4a;
      *(undefined2 *)(iVar1 * 4 + 0x10c0) = local_48;
    }
LAB_3ab8_10d5:
    if (local_128 == 0) {
      return 0;
    }
  } while( true );
}



/* 3ab8:1141  FUN_3ab8_1141  470 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_1141(int param_1,undefined2 *param_2,undefined2 *param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 local_18 [4];
  undefined1 local_14 [2];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined1 **local_e;
  undefined2 ****local_c;
  undefined1 *puStack_a;
  undefined1 *local_8;
  undefined2 uStack_6;
  int local_4;
  
  local_4 = 0x3ab8;
  uStack_6 = 0xbccc;
  FUN_21f2_0ebc();
  if (param_1 == 0) {
    local_4 = 0x22b2;
    uStack_6 = 0xbcda;
    FUN_28b3_0d8b();
  }
  else {
    local_4 = 0x22b2;
    uStack_6 = 0xbce4;
    FUN_28b3_0d8b();
    local_4 = 0x22b2;
    uStack_6 = 0xbced;
    func_0x00029c2c();
  }
  local_4 = 0x22b2;
  uStack_6 = 0xbcf5;
  func_0x00029983();
  if (param_1 == 3) {
    local_10 = *(undefined2 *)0x9b68;
    local_e = (undefined1 **)*(undefined2 *)0x9b6a;
  }
  else {
    local_10 = *(undefined2 *)0x9b6c;
    local_e = (undefined1 **)*(undefined2 *)0x9b6e;
  }
  local_4 = 0x22b2;
  uStack_6 = 0xbd16;
  func_0x0001bb4e();
  local_4 = 0x3fd4;
  uStack_6 = 0x1bb4;
  local_8 = (undefined1 *)0xbd1f;
  func_0x00012276();
  if (param_1 == 0) {
    local_4 = 0x3fe0;
    uStack_6 = 0x11f2;
    local_8 = (undefined1 *)0xbd2f;
    func_0x00012276();
  }
  if (param_1 == 1) {
    local_4 = 0x3ff0;
    uStack_6 = 0x11f2;
    local_8 = (undefined1 *)0xbd3f;
    func_0x00012276();
  }
  if (param_1 == 2) {
    local_4 = 0x3ff3;
    uStack_6 = 0x11f2;
    local_8 = (undefined1 *)0xbd4f;
    func_0x00012276();
  }
  if (param_1 == 3) {
    local_4 = 0x3ff6;
    uStack_6 = 0x11f2;
    local_8 = (undefined1 *)0xbd5f;
    func_0x00012276();
  }
  if (0 < param_1) {
    local_4 = 0x612;
    uStack_6 = 0x11f2;
    local_8 = (undefined1 *)0xbd72;
    func_0x000297e6();
    uStack_6 = 0x22b2;
    local_8 = (undefined1 *)0xbd77;
    func_0x00029d78();
    local_e = (undefined1 **)0x22b2;
    local_10 = 0xbd81;
    func_0x000299d1();
    local_e = (undefined1 **)0x3ffb;
    local_10 = 0x22b2;
    uStack_12 = 0xbd8a;
    func_0x00012276();
  }
  local_4 = 0x652;
  uStack_6 = 0x11f2;
  local_8 = (undefined1 *)0xbd96;
  func_0x00012276();
  local_4 = 0x11f2;
  uStack_6 = 0xbd9c;
  func_0x00010526();
  local_4 = param_5 + 10000;
  uStack_6 = param_4;
  local_8 = local_18;
  puStack_a = local_14;
  local_c = &local_c;
  local_e = &local_8;
  local_10 = 0xdef;
  uVar3 = 0xad;
  uStack_12 = 0xbdbb;
  iVar1 = func_0x000021a4();
  if (*(int *)0x158 == 0) {
    if ((iVar1 == -1) || (iVar1 == 99)) {
      return 0xffff;
    }
    uVar4 = param_1 == 0;
    uVar5 = param_1 == 1;
    if (0 < param_1) {
      local_4 = 0xad;
      uStack_6 = 0xbdeb;
      func_0x000297e6();
      local_4 = 0x22b2;
      uStack_6 = 0xbdf3;
      func_0x000297e6();
      local_4 = 0x22b2;
      uVar3 = 0x22b2;
      uStack_6 = 0xbdf8;
      FUN_28b3_1181();
      if ((bool)uVar4 || (bool)uVar5) {
        local_4 = 0x22b2;
        uStack_6 = 0xbe02;
        func_0x000297e6();
        local_4 = 0x22b2;
        uStack_6 = 0xbe0b;
        func_0x000297e6();
        local_4 = 0x22b2;
        uVar3 = 0x22b2;
        uStack_6 = 0xbe10;
        FUN_28b3_1181();
        if (!(bool)uVar4) {
          local_4 = 0x22b2;
          uStack_6 = 0xbe1b;
          func_0x000297e6();
          local_4 = 0x22b2;
          uStack_6 = 0xbe23;
          func_0x00029b6d();
          local_4 = 0x22b2;
          uStack_6 = 0xbe28;
          func_0x00029d78();
          local_4 = 0x22b2;
          uVar3 = 0x22b2;
          uStack_6 = 0xbe2d;
          uVar2 = FUN_28b3_0f51();
          *param_2 = uVar2;
          *param_3 = 1;
        }
      }
    }
    uVar4 = 0;
    uVar5 = param_1 == 0;
    if ((bool)uVar5) {
      uStack_6 = 0xbe47;
      local_4 = uVar3;
      func_0x000297e6();
      local_4 = 0x22b2;
      uStack_6 = 0xbe50;
      func_0x000297e6();
      local_4 = 0x22b2;
      uStack_6 = 0xbe55;
      FUN_28b3_1181();
      if ((bool)uVar4 || (bool)uVar5) {
        local_4 = 0x22b2;
        uStack_6 = 0xbe5f;
        func_0x000297e6();
        local_4 = 0x22b2;
        uStack_6 = 0xbe68;
        func_0x000297e6();
        local_4 = 0x22b2;
        uStack_6 = 0xbe6d;
        FUN_28b3_1181();
        if (!(bool)uVar4) {
          local_4 = 0x22b2;
          uStack_6 = 0xbe7a;
          func_0x000297e6();
          local_4 = 0x22b2;
          uStack_6 = 0xbe7f;
          func_0x00029d78();
          local_4 = 0x22b2;
          uStack_6 = 0xbe84;
          uVar3 = FUN_28b3_0f51();
          *param_2 = uVar3;
          *param_3 = 1;
        }
      }
    }
  }
  return 0;
}



/* 3ab8:1317  FUN_3ab8_1317  355 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_3ab8_1317(int param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 ****local_1a [2];
  undefined1 local_16 [4];
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 ******ppppppuStack_e;
  undefined2 *******local_c;
  undefined1 *local_a;
  undefined2 ******local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0x3ab8;
  uVar2 = 0x22b2;
  local_6 = 0xbea2;
  FUN_21f2_0ebc();
  do {
    do {
      local_c = (undefined2 *******)*param_2;
      local_a = (undefined1 *)param_2[1];
      local_6 = 0xbebb;
      local_8 = local_c;
      local_4 = uVar2;
      func_0x0001bb4e();
      local_4 = 0x652;
      local_6 = 0x1bb4;
      local_8 = (undefined2 ******)0xbec4;
      func_0x00012276();
      local_4 = 0x400d;
      local_6 = 0x11f2;
      local_8 = (undefined2 ******)0xbece;
      func_0x00012276();
      if (param_1 == 0) {
        local_4 = 1;
        local_6 = 0x11;
        local_8 = (undefined2 ******)0x11f2;
        local_a = (undefined1 *)0xbee2;
        FUN_1000_0599();
        local_4 = 0x4013;
      }
      else {
        local_4 = 1;
        local_6 = 0x1b;
        local_8 = (undefined2 ******)0x11f2;
        local_a = (undefined1 *)0xbef6;
        FUN_1000_0599();
        local_4 = 0x401f;
      }
      local_6 = 0xdef;
      local_8 = (undefined2 ******)0xbf01;
      func_0x00012276();
      local_4 = 0x4021;
      local_6 = 0x11f2;
      local_8 = (undefined2 ******)0xbf0b;
      func_0x00012276();
      local_4 = 1;
      local_6 = 0x3c;
      local_8 = (undefined2 ******)0x11f2;
      local_a = (undefined1 *)0xbf19;
      FUN_1000_0599();
      local_4 = 0x612;
      local_6 = 0xdef;
      local_8 = (undefined2 ******)0xbf24;
      func_0x00012276();
      local_4 = 0x2711;
      local_6 = 0x26;
      local_8 = (undefined2 ******)local_1a;
      local_a = local_16;
      local_c = &local_c;
      ppppppuStack_e = &local_8;
      uStack_10 = 0x11f2;
      uVar2 = 0xad;
      local_12 = 0xbf42;
      uVar1 = func_0x000021a4();
      if (*(int *)0x158 != 0) {
        return 0;
      }
      if (uVar1 == 0xffff) {
        return 0xffff;
      }
      uVar3 = uVar1 < 99;
      uVar4 = uVar1 == 99;
    } while ((bool)uVar4);
    local_4 = 0xad;
    local_6 = 0xbf6c;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0xbf75;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0xbf7a;
    FUN_28b3_1181();
    if ((bool)uVar3 || (bool)uVar4) {
      local_4 = 0x22b2;
      local_6 = 0xbf85;
      func_0x00029834();
      local_4 = 0x22b2;
      local_6 = 0xbf8d;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0xbf92;
      func_0x00029d78();
      local_4 = 0x22b2;
      local_6 = 0xbf97;
      FUN_28b3_1181();
      if ((bool)uVar3) {
        local_4 = 0x22b2;
        local_6 = 0xbfa2;
        func_0x000297e6();
        local_4 = 0x22b2;
        local_6 = 0xbfaa;
        func_0x00029b6d();
        local_4 = 0x22b2;
        local_6 = 0xbfaf;
        func_0x00029d78();
        local_4 = 0x22b2;
        local_6 = 0xbfb4;
        local_12 = FUN_28b3_0f51();
        local_4 = 0x22b2;
        local_6 = 0xbfbf;
        FUN_28b3_0d8b();
        local_4 = 0x22b2;
        local_6 = 0xbfc7;
        func_0x0002996b();
        local_4 = 0x22b2;
        local_6 = 0xbfd0;
        func_0x00029b6d();
        local_4 = 0x22b2;
        local_6 = 0xbfd8;
        func_0x00029983();
        return 0;
      }
    }
    uVar2 = 0x22b2;
  } while (param_1 != 0);
  uVar2 = *(undefined2 *)0x9b42;
  *param_2 = *(undefined2 *)0x9b40;
  param_2[1] = uVar2;
  return 0;
}



/* 3ab8:147a  FUN_3ab8_147a  2796 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_147a(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar12;
  undefined4 local_1c4;
  uint local_1b8 [2];
  uint local_1b4;
  int aiStack_1b0 [12];
  undefined2 *local_198;
  undefined1 local_190;
  int local_188;
  undefined1 local_186 [100];
  int local_122;
  int local_120;
  int local_11e;
  uint auStack_11c [13];
  uint auStack_102 [13];
  undefined2 local_e8 [17];
  undefined1 local_c6 [30];
  undefined2 local_a8;
  undefined2 local_a6;
  uint auStack_a4 [13];
  int local_8a;
  undefined2 local_88;
  uint local_86 [26];
  uint local_52 [20];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  uint local_1e [7];
  uint *puStack_10;
  uint *puStack_e;
  uint *puStack_c;
  
  FUN_21f2_0ebc();
  puStack_c = (uint *)0xc00f;
  func_0x0000daa6();
  func_0x0001bb8f();
  func_0x0001bba4();
  puStack_c = (uint *)0x56;
  puStack_e = (uint *)0x92;
  puStack_10 = (uint *)0x1bb4;
  local_1e[6] = 0xc02f;
  func_0x0000a76b();
  puStack_c = (uint *)(*(int *)0xa60 + 1);
  puStack_e = (uint *)0x0;
  puStack_10 = (uint *)0x885;
  local_1e[6] = 0xc047;
  func_0x0000a76b();
  func_0x0000a799();
  func_0x0000c354();
  func_0x0000c3ca();
  local_1e[0] = 0;
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xc08 = 1;
  *(undefined2 *)0xc28 = 1;
  for (local_120 = 1; local_120 < 0xb; local_120 = local_120 + 1) {
    iVar9 = local_120 * 2;
    local_1e[local_120 + 1] = *(uint *)(iVar9 + 0x16c);
    auStack_102[local_120] = *(uint *)(iVar9 + 0x182);
    auStack_11c[local_120] = *(uint *)(iVar9 + 0x198);
    auStack_a4[local_120] = *(uint *)(iVar9 + 0x1ae);
    aiStack_1b0[local_120] = 0;
  }
  for (local_120 = 1; local_120 <= *(int *)0x150; local_120 = local_120 + 1) {
    puStack_c = (uint *)0xc0b9;
    uVar12 = func_0x00000398();
    bVar3 = *(byte *)((int)uVar12 + 0x14);
    local_1b4 = (uint)bVar3;
    if ((bVar3 != 0) && (bVar3 < 0xb)) {
      aiStack_1b0[local_1b4] = aiStack_1b0[local_1b4] + 1;
    }
  }
LAB_3ab8_1567:
  do {
    puStack_c = (uint *)0xc0ef;
    func_0x0000daa6();
    func_0x0000c3ca();
    puStack_c = (uint *)0x1;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x263;
    local_1e[5] = 0x58;
    local_1e[4] = 0x94;
    local_1e[3] = 0x885;
    local_1e[2] = 0xc118;
    func_0x0000f350();
    puStack_c = (uint *)0x1;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x129;
    local_1e[6] = 0x264;
    local_1e[5] = 0x57;
    local_1e[4] = 0x93;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc13e;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0xec;
    local_1e[5] = 0x58;
    local_1e[4] = 0xec;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc15a;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x134;
    local_1e[5] = 0x58;
    local_1e[4] = 0x134;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc176;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x18c;
    local_1e[5] = 0x58;
    local_1e[4] = 0x18c;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc192;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x1e4;
    local_1e[5] = 0x58;
    local_1e[4] = 0x1e4;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc1ae;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x22c;
    local_1e[5] = 0x58;
    local_1e[4] = 0x22c;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc1ca;
    func_0x0000f350();
    puStack_c = (uint *)0xdef;
    puStack_e = (uint *)0xc1db;
    func_0x00024c86();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc1eb;
    func_0x00024c86();
    local_190 = 0;
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc200;
    func_0x00024c86();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc210;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc221;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc231;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc242;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc253;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc263;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc274;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc284;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc295;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x22b2;
    puStack_e = (uint *)0xc2a5;
    FUN_21f2_2d26();
    puStack_c = (uint *)0x7;
    puStack_e = (uint *)0x15;
    puStack_10 = (uint *)local_186;
    local_1e[6] = 0x22b2;
    local_1e[5] = 0xc2bd;
    FUN_1000_02b5();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x78;
    local_1e[6] = 0x264;
    local_1e[5] = 0x78;
    local_1e[4] = 0x94;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc2db;
    func_0x0000f350();
    puStack_c = (uint *)0xdef;
    uVar10 = 0x22b2;
    puStack_e = (uint *)0xc2ec;
    func_0x00024c86();
    for (local_188 = 1; local_188 < 0xb; local_188 = local_188 + 1) {
      puStack_e = (uint *)0xc35e;
      puStack_c = (uint *)uVar10;
      FUN_1000_0599();
      iVar9 = local_188;
      puStack_c = (uint *)0x4059;
      puStack_e = (uint *)0xdef;
      puStack_10 = (uint *)0xc376;
      func_0x00012276();
      FUN_28b3_0d8b();
      func_0x00029c2c();
      puStack_10 = (uint *)0x22b2;
      local_1e[6] = 0xc395;
      func_0x000299d1();
      puStack_10 = (uint *)local_c6;
      local_1e[6] = 0x22b2;
      local_1e[5] = 0xc39f;
      func_0x00012276();
      puStack_c = (uint *)0xc3ab;
      func_0x00012276();
      FUN_28b3_0d8b();
      func_0x00029c2c();
      puStack_10 = (uint *)0x22b2;
      local_1e[6] = 0xc3c8;
      func_0x000299d1();
      puStack_10 = (uint *)local_c6;
      local_1e[6] = 0x22b2;
      local_1e[5] = 0xc3d2;
      func_0x00012276();
      FUN_28b3_0d8b();
      func_0x00029c2c();
      puStack_10 = (uint *)0x22b2;
      local_1e[6] = 0xc3f1;
      func_0x000299d1();
      puStack_10 = (uint *)local_c6;
      local_1e[6] = 0x22b2;
      local_1e[5] = 0xc3fb;
      func_0x00012276();
      if (6 < (int)local_1e[iVar9 + 1]) {
        puStack_c = (uint *)0x11f2;
        puStack_e = (uint *)0xc40e;
        FUN_1000_0599();
        puStack_c = (uint *)0xc419;
        func_0x00012276();
      }
      iVar9 = local_188;
      puStack_c = (uint *)0x11f2;
      uVar10 = 0xdef;
      puStack_e = (uint *)0xc42d;
      FUN_1000_0599();
      if (aiStack_1b0[local_188] == 0) {
        puStack_e = (uint *)0x4b;
        puStack_10 = (uint *)0x407f;
        iVar9 = local_188;
      }
      else {
        puStack_c = (uint *)0xdef;
        uVar10 = 0x11f2;
        puStack_e = (uint *)0xc44c;
        func_0x00012276();
        puStack_e = (uint *)0x16;
        puStack_10 = (uint *)0x407d;
      }
      puStack_c = (uint *)(iVar9 + 8);
      local_1e[5] = 0xc312;
      local_1e[6] = uVar10;
      FUN_1000_02b5();
      if (local_188 == *(int *)0x168) {
        puStack_c = (uint *)(local_188 + 8);
        puStack_e = (uint *)0x14;
        puStack_10 = (uint *)0x4081;
        local_1e[6] = 0xdef;
        local_1e[5] = 0xc33a;
        FUN_1000_02b5();
      }
      uVar10 = 0xdef;
    }
    puStack_c = (uint *)0x1;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x263;
    local_1e[5] = 0x58;
    local_1e[4] = 0x94;
    local_1e[2] = 0xc483;
    local_1e[3] = uVar10;
    func_0x0000f350();
    puStack_c = (uint *)0x1;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x129;
    local_1e[6] = 0x264;
    local_1e[5] = 0x57;
    local_1e[4] = 0x93;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc4a9;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0xec;
    local_1e[5] = 0x58;
    local_1e[4] = 0xec;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc4c5;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x134;
    local_1e[5] = 0x58;
    local_1e[4] = 0x134;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc4e1;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x18c;
    local_1e[5] = 0x58;
    local_1e[4] = 0x18c;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc4fd;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x1e4;
    local_1e[5] = 0x58;
    local_1e[4] = 0x1e4;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc519;
    func_0x0000f350();
    puStack_c = (uint *)0x0;
    puStack_e = (uint *)0x7;
    puStack_10 = (uint *)0x128;
    local_1e[6] = 0x22c;
    local_1e[5] = 0x58;
    local_1e[4] = 0x22c;
    local_1e[3] = 0xdef;
    local_1e[2] = 0xc531;
    func_0x0000f350();
    *(undefined2 *)0xc08 = 1;
    func_0x0001bb4e();
    puStack_c = (uint *)0xc548;
    func_0x00012276();
    puStack_c = (uint *)0xc552;
    func_0x00012276();
    puStack_c = (uint *)0xc55c;
    func_0x00012276();
    puStack_c = (uint *)0xc566;
    func_0x00012276();
    puStack_c = (uint *)0xc570;
    func_0x00012276();
    puStack_c = (uint *)0xc57a;
    func_0x00012276();
    puStack_c = (uint *)0xc584;
    func_0x00012276();
    puStack_c = (uint *)0xc58e;
    func_0x00012276();
    puStack_c = (uint *)0xc598;
    func_0x00012276();
    puStack_c = (uint *)0xc5a2;
    func_0x00012276();
    puStack_c = (uint *)0xc5ac;
    func_0x00012276();
    puStack_c = (uint *)0xc5b6;
    func_0x00012276();
    puStack_c = (uint *)0xc5c0;
    func_0x00012276();
    if (*(char *)0x122 == '\0') {
      puStack_c = (uint *)0xc5e3;
      func_0x00012276();
    }
    else {
      puStack_c = (uint *)0x11f2;
      puStack_e = (uint *)0xc5d7;
      func_0x00012276();
    }
    puStack_c = (uint *)0xc5ed;
    func_0x00012276();
    puStack_c = (uint *)0xc5f7;
    func_0x00012276();
    uVar10 = 0x11f2;
    do {
      do {
        *(undefined2 *)0xc26 = 1;
        *(undefined2 *)0xa4a = 0;
        *(undefined2 *)0xa48 = 2;
        puStack_c = local_1b8;
        puStack_e = local_86;
        puStack_10 = local_52;
        uVar11 = 0x3bf;
        local_1e[5] = 0xc627;
        local_1e[6] = uVar10;
        local_122 = func_0x00006608();
        *(undefined2 *)0xc26 = 0;
        *(undefined2 *)0xa4a = 0;
        *(undefined2 *)0xa48 = 0;
        if (*(int *)0x158 != 0) goto LAB_3ab8_1f52;
        if (local_122 == -1) goto LAB_3ab8_1ac9;
        if ((local_11e != 0) && ((int)local_86[0] < *(int *)0xa5e)) {
          if ((0xdc < (int)local_52[0]) && ((int)local_52[0] < 0x134)) {
            local_122 = 0x31;
          }
          if ((0x134 < (int)local_52[0]) && ((int)local_52[0] < 0x18c)) {
            local_122 = 0x32;
          }
          if ((0x18c < (int)local_52[0]) && ((int)local_52[0] < 0x20c)) {
            local_122 = 0x33;
          }
        }
        if ((local_122 == 0xd) || (local_122 == 0x31)) {
          local_122 = 1;
          goto LAB_3ab8_1ac9;
        }
        if (local_122 == 0x32) {
          FUN_3ab8_0d67();
          goto LAB_3ab8_1567;
        }
        if (local_122 == 0x33) {
          *(char *)0x122 = *(char *)0x122 + '\x01';
          if (2 < *(byte *)0x122) {
            *(undefined1 *)0x122 = 0;
          }
          goto LAB_3ab8_1567;
        }
        if ((local_122 == 99) || (local_122 == 0x3f00)) {
          *(undefined2 *)0xbc0 = 1;
          goto LAB_3ab8_1ac9;
        }
        if (local_122 == 0x3d00) {
          *(int *)0x168 = *(int *)0x168 + 1;
          if (10 < *(int *)0x168) {
            *(undefined2 *)0x168 = 1;
          }
          goto LAB_3ab8_1567;
        }
        if (local_122 == 0x3a00) {
          *(int *)0x168 = *(int *)0x168 + -1;
          if (*(int *)0x168 < 1) {
            *(undefined2 *)0x168 = 10;
          }
          goto LAB_3ab8_1567;
        }
        if ((0x61ff < local_122) && (local_122 < 0x6b01)) {
          uVar7 = (int)(local_122 + 0x9f00U) >> 0xf;
          *(int *)0x168 = ((int)((local_122 + 0x9f00U ^ uVar7) - uVar7) >> 8 ^ uVar7) - uVar7;
          goto LAB_3ab8_1567;
        }
        uVar10 = uVar11;
      } while (local_11e == 0);
      uVar7 = (int)local_52[0] >> 0xf;
      local_52[0] = (((int)((local_52[0] ^ uVar7) - uVar7) >> 3 ^ uVar7) - uVar7) + 1;
      uVar7 = (int)local_86[0] >> 0xf;
      iVar9 = ((int)((local_86[0] ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7;
      local_86[0] = iVar9 + 1;
      local_8a = iVar9 + -7;
    } while ((local_8a < 1) || (10 < local_8a));
    if ((0x13 < (int)local_52[0]) && ((int)local_52[0] < 0x1e)) {
      *(int *)0x168 = local_8a;
LAB_3ab8_1ac9:
      if ((local_122 == -1) || (local_122 == 1)) {
        func_0x0000c3ca();
        if ((local_122 == 1) && (local_1e[0] == 1)) {
          local_120 = 1;
          do {
            iVar9 = local_120 * 2;
            *(uint *)(iVar9 + 0x16c) = local_1e[local_120 + 1];
            *(uint *)(iVar9 + 0x198) = auStack_11c[local_120];
            *(uint *)(iVar9 + 0x182) = auStack_102[local_120];
            *(uint *)(iVar9 + 0x1ae) = auStack_a4[local_120];
            local_120 = local_120 + 1;
          } while (local_120 < 0xb);
          for (local_120 = 1; local_120 <= *(int *)0x150; local_120 = local_120 + 1) {
            puStack_c = (uint *)0xca71;
            uVar12 = func_0x00000398();
            if (*(byte *)((int)uVar12 + 0x14) < 0x5a) {
              puStack_c = (uint *)0xca86;
              local_198 = (undefined2 *)func_0x00000398();
              puVar8 = (undefined2 *)local_198;
              puVar5 = local_e8;
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar2 = puVar5;
                puVar5 = puVar5 + 1;
                puVar1 = puVar8;
                puVar8 = puVar8 + 1;
                *puVar2 = *puVar1;
              }
              puStack_c = (uint *)0xbf48;
              puStack_e = (uint *)0x0;
              puStack_10 = (uint *)0xcab1;
              FUN_1885_0344();
              puStack_c = (uint *)0xbf48;
              puStack_e = (uint *)0x18b3;
              puStack_10 = (uint *)0xc90a;
              puVar5 = (undefined2 *)func_0x00018eff();
              local_a8 = *puVar5;
              local_a6 = puVar5[1];
              uVar10 = (undefined2)((ulong)local_198 >> 0x10);
              puVar5 = (undefined2 *)local_198;
              FUN_28b3_0c98();
              func_0x00029d78();
              puStack_10 = (uint *)0x22b2;
              local_1e[6] = 0xc93b;
              func_0x000299d1();
              uVar11 = (undefined2)((ulong)local_198 >> 0x10);
              puVar8 = (undefined2 *)local_198;
              local_1c4 = (undefined2 *)CONCAT22(uVar11,puVar8 + 4);
              puStack_10 = (uint *)0x22b2;
              local_1e[6] = 0xc951;
              FUN_28b3_0c98();
              puStack_10 = (uint *)0x22b2;
              local_1e[6] = 0xc956;
              func_0x00029d78();
              local_1e[3] = 0x22b2;
              local_1e[2] = 0xc960;
              func_0x000299d1();
              local_1e[3] = 0x22b2;
              local_1e[2] = 0xc96c;
              FUN_28b3_0c98();
              local_1e[3] = 0x22b2;
              local_1e[2] = 0xc971;
              func_0x00029d78();
              uStack_20 = 0x22b2;
              uStack_22 = 0xc97b;
              func_0x000299d1();
              uStack_20 = 0x22b2;
              uStack_22 = 0xc984;
              FUN_28b3_0c98();
              uStack_20 = 0x22b2;
              uStack_22 = 0xc989;
              func_0x00029d78();
              uStack_28 = 0x22b2;
              uStack_2a = 0xc993;
              func_0x000299d1();
              uStack_28 = 0x22b2;
              uStack_2a = 0xc998;
              iVar9 = FUN_1def_043a();
              if (iVar9 == 0) {
                FUN_28b3_0c98();
                func_0x00029bb5();
                func_0x00029987();
                uVar11 = (undefined2)((ulong)local_198 >> 0x10);
                puVar5 = (undefined2 *)local_198;
                uVar10 = puVar5[3];
                puVar5[6] = puVar5[2];
                puVar5[7] = uVar10;
              }
              else {
                puStack_c = (uint *)*(undefined2 *)0x9b96;
                puStack_e = (uint *)*(undefined2 *)0x9b94;
                puStack_10 = (uint *)0x1bb4;
                local_1e[6] = 0xc9bb;
                func_0x000297e6();
                local_1e[3] = 0x22b2;
                local_1e[2] = 0xc9c5;
                func_0x000299d1();
                local_1e[3] = 0;
                local_1e[2] = 0x22b2;
                local_1e[1] = 0xc9cd;
                puVar6 = (undefined2 *)FUN_1def_05d1();
                uVar4 = puVar6[1];
                *local_1c4 = *puVar6;
                puVar8[5] = uVar4;
                puStack_c = (uint *)*(int *)0x9b96;
                puStack_e = (uint *)*(int *)0x9b94;
                puStack_10 = (uint *)0x1bb4;
                local_1e[6] = 0xc9fb;
                func_0x000297e6();
                local_1e[3] = 0x22b2;
                local_1e[2] = 0xca05;
                func_0x000299d1();
                local_1e[3] = 0;
                local_1e[2] = 0x22b2;
                local_1e[1] = 0xca0d;
                puVar8 = (undefined2 *)func_0x0001e558();
                uVar11 = puVar8[1];
                puVar5[6] = *puVar8;
                puVar5[7] = uVar11;
              }
              *(undefined1 *)0xd14 = 2;
            }
          }
          *(undefined1 *)0xbf48 = 0;
          *(undefined2 *)0xbc0 = 1;
        }
        goto LAB_3ab8_1f52;
      }
      goto LAB_3ab8_1567;
    }
    if ((0x1e < (int)local_52[0]) && ((int)local_52[0] < 0x27)) {
      puStack_c = local_1e;
      puStack_e = local_1e + iVar9 + -6;
      puStack_10 = (uint *)0x0;
      local_1e[6] = 0x3bf;
      local_1e[5] = 0xc7f2;
      local_88 = FUN_3ab8_1141();
    }
    if ((0x27 < (int)local_52[0]) && ((int)local_52[0] < 0x32)) {
      puStack_c = local_1e;
      puStack_e = auStack_102 + local_8a;
      puStack_10 = (uint *)0x1;
      local_1e[6] = 0x3bf;
      local_1e[5] = 0xc824;
      local_88 = FUN_3ab8_1141();
    }
    if ((0x32 < (int)local_52[0]) && ((int)local_52[0] < 0x3d)) {
      puStack_c = local_1e;
      puStack_e = auStack_11c + local_8a;
      puStack_10 = (uint *)0x2;
      local_1e[6] = 0x3bf;
      local_1e[5] = 0xc856;
      local_88 = FUN_3ab8_1141();
    }
    if ((0x3d < (int)local_52[0]) && ((int)local_52[0] < 0x46)) {
      puStack_c = local_1e;
      puStack_e = auStack_a4 + local_8a;
      puStack_10 = (uint *)0x3;
      local_1e[6] = 0x3bf;
      local_1e[5] = 0xc888;
      local_88 = FUN_3ab8_1141();
    }
    if (*(int *)0x158 != 0) {
LAB_3ab8_1f52:
      FUN_10ad_18a4();
      *(undefined2 *)0xc28 = 0;
      return 1;
    }
  } while( true );
}



/* 3ab8:1f66  FUN_3ab8_1f66  543 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_1f66(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_0000001e;
  undefined2 uVar8;
  undefined2 local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  uint local_c;
  uint uStack_a;
  
  FUN_21f2_0ebc();
  uStack_a = 0x22b2;
  local_c = 0xcafb;
  iVar3 = func_0x00024ce4();
  if (iVar3 == 0) {
    uVar8 = 0;
  }
  else {
    puVar4 = &local_22;
    puVar6 = (undefined2 *)&stack0x0006;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    uStack_a = (uint)((local_c & 0x20) != 0);
    local_c = in_stack_0000001e;
    local_e = 0x22b2;
    local_10 = 0xcb36;
    func_0x00018eff();
    uStack_a = 0xcb4e;
    func_0x000297e6();
    uStack_a = 0xcb53;
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xcb5d;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xcb65;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xcb6a;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0xcb74;
    func_0x000299d1();
    local_18 = 0x22b2;
    local_1a = 0xcb7c;
    func_0x000297e6();
    local_18 = 0x22b2;
    local_1a = 0xcb81;
    func_0x00029d78();
    local_22 = 0xcb8b;
    func_0x000299d1();
    local_22 = 0xcb93;
    func_0x000297e6();
    local_22 = 0xcb98;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    uVar8 = 0x22b2;
    iVar5 = FUN_1def_043a(0x22b2);
    if (iVar5 == 0) {
      uStack_a = 0xcc26;
      func_0x000297e6();
      uStack_a = 0xcc2e;
      func_0x00029bb5();
      uVar7 = 0x22b2;
      uStack_a = 0xcc36;
      func_0x00029983();
      local_14 = local_1c;
    }
    else {
      uStack_a = *(undefined2 *)0x9b98;
      local_c = *(undefined2 *)0x9b96;
      local_e = *(undefined2 *)0x9b94;
      local_10 = 0x1bb4;
      local_12 = 0xcbc6;
      func_0x000297e6();
      local_18 = 0x22b2;
      local_1a = 0xcbd0;
      func_0x000299d1();
      local_18 = 0;
      local_1a = 0x22b2;
      local_1c = 0xcbd8;
      puVar4 = (undefined2 *)FUN_1def_05d1();
      local_1a = *puVar4;
      local_18 = puVar4[1];
      uStack_a = *(undefined2 *)0x9b98;
      local_c = *(undefined2 *)0x9b96;
      local_e = *(undefined2 *)0x9b94;
      local_10 = 0x1bb4;
      local_12 = 0xcc00;
      func_0x000297e6();
      local_18 = 0x22b2;
      local_1a = 0xcc0a;
      func_0x000299d1();
      local_18 = 0;
      local_1a = 0x22b2;
      uVar7 = 0x1bb4;
      local_1c = 0xcc12;
      puVar4 = (undefined2 *)func_0x0001e558();
      local_1e = *puVar4;
      local_14 = puVar4[1];
    }
    local_10 = *(undefined2 *)0xbc78;
    local_12 = in_stack_0000001e;
    local_c = 0xcc56;
    local_16 = local_1e;
    uStack_a = uVar7;
    func_0x0000daa6();
    if (param_1 < 0) {
      puVar6 = &local_1e;
      puVar4 = &local_22;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      local_22 = 0xcc87;
      func_0x0001b0b0();
    }
    else {
      puVar6 = &local_1e;
      puVar4 = &local_22;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      local_22 = 0xcc71;
      func_0x0001b198();
    }
    if (0 < param_1) {
      uStack_a = 0x18b3;
      local_c = 0xcc9b;
      func_0x000297e6();
      uStack_a = 0x22b2;
      local_c = 0xcca0;
      func_0x00029d78();
      local_12 = 0x22b2;
      local_14 = 0xccaa;
      func_0x000299d1();
      local_12 = 0x22b2;
      local_14 = 0xccb2;
      func_0x000297e6();
      local_12 = 0x22b2;
      local_14 = 0xccb7;
      func_0x00029d78();
      local_1a = 0x22b2;
      local_1c = 0xccc1;
      func_0x000299d1();
      local_1a = 0x22b2;
      local_1c = 0xccc9;
      func_0x000297e6();
      local_1a = 0x22b2;
      local_1c = 0xccce;
      func_0x00029d78();
      local_22 = 0x22b2;
      func_0x000299d1();
      local_22 = 0x22b2;
      func_0x000297e6();
      local_22 = 0x22b2;
      uVar7 = 0xcce5;
      func_0x00029d78();
      func_0x000299d1(0x22b2,uVar8,iVar3,uVar7);
      func_0x0001e18f(0x22b2);
    }
    uStack_a = 0xccfc;
    func_0x0000abfa();
    uVar8 = 1;
  }
  return uVar8;
}



/* 3ab8:2185  FUN_3ab8_2185  3168 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_2185(undefined2 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined2 *puVar10;
  undefined1 local_2d2 [10];
  undefined2 local_2c8;
  undefined2 local_2c6;
  undefined2 local_2c4;
  undefined2 local_2c2;
  int local_2c0;
  int local_2ba;
  undefined1 local_2b8 [4];
  undefined2 local_2b4;
  undefined2 local_2b2;
  undefined2 local_2b0;
  undefined2 local_2ae;
  undefined2 local_29c [12];
  undefined2 local_284 [12];
  undefined2 local_26c [12];
  int local_254;
  undefined1 local_252 [180];
  int local_19e;
  int local_19c;
  int local_190;
  int local_18e;
  int local_188;
  undefined1 local_184 [180];
  int local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined1 local_ca [158];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 auStack_20 [2];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  int local_16;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  
  FUN_21f2_0ebc();
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0xcd1f;
  func_0x00024c86();
  puStack_c = (undefined1 *)0x22b2;
  uVar8 = 0x22b2;
  uStack_e = 0xcd2f;
  func_0x00024c86();
  local_16 = 0;
  bVar3 = false;
LAB_3ab8_21b9:
  while( true ) {
    do {
      do {
        do {
          while( true ) {
            while( true ) {
              puStack_c = (undefined1 *)0x6f0;
              uStack_e = 0x40b5;
              local_10 = param_1;
              local_14 = 0xcd52;
              local_12 = uVar8;
              FUN_21f2_3454();
              *(undefined2 *)0xc1a = 1;
              *(undefined2 *)0xc2c = 1;
              puStack_c = local_2b8;
              uStack_e = param_1;
              local_10 = local_16;
              local_12 = 0x22b2;
              local_14 = 0xcd78;
              local_2ba = FUN_1def_0904();
              *(undefined2 *)0xc1a = 0;
              *(undefined2 *)0xc2c = 0;
              uVar8 = 0x1b6e;
              FUN_1885_2ec3();
              if ((*(int *)0x158 != 0) || (local_2ba == 0x14)) {
                return 0;
              }
              if (*(int *)0xc18 == 0) break;
              func_0x000297e6();
              func_0x00029d78();
              local_10 = 0x22b2;
              local_12 = 0xcdbe;
              func_0x000299d1();
              local_10 = 0x22b2;
              local_12 = 0xcdc7;
              func_0x000297e6();
              local_10 = 0x22b2;
              local_12 = 0xcdcc;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              uStack_1a = 0xcdd6;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              uVar8 = 0x3bf;
              uStack_1a = 0xcddb;
              func_0x0000507a();
            }
            if (local_2ba != -1) break;
            if (local_16 < 0) {
              for (; local_16 < 0; local_16 = local_16 + 1) {
                local_190 = *(int *)0x150;
                uVar8 = 0x18b3;
                puStack_c = (undefined1 *)0xce00;
                func_0x000190c7();
              }
              puVar7 = auStack_20;
              puVar5 = local_284;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                puVar1 = puVar7;
                puVar7 = puVar7 + 1;
                puVar10 = puVar5;
                puVar5 = puVar5 + 1;
                *puVar1 = *puVar10;
              }
              uStack_26 = 0xce27;
              uStack_24 = uVar8;
              FUN_3ab8_1f66();
            }
            if (0 < local_16) {
              if (bVar3) {
                local_190 = *(int *)0x150;
                uVar8 = 0x18b3;
                puStack_c = (undefined1 *)0xce43;
                func_0x000190c7();
              }
              if (0 < local_16) {
                puVar7 = auStack_20;
                puVar5 = local_284;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar1 = puVar7;
                  puVar7 = puVar7 + 1;
                  puVar10 = puVar5;
                  puVar5 = puVar5 + 1;
                  *puVar1 = *puVar10;
                }
                uStack_26 = 0xce67;
                uStack_24 = uVar8;
                FUN_3ab8_1f66();
              }
              if (1 < local_16) {
                puVar7 = auStack_20;
                puVar5 = &local_2b4;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar1 = puVar7;
                  puVar7 = puVar7 + 1;
                  puVar10 = puVar5;
                  puVar5 = puVar5 + 1;
                  *puVar1 = *puVar10;
                }
                uStack_26 = 0xce8c;
                uStack_24 = uVar8;
                FUN_3ab8_1f66();
              }
            }
            local_16 = 0;
          }
        } while (local_188 == 0);
        func_0x000297e6();
        func_0x00029d78();
        local_10 = 0x22b2;
        local_12 = 0xceb6;
        func_0x000299d1();
        local_10 = 0x22b2;
        local_12 = 0xcebf;
        func_0x000297e6();
        local_10 = 0x22b2;
        local_12 = 0xcec4;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xcece;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uVar8 = 0x18b3;
        uStack_1a = 0xced3;
        local_18e = func_0x0001b204();
      } while (local_18e == 0);
      puStack_c = (undefined1 *)0xcee4;
      func_0x00000398();
      uVar8 = 0x885;
      puStack_c = (undefined1 *)0xcef5;
      iVar4 = func_0x00008854();
    } while (iVar4 != 0);
    bVar3 = false;
    local_16 = iVar4;
    if (local_188 != 2) break;
    puStack_c = (undefined1 *)0xcf16;
    puVar10 = (undefined2 *)func_0x00000398();
    puVar7 = (undefined2 *)puVar10;
    puVar5 = local_284;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    puVar7 = (undefined2 *)0xc3a0;
    puVar5 = local_284;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar10;
    }
    puStack_c = (undefined1 *)param_2;
    uStack_e = 0;
    local_10 = 0xcf48;
    FUN_1885_0344();
    puStack_c = (undefined1 *)0xcf53;
    local_2c0 = func_0x00024ce4();
    puVar5 = &local_2b4;
    puVar7 = local_284;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar10;
    }
    puVar5 = local_26c;
    puVar7 = local_284;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar10;
    }
    puStack_c = local_ca;
    uStack_e = 0x22b2;
    local_10 = 0xcf86;
    FUN_1885_0344();
    FUN_28b3_0d8b();
    func_0x00029983();
    FUN_28b3_0d8b();
    func_0x00029bb5();
    func_0x00029d78();
    func_0x00029b85();
    func_0x00029c2c();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xd704;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xd70d;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xd712;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd71c;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd725;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd72a;
    func_0x00029d78();
    auStack_20[0] = 0x22b2;
    func_0x000299d1();
    auStack_20[0] = 0x22b2;
    func_0x000297e6();
    auStack_20[0] = 0x22b2;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    uStack_2a = 0xd74c;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    uStack_2a = 0xd751;
    iVar4 = FUN_1def_043a();
    if (iVar4 == 0) {
      return 0;
    }
    func_0x000297e6();
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xd773;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xd77c;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xd781;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd78b;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0xd794;
    puVar5 = (undefined2 *)FUN_1def_05d1();
    local_ce = *puVar5;
    local_cc = puVar5[1];
    local_14 = *(undefined2 *)0xc122;
    local_12 = *(undefined2 *)0xc124;
    FUN_28b3_0d8b();
    func_0x00029c2c();
    func_0x00029bb5();
    func_0x00029b85();
    func_0x00029bfc();
    uVar8 = 0x22b2;
    local_19e = FUN_28b3_0f51();
    if ((-1 < local_19e) && (local_19e < local_2c0)) {
      puStack_c = (undefined1 *)0x22b2;
      uVar8 = 0x2a75;
      uStack_e = 0xd807;
      local_254 = func_0x0002aa38();
      if (local_254 == 1) {
        local_19e = local_19e + -1;
      }
      if ((-1 < local_19e) && (local_19e < local_2c0)) {
        local_254 = 0;
        local_190 = local_19e;
        while (local_190 = local_190 + 1, local_190 <= local_2c0) {
          local_252[local_254] = *(undefined1 *)(param_2 + local_190);
          local_254 = local_254 + 1;
        }
        *(undefined1 *)(param_2 + local_19e + 1) = 0;
        local_252[local_254] = 0;
        puStack_c = (undefined1 *)0xd873;
        func_0x000190c7();
        puVar7 = auStack_20;
        puVar5 = local_284;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar10;
        }
        uStack_24 = 0x18b3;
        uStack_26 = 0xd88f;
        iVar4 = FUN_3ab8_1f66();
        if (iVar4 != 0) {
          local_16 = local_16 + -1;
        }
        puStack_c = (undefined1 *)*(undefined2 *)0x9b96;
        uStack_e = *(undefined2 *)0x9b94;
        local_10 = 0x18b3;
        local_12 = 0xd8bb;
        FUN_28b3_0d8b();
        local_10 = 0x22b2;
        local_12 = 0xd8c4;
        func_0x00029b6d();
        local_10 = 0x22b2;
        local_12 = 0xd8cd;
        func_0x0002996b();
        local_10 = 0x22b2;
        local_12 = 0xd8d2;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd8dc;
        func_0x000299d1();
        uStack_18 = 0;
        uStack_1a = 0x22b2;
        uStack_1c = 0xd8e4;
        puVar5 = (undefined2 *)FUN_1def_05d1();
        local_2b4 = *puVar5;
        local_2b2 = puVar5[1];
        puStack_c = (undefined1 *)*(undefined2 *)0x9b96;
        uStack_e = *(undefined2 *)0x9b94;
        local_10 = 0x1bb4;
        local_12 = 0xd90f;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd919;
        func_0x000299d1();
        uStack_18 = 0;
        uStack_1a = 0x22b2;
        uVar8 = 0x1bb4;
        uStack_1c = 0xd921;
        puVar5 = (undefined2 *)func_0x0001e558();
        local_2b0 = *puVar5;
        local_2ae = puVar5[1];
        puVar7 = auStack_20;
        puVar5 = &local_2b4;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar10;
        }
        uStack_24 = 0x1bb4;
        uStack_26 = 0xd94f;
        iVar4 = FUN_3ab8_1f66();
        if (iVar4 != 0) {
          local_16 = local_16 + -1;
        }
      }
    }
  }
LAB_3ab8_2859:
  puStack_c = (undefined1 *)0xd3e2;
  puVar10 = (undefined2 *)func_0x00000398();
  puVar7 = (undefined2 *)puVar10;
  puVar5 = local_284;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = *puVar1;
  }
  puVar7 = (undefined2 *)0xc3a0;
  puVar5 = local_284;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = *puVar10;
  }
  puStack_c = (undefined1 *)param_2;
  uStack_e = 0;
  local_10 = 0xd414;
  FUN_1885_0344();
  puStack_c = (undefined1 *)0xd41f;
  local_2c0 = func_0x00024ce4();
  puVar5 = local_26c;
  puVar7 = local_284;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar1 = *puVar10;
  }
  puStack_c = local_ca;
  uStack_e = 0x22b2;
  local_10 = 0xd445;
  FUN_1885_0344();
  func_0x000297e6();
  func_0x00029d78();
  local_10 = 0x22b2;
  local_12 = 0xd460;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0xd469;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0xd46e;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xd478;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xd481;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xd486;
  func_0x00029d78();
  auStack_20[0] = 0x22b2;
  func_0x000299d1();
  auStack_20[0] = 0x22b2;
  func_0x000297e6();
  auStack_20[0] = 0x22b2;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  uStack_2a = 0xd4a8;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  uVar8 = 0x1bb4;
  uStack_2a = 0xd4ad;
  iVar4 = FUN_1def_043a();
  if (iVar4 != 0) {
    func_0x000297e6();
    func_0x00029d78();
    func_0x00029c2c();
    func_0x000297e6();
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xd4e6;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xd4ef;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xd4f4;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd4fe;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0xd507;
    FUN_1def_05d1();
    uVar9 = (undefined1 *)0xffed < &uStack_18;
    func_0x000297e6();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar9) {
      local_d0 = -1;
    }
    else {
      local_d0 = 1;
    }
LAB_3ab8_2428:
    do {
      puStack_c = (undefined1 *)0xcfb4;
      func_0x000297e6();
      local_12 = 0x22b2;
      local_14 = 0xcfbe;
      func_0x000299d1();
      local_12 = 0x22b2;
      local_14 = 0xcfc7;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      uStack_1c = 0xcfd1;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      uStack_1c = 0xcfda;
      func_0x000297e6();
      uStack_24 = 0xcfe4;
      func_0x000299d1();
      uStack_24 = 0xcfed;
      func_0x000297e6();
      uStack_2a = 0x22b2;
      uStack_2c = 0xcff7;
      func_0x000299d1();
      uStack_2a = 0x22b2;
      uStack_2c = 0xcffc;
      func_0x0001e18f();
      if (local_d0 < 0) {
        puStack_c = (undefined1 *)0x1bb4;
        uStack_e = 0xd014;
        FUN_21f2_3454();
        func_0x000297e6();
        local_10 = 0x22b2;
        local_12 = 0xd029;
        func_0x000299d1();
        local_10 = 0x22b2;
        local_12 = 0xd032;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd03c;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd045;
        func_0x000297e6();
        auStack_20[0] = 0x22b2;
        func_0x000299d1();
        auStack_20[0] = 0x22b2;
        func_0x000297e6();
      }
      else {
        puStack_c = (undefined1 *)0x1bb4;
        uStack_e = 0xd068;
        FUN_21f2_3454();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = 0x22b2;
        local_12 = 0xd082;
        func_0x000299d1();
        local_10 = 0x22b2;
        local_12 = 0xd08b;
        func_0x000297e6();
        local_10 = 0x22b2;
        local_12 = 0xd090;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd09a;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd0a3;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0xd0a8;
        func_0x00029d78();
        auStack_20[0] = 0x22b2;
        func_0x000299d1();
        auStack_20[0] = 0x22b2;
        func_0x000297e6();
        auStack_20[0] = 0x22b2;
        func_0x00029d78();
      }
      uStack_28 = 0x22b2;
      uStack_2a = 0xd0ca;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      uStack_2a = 0xd0cf;
      FUN_1def_043a();
      func_0x000297e6();
      func_0x00029b85();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029d78();
      local_10 = 0x22b2;
      local_12 = 0xd10e;
      func_0x000299d1();
      local_10 = 0x22b2;
      local_12 = 0xd117;
      func_0x000297e6();
      local_10 = 0x22b2;
      local_12 = 0xd120;
      func_0x00029b85();
      local_10 = 0x22b2;
      local_12 = 0xd129;
      func_0x0002996b();
      local_10 = 0x22b2;
      local_12 = 0xd12e;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd138;
      func_0x000299d1();
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd140;
      puVar5 = (undefined2 *)FUN_1def_05d1();
      local_2c4 = *puVar5;
      local_2c2 = puVar5[1];
      func_0x000297e6();
      func_0x00029d78();
      local_10 = 0x22b2;
      local_12 = 0xd16a;
      func_0x000299d1();
      local_10 = 0x22b2;
      local_12 = 0xd173;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd17d;
      func_0x000299d1();
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd185;
      puVar5 = (undefined2 *)func_0x0001e558();
      local_2c8 = *puVar5;
      local_2c6 = puVar5[1];
      puStack_c = (undefined1 *)0xd1a3;
      func_0x000297e6();
      puStack_c = (undefined1 *)0xd1a8;
      func_0x00029d78();
      local_12 = 0x22b2;
      local_14 = 0xd1b2;
      func_0x000299d1();
      local_12 = 0x22b2;
      local_14 = 0xd1bb;
      func_0x000297e6();
      local_12 = 0x22b2;
      local_14 = 0xd1c0;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      uStack_1c = 0xd1ca;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      uStack_1c = 0xd1d3;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      uStack_1c = 0xd1d8;
      func_0x00029d78();
      uStack_24 = 0xd1e2;
      func_0x000299d1();
      uStack_24 = 0xd1eb;
      func_0x000297e6();
      uStack_24 = 0xd1f0;
      func_0x00029d78();
      uStack_2a = 0x22b2;
      uStack_2c = 0xd1fa;
      func_0x000299d1();
      uStack_2a = 0x22b2;
      uStack_2c = 0xd1ff;
      func_0x0001e18f();
      func_0x000297e6();
      func_0x00029af6();
      func_0x00029d78();
      func_0x000299b9();
      local_10 = 0x22b2;
      local_12 = 0xd228;
      func_0x000299d1();
      local_10 = 0x22b2;
      local_12 = 0xd231;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd23b;
      func_0x000299d1();
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd243;
      puVar5 = (undefined2 *)FUN_1def_05d1();
      local_2c4 = *puVar5;
      local_2c2 = puVar5[1];
      func_0x00029834();
      local_10 = 0x22b2;
      local_12 = 0xd268;
      func_0x000299d1();
      local_10 = 0x22b2;
      local_12 = 0xd271;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      uStack_1a = 0xd27b;
      func_0x000299d1();
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0xd283;
      puVar5 = (undefined2 *)func_0x0001e558();
      local_2c8 = *puVar5;
      local_2c6 = puVar5[1];
      puStack_c = (undefined1 *)0xd2a1;
      func_0x000297e6();
      puStack_c = (undefined1 *)0xd2a6;
      func_0x00029d78();
      local_12 = 0x22b2;
      local_14 = 0xd2b0;
      func_0x000299d1();
      local_12 = 0x22b2;
      local_14 = 0xd2b9;
      func_0x000297e6();
      local_12 = 0x22b2;
      local_14 = 0xd2be;
      func_0x00029d78();
      uStack_1a = 0x22b2;
      uStack_1c = 0xd2c8;
      func_0x000299d1();
      uStack_1a = 0x22b2;
      uStack_1c = 0xd2d1;
      func_0x000297e6();
      uStack_1a = 0x22b2;
      uStack_1c = 0xd2d6;
      func_0x00029d78();
      uStack_24 = 0xd2e0;
      func_0x000299d1();
      uStack_24 = 0xd2e9;
      func_0x000297e6();
      uStack_24 = 0xd2ee;
      func_0x00029d78();
      uStack_2a = 0x22b2;
      uStack_2c = 0xd2f8;
      func_0x000299d1();
      uStack_2a = 0x22b2;
      uStack_2c = 0xd2fd;
      func_0x0001e18f();
      puStack_c = local_2d2;
      uStack_e = 0x6f0;
      local_10 = 0x40d8;
      local_12 = param_1;
      local_14 = 0x1bb4;
      local_16 = -0x2ce2;
      FUN_21f2_3454();
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xd32d;
      FUN_1def_07a4();
      puStack_c = local_2b8;
      uStack_e = param_1;
      local_10 = 9999;
      local_12 = 0x1bb4;
      local_14 = 0xd34a;
      local_2ba = FUN_1def_0904();
      FUN_1885_2ec3();
      uVar8 = 0x11f2;
      func_0x00013e19();
      if (*(int *)0x158 != 0) {
        return 0;
      }
      if (local_2ba == -1) goto LAB_3ab8_21b9;
      if (local_2ba == 1) {
        local_188 = 0;
        local_d0 = -local_d0;
      }
    } while (local_188 == 0);
    func_0x000297e6();
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0xd3a2;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0xd3ab;
    func_0x000297e6();
    local_10 = 0x22b2;
    local_12 = 0xd3b0;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd3ba;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0xd3bf;
    local_19c = func_0x0001b204();
    if (local_19c == local_18e) goto LAB_3ab8_284f;
    if (local_19c < 1) goto LAB_3ab8_2428;
    puStack_c = (undefined1 *)0xd533;
    func_0x00000398();
    puStack_c = (undefined1 *)0xd544;
    iVar4 = func_0x00008854();
    if (iVar4 != 0) goto LAB_3ab8_2428;
    puStack_c = (undefined1 *)0xd555;
    puVar10 = (undefined2 *)func_0x00000398();
    puVar7 = (undefined2 *)puVar10;
    puVar5 = &local_2b4;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    puStack_c = local_252;
    uStack_e = 0;
    local_10 = 0xd579;
    FUN_1885_0344();
    puStack_c = (undefined1 *)0xd586;
    iVar4 = func_0x00024ce4();
    puVar5 = local_29c;
    puVar7 = &local_2b4;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar10;
    }
    puStack_c = local_184;
    uStack_e = 0x22b2;
    local_10 = 0xd5ab;
    FUN_1885_0344();
    if (iVar4 + local_2c0 < 0xa1) {
      if (local_188 == 1) {
        if (local_19c < local_18e) {
          puStack_c = (undefined1 *)0xd5fa;
          func_0x000190c7();
        }
        else {
          puStack_c = (undefined1 *)0xd60a;
          func_0x000190c7();
        }
        puStack_c = (undefined1 *)0xd614;
        func_0x000190c7();
        local_16 = 2;
      }
      if (local_188 == 2) {
        puStack_c = (undefined1 *)0xd62a;
        func_0x000190c7();
        local_16 = 1;
      }
      if (local_d0 < 1) {
        puStack_c = (undefined1 *)0x18b3;
        uStack_e = 0xd655;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)param_2;
        uStack_e = 0x22b2;
        local_10 = 0xd668;
        FUN_21f2_3454();
      }
      else {
        puStack_c = (undefined1 *)0x18b3;
        uStack_e = 0xd644;
        FUN_21f2_2d26();
      }
      uVar8 = 0x22b2;
      puVar7 = auStack_20;
      puVar5 = local_284;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = *puVar10;
      }
      uStack_24 = 0x22b2;
      uStack_26 = 0xd686;
      iVar4 = FUN_3ab8_1f66();
      if (iVar4 != 0) {
        bVar3 = true;
      }
    }
    else {
      if (*(int *)0xc22 < 1) {
        *(undefined2 *)0xc22 = 1;
      }
      puStack_c = (undefined1 *)0x18b3;
      uStack_e = 0xd5d4;
      FUN_1000_0599();
      uVar8 = 0x11f2;
      puStack_c = (undefined1 *)0xd5df;
      func_0x00012276();
    }
  }
  goto LAB_3ab8_21b9;
LAB_3ab8_284f:
  puStack_c = (undefined1 *)0xd3d8;
  func_0x00012276();
  goto LAB_3ab8_2859;
}



/* 3ab8:2de5  FUN_3ab8_2de5  130 bytes, 2 callers */

undefined2 __cdecl16far
FUN_3ab8_2de5(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  FUN_21f2_0ebc();
  iVar1 = func_0x0001b204(0x22b2,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (iVar1 != 0) {
    uVar2 = func_0x00000398(0x18b3,iVar1);
    iVar1 = func_0x00008854(0,*(undefined1 *)((int)uVar2 + 0x15));
    if (iVar1 == 0) {
      uVar3 = 0x885;
      func_0x0000daa6(0x885,0);
      func_0x000190c7(0x885,uVar3);
      func_0x0000b1d8(0x18b3,1);
      param_8 = 0x885;
      func_0x0000abfa();
    }
    else {
      param_8 = 0;
    }
  }
  return param_8;
}



/* 3000:d9e7  FUN_3000_d9e7  1397 bytes, 1 callers */

void __cdecl16far
FUN_3000_d9e7(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,int param_5,
             undefined1 *param_6,undefined2 param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  undefined2 *puVar10;
  int local_232;
  undefined1 local_230 [4];
  undefined2 local_22c [12];
  undefined2 local_214 [16];
  undefined2 local_1f4;
  undefined1 local_1f2 [200];
  undefined1 local_12a [200];
  int local_62;
  int local_60;
  int local_5e;
  int local_5a;
  undefined2 local_58;
  undefined2 local_56;
  int local_54;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  
  uVar8 = 0x22b2;
  FUN_21f2_0ebc();
  local_232 = 0;
  local_60 = 0;
  local_5a = 0;
  local_54 = 0;
  if (param_1 != 0) {
    puStack_c = (undefined1 *)param_7;
    puStack_e = param_6;
    iStack_10 = param_5;
    uStack_12 = param_4;
    uStack_14 = param_3;
    uStack_16 = param_2;
    uStack_18 = 0x22b2;
    uStack_1a = 0xda25;
    local_60 = func_0x0001b204();
    if (local_60 == 0) {
      return;
    }
    puStack_c = (undefined1 *)0xda38;
    func_0x00000398();
    uVar8 = 0x885;
    puStack_c = (undefined1 *)0xda49;
    iVar4 = func_0x00008854();
    if (iVar4 != 0) {
      return;
    }
  }
  do {
    if (*(int *)0x158 != 0) {
      return;
    }
LAB_3ab8_2ed8:
    do {
      if (param_1 != 0) break;
      puStack_e = (undefined1 *)0xda6e;
      puStack_c = (undefined1 *)uVar8;
      FUN_21f2_3454();
      if (local_54 == 0) {
        puStack_c = (undefined1 *)0xda7e;
        FUN_3ab8_0bed();
        puStack_c = (undefined1 *)0x4106;
        puStack_e = local_1f2;
        iStack_10 = 0x22b2;
        uStack_12 = 0xda95;
        FUN_21f2_3454();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)&SUB_0000_daa6;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xdab6;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xdac6;
        FUN_21f2_2d26();
        *(undefined2 *)0xc1a = 1;
      }
      else {
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xdade;
        FUN_21f2_3454();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xdaee;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xdafe;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xdb0e;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xdb1e;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xdb2e;
        FUN_21f2_2d26();
        puStack_c = (undefined1 *)0x22b2;
        puStack_e = (undefined1 *)0xdb3e;
        FUN_21f2_2d26();
        local_5a = 0;
        *(undefined2 *)0xc1a = 0;
      }
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xdb56;
      FUN_1def_07a4();
      *(undefined2 *)0xc2c = 1;
      puStack_c = local_230;
      puStack_e = local_1f2;
      iStack_10 = local_5a;
      uStack_12 = 0x1bb4;
      uVar8 = 0x1bb4;
      uStack_14 = 0xdb79;
      local_232 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xc1a = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_54 == 0) {
        if (local_232 == 1) {
          FUN_3ab8_0d67();
          goto LAB_3ab8_2ed8;
        }
        if (local_232 == 2) {
LAB_3ab8_302b:
          local_62 = 0;
          break;
        }
        if (local_232 == 3) {
          local_54 = 1;
          goto LAB_3ab8_2ed8;
        }
        if (local_232 == 0x14) {
          return;
        }
      }
      else {
        if (local_232 == 0x14) {
          local_54 = 0;
          goto LAB_3ab8_2ed8;
        }
        if (local_232 == 1) goto LAB_3ab8_302b;
      }
      if (*(int *)0xc18 != 0) {
        local_5a = 0;
        func_0x000297e6();
        func_0x00029d78();
        iStack_10 = 0x22b2;
        uStack_12 = 0xdc2e;
        func_0x000299d1();
        iStack_10 = 0x22b2;
        uStack_12 = 0xdc37;
        func_0x000297e6();
        iStack_10 = 0x22b2;
        uStack_12 = 0xdc3c;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xdc46;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uVar8 = 0x3bf;
        uStack_1a = 0xdc4b;
        func_0x0000507a();
        goto LAB_3ab8_2ed8;
      }
      if ((local_232 == -1) && (local_5a != 0)) {
        func_0x0000c3ca();
        local_60 = *(int *)0x150;
        puStack_c = (undefined1 *)0xdc6f;
        puVar10 = (undefined2 *)func_0x00000398();
        puVar7 = (undefined2 *)puVar10;
        puVar5 = local_22c;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
        puVar7 = (undefined2 *)0xc3a0;
        puVar5 = local_214;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar10;
        }
        puStack_c = (undefined1 *)0xdc99;
        func_0x000190c7();
        puStack_c = (undefined1 *)0x18b3;
        uVar8 = 0x22b2;
        puStack_e = (undefined1 *)0xdca9;
        func_0x00024c86();
        puVar7 = (undefined2 *)&stack0xffe0;
        puVar5 = local_214;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar10;
        }
        uStack_24 = 0x22b2;
        uStack_26 = 0xdcc7;
        FUN_3ab8_1f66();
        local_62 = 0;
        local_5a = 0;
      }
      if (local_62 == 0) goto LAB_3ab8_2ed8;
      func_0x000297e6();
      func_0x00029d78();
      iStack_10 = 0x22b2;
      uStack_12 = 0xdcf3;
      func_0x000299d1();
      iStack_10 = 0x22b2;
      uStack_12 = 0xdcfc;
      func_0x000297e6();
      iStack_10 = 0x22b2;
      uStack_12 = 0xdd01;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xdd0b;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uVar8 = 0x18b3;
      uStack_1a = 0xdd10;
      local_60 = func_0x0001b204();
      if (local_60 == 0) goto LAB_3ab8_2ed8;
      puStack_c = (undefined1 *)0xdd23;
      func_0x00000398();
      uVar8 = 0x885;
      puStack_c = (undefined1 *)0xdd34;
      iVar4 = func_0x00008854();
    } while (iVar4 != 0);
    uVar8 = 0x885;
    func_0x0000c3ca();
    local_5a = 0;
    if (local_54 == 0) {
      if (local_232 == 2) {
        puStack_c = (undefined1 *)0x885;
        puStack_e = (undefined1 *)0xdd54;
        FUN_3ab8_2185();
        goto LAB_3ab8_304e;
      }
      puStack_c = (undefined1 *)0xdd5f;
      puVar10 = (undefined2 *)func_0x00000398();
      puVar7 = (undefined2 *)puVar10;
      puVar5 = local_22c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
      puVar7 = (undefined2 *)0xc3a0;
      puVar5 = local_22c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = *puVar10;
      }
      puVar5 = local_214;
      puVar7 = local_22c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        puVar10 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar1 = *puVar10;
      }
      puStack_c = local_12a;
      puStack_e = (undefined1 *)0x0;
      iStack_10 = -0x225e;
      FUN_1885_0344();
      puStack_c = (undefined1 *)0xddad;
      func_0x000190c7();
      puStack_c = (undefined1 *)0x18b3;
      puStack_e = (undefined1 *)0xddbd;
      func_0x00024c86();
      puStack_c = (undefined1 *)0xddc9;
      puVar10 = (undefined2 *)func_0x00000398();
      puVar7 = (undefined2 *)puVar10;
      puVar5 = local_22c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      local_1f4 = *(undefined2 *)0x168;
      *(uint *)0x168 = (uint)*(byte *)0xc3b4;
      *(undefined2 *)0x16c = 1;
      uVar6 = (int)*(uint *)0x16a >> 0xf;
      *(int *)0x16a = -((*(uint *)0x16a ^ uVar6) - uVar6);
      puStack_c = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0xde0e;
      local_5e = func_0x00032054();
      if (local_5e < 0) {
        puStack_c = (undefined1 *)0x0;
        puStack_e = (undefined1 *)0xde26;
        func_0x00024c86();
      }
      uVar8 = 0x22b2;
      puStack_c = (undefined1 *)0xde32;
      iVar4 = func_0x00024ce4();
      if (iVar4 == 0) {
        bVar9 = param_1 == 0;
      }
      else {
        uVar8 = *(undefined2 *)0xbc78;
        *(int *)0xc3b0 = (int)local_1f2;
        *(undefined2 *)0xc3b2 = uVar8;
        puStack_c = local_1f2;
        puStack_e = (undefined1 *)0x22b2;
        iStack_10 = 0xde66;
        puVar5 = (undefined2 *)func_0x00018eff();
        local_58 = *puVar5;
        local_56 = puVar5[1];
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029d78();
        iStack_10 = 0x22b2;
        uStack_12 = 0xded4;
        func_0x000299d1();
        iStack_10 = 0x22b2;
        uStack_12 = 0xdedd;
        func_0x000297e6();
        iStack_10 = 0x22b2;
        uStack_12 = 0xdee2;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xdeec;
        func_0x000299d1();
        uStack_18 = *(undefined2 *)0x9bb6;
        uStack_1a = *(undefined2 *)0x9bb4;
        uStack_1c = *(undefined2 *)0x9bb2;
        uStack_1e = *(undefined2 *)0x9bb0;
        FUN_3ab8_08b3();
        func_0x0000c3ca();
        puVar7 = (undefined2 *)&stack0xffe0;
        puVar5 = (undefined2 *)0xc3a0;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar10;
        }
        uStack_24 = 0x885;
        uStack_26 = 0xdf23;
        iVar4 = FUN_3ab8_1f66();
        if (iVar4 != 0) {
          local_5a = local_5a + 1;
        }
        puVar7 = &uStack_1e;
        puVar5 = local_214;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar1 = *puVar10;
        }
        uVar8 = 0x11f2;
        uStack_24 = 0xdf46;
        func_0x00018a6b();
        *(undefined2 *)0x168 = local_1f4;
        *(undefined2 *)0x16c = 0;
        uVar6 = (int)*(uint *)0x16a >> 0xf;
        *(int *)0x16a = (*(uint *)0x16a ^ uVar6) - uVar6;
        bVar9 = param_1 == 0;
      }
    }
    else {
      pcVar3 = (code *)swi(0x3f);
      (*pcVar3)();
LAB_3ab8_304e:
      bVar9 = *(int *)0x158 == 0;
    }
    if (!bVar9) {
      return;
    }
  } while( true );
}



/* 3ab8:33ee  FUN_3ab8_33ee  5153 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_33ee(int param_1,undefined2 param_2,int param_3,undefined2 param_4,int *param_5,
             undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,
             int param_10)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  int *piVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined2 *puVar16;
  int local_11a;
  undefined1 local_116 [4];
  undefined2 local_112;
  undefined2 local_110;
  int local_10e;
  uint local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  undefined2 local_fe [12];
  undefined2 local_e6;
  undefined2 local_e4;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  byte local_d2;
  undefined1 local_d1;
  int local_ce;
  undefined2 local_cc;
  undefined2 local_ca;
  uint local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  int local_a6 [50];
  int local_42;
  undefined2 local_40;
  undefined2 local_3e;
  int local_3c;
  undefined1 *local_3a;
  undefined2 local_38;
  undefined2 uStack_32;
  int *local_30;
  undefined2 local_2e;
  undefined2 uStack_2c;
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  int local_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  int local_14;
  int *local_12;
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  
  puVar11 = (undefined1 *)0x22b2;
  FUN_21f2_0ebc();
  local_30 = (int *)0x0;
  local_bc = 0;
  local_42 = 0;
  if (param_1 == 0) {
LAB_3ab8_3455:
    if (*(char *)0x130 == '\x02') {
      local_bc = 3;
    }
LAB_3ab8_3462:
    uVar12 = 0x22b2;
    piStack_e = (int *)0xdffa;
    piStack_c = (int *)puVar11;
    FUN_21f2_3454();
    while (param_1 == 0) {
      piStack_c = (int *)0xe007;
      FUN_3ab8_0bed();
      piStack_e = (int *)0xe016;
      piStack_c = (int *)uVar12;
      FUN_21f2_3454();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe026;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe036;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe046;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe056;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe066;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe076;
      FUN_21f2_2d26();
      piStack_c = (int *)0x2;
      piStack_e = (int *)0x22b2;
      piStack_10 = (int *)0xe08a;
      func_0x00001d33();
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xc1a = 1;
      piStack_c = (int *)local_116;
      piStack_e = local_a6;
      piStack_10 = local_30;
      local_12 = (int *)0xad;
      uVar12 = 0x1bb4;
      local_14 = -0x1f4f;
      iVar6 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xc1a = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (iVar6 == 0x14) {
        return;
      }
      if (*(int *)0xc18 == 0) {
        if (iVar6 == -1) {
          piStack_c = (int *)0xe127;
          func_0x0000daa6();
          local_3a = (undefined1 *)0x0;
          if (param_10 == 0) {
            piStack_c = (int *)0xe15a;
            puVar16 = (undefined2 *)func_0x00000398();
            puVar10 = (undefined2 *)puVar16;
            puVar7 = &local_e6;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              puVar1 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar2 = *puVar1;
            }
            piVar13 = &local_1e;
            puVar7 = &local_e6;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar1 = piVar13;
              piVar13 = piVar13 + 1;
              puVar16 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar1 = *puVar16;
            }
            uStack_22 = 0;
            uStack_24 = 0xe184;
            func_0x00019593();
            local_e6 = local_ba;
            local_e4 = local_b8;
            local_e2 = local_cc;
            local_e0 = local_ca;
            local_de = local_10a;
            local_dc = local_108;
            local_da = local_112;
            local_d8 = local_110;
            piVar13 = &local_1e;
            puVar7 = &local_e6;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar1 = piVar13;
              piVar13 = piVar13 + 1;
              puVar16 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar1 = *puVar16;
            }
            uStack_22 = 0x18b3;
            uStack_24 = 0xe1e0;
            func_0x00019593();
            uVar12 = 0;
            piStack_c = (int *)0xe1eb;
            puVar16 = (undefined2 *)func_0x00000398();
            puVar10 = (undefined2 *)puVar16;
            puVar7 = &local_e6;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar2 = puVar10;
              puVar10 = puVar10 + 1;
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar1;
            }
          }
          else {
            local_38 = *(undefined2 *)0x150;
            piStack_c = (int *)0xe13f;
            func_0x000190c7();
            func_0x0000abfa();
            uVar12 = 0x885;
            piStack_c = (int *)0xe14e;
            func_0x0000b1d8();
          }
          local_30 = (int *)0x0;
        }
        if (iVar6 == 1) {
          FUN_3ab8_0d67();
        }
        if ((iVar6 == 2) && (local_bc = local_bc + 1, 3 < (int)local_bc)) {
          local_bc = 0;
        }
        if (*(int *)0x158 != 0) {
          return;
        }
        if (local_3a != (undefined1 *)0x0) {
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          local_12 = (int *)0xe251;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          local_12 = (int *)0xe25a;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          local_12 = (int *)0xe25f;
          func_0x00029d78();
          local_18 = 0x22b2;
          uStack_1a = 0xe269;
          func_0x000299d1();
          local_18 = 0x22b2;
          uVar12 = 0x18b3;
          uStack_1a = 0xe26e;
          local_3c = func_0x0001b204();
          if (local_3c != 0) {
            if (param_10 != 0) break;
            piStack_c = (int *)0xe284;
            func_0x00000398();
            uVar12 = 0x885;
            piStack_c = (int *)0xe295;
            iVar6 = func_0x00008854();
            if (iVar6 == 0) break;
            local_30 = (int *)0x0;
          }
        }
      }
      else {
        local_30 = (int *)0x0;
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xe0f4;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xe0fd;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xe102;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xe10c;
        func_0x000299d1();
        local_18 = 0x22b2;
        uVar12 = 0x3bf;
        uStack_1a = 0xe111;
        func_0x0000507a();
      }
    }
    if (param_10 != 0) goto LAB_3ab8_391a;
    piStack_c = (int *)0xe2b9;
    puVar16 = (undefined2 *)func_0x00000398();
    puVar10 = (undefined2 *)puVar16;
    puVar7 = &local_e6;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = *puVar1;
    }
    puVar10 = (undefined2 *)0xc3a0;
    puVar7 = &local_e6;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      puVar16 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar16;
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    local_12 = (int *)0xe2f3;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    local_12 = (int *)0xe2fc;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = (int *)0xe301;
    func_0x00029d78();
    local_18 = 0x22b2;
    uStack_1a = 0xe30b;
    func_0x000299d1();
    local_18 = *(undefined2 *)0x9bbe;
    uStack_1a = *(undefined2 *)0x9bbc;
    local_1c = *(undefined2 *)0x9bba;
    local_1e = *(int *)0x9bb8;
    uStack_22 = 0xe31f;
    FUN_3ab8_08b3();
    uVar14 = (undefined1 *)0xffe7 < &local_1e;
    uVar15 = &stack0x0000 == (undefined1 *)0x6;
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029b6d();
    FUN_28b3_0d8b();
    FUN_28b3_1168();
    func_0x00029983();
    FUN_28b3_0d8b();
    func_0x000297e6();
    FUN_28b3_100d();
    func_0x00029b6d();
    FUN_28b3_0d8b();
    FUN_28b3_117c();
    func_0x0002996b();
    FUN_28b3_1181();
    if ((bool)uVar14) {
LAB_3ab8_3844:
      func_0x000297e6();
      FUN_28b3_0d8b();
      FUN_28b3_1181();
      func_0x000297e6();
      FUN_28b3_0d8b();
      FUN_28b3_1181();
    }
    else {
      FUN_28b3_0d8b();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar14 && !(bool)uVar15) goto LAB_3ab8_3844;
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_0f51();
    }
    func_0x000297e6();
    FUN_28b3_0d8b();
    FUN_28b3_1181();
    if ((bool)uVar14 || (bool)uVar15) {
      func_0x000297e6();
      FUN_28b3_0d8b();
      FUN_28b3_1181();
      if ((bool)uVar14) goto LAB_3ab8_38cb;
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_0f51();
    }
    else {
LAB_3ab8_38cb:
      func_0x000297e6();
      FUN_28b3_0d8b();
      FUN_28b3_1181();
      func_0x000297e6();
      FUN_28b3_0d8b();
      FUN_28b3_1181();
    }
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0xe498;
    func_0x0000c44a();
LAB_3ab8_391a:
    bVar5 = false;
    if (((param_10 != 0) && (local_3a == (undefined1 *)0x2)) && (*(char *)0x124 != '\0')) {
      bVar5 = true;
    }
    FUN_1885_2ec3();
    if (*(int *)0x158 != 0) {
      return;
    }
    piStack_c = (int *)0xe4d0;
    puVar16 = (undefined2 *)func_0x00000398();
    puVar10 = (undefined2 *)puVar16;
    puVar7 = &local_e6;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = *puVar1;
    }
    puVar7 = local_fe;
    puVar10 = &local_e6;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      puVar16 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar1 = *puVar16;
    }
    local_30 = (int *)0x0;
LAB_3ab8_3976:
    do {
      FUN_1885_2ec3();
      if (*(int *)0x158 != 0) {
        return;
      }
      piStack_c = (int *)0xe50d;
      func_0x0000daa6();
      if (param_10 == 0) {
        piVar13 = &local_1e;
        puVar7 = local_fe;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar1 = piVar13;
          piVar13 = piVar13 + 1;
          puVar16 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar16;
        }
      }
      else {
        piVar13 = &local_1e;
        puVar7 = local_fe;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar1 = piVar13;
          piVar13 = piVar13 + 1;
          puVar16 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar16;
        }
      }
      uStack_22 = 0x885;
      uStack_24 = 0xe541;
      func_0x00019593();
      *(undefined2 *)0xc0a = 1;
LAB_3ab8_39ca:
      piStack_c = (int *)0xe552;
      func_0x0000daa6();
      *(undefined2 *)0xc24 = 1;
      piStack_c = (int *)0x0;
      piStack_e = (int *)0x0;
      piStack_10 = (int *)0x885;
      local_12 = (int *)0xe56b;
      func_0x0000a76b();
      func_0x0001bb4e();
      piStack_c = (int *)0xe57b;
      FUN_3ab8_0bed();
      piStack_c = (int *)0x1bb4;
      piStack_e = (int *)0xe58a;
      FUN_21f2_3454();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe59a;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe5aa;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe5ba;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe5ca;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe5da;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe5ea;
      FUN_21f2_2d26();
      piStack_c = (int *)0x2;
      piStack_e = (int *)0x22b2;
      piStack_10 = (int *)0xe5fe;
      func_0x00001d33();
      piStack_c = (int *)0xad;
      piStack_e = (int *)0xe60f;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe61f;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe63a;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe64a;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe65a;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe66a;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0xe679;
      FUN_1000_0599();
      uVar12 = 0x11f2;
      piStack_c = (int *)0xe685;
      func_0x00012276();
      if (*(int *)0xc22 == 0) {
        if (local_42 != 0) {
          piStack_c = (int *)0x11f2;
          piStack_e = (int *)0xe6a3;
          FUN_1000_0599();
          func_0x00010526();
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          local_12 = (int *)0xe6c2;
          func_0x000299d1();
          piStack_10 = (int *)0x4185;
          local_12 = local_a6;
          local_14 = 0x22b2;
          uStack_16 = 0xe6d0;
          FUN_21f2_3454();
          piStack_c = (int *)0x2;
          piStack_e = (int *)0x3e;
          piStack_10 = local_a6;
          local_12 = (int *)0x22b2;
          uVar12 = 0xdef;
          local_14 = -0x1913;
          FUN_1000_02b5();
        }
        *(undefined2 *)0xc22 = 1;
        piStack_c = local_a6;
        piStack_10 = (int *)0xe70b;
        piStack_e = (int *)uVar12;
        FUN_21f2_3454();
        piStack_c = (int *)0x2;
        piStack_e = (int *)0x12;
        piStack_10 = local_a6;
        local_12 = (int *)0x22b2;
        local_14 = -0x18d8;
        FUN_1000_02b5();
      }
      piStack_c = (int *)0xe733;
      func_0x0000daa6();
      piStack_c = (int *)0x1;
      piStack_e = (int *)0x7;
      piStack_10 = (int *)0xc;
      local_12 = (int *)0x264;
      local_14 = 4;
      uStack_16 = 0x254;
      local_18 = 0x885;
      uStack_1a = 0xe757;
      func_0x0000f350();
      piStack_c = (int *)*(undefined2 *)0x9b9a;
      piStack_e = (int *)*(undefined2 *)0x9b98;
      piStack_10 = (int *)*(undefined2 *)0x9b96;
      local_12 = (int *)*(undefined2 *)0x9b94;
      local_14 = *(int *)0x9b9a;
      uStack_16 = *(undefined2 *)0x9b98;
      local_18 = *(undefined2 *)0x9b96;
      uStack_1a = *(undefined2 *)0x9b94;
      local_1c = *(undefined2 *)0x9bb6;
      local_1e = *(int *)0x9bb4;
      uStack_22 = *(undefined2 *)0x9bb0;
      uStack_24 = 3;
      uStack_26 = 2;
      uStack_28 = *(undefined2 *)0x9bc6;
      local_2a = *(undefined2 *)0x9bc4;
      uStack_2c = *(undefined2 *)0x9bc2;
      local_2e = *(undefined2 *)0x9bc0;
      local_30 = (int *)0xdef;
      uStack_32 = 0xe7c1;
      FUN_28b3_0d8b();
      local_38 = 0x22b2;
      local_3a = (undefined1 *)0xe7cb;
      func_0x000299d1();
      local_14 = *(int *)0x1096 * 8 + 0x254;
      local_38 = 0x22b2;
      local_3a = (undefined1 *)0xe7e0;
      FUN_28b3_0d8b();
      local_40 = 0x22b2;
      local_42 = 0xe7ea;
      func_0x000299d1();
      local_40 = 0x22b2;
      local_42 = -0x1811;
      func_0x0000fd9f();
      func_0x0000a799();
      local_10c = (uint)local_d2;
      FUN_28b3_0d8b();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029d78();
      func_0x00029b85();
      func_0x00029c2c();
      func_0x00029983();
      piStack_c = (int *)0xbf48;
      piStack_e = (int *)0x22b2;
      piStack_10 = (int *)0xe85f;
      FUN_1885_0344();
      piStack_c = (int *)0xbf48;
      piStack_e = (int *)0x18b3;
      piStack_10 = (int *)0xe87e;
      func_0x00018eff();
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      local_12 = (int *)0xe8a6;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      local_12 = (int *)0xe8af;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      local_12 = (int *)0xe8b4;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0xe8be;
      func_0x000299d1();
      local_18 = 0x22b2;
      uStack_1a = 0xe8c7;
      func_0x000297e6();
      local_18 = 0x22b2;
      uStack_1a = 0xe8cc;
      func_0x00029d78();
      uStack_22 = 0xe8d6;
      func_0x000299d1();
      uStack_22 = 0xe8df;
      func_0x000297e6();
      uStack_22 = 0xe8e4;
      func_0x00029d78();
      uStack_28 = 0x22b2;
      local_2a = 0xe8ee;
      func_0x000299d1();
      uStack_28 = 0x22b2;
      local_2a = 0xe8f3;
      FUN_1def_043a();
      piStack_c = (int *)*(undefined2 *)0x9b96;
      piStack_e = (int *)*(undefined2 *)0x9b94;
      piStack_10 = (int *)0x1bb4;
      local_12 = (int *)0xe90e;
      func_0x000297e6();
      local_18 = 0x22b2;
      uStack_1a = 0xe918;
      func_0x000299d1();
      local_18 = 0;
      uStack_1a = 0x22b2;
      local_1c = 0xe920;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      local_de = *puVar7;
      local_dc = puVar7[1];
      local_ba = local_e6;
      local_b8 = local_e4;
      local_cc = local_e2;
      local_ca = local_e0;
      func_0x000297e6();
      func_0x0002996b();
      FUN_28b3_0ee9();
      piStack_c = (int *)*(undefined2 *)0x9b96;
      piStack_e = (int *)*(undefined2 *)0x9b94;
      piStack_10 = (int *)0x22b2;
      local_12 = (int *)0xe984;
      func_0x000297e6();
      local_18 = 0x22b2;
      uStack_1a = 0xe98e;
      func_0x000299d1();
      local_18 = 0;
      uStack_1a = 0x22b2;
      local_1c = 0xe996;
      func_0x0001e558();
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      FUN_28b3_0ee9();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029983();
      if (local_42 != 0) {
        func_0x000297e6();
        func_0x00029b6d();
        func_0x000297e6();
        func_0x00029b6d();
        FUN_28b3_117c();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xea5c;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xea61;
        FUN_28b3_1582();
        func_0x00029834();
        func_0x00029983();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        if (*(int *)0xcb6 != 0) {
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x0002996b();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xead9;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xeade;
        func_0x0002a11e();
        func_0x00029834();
        func_0x00029b6d();
        func_0x00029983();
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xeb0b;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xeb10;
        func_0x0002a10c();
        func_0x00029834();
        func_0x00029b6d();
        func_0x00029983();
      }
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      local_ce = 9999;
      uVar12 = 0x22b2;
LAB_3ab8_3fe7:
      do {
        *(undefined2 *)0xc20 = 1;
        piStack_c = (int *)local_116;
        piStack_e = &local_1e;
        piStack_10 = &local_14;
        local_14 = -0x1472;
        local_12 = (int *)uVar12;
        local_11a = func_0x00006608();
        *(undefined2 *)0xc20 = 0;
        if (((param_10 != 0) && (local_11a == -1)) && ((local_30 != (int *)0x0 && (bVar5)))) {
          piStack_c = (int *)0xebbe;
          func_0x0000daa6();
          local_3a = (undefined1 *)0x0;
          FUN_1885_2ec3();
          local_38 = *(undefined2 *)0x150;
          piStack_c = (int *)0xebd5;
          func_0x000190c7();
          func_0x0000abfa();
          piStack_c = (int *)0xebe4;
          func_0x0000b1d8();
          local_30 = (int *)((int)local_30 + -1);
          goto LAB_3ab8_4068;
        }
LAB_3ab8_414c:
        if (((*(int *)0x158 != 0) || (local_11a == -1)) || (local_11a == 0x7f)) {
          FUN_1885_2ec3();
          local_de = local_10a;
          local_dc = local_108;
          local_da = local_112;
          local_d8 = local_110;
          piStack_c = (int *)0xed11;
          func_0x0000daa6();
          piVar13 = &local_1e;
          puVar7 = local_fe;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar1 = piVar13;
            piVar13 = piVar13 + 1;
            puVar16 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar1 = *puVar16;
          }
          uStack_22 = 0x885;
          puVar11 = (undefined1 *)0x18b3;
          uStack_24 = 0xed2b;
          func_0x00019593();
          *(undefined2 *)0xc0a = 0;
          if (*(int *)0x158 != 0) {
            return;
          }
          goto LAB_3ab8_480d;
        }
        if (local_11a == 99) goto LAB_3ab8_3976;
        bVar4 = false;
        if (local_3a != (undefined1 *)0x0) {
          local_ce = -9999;
          if (*(int *)0xa5e < local_1e) {
            piStack_c = (int *)local_3a;
            piStack_e = (int *)0x3bf;
            piStack_10 = (int *)0xec2f;
            iVar6 = FUN_3ab8_0000();
            if (iVar6 == 0) goto LAB_3ab8_39ca;
            bVar4 = true;
            *(undefined1 *)0x15a = 0;
            local_11a = 0;
          }
          else {
            if (local_14 < 0x105) goto LAB_3ab8_39ca;
            if (local_14 < 0x16d) {
              local_11a = 0x31;
            }
            else if (local_14 < 0x1e5) {
              local_11a = 0x32;
            }
            else if (local_14 < 0x23d) {
              local_11a = 0x33;
            }
            else if (local_14 < 0x26d) {
              local_11a = 0x34;
            }
            else if (0x26c < local_14) goto code_r0x0003ecc6;
          }
        }
        if ((0x61ff < local_11a) && (local_11a < 0x6b01)) {
          uVar8 = local_11a + 0x9f00;
          local_d2 = (byte)((int)uVar8 >> 0xf);
          local_d2 = ((byte)((uVar8 ^ (int)uVar8 >> 0xf) - ((int)uVar8 >> 0xf) >> 8) ^ local_d2) -
                     local_d2;
          goto LAB_3ab8_3976;
        }
        if ((0x30 < local_11a) && (local_11a < 0x36)) {
          FUN_1885_2ec3();
          if (local_11a == 0x31) {
            FUN_3ab8_0d67();
          }
          if (local_11a == 0x32) {
            local_bc = local_bc + 1;
            if (3 < (int)local_bc) {
              local_bc = 0;
            }
          }
          else {
            if ((local_11a == 0x33) && (local_42 = 1 - local_42, local_42 != 0)) {
              pcVar3 = (code *)swi(0x3f);
              iVar6 = (*pcVar3)();
              if (iVar6 == -1) {
                local_42 = 0;
              }
            }
            if ((local_11a != 0x34) && (local_11a != 0x35)) goto LAB_3ab8_3976;
            piStack_c = (int *)0xedd4;
            FUN_3ab8_0c24();
          }
          goto LAB_3ab8_39ca;
        }
        if (*(char *)0x15a != '\0') goto LAB_3ab8_39ca;
      } while ((local_ce == local_14) && (uVar12 = 0x3bf, local_10e == local_1e));
      puVar10 = (undefined2 *)0xc3a0;
      puVar7 = &local_e6;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        puVar16 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar1 = *puVar16;
      }
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      local_12 = (int *)0xee24;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      local_12 = (int *)0xee2d;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      local_12 = (int *)0xee32;
      func_0x00029d78();
      local_18 = 0x22b2;
      uStack_1a = 0xee3c;
      func_0x000299d1();
      local_18 = *(undefined2 *)0x9bb6;
      uStack_1a = *(undefined2 *)0x9bb4;
      local_1c = *(undefined2 *)0x9bb2;
      local_1e = *(int *)0x9bb0;
      uStack_22 = 0xee50;
      FUN_3ab8_08b3();
      *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029983();
      piStack_c = (int *)0x1;
      piStack_e = (int *)0x22b2;
      piVar13 = (int *)0x1bb4;
      piStack_10 = (int *)0xeea1;
      FUN_1def_0338();
      if (local_bc == 1) {
        local_b6 = *(undefined2 *)0x9b40;
        local_b4 = *(undefined2 *)0x9b42;
      }
      if (local_bc == 2) {
        local_aa = *(undefined2 *)0x9b40;
        local_a8 = *(undefined2 *)0x9b42;
      }
      uVar14 = local_bc < 3;
      uVar15 = local_bc == 3;
      if ((bool)uVar15) {
        func_0x000297e6();
        func_0x00029ae7();
        func_0x000297e6();
        func_0x00029ae7();
        piVar13 = (int *)0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar14 || (bool)uVar15) {
          local_aa = *(undefined2 *)0x9b40;
          local_a8 = *(undefined2 *)0x9b42;
        }
        else {
          local_b6 = *(undefined2 *)0x9b40;
          local_b4 = *(undefined2 *)0x9b42;
        }
      }
      piStack_c = (int *)0x0;
      piStack_10 = (int *)0xef2c;
      piStack_e = piVar13;
      FUN_1def_0338();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x0002996b();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x0002996b();
      func_0x00029bb5();
      func_0x00029983();
      func_0x000297e6();
      func_0x00029bb5();
      func_0x00029983();
      if (!bVar4) {
        func_0x000297e6();
        func_0x00029bb5();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xf077;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xf07f;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xf088;
        func_0x00029bb5();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xf08d;
        func_0x00029d78();
        local_18 = 0x22b2;
        uStack_1a = 0xf097;
        func_0x000299d1();
        local_18 = 0x22b2;
        uStack_1a = 0xf0a0;
        func_0x000297e6();
        local_18 = 0x22b2;
        uStack_1a = 0xf0a5;
        func_0x00029d78();
        uStack_22 = 0xf0af;
        func_0x000299d1();
        uStack_22 = 0xf0b7;
        func_0x000297e6();
        uStack_22 = 0xf0bc;
        func_0x00029d78();
        uStack_28 = 0x22b2;
        local_2a = 0xf0c6;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        local_2a = 0xf0cb;
        FUN_1def_043a();
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xf0e0;
        func_0x000299d1();
        piStack_10 = (int *)*(undefined2 *)0x9b9a;
        local_12 = (int *)*(undefined2 *)0x9b98;
        local_14 = *(int *)0x9b96;
        uStack_16 = *(undefined2 *)0x9b94;
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = 0xf0f8;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        local_b2 = *puVar7;
        local_b0 = puVar7[1];
        func_0x000297e6();
        func_0x00029bb5();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = (int *)0xf140;
        func_0x000299d1();
        piStack_10 = (int *)*(undefined2 *)0x9b9a;
        local_12 = (int *)*(undefined2 *)0x9b98;
        local_14 = *(int *)0x9b96;
        uStack_16 = *(undefined2 *)0x9b94;
        local_18 = 0;
        uStack_1a = 0x22b2;
        local_1c = 0xf158;
        func_0x0001e558();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029bb5();
        func_0x0002996b();
        func_0x00029983();
        FUN_1885_2ec3();
        piStack_c = (int *)0xf197;
        func_0x000297e6();
        piStack_c = (int *)0xf19c;
        func_0x00029d78();
        local_12 = (int *)0x22b2;
        local_14 = -0xe5a;
        func_0x000299d1();
        local_12 = (int *)0x22b2;
        local_14 = -0xe51;
        func_0x000297e6();
        local_12 = (int *)0x22b2;
        local_14 = -0xe4c;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        local_1c = 0xf1be;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        local_1c = 0xf1c7;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        local_1c = 0xf1cc;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf1d6;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf1de;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf1e3;
        func_0x00029d78();
        local_2a = 0x22b2;
        uStack_2c = 0xf1ed;
        func_0x000299d1();
        local_2a = 0x22b2;
        uStack_2c = 0xf1f2;
        func_0x0001e18f();
        piStack_c = (int *)0xf201;
        func_0x000297e6();
        piStack_c = (int *)0xf206;
        func_0x00029d78();
        local_12 = (int *)0x22b2;
        local_14 = -0xdf0;
        func_0x000299d1();
        local_12 = (int *)0x22b2;
        local_14 = -0xde7;
        func_0x000297e6();
        local_12 = (int *)0x22b2;
        local_14 = -0xde2;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        local_1c = 0xf228;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        local_1c = 0xf231;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        local_1c = 0xf236;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf240;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf249;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf24e;
        func_0x00029d78();
        local_2a = 0x22b2;
        uStack_2c = 0xf258;
        func_0x000299d1();
        local_2a = 0x22b2;
        uStack_2c = 0xf25d;
        func_0x0001e18f();
        piStack_c = (int *)0xf26c;
        func_0x000297e6();
        piStack_c = (int *)0xf271;
        func_0x00029d78();
        local_12 = (int *)0x22b2;
        local_14 = -0xd85;
        func_0x000299d1();
        local_12 = (int *)0x22b2;
        local_14 = -0xd7c;
        func_0x000297e6();
        local_12 = (int *)0x22b2;
        local_14 = -0xd77;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        local_1c = 0xf293;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        local_1c = 0xf29c;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        local_1c = 0xf2a1;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf2ab;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf2b3;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf2b8;
        func_0x00029d78();
        local_2a = 0x22b2;
        uStack_2c = 0xf2c2;
        func_0x000299d1();
        local_2a = 0x22b2;
        uStack_2c = 0xf2c7;
        func_0x0001e18f();
        piStack_c = (int *)0xf2d6;
        func_0x000297e6();
        piStack_c = (int *)0xf2db;
        func_0x00029d78();
        local_12 = (int *)0x22b2;
        local_14 = -0xd1b;
        func_0x000299d1();
        local_12 = (int *)0x22b2;
        local_14 = -0xd12;
        func_0x000297e6();
        local_12 = (int *)0x22b2;
        local_14 = -0xd0d;
        func_0x00029d78();
        uStack_1a = 0x22b2;
        local_1c = 0xf2fd;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        local_1c = 0xf306;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        local_1c = 0xf30b;
        func_0x00029d78();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf315;
        func_0x000299d1();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf31e;
        func_0x000297e6();
        uStack_22 = 0x22b2;
        uStack_24 = 0xf323;
        func_0x00029d78();
        local_2a = 0x22b2;
        uStack_2c = 0xf32d;
        func_0x000299d1();
        local_2a = 0x22b2;
        uStack_2c = 0xf332;
        func_0x0001e18f();
        local_ce = local_14;
        local_10e = local_1e;
        uVar12 = 0x1bb4;
        goto LAB_3ab8_3fe7;
      }
      FUN_1885_2ec3();
      if (param_10 != 0) {
        piStack_c = (int *)0xefb7;
        func_0x0000daa6();
        piVar13 = &local_1e;
        puVar7 = local_fe;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar1 = piVar13;
          piVar13 = piVar13 + 1;
          puVar16 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar16;
        }
        uStack_22 = 0x885;
        uStack_24 = 0xefd1;
        func_0x00019593();
      }
      piStack_c = (int *)0xefdc;
      func_0x0000daa6();
      *(undefined2 *)0xc0a = 0;
      *(undefined1 *)0xd14 = 2;
      local_e6 = local_40;
      local_e4 = local_3e;
      local_e2 = local_ae;
      local_e0 = local_ac;
      local_de = local_aa;
      local_dc = local_a8;
      local_da = local_b6;
      local_d8 = local_b4;
      if (param_10 == 0) {
        piVar13 = &local_1e;
        puVar7 = &local_e6;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar1 = piVar13;
          piVar13 = piVar13 + 1;
          puVar16 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar16;
        }
        uStack_22 = 0x885;
        uStack_24 = 0xf35f;
        func_0x00019593();
        puVar11 = (undefined1 *)0x0;
        piStack_c = (int *)0xf36a;
        puVar16 = (undefined2 *)func_0x00000398();
        puVar10 = (undefined2 *)puVar16;
        puVar7 = &local_e6;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
      }
      else {
        local_d1 = *(undefined1 *)0xb310;
        piVar13 = &local_1e;
        puVar7 = &local_e6;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar1 = piVar13;
          piVar13 = piVar13 + 1;
          puVar16 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar16;
        }
        uStack_22 = 0xf04b;
        func_0x0001b198();
        puVar11 = (undefined1 *)0x885;
        func_0x0000abfa();
      }
      local_30 = (int *)((int)local_30 + 1);
      if (!bVar5) goto LAB_3ab8_480d;
LAB_3ab8_4068:
      puVar7 = &local_e6;
      puVar10 = local_fe;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        puVar16 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar1 = *puVar16;
      }
    } while( true );
  }
  piStack_c = (int *)param_7;
  piStack_e = (int *)param_6;
  piStack_10 = param_5;
  local_12 = (int *)param_4;
  local_14 = param_3;
  uStack_16 = param_2;
  local_18 = 0x22b2;
  uStack_1a = 0xdfa9;
  local_3c = func_0x0001b204();
  if (local_3c != 0) {
    piStack_c = (int *)0xdfbc;
    func_0x00000398();
    puVar11 = (undefined1 *)0x885;
    piStack_c = (int *)0xdfcd;
    iVar6 = func_0x00008854();
    if (iVar6 == 0) goto LAB_3ab8_3455;
  }
  return;
code_r0x0003ecc6:
  local_11a = 0x7f;
  goto LAB_3ab8_414c;
LAB_3ab8_480d:
  if (param_1 != 0) {
    return;
  }
  goto LAB_3ab8_3462;
}



/* 3ab8:481c  FUN_3ab8_481c  103 bytes, 1 callers */

void FUN_3ab8_481c(undefined2 param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5,
                  undefined1 *param_6,undefined1 *param_7,undefined2 param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  int unaff_SI;
  undefined2 *puVar8;
  int unaff_DI;
  int iVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar11;
  undefined2 *puVar12;
  uint auStack_17e [12];
  int local_166;
  undefined1 auStack_164 [4];
  undefined2 auStack_160 [4];
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined2 uStack_154;
  undefined2 uStack_152;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  byte bStack_14a;
  int iStack_146;
  undefined1 auStack_144 [282];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  uint *puStack_1a;
  undefined2 uStack_18;
  int iStack_16;
  int local_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  undefined1 *local_e;
  undefined1 *puStack_c;
  
  iVar9 = 0x22b2;
  FUN_21f2_0ebc();
  local_e = (undefined1 *)0x0;
  if (param_2 != 0) {
    local_166 = 0;
    puStack_c = (undefined1 *)param_8;
    local_e = param_7;
    puStack_10 = param_6;
    uStack_12 = param_5;
    local_14 = param_4;
    iStack_16 = param_3;
    uStack_18 = 0x22b2;
    puStack_1a = (uint *)0xf3d7;
    local_14 = func_0x0001b204();
    if (local_14 == 0) {
      FUN_3ab8_528d();
      return;
    }
    puStack_c = (undefined1 *)0xf3ea;
    func_0x00000398();
    iVar9 = 0x885;
    puStack_c = (undefined1 *)0xf3fb;
    iVar5 = func_0x00008854();
    if (iVar5 != 0) {
      FUN_3ab8_528d();
      return;
    }
  }
  do {
    do {
      do {
        while( true ) {
          if (param_2 != 0) goto LAB_3ab8_4aed;
          FUN_3ab8_0c64();
          puStack_c = auStack_144;
          puStack_10 = (undefined1 *)0xf422;
          local_e = (undefined1 *)iVar9;
          FUN_21f2_3454();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf43f;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x2;
          local_e = (undefined1 *)0x36;
          puStack_10 = auStack_144;
          uStack_12 = 0x22b2;
          local_14 = 0xf45b;
          FUN_1000_02b5();
          puStack_c = (undefined1 *)0xdef;
          local_e = (undefined1 *)0xf46c;
          FUN_21f2_3454();
          if (local_e == (undefined1 *)0x0) {
            puStack_c = (undefined1 *)0x22b2;
            local_e = (undefined1 *)0xf482;
            FUN_21f2_2d26();
          }
          if (local_e == (undefined1 *)0x1) {
            puStack_c = (undefined1 *)0x22b2;
            local_e = (undefined1 *)0xf498;
            FUN_21f2_2d26();
          }
          if (local_e == (undefined1 *)0x2) {
            puStack_c = (undefined1 *)0x22b2;
            local_e = (undefined1 *)0xf4ae;
            FUN_21f2_2d26();
          }
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf4be;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x2;
          local_e = (undefined1 *)0x41;
          puStack_10 = auStack_144;
          uStack_12 = 0x22b2;
          local_14 = 0xf4da;
          FUN_1000_02b5();
          if (*(int *)0xc22 < 1) {
            *(undefined2 *)0xc22 = 1;
          }
          puStack_c = (undefined1 *)0x41ab;
          local_e = auStack_144;
          puStack_10 = (undefined1 *)0xdef;
          uStack_12 = 0xf500;
          FUN_21f2_3454();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf511;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf521;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf531;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf541;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf551;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf561;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf571;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf581;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf591;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf5a1;
          FUN_21f2_2d26();
          puStack_c = (undefined1 *)0x22b2;
          local_e = (undefined1 *)0xf5b1;
          FUN_1def_07a4();
          *(undefined2 *)0xc1a = 1;
          *(undefined2 *)0xc2c = 1;
          puStack_c = auStack_164;
          local_e = auStack_144;
          puStack_10 = (undefined1 *)0x2710;
          uStack_12 = 0x1bb4;
          iVar9 = 0x1bb4;
          local_14 = -0xa28;
          local_166 = FUN_1def_0904();
          *(undefined2 *)0xc1a = 0;
          *(undefined2 *)0xc2c = 0;
          if (*(int *)0x158 != 0) {
            FUN_3ab8_528d();
            return;
          }
          if (local_166 == 0x14) {
            FUN_3ab8_528d();
            return;
          }
          if (*(int *)0xc18 == 0) break;
          func_0x000297e6();
          func_0x00029d78();
          puStack_10 = (undefined1 *)0x22b2;
          uStack_12 = 63000;
          func_0x000299d1();
          puStack_10 = (undefined1 *)0x22b2;
          uStack_12 = 0xf621;
          func_0x000297e6();
          puStack_10 = (undefined1 *)0x22b2;
          uStack_12 = 0xf626;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          puStack_1a = (uint *)0xf630;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          iVar9 = 0x3bf;
          puStack_1a = (uint *)0xf635;
          func_0x0000507a();
        }
        if ((0x61ff < local_166) && (local_166 < 0x6b01)) {
          uVar7 = (int)(local_166 + 0x9f00U) >> 0xf;
          *(int *)0x168 = ((int)((local_166 + 0x9f00U ^ uVar7) - uVar7) >> 8 ^ uVar7) - uVar7;
        }
        if (local_166 == 1) goto LAB_3ab8_4aed;
        if (local_166 == 2) {
          *(int *)0x1094 = 1 - *(int *)0x1094;
        }
        if ((local_166 == 3) && (local_e = local_e + 1, 2 < (int)local_e)) {
          local_e = (undefined1 *)0x0;
        }
      } while (iStack_16 == 0);
      func_0x000297e6();
      func_0x00029d78();
      puStack_10 = (undefined1 *)0x22b2;
      uStack_12 = 0xf7a0;
      func_0x000299d1();
      puStack_10 = (undefined1 *)0x22b2;
      uStack_12 = 0xf7a9;
      func_0x000297e6();
      puStack_10 = (undefined1 *)0x22b2;
      uStack_12 = 0xf7ae;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      puStack_1a = (uint *)0xf7b8;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      iVar9 = 0x18b3;
      puStack_1a = (uint *)0xf7bd;
      local_14 = func_0x0001b204();
    } while (local_14 == 0);
    puStack_c = (undefined1 *)0xf7cd;
    func_0x00000398();
    iVar9 = 0x885;
    puStack_c = (undefined1 *)0xf7de;
    iVar5 = func_0x00008854();
  } while (iVar5 != 0);
  local_166 = 0;
LAB_3ab8_4aed:
  if (local_166 == 0) {
    unaff_SI = local_14;
    unaff_DI = local_14;
  }
  if (local_166 == 1) {
    unaff_DI = 1;
    unaff_SI = *(int *)0x150;
    uVar10 = 0x885;
    bVar4 = func_0x0000db57();
    if ((bVar4 & 0xe) == 6) {
      iVar9 = 1;
    }
    if (iVar9 != 0) {
      puStack_c = (undefined1 *)0x885;
      local_e = (undefined1 *)0xf6b6;
      func_0x00024c86();
      puStack_c = (undefined1 *)0x22b2;
      local_e = (undefined1 *)0xf6c6;
      FUN_21f2_2d26();
      puStack_c = (undefined1 *)0x2;
      local_e = (undefined1 *)0x14;
      puStack_10 = auStack_144;
      uStack_12 = 0x22b2;
      uVar10 = 0xdef;
      local_14 = -0x91e;
      FUN_1000_02b5();
      if (*(int *)0xc22 == 0) {
        *(undefined2 *)0xc22 = 1;
      }
    }
    local_e = (undefined1 *)0xf700;
    puStack_c = (undefined1 *)uVar10;
    func_0x00024c86();
    puStack_c = (undefined1 *)0x22b2;
    local_e = (undefined1 *)0xf710;
    FUN_21f2_2d26();
    func_0x0000c3ca();
    puStack_c = (undefined1 *)*(int *)0x9b96;
    local_e = (undefined1 *)*(int *)0x9b94;
    puStack_10 = (undefined1 *)*(int *)0x9b9a;
    uStack_12 = *(undefined2 *)0x9b98;
    local_14 = *(int *)0x9b96;
    iStack_16 = *(int *)0x9b94;
    uStack_18 = 0;
    puStack_1a = auStack_17e;
    uStack_1c = 0xfffe;
    uStack_1e = 1;
    pcVar3 = (code *)swi(0x3f);
    iVar9 = (*pcVar3)();
    if (iVar9 == -1) {
      FUN_3ab8_4883();
      return;
    }
    if (*(int *)0x158 != 0) {
      FUN_3ab8_528d();
      return;
    }
  }
  func_0x0000c3ca();
  puStack_c = (undefined1 *)0xf804;
  func_0x0000daa6();
  iStack_146 = unaff_SI;
  do {
    iVar9 = iStack_146;
    if (iStack_146 < unaff_DI) {
      FUN_3ab8_5274();
      return;
    }
    puStack_c = (undefined1 *)0xfaff;
    uVar11 = func_0x00000398();
    iVar5 = iStack_146;
    if (*(byte *)((int)uVar11 + 0x14) < 0x5a) {
      if (local_166 == 0) {
LAB_3ab8_4faa:
        if (iVar9 != 0) {
          FUN_3ab8_4de6();
          return;
        }
        puStack_c = (undefined1 *)0xfb3c;
        puVar12 = (undefined2 *)func_0x00000398();
        puVar8 = (undefined2 *)puVar12;
        puVar6 = auStack_160;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = *puVar1;
        }
        puStack_c = auStack_144;
        local_e = (undefined1 *)0x0;
        puStack_10 = (undefined1 *)0xfb60;
        FUN_1885_0344();
        puVar8 = &uStack_1e;
        puVar6 = auStack_160;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar1 = *puVar12;
        }
        uStack_22 = 0x18b3;
        uStack_24 = 0xfb7b;
        func_0x00019593();
        uStack_14c = *(undefined1 *)0x168;
        if (local_e == (undefined1 *)0x1) {
          bStack_14a = bStack_14a & 0xdf;
        }
        if (local_e == (undefined1 *)0x2) {
          bStack_14a = bStack_14a | 0x20;
        }
        auStack_17e[0] = (uint)((bStack_14a & 0x20) != 0);
        puStack_c = auStack_144;
        local_e = (undefined1 *)0x18b3;
        puStack_10 = (undefined1 *)0xf82a;
        puVar6 = (undefined2 *)func_0x00018eff();
        uStack_12 = *puVar6;
        puStack_10 = (undefined1 *)puVar6[1];
        func_0x000297e6();
        func_0x00029d78();
        puStack_10 = (undefined1 *)0x22b2;
        uStack_12 = 0xf852;
        func_0x000299d1();
        puStack_10 = (undefined1 *)0x22b2;
        uStack_12 = 0xf85b;
        func_0x000297e6();
        puStack_10 = (undefined1 *)0x22b2;
        uStack_12 = 0xf860;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        puStack_1a = (uint *)0xf86a;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        puStack_1a = (uint *)0xf873;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (uint *)0xf878;
        func_0x00029d78();
        uStack_22 = 0xf882;
        func_0x000299d1();
        uStack_22 = 0xf88b;
        func_0x000297e6();
        uStack_22 = 0xf890;
        func_0x00029d78();
        uStack_28 = 0x22b2;
        uStack_2a = 0xf89a;
        func_0x000299d1();
        uStack_28 = 0x22b2;
        uStack_2a = 0xf89f;
        FUN_1def_043a();
        puStack_c = (undefined1 *)*(undefined2 *)0x9b96;
        local_e = (undefined1 *)*(undefined2 *)0x9b94;
        puStack_10 = (undefined1 *)0x1bb4;
        uStack_12 = 0xf8ba;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (uint *)0xf8c4;
        func_0x000299d1();
        uStack_18 = 0;
        puStack_1a = (uint *)0x22b2;
        uStack_1c = 0xf8cc;
        puVar6 = (undefined2 *)FUN_1def_05d1();
        uStack_158 = *puVar6;
        uStack_156 = puVar6[1];
        puStack_c = (undefined1 *)*(undefined2 *)0x9b96;
        local_e = (undefined1 *)*(undefined2 *)0x9b94;
        puStack_10 = (undefined1 *)0x1bb4;
        uStack_12 = 0xf8f6;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        puStack_1a = (uint *)0xf900;
        func_0x000299d1();
        uStack_18 = 0;
        puStack_1a = (uint *)0x22b2;
        uStack_1c = 0xf908;
        puVar6 = (undefined2 *)func_0x0001e558();
        uStack_154 = *puVar6;
        uStack_152 = puVar6[1];
        if (*(int *)0x1094 != 0) {
          uStack_14b = *(undefined1 *)0xb310;
        }
        puVar8 = &uStack_1e;
        puVar6 = auStack_160;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar1 = puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar1 = *puVar12;
        }
        uStack_22 = 0x1bb4;
        uStack_24 = 0xf941;
        func_0x00019593();
        puStack_c = (undefined1 *)0xf94d;
        puVar12 = (undefined2 *)func_0x00000398();
        puVar8 = (undefined2 *)puVar12;
        puVar6 = auStack_160;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        FUN_3ab8_4f69();
        return;
      }
      puStack_c = (undefined1 *)0xfb1b;
      uVar11 = func_0x00000398();
      iVar9 = iVar5;
      if ((*(byte *)((int)uVar11 + 0x16) & 2) == 2) goto LAB_3ab8_4faa;
    }
    iStack_146 = iStack_146 + -1;
  } while( true );
}



/* 3ab8:4883  FUN_3ab8_4883  1011 bytes, 1 callers */

void FUN_3ab8_4883(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar12;
  undefined2 *puVar13;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  uVar11 = 0x3ab8;
  do {
    do {
      do {
        while( true ) {
          if (*(int *)(unaff_BP + 6) != 0) goto LAB_3ab8_4aed;
          FUN_3ab8_0c64();
          iStack_6 = unaff_BP + -0x142;
          iStack_a = 0xf422;
          iStack_8 = uVar11;
          FUN_21f2_3454();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf43f;
          FUN_21f2_2d26();
          iStack_6 = 2;
          iStack_8 = 0x36;
          iStack_a = unaff_BP + -0x142;
          uStack_c = 0x22b2;
          uStack_e = 0xf45b;
          FUN_1000_02b5();
          iStack_6 = 0xdef;
          iStack_8 = 0xf46c;
          FUN_21f2_3454();
          if (*(int *)(unaff_BP + -0xc) == 0) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xf482;
            FUN_21f2_2d26();
          }
          if (*(int *)(unaff_BP + -0xc) == 1) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xf498;
            FUN_21f2_2d26();
          }
          if (*(int *)(unaff_BP + -0xc) == 2) {
            iStack_6 = 0x22b2;
            iStack_8 = 0xf4ae;
            FUN_21f2_2d26();
          }
          iStack_6 = 0x22b2;
          iStack_8 = 0xf4be;
          FUN_21f2_2d26();
          iStack_6 = 2;
          iStack_8 = 0x41;
          iStack_a = unaff_BP + -0x142;
          uStack_c = 0x22b2;
          uStack_e = 0xf4da;
          FUN_1000_02b5();
          if (*(int *)0xc22 < 1) {
            *(undefined2 *)0xc22 = 1;
          }
          iStack_6 = 0x41ab;
          iStack_8 = unaff_BP + -0x142;
          iStack_a = 0xdef;
          uStack_c = 0xf500;
          FUN_21f2_3454();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf511;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf521;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf531;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf541;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf551;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf561;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf571;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf581;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf591;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf5a1;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf5b1;
          FUN_1def_07a4();
          *(undefined2 *)0xc1a = 1;
          *(undefined2 *)0xc2c = 1;
          iStack_6 = unaff_BP + -0x162;
          iStack_8 = unaff_BP + -0x142;
          iStack_a = 10000;
          uStack_c = 0x1bb4;
          uVar11 = 0x1bb4;
          uStack_e = 0xf5d8;
          uVar5 = FUN_1def_0904();
          *(undefined2 *)(unaff_BP + -0x164) = uVar5;
          *(undefined2 *)0xc1a = 0;
          *(undefined2 *)0xc2c = 0;
          if (*(int *)0x158 != 0) {
            FUN_3ab8_528d();
            return;
          }
          if (*(int *)(unaff_BP + -0x164) == 0x14) {
            FUN_3ab8_528d();
            return;
          }
          if (*(int *)0xc18 == 0) break;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          uStack_c = 63000;
          func_0x000299d1();
          iStack_a = 0x22b2;
          uStack_c = 0xf621;
          func_0x000297e6();
          iStack_a = 0x22b2;
          uStack_c = 0xf626;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          iStack_14 = 0xf630;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          uVar11 = 0x3bf;
          iStack_14 = -0x9cb;
          func_0x0000507a();
        }
        if ((0x61ff < *(int *)(unaff_BP + -0x164)) && (*(int *)(unaff_BP + -0x164) < 0x6b01)) {
          uVar6 = *(int *)(unaff_BP + -0x164) + 0x9f00;
          uVar9 = (int)uVar6 >> 0xf;
          *(int *)0x168 = ((int)((uVar6 ^ uVar9) - uVar9) >> 8 ^ uVar9) - uVar9;
        }
        if (*(int *)(unaff_BP + -0x164) == 1) goto LAB_3ab8_4aed;
        if (*(int *)(unaff_BP + -0x164) == 2) {
          *(int *)0x1094 = 1 - *(int *)0x1094;
        }
        if ((*(int *)(unaff_BP + -0x164) == 3) &&
           (*(int *)(unaff_BP + -0xc) = *(int *)(unaff_BP + -0xc) + 1, 2 < *(int *)(unaff_BP + -0xc)
           )) {
          *(undefined2 *)(unaff_BP + -0xc) = 0;
        }
      } while (*(int *)(unaff_BP + -0x14) == 0);
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      uStack_c = 0xf7a0;
      func_0x000299d1();
      iStack_a = 0x22b2;
      uStack_c = 0xf7a9;
      func_0x000297e6();
      iStack_a = 0x22b2;
      uStack_c = 0xf7ae;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      iStack_14 = 0xf7b8;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uVar11 = 0x18b3;
      iStack_14 = -0x843;
      iVar8 = func_0x0001b204();
      *(int *)(unaff_BP + -0x12) = iVar8;
    } while (iVar8 == 0);
    iStack_6 = 0xf7cd;
    func_0x00000398();
    uVar11 = 0x885;
    iStack_6 = -0x822;
    iVar8 = func_0x00008854();
  } while (iVar8 != 0);
  *(undefined2 *)(unaff_BP + -0x164) = 0;
LAB_3ab8_4aed:
  if (*(int *)(unaff_BP + -0x164) == 0) {
    uVar11 = *(undefined2 *)(unaff_BP + -0x12);
    *(undefined2 *)(unaff_BP + -2) = uVar11;
    *(undefined2 *)(unaff_BP + -4) = uVar11;
  }
  if (*(int *)(unaff_BP + -0x164) == 1) {
    *(undefined2 *)(unaff_BP + -2) = 1;
    *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)0x150;
    uVar11 = 0x885;
    bVar4 = func_0x0000db57();
    if ((bVar4 & 0xe) == 6) {
      *(undefined2 *)(unaff_BP + -6) = 1;
    }
    if (*(int *)(unaff_BP + -6) != 0) {
      iStack_6 = 0x885;
      iStack_8 = 0xf6b6;
      func_0x00024c86();
      iStack_6 = 0x22b2;
      iStack_8 = 0xf6c6;
      FUN_21f2_2d26();
      iStack_6 = 2;
      iStack_8 = 0x14;
      iStack_a = unaff_BP + -0x142;
      uStack_c = 0x22b2;
      uVar11 = 0xdef;
      uStack_e = 0xf6e2;
      FUN_1000_02b5();
      if (*(int *)0xc22 == 0) {
        *(undefined2 *)0xc22 = 1;
      }
    }
    iStack_8 = 0xf700;
    iStack_6 = uVar11;
    func_0x00024c86();
    iStack_6 = 0x22b2;
    iStack_8 = 0xf710;
    FUN_21f2_2d26();
    func_0x0000c3ca();
    iStack_6 = *(int *)0x9b96;
    iStack_8 = *(int *)0x9b94;
    iStack_a = *(int *)0x9b9a;
    uStack_c = *(undefined2 *)0x9b98;
    uStack_e = *(undefined2 *)0x9b96;
    uStack_10 = *(undefined2 *)0x9b94;
    uStack_12 = 0;
    iStack_14 = unaff_BP + -0x17c;
    uStack_16 = 0xfffe;
    uStack_18 = 1;
    pcVar3 = (code *)swi(0x3f);
    iVar8 = (*pcVar3)();
    if (iVar8 == -1) {
      FUN_3ab8_4883();
      return;
    }
    if (*(int *)0x158 != 0) {
      FUN_3ab8_528d();
      return;
    }
  }
  func_0x0000c3ca();
  iStack_6 = 0xf804;
  func_0x0000daa6();
  *(undefined2 *)(unaff_BP + -0x144) = *(undefined2 *)(unaff_BP + -4);
  do {
    if (*(int *)(unaff_BP + -0x144) < *(int *)(unaff_BP + -2)) {
      FUN_3ab8_5274();
      return;
    }
    iStack_6 = 0xfaff;
    uVar12 = func_0x00000398();
    if (*(byte *)((int)uVar12 + 0x14) < 0x5a) {
      if (*(int *)(unaff_BP + -0x164) == 0) {
LAB_3ab8_4faa:
        if (*(int *)(unaff_BP + -6) != 0) {
          FUN_3ab8_4de6();
          return;
        }
        iStack_6 = 0xfb3c;
        puVar13 = (undefined2 *)func_0x00000398();
        puVar10 = (undefined2 *)puVar13;
        puVar7 = (undefined2 *)(unaff_BP + -0x15e);
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar2 = *puVar1;
        }
        iStack_6 = unaff_BP + -0x142;
        iStack_8 = 0;
        iStack_a = 0xfb60;
        FUN_1885_0344();
        puVar10 = &uStack_18;
        puVar7 = (undefined2 *)(unaff_BP + -0x15e);
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar1 = puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar13;
        }
        func_0x00019593(0x18b3,0);
        *(undefined1 *)(unaff_BP + -0x14a) = *(undefined1 *)0x168;
        if (*(int *)(unaff_BP + -0xc) == 1) {
          *(byte *)(unaff_BP + -0x148) = *(byte *)(unaff_BP + -0x148) & 0xdf;
        }
        if (*(int *)(unaff_BP + -0xc) == 2) {
          *(byte *)(unaff_BP + -0x148) = *(byte *)(unaff_BP + -0x148) | 0x20;
        }
        if ((*(byte *)(unaff_BP + -0x148) & 0x20) == 0) {
          *(undefined2 *)(unaff_BP + -0x17c) = 0;
        }
        else {
          *(undefined2 *)(unaff_BP + -0x17c) = 1;
        }
        iStack_6 = unaff_BP + -0x142;
        iStack_8 = 0x18b3;
        iStack_a = 0xf82a;
        puVar7 = (undefined2 *)func_0x00018eff();
        uVar11 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x10) = *puVar7;
        *(undefined2 *)(unaff_BP + -0xe) = uVar11;
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        uStack_c = 0xf852;
        func_0x000299d1();
        iStack_a = 0x22b2;
        uStack_c = 0xf85b;
        func_0x000297e6();
        iStack_a = 0x22b2;
        uStack_c = 0xf860;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        iStack_14 = 0xf86a;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        iStack_14 = 0xf873;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        iStack_14 = 0xf878;
        func_0x00029d78();
        func_0x000299d1(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        func_0x000299d1(0x22b2);
        FUN_1def_043a(0x22b2);
        iStack_6 = *(undefined2 *)0x9b96;
        iStack_8 = *(undefined2 *)0x9b94;
        iStack_a = 0x1bb4;
        uStack_c = 0xf8ba;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        iStack_14 = 0xf8c4;
        func_0x000299d1();
        uStack_12 = 0;
        iStack_14 = 0x22b2;
        uStack_16 = 0xf8cc;
        puVar7 = (undefined2 *)FUN_1def_05d1();
        uVar11 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x156) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x154) = uVar11;
        iStack_6 = *(undefined2 *)0x9b96;
        iStack_8 = *(undefined2 *)0x9b94;
        iStack_a = 0x1bb4;
        uStack_c = 0xf8f6;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        iStack_14 = 0xf900;
        func_0x000299d1();
        uStack_12 = 0;
        iStack_14 = 0x22b2;
        uStack_16 = 0xf908;
        puVar7 = (undefined2 *)func_0x0001e558();
        uVar11 = puVar7[1];
        *(undefined2 *)(unaff_BP + -0x152) = *puVar7;
        *(undefined2 *)(unaff_BP + -0x150) = uVar11;
        if (*(int *)0x1094 != 0) {
          *(undefined1 *)(unaff_BP + -0x149) = *(undefined1 *)0xb310;
        }
        puVar10 = &uStack_18;
        puVar7 = (undefined2 *)(unaff_BP + -0x15e);
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar1 = puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar1 = *puVar13;
        }
        func_0x00019593(0x1bb4,1);
        iStack_6 = 0xf94d;
        uVar12 = func_0x00000398();
        *(undefined2 *)(unaff_BP + -0x182) = (int)uVar12;
        *(undefined2 *)(unaff_BP + -0x180) = (int)((ulong)uVar12 >> 0x10);
        puVar7 = (undefined2 *)(unaff_BP + -0x15e);
        puVar13 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x182);
        puVar10 = (undefined2 *)puVar13;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar2 = puVar10;
          puVar10 = puVar10 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
        FUN_3ab8_4f69();
        return;
      }
      iStack_6 = 0xfb1b;
      uVar12 = func_0x00000398();
      if ((*(byte *)((int)uVar12 + 0x16) & 2) == 2) goto LAB_3ab8_4faa;
    }
    *(int *)(unaff_BP + -0x144) = *(int *)(unaff_BP + -0x144) + -1;
  } while( true );
}



/* 3ab8:4c91  FUN_3ab8_4c91  341 bytes, 1 callers */

void FUN_3ab8_4c91(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  char in_AL;
  undefined2 *puVar5;
  int iVar6;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar8;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  undefined2 uStack_4;
  uint uStack_2;
  
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  uStack_2 = (uint)*(byte *)(unaff_BP + -0x14a);
  uStack_4 = *(undefined2 *)(unaff_BP + -0x17c);
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0x3ab8;
  uStack_a = 0xf82a;
  puVar5 = (undefined2 *)func_0x00018eff();
  uVar4 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x10) = *puVar5;
  *(undefined2 *)(unaff_BP + -0xe) = uVar4;
  uStack_2 = 0x18b3;
  uStack_4 = 0xf843;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xf848;
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xf852;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xf85b;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xf860;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf86a;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf873;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf878;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_1def_043a(0x22b2);
  uStack_2 = *(undefined2 *)0x9b9a;
  uStack_4 = *(undefined2 *)0x9b98;
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  uStack_a = 0x1bb4;
  uStack_c = 0xf8ba;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf8c4;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf8cc;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  uVar4 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x156) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x154) = uVar4;
  uStack_2 = *(undefined2 *)0x9b9a;
  uStack_4 = *(undefined2 *)0x9b98;
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  uStack_a = 0x1bb4;
  uStack_c = 0xf8f6;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf900;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf908;
  puVar5 = (undefined2 *)func_0x0001e558();
  uVar4 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x152) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x150) = uVar4;
  if (*(int *)0x1094 != 0) {
    *(undefined1 *)(unaff_BP + -0x149) = *(undefined1 *)0xb310;
  }
  puVar7 = &uStack_18;
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  func_0x00019593(0x1bb4,1);
  uStack_2 = *(undefined2 *)(unaff_BP + -0x144);
  uStack_4 = 0x18b3;
  iStack_6 = 0xf94d;
  uVar8 = func_0x00000398();
  *(undefined2 *)(unaff_BP + -0x182) = (int)uVar8;
  *(undefined2 *)(unaff_BP + -0x180) = (int)((ulong)uVar8 >> 0x10);
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  puVar1 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x182);
  puVar7 = (undefined2 *)puVar1;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  FUN_3ab8_4f69();
  return;
}



/* 3ab8:4de6  FUN_3ab8_4de6  387 bytes, 1 callers */

void FUN_3ab8_4de6(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  int iVar7;
  int unaff_BP;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar9;
  undefined4 uVar10;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  
  iStack_6 = 0xf96f;
  puVar9 = (undefined2 *)func_0x00000398();
  puVar8 = (undefined2 *)puVar9;
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0;
  uStack_a = 0xf993;
  FUN_1885_0344();
  if ((*(byte *)(unaff_BP + -0x148) & 0x20) == 0) {
    *(undefined2 *)(unaff_BP + -0x17c) = 0;
  }
  else {
    *(undefined2 *)(unaff_BP + -0x17c) = 1;
  }
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0x18b3;
  uStack_a = 0xf9c0;
  puVar5 = (undefined2 *)func_0x00018eff();
  uVar6 = puVar5[1];
  *(undefined2 *)(unaff_BP + -10) = *puVar5;
  *(undefined2 *)(unaff_BP + -8) = uVar6;
  iStack_6 = 0xf9da;
  uVar6 = func_0x00024ce4();
  *(undefined2 *)(unaff_BP + -0x17e) = uVar6;
  *(undefined2 *)(unaff_BP + -0x146) = 0;
  *(undefined2 *)(unaff_BP + -0x16) = 0;
  iStack_6 = 0x22b2;
  while (*(int *)(unaff_BP + -0x16) < *(int *)(unaff_BP + -0x17e)) {
    uStack_8 = 0xfa2c;
    iVar7 = func_0x0002aa38();
    if (iVar7 == 1) {
      iVar7 = *(int *)(unaff_BP + -0x16);
      cVar3 = *(char *)(unaff_BP + iVar7 + -0x141);
      *(char *)(unaff_BP + -0x184) = cVar3;
      *(undefined1 *)(unaff_BP + -0x182) = 0;
      if (*(char *)(unaff_BP + iVar7 + -0x142) == -0x7f) {
        if (cVar3 == '@') {
          *(undefined1 *)(unaff_BP + -0x182) = 0x20;
        }
        if (*(char *)(unaff_BP + -0x184) == 'C') {
          *(undefined1 *)(unaff_BP + -0x182) = 0x2c;
        }
        if (*(char *)(unaff_BP + -0x184) == 'D') {
          *(undefined1 *)(unaff_BP + -0x182) = 0x2e;
        }
      }
      iVar7 = *(int *)(unaff_BP + -0x16);
      if (((*(char *)(unaff_BP + iVar7 + -0x142) == -0x7e) && (0x4e < *(byte *)(unaff_BP + -0x184)))
         && (*(byte *)(unaff_BP + -0x184) < 0x59)) {
        *(char *)(unaff_BP + -0x182) = *(char *)(unaff_BP + -0x184) + -0x1f;
      }
      if (*(char *)(unaff_BP + -0x182) == '\0') {
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x146) + -0x142) =
             *(undefined1 *)(unaff_BP + iVar7 + -0x142);
        uVar4 = *(undefined1 *)(unaff_BP + -0x184);
        *(int *)(unaff_BP + -0x146) = *(int *)(unaff_BP + -0x146) + 1;
        iVar7 = *(int *)(unaff_BP + -0x146);
        *(undefined1 *)(unaff_BP + iVar7 + -0x142) = uVar4;
        *(int *)(unaff_BP + -0x146) = iVar7 + 1;
      }
      else {
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x146) + -0x142) =
             *(undefined1 *)(unaff_BP + -0x182);
        *(int *)(unaff_BP + -0x146) = *(int *)(unaff_BP + -0x146) + 1;
      }
      *(int *)(unaff_BP + -0x16) = *(int *)(unaff_BP + -0x16) + 1;
    }
    else {
      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x146) + -0x142) =
           *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x16) + -0x142);
      *(int *)(unaff_BP + -0x146) = *(int *)(unaff_BP + -0x146) + 1;
    }
    *(int *)(unaff_BP + -0x16) = *(int *)(unaff_BP + -0x16) + 1;
    iStack_6 = 0x2a75;
  }
  *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x146) + -0x142) = 0;
  iStack_6 = 0xfacc;
  func_0x0000daa6();
  iStack_6 = 0xfad6;
  func_0x000190c7();
  iStack_6 = 0xfae1;
  iVar7 = func_0x00024ce4();
  if (iVar7 != 0) {
    FUN_3ab8_502e();
    return;
  }
  do {
    do {
      *(int *)(unaff_BP + -0x144) = *(int *)(unaff_BP + -0x144) + -1;
      if (*(int *)(unaff_BP + -0x144) < *(int *)(unaff_BP + -2)) {
        FUN_3ab8_5274();
        return;
      }
      iStack_6 = 0xfaff;
      uVar10 = func_0x00000398();
    } while (0x59 < *(byte *)((int)uVar10 + 0x14));
    if (*(int *)(unaff_BP + -0x164) == 0) break;
    iStack_6 = 0xfb1b;
    uVar10 = func_0x00000398();
  } while ((*(byte *)((int)uVar10 + 0x16) & 2) != 2);
  if (*(int *)(unaff_BP + -6) != 0) {
    FUN_3ab8_4de6();
    return;
  }
  iStack_6 = 0xfb3c;
  puVar9 = (undefined2 *)func_0x00000398();
  puVar8 = (undefined2 *)puVar9;
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0;
  uStack_a = 0xfb60;
  FUN_1885_0344();
  puVar8 = &uStack_18;
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = *puVar9;
  }
  func_0x00019593(0x18b3,0);
  *(undefined1 *)(unaff_BP + -0x14a) = *(undefined1 *)0x168;
  if (*(int *)(unaff_BP + -0xc) == 1) {
    *(byte *)(unaff_BP + -0x148) = *(byte *)(unaff_BP + -0x148) & 0xdf;
  }
  if (*(int *)(unaff_BP + -0xc) == 2) {
    *(byte *)(unaff_BP + -0x148) = *(byte *)(unaff_BP + -0x148) | 0x20;
  }
  if ((*(byte *)(unaff_BP + -0x148) & 0x20) == 0) {
    *(undefined2 *)(unaff_BP + -0x17c) = 0;
  }
  else {
    *(undefined2 *)(unaff_BP + -0x17c) = 1;
  }
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0x18b3;
  uStack_a = 0xf82a;
  puVar5 = (undefined2 *)func_0x00018eff();
  uVar6 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x10) = *puVar5;
  *(undefined2 *)(unaff_BP + -0xe) = uVar6;
  func_0x000297e6();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xf852;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xf85b;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xf860;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf86a;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf873;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf878;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_1def_043a(0x22b2);
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  uStack_a = 0x1bb4;
  uStack_c = 0xf8ba;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf8c4;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf8cc;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  uVar6 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x156) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x154) = uVar6;
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  uStack_a = 0x1bb4;
  uStack_c = 0xf8f6;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf900;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf908;
  puVar5 = (undefined2 *)func_0x0001e558();
  uVar6 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x152) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x150) = uVar6;
  if (*(int *)0x1094 != 0) {
    *(undefined1 *)(unaff_BP + -0x149) = *(undefined1 *)0xb310;
  }
  puVar8 = &uStack_18;
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = *puVar9;
  }
  func_0x00019593(0x1bb4,1);
  iStack_6 = 0xf94d;
  uVar10 = func_0x00000398();
  *(undefined2 *)(unaff_BP + -0x182) = (int)uVar10;
  *(undefined2 *)(unaff_BP + -0x180) = (int)((ulong)uVar10 >> 0x10);
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  puVar9 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x182);
  puVar8 = (undefined2 *)puVar9;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  FUN_3ab8_4f69();
  return;
}



/* 3ab8:4f69  FUN_3ab8_4f69  84 bytes, 2 callers */

void FUN_3ab8_4f69(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  
  do {
    do {
      *(int *)(unaff_BP + -0x144) = *(int *)(unaff_BP + -0x144) + -1;
      if (*(int *)(unaff_BP + -0x144) < *(int *)(unaff_BP + -2)) {
        FUN_3ab8_5274();
        return;
      }
      iStack_6 = 0xfaff;
      uVar7 = func_0x00000398();
    } while (0x59 < *(byte *)((int)uVar7 + 0x14));
    if (*(int *)(unaff_BP + -0x164) == 0) break;
    iStack_6 = 0xfb1b;
    uVar7 = func_0x00000398();
  } while ((*(byte *)((int)uVar7 + 0x16) & 2) != 2);
  if (*(int *)(unaff_BP + -6) != 0) {
    FUN_3ab8_4de6();
    return;
  }
  iStack_6 = 0xfb3c;
  puVar8 = (undefined2 *)func_0x00000398();
  puVar6 = (undefined2 *)puVar8;
  puVar4 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0;
  uStack_a = 0xfb60;
  FUN_1885_0344();
  puVar6 = &uStack_18;
  puVar4 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar8;
  }
  func_0x00019593(0x18b3,0);
  *(undefined1 *)(unaff_BP + -0x14a) = *(undefined1 *)0x168;
  if (*(int *)(unaff_BP + -0xc) == 1) {
    *(byte *)(unaff_BP + -0x148) = *(byte *)(unaff_BP + -0x148) & 0xdf;
  }
  if (*(int *)(unaff_BP + -0xc) == 2) {
    *(byte *)(unaff_BP + -0x148) = *(byte *)(unaff_BP + -0x148) | 0x20;
  }
  if ((*(byte *)(unaff_BP + -0x148) & 0x20) == 0) {
    *(undefined2 *)(unaff_BP + -0x17c) = 0;
  }
  else {
    *(undefined2 *)(unaff_BP + -0x17c) = 1;
  }
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0x18b3;
  uStack_a = 0xf82a;
  puVar4 = (undefined2 *)func_0x00018eff();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x10) = *puVar4;
  *(undefined2 *)(unaff_BP + -0xe) = uVar3;
  func_0x000297e6();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xf852;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xf85b;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xf860;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf86a;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf873;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf878;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_1def_043a(0x22b2);
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  uStack_a = 0x1bb4;
  uStack_c = 0xf8ba;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf8c4;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf8cc;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x156) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x154) = uVar3;
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  uStack_a = 0x1bb4;
  uStack_c = 0xf8f6;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf900;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf908;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x152) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x150) = uVar3;
  if (*(int *)0x1094 != 0) {
    *(undefined1 *)(unaff_BP + -0x149) = *(undefined1 *)0xb310;
  }
  puVar6 = &uStack_18;
  puVar4 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar8;
  }
  func_0x00019593(0x1bb4,1);
  iStack_6 = 0xf94d;
  uVar7 = func_0x00000398();
  *(undefined2 *)(unaff_BP + -0x182) = (int)uVar7;
  *(undefined2 *)(unaff_BP + -0x180) = (int)((ulong)uVar7 >> 0x10);
  puVar4 = (undefined2 *)(unaff_BP + -0x15e);
  puVar8 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x182);
  puVar6 = (undefined2 *)puVar8;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  FUN_3ab8_4f69();
  return;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  113 bytes, 2 callers */

void FUN_3ab8_4fbd(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 *in_AX;
  int iVar6;
  undefined2 in_DX;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar8;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = in_AX;
    in_AX = in_AX + 1;
    *puVar3 = *puVar1;
  }
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0x3ab8;
  uStack_a = 0xfb60;
  FUN_1885_0344();
  puVar7 = &uStack_18;
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar1;
  }
  func_0x00019593(0x18b3,0);
  *(undefined1 *)(unaff_BP + -0x14a) = *(undefined1 *)0x168;
  if (*(int *)(unaff_BP + -0xc) == 1) {
    *(byte *)(unaff_BP + -0x148) = *(byte *)(unaff_BP + -0x148) & 0xdf;
  }
  if (*(int *)(unaff_BP + -0xc) == 2) {
    *(byte *)(unaff_BP + -0x148) = *(byte *)(unaff_BP + -0x148) | 0x20;
  }
  if ((*(byte *)(unaff_BP + -0x148) & 0x20) == 0) {
    *(undefined2 *)(unaff_BP + -0x17c) = 0;
  }
  else {
    *(undefined2 *)(unaff_BP + -0x17c) = 1;
  }
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0x18b3;
  uStack_a = 0xf82a;
  puVar5 = (undefined2 *)func_0x00018eff();
  uVar4 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x10) = *puVar5;
  *(undefined2 *)(unaff_BP + -0xe) = uVar4;
  func_0x000297e6();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xf852;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xf85b;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xf860;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf86a;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf873;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf878;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_1def_043a(0x22b2);
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  uStack_a = 0x1bb4;
  uStack_c = 0xf8ba;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf8c4;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf8cc;
  puVar5 = (undefined2 *)FUN_1def_05d1();
  uVar4 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x156) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x154) = uVar4;
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  uStack_a = 0x1bb4;
  uStack_c = 0xf8f6;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xf900;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf908;
  puVar5 = (undefined2 *)func_0x0001e558();
  uVar4 = puVar5[1];
  *(undefined2 *)(unaff_BP + -0x152) = *puVar5;
  *(undefined2 *)(unaff_BP + -0x150) = uVar4;
  if (*(int *)0x1094 != 0) {
    *(undefined1 *)(unaff_BP + -0x149) = *(undefined1 *)0xb310;
  }
  puVar7 = &uStack_18;
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar1;
  }
  func_0x00019593(0x1bb4,1);
  iStack_6 = 0xf94d;
  uVar8 = func_0x00000398();
  *(undefined2 *)(unaff_BP + -0x182) = (int)uVar8;
  *(undefined2 *)(unaff_BP + -0x180) = (int)((ulong)uVar8 >> 0x10);
  puVar5 = (undefined2 *)(unaff_BP + -0x15e);
  puVar1 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x182);
  puVar7 = (undefined2 *)puVar1;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar3 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar3;
  }
  FUN_3ab8_4f69();
  return;
}



/* 3ab8:502e  FUN_3ab8_502e  91 bytes, 1 callers */

void FUN_3ab8_502e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uStack_18;
  undefined1 *puStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  undefined2 uStack_8;
  int iStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0xfbb7;
  func_0x000297e6();
  uStack_4 = 0xfbbc;
  func_0x00029d78();
  iStack_a = 0x22b2;
  uStack_c = 0xfbc6;
  func_0x000299d1();
  iStack_a = 0x22b2;
  uStack_c = 0xfbcf;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfbd4;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfbde;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfbe7;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfbec;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_1def_043a(0x22b2);
  uStack_4 = *(undefined2 *)(unaff_BP + -0x17c);
  iStack_6 = unaff_BP + -0x142;
  uStack_8 = 0x1bb4;
  uVar7 = 0x18b3;
  iStack_a = 0xfc2b;
  puVar4 = (undefined2 *)func_0x00018eff();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x10) = *puVar4;
  *(undefined2 *)(unaff_BP + -0xe) = uVar3;
  if (*(int *)0x1096 == 0) {
    uVar3 = *(undefined2 *)0x9b42;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x9b40;
    *(undefined2 *)(unaff_BP + -8) = uVar3;
  }
  if (*(int *)0x1096 == 1) {
    uStack_4 = 0xfc5f;
    func_0x000297e6();
    uStack_4 = 0xfc67;
    func_0x00029b6d();
    uStack_4 = 0xfc6f;
    func_0x000297e6();
    uStack_4 = 0xfc78;
    func_0x00029b6d();
    uStack_4 = 0xfc7d;
    FUN_28b3_117c();
    uVar7 = 0x22b2;
    uStack_4 = 0xfc85;
    func_0x00029983();
  }
  if (*(int *)0x1096 == 2) {
    uStack_4 = 0xfc94;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    iStack_6 = 0xfc9d;
    func_0x00029b55();
    uVar7 = 0x22b2;
    uStack_4 = 0xfca3;
    func_0x00029983();
  }
  uStack_4 = *(undefined2 *)0x9b98;
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  uStack_c = 0xfcbb;
  iStack_a = uVar7;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfcc0;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfcca;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0xfcd2;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x15e) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x15c) = uVar3;
  uStack_4 = *(undefined2 *)0x9b98;
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  iStack_a = 0x1bb4;
  uStack_c = 0xfcfc;
  func_0x000297e6();
  iStack_a = 0x22b2;
  uStack_c = 0xfd01;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfd0b;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0xfd13;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x15a) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x158) = uVar3;
  uStack_4 = *(undefined2 *)0x9b98;
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  iStack_a = 0x1bb4;
  uStack_c = 0xfd3d;
  func_0x000297e6();
  iStack_a = unaff_BP + -0x10;
  uStack_c = 0x22b2;
  uStack_e = 0xfd46;
  func_0x00029bb5();
  iStack_a = 0x22b2;
  uStack_c = 0xfd4c;
  func_0x0002996b();
  iStack_a = 0x22b2;
  uStack_c = 0xfd51;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfd5b;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)0xfd63;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x156) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x154) = uVar3;
  uStack_4 = *(undefined2 *)0x9b98;
  iStack_6 = *(undefined2 *)0x9b96;
  uStack_8 = *(undefined2 *)0x9b94;
  iStack_a = 0x1bb4;
  uStack_c = 0xfd8d;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xfd97;
  func_0x000299d1();
  uStack_12 = 0;
  uStack_14 = 0x22b2;
  puStack_16 = (undefined1 *)&SUB_0000_fd9f;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x152) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x150) = uVar3;
  puVar6 = (undefined2 *)0xc3a0;
  puVar4 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uVar3 = *(undefined2 *)0xbc78;
  *(int *)0xc3b0 = unaff_BP + -0x142;
  *(undefined2 *)0xc3b2 = uVar3;
  uStack_4 = 0x1bb4;
  iStack_6 = 0xfdd9;
  func_0x0000daa6();
  puVar6 = &uStack_18;
  puVar4 = (undefined2 *)0xc3a0;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  func_0x0001b198(0x885);
  FUN_3ab8_4f69();
  return;
}



/* 3ab8:5089  FUN_3ab8_5089  489 bytes, 3 callers */

void FUN_3ab8_5089(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 *in_stack_0000000a;
  undefined2 in_stack_0000000c;
  undefined2 in_stack_0000000e;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  int in_stack_00000016;
  undefined2 in_stack_00000018;
  int in_stack_0000001a;
  undefined2 in_stack_0000001c;
  
  func_0x000299d1(0x3ab8);
  FUN_1def_043a(0x22b2);
  in_stack_0000001c = *(undefined2 *)(unaff_BP + -0x17c);
  in_stack_0000001a = unaff_BP + -0x142;
  in_stack_00000018 = 0x1bb4;
  uVar7 = 0x18b3;
  in_stack_00000016 = 0xfc2b;
  puVar4 = (undefined2 *)func_0x00018eff();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x10) = *puVar4;
  *(undefined2 *)(unaff_BP + -0xe) = uVar3;
  if (*(int *)0x1096 == 0) {
    uVar3 = *(undefined2 *)0x9b42;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)0x9b40;
    *(undefined2 *)(unaff_BP + -8) = uVar3;
  }
  if (*(int *)0x1096 == 1) {
    in_stack_0000001c = 0xfc5f;
    func_0x000297e6();
    in_stack_0000001c = 0xfc67;
    func_0x00029b6d();
    in_stack_0000001c = 0xfc6f;
    func_0x000297e6();
    in_stack_0000001c = 0xfc78;
    func_0x00029b6d();
    in_stack_0000001c = 0xfc7d;
    FUN_28b3_117c();
    uVar7 = 0x22b2;
    in_stack_0000001c = 0xfc85;
    func_0x00029983();
  }
  if (*(int *)0x1096 == 2) {
    in_stack_0000001c = 0xfc94;
    func_0x000297e6();
    in_stack_0000001c = 0x22b2;
    in_stack_0000001a = 0xfc9d;
    func_0x00029b55();
    uVar7 = 0x22b2;
    in_stack_0000001c = 0xfca3;
    func_0x00029983();
  }
  in_stack_0000001c = *(undefined2 *)0x9b98;
  in_stack_0000001a = *(undefined2 *)0x9b96;
  in_stack_00000018 = *(undefined2 *)0x9b94;
  in_stack_00000014 = 0xfcbb;
  in_stack_00000016 = uVar7;
  func_0x000297e6();
  in_stack_00000016 = 0x22b2;
  in_stack_00000014 = 0xfcc0;
  func_0x00029d78();
  in_stack_0000000e = 0x22b2;
  in_stack_0000000c = 0xfcca;
  func_0x000299d1();
  in_stack_0000000e = 0;
  in_stack_0000000c = 0x22b2;
  in_stack_0000000a = (undefined1 *)0xfcd2;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x15e) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x15c) = uVar3;
  in_stack_0000001c = *(undefined2 *)0x9b98;
  in_stack_0000001a = *(undefined2 *)0x9b96;
  in_stack_00000018 = *(undefined2 *)0x9b94;
  in_stack_00000016 = 0x1bb4;
  in_stack_00000014 = 0xfcfc;
  func_0x000297e6();
  in_stack_00000016 = 0x22b2;
  in_stack_00000014 = 0xfd01;
  func_0x00029d78();
  in_stack_0000000e = 0x22b2;
  in_stack_0000000c = 0xfd0b;
  func_0x000299d1();
  in_stack_0000000e = 0;
  in_stack_0000000c = 0x22b2;
  in_stack_0000000a = (undefined1 *)0xfd13;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x15a) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x158) = uVar3;
  in_stack_0000001c = *(undefined2 *)0x9b98;
  in_stack_0000001a = *(undefined2 *)0x9b96;
  in_stack_00000018 = *(undefined2 *)0x9b94;
  in_stack_00000016 = 0x1bb4;
  in_stack_00000014 = 0xfd3d;
  func_0x000297e6();
  in_stack_00000016 = unaff_BP + -0x10;
  in_stack_00000014 = 0x22b2;
  in_stack_00000012 = 0xfd46;
  func_0x00029bb5();
  in_stack_00000016 = 0x22b2;
  in_stack_00000014 = 0xfd4c;
  func_0x0002996b();
  in_stack_00000016 = 0x22b2;
  in_stack_00000014 = 0xfd51;
  func_0x00029d78();
  in_stack_0000000e = 0x22b2;
  in_stack_0000000c = 0xfd5b;
  func_0x000299d1();
  in_stack_0000000e = 0;
  in_stack_0000000c = 0x22b2;
  in_stack_0000000a = (undefined1 *)0xfd63;
  puVar4 = (undefined2 *)FUN_1def_05d1();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x156) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x154) = uVar3;
  in_stack_0000001c = *(undefined2 *)0x9b98;
  in_stack_0000001a = *(undefined2 *)0x9b96;
  in_stack_00000018 = *(undefined2 *)0x9b94;
  in_stack_00000016 = 0x1bb4;
  in_stack_00000014 = 0xfd8d;
  func_0x000297e6();
  in_stack_0000000e = 0x22b2;
  in_stack_0000000c = 0xfd97;
  func_0x000299d1();
  in_stack_0000000e = 0;
  in_stack_0000000c = 0x22b2;
  in_stack_0000000a = (undefined1 *)&SUB_0000_fd9f;
  puVar4 = (undefined2 *)func_0x0001e558();
  uVar3 = puVar4[1];
  *(undefined2 *)(unaff_BP + -0x152) = *puVar4;
  *(undefined2 *)(unaff_BP + -0x150) = uVar3;
  puVar6 = (undefined2 *)0xc3a0;
  puVar4 = (undefined2 *)(unaff_BP + -0x15e);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uVar3 = *(undefined2 *)0xbc78;
  *(int *)0xc3b0 = unaff_BP + -0x142;
  *(undefined2 *)0xc3b2 = uVar3;
  in_stack_0000001c = 0x1bb4;
  in_stack_0000001a = 0xfdd9;
  func_0x0000daa6();
  puVar6 = (undefined2 *)&stack0x0008;
  puVar4 = (undefined2 *)0xc3a0;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  func_0x0001b198();
  FUN_3ab8_4f69();
  return;
}



/* 3ab8:5274  FUN_3ab8_5274  25 bytes, 1 callers */

void FUN_3ab8_5274(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x0000b1d8(0x3ab8,1);
  *(undefined2 *)0xbc2 = 0;
  if (*(int *)(unaff_BP + 6) == 0) {
    FUN_3ab8_4883();
    return;
  }
  return;
}



/* 3ab8:528d  FUN_3ab8_528d  6 bytes, 2 callers */

void __cdecl16far FUN_3ab8_528d(void)

{
  return;
}



/* 3ab8:5293  FUN_3ab8_5293  359 bytes, 0 callers */

void __cdecl16far FUN_3ab8_5293(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar7;
  undefined1 local_14e [4];
  undefined2 local_14a [12];
  undefined1 local_132 [270];
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 auStack_1e [2];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  int iVar8;
  
  uVar6 = 0x22b2;
  FUN_21f2_0ebc();
  do {
    iVar8 = 0;
    while( true ) {
      while( true ) {
        puStack_c = local_132;
        iStack_10 = 0xff35;
        puStack_e = (undefined1 *)uVar6;
        FUN_21f2_3454();
        *(undefined2 *)0xc1a = 1;
        *(undefined2 *)0xc2c = 1;
        puStack_c = local_14e;
        puStack_e = local_132;
        uStack_12 = 0x22b2;
        uStack_14 = 0xff5c;
        iStack_10 = iVar8;
        iVar3 = FUN_1def_0904();
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc2c = 0;
        if (*(int *)0x158 != 0) {
          return;
        }
        if (*(int *)0xc18 == 0) break;
        iVar8 = 0;
        func_0x000297e6();
        func_0x00029d78();
        iStack_10 = 0x22b2;
        uStack_12 = 0xfe49;
        func_0x000299d1();
        iStack_10 = 0x22b2;
        uStack_12 = 0xfe52;
        func_0x000297e6();
        iStack_10 = 0x22b2;
        uStack_12 = 0xfe57;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0xfe61;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uVar6 = 0x3bf;
        uStack_1a = 0xfe66;
        func_0x0000507a();
      }
      if (iVar3 == 0x14) {
        return;
      }
      if ((0 < iVar8) && (iVar3 == -1)) break;
      func_0x000297e6();
      func_0x00029d78();
      iStack_10 = 0x22b2;
      uStack_12 = 0xff01;
      func_0x000299d1();
      iStack_10 = 0x22b2;
      uStack_12 = 0xff0a;
      func_0x000297e6();
      iStack_10 = 0x22b2;
      uStack_12 = 0xff0f;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uVar6 = 0x22b2;
      uStack_1a = 0xff19;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xff1d;
      iVar8 = FUN_3ab8_2de5();
    }
    puStack_c = (undefined1 *)0xfe88;
    func_0x0000daa6();
    puStack_c = (undefined1 *)0xfe93;
    puVar7 = (undefined2 *)func_0x00000398();
    puVar4 = (undefined2 *)puVar7;
    puVar5 = local_14a;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = auStack_1e;
    puVar5 = local_14a;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar7;
    }
    uStack_22 = 0xfeb8;
    puVar4 = auStack_1e;
    func_0x0001b198();
    puVar5 = local_14a;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = *puVar7;
    }
    uStack_22 = 0x18b3;
    uStack_24 = 0xfed4;
    func_0x00018a6b();
    puStack_c = (undefined1 *)0xfee0;
    func_0x0000b1d8();
    uVar6 = 0x885;
    func_0x0000abfa();
  } while( true );
}



/* 3ab8:53fa  FUN_3ab8_53fa  55 bytes, 0 callers */

int __cdecl16far
FUN_3ab8_53fa(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 in_stack_00000026;
  undefined2 *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  undefined1 auStack_e6 [20];
  undefined1 auStack_d2 [20];
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined1 auStack_b6 [12];
  undefined1 auStack_aa [4];
  undefined1 auStack_a6 [6];
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined1 *puStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int aiStack_38 [8];
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 local_14;
  undefined1 *puStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 *local_a;
  undefined2 *local_8;
  undefined2 *local_6;
  
  local_6 = (undefined2 *)0xff85;
  FUN_21f2_0ebc();
  local_c = 0;
  local_14 = 9999;
  local_a = (undefined2 *)*(undefined2 *)0x9bd4;
  local_8 = (undefined2 *)*(undefined2 *)0x9bd6;
  local_1a = 1;
  local_6 = (undefined2 *)0xeb;
  FUN_32b2_7285();
  local_6 = (undefined2 *)0xf3;
  FUN_32b2_704d();
  local_6 = (undefined2 *)0xfc;
  FUN_32b2_710c();
  local_6 = (undefined2 *)0x104;
  FUN_32b2_6eb1();
  while( true ) {
    local_6 = (undefined2 *)uStack_ba;
    local_8 = (undefined2 *)uStack_bc;
    local_a = (undefined2 *)uStack_be;
    local_c = 0x32b2;
    uStack_e = 0x119;
    FUN_32b2_75fe();
    local_6 = (undefined2 *)0x32b2;
    local_8 = (undefined2 *)0x123;
    FUN_32b2_6d14();
    local_6 = (undefined2 *)0x32b2;
    local_8 = (undefined2 *)0x12b;
    FUN_32b2_704d();
    local_6 = (undefined2 *)0x32b2;
    local_8 = (undefined2 *)0x133;
    FUN_32b2_7095();
    local_6 = (undefined2 *)0x32b2;
    local_8 = (undefined2 *)0x13b;
    FUN_32b2_6eb1();
    local_6 = (undefined2 *)uStack_b8;
    local_8 = (undefined2 *)uStack_ba;
    local_a = (undefined2 *)uStack_bc;
    local_c = uStack_be;
    uStack_e = 0x32b2;
    uStack_10 = 0x150;
    FUN_32b2_75ec();
    uVar6 = &stack0x0000 == (undefined1 *)0x6;
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x15a;
    FUN_32b2_6d14();
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x162;
    FUN_32b2_704d();
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x16a;
    FUN_32b2_7095();
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x173;
    FUN_32b2_6eb1();
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x17b;
    FUN_32b2_6cc6();
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x183;
    FUN_32b2_6cc6();
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x188;
    FUN_32b2_7191();
    if ((bool)uVar6) {
      local_8 = (undefined2 *)0x32b2;
      local_a = (undefined2 *)0x192;
      FUN_32b2_6cc6();
      local_8 = (undefined2 *)0x32b2;
      local_a = (undefined2 *)0x19a;
      FUN_32b2_6cc6();
      local_8 = (undefined2 *)0x32b2;
      local_a = (undefined2 *)0x19f;
      FUN_32b2_7191();
      if ((bool)uVar6) {
        return 0;
      }
    }
    local_8 = (undefined2 *)auStack_aa;
    local_a = &uStack_1e;
    local_c = uStack_7e;
    uStack_e = uStack_80;
    uStack_10 = uStack_82;
    puStack_12 = (undefined1 *)uStack_84;
    local_14 = uStack_5a;
    uStack_16 = uStack_5c;
    uStack_18 = uStack_5e;
    local_1a = uStack_60;
    uStack_1c = 0x32b2;
    uStack_1e = 0x1d0;
    FUN_32b2_6cc6();
    uStack_1c = 0x32b2;
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
    aiStack_38[6] = 0x32b2;
    aiStack_38[5] = 0x1f6;
    FUN_32b2_6eb1();
    aiStack_38[6] = 0x32b2;
    aiStack_38[5] = 0x1fa;
    iVar3 = FUN_3ab8_4fbd();
    if (iVar3 == 0) break;
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x209;
    FUN_32b2_6cc6();
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x20e;
    FUN_32b2_7258();
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x216;
    FUN_32b2_6e99();
    local_8 = (undefined2 *)0x32b2;
    local_a = (undefined2 *)0x21e;
    FUN_32b2_6ef9();
    local_8 = (undefined2 *)auStack_b6;
    local_a = (undefined2 *)auStack_a6;
    local_c = 0x32b2;
    uStack_e = 0x231;
    FUN_32b2_6cc6();
    local_c = 0x32b2;
    uStack_e = 0x236;
    FUN_32b2_7258();
    local_14 = 0x32b2;
    uStack_16 = 0x240;
    FUN_32b2_6eb1();
    local_14 = 0x32b2;
    uStack_16 = 0x248;
    FUN_32b2_6cc6();
    local_14 = 0x32b2;
    uStack_16 = 0x24d;
    FUN_32b2_7258();
    uStack_1c = 0x32b2;
    uStack_1e = 599;
    FUN_32b2_6eb1();
    uStack_1c = 0x32b2;
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
    aiStack_38[6] = 0x32b2;
    aiStack_38[5] = 0x288;
    FUN_32b2_6eb1();
    aiStack_38[6] = 0x32b2;
    aiStack_38[5] = 0x290;
    FUN_32b2_6cc6();
    aiStack_38[6] = 0x32b2;
    aiStack_38[5] = 0x295;
    FUN_32b2_7258();
    aiStack_38[2] = 0x32b2;
    aiStack_38[1] = 0x29f;
    FUN_32b2_6eb1();
    aiStack_38[2] = 0x32b2;
    aiStack_38[1] = 0x2a7;
    FUN_32b2_6cc6();
    aiStack_38[2] = 0x32b2;
    aiStack_38[1] = 0x2ac;
    FUN_32b2_7258();
    uStack_3c = 0x32b2;
    uStack_3e = 0x2b6;
    FUN_32b2_6eb1();
    uStack_3c = 1;
    uStack_3e = 0x32b2;
    uStack_40 = 0x2be;
    FUN_3ab8_5089();
    local_8 = (undefined2 *)auStack_e6;
    local_a = (undefined2 *)auStack_d2;
    local_c = 0x32b2;
    uStack_e = 0x2d4;
    FUN_32b2_6cc6();
    local_c = 0x32b2;
    uStack_e = 0x2d9;
    FUN_32b2_7258();
    local_14 = 0x32b2;
    uStack_16 = 0x2e3;
    FUN_32b2_6eb1();
    local_14 = 0x32b2;
    uStack_16 = 0x2eb;
    FUN_32b2_6cc6();
    local_14 = 0x32b2;
    uStack_16 = 0x2f0;
    FUN_32b2_7258();
    uStack_1c = 0x32b2;
    uStack_1e = 0x2fa;
    FUN_32b2_6eb1();
    uStack_1c = 0x32b2;
    uStack_1e = 0x302;
    FUN_32b2_6d14();
    uStack_24 = 0x32b2;
    uStack_26 = 0x30c;
    FUN_32b2_6eb1();
    uStack_24 = 0x32b2;
    uStack_26 = 0x314;
    FUN_32b2_6d14();
    aiStack_38[6] = 0x32b2;
    aiStack_38[5] = 0x31e;
    FUN_32b2_6eb1();
    aiStack_38[6] = 0x32b2;
    aiStack_38[5] = 0x326;
    FUN_32b2_6cc6();
    aiStack_38[6] = 0x32b2;
    aiStack_38[5] = 0x32b;
    FUN_32b2_7258();
    aiStack_38[2] = 0x32b2;
    aiStack_38[1] = 0x335;
    FUN_32b2_6eb1();
    aiStack_38[2] = 0x32b2;
    aiStack_38[1] = 0x33d;
    FUN_32b2_6cc6();
    aiStack_38[2] = 0x32b2;
    aiStack_38[1] = 0x342;
    FUN_32b2_7258();
    uStack_3c = 0x32b2;
    uStack_3e = 0x34c;
    FUN_32b2_6eb1();
    uStack_3c = 1;
    uStack_3e = 0x32b2;
    uStack_40 = 0x354;
    FUN_3ab8_5089();
    uVar6 = (undefined1 *)0xffc9 < aiStack_38;
    uVar7 = &stack0x0000 == (undefined1 *)0x2;
    local_6 = (undefined2 *)0x360;
    FUN_32b2_6cc6();
    local_6 = (undefined2 *)0x369;
    FUN_32b2_701d();
    local_6 = (undefined2 *)0x36e;
    FUN_32b2_7258();
    local_6 = (undefined2 *)0x376;
    FUN_32b2_6e99();
    local_6 = (undefined2 *)0x37e;
    FUN_32b2_6ef9();
    local_6 = (undefined2 *)0x387;
    FUN_32b2_6cc6();
    local_6 = (undefined2 *)0x390;
    FUN_32b2_701d();
    local_6 = (undefined2 *)0x395;
    FUN_32b2_7258();
    local_6 = (undefined2 *)0x39e;
    FUN_32b2_6e99();
    local_6 = (undefined2 *)0x3a6;
    FUN_32b2_6ef9();
    local_6 = (undefined2 *)0x3af;
    FUN_32b2_6d14();
    local_6 = (undefined2 *)0x3b4;
    FUN_32b2_6fc7();
    local_6 = (undefined2 *)0x3bc;
    FUN_32b2_6d14();
    local_6 = (undefined2 *)0x3c1;
    FUN_32b2_6fc7();
    local_6 = (undefined2 *)0x3ca;
    FUN_32b2_710c();
    local_6 = (undefined2 *)0x3cf;
    FUN_32b2_7191();
    if (!(bool)uVar6 && !(bool)uVar7) {
      local_6 = (undefined2 *)0x3da;
      FUN_32b2_6d14();
      local_6 = (undefined2 *)0x3e2;
      FUN_32b2_6d14();
      local_6 = (undefined2 *)0x3e7;
      FUN_32b2_7191();
      if (!(bool)uVar7) {
        local_6 = (undefined2 *)0x431;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x439;
        FUN_32b2_7124();
        local_6 = (undefined2 *)0x441;
        FUN_32b2_6e99();
        local_6 = (undefined2 *)0x44a;
        FUN_32b2_704d();
        local_6 = (undefined2 *)0x453;
        FUN_32b2_7035();
        local_6 = (undefined2 *)0x45c;
        FUN_32b2_6e99();
        local_6 = (undefined2 *)0x464;
        FUN_32b2_6eb1();
        local_6 = (undefined2 *)0x46c;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x474;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x47c;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x484;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x48c;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x494;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x49d;
        FUN_32b2_6e99();
        local_6 = (undefined2 *)0x4a2;
        FUN_32b2_718c();
        local_6 = (undefined2 *)0x4ab;
        FUN_32b2_6e99();
        local_6 = (undefined2 *)0x4b3;
        FUN_32b2_6eb1();
        local_6 = (undefined2 *)0x4bc;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x4c4;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x4cd;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x4d5;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x4dd;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x4e6;
        FUN_32b2_6e99();
        local_6 = (undefined2 *)0x4ee;
        FUN_32b2_6eb1();
        local_6 = (undefined2 *)0x4f7;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x500;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x509;
        FUN_32b2_70dc();
        local_6 = (undefined2 *)0x511;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x519;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x522;
        FUN_32b2_6e99();
        local_6 = (undefined2 *)0x52b;
        FUN_32b2_6eb1();
        local_6 = (undefined2 *)0x534;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x53d;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x546;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x54f;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x558;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x55d;
        FUN_32b2_718c();
        local_6 = (undefined2 *)0x566;
        FUN_32b2_6eb1();
        local_6 = (undefined2 *)0x56f;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x574;
        FUN_32b2_6fd6();
        local_6 = (undefined2 *)0x57d;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x586;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x58b;
        FUN_32b2_7182();
        local_6 = (undefined2 *)0x594;
        FUN_32b2_6e99();
        local_6 = (undefined2 *)0x59c;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x5a5;
        FUN_32b2_7154();
        local_6 = (undefined2 *)0x5ae;
        FUN_32b2_6e99();
        local_6 = (undefined2 *)0x5b7;
        FUN_32b2_6eb1();
        local_6 = (undefined2 *)0x5c0;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x5c9;
        FUN_32b2_6eb1();
        local_6 = &uStack_64;
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x5db;
        FUN_32b2_6cc6();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x5e0;
        FUN_32b2_7258();
        uStack_10 = 0x32b2;
        puStack_12 = (undefined1 *)0x5ea;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        puStack_12 = (undefined1 *)0x5f2;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        puStack_12 = (undefined1 *)0x5f7;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        local_1a = 0x601;
        FUN_32b2_6eb1();
        uStack_18 = uStack_66;
        local_1a = uStack_68;
        uStack_1c = uStack_6a;
        uStack_1e = uStack_6c;
        uStack_20 = uStack_4a;
        uStack_22 = uStack_4c;
        uStack_24 = uStack_4e;
        uStack_26 = uStack_50;
        aiStack_38[7] = 0x622;
        FUN_32b2_6d14();
        aiStack_38[4] = 0x32b2;
        aiStack_38[3] = 0x62c;
        FUN_32b2_6eb1();
        aiStack_38[4] = 0x32b2;
        aiStack_38[3] = 0x635;
        FUN_32b2_6d14();
        aiStack_38[0] = 0x32b2;
        uStack_3a = 0x63f;
        FUN_32b2_6eb1();
        aiStack_38[0] = 0;
        uStack_3a = 0x32b2;
        uStack_3c = 0x646;
        FUN_3ab8_5089();
        uStack_88 = uStack_64;
        uStack_86 = uStack_62;
        uStack_a0 = uStack_8c;
        uStack_9e = uStack_8a;
        local_6 = &uStack_88;
        puVar5 = &uStack_26;
        puVar4 = (undefined2 *)&stack0x001a;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar4;
          puVar4 = puVar4 + 1;
          *puVar2 = *puVar1;
        }
        aiStack_38[7] = 0x684;
        iVar3 = func_0x0003fdaf();
        uVar6 = 0;
        uVar7 = iVar3 == 0;
        if (!(bool)uVar7) {
          local_6 = (undefined2 *)0x694;
          FUN_32b2_6d14();
          local_6 = (undefined2 *)0x69d;
          FUN_32b2_6cc6();
          local_6 = (undefined2 *)0x6a5;
          FUN_32b2_701d();
          local_6 = (undefined2 *)0x6aa;
          FUN_32b2_6fc7();
          local_6 = (undefined2 *)0x6af;
          FUN_32b2_7258();
          local_6 = (undefined2 *)0x6b4;
          FUN_32b2_7191();
          if ((bool)uVar6 || (bool)uVar7) {
            local_6 = (undefined2 *)0x6bf;
            FUN_32b2_6d14();
            local_6 = (undefined2 *)0x6c8;
            FUN_32b2_6cc6();
            local_6 = (undefined2 *)0x6d1;
            FUN_32b2_701d();
            local_6 = (undefined2 *)0x6d6;
            FUN_32b2_6fc7();
            local_6 = (undefined2 *)0x6db;
            FUN_32b2_7258();
            local_6 = (undefined2 *)0x6e0;
            FUN_32b2_7191();
            if ((bool)uVar6 || (bool)uVar7) {
              uStack_be = *(undefined2 *)0x93c0;
              uStack_bc = *(undefined2 *)0x93c2;
              uStack_ba = *(undefined2 *)0x93c4;
              uStack_b8 = *(undefined2 *)0x93c6;
            }
          }
        }
        local_6 = (undefined2 *)0x6f8;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x700;
        FUN_32b2_6d14();
        local_6 = (undefined2 *)0x708;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x711;
        FUN_32b2_710c();
        local_6 = (undefined2 *)0x71a;
        FUN_32b2_7154();
        local_6 = (undefined2 *)0x71f;
        FUN_32b2_7191();
        if (!(bool)uVar6) {
          local_6 = (undefined2 *)0x72d;
          FUN_32b2_6d14();
          local_6 = (undefined2 *)0x732;
          FUN_32b2_6fc7();
          local_6 = (undefined2 *)0x73a;
          FUN_32b2_6d14();
          local_6 = (undefined2 *)0x742;
          FUN_32b2_710c();
          local_6 = (undefined2 *)0x74b;
          FUN_32b2_710c();
          local_6 = (undefined2 *)0x750;
          FUN_32b2_7191();
          if (!(bool)uVar6) {
            uStack_be = *(undefined2 *)0x93c0;
            uStack_bc = *(undefined2 *)0x93c2;
            uStack_ba = *(undefined2 *)0x93c4;
            uStack_b8 = *(undefined2 *)0x93c6;
          }
          local_6 = (undefined2 *)uStack_ba;
          local_8 = (undefined2 *)uStack_bc;
          local_a = (undefined2 *)uStack_be;
          local_c = 0x32b2;
          uStack_e = 0x774;
          FUN_32b2_7592();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x77e;
          FUN_32b2_6d14();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x786;
          FUN_32b2_70dc();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x78e;
          FUN_32b2_6d14();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x797;
          FUN_32b2_710c();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x79c;
          FUN_32b2_7182();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x7a5;
          FUN_32b2_6e99();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x7ad;
          FUN_32b2_710c();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x7b5;
          FUN_32b2_7154();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x7be;
          FUN_32b2_6e99();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x7c7;
          FUN_32b2_6eb1();
          local_6 = &uStack_8c;
          local_8 = &uStack_64;
          local_a = (undefined2 *)0x32b2;
          local_c = 0x7d9;
          FUN_32b2_6cc6();
          local_a = (undefined2 *)0x32b2;
          local_c = 0x7de;
          FUN_32b2_7258();
          puStack_12 = (undefined1 *)0x32b2;
          local_14 = 0x7e8;
          FUN_32b2_6eb1();
          puStack_12 = (undefined1 *)0x32b2;
          local_14 = 0x7f0;
          FUN_32b2_6cc6();
          puStack_12 = (undefined1 *)0x32b2;
          local_14 = 0x7f5;
          FUN_32b2_7258();
          local_1a = 0x32b2;
          uStack_1c = 0x7ff;
          FUN_32b2_6eb1();
          local_1a = uStack_66;
          uStack_1c = uStack_68;
          uStack_1e = uStack_6a;
          uStack_20 = uStack_6c;
          uStack_22 = uStack_4a;
          uStack_24 = uStack_4c;
          uStack_26 = uStack_4e;
          aiStack_38[7] = 0x32b2;
          aiStack_38[6] = 0x820;
          FUN_32b2_6d14();
          aiStack_38[3] = 0x32b2;
          aiStack_38[2] = 0x82a;
          FUN_32b2_6eb1();
          aiStack_38[3] = 0x32b2;
          aiStack_38[2] = 0x833;
          FUN_32b2_6d14();
          uStack_3a = 0x32b2;
          uStack_3c = 0x83d;
          FUN_32b2_6eb1();
          uStack_3a = 0;
          uStack_3c = 0x32b2;
          uStack_3e = 0x844;
          FUN_3ab8_5089();
          uVar6 = (undefined1 *)0xffc9 < &uStack_3a;
          uVar7 = &stack0x0000 == (undefined1 *)0x4;
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x84f;
          FUN_32b2_6cc6();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x857;
          FUN_32b2_6cc6();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x85c;
          FUN_32b2_7191();
          if ((bool)uVar7) {
            uStack_64 = param_1;
            uStack_62 = param_2;
          }
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x872;
          FUN_32b2_6cc6();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x87a;
          FUN_32b2_6cc6();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x87f;
          FUN_32b2_7191();
          if ((bool)uVar7) {
            uStack_8c = param_3;
            uStack_8a = param_4;
          }
          *in_stack_0000003a = uStack_64;
          in_stack_0000003a[1] = uStack_62;
          *in_stack_0000003c = uStack_8c;
          in_stack_0000003c[1] = uStack_8a;
          *in_stack_0000003e = uStack_64;
          in_stack_0000003e[1] = uStack_62;
          *in_stack_00000040 = uStack_8c;
          in_stack_00000040[1] = uStack_8a;
          aiStack_38[0] = aiStack_38[0] + 1;
          uVar7 = aiStack_38[0] == 0;
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x8d7;
          FUN_32b2_6d14();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x8e0;
          FUN_32b2_6d14();
          local_6 = (undefined2 *)0x32b2;
          local_8 = (undefined2 *)0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar6 && !(bool)uVar7) {
            local_6 = (undefined2 *)uStack_b8;
            local_8 = (undefined2 *)uStack_ba;
            local_a = (undefined2 *)uStack_bc;
            local_c = uStack_be;
            uStack_e = 0x32b2;
            uStack_10 = 0x8ff;
            FUN_32b2_7592();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x909;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x911;
            FUN_32b2_7154();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x916;
            FUN_32b2_6fd6();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x91e;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x927;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x92c;
            FUN_32b2_7182();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x935;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x93d;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x945;
            FUN_32b2_7154();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x94e;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x957;
            FUN_32b2_6eb1();
            local_8 = &uStack_8c;
            local_a = &uStack_64;
            local_c = 0x32b2;
            uStack_e = 0x969;
            FUN_32b2_6cc6();
            local_c = 0x32b2;
            uStack_e = 0x96e;
            FUN_32b2_7258();
            local_14 = 0x32b2;
            uStack_16 = 0x978;
            FUN_32b2_6eb1();
            local_14 = 0x32b2;
            uStack_16 = 0x980;
            FUN_32b2_6cc6();
            local_14 = 0x32b2;
            uStack_16 = 0x985;
            FUN_32b2_7258();
            uStack_1c = 0x32b2;
            uStack_1e = 0x98f;
            FUN_32b2_6eb1();
            uStack_1c = uStack_66;
            uStack_1e = uStack_68;
            uStack_20 = uStack_6a;
            uStack_22 = uStack_6c;
            uStack_24 = uStack_4a;
            uStack_26 = uStack_4c;
            aiStack_38[7] = uStack_50;
            aiStack_38[6] = 0x32b2;
            aiStack_38[5] = 0x9b0;
            FUN_32b2_6d14();
            aiStack_38[2] = 0x32b2;
            aiStack_38[1] = 0x9ba;
            FUN_32b2_6eb1();
            aiStack_38[2] = 0x32b2;
            aiStack_38[1] = 0x9c3;
            FUN_32b2_6d14();
            uStack_3c = 0x32b2;
            uStack_3e = 0x9cd;
            FUN_32b2_6eb1();
            uStack_3c = 0;
            uStack_3e = 0x32b2;
            uStack_40 = 0x9d4;
            FUN_3ab8_5089();
            uVar6 = &stack0x0000 == (undefined1 *)0x6;
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x9df;
            FUN_32b2_6cc6();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x9e7;
            FUN_32b2_6cc6();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar6) {
              uStack_64 = param_1;
              uStack_62 = param_2;
            }
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0xa02;
            FUN_32b2_6cc6();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0xa0a;
            FUN_32b2_6cc6();
            local_8 = (undefined2 *)0x32b2;
            local_a = (undefined2 *)0xa0f;
            FUN_32b2_7191();
            if ((bool)uVar6) {
              uStack_8c = param_3;
              uStack_8a = param_4;
            }
            *in_stack_0000003e = uStack_64;
            in_stack_0000003e[1] = uStack_62;
            *in_stack_00000040 = uStack_8c;
            in_stack_00000040[1] = uStack_8a;
            return aiStack_38[0] + 1;
          }
          return aiStack_38[0];
        }
      }
      return 0;
    }
    local_6 = (undefined2 *)0x3f5;
    FUN_32b2_6d14();
    local_6 = (undefined2 *)0x32b2;
    local_8 = (undefined2 *)0x3ff;
    FUN_32b2_7154();
    local_6 = (undefined2 *)0x405;
    FUN_32b2_6eb1();
    puStack_48 = (undefined1 *)local_a;
    uStack_46 = local_8;
    uStack_44 = local_6;
    puStack_12 = (undefined1 *)local_a;
    uStack_10 = local_8;
  }
  return 0;
}



/* 3ab8:555f  FUN_3ab8_555f  121 bytes, 0 callers */

void __cdecl16far FUN_3ab8_555f(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined2 local_1a [4];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  FUN_21f2_0ebc();
  FUN_10ad_1871();
  while( true ) {
    iVar4 = FUN_4375_c82a();
    if (iVar4 < 1) break;
    uStack_e = 0xf9;
    uVar7 = func_0x00000398();
    pbVar1 = (byte *)((int)uVar7 + 0x16);
    *pbVar1 = *pbVar1 | 1;
    uStack_e = 0x10b;
    puVar8 = (undefined2 *)func_0x00000398();
    puVar5 = (undefined2 *)puVar8;
    puVar6 = local_1a;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = *puVar2;
    }
    uStack_e = 0xbf48;
    uStack_10 = 0;
    uStack_12 = 299;
    FUN_1885_0344();
    uStack_e = *(undefined2 *)0xd70;
    uStack_10 = 0x18b3;
    uStack_12 = 0x13f;
    func_0x0002327e();
  }
  FUN_10ad_1871();
  return;
}



/* 3ab8:55d8  FUN_3ab8_55d8  1089 bytes, 0 callers */

void __cdecl16far FUN_3ab8_55d8(undefined1 *param_1)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar11;
  undefined4 uVar12;
  int local_4c;
  int local_30;
  uint local_26;
  int local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 local_1a [3];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  uint uStack_c;
  
  FUN_21f2_0ebc();
  *(undefined1 *)0xc3b4 = *(undefined1 *)0x168;
  *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
  *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
  if (*(int *)0xcb6 == 0) {
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029983();
    uVar10 = *(undefined2 *)0x9b7a;
    *(undefined2 *)0xb76a = *(undefined2 *)0x9b78;
    *(undefined2 *)0xb76c = uVar10;
    uVar10 = *(undefined2 *)0x9b40;
    uVar6 = *(undefined2 *)0x9b42;
  }
  else {
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029af6();
    func_0x00029983();
    func_0x000297e6();
    uStack_c = 0x1c7;
    func_0x00029b6d();
    func_0x00029983();
    uVar10 = *(undefined2 *)0xcbc;
    *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
    *(undefined2 *)0xb76c = uVar10;
    uVar10 = *(undefined2 *)0xcbe;
    uVar6 = *(undefined2 *)0xcc0;
  }
  *(undefined2 *)0xb784 = uVar10;
  *(undefined2 *)0xb786 = uVar6;
  local_4c = 0;
  uVar10 = 0x11f2;
  FUN_10ad_1871();
  while( true ) {
    uStack_c = 0x236;
    local_20 = FUN_4375_c82a();
    uStack_c = 0xa1;
    puStack_e = param_1;
    uStack_12 = 0x249;
    uStack_10 = uVar10;
    iVar4 = func_0x0002509c();
    if (iVar4 == 0) {
      *param_1 = 0;
    }
    uStack_c = 0x22b2;
    uVar10 = 0x22b2;
    puStack_e = (undefined1 *)0x263;
    iVar5 = func_0x00024ce4();
    if (param_1[iVar5 + -1] == '\n') {
      param_1[iVar5 + -1] = '\0';
    }
    if ((local_20 < 1) && (iVar4 == 0)) break;
    if (local_20 < 1) {
      if (local_4c == 1) {
        local_4c = 0;
      }
      uStack_c = 0x3ec;
      func_0x000297e6();
      uStack_c = 0x22b2;
      puStack_e = (undefined1 *)0x3f5;
      func_0x00029bb5();
      uStack_c = 0x3fb;
      func_0x0002996b();
      uStack_c = 0x404;
      func_0x00029983();
      uStack_c = 0x40c;
      func_0x000297e6();
      uStack_c = 0x415;
      func_0x00029983();
      uStack_c = 0x41d;
      func_0x000297e6();
      uStack_c = 0x22b2;
      puStack_e = (undefined1 *)0x426;
      func_0x00029bb5();
      uStack_c = 0x42c;
      func_0x0002996b();
      uStack_c = 0x435;
      func_0x00029983();
      uStack_c = 0x43d;
      func_0x000297e6();
      uStack_c = 0x446;
      func_0x00029983();
    }
    else {
      uStack_c = 0x22b2;
      puStack_e = (undefined1 *)0x29a;
      puVar11 = (undefined2 *)func_0x00000398();
      puVar8 = (undefined2 *)puVar11;
      puVar7 = (undefined2 *)0xc3a0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar3;
      }
      uStack_c = 0;
      puStack_e = (undefined1 *)0x2b5;
      func_0x000190c7();
      uStack_c = 0x2bf;
      func_0x000297e6();
      uStack_c = 0x2c4;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x2ce;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x2d7;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x2dc;
      func_0x00029d78();
      local_1a[0] = 0x22b2;
      uStack_1c = 0x2e6;
      func_0x000299d1();
      local_1a[0] = *(undefined2 *)0x9bbe;
      uStack_1c = *(undefined2 *)0x9bbc;
      uStack_1e = *(undefined2 *)0x9bba;
      local_20 = *(int *)0x9bb8;
      FUN_4375_7ce3();
      uStack_c = 0x306;
      func_0x000297e6();
      uStack_c = 0x30f;
      func_0x0002996b();
      uStack_c = 0x317;
      FUN_28b3_0ee9();
      uStack_c = 800;
      func_0x000297e6();
      uStack_c = 0x328;
      func_0x00029983();
      uStack_c = 0x331;
      func_0x000297e6();
      uStack_c = 0x33a;
      func_0x0002996b();
      uStack_c = 0x342;
      FUN_28b3_0ee9();
      uStack_c = 0x34b;
      func_0x000297e6();
      uStack_c = 0x353;
      func_0x00029983();
      local_4c = local_4c + 1;
      if ((local_4c == 2) || ((2 < local_4c && (*(byte *)0xc3b5 == local_26)))) {
        uStack_c = 0x374;
        func_0x000297e6();
        uStack_c = 0x37c;
        FUN_28b3_100d();
        uStack_c = 900;
        func_0x00029983();
        uStack_c = 0x38c;
        func_0x000297e6();
        uStack_c = 0x394;
        FUN_28b3_100d();
        uStack_c = 0x39c;
        func_0x00029983();
      }
      local_26 = (uint)*(byte *)0xc3b5;
    }
    uVar10 = *(undefined2 *)0xbc78;
    *(undefined2 *)0xc3b0 = param_1;
    *(undefined2 *)0xc3b2 = uVar10;
    uStack_c = (*(byte *)0xc3b6 & 0x20) >> 5;
    puStack_e = param_1;
    uStack_10 = 0x22b2;
    uStack_12 = 0x46c;
    func_0x00018eff();
    uStack_c = 0x485;
    func_0x000297e6();
    uStack_c = 0x48d;
    func_0x00029b6d();
    uStack_c = 0x496;
    func_0x00029bb5();
    uStack_c = 0x49f;
    func_0x00029983();
    uStack_c = 0x4a8;
    func_0x000297e6();
    uStack_c = 0x4b0;
    func_0x00029b6d();
    uStack_c = 0x4b9;
    func_0x00029bb5();
    uStack_c = 0x4c2;
    func_0x00029983();
    if (*(char *)*(undefined4 *)0xc3b0 != '\0') {
      uStack_c = 0x4d4;
      func_0x000297e6();
      uStack_c = 0x4d9;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0x4e3;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      uStack_14 = 0x4eb;
      func_0x000297e6();
      uStack_12 = 0x22b2;
      uStack_14 = 0x4f0;
      func_0x00029d78();
      local_1a[0] = 0x22b2;
      uStack_1c = 0x4fa;
      func_0x000299d1();
      local_1a[0] = *(undefined2 *)0x9bb6;
      uStack_1c = *(undefined2 *)0x9bb4;
      uStack_1e = *(undefined2 *)0x9bb2;
      local_20 = *(int *)0x9bb0;
      FUN_4375_7ce3();
    }
    puVar8 = local_1a;
    puVar7 = (undefined2 *)0xc3a0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar11;
    }
    uStack_c = 0x22b2;
    uVar10 = 0x22b2;
    puStack_e = (undefined1 *)0x526;
    iVar4 = func_0x00024ce4();
    if (iVar4 != 0) {
      piVar9 = &local_20;
      puVar8 = local_1a;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3 = piVar9;
        piVar9 = piVar9 + 1;
        puVar11 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar11;
      }
      func_0x0001b198();
      uStack_c = 0x18b3;
      uVar10 = 0;
      puStack_e = (undefined1 *)0x54e;
      uVar12 = func_0x00000398();
      pbVar1 = (byte *)((int)uVar12 + 0x16);
      *pbVar1 = *pbVar1 | 1;
    }
  }
  for (local_30 = 1; local_30 <= *(int *)0x150; local_30 = local_30 + 1) {
    puStack_e = (undefined1 *)0x56e;
    uStack_c = uVar10;
    uVar12 = func_0x00000398();
    if ((*(byte *)((int)uVar12 + 0x16) & 1) != 0) {
      uStack_c = 0;
      puStack_e = (undefined1 *)0x582;
      uVar12 = func_0x00000398();
      pbVar1 = (byte *)((int)uVar12 + 0x16);
      *pbVar1 = *pbVar1 | 2;
    }
    uVar10 = 0;
  }
  uStack_c = 0x593;
  FUN_10ad_1871();
  return;
}



/* 3ab8:5a19  FUN_3ab8_5a19  18 bytes, 1 callers */

void FUN_3ab8_5a19(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 local_12e [296];
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0x5a4;
  FUN_21f2_0ebc();
  puStack_4 = local_12e;
  pcVar1 = (code *)swi(0x3f);
  iVar2 = (*pcVar1)();
  if (iVar2 != -1) {
    *(undefined2 *)0xbc0 = 1;
    if (*(int *)0x158 != 0) {
      return;
    }
    puStack_4 = (undefined1 *)0x22b2;
    uStack_6 = 0x5d2;
    iVar2 = FUN_21f2_1348();
    *(int *)0xd70 = iVar2;
    if (iVar2 == 0) {
      puStack_4 = (undefined1 *)0x5e4;
      FUN_13bf_0a03();
    }
    FUN_3ab8_555f();
    func_0x0002504e();
    puStack_4 = (undefined1 *)0x1078;
    uStack_6 = 0x41e4;
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
    if (*(byte *)0xb782 < 4) {
      *(undefined2 *)0x158 = 0;
    }
    FUN_1000_0620();
    iVar2 = FUN_21f2_1348();
    *(int *)0xd70 = iVar2;
    if (iVar2 == 0) {
      FUN_13bf_0a03();
    }
    FUN_3ab8_55d8();
    func_0x0002504e();
  }
  *(undefined2 *)0xbc0 = 1;
  return;
}



/* 3ab8:5ad0  FUN_3ab8_5ad0  512 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x000408aa) */

void FUN_3ab8_5ad0(void)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_244;
  undefined2 local_242;
  undefined2 uStack_240;
  uint uStack_23e;
  undefined2 local_23c;
  undefined2 uStack_23a;
  char acStack_237 [301];
  int local_10a;
  int local_104 [61];
  int local_8a;
  undefined1 local_88;
  undefined2 uStack_86;
  int iStack_84;
  undefined1 local_7e [80];
  undefined1 local_2e [26];
  undefined2 uStack_14;
  undefined2 uStack_12;
  char *pcStack_10;
  char *pcStack_e;
  undefined2 *puStack_c;
  char *pcStack_a;
  int *piStack_8;
  
  FUN_21f2_0ebc();
  local_88 = 0x77;
  piStack_8 = (int *)0x41e7;
  pcStack_a = local_2e;
  puStack_c = (undefined2 *)0x22b2;
  uVar10 = 0x22b2;
  pcStack_e = (char *)0x66f;
  func_0x00024c86();
  local_8a = 0;
LAB_3ab8_5af7:
  do {
    if (*(int *)0xc22 < 1) {
      *(undefined2 *)0xc22 = 1;
    }
    if (*(char *)0x10ca == '\0') {
      piStack_8 = (int *)0x41ee;
    }
    else {
      piStack_8 = (int *)0x10ca;
    }
    pcStack_a = acStack_237 + 1;
    pcStack_e = (char *)0x69e;
    puStack_c = (undefined2 *)uVar10;
    FUN_21f2_3454();
    piStack_8 = (int *)0xffff;
    pcStack_a = (char *)0x6;
    puStack_c = (undefined2 *)0x2;
    pcStack_e = acStack_237 + 1;
    pcStack_10 = (char *)0x22b2;
    uStack_12 = 0x6b6;
    iVar6 = func_0x00024ce4();
    local_10a = -(iVar6 / 2 + -0x32);
    pcStack_10 = acStack_237 + 1;
    uStack_12 = 0x22b2;
    uStack_14 = 0x6d4;
    pcStack_e = (char *)local_10a;
    FUN_1000_02b5();
    piStack_8 = (int *)0x41f5;
    pcStack_a = acStack_237 + 1;
    puStack_c = (undefined2 *)0xdef;
    pcStack_e = (char *)0x6e5;
    func_0x00024c86();
    piStack_8 = (int *)0x860;
    pcStack_a = acStack_237 + 1;
    puStack_c = (undefined2 *)0x22b2;
    pcStack_e = (char *)0x6f5;
    FUN_21f2_2d26();
    piStack_8 = (int *)0x41ff;
    pcStack_a = acStack_237 + 1;
    puStack_c = (undefined2 *)0x22b2;
    pcStack_e = (char *)0x705;
    FUN_21f2_2d26();
    piStack_8 = (int *)0x860;
    pcStack_a = acStack_237 + 1;
    puStack_c = (undefined2 *)0x22b2;
    pcStack_e = (char *)0x715;
    FUN_21f2_2d26();
    piStack_8 = (int *)0x4216;
    pcStack_a = acStack_237 + 1;
    puStack_c = (undefined2 *)0x22b2;
    pcStack_e = (char *)0x725;
    FUN_21f2_2d26();
    piStack_8 = (int *)(acStack_237 + 1);
    pcStack_a = (char *)0x4;
    puStack_c = (undefined2 *)0x22b2;
    pcStack_e = (char *)0x735;
    FUN_1def_07a4();
    *(undefined2 *)0xc2c = 1;
    piStack_8 = local_104;
    pcStack_a = (char *)&local_242;
    puStack_c = &local_23c;
    pcStack_e = acStack_237 + 1;
    pcStack_10 = (char *)local_8a;
    uStack_12 = 0x1bb4;
    uStack_14 = 0x75a;
    local_244 = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    if (*(int *)0x158 != 0) {
LAB_3ab8_5bfa:
      FUN_3ab8_6222();
      return;
    }
    piStack_8 = (int *)0x1bb4;
    uVar10 = 0x885;
    pcStack_a = (char *)0x773;
    func_0x0000c3ca();
    if (local_244 == 0x14) goto LAB_3ab8_5bfa;
    if (local_104[0] == 1) {
      local_244 = 1;
    }
    if (local_104[0] == 2) {
      local_244 = 2;
    }
    if ((local_244 == 1) || (local_244 == 2)) {
      local_8a = 0;
      if (local_244 == 1) {
        piStack_8 = (int *)0x885;
        uVar10 = 0x885;
        pcStack_a = (char *)0x7ba;
        func_0x0000c3ca();
        pcVar4 = (code *)swi(0x3f);
        (*pcVar4)();
        if (*(int *)0x158 != 0) {
          FUN_3ab8_6222();
          return;
        }
      }
      else {
        uVar11 = uVar10;
        if (local_244 == 2) {
          while( true ) {
            piStack_8 = (int *)0xd;
            pcStack_a = (char *)0x4226;
            puStack_c = (undefined2 *)0xd04;
            uVar10 = 0x22b2;
            pcStack_10 = (char *)0x871;
            pcStack_e = (char *)uVar11;
            func_0x00024d00();
            piStack_8 = (int *)local_2e;
            pcStack_a = local_7e;
            pcVar4 = (code *)swi(0x3f);
            iVar6 = (*pcVar4)();
            if (*(int *)0x158 != 0) {
              FUN_3ab8_6222();
              return;
            }
            if (iVar6 != 0) break;
            piStack_8 = (int *)0x22b2;
            uVar11 = 0x11f2;
            pcStack_a = (char *)0x89d;
            FUN_10ad_18a4();
            local_104[0] = 0;
            while( true ) {
              pcStack_a = (char *)0x8b1;
              piStack_8 = (int *)uVar11;
              FUN_4375_8094();
              FUN_21f2_3454();
              FUN_21f2_2d26();
              FUN_21f2_2d26();
              FUN_21f2_2d26();
              FUN_21f2_2d26();
              FUN_21f2_2d26();
              func_0x000297e6();
              func_0x00029d78();
              func_0x000299d1();
              FUN_21f2_3454();
              FUN_21f2_2d26();
              FUN_21f2_2d26();
              FUN_21f2_2d26();
              FUN_1def_07a4();
              *(undefined2 *)0xc20 = 1;
              uVar11 = 0x1bb4;
              iVar6 = FUN_1def_0904();
              *(undefined2 *)0xc20 = 0;
              if (*(int *)0x158 != 0) {
                FUN_3ab8_6222();
                return;
              }
              if ((0x61ff < iVar6) && (iVar6 < 0x6b01)) {
                uVar7 = (int)(iVar6 + 0x9f00U) >> 0xf;
                *(int *)0x168 = ((int)((iVar6 + 0x9f00U ^ uVar7) - uVar7) >> 8 ^ uVar7) - uVar7;
              }
              if (iVar6 == -1) break;
              if (iVar6 == 1) {
                local_104[0] = 0;
                piStack_8 = (int *)0x1bb4;
                pcStack_a = (char *)0x9f5;
                FUN_4375_8197();
              }
              if (iVar6 == 2) {
                local_104[0] = 0;
                piStack_8 = (int *)0x10ae;
                pcStack_a = (char *)0x1;
                puStack_c = (undefined2 *)0x1bb4;
                pcStack_e = (char *)0xa0e;
                uStack_86 = FUN_4375_8747();
              }
              if (*(int *)0x158 != 0) {
                FUN_3ab8_6222();
                return;
              }
              if (local_104[0] != 0) {
                piStack_8 = &local_242;
                pcStack_a = (char *)&local_23c;
                puStack_c = (undefined2 *)local_104[0];
                pcStack_e = (char *)0x1bb4;
                pcStack_10 = (char *)0xa3a;
                iVar6 = FUN_4375_7430();
                if (iVar6 != 0) {
                  func_0x0000c340();
                  func_0x00012276();
                  func_0x00012276();
                  func_0x00010526();
                  iVar6 = FUN_21f2_1348();
                  *(int *)0xd70 = iVar6;
                  if (iVar6 == 0) {
                    FUN_13bf_0a03();
                  }
                  func_0x0000daa6();
                  *(undefined2 *)0xbc0 = 1;
                  FUN_21f2_3154();
                  iVar6 = func_0x0002509c();
                  if ((iVar6 != 0) && (cVar5 = FUN_12c1_009c(), cVar5 != '\x1b')) {
                    if (*(int *)0x158 != 0) {
                      FUN_3ab8_6222();
                      return;
                    }
                    iVar6 = func_0x00024ce4();
                    pcVar1 = acStack_237 + iVar6;
                    if (*pcVar1 == '\n') {
                      *pcVar1 = '\0';
                    }
                    iVar6 = func_0x0002aa38();
                    if (iVar6 == 1) {
                      *pcVar1 = '\0';
                      FUN_21f2_32c4();
                      func_0x0002509c();
                    }
                    *(undefined1 *)0xc3b4 = *(undefined1 *)0x168;
                    *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
                    *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
                    iVar6 = func_0x00024ce4();
                    if (iVar6 != 0) {
                      uVar7 = func_0x00024ce4();
                      uStack_23e = 0;
                      while ((uStack_23e < uVar7 && (acStack_237[uStack_23e + 1] != '\0'))) {
                        iVar6 = func_0x0002aa38();
                        if ((iVar6 != 1) &&
                           ((iVar6 = func_0x0002aa38(), iVar6 != 2 &&
                            (acStack_237[uStack_23e + 1] == '\t')))) {
                          acStack_237[uStack_23e + 1] = ' ';
                        }
                        uStack_23e = uStack_23e + 1;
                      }
                      func_0x00018eff();
                      uVar10 = *(undefined2 *)0x9b40;
                      uVar11 = *(undefined2 *)0x9b42;
                      *(undefined2 *)0xc3a0 = uVar10;
                      *(undefined2 *)0xc3a2 = uVar11;
                      *(undefined2 *)0xc3a4 = uVar10;
                      *(undefined2 *)0xc3a6 = uVar11;
                      FUN_1def_0338();
                      func_0x000297e6();
                      func_0x00029bb5();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029bb5();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029d78();
                      func_0x000299d1();
                      func_0x000297e6();
                      func_0x00029d78();
                      func_0x000299d1();
                      puVar9 = (undefined2 *)&stack0x5c77;
                      FUN_4375_7ce3();
                      uVar10 = *(undefined2 *)0xbc78;
                      *(int *)0xc3b0 = (int)(acStack_237 + 1);
                      *(undefined2 *)0xc3b2 = uVar10;
                      puVar8 = (undefined2 *)0xc3a0;
                      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                        puVar3 = puVar9;
                        puVar9 = puVar9 + 1;
                        puVar2 = puVar8;
                        puVar8 = puVar8 + 1;
                        *puVar3 = *puVar2;
                      }
                      func_0x0001b198();
                      local_8a = local_8a + 1;
                      func_0x000297e6();
                      func_0x00029b85();
                      func_0x00029af6();
                      func_0x0002996b();
                      func_0x00029983();
                      func_0x000297e6();
                      func_0x00029d78();
                      func_0x000299d1();
                      puVar8 = (undefined2 *)FUN_1def_05d1();
                      local_23c = *puVar8;
                      uStack_23a = puVar8[1];
                      func_0x000297e6();
                      func_0x00029d78();
                      func_0x000299d1();
                      puVar8 = (undefined2 *)func_0x0001e558();
                      local_242 = *puVar8;
                      uStack_240 = puVar8[1];
                      FUN_3ab8_5f18();
                      return;
                    }
                    FUN_3ab8_5f18();
                    return;
                  }
                  func_0x0002504e();
                  *(undefined2 *)0xd70 = 0;
                  uVar10 = 0x885;
                  func_0x0000abfa();
                  goto LAB_3ab8_5af7;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (local_244 == 3) {
        piStack_8 = (int *)local_2e;
        pcStack_a = (char *)0x10ca;
        pcVar4 = (code *)swi(0x3f);
        iStack_84 = (*pcVar4)();
        if ((iStack_84 == 0) && (*(int *)0x158 == 0)) {
          FUN_10ad_18a4();
          FUN_3ab8_6222();
          return;
        }
        FUN_3ab8_6222();
        return;
      }
      if (local_244 == 4) {
        piStack_8 = (int *)0x885;
        pcStack_a = (char *)0x806;
        FUN_3ab8_5a19();
      }
      if (*(int *)0x158 != 0) {
        FUN_3ab8_6222();
        return;
      }
      if (local_244 == -1) {
        piStack_8 = (int *)0x0;
        pcStack_a = (char *)0x885;
        puStack_c = (undefined2 *)0x822;
        func_0x0000daa6();
        uVar10 = 0x885;
        for (; 0 < local_8a; local_8a = local_8a + -1) {
          piStack_8 = (int *)*(undefined2 *)0x150;
          puStack_c = (undefined2 *)0x832;
          pcStack_a = (char *)uVar10;
          func_0x000190c7();
          uVar10 = 0x18b3;
        }
        local_8a = 0;
        pcStack_a = (char *)0x849;
        piStack_8 = (int *)uVar10;
        func_0x0000abfa();
        piStack_8 = (int *)0x1;
        pcStack_a = (char *)0x885;
        uVar10 = 0x885;
        puStack_c = (undefined2 *)0x852;
        func_0x0000b1d8();
      }
    }
  } while( true );
}



/* 3ab8:5f18  FUN_3ab8_5f18  185 bytes, 1 callers */

void FUN_3ab8_5f18(void)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  int unaff_BP;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  int iStack_4;
  int iStack_2;
  
  uVar11 = 0x3ab8;
code_r0x00040a98:
  iStack_2 = unaff_BP + -0x2aa;
  iStack_4 = *(undefined2 *)0xd70;
  uStack_8 = 0xaa6;
  iStack_6 = uVar11;
  FUN_21f2_3154();
  iStack_2 = *(undefined2 *)0xd70;
  iStack_4 = 0x97;
  iStack_6 = unaff_BP + -0x234;
  uStack_8 = 0x22b2;
  uVar11 = 0x22b2;
  uStack_a = 0xaba;
  iVar6 = func_0x0002509c();
  if (iVar6 != 0) {
    iStack_2 = 0x22b2;
    uVar11 = 0x11f2;
    iStack_4 = 0xac6;
    cVar5 = FUN_12c1_009c();
    if (cVar5 != '\x1b') {
      if (*(int *)0x158 != 0) {
        FUN_3ab8_6222();
        return;
      }
      iStack_2 = unaff_BP + -0x234;
      iStack_4 = 0x11f2;
      iStack_6 = 0xaf1;
      iVar6 = func_0x00024ce4();
      *(int *)(unaff_BP + -0x2b8) = iVar6;
      pcVar1 = (char *)(unaff_BP + iVar6 + -0x235);
      *(undefined2 *)(unaff_BP + -0x2a6) = pcVar1;
      if (*pcVar1 == '\n') {
        *pcVar1 = '\0';
      }
      iStack_2 = *(int *)(unaff_BP + -0x2b8) + -1;
      iStack_4 = unaff_BP + -0x234;
      iStack_6 = 0x22b2;
      uVar11 = 0x2a75;
      uStack_8 = 0xb1a;
      iVar6 = func_0x0002aa38();
      if (iVar6 == 1) {
        *(undefined1 *)*(undefined2 *)(unaff_BP + -0x2a6) = 0;
        iStack_2 = unaff_BP + -0x2aa;
        iStack_4 = *(undefined2 *)0xd70;
        iStack_6 = 0x2a75;
        uStack_8 = 0xb34;
        FUN_21f2_32c4();
        iStack_2 = *(undefined2 *)0xd70;
        iStack_4 = *(undefined2 *)(unaff_BP + -0x2b8);
        iStack_6 = unaff_BP + -0x234;
        uStack_8 = 0x22b2;
        uVar11 = 0x22b2;
        uStack_a = 0xb48;
        func_0x0002509c();
      }
      *(undefined1 *)0xc3b4 = *(undefined1 *)0x168;
      *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
      *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
      iStack_2 = unaff_BP + -0x234;
      iStack_6 = 0xb66;
      iStack_4 = uVar11;
      iVar6 = func_0x00024ce4();
      *(int *)(unaff_BP + -0x2b8) = iVar6;
      if (iVar6 == 0) {
        FUN_3ab8_5f18();
        return;
      }
      iStack_2 = unaff_BP + -0x234;
      iStack_4 = 0x22b2;
      uVar10 = 0x22b2;
      iStack_6 = 0xb7c;
      uVar11 = func_0x00024ce4();
      *(undefined2 *)(unaff_BP + -0x2b8) = uVar11;
      *(undefined2 *)(unaff_BP + -0x23c) = 0;
      while ((*(uint *)(unaff_BP + -0x23c) < *(uint *)(unaff_BP + -0x2b8) &&
             (iStack_2 = *(int *)(unaff_BP + -0x23c),
             *(char *)(unaff_BP + iStack_2 + -0x234) != '\0'))) {
        iStack_4 = unaff_BP + -0x234;
        uStack_8 = 0xb94;
        iStack_6 = uVar10;
        iVar6 = func_0x0002aa38();
        if (iVar6 != 1) {
          iStack_2 = *(undefined2 *)(unaff_BP + -0x23c);
          iStack_4 = unaff_BP + -0x234;
          iStack_6 = 0x2a75;
          uStack_8 = 0xd85;
          iVar6 = func_0x0002aa38();
          if ((iVar6 != 2) && (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x23c) + -0x234) == '\t'))
          {
            *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x23c) + -0x234) = 0x20;
          }
        }
        uVar10 = 0x2a75;
        *(int *)(unaff_BP + -0x23c) = *(int *)(unaff_BP + -0x23c) + 1;
      }
      iStack_2 = *(undefined2 *)0x168;
      iStack_4 = 0;
      iStack_6 = unaff_BP + -0x234;
      uStack_a = 0xbc6;
      uStack_8 = uVar10;
      puVar7 = (undefined2 *)func_0x00018eff();
      uVar11 = puVar7[1];
      *(undefined2 *)(unaff_BP + -0x2b6) = *puVar7;
      *(undefined2 *)(unaff_BP + -0x2b4) = uVar11;
      uVar11 = *(undefined2 *)0x9b40;
      uVar10 = *(undefined2 *)0x9b42;
      *(undefined2 *)0xc3a0 = uVar11;
      *(undefined2 *)0xc3a2 = uVar10;
      *(undefined2 *)0xc3a4 = uVar11;
      *(undefined2 *)0xc3a6 = uVar10;
      uVar11 = *(undefined2 *)(unaff_BP + -0x2b4);
      *(undefined2 *)(unaff_BP + -0x2ae) = *(undefined2 *)(unaff_BP + -0x2b6);
      *(undefined2 *)(unaff_BP + -0x2ac) = uVar11;
      uVar11 = *(undefined2 *)0x9b42;
      *(undefined2 *)(unaff_BP + -0x2b2) = *(undefined2 *)0x9b40;
      *(undefined2 *)(unaff_BP + -0x2b0) = uVar11;
      iStack_2 = unaff_BP + -0x2b2;
      iStack_4 = unaff_BP + -0x2ae;
      iStack_6 = 0;
      uStack_8 = 0x18b3;
      uStack_a = 0xc1e;
      FUN_1def_0338();
      iStack_2 = 0x1bb4;
      iStack_4 = 0xc2a;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xc33;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xc3c;
      func_0x00029983();
      iStack_2 = 0x22b2;
      iStack_4 = 0xc45;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xc4e;
      func_0x00029bb5();
      iStack_2 = 0x22b2;
      iStack_4 = 0xc57;
      func_0x00029983();
      iStack_2 = 0x22b2;
      iStack_4 = 0xc60;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xc65;
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xc6f;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xc78;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xc7d;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xc87;
      func_0x000299d1();
      uStack_12 = *(undefined2 *)0x9bb6;
      uStack_14 = *(undefined2 *)0x9bb4;
      uStack_16 = *(undefined2 *)0x9bb2;
      uStack_18 = *(undefined2 *)0x9bb0;
      puVar9 = &uStack_18;
      FUN_4375_7ce3(0x22b2);
      uVar11 = *(undefined2 *)0xbc78;
      *(int *)0xc3b0 = unaff_BP + -0x234;
      *(undefined2 *)0xc3b2 = uVar11;
      puVar7 = (undefined2 *)0xc3a0;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar2;
      }
      func_0x0001b198(0x22b2);
      *(int *)(unaff_BP + -0x88) = *(int *)(unaff_BP + -0x88) + 1;
      iStack_2 = 0x18b3;
      iStack_4 = 0xcd0;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xcd9;
      func_0x00029b85();
      iStack_2 = 0x22b2;
      iStack_4 = 0xcde;
      func_0x00029af6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xce7;
      func_0x0002996b();
      iStack_2 = 0x22b2;
      iStack_4 = 0xcf0;
      func_0x00029983();
      iStack_2 = 0x22b2;
      iStack_4 = 0xcf9;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xcfe;
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xd08;
      func_0x000299d1();
      uStack_a = *(undefined2 *)0x9b9a;
      uStack_c = *(undefined2 *)0x9b98;
      uStack_e = *(undefined2 *)0x9b96;
      uStack_10 = *(undefined2 *)0x9b94;
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0xd20;
      puVar7 = (undefined2 *)FUN_1def_05d1();
      uVar11 = puVar7[1];
      *(undefined2 *)(unaff_BP + -0x23a) = *puVar7;
      *(undefined2 *)(unaff_BP + -0x238) = uVar11;
      iStack_2 = 0x1bb4;
      iStack_4 = 0xd3b;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xd40;
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xd4a;
      func_0x000299d1();
      uStack_a = *(undefined2 *)0x9b9a;
      uStack_c = *(undefined2 *)0x9b98;
      uStack_e = *(undefined2 *)0x9b96;
      uStack_10 = *(undefined2 *)0x9b94;
      uStack_12 = 0;
      uStack_14 = 0x22b2;
      uStack_16 = 0xd62;
      puVar7 = (undefined2 *)func_0x0001e558();
      uVar11 = puVar7[1];
      *(undefined2 *)(unaff_BP + -0x240) = *puVar7;
      *(undefined2 *)(unaff_BP + -0x23e) = uVar11;
      FUN_3ab8_5f18();
      return;
    }
  }
  iStack_4 = 0xacf;
  iStack_2 = uVar11;
  func_0x0002504e();
  *(undefined2 *)0xd70 = 0;
  iStack_2 = 0x22b2;
  iStack_4 = 0xada;
  func_0x0000abfa();
  do {
    do {
      while( true ) {
        while( true ) {
          if (*(int *)0xc22 < 1) {
            *(undefined2 *)0xc22 = 1;
          }
          FUN_21f2_3454();
          iVar6 = func_0x00024ce4();
          *(int *)(unaff_BP + -0x108) = iVar6;
          *(int *)(unaff_BP + -0x108) = -(iVar6 / 2 + -0x32);
          FUN_1000_02b5();
          func_0x00024c86();
          FUN_21f2_2d26();
          FUN_21f2_2d26();
          FUN_21f2_2d26();
          FUN_21f2_2d26();
          FUN_1def_07a4();
          *(undefined2 *)0xc2c = 1;
          uVar11 = FUN_1def_0904();
          *(undefined2 *)(unaff_BP + -0x242) = uVar11;
          *(undefined2 *)0xc2c = 0;
          if ((*(int *)0x158 != 0) || (func_0x0000c3ca(), *(int *)(unaff_BP + -0x242) == 0x14)) {
            FUN_3ab8_6222();
            return;
          }
          if (*(int *)(unaff_BP + -0x102) == 1) {
            *(undefined2 *)(unaff_BP + -0x242) = 1;
          }
          if (*(int *)(unaff_BP + -0x102) == 2) {
            *(undefined2 *)(unaff_BP + -0x242) = 2;
          }
          if ((*(int *)(unaff_BP + -0x242) == 1) || (*(int *)(unaff_BP + -0x242) == 2)) break;
          if (*(int *)(unaff_BP + -0x242) == 3) {
            pcVar4 = (code *)swi(0x3f);
            iVar6 = (*pcVar4)();
            *(int *)(unaff_BP + -0x82) = iVar6;
            if ((iVar6 == 0) && (*(int *)0x158 == 0)) {
              FUN_10ad_18a4();
              FUN_3ab8_6222();
              return;
            }
            FUN_3ab8_6222();
            return;
          }
          if (*(int *)(unaff_BP + -0x242) == 4) {
            FUN_3ab8_5a19();
          }
          if (*(int *)0x158 != 0) {
            FUN_3ab8_6222();
            return;
          }
          if (*(int *)(unaff_BP + -0x242) == -1) {
            func_0x0000daa6();
            while (0 < *(int *)(unaff_BP + -0x88)) {
              *(undefined2 *)(unaff_BP + -0x2a6) = *(undefined2 *)0x150;
              func_0x000190c7();
              *(int *)(unaff_BP + -0x88) = *(int *)(unaff_BP + -0x88) + -1;
            }
            *(undefined2 *)(unaff_BP + -0x88) = 0;
            func_0x0000abfa();
            func_0x0000b1d8();
          }
        }
        *(undefined2 *)(unaff_BP + -0x88) = 0;
        if (*(int *)(unaff_BP + -0x242) != 1) break;
        func_0x0000c3ca();
        pcVar4 = (code *)swi(0x3f);
        (*pcVar4)();
        if (*(int *)0x158 != 0) {
          FUN_3ab8_6222();
          return;
        }
      }
    } while (*(int *)(unaff_BP + -0x242) != 2);
    while( true ) {
      func_0x00024d00();
      pcVar4 = (code *)swi(0x3f);
      iVar6 = (*pcVar4)();
      *(int *)(unaff_BP + -0x2a2) = iVar6;
      if (*(int *)0x158 != 0) {
        FUN_3ab8_6222();
        return;
      }
      if (iVar6 != 0) break;
      uVar11 = 0x11f2;
      FUN_10ad_18a4();
      *(undefined2 *)(unaff_BP + -0x102) = 0;
LAB_3ab8_5d23:
      if (*(int *)(unaff_BP + -0x242) != 2) goto LAB_3ab8_5ec4;
      iStack_4 = 0x8b1;
      iStack_2 = uVar11;
      FUN_4375_8094();
      FUN_21f2_3454();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      func_0x000297e6();
      func_0x00029d78();
      func_0x000299d1();
      FUN_21f2_3454();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_21f2_2d26();
      FUN_1def_07a4();
      *(undefined2 *)0xc20 = 1;
      uVar11 = 0x1bb4;
      iVar6 = FUN_1def_0904();
      *(int *)(unaff_BP + -0x2a4) = iVar6;
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        FUN_3ab8_6222();
        return;
      }
      if ((0x61ff < iVar6) && (iVar6 < 0x6b01)) {
        uVar8 = (int)(iVar6 + 0x9f00U) >> 0xf;
        *(int *)0x168 = ((int)((iVar6 + 0x9f00U ^ uVar8) - uVar8) >> 8 ^ uVar8) - uVar8;
      }
      if (*(int *)(unaff_BP + -0x2a4) != -1) goto LAB_3ab8_5e64;
    }
  } while( true );
LAB_3ab8_5e64:
  if (*(int *)(unaff_BP + -0x2a4) == 1) {
    *(undefined2 *)(unaff_BP + -0x102) = 0;
    FUN_4375_8197();
  }
  if (*(int *)(unaff_BP + -0x2a4) == 2) {
    *(undefined2 *)(unaff_BP + -0x102) = 0;
    uVar10 = FUN_4375_8747();
    *(undefined2 *)(unaff_BP + -0x84) = uVar10;
  }
  if (*(int *)0x158 != 0) {
    FUN_3ab8_6222();
    return;
  }
  if ((*(int *)(unaff_BP + -0x102) != 0) && (iVar6 = FUN_4375_7430(), iVar6 != 0)) {
LAB_3ab8_5ec4:
    if (*(int *)(unaff_BP + -0x242) == 2) {
      iStack_4 = 0xa50;
      iStack_2 = uVar11;
      func_0x0000c340();
      iStack_2 = 0x423f;
      iStack_4 = 0x885;
      iStack_6 = 0xa59;
      func_0x00012276();
      iStack_2 = 0x728;
      iStack_4 = 0x11f2;
      iStack_6 = 0xa63;
      func_0x00012276();
      iStack_2 = 0x11f2;
      uVar11 = 0xdef;
      iStack_4 = 0xa69;
      func_0x00010526();
    }
    iStack_2 = 0x254;
    iStack_4 = unaff_BP + -0x7c;
    uVar10 = 0x22b2;
    uStack_8 = 0xa76;
    iStack_6 = uVar11;
    iVar6 = FUN_21f2_1348();
    *(int *)0xd70 = iVar6;
    if (iVar6 == 0) {
      iStack_2 = 0x4250;
      iStack_4 = 0x22b2;
      uVar10 = 0x11f2;
      iStack_6 = 0xa88;
      FUN_13bf_0a03();
    }
    iStack_2 = 0;
    uVar11 = 0x885;
    iStack_6 = 0xa91;
    iStack_4 = uVar10;
    func_0x0000daa6();
    *(undefined2 *)0xbc0 = 1;
    goto code_r0x00040a98;
  }
  goto LAB_3ab8_5d23;
}



/* 3ab8:5fd3  FUN_3ab8_5fd3  591 bytes, 1 callers */

void FUN_3ab8_5fd3(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  int unaff_BP;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  int iStack_4;
  int iStack_2;
  
  *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
  iStack_2 = unaff_BP + -0x234;
  iStack_4 = 0x3ab8;
  iStack_6 = 0xb66;
  iVar3 = func_0x00024ce4();
  *(int *)(unaff_BP + -0x2b8) = iVar3;
  if (iVar3 != 0) {
    iStack_2 = unaff_BP + -0x234;
    iStack_4 = 0x22b2;
    uVar7 = 0x22b2;
    iStack_6 = 0xb7c;
    uVar4 = func_0x00024ce4();
    *(undefined2 *)(unaff_BP + -0x2b8) = uVar4;
    *(undefined2 *)(unaff_BP + -0x23c) = 0;
    while ((*(uint *)(unaff_BP + -0x23c) < *(uint *)(unaff_BP + -0x2b8) &&
           (iStack_2 = *(int *)(unaff_BP + -0x23c), *(char *)(unaff_BP + iStack_2 + -0x234) != '\0')
           )) {
      iStack_4 = unaff_BP + -0x234;
      uStack_8 = 0xb94;
      iStack_6 = uVar7;
      iVar3 = func_0x0002aa38();
      if (iVar3 != 1) {
        iStack_2 = *(undefined2 *)(unaff_BP + -0x23c);
        iStack_4 = unaff_BP + -0x234;
        iStack_6 = 0x2a75;
        uStack_8 = 0xd85;
        iVar3 = func_0x0002aa38();
        if ((iVar3 != 2) && (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x23c) + -0x234) == '\t')) {
          *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x23c) + -0x234) = 0x20;
        }
      }
      uVar7 = 0x2a75;
      *(int *)(unaff_BP + -0x23c) = *(int *)(unaff_BP + -0x23c) + 1;
    }
    iStack_2 = *(undefined2 *)0x168;
    iStack_4 = 0;
    iStack_6 = unaff_BP + -0x234;
    uStack_a = 0xbc6;
    uStack_8 = uVar7;
    puVar5 = (undefined2 *)func_0x00018eff();
    uVar4 = puVar5[1];
    *(undefined2 *)(unaff_BP + -0x2b6) = *puVar5;
    *(undefined2 *)(unaff_BP + -0x2b4) = uVar4;
    uVar4 = *(undefined2 *)0x9b40;
    uVar7 = *(undefined2 *)0x9b42;
    *(undefined2 *)0xc3a0 = uVar4;
    *(undefined2 *)0xc3a2 = uVar7;
    *(undefined2 *)0xc3a4 = uVar4;
    *(undefined2 *)0xc3a6 = uVar7;
    uVar4 = *(undefined2 *)(unaff_BP + -0x2b4);
    *(undefined2 *)(unaff_BP + -0x2ae) = *(undefined2 *)(unaff_BP + -0x2b6);
    *(undefined2 *)(unaff_BP + -0x2ac) = uVar4;
    uVar4 = *(undefined2 *)0x9b42;
    *(undefined2 *)(unaff_BP + -0x2b2) = *(undefined2 *)0x9b40;
    *(undefined2 *)(unaff_BP + -0x2b0) = uVar4;
    iStack_2 = unaff_BP + -0x2b2;
    iStack_4 = unaff_BP + -0x2ae;
    iStack_6 = 0;
    uStack_8 = 0x18b3;
    uStack_a = 0xc1e;
    FUN_1def_0338();
    iStack_2 = 0x1bb4;
    iStack_4 = 0xc2a;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xc33;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xc3c;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0xc45;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xc4e;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    iStack_4 = 0xc57;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0xc60;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xc65;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xc6f;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xc78;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xc7d;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc87;
    func_0x000299d1();
    uStack_12 = *(undefined2 *)0x9bb6;
    uStack_14 = *(undefined2 *)0x9bb4;
    uStack_16 = *(undefined2 *)0x9bb2;
    uStack_18 = *(undefined2 *)0x9bb0;
    puVar6 = &uStack_18;
    FUN_4375_7ce3(0x22b2);
    uVar4 = *(undefined2 *)0xbc78;
    *(int *)0xc3b0 = unaff_BP + -0x234;
    *(undefined2 *)0xc3b2 = uVar4;
    puVar5 = (undefined2 *)0xc3a0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    func_0x0001b198(0x22b2);
    *(int *)(unaff_BP + -0x88) = *(int *)(unaff_BP + -0x88) + 1;
    iStack_2 = 0x18b3;
    iStack_4 = 0xcd0;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xcd9;
    func_0x00029b85();
    iStack_2 = 0x22b2;
    iStack_4 = 0xcde;
    func_0x00029af6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xce7;
    func_0x0002996b();
    iStack_2 = 0x22b2;
    iStack_4 = 0xcf0;
    func_0x00029983();
    iStack_2 = 0x22b2;
    iStack_4 = 0xcf9;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xcfe;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xd08;
    func_0x000299d1();
    uStack_a = *(undefined2 *)0x9b9a;
    uStack_c = *(undefined2 *)0x9b98;
    uStack_e = *(undefined2 *)0x9b96;
    uStack_10 = *(undefined2 *)0x9b94;
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xd20;
    puVar5 = (undefined2 *)FUN_1def_05d1();
    uVar4 = puVar5[1];
    *(undefined2 *)(unaff_BP + -0x23a) = *puVar5;
    *(undefined2 *)(unaff_BP + -0x238) = uVar4;
    iStack_2 = 0x1bb4;
    iStack_4 = 0xd3b;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xd40;
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xd4a;
    func_0x000299d1();
    uStack_a = *(undefined2 *)0x9b9a;
    uStack_c = *(undefined2 *)0x9b98;
    uStack_e = *(undefined2 *)0x9b96;
    uStack_10 = *(undefined2 *)0x9b94;
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xd62;
    puVar5 = (undefined2 *)func_0x0001e558();
    uVar4 = puVar5[1];
    *(undefined2 *)(unaff_BP + -0x240) = *puVar5;
    *(undefined2 *)(unaff_BP + -0x23e) = uVar4;
    FUN_3ab8_5f18();
    return;
  }
  FUN_3ab8_5f18();
  return;
}



/* 3ab8:6222  FUN_3ab8_6222  6 bytes, 2 callers */

void __cdecl16far FUN_3ab8_6222(void)

{
  return;
}



/* 3ab8:6228  FUN_3ab8_6228  572 bytes, 0 callers */

void __cdecl16far FUN_3ab8_6228(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 *local_74 [45];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 *puStack_a;
  undefined2 *local_8;
  undefined2 *local_6;
  undefined2 ***local_4;
  
  local_4 = (undefined2 ***)0x3ab8;
  uVar2 = 0x22b2;
  local_6 = (undefined2 *)0xdb3;
  FUN_21f2_0ebc();
  do {
    do {
      while( true ) {
        local_4 = (undefined2 ***)0x4265;
        local_6 = local_74;
        puStack_a = (undefined2 *)0xf26;
        local_8 = (undefined2 *)uVar2;
        func_0x00024c86();
        local_4 = (undefined2 ***)0x652;
        local_6 = local_74;
        local_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined2 *)0xf35;
        FUN_21f2_2d26();
        local_4 = (undefined2 ***)0x426b;
        local_6 = local_74;
        local_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined2 *)0xf44;
        FUN_21f2_2d26();
        local_4 = (undefined2 ***)0x98a;
        local_6 = local_74;
        local_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined2 *)0xf53;
        FUN_21f2_2d26();
        local_4 = (undefined2 ***)0x5d6;
        local_6 = local_74;
        local_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined2 *)0xf62;
        FUN_21f2_2d26();
        local_4 = (undefined2 ***)0x652;
        local_6 = local_74;
        local_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined2 *)0xf71;
        FUN_21f2_2d26();
        local_4 = (undefined2 ***)0x98a;
        local_6 = local_74;
        local_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined2 *)0xf80;
        FUN_21f2_2d26();
        local_4 = (undefined2 ***)0x4287;
        local_6 = local_74;
        local_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined2 *)0xf8f;
        FUN_21f2_2d26();
        local_4 = (undefined2 ***)0x98a;
        local_6 = local_74;
        local_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined2 *)0xf9e;
        FUN_21f2_2d26();
        local_4 = (undefined2 ***)local_74;
        local_6 = (undefined2 *)0x7;
        local_8 = (undefined2 *)0x22b2;
        puStack_a = (undefined2 *)0xfad;
        FUN_1def_07a4();
        *(undefined2 *)0xc1a = 1;
        local_4 = &local_4;
        local_6 = &local_10;
        local_8 = &local_c;
        puStack_a = local_74;
        local_c = 0;
        uStack_e = 0x1bb4;
        uVar2 = 0x1bb4;
        local_10 = 0xfcd;
        local_8 = (undefined2 *)FUN_1def_0904();
        *(undefined2 *)0xc1a = 0;
        if (*(int *)0x158 != 0) {
          return;
        }
        if (*(int *)0xc18 == 0) break;
        local_4 = (undefined2 ***)0x1bb4;
        local_6 = (undefined2 *)0xdcd;
        func_0x000297e6();
        local_4 = (undefined2 ***)0x22b2;
        local_6 = (undefined2 *)0xdd2;
        func_0x00029d78();
        local_c = 0x22b2;
        uStack_e = 0xddc;
        func_0x000299d1();
        local_c = 0x22b2;
        uStack_e = 0xde4;
        func_0x000297e6();
        local_c = 0x22b2;
        uStack_e = 0xde9;
        func_0x00029d78();
        uStack_14 = 0x22b2;
        uStack_16 = 0xdf3;
        func_0x000299d1();
        uStack_14 = 0x22b2;
        uVar2 = 0x3bf;
        uStack_16 = 0xdf8;
        func_0x0000507a();
      }
      if ((undefined2 ****)local_4 == (undefined2 ****)0x1) {
        local_8 = (undefined2 *)0x1;
      }
      if ((undefined2 ****)local_4 == (undefined2 ****)0x2) {
        local_8 = (undefined2 *)0x2;
      }
    } while (((int)local_8 < 1) || (7 < (int)local_8));
    local_4 = (undefined2 ***)0x1bb4;
    uVar2 = 0x885;
    local_6 = (undefined2 *)0xe2b;
    func_0x0000c3ca();
    if (local_8 == (undefined2 *)0x1) {
      local_4 = (undefined2 ***)*(undefined2 *)0x9b9a;
      local_6 = (undefined2 *)*(undefined2 *)0x9b98;
      local_8 = (undefined2 *)*(int *)0x9b96;
      puStack_a = (undefined2 *)*(int *)0x9b94;
      local_c = *(undefined2 *)0x9b9a;
      uStack_e = *(undefined2 *)0x9b98;
      local_10 = *(undefined2 *)0x9b96;
      uStack_12 = *(undefined2 *)0x9b94;
      uStack_14 = 0;
      uStack_16 = 0x885;
      uStack_18 = 0xe58;
      FUN_4375_a297();
    }
    if (local_8 == (undefined2 *)0x2) {
      local_4 = (undefined2 ***)0x0;
      local_6 = (undefined2 *)*(undefined2 *)0x9b9a;
      local_8 = (undefined2 *)*(int *)0x9b98;
      puStack_a = (undefined2 *)*(int *)0x9b96;
      local_c = *(undefined2 *)0x9b94;
      uStack_e = *(undefined2 *)0x9b9a;
      local_10 = *(undefined2 *)0x9b98;
      uStack_12 = *(undefined2 *)0x9b96;
      uStack_14 = *(undefined2 *)0x9b94;
      uStack_16 = 0;
      uStack_18 = 0x885;
      uStack_1a = 0xe89;
      FUN_4375_a81e();
    }
    if (local_8 == (undefined2 *)0x3) {
      local_4 = (undefined2 ***)0x1;
      local_6 = (undefined2 *)*(undefined2 *)0x9b9a;
      local_8 = (undefined2 *)*(int *)0x9b98;
      puStack_a = (undefined2 *)*(int *)0x9b96;
      local_c = *(undefined2 *)0x9b94;
      uStack_e = *(undefined2 *)0x9b9a;
      local_10 = *(undefined2 *)0x9b98;
      uStack_12 = *(undefined2 *)0x9b96;
      uStack_14 = *(undefined2 *)0x9b94;
      uStack_16 = 0;
      uStack_18 = 0x885;
      uStack_1a = 0xebd;
      FUN_4375_a81e();
    }
    if (local_8 == (undefined2 *)0x4) {
      local_4 = (undefined2 ***)0x885;
      local_6 = (undefined2 *)0xeca;
      FUN_4375_88aa();
    }
    if (local_8 == (undefined2 *)0x5) {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    if (local_8 == (undefined2 *)0x6) {
      local_4 = (undefined2 ***)*(undefined2 *)0x9b9a;
      local_6 = (undefined2 *)*(undefined2 *)0x9b98;
      local_8 = (undefined2 *)*(int *)0x9b96;
      puStack_a = (undefined2 *)*(int *)0x9b94;
      local_c = *(undefined2 *)0x9b9a;
      uStack_e = *(undefined2 *)0x9b98;
      local_10 = *(undefined2 *)0x9b96;
      uStack_12 = *(undefined2 *)0x9b94;
      uStack_14 = 0;
      uStack_16 = 0x885;
      uStack_18 = 0xf02;
      FUN_4375_bc4c();
    }
    if (local_8 == (undefined2 *)0x7) {
      local_4 = (undefined2 ***)0x885;
      local_6 = (undefined2 *)0xf0f;
      FUN_4375_c6c3();
    }
  } while (*(int *)0x158 == 0);
  return;
}



/* 3ab8:6467  FUN_3ab8_6467  3239 bytes, 1 callers */

void __cdecl16far FUN_3ab8_6467(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  undefined2 local_220 [8];
  undefined1 local_210;
  undefined1 local_20f;
  undefined1 local_20e;
  int local_1f8;
  undefined2 local_1e2;
  undefined2 local_1e0;
  int local_1da;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined1 local_1ca [306];
  undefined2 local_98;
  undefined2 local_96;
  int local_94;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined1 local_80 [16];
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 local_68;
  undefined2 local_66;
  int local_64;
  undefined2 local_56;
  int local_46;
  undefined1 local_42 [24];
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 *puStack_a;
  
  FUN_21f2_0ebc();
  local_70 = *(undefined2 *)0x9bc8;
  uStack_6e = *(undefined2 *)0x9bca;
  uStack_6c = *(undefined2 *)0x9bcc;
  uStack_6a = *(undefined2 *)0x9bce;
  puStack_a = (undefined2 *)local_42;
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0x100d;
  FUN_21f2_3454();
  puStack_a = (undefined2 *)local_80;
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0x101c;
  FUN_21f2_3454();
  if (param_1 != 0) {
    local_1da = 1;
    goto LAB_3ab8_659e;
  }
LAB_3ab8_6603:
  do {
    local_64 = 0;
    local_46 = 0;
    do {
      do {
        while( true ) {
          if (param_1 != 0) goto LAB_3ab8_659e;
          if (*(int *)0x158 != 0) {
            return;
          }
          puStack_a = (undefined2 *)0x119f;
          FUN_4375_8094();
          FUN_21f2_3454();
          FUN_21f2_2d26();
          FUN_21f2_2d26();
          FUN_1def_07a4();
          *(undefined2 *)0xc1a = 1;
          *(undefined2 *)0xc20 = 1;
          local_1da = FUN_1def_0904();
          *(undefined2 *)0xc1a = 0;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) {
            return;
          }
          if (*(int *)0xc18 == 0) break;
          local_64 = 0;
          puStack_a = (undefined2 *)0x10b0;
          func_0x000297e6();
          puStack_a = (undefined2 *)0x10b5;
          func_0x00029d78();
          uStack_10 = 0x22b2;
          uStack_12 = 0x10bf;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          uStack_12 = 0x10c8;
          func_0x000297e6();
          uStack_10 = 0x22b2;
          uStack_12 = 0x10cd;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          uStack_1a = 0x10d7;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          uStack_1a = 0x10dc;
          func_0x0000507a();
        }
        if ((0x61ff < local_1da) && (local_1da < 0x6b01)) {
          uVar6 = (int)(local_1da + 0x9f00U) >> 0xf;
          *(int *)0x168 = ((int)((local_1da + 0x9f00U ^ uVar6) - uVar6) >> 8 ^ uVar6) - uVar6;
        }
        if (((0 < local_1da) && (local_1da < 4)) || (local_1da == 5)) goto LAB_3ab8_659e;
        if (local_1da == 4) {
          local_94 = 0;
          puStack_a = (undefined2 *)0x11ef;
          FUN_4375_88aa();
        }
        if (local_1da == 6) {
          local_94 = 0;
          *(int *)0x4344 = 1 - *(int *)0x4344;
        }
      } while (local_94 == 0);
      puStack_a = &local_1d0;
      puStack_c = (undefined1 *)local_94;
      uStack_e = 0x1bb4;
      uStack_10 = 0x1222;
      iVar4 = FUN_4375_7430();
    } while (iVar4 == 0);
    local_46 = 0;
    local_1da = 0;
LAB_3ab8_659e:
    local_64 = 0;
    if (local_1da < 2) {
      local_98 = *(undefined2 *)0x9b40;
      local_96 = *(undefined2 *)0x9b42;
    }
    if (local_1da == 2) {
      local_98 = *(undefined2 *)0x9bdc;
      local_96 = *(undefined2 *)0x9bde;
      if (*(int *)0x4344 != 0) {
        local_98 = *(undefined2 *)0x9be0;
        local_96 = *(undefined2 *)0x9be2;
      }
    }
    if (local_1da == 3) {
      puStack_a = (undefined2 *)0x0;
      pcVar3 = (code *)swi(0x3f);
      iVar4 = (*pcVar3)();
      if (iVar4 == -1) goto LAB_3ab8_6603;
      if (*(int *)0x158 != 0) {
        return;
      }
      local_98 = *(undefined2 *)0x434a;
      local_96 = *(undefined2 *)0x434c;
    }
    if ((-1 < local_1da) && (local_1da < 4)) {
LAB_3ab8_66e2:
      do {
        if (local_1da == 0) {
LAB_3ab8_66e9:
          do {
            if (local_1da == 0) {
              local_1da = 1;
            }
            *(undefined2 *)0xc3a0 = local_1d0;
            *(undefined2 *)0xc3a2 = local_1ce;
            *(undefined2 *)0xc3a4 = local_1e2;
            *(undefined2 *)0xc3a6 = local_1e0;
            *(undefined1 *)0xc3b4 = *(undefined1 *)0x168;
            *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
            if (*(int *)0xcb6 == 0) {
              puStack_a = (undefined2 *)0x1709;
              func_0x000297e6();
            }
            else {
              puStack_a = (undefined2 *)0x12b3;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x12bc;
              func_0x00029bb5();
            }
            puStack_a = (undefined2 *)0x170e;
            func_0x00029d78();
            puStack_a = (undefined2 *)0x1716;
            func_0x00029c2c();
            puStack_a = (undefined2 *)0x171f;
            func_0x000299d1();
            puStack_a = (undefined2 *)local_84;
            puStack_c = (undefined1 *)local_86;
            uStack_e = local_88;
            uStack_10 = 0x22b2;
            uStack_12 = 0x1733;
            func_0x0002a11e();
            puStack_a = (undefined2 *)0x173d;
            func_0x00029834();
            puStack_a = (undefined2 *)0x1745;
            func_0x00029983();
            puStack_a = (undefined2 *)local_84;
            puStack_c = (undefined1 *)local_86;
            uStack_e = local_88;
            uStack_10 = 0x22b2;
            uStack_12 = 0x1759;
            func_0x0002a10c();
            puStack_a = (undefined2 *)0x1763;
            func_0x00029834();
            puStack_a = (undefined2 *)0x176b;
            func_0x00029983();
            puStack_a = (undefined2 *)0x1774;
            func_0x000297e6();
            puStack_a = (undefined2 *)0x177c;
            func_0x00029bb5();
            puStack_a = (undefined2 *)0x1781;
            func_0x00029d78();
            uStack_10 = 0x22b2;
            uStack_12 = 0x178b;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            uStack_12 = 0x1794;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            uStack_12 = 0x179c;
            func_0x00029bb5();
            uStack_10 = 0x22b2;
            uStack_12 = 0x17a1;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0x17ab;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            uStack_1a = 0x17b4;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            uStack_1a = 0x17b9;
            func_0x00029d78();
            uStack_22 = 0x17c3;
            func_0x000299d1();
            uStack_22 = 0x17cc;
            func_0x000297e6();
            uStack_22 = 0x17d1;
            func_0x00029d78();
            uStack_28 = 0x22b2;
            uStack_2a = 0x17db;
            func_0x000299d1();
            uStack_28 = 0x22b2;
            uStack_2a = 0x17e0;
            FUN_1def_043a();
            *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
            if ((param_1 == 0) && (*(int *)0x4344 != 0)) {
              *(byte *)0xc3b6 = *(byte *)0xc3b6 | 0x20;
            }
            local_1ca[0] = 0;
            puStack_a = (undefined2 *)local_46;
            puStack_c = (undefined1 *)0x1bb4;
            uStack_e = 0x180b;
            FUN_3ab8_74d4();
            puStack_a = (undefined2 *)0x1bb4;
            puStack_c = (undefined1 *)0x1817;
            iVar4 = func_0x00024ce4();
            if (iVar4 == 0) {
              if (param_1 != 0) {
                return;
              }
              goto LAB_3ab8_66e2;
            }
            puStack_a = (undefined2 *)*(undefined2 *)0x4344;
            puStack_c = local_1ca;
            uStack_e = 0x22b2;
            uStack_10 = 0x1839;
            puVar5 = (undefined2 *)func_0x00018eff();
            local_68 = *puVar5;
            local_66 = puVar5[1];
            puStack_a = (undefined2 *)0x1851;
            func_0x000297e6();
            puStack_a = (undefined2 *)0x1859;
            func_0x00029b6d();
            puStack_a = (undefined2 *)0x1862;
            func_0x00029bb5();
            puStack_a = (undefined2 *)0x186b;
            func_0x00029983();
            puStack_a = (undefined2 *)0x1873;
            func_0x000297e6();
            puStack_a = (undefined2 *)0x187b;
            func_0x00029b6d();
            puStack_a = (undefined2 *)0x1884;
            func_0x00029bb5();
            puStack_a = (undefined2 *)0x188d;
            func_0x00029983();
            uVar8 = *(undefined2 *)0xbc78;
            *(int *)0xc3b0 = (int)local_1ca;
            *(undefined2 *)0xc3b2 = uVar8;
            puStack_a = (undefined2 *)0x18a4;
            func_0x000297e6();
            puStack_a = (undefined2 *)0x18a9;
            func_0x00029d78();
            uStack_10 = 0x22b2;
            uStack_12 = 0x18b3;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            uStack_12 = 0x18bc;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            uStack_12 = 0x18c1;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uVar8 = 0x22b2;
            uStack_1a = 0x18cb;
            func_0x000299d1();
            uStack_18 = *(undefined2 *)0x9bb6;
            uStack_1a = *(undefined2 *)0x9bb4;
            uStack_1c = *(undefined2 *)0x9bb2;
            uStack_22 = 0x18df;
            FUN_4375_7ce3();
            if ((param_1 != 0) && (*(char *)0x434e != '\0')) {
              puStack_a = (undefined2 *)0x22b2;
              puStack_c = (undefined1 *)0x18fd;
              func_0x0000daa6();
              local_20f = *(undefined1 *)0xa6a;
              local_210 = *(undefined1 *)0xa6c;
              local_20e = *(undefined1 *)0xb310;
              puStack_a = (undefined2 *)0x1924;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x192d;
              func_0x00029b85();
              puStack_a = (undefined2 *)0x1936;
              func_0x0002996b();
              puStack_a = (undefined2 *)0x193e;
              FUN_28b3_0ee9();
              if (*(int *)0x1096 == 2) {
                puStack_a = (undefined2 *)0x194e;
                func_0x000297e6();
                puStack_a = (undefined2 *)0x1953;
                func_0x00029af6();
                puStack_a = (undefined2 *)0x195c;
                func_0x00029983();
              }
              puStack_a = (undefined2 *)0x1965;
              func_0x00029834();
              uVar9 = *(int *)0x1098 << 1 < 0;
              puStack_a = (undefined2 *)0x1976;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x197f;
              func_0x00029b85();
              puStack_a = (undefined2 *)0x1988;
              func_0x0002996b();
              puStack_a = (undefined2 *)0x198d;
              func_0x00029ae7();
              puStack_a = (undefined2 *)0x1992;
              func_0x00029d78();
              puStack_a = (undefined2 *)0x1997;
              FUN_28b3_1181();
              if (((bool)uVar9) && (*(int *)0x1098 != 1)) {
                puStack_a = (undefined2 *)0x19ac;
                func_0x000297e6();
                puStack_a = (undefined2 *)0x19b5;
                func_0x00029b85();
                puStack_a = (undefined2 *)0x19be;
                func_0x0002996b();
                puStack_a = (undefined2 *)0x19c6;
                FUN_28b3_0ee9();
                if (*(int *)0x1098 == 2) {
                  puStack_a = (undefined2 *)0x19d6;
                  func_0x000297e6();
                  puStack_a = (undefined2 *)0x19db;
                  func_0x00029af6();
                  puStack_a = (undefined2 *)0x19e4;
                  func_0x00029983();
                }
                puStack_a = (undefined2 *)0x19ec;
                func_0x000297e6();
                puStack_a = (undefined2 *)0x19f5;
                func_0x00029b6d();
                puStack_a = (undefined2 *)0x19fe;
                func_0x0002996b();
                puStack_a = (undefined2 *)0x22b2;
                puStack_c = (undefined1 *)0x1a08;
                func_0x00029b55();
                puStack_a = (undefined2 *)0x1a0e;
                func_0x00029983();
                puStack_a = (undefined2 *)0x1a16;
                func_0x000297e6();
                puStack_a = (undefined2 *)0x1a1f;
                func_0x00029b6d();
                puStack_a = (undefined2 *)0x1a28;
                func_0x0002996b();
                puStack_a = (undefined2 *)0x22b2;
                puStack_c = (undefined1 *)0x1a32;
                func_0x00029bb5();
                puStack_a = (undefined2 *)0x1a38;
                func_0x00029983();
                puStack_a = (undefined2 *)0x1a41;
                func_0x000297e6();
                puStack_a = (undefined2 *)0x22b2;
                puStack_c = (undefined1 *)0x1a4b;
                func_0x00029b55();
                puStack_a = (undefined2 *)0x1a51;
                func_0x00029983();
                puStack_a = (undefined2 *)0x1a5a;
                func_0x000297e6();
                puStack_a = (undefined2 *)0x22b2;
                puStack_c = (undefined1 *)0x1a64;
                func_0x00029bb5();
                puStack_a = (undefined2 *)0x1a6a;
                func_0x00029983();
              }
              *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
              if (*(int *)0x1098 == 2) {
                puStack_a = (undefined2 *)0x1a87;
                FUN_28b3_0d8b();
                puStack_a = (undefined2 *)0x1a90;
                func_0x0002996b();
                puStack_a = (undefined2 *)0x1a95;
                func_0x00029d78();
                puStack_a = (undefined2 *)0x1a9e;
                func_0x00029b85();
                puStack_a = (undefined2 *)0x1aa7;
                func_0x00029c2c();
                puStack_a = (undefined2 *)0x1ab0;
                func_0x00029bb5();
                puStack_a = (undefined2 *)0x1ab9;
                func_0x00029983();
              }
              puStack_a = (undefined2 *)0x1ac1;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1aca;
              func_0x00029b6d();
              puStack_a = (undefined2 *)0x1ad3;
              func_0x0002996b();
              puStack_a = (undefined2 *)0x1adb;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1ae4;
              func_0x00029b6d();
              puStack_a = (undefined2 *)0x1aed;
              func_0x0002996b();
              puStack_a = (undefined2 *)0x1af2;
              FUN_28b3_1163();
              puStack_a = (undefined2 *)0x1afb;
              func_0x00029bb5();
              puStack_a = (undefined2 *)0x1b04;
              func_0x00029983();
              puStack_a = (undefined2 *)0x1b0c;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1b15;
              func_0x00029b6d();
              puStack_a = (undefined2 *)0x1b1e;
              func_0x0002996b();
              puStack_a = (undefined2 *)0x1b27;
              func_0x00029b55();
              puStack_a = (undefined2 *)0x1b2f;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1b38;
              func_0x00029b6d();
              puStack_a = (undefined2 *)0x1b41;
              func_0x0002996b();
              puStack_a = (undefined2 *)0x1b46;
              FUN_28b3_1163();
              puStack_a = (undefined2 *)0x1b4f;
              func_0x00029983();
              puStack_a = (undefined2 *)0x1b58;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1b61;
              func_0x00029bb5();
              puStack_a = (undefined2 *)0x1b6a;
              func_0x00029bb5();
              puStack_a = (undefined2 *)0x1b73;
              func_0x00029983();
              puStack_a = (undefined2 *)0x1b7c;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1b85;
              FUN_28b3_100d();
              puStack_a = (undefined2 *)0x1b8e;
              func_0x00029bb5();
              puStack_a = (undefined2 *)0x1b97;
              func_0x00029983();
              puVar7 = &uStack_1c;
              puVar5 = local_220;
              for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                puVar2 = puVar7;
                puVar7 = puVar7 + 1;
                puVar1 = puVar5;
                puVar5 = puVar5 + 1;
                *puVar2 = *puVar1;
              }
              uVar8 = 0x11f2;
              FUN_17a6_0cba();
            }
            puStack_c = (undefined1 *)0x1bb7;
            puStack_a = (undefined2 *)uVar8;
            func_0x0000daa6();
            puVar7 = (undefined2 *)&stack0xffe2;
            puVar5 = (undefined2 *)0xc3a0;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              puVar1 = puVar5;
              puVar5 = puVar5 + 1;
              *puVar2 = *puVar1;
            }
            uStack_22 = 0x1bcc;
            func_0x0001b198();
            *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
            puStack_a = (undefined2 *)0x1bd9;
            func_0x0000abfa();
            local_64 = local_64 + 1;
            if (param_1 != 0) {
              return;
            }
            if (local_46 == 2) {
              puStack_a = (undefined2 *)0x1bf4;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1bfd;
              func_0x00029b85();
              puStack_a = (undefined2 *)0x1c05;
              func_0x0002996b();
              puStack_a = (undefined2 *)0x1c0d;
              func_0x00029b6d();
              puStack_a = (undefined2 *)0x22b2;
              puStack_c = (undefined1 *)0x1c17;
              func_0x00029bb5();
              puStack_a = (undefined2 *)0x1c1d;
              func_0x00029983();
              puStack_a = (undefined2 *)0x1c25;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1c2d;
              func_0x00029b6d();
              puStack_a = (undefined2 *)0x22b2;
              puStack_c = (undefined1 *)0x1c37;
              func_0x00029b55();
            }
            else {
              if (local_46 != 3) goto LAB_3ab8_66e2;
              puStack_a = (undefined2 *)0x1c52;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1c5b;
              func_0x00029b85();
              puStack_a = (undefined2 *)0x1c63;
              func_0x0002996b();
              puStack_a = (undefined2 *)0x1c6b;
              func_0x00029b6d();
              puStack_a = (undefined2 *)0x22b2;
              puStack_c = (undefined1 *)0x1c75;
              func_0x00029bb5();
              puStack_a = (undefined2 *)0x1c7b;
              func_0x00029983();
              puStack_a = (undefined2 *)0x1c83;
              func_0x000297e6();
              puStack_a = (undefined2 *)0x1c8b;
              func_0x00029b6d();
              puStack_a = (undefined2 *)0x22b2;
              puStack_c = (undefined1 *)0x1c95;
              func_0x00029bb5();
            }
            puStack_a = (undefined2 *)0x1c3d;
            func_0x00029983();
          } while( true );
        }
        puStack_a = (undefined2 *)0x12c3;
        FUN_4375_8094();
        FUN_21f2_3454();
        if (param_1 == 0) {
          FUN_21f2_2d26();
          FUN_21f2_2d26();
          FUN_21f2_2d26();
          FUN_21f2_2d26();
          FUN_21f2_2d26();
          FUN_21f2_2d26();
          FUN_1def_07a4();
          *(undefined2 *)0xc2c = 1;
        }
        else {
          if (*(int *)0xc22 < 1) {
            *(undefined2 *)0xc22 = 1;
          }
          if (*(char *)0x434e != '\0') {
            FUN_1000_02b5();
          }
          if (*(char *)0x434f == '\0') {
            FUN_1000_02b5();
            local_98 = *(undefined2 *)0x9b40;
            local_96 = *(undefined2 *)0x9b42;
          }
          else {
            FUN_1000_02b5();
            local_98 = *(undefined2 *)0x9bdc;
            local_96 = *(undefined2 *)0x9bde;
          }
          FUN_21f2_3454();
          FUN_21f2_2d26();
          FUN_1def_07a4();
          *(undefined2 *)0xc2c = 0;
        }
        if ((local_64 == 0) && (param_1 == 0)) {
          local_8a = 10000;
        }
        else {
          local_8a = 9999;
        }
        *(undefined2 *)0xc1a = 0;
        if (param_1 == 0) {
          *(undefined2 *)0xc1a = 1;
        }
        *(undefined2 *)0xc20 = 1;
        local_46 = FUN_1def_0904();
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc20 = 0;
        *(undefined2 *)0xc2c = 0;
        uVar8 = 0x1b6e;
        FUN_1885_2ec3();
        if (*(int *)0x158 != 0) {
          return;
        }
        if (*(int *)0xc18 == 0) {
          if ((0x61ff < local_46) && (local_46 < 0x6b01)) {
            uVar6 = (int)(local_46 + 0x9f00U) >> 0xf;
            *(int *)0x168 = ((int)((local_46 + 0x9f00U ^ uVar6) - uVar6) >> 8 ^ uVar6) - uVar6;
          }
          iVar4 = param_1;
          if (local_46 != 0x14) {
            if ((local_46 == -1) && (param_1 != 0)) {
              return;
            }
            if ((local_46 == -1) && (0 < local_64)) {
              puStack_a = (undefined2 *)0x1b6e;
              puStack_c = (undefined1 *)0x152b;
              func_0x0000daa6();
              local_94 = 0;
              local_90 = *(undefined2 *)0x150;
              puStack_a = (undefined2 *)0x885;
              puStack_c = (undefined1 *)0x153f;
              func_0x000190c7();
              puStack_a = (undefined2 *)0x18b3;
              puStack_c = (undefined1 *)0x1549;
              func_0x0000b1d8();
              uVar8 = 0x885;
              puStack_a = (undefined2 *)0x154f;
              func_0x0000abfa();
              local_64 = local_64 + -1;
            }
            if ((param_1 == 0) || (local_46 < 2)) {
              if (local_46 == 1) {
                local_94 = 0;
                puStack_a = (undefined2 *)0x15a3;
                FUN_4375_8197();
              }
              iVar4 = *(int *)0x158;
              do {
                if (iVar4 != 0) {
                  return;
                }
LAB_3ab8_6a2d:
                if ((local_46 != 2) && (local_46 != 3)) goto LAB_3ab8_6b57;
                puStack_a = (undefined2 *)0x15c0;
                FUN_4375_8094();
                if (local_46 == 2) {
                  local_8e = *(undefined2 *)0x10ae;
                  local_8c = *(undefined2 *)0x10b0;
                }
                if (local_46 == 3) {
                  local_8e = *(undefined2 *)0x4346;
                  local_8c = *(undefined2 *)0x4348;
                }
                func_0x000297e6();
                func_0x00029d78();
                func_0x000299d1();
                FUN_21f2_3454();
                *(undefined2 *)0xc20 = 1;
                uVar8 = 0x1bb4;
                local_1f8 = FUN_1def_0904();
                *(undefined2 *)0xc20 = 0;
                if (*(int *)0x158 != 0) {
                  return;
                }
                if ((0x61ff < local_1f8) && (local_1f8 < 0x6b01)) {
                  uVar6 = (int)(local_1f8 + 0x9f00U) >> 0xf;
                  *(int *)0x168 =
                       ((int)((local_1f8 + 0x9f00U ^ uVar6) - uVar6) >> 8 ^ uVar6) - uVar6;
                }
                if (local_1f8 == -1) goto LAB_3ab8_66e2;
                if (local_1f8 != 1) goto LAB_3ab8_6b4d;
                local_94 = 0;
                if (local_46 == 2) {
                  puStack_a = (undefined2 *)0x1;
                  puStack_c = (undefined1 *)0x1bb4;
                  uStack_e = 0x16a4;
                  local_56 = FUN_4375_8747();
                }
                if (local_46 == 3) {
                  puStack_a = (undefined2 *)0x1;
                  puStack_c = (undefined1 *)0x1bb4;
                  uStack_e = 0x16bb;
                  local_56 = FUN_4375_8747();
                }
                iVar4 = *(int *)0x158;
              } while( true );
            }
            if (local_46 == 2) {
              if (*(char *)0x434e == '\0') {
                *(undefined1 *)0x434e = 1;
              }
              else {
                *(undefined1 *)0x434e = 0;
              }
            }
            if (local_46 == 3) {
              if (*(char *)0x434f == '\0') {
                *(undefined1 *)0x434f = 1;
              }
              else {
                *(undefined1 *)0x434f = 0;
              }
            }
            goto LAB_3ab8_66e2;
          }
          goto LAB_3ab8_7127;
        }
        local_64 = 0;
        puStack_a = (undefined2 *)0x14a4;
        func_0x000297e6();
        puStack_a = (undefined2 *)0x14a9;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uStack_12 = 0x14b3;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0x14bc;
        func_0x000297e6();
        uStack_10 = 0x22b2;
        uStack_12 = 0x14c1;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x14cb;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0x14d0;
        func_0x0000507a();
      } while( true );
    }
    if (local_1da == 5) {
      puStack_a = (undefined2 *)0x1ca2;
      FUN_3ab8_5ad0();
    }
    iVar4 = *(int *)0x158;
LAB_3ab8_7127:
    if (iVar4 != 0) {
      return;
    }
  } while( true );
LAB_3ab8_6b4d:
  if (local_94 != 0) {
LAB_3ab8_6b57:
    if (local_94 == 0) goto LAB_3ab8_66e2;
    puStack_a = &local_1d0;
    puStack_c = (undefined1 *)local_94;
    uStack_10 = 0x16f3;
    uStack_e = uVar8;
    iVar4 = FUN_4375_7430();
    if (iVar4 != 0) goto LAB_3ab8_66e9;
    goto LAB_3ab8_66e2;
  }
  goto LAB_3ab8_6a2d;
}



/* 3ab8:7132  FUN_3ab8_7132  611 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_7132(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar6;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_26 [2];
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  int local_12;
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  local_22 = 10000;
  local_1e = 0;
  local_20 = 0;
  local_1a = 0;
  local_1c = 0;
  local_16 = 0;
  local_18 = 0;
  local_12 = CONCAT11(local_12._1_1_,*(undefined1 *)0xb310);
  local_14 = CONCAT11(local_14._1_1_,1);
  func_0x00013e19();
  if ((*(char *)0xb782 == '\0') && (param_1 != 0)) {
    if (param_4 < 0x24) {
      if (param_2 != 0) {
        uStack_c = 0x1d08;
        FUN_4375_8054();
      }
      if (param_3 != 0) {
        uStack_c = 0x1d17;
        FUN_4375_8054();
      }
    }
    else {
      if ((param_2 != 0) && (*(int *)0x168 = *(int *)0x168 + 1, 10 < *(int *)0x168)) {
        *(undefined2 *)0x168 = 1;
      }
      if (param_3 != 0) {
        *(undefined2 *)0x168 = 1;
      }
      iVar3 = *(int *)0x168;
      *(undefined2 *)0x198 = *(undefined2 *)(iVar3 * 2 + 0x198);
      *(undefined2 *)0x182 = *(undefined2 *)(iVar3 * 2 + 0x182);
      *(undefined1 *)0xc3b4 = *(undefined1 *)0x168;
    }
  }
  if ((*(int *)0x16c == 4) && (*(int *)0x16a < 0)) {
    uStack_c = 0x1d72;
    puVar6 = (undefined2 *)func_0x00000398();
    puVar4 = (undefined2 *)puVar6;
    puVar5 = (undefined2 *)0xc3a0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    func_0x000297e6();
    func_0x00029d78();
    uStack_10 = 0x22b2;
    local_12 = 0x1d9d;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0x1da6;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    local_12 = 0x1dab;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0x1db5;
    func_0x000299d1();
    local_18 = *(undefined2 *)0x9bbe;
    local_1a = *(undefined2 *)0x9bbc;
    local_1c = *(undefined2 *)0x9bba;
    local_1e = *(undefined2 *)0x9bb8;
    local_20 = 0x22b2;
    local_22 = 0x1dc9;
    FUN_4375_7ce3();
    *(undefined1 *)0xc3b4 = *(undefined1 *)0x168;
    func_0x000297e6();
    func_0x00029d78();
    uStack_10 = 0x22b2;
    local_12 = 0x1dea;
    func_0x000299d1();
    uStack_10 = 0x22b2;
    local_12 = 0x1df3;
    func_0x000297e6();
    uStack_10 = 0x22b2;
    local_12 = 0x1df8;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = 0x1e02;
    func_0x000299d1();
    local_18 = *(undefined2 *)0x9bbe;
    local_1a = *(undefined2 *)0x9bbc;
    local_1c = *(undefined2 *)0x9bba;
    local_1e = *(undefined2 *)0x9bb8;
    local_20 = 0x22b2;
    local_22 = 0x1e16;
    FUN_4375_7ce3();
    func_0x0000a799();
    local_2e = *(undefined2 *)0xb30c;
    local_2c = *(undefined2 *)0xb30e;
    local_2a = *(undefined2 *)0xb37e;
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
    local_14 = CONCAT11(10,(undefined1)local_14);
    puVar5 = local_26;
    puVar4 = &local_2e;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = *puVar6;
    }
    local_2a = 0x1e6a;
    func_0x00013e46();
  }
  if (*(char *)0xb782 == '\0') {
    uStack_c = 0x1e82;
    func_0x0000daa6();
    uStack_c = 0;
    local_e = 0;
    uStack_10 = 0x885;
    local_12 = 0x1e8e;
    func_0x0000a76b();
    uStack_c = 2;
    local_e = 7;
    uStack_10 = 0x3e;
    local_12 = -(2 - *(int *)0xa5c);
    local_14 = 0x32;
    local_16 = 8;
    local_18 = 0x885;
    local_1a = 0x1eb5;
    func_0x0000f350();
    uStack_c = 0x1ec0;
    FUN_4375_801d();
    FUN_1000_02b5();
    FUN_21f2_3454();
    FUN_1000_02b5();
    func_0x0000a799();
  }
  return 1;
}



/* 3ab8:7395  FUN_3ab8_7395  319 bytes, 2 callers */

void __cdecl16far FUN_3ab8_7395(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_66 [20];
  undefined1 local_52 [40];
  undefined1 local_2a [28];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uVar1 = 0x22b2;
  puStack_6 = (undefined1 *)0x1f20;
  FUN_21f2_0ebc();
  if (0 < *(int *)0x16c) {
    puStack_4 = (undefined1 *)0x435d;
    puStack_6 = local_66;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0x1f37;
    func_0x00024c86();
    puStack_4 = local_66;
    puStack_6 = local_2a;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0x1f46;
    func_0x00024c86();
    puStack_4 = (undefined1 *)0x4366;
    puStack_6 = local_2a;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0x1f55;
    FUN_21f2_2d26();
    puStack_4 = local_66;
    puStack_6 = local_2a;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0x1f64;
    FUN_21f2_2d26();
    puStack_4 = (undefined1 *)0x4369;
    puStack_6 = local_52;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0x1f73;
    FUN_21f2_3454();
    puStack_4 = (undefined1 *)0x1;
    puStack_6 = (undefined1 *)0x1;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0x1f7f;
    FUN_1000_0599();
    puStack_4 = local_52;
    puStack_6 = (undefined1 *)0xdef;
    puStack_8 = (undefined1 *)0x1f8a;
    func_0x00012276();
    puStack_4 = local_66;
    puStack_6 = (undefined1 *)0x11f2;
    puStack_8 = (undefined1 *)0x1f94;
    func_0x00012276();
    puStack_8 = local_2a;
    uStack_a = 0x4374;
    uStack_c = 0x11f2;
    uStack_e = 0x1fa4;
    puStack_6 = puStack_8;
    puStack_4 = puStack_8;
    func_0x00012276();
    puStack_4 = (undefined1 *)0x1;
    puStack_6 = (undefined1 *)0x1;
    puStack_8 = (undefined1 *)0x11f2;
    uVar1 = 0xdef;
    uStack_a = 0x1fb1;
    FUN_1000_0599();
    if ((*(int *)0x16c == 2) || (*(int *)0x16c == 3)) {
      puStack_4 = local_52;
      puStack_6 = (undefined1 *)0x4383;
      puStack_8 = (undefined1 *)0xdef;
      uVar1 = 0x11f2;
      uStack_a = 0x1fce;
      func_0x00012276();
    }
    uVar2 = uVar1;
    if (*(int *)0x16c == 4) {
      puStack_4 = local_52;
      puStack_6 = (undefined1 *)0x4396;
      uVar2 = 0x11f2;
      uStack_a = 0x1fe4;
      puStack_8 = (undefined1 *)uVar1;
      func_0x00012276();
    }
    uVar1 = uVar2;
    if (*(int *)0x16c == 5) {
      puStack_4 = (undefined1 *)0xbf48;
      uVar1 = 0x11f2;
      puStack_8 = (undefined1 *)0x1ff6;
      puStack_6 = (undefined1 *)uVar2;
      func_0x00012276();
      *(undefined2 *)0x16c = 1;
    }
  }
  if (*(int *)0x16c == -10) {
    puStack_4 = (undefined1 *)0x1;
    puStack_6 = (undefined1 *)0x1;
    uStack_a = 0x200e;
    puStack_8 = (undefined1 *)uVar1;
    FUN_1000_0599();
    puStack_4 = (undefined1 *)0xdef;
    puStack_6 = (undefined1 *)0x2015;
    func_0x00010526();
    puStack_4 = (undefined1 *)0x1;
    puStack_6 = (undefined1 *)0x1b;
    puStack_8 = (undefined1 *)0xdef;
    uStack_a = 0x2022;
    FUN_1000_0599();
    puStack_4 = (undefined1 *)0x7c2;
    puStack_6 = (undefined1 *)0xdef;
    uVar1 = 0x11f2;
    puStack_8 = (undefined1 *)0x202d;
    func_0x00012276();
  }
  if (*(int *)0x16c == -0x14) {
    puStack_4 = (undefined1 *)0x1;
    puStack_6 = (undefined1 *)0x1;
    uStack_a = 0x203f;
    puStack_8 = (undefined1 *)uVar1;
    FUN_1000_0599();
    puStack_4 = (undefined1 *)0xc010;
    puStack_6 = (undefined1 *)0xdef;
    puStack_8 = (undefined1 *)0x204a;
    func_0x00012276();
    puStack_4 = (undefined1 *)0x11f2;
    puStack_6 = (undefined1 *)0x2050;
    func_0x00010526();
  }
  return;
}



/* 3ab8:74d4  FUN_3ab8_74d4  605 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_74d4(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int iVar7;
  
  FUN_21f2_0ebc();
  func_0x0000daa6(0x22b2,0);
  iVar2 = func_0x00011f2c(0x885,1);
  if (iVar2 != 0) {
    func_0x0001470b(0x11f2,0);
  }
  iVar4 = 0x11f2;
  iVar2 = 1;
  do {
    iVar7 = iVar4;
    FUN_1000_0599(iVar4,1,iVar2);
    iVar4 = 0xdef;
    func_0x00010526(0xdef);
    iVar2 = iVar7 + 1;
  } while (iVar2 < 4);
  func_0x0000a76b(0xdef,0,0,*(undefined2 *)0x1b3e,0x2f);
  *(int *)0x16c = param_1;
  if (param_1 == 0) {
    *(undefined2 *)0x16c = 1;
  }
  if (param_1 == 4) {
    *(uint *)0x168 = (uint)*(byte *)0xc3b4;
  }
  FUN_3ab8_7395();
  FUN_3ab8_7132(0,0,0,0,0);
  if ((*(byte *)0x129 < 10) || (*(byte *)0xb782 < 4)) {
    func_0x0000c354(0x885);
    func_0x0000a76b(0x885,0,*(int *)0xa5a + 1,*(undefined2 *)0x1b3e,*(undefined2 *)0x1b40);
    func_0x0000a799(0x885);
  }
  FUN_1000_0599(0x885,1,2);
  FUN_1000_060e(0xdef);
  func_0x00002ca6(0xdef);
  iVar2 = param_2;
  iVar4 = FUN_12c1_03d3(0x2c1,param_2,1,2,0xff60);
  uVar6 = 0x11f2;
  if (5 < *(byte *)0x123) {
    uVar3 = func_0x0000db57(0x11f2);
    if ((uVar3 & 4) != 0) {
      func_0x0000c3ca(0x885);
      pcVar1 = (code *)swi(0x3f);
      iVar4 = (*pcVar1)(param_2);
    }
    uVar5 = 0x885;
    uVar6 = uVar5;
    if ((uVar3 & 2) != 0) {
      if (iVar4 < 1) {
        uVar5 = 0x22b2;
        iVar2 = 0x218e;
        func_0x00024c86(0x885,param_2,0x439d);
        iVar4 = 2;
      }
      uVar6 = uVar5;
      if ((*(char *)(iVar4 + param_2 + -2) != '^') && (*(char *)(iVar4 + param_2 + -1) != 'm')) {
        uVar6 = 0x22b2;
        iVar2 = 0x21b3;
        FUN_21f2_2d26(uVar5,param_2,0x43a0);
      }
    }
  }
  *(undefined2 *)0x16c = 0;
  if (param_1 == 4) {
    *(int *)0x168 = iVar2;
  }
  func_0x00012004(uVar6,0);
  FUN_1000_0620(0x11f2);
  iVar2 = 1;
  do {
    iVar4 = 0xdef;
    FUN_1000_0599(0xdef,1,iVar2);
    func_0x00010526(0xdef);
    iVar2 = iVar4 + 1;
  } while (iVar2 < 5);
  func_0x0000daa6(0xdef,0);
  uVar6 = 0xdef;
  func_0x0000f1d8(0x885,0,0,*(undefined2 *)0x1b3e,*(undefined2 *)0x1b40);
  if (*(char *)0xb782 == '\0') {
    FUN_1000_02b5(0xa0e,2,4,7,0);
    uVar6 = 0x885;
    func_0x0000c053(0xdef);
  }
  uVar5 = *(undefined2 *)0x1b40;
  func_0x0000f350(uVar6,0,*(undefined2 *)0xa5e,*(undefined2 *)0x1b3e,uVar5,7,1,0,0);
  if (*(char *)0xb782 == '\0') {
    uVar5 = *(undefined2 *)0xa5a;
    func_0x0000f350(0xdef,*(undefined2 *)0xa58,*(undefined2 *)0xa5e,*(undefined2 *)0xa58,uVar5,7,0,0
                    ,0);
  }
  if (3 < *(byte *)0xb782) {
    pcVar1 = (code *)swi(0x3f);
    (*pcVar1)();
  }
  func_0x0000abfa(0xdef);
  func_0x0000ac64(0x885);
  func_0x0000a799(0x885);
  FUN_1000_0599(0x885,1,1);
  return uVar5;
}



/* 3ab8:773d  FUN_3ab8_773d  265 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_773d(int param_1,int param_2,undefined2 param_3,int param_4,uint param_5,int param_6,
             uint param_7,int param_8,int *param_9,int *param_10)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0x22b2;
  FUN_21f2_0ebc();
  uVar2 = (int)param_5 >> 0xf;
  iVar1 = (((int)((param_5 ^ uVar2) - uVar2) >> 3 ^ uVar2) - uVar2) - param_1;
  *param_9 = iVar1 + 1;
  if (param_2 << 4 < param_6) {
    *param_9 = iVar1 + 0x51;
  }
  if (0x4f < *param_9) {
    uVar3 = 0x2a75;
    iVar1 = func_0x0002aa38(0x22b2,param_3,0x4f);
    if (iVar1 == 1) {
      *param_9 = *param_9 + -1;
    }
  }
  if (param_4 < *param_9) {
    *param_9 = param_4;
  }
  if (*param_9 < 0) {
    *param_9 = 0;
  }
  iVar1 = func_0x0002aa38(uVar3,param_3,*param_9);
  if (iVar1 == 2) {
    *param_9 = *param_9 + -1;
  }
  uVar2 = (int)param_7 >> 0xf;
  param_1 = (((int)((param_7 ^ uVar2) - uVar2) >> 3 ^ uVar2) - uVar2) - param_1;
  *param_10 = param_1 + 1;
  if (param_2 << 4 < param_8) {
    *param_10 = param_1 + 0x51;
  }
  if (*param_9 + 0x26 < *param_10) {
    *param_10 = *param_9 + 0x26;
  }
  if (0x4f < *param_10) {
    iVar1 = func_0x0002aa38(0x2a75,param_3,0x4f);
    if (iVar1 == 1) {
      *param_10 = *param_10 + -1;
    }
  }
  iVar1 = func_0x0002aa38(0x2a75,param_3,*param_10);
  if (iVar1 == 1) {
    *param_10 = *param_10 + 1;
  }
  if (param_4 <= *param_10) {
    *param_10 = param_4 + -1;
  }
  return 1;
}



/* 3ab8:7846  FUN_3ab8_7846  130 bytes, 1 callers */

void __cdecl16far FUN_3ab8_7846(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar1 = 0x22b2;
  FUN_21f2_0ebc();
  local_6 = param_2 * 0x10;
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (0x27f < param_4) {
    param_4 = 0x27f;
  }
  local_4 = local_6 + -1;
  while (local_6 + -0x10 < local_4) {
    local_6 = 1;
    func_0x0001b911(uVar1,param_3,0xffff,param_4,0xffff);
    if (param_1 == 3) {
      local_6 = 2;
      func_0x0001b911(0x1b6e,param_3,0xffff,param_4,0xffff);
    }
    uVar1 = 0x1b6e;
    local_4 = -2;
  }
  return;
}



/* 3ab8:78c8  FUN_3ab8_78c8  150 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_78c8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  FUN_21f2_0ebc();
  iVar1 = func_0x00024ce4(0x22b2,param_4);
  iVar3 = iVar1;
  if (param_2 < 1) {
    uVar2 = 0;
  }
  else {
    for (; -1 < iVar3; iVar3 = iVar3 + -1) {
      *(undefined1 *)(param_4 + param_2 + iVar3) = *(undefined1 *)(param_4 + iVar3);
    }
    for (iVar3 = 0; iVar3 < param_2; iVar3 = iVar3 + 1) {
      *(undefined1 *)(param_4 + iVar3) = *(undefined1 *)(param_3 + param_1 + iVar3);
    }
    if (0x14 < param_2 + iVar1) {
      iVar3 = func_0x0002aa38(0x22b2,param_4,0x13);
      if (iVar3 == 1) {
        *(undefined1 *)(param_4 + 0x13) = 0;
      }
      else {
        *(undefined1 *)(param_4 + 0x14) = 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* 3ab8:795e  FUN_3ab8_795e  215 bytes, 2 callers */

undefined2 __cdecl16far
FUN_3ab8_795e(int param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_e;
  int local_c;
  int iVar4;
  int iVar5;
  
  FUN_21f2_0ebc();
  iVar2 = func_0x00024ce4(0x22b2,param_6);
  if (0 < iVar2) {
    iVar3 = func_0x0002aa38(0x22b2,param_6,0);
    if (iVar3 == 1) {
      local_c = 2;
    }
    else {
      local_c = 1;
    }
    iVar3 = *param_2;
    iVar1 = *param_3;
    local_e = iVar1;
    if (iVar1 + local_c <= param_4) {
      for (; iVar3 <= local_e; local_e = local_e + -1) {
        *(undefined1 *)(local_e + local_c + param_5) = *(undefined1 *)(local_e + param_5);
      }
      for (iVar4 = 0; iVar5 = local_c, iVar4 < local_c; iVar4 = iVar4 + 1) {
        *(undefined1 *)(iVar4 + iVar3 + param_5) = *(undefined1 *)(iVar4 + param_6);
      }
      for (; iVar5 <= iVar2; iVar5 = iVar5 + 1) {
        *(undefined1 *)((iVar5 - local_c) + param_6) = *(undefined1 *)(iVar5 + param_6);
      }
      *param_3 = local_c + iVar1;
      if (param_1 == 2) {
        *param_2 = *param_2 + local_c;
      }
      return 1;
    }
  }
  return 0;
}



/* 3ab8:7a35  FUN_3ab8_7a35  2457 bytes, 1 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far
FUN_3ab8_7a35(int param_1,int *******param_2,int *****param_3,int ******param_4,char *param_5,
             undefined2 param_6,int param_7,int ******param_8,int ******param_9,int ******param_10,
             int param_11,int *******param_12,int *******param_13)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int *******pppppppiVar3;
  int *****pppppiVar4;
  int iVar5;
  int *****pppppiVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int *******pppppppiVar11;
  int *******pppppppiVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar14;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  int local_50;
  int *******local_4e;
  int *******local_48;
  undefined2 local_42;
  int local_40;
  int local_3e;
  int local_3c;
  uint local_3a;
  int *****local_38;
  int *******local_36;
  int *******local_34;
  int ******local_32;
  int local_30;
  int ******local_2e;
  int *******local_2c;
  undefined2 local_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_1e;
  int *******pppppppiStack_1c;
  int local_1a;
  int *******local_18;
  int *****pppppiStack_16;
  int *******pppppppiStack_14;
  int *******local_12;
  int *******local_10;
  int *******local_e;
  int *******local_c;
  int *******pppppppiVar15;
  
  pppppppiVar11 = (int *******)0x22b2;
  FUN_21f2_0ebc();
  local_40 = 0x10;
  local_3c = 9999;
  pppppppiVar15 = (int *******)0x270f;
  local_42 = 0;
  pppppiVar6 = *param_9;
  local_30 = -1;
  if (0 < *(int *)0x16c) {
    local_40 = 0x30;
  }
  local_3a = (uint)((int)param_13 <= local_40);
  if ((int)param_12 <= *(int *)0xa5c) {
    local_3a = 2;
  }
  if (((((int)param_12 < *(int *)0xa5c) && (400 < (int)param_13)) &&
      ((int)param_13 <= *(int *)0xa60)) && (*(int *)0xc62 != 0)) {
    local_3a = 10;
  }
  do {
    do {
      while( true ) {
        if ((param_10 == (int ******)0x0) && (pppppppiVar12 = pppppppiVar11, param_11 == 0))
        goto LAB_3ab8_7af3;
        local_c = &local_32;
        local_e = (int *******)&local_e;
        pppppppiVar12 = (int *******)0x885;
        local_12 = (int *******)0x265d;
        local_10 = pppppppiVar11;
        func_0x0000dcbd();
        pppppppiVar3 = local_12;
        pppppppiVar11 = pppppppiVar12;
        if (*(char *)0x124 != '\0') break;
        if ((local_e == (int *******)0x0) && (local_32 == (int ******)0x0)) goto LAB_3ab8_7af3;
      }
      if (((0 < *(int *)0x16c) && (local_e == (int *******)0x0)) &&
         ((local_32 == (int ******)0x0 &&
          ((((int)param_12 < 8 && (0x40 < (int)param_13)) && ((int)param_13 < 0x12f)))))) {
        if (0xaf < (int)param_13) {
          return 0xff9c;
        }
        return 100;
      }
      if ((local_e != (int *******)0x0) && (local_32 != (int ******)0x0)) {
        if ((int)local_10 < 3) {
          pppppppiVar15 = (int *******)0x3e7;
          local_3c = 999;
        }
        local_10 = (int *******)0x3;
      }
      if (((local_3a == 0) && (local_10 == (int *******)0x3)) ||
         ((local_3a == 10 && ((local_10 == (int *******)0x3 || (7 < *(byte *)0x125)))))) {
        FUN_1885_2ec3();
        func_0x0000a799();
        uVar13 = *(undefined2 *)0x11c;
        *(undefined2 *)0x11c = 1;
        pppppppiVar11 = (int *******)0xdef;
        FUN_1000_0620();
        if (local_3a == 10) {
          if (local_10 != (int *******)0x3) {
            if (param_10 == (int ******)0x0) {
              local_2e = (int ******)0x2;
            }
            else {
              local_2e = (int ******)0x1;
            }
            local_c = &local_2e;
            local_e = (int *******)0xdef;
            pppppppiVar11 = (int *******)0x3bf;
            local_10 = (int *******)0x2783;
            iVar7 = func_0x000040e7();
            if (iVar7 == 0) {
              local_10 = (int *******)0x3;
            }
          }
          if (local_10 == (int *******)0x3) {
            local_e = (int *******)0x27a0;
            local_c = pppppppiVar11;
            func_0x000048be();
          }
        }
        else {
          local_c = (int *******)0x0;
          local_e = (int *******)0xdef;
          local_10 = (int *******)0x27b2;
          FUN_1885_4192();
        }
        FUN_1000_060e();
        if ((*(char *)0xb782 == '\0') && (*(int *)0xc62 != 0)) {
          local_c = (int *******)0x27d1;
          func_0x00004488();
        }
        *(undefined2 *)0x11c = uVar13;
        FUN_3ab8_7395();
        if ((*(int *)0x16c == 4) && (*(int *)0x16a < 0)) {
          local_64 = 10000;
          local_60 = 0;
          local_62 = 0;
          local_5c = 0;
          local_5e = 0;
          local_58 = 0;
          local_5a = 0;
          local_54 = *(undefined1 *)0xb310;
          local_56 = 1;
          local_70 = *(undefined2 *)0xb30c;
          local_6e = *(undefined2 *)0xb30e;
          local_6c = *(undefined2 *)0xb37e;
          local_6a = *(undefined2 *)0xb380;
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029983();
          local_55 = 10;
          puVar9 = &uStack_26;
          puVar10 = &local_70;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar14 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar14;
          }
          local_2a = 0x2859;
          func_0x00013e46();
        }
        *(undefined2 *)0xbc0 = 1;
        return 1;
      }
    } while (((local_12 == pppppppiVar15) && ((int ********)local_2c == &local_2c)) &&
            ((local_e != (int *******)0x0 || (local_32 != (int ******)0x0))));
    if ((local_30 < 0) &&
       ((local_3a != 0 ||
        (uVar8 = (int)*(uint *)0xc1c >> 0xf,
        (int)param_13 - (int)local_2c <= (int)((*(uint *)0xc1c ^ uVar8) - uVar8))))) {
      local_c = local_2c;
      local_e = local_12;
      local_10 = param_13;
      local_12 = param_12;
      pppppiStack_16 = param_3;
      local_18 = param_2;
      local_1a = param_1;
      pppppppiStack_1c = (int *******)0x885;
      uStack_1e = 0x2a1d;
      pppppppiStack_14 = (int *******)pppppiVar6;
      FUN_3ab8_773d();
      pppppiVar4 = (int *****)&local_38;
      if (0x4e < (int)local_38) {
        local_c = (int *******)0x885;
        pppppppiVar12 = (int *******)0x2a75;
        local_e = (int *******)0x2a32;
        iVar7 = func_0x0002aa38();
        pppppiVar4 = param_3;
        if (iVar7 == 1) {
          local_38 = (int *****)((int)local_38 + 1);
        }
      }
      pppppppiVar11 = pppppppiVar12;
      if (0x4e < local_3e) {
        pppppppiVar11 = (int *******)0x2a75;
        local_e = (int *******)0x2a4c;
        local_c = pppppppiVar12;
        iVar7 = func_0x0002aa38();
        pppppiVar4 = param_3;
        if (iVar7 == 1) {
          local_3e = local_3e + 1;
        }
      }
      if ((((param_11 == 0) && (local_10 != (int *******)0x3)) &&
          ((param_10 == (int ******)0x0 ||
           (uVar8 = (int)param_12 - (int)local_12 >> 0xf,
           (int)(((int)param_12 - (int)local_12 ^ uVar8) - uVar8) < 5)))) ||
         ((local_40 < (int)param_13 || (local_40 < (int)local_2c)))) {
        if ((local_40 < (int)param_13) || (local_40 < (int)local_2c)) {
          pppppppiVar11 = (int *******)0x1b6e;
          FUN_1885_2ec3();
          local_3c = 999;
        }
        else if (local_3e != local_3c) {
          func_0x0000a747();
          FUN_1885_2ec3();
          local_3c = local_3e;
          if ((int)local_38 < 0x50) {
            local_36 = (int *******)((int)param_2 * 0x10 + -1);
            pppppiVar4 = (int *****)((int)local_38 + param_1 + -1);
          }
          else {
            local_36 = (int *******)((int)param_2 * 0x10 + 0xf);
            pppppiVar4 = local_38 + -0x28;
          }
          local_48 = (int *******)((int)pppppiVar4 * 8);
          for (local_34 = local_48; pppppppiVar11 = (int *******)0x1b6e,
              (int)local_34 <= (int)local_48 + 3; local_34 = (int *******)((int)local_34 + 1)) {
            local_c = (int *******)((int)local_36 + -0xf);
            local_e = local_34;
            local_10 = local_36;
            local_12 = local_34;
            pppppppiStack_14 = (int *******)0x1b6e;
            pppppiStack_16 = (int *****)0x2bd2;
            func_0x0001b911();
          }
        }
      }
      else if ((-1 < (int)pppppiVar4) || (local_3e != local_3c)) {
        func_0x0000a747();
        pppppppiVar11 = (int *******)0x1b6e;
        FUN_1885_2ec3();
        local_3c = local_3e;
        if ((int)local_38 <= local_3e) {
          local_4e = (int *******)0x1;
          if ((local_10 == (int *******)0x3) || (param_10 != (int ******)0x0)) {
            local_4e = (int *******)0x3;
          }
          if ((int)local_38 < 0x50) {
            local_50 = (local_3e + param_1) * 8 + -1;
            local_48 = (int *******)(((int)local_38 + param_1 + -1) * 8);
            local_c = param_2;
            local_e = local_4e;
            local_10 = (int *******)0x1b6e;
            local_12 = (int *******)0x2af6;
            FUN_3ab8_7846();
            local_38 = (int *****)0x50;
          }
          if (0x4f < local_3e) {
            local_50 = local_3e * 8 + -0x279;
            local_48 = (int *******)((int)(local_38 + -0x28) * 8);
            local_c = (int *******)((int)param_2 + 1);
            local_e = local_4e;
            local_10 = (int *******)0x1b6e;
            local_12 = (int *******)0x2b2d;
            FUN_3ab8_7846();
          }
        }
      }
    }
    else {
      if ((local_30 < 0) && (param_10 != (int ******)0x0)) {
        FUN_28b3_0d8b();
        func_0x00029b85();
        func_0x00029bb5();
        func_0x0002996b();
        func_0x00029983();
        uVar13 = *(undefined2 *)0xc32;
        *(undefined2 *)0xc3c = *(undefined2 *)0xc30;
        *(undefined2 *)0xc3e = uVar13;
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *******)0x22b2;
        local_12 = (int *******)0x291e;
        func_0x000299d1();
        local_10 = (int *******)0x22b2;
        local_12 = (int *******)0x2930;
        FUN_28b3_0d8b();
        local_10 = (int *******)0x22b2;
        local_12 = (int *******)0x2939;
        func_0x00029b85();
        local_10 = (int *******)0x22b2;
        local_12 = (int *******)0x2942;
        func_0x00029bb5();
        local_10 = (int *******)0x22b2;
        local_12 = (int *******)0x294a;
        func_0x0002996b();
        local_10 = (int *******)0x22b2;
        local_12 = (int *******)0x294f;
        func_0x00029d78();
        local_18 = (int *******)0x22b2;
        local_1a = 0x2959;
        func_0x000299d1();
        local_18 = (int *******)0x22b2;
        local_1a = 0x295e;
        local_30 = func_0x0001b260();
        if (local_30 != 0) {
          local_c = (int *******)0x296e;
          puVar14 = (undefined2 *)func_0x00000398();
          puVar9 = (undefined2 *)puVar14;
          puVar10 = &local_2a;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar1 = *puVar2;
          }
          puVar9 = &uStack_1e;
          puVar10 = &local_2a;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar14 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar14;
          }
          uStack_22 = 0;
          uStack_24 = 0x2995;
          func_0x00019593();
        }
      }
      if (local_30 < 0) {
        local_30 = 0;
      }
      pppppppiVar11 = (int *******)0x885;
      func_0x0000a747();
      local_4e = (int *******)0x1;
      if (0 < local_30) {
        local_4e = (int *******)0x2;
      }
      if ((*(int *)0xa5c < (int)local_12) || ((int)local_2c < local_40)) {
        local_c = local_2c + -3;
        local_e = (int *******)((int)local_12 + -3);
        local_10 = local_4e;
        local_12 = (int *******)0x885;
        pppppppiVar11 = (int *******)0x1bb4;
        pppppppiStack_14 = (int *******)0x29f3;
        FUN_1885_3c19();
      }
    }
    pppppppiVar15 = pppppppiVar3;
  } while ((local_e != (int *******)0x0) || (local_32 != (int ******)0x0));
  FUN_1885_2ec3();
  pppppppiVar12 = (int *******)0x885;
  func_0x0000a799();
  if (0 < local_30) {
    puVar9 = &uStack_1e;
    puVar10 = &local_2a;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar14 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = *puVar14;
    }
    uStack_22 = 0x885;
    pppppppiVar12 = (int *******)0x18b3;
    uStack_24 = 0x2c29;
    func_0x00019593();
  }
  iVar7 = *(int *)0xa5c;
  if (((int)param_12 < iVar7) && (0x40 < (int)param_13)) {
    return 0;
  }
  if (((int)local_12 < iVar7) && (0x40 < (int)local_2c)) {
    return 0xffff;
  }
  if (local_30 < 0) {
    if (local_40 < (int)param_13) {
LAB_3ab8_7af3:
      if ((*(int *)0x16c < 1) ||
         ((((param_11 == 0 && (param_10 == (int ******)0x0)) || (*(int *)0xa5c < (int)param_12)) ||
          (((int)param_13 < 0x30 || (0x40 < (int)param_13)))))) {
        return 0;
      }
      if (0x4c < (int)param_12) {
        if (param_10 == (int ******)0x0) {
          local_38 = (int *****)0x2;
        }
        else {
          local_38 = (int *****)0x1;
        }
        local_c = (int *******)param_7;
        local_e = (int *******)param_9;
        local_10 = (int *******)param_8;
        local_12 = (int *******)local_38;
        pppppiStack_16 = (int *****)0x2f21;
        pppppppiStack_14 = pppppppiVar12;
        FUN_3ab8_795e();
        return 1;
      }
      local_c = (int *******)param_11;
      local_e = (int *******)param_10;
      local_10 = (int *******)0x1;
      pppppppiStack_14 = (int *******)0x2f3b;
      local_12 = pppppppiVar12;
      iVar7 = FUN_3ab8_7132();
      if (iVar7 != 0) {
        return 1;
      }
      return 0;
    }
    local_c = local_2c;
    local_e = local_12;
    local_10 = param_13;
    local_12 = param_12;
    pppppiStack_16 = param_3;
    local_18 = param_2;
    local_1a = param_1;
    uStack_1e = 0x2e07;
    pppppppiStack_1c = pppppppiVar12;
    pppppppiStack_14 = (int *******)pppppiVar6;
    FUN_3ab8_773d();
    if (((param_11 != 0) || (local_10 == (int *******)0x3)) ||
       ((param_10 != (int ******)0x0 &&
        (uVar8 = (int)param_12 - (int)local_12 >> 0xf,
        4 < (int)(((int)param_12 - (int)local_12 ^ uVar8) - uVar8))))) {
      if (local_40 < (int)local_2c) {
        return 0xffff;
      }
      local_3e = local_3e + 1;
      if ((int)local_38 < local_3e) {
        local_36 = (int *******)0x0;
        for (local_34 = (int *******)local_38; (int)local_34 < local_3e;
            local_34 = (int *******)((int)local_34 + 1)) {
          if ((int)local_36 < 0x2a) {
            param_5[(int)local_36] = *(char *)((int)param_3 + (int)local_34);
            local_36 = (int *******)((int)local_36 + 1);
          }
        }
        iVar7 = (int)local_36 + -1;
        local_e = (int *******)0x2e87;
        local_c = pppppppiVar12;
        iVar5 = func_0x0002aa38();
        if (iVar5 == 1) {
          local_36 = (int *******)iVar7;
        }
        param_5[(int)local_36] = '\0';
        if ((local_10 != (int *******)0x3) &&
           ((param_10 == (int ******)0x0 ||
            (uVar8 = (int)param_12 - (int)local_12 >> 0xf,
            (int)(((int)param_12 - (int)local_12 ^ uVar8) - uVar8) < 5)))) {
          local_36 = (int *******)local_38;
          for (local_34 = (int *******)local_3e; (int)local_34 <= (int)pppppiVar6;
              local_34 = (int *******)((int)local_34 + 1)) {
            *(undefined1 *)((int)local_36 + (int)param_3) =
                 *(undefined1 *)((int)param_3 + (int)local_34);
            local_36 = (int *******)((int)local_36 + 1);
          }
          local_c = (int *******)0x2ef5;
          pppppiVar6 = (int *****)func_0x00024ce4();
          *param_9 = pppppiVar6;
        }
        *param_8 = local_38;
        return 10;
      }
    }
  }
  else {
    if (((int)local_12 < iVar7) && (local_40 < (int)local_2c)) {
      return 0xffff;
    }
    if (local_30 < 1) {
      pppppppiVar11 = pppppppiVar12;
      if (*param_5 == '\0') {
        pppppppiVar11 = (int *******)0x11f2;
        local_e = (int *******)0x2c94;
        local_c = pppppppiVar12;
        func_0x00012038();
      }
      local_e = (int *******)0x2ca1;
      local_c = pppppppiVar11;
      FUN_21f2_3454();
    }
    else {
      local_c = (int *******)local_1a;
      local_e = (int *******)param_4;
      local_12 = (int *******)0x2c7d;
      local_10 = pppppppiVar12;
      func_0x00018bc1();
    }
    uVar13 = 0x22b2;
    local_c = (int *******)0x2cab;
    local_36 = (int *******)func_0x00024ce4();
    if ((int)local_36 < 1) {
      return 0xffff;
    }
    if (param_7 < (int)local_36 + (int)pppppiVar6) {
      if (local_30 < 1) {
        return 0xffff;
      }
      puVar9 = &uStack_1e;
      puVar10 = &local_2a;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar14 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar2 = *puVar14;
      }
      uStack_22 = 0x22b2;
      uStack_24 = 0x2cd9;
      func_0x00019593();
      return 0xffff;
    }
    if ((int)local_2c <= local_40) {
      uVar8 = (int)(local_12 + 2) >> 0xf;
      param_1 = (((int)(((uint)(local_12 + 2) ^ uVar8) - uVar8) >> 3 ^ uVar8) - uVar8) - param_1;
      local_38 = (int *****)(param_1 + 1);
      if (0x20 < (int)local_2c) {
        local_38 = (int *****)(param_1 + 0x51);
      }
      if ((int)local_38 < 0) {
        local_38 = (int *****)0x0;
      }
      if (0x4f < (int)local_38) {
        local_c = (int *******)0x22b2;
        uVar13 = 0x2a75;
        local_e = (int *******)0x2d2c;
        iVar7 = func_0x0002aa38();
        if (iVar7 == 1) {
          local_38 = (int *****)((int)local_38 + -1);
        }
      }
      if ((int)pppppiVar6 < (int)local_38) {
        local_38 = pppppiVar6;
      }
      local_e = (int *******)0x2d4a;
      local_c = (int *******)uVar13;
      iVar7 = func_0x0002aa38();
      if (iVar7 == 2) {
        local_38 = (int *****)((int)local_38 + -1);
      }
      local_c = (int *******)local_38;
      *param_8 = local_38;
    }
    local_38 = (int *****)0x0;
    for (local_34 = local_c; (int)local_34 <= (int)pppppiVar6;
        local_34 = (int *******)((int)local_34 + 1)) {
      *(undefined1 *)((int)local_38 + (int)local_36 + (int)param_4) =
           *(undefined1 *)((int)param_3 + (int)local_34);
      local_38 = (int *****)((int)local_38 + 1);
    }
    local_38 = (int *****)0x0;
    local_c = (int *******)0x2d99;
    local_36 = (int *******)func_0x00024ce4();
    for (local_34 = local_c; (int)local_34 <= (int)local_36 + (int)local_c;
        local_34 = (int *******)((int)local_34 + 1)) {
      *(undefined1 *)((int)param_3 + (int)local_34) = *(undefined1 *)((int)local_38 + (int)param_4);
      local_38 = (int *****)((int)local_38 + 1);
    }
    local_c = (int *******)0x2dce;
    local_38 = (int *****)func_0x00024ce4();
    param_8 = param_9;
  }
  *param_8 = local_38;
  return 1;
}


