/* Ghidra decompilation of jw04.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  312 bytes, 2 callers */

void __cdecl16far
FUN_3ab8_0000(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
             undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 param_16)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  FUN_21f2_0ebc();
  puVar9 = &local_18;
  puVar8 = param_1;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  local_a = 0xaba4;
  func_0x000297e6();
  local_a = 0xaba9;
  func_0x00029d78();
  local_10 = 0x22b2;
  local_12 = 0xabb3;
  func_0x000299d1();
  local_10 = 0x22b2;
  local_12 = 0xabbb;
  func_0x000297e6();
  local_10 = 0x22b2;
  local_12 = 0xabc0;
  func_0x00029d78();
  local_18 = 0x22b2;
  func_0x000299d1();
  local_18 = 0x22b2;
  func_0x000297e6();
  local_18 = 0x22b2;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_1def_043a(0x22b2);
  local_a = param_8;
  local_c = param_7;
  local_e = param_6;
  local_10 = param_5;
  local_12 = param_4;
  local_14 = param_3;
  local_16 = param_2;
  local_18 = 1;
  FUN_1def_05d1(0x1bb4);
  local_a = 0xac2b;
  func_0x000297e6();
  local_a = param_16;
  local_c = param_15;
  local_e = param_14;
  local_10 = param_13;
  local_12 = param_12;
  local_14 = param_11;
  local_16 = param_10;
  local_18 = 1;
  FUN_1def_05d1(0x22b2);
  uVar10 = (undefined1 *)0xffed < &local_18;
  local_a = 0xac56;
  func_0x000297e6();
  local_a = 0xac5b;
  FUN_28b3_1181();
  uVar6 = local_12;
  uVar5 = local_14;
  uVar4 = local_16;
  uVar3 = local_18;
  if ((bool)uVar10) {
    local_18 = local_10;
    local_16 = local_e;
    local_10 = uVar3;
    local_e = uVar4;
    local_14 = local_c;
    local_12 = local_a;
    local_c = uVar5;
    local_a = uVar6;
  }
  puVar9 = &local_18;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:0138  FUN_3ab8_0138  629 bytes, 3 callers */

undefined2 __cdecl16far
FUN_3ab8_0138(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

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
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 local_a;
  
  FUN_21f2_0ebc();
  puVar5 = local_20;
  puVar4 = param_1;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  local_a = 0xacdc;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xace6;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xacee;
  func_0x000297e6();
  local_18 = 0x22b2;
  uStack_1a = 0xacf8;
  func_0x000299d1();
  local_18 = 0x22b2;
  uStack_1a = 0xad00;
  func_0x000297e6();
  local_18 = 0x22b2;
  uStack_1a = 0xad05;
  func_0x00029d78();
  local_20[0] = 0x22b2;
  func_0x000299d1();
  local_20[0] = 0x22b2;
  func_0x000297e6();
  local_20[0] = 0x22b2;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  FUN_1def_043a(0x22b2);
  local_a = param_8;
  uStack_c = param_7;
  uStack_e = param_6;
  uStack_10 = param_5;
  uStack_12 = param_4;
  local_14 = param_3;
  uStack_16 = param_2;
  local_18 = 1;
  uStack_1a = 0x1bb4;
  local_1c = 0xad4f;
  FUN_1def_05d1();
  local_a = 0xad59;
  func_0x000297e6();
  local_a = 0xad5e;
  func_0x00029d78();
  local_a = 0xad66;
  func_0x000299d1();
  local_a = 0xad6e;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xad78;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xad80;
  func_0x000297e6();
  local_18 = 0x22b2;
  uStack_1a = 0xad8a;
  func_0x000299d1();
  local_18 = 1;
  uStack_1a = 0x22b2;
  local_1c = 0xad93;
  FUN_1def_05d1();
  uVar6 = (undefined1 *)0xffed < &local_18;
  uVar7 = &stack0x0000 == (undefined1 *)0x6;
  local_a = 0xad9d;
  func_0x000297e6();
  local_a = 0xada2;
  func_0x00029d78();
  local_a = 0xadaa;
  func_0x00029834();
  local_a = 0xadb3;
  func_0x00029c74();
  local_a = 0xadbb;
  func_0x00029c74();
  local_a = 0xadc0;
  FUN_28b3_1181();
  if ((bool)uVar6 || (bool)uVar7) {
    local_a = *(undefined2 *)0x9628;
    uStack_c = *(undefined2 *)0x9626;
    uStack_e = *(undefined2 *)0x9624;
    uStack_10 = 0x22b2;
    uStack_12 = 0xade0;
    func_0x00029834();
    uStack_10 = 0x22b2;
    uStack_12 = 0xade8;
    func_0x00029c74();
    uStack_10 = 0x22b2;
    uStack_12 = 0xadf0;
    func_0x000299b9();
    local_18 = 0x22b2;
    uStack_1a = 0xadfa;
    func_0x000299d1();
    local_18 = 0;
    uStack_1a = 0x22b2;
    local_1c = 0xae02;
    FUN_1def_05d1();
    local_a = *(undefined2 *)0x9628;
    uStack_c = *(undefined2 *)0x9626;
    uStack_e = *(undefined2 *)0x9624;
    uStack_10 = 0x1bb4;
    uStack_12 = 0xae2a;
    func_0x00029834();
    local_18 = 0x22b2;
    uStack_1a = 0xae34;
    func_0x000299d1();
    local_18 = 0;
    uStack_1a = 0x22b2;
    local_1c = 0xae3c;
    func_0x0001e558();
    uVar6 = (undefined1 *)0xffed < &local_18;
    uVar7 = &stack0x0000 == (undefined1 *)0x6;
    local_a = 0xae54;
    func_0x000297e6();
    local_a = 0xae5c;
    func_0x000297e6();
    local_a = 0xae61;
    FUN_28b3_1181();
    if ((bool)uVar7) {
      local_a = 0xae6b;
      func_0x000297e6();
      local_a = 0xae73;
      func_0x000297e6();
      local_a = 0xae78;
      FUN_28b3_1181();
      if ((bool)uVar7) {
        return 1;
      }
    }
    local_a = 0xae85;
    func_0x000297e6();
    local_a = 0xae8d;
    func_0x0002996b();
    local_a = 0xae95;
    FUN_28b3_0ee9();
    local_a = 0xae9e;
    func_0x000297e6();
    local_a = 0xaea6;
    func_0x000297e6();
    local_a = 0xaeae;
    func_0x0002996b();
    local_a = 0xaeb3;
    FUN_28b3_1181();
    if (!(bool)uVar6) {
      local_a = 0xaebd;
      func_0x000297e6();
      uVar6 = 0xfe29 < (uint)(*(int *)0x1b3e - *(int *)0xa5c);
      local_a = 0xaed2;
      FUN_28b3_0d8b();
      local_a = 0xaed7;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_a = 0xaee2;
        func_0x000297e6();
        local_a = 0xaeea;
        func_0x000297e6();
        local_a = 0xaeef;
        FUN_28b3_1181();
        if (!(bool)uVar6) {
          local_a = 0xaef9;
          func_0x000297e6();
          uVar6 = 0xfeb5 < (uint)(*(int *)0xa60 - *(int *)0xa5e);
          local_a = 0xaf0e;
          FUN_28b3_0d8b();
          local_a = 0xaf13;
          FUN_28b3_1181();
          if (!(bool)uVar6) {
            puVar5 = local_20;
            for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar2 = param_1;
              param_1 = param_1 + 1;
              puVar1 = puVar5;
              puVar5 = puVar5 + 1;
              *puVar2 = *puVar1;
            }
            return 0;
          }
        }
      }
    }
  }
  return 1;
}



/* 3ab8:03ad  FUN_3ab8_03ad  4579 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003b742) */
/* WARNING: Removing unreachable block (ram,0x0003baa5) */
/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far
FUN_3ab8_03ad(uint param_1,int param_2,uint param_3,int param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  byte bVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000026;
  undefined2 in_stack_00000028;
  undefined2 ******in_stack_00000040;
  undefined2 in_stack_00000042;
  undefined2 in_stack_00000044;
  undefined2 in_stack_00000046;
  undefined2 ******in_stack_00000048;
  undefined2 in_stack_0000004a;
  undefined2 in_stack_0000004c;
  undefined2 in_stack_0000004e;
  undefined2 local_104;
  undefined2 local_102;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_92;
  undefined2 local_90;
  int local_84;
  undefined4 local_82;
  undefined2 local_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 ******local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_5c;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined4 local_40;
  undefined1 local_3c [2];
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 auStack_36 [5];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *******local_e;
  undefined1 *puStack_c;
  undefined2 *puStack_a;
  
  uVar8 = local_ea;
  uVar7 = local_ec;
  uVar6 = local_f2;
  uVar5 = local_f4;
  FUN_21f2_0ebc();
  local_6e = 0;
  local_7e = *(undefined2 *)0x9634;
  uStack_7c = *(undefined2 *)0x9636;
  uStack_7a = *(undefined2 *)0x9638;
  uStack_78 = *(undefined2 *)0x963a;
  puStack_a = (undefined2 *)0xaf53;
  func_0x00029834();
  puStack_a = (undefined2 *)0xaf58;
  func_0x00029ae7();
  puStack_a = (undefined2 *)0xaf60;
  func_0x000299d1();
  puStack_a = (undefined2 *)*(undefined2 *)0x9640;
  puStack_c = (undefined1 *)*(undefined2 *)0x963e;
  local_e = (undefined2 *******)*(undefined2 *)0x963c;
  uStack_10 = 0x22b2;
  uStack_12 = 0xaf75;
  FUN_28b3_1582();
  puStack_a = (undefined2 *)0xaf7f;
  func_0x00029834();
  puStack_a = (undefined2 *)0xaf88;
  func_0x00029983();
  puStack_a = (undefined2 *)in_stack_0000004c;
  puStack_c = (undefined1 *)in_stack_0000004a;
  local_e = (undefined2 *******)in_stack_00000048;
  uStack_10 = 0x22b2;
  uStack_12 = 0xaf99;
  func_0x0002a11e();
  puStack_a = (undefined2 *)0xafa3;
  func_0x00029834();
  puStack_a = (undefined2 *)0xafab;
  func_0x00029983();
  puStack_a = (undefined2 *)in_stack_0000004c;
  puStack_c = (undefined1 *)in_stack_0000004a;
  local_e = (undefined2 *******)in_stack_00000048;
  uStack_10 = 0x22b2;
  uStack_12 = 0xafbc;
  func_0x0002a10c();
  puStack_a = (undefined2 *)0xafc6;
  func_0x00029834();
  puStack_a = (undefined2 *)0xafcf;
  func_0x00029983();
  puStack_a = (undefined2 *)0xafd7;
  func_0x00029834();
  puStack_a = (undefined2 *)0xafdf;
  func_0x00029983();
  puStack_a = &local_bc;
  puVar15 = (undefined2 *)&stack0xffe0;
  puVar11 = &stack0x0022;
  for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar2 = *puVar1;
  }
  puVar15 = auStack_36;
  puVar11 = &param_5;
  for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    puVar1 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar2 = *puVar1;
  }
  uStack_38 = 0x22b2;
  uStack_3a = 0xb00a;
  iVar12 = FUN_1def_1921();
  uVar17 = 0;
  uVar18 = iVar12 == 0;
  if ((bool)uVar18) {
    *(undefined2 *)0xc22 = 1;
  }
  else {
    puStack_a = (undefined2 *)0xb024;
    func_0x00029834();
    puStack_a = (undefined2 *)0xb02d;
    func_0x00029834();
    puStack_a = (undefined2 *)0xb032;
    FUN_28b3_1181();
    if ((bool)uVar17 || (bool)uVar18) {
      local_104 = *(undefined2 *)0x965c;
      local_102 = *(undefined2 *)0x965e;
      local_100 = *(undefined2 *)0x9660;
      local_fe = *(undefined2 *)0x9662;
      if (*(int *)0xcb6 != 0) {
        local_104 = *(undefined2 *)0xcba;
        local_102 = *(undefined2 *)0xcbc;
        local_100 = *(undefined2 *)0xcbe;
        local_fe = *(undefined2 *)0xcc0;
      }
      *(undefined2 *)0xb76a = local_104;
      *(undefined2 *)0xb76c = local_102;
      *(undefined2 *)0xb784 = local_100;
      *(undefined2 *)0xb786 = local_fe;
      *(undefined2 *)0xb30c = local_bc;
      *(undefined2 *)0xb30e = local_ba;
      *(undefined2 *)0xb37e = local_d0;
      *(undefined2 *)0xb380 = local_ce;
      puVar15 = &local_9a;
      puVar11 = &param_5;
      for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar2 = puVar15;
        puVar15 = puVar15 + 1;
        puVar1 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar2 = *puVar1;
      }
      puVar15 = &local_b4;
      puVar11 = &stack0x0022;
      for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar2 = puVar15;
        puVar15 = puVar15 + 1;
        puVar1 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar2 = *puVar1;
      }
      puStack_a = (undefined2 *)0xb437;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb441;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb449;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb453;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xb45c;
      puVar11 = (undefined2 *)FUN_1def_05d1();
      local_9a = *puVar11;
      local_98 = puVar11[1];
      puStack_a = (undefined2 *)0xb476;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb480;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb488;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb492;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xb49b;
      func_0x0001e558();
      puStack_a = (undefined2 *)0xb4a5;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xb4aa;
      func_0x00029d78();
      puStack_a = (undefined2 *)0xb4b2;
      func_0x00029c44();
      puStack_a = (undefined2 *)0xb4bb;
      func_0x00029983();
      puStack_a = (undefined2 *)0xb4c3;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb4cd;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb4d5;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb4df;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xb4e8;
      puVar11 = (undefined2 *)FUN_1def_05d1();
      local_92 = *puVar11;
      local_90 = puVar11[1];
      puStack_a = (undefined2 *)0xb502;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb50c;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb514;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb51e;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xb527;
      func_0x0001e558();
      puStack_a = (undefined2 *)0xb531;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xb536;
      func_0x00029d78();
      puStack_a = (undefined2 *)0xb53e;
      func_0x00029c44();
      puStack_a = (undefined2 *)0xb547;
      func_0x00029983();
      puStack_a = (undefined2 *)0xb54f;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb559;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb561;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb56b;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xb574;
      puVar11 = (undefined2 *)FUN_1def_05d1();
      local_b4 = *puVar11;
      local_b2 = puVar11[1];
      puStack_a = (undefined2 *)0xb58e;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb598;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb5a0;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb5aa;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xb5b3;
      func_0x0001e558();
      puStack_a = (undefined2 *)0xb5bd;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xb5c2;
      func_0x00029d78();
      puStack_a = (undefined2 *)0xb5ca;
      func_0x00029c44();
      puStack_a = (undefined2 *)0xb5d3;
      func_0x00029983();
      puStack_a = (undefined2 *)0xb5db;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb5e5;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb5ed;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb5f7;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xb600;
      puVar11 = (undefined2 *)FUN_1def_05d1();
      local_ac = *puVar11;
      local_aa = puVar11[1];
      puStack_a = (undefined2 *)0xb61a;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb624;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb62c;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb636;
      func_0x000299d1();
      uStack_18 = 1;
      local_1a = 0x22b2;
      uStack_1c = 0xb63f;
      func_0x0001e558();
      puStack_a = (undefined2 *)0xb649;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xb64e;
      func_0x00029d78();
      puStack_a = (undefined2 *)0xb656;
      func_0x00029c44();
      puStack_a = (undefined2 *)0xb65f;
      func_0x00029983();
      puStack_a = (undefined2 *)0xb668;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xb66d;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb677;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb680;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb685;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = 0xb68f;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      local_1a = 0xb698;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb69d;
      func_0x00029d78();
      func_0x000299d1();
      func_0x000297e6();
      func_0x00029d78();
      uStack_2a = 0xb6bf;
      func_0x000299d1();
      uStack_2a = 0xb6c4;
      local_6c = FUN_1000_0718();
      puStack_a = (undefined2 *)0xb6d6;
      func_0x000297e6();
      puStack_a = (undefined2 *)0xb6db;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb6e5;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb6ee;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb6f3;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      local_1a = 0xb6fd;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      local_1a = 0xb706;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      local_1a = 0xb70b;
      func_0x00029d78();
      func_0x000299d1();
      func_0x000297e6();
      func_0x00029d78();
      uStack_2a = 0xb72d;
      func_0x000299d1();
      uStack_2a = 0xb732;
      uVar20 = FUN_1000_0718();
      uVar3 = local_6c;
      local_40 = CONCAT22(local_40._2_2_,(undefined2)local_40);
      if ((long)uVar20 < (long)local_6c) {
        uVar3 = uVar20;
        uVar20 = local_6c;
        local_40 = local_6c;
      }
      local_82._2_2_ = (int)(uVar20 >> 0x10);
      local_82._0_2_ = (uint)uVar20;
      uVar14 = (uint)local_82;
      local_6c._2_2_ = (int)(uVar3 >> 0x10);
      local_6c._0_2_ = (uint)uVar3;
      uVar9 = (uint)local_6c;
      iVar12 = (local_82._2_2_ - local_6c._2_2_) - (uint)((uint)local_82 < (uint)local_6c);
      puStack_a = (undefined2 *)0xb77e;
      local_82 = uVar20;
      local_6c = uVar3;
      func_0x000298b4();
      puStack_a = (undefined2 *)0xb786;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xb78f;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xb798;
      func_0x000299b9();
      puStack_a = (undefined2 *)0xb7a0;
      FUN_28b3_0ee9();
      puStack_a = (undefined2 *)0xb7c5;
      func_0x000298b4();
      puStack_a = (undefined2 *)0xb7cd;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xb7d6;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xb7df;
      func_0x000299d1();
      if ((0xb3 < iVar12) && ((0xb4 < iVar12 || (uVar14 != uVar9)))) {
        puStack_a = (undefined2 *)0xb7f4;
        func_0x00029834();
        puStack_a = (undefined2 *)0xb7fc;
        func_0x00029c2c();
        puStack_a = (undefined2 *)0xb805;
        func_0x00029bfc();
        puStack_a = (undefined2 *)0xb80e;
        func_0x000299d1();
        puStack_a = (undefined2 *)0xb82e;
        func_0x000298b4();
        puStack_a = (undefined2 *)0xb836;
        func_0x00029c2c();
        puStack_a = (undefined2 *)0xb83f;
        func_0x00029c2c();
        puStack_a = (undefined2 *)0xb848;
        func_0x000299d1();
      }
      puStack_a = (undefined2 *)0xb850;
      func_0x00029834();
      puStack_a = (undefined2 *)0xb858;
      func_0x00029983();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb86d;
      func_0x0002a10c();
      puStack_a = (undefined2 *)0xb877;
      func_0x00029834();
      puStack_a = (undefined2 *)0x22b2;
      puStack_c = (undefined1 *)0xb880;
      FUN_28b3_112c();
      puStack_a = (undefined2 *)0xb886;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb89b;
      func_0x0002a11e();
      puStack_a = (undefined2 *)0xb8a5;
      func_0x00029834();
      puStack_a = (undefined2 *)0xb8ad;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xb8b5;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb8ca;
      func_0x0002a11e();
      puStack_a = (undefined2 *)0xb8d4;
      func_0x00029834();
      puStack_a = (undefined2 *)0xb8dc;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xb8e5;
      func_0x00029983();
      uStack_10 = 0x22b2;
      uStack_12 = 0xb8fa;
      func_0x0002a10c();
      puStack_a = (undefined2 *)0xb904;
      func_0x00029834();
      puStack_a = (undefined2 *)0xb90c;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xb915;
      func_0x00029983();
      puStack_a = (undefined2 *)local_72;
      puStack_c = (undefined1 *)local_74;
      local_e = (undefined2 *******)local_76;
      uStack_10 = *(undefined2 *)0x962a;
      uStack_12 = *(undefined2 *)0x9628;
      uStack_14 = *(undefined2 *)0x9626;
      local_16 = *(undefined2 *)0x9624;
      uStack_18 = *(undefined2 *)0x962a;
      local_1a = *(undefined2 *)0x9628;
      uStack_1c = *(undefined2 *)0x9626;
      local_1e = *(undefined2 *)0x9624;
      uStack_24 = 0xb94a;
      iVar12 = FUN_3ab8_0138();
      if (iVar12 == 0) {
        puStack_a = (undefined2 *)local_72;
        puStack_c = (undefined1 *)local_74;
        local_e = (undefined2 *******)local_76;
        uStack_10 = *(undefined2 *)0x962a;
        uStack_12 = *(undefined2 *)0x9628;
        uStack_14 = *(undefined2 *)0x9626;
        local_16 = *(undefined2 *)0x9624;
        uStack_18 = *(undefined2 *)0x962a;
        local_1a = *(undefined2 *)0x9628;
        uStack_1c = *(undefined2 *)0x9626;
        local_1e = *(undefined2 *)0x9624;
        uStack_24 = 0xb9af;
        iVar12 = FUN_3ab8_0138();
        if (iVar12 == 0) {
          puStack_a = (undefined2 *)0xb9df;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xb9e4;
          func_0x00029d78();
          uStack_10 = 0x22b2;
          uStack_12 = 0xb9ee;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          uStack_12 = 0xb9f7;
          func_0x000297e6();
          uStack_10 = 0x22b2;
          uStack_12 = 0xb9fc;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xba06;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          local_1a = 0xba0f;
          func_0x000297e6();
          func_0x000299d1();
          func_0x000297e6();
          uStack_2a = 0xba2c;
          func_0x000299d1();
          uStack_2a = 0xba31;
          local_5a = FUN_1000_0718();
          puStack_a = (undefined2 *)0xba43;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xba48;
          func_0x00029d78();
          uStack_10 = 0x22b2;
          uStack_12 = 0xba52;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          uStack_12 = 0xba5b;
          func_0x000297e6();
          uStack_10 = 0x22b2;
          uStack_12 = 0xba60;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xba6a;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          local_1a = 0xba73;
          func_0x000297e6();
          func_0x000299d1();
          func_0x000297e6();
          uStack_2a = 0xba90;
          func_0x000299d1();
          uStack_2a = 0xba95;
          uVar20 = FUN_1000_0718();
          uVar3 = local_5a;
          if (uVar20 < local_5a) {
            uVar3 = uVar20;
            uVar20 = local_5a;
            local_40 = local_5a;
          }
          local_56._2_2_ = (int)(uVar20 >> 0x10);
          local_56._0_2_ = (uint)uVar20;
          local_5a._2_2_ = (int)(uVar3 >> 0x10);
          local_5a._0_2_ = (uint)uVar3;
          uVar14 = (local_56._2_2_ - local_5a._2_2_) - (uint)((uint)local_56 < (uint)local_5a);
          uVar4 = uVar3;
          if ((0xb3 < uVar14) && ((0xb4 < uVar14 || ((uint)local_56 != (uint)local_5a)))) {
            uVar4 = uVar20;
            uVar20 = uVar3;
            local_40 = uVar3;
          }
          *(undefined2 *)0xb76a = local_104;
          *(undefined2 *)0xb76c = local_102;
          *(undefined2 *)0xb784 = local_100;
          *(undefined2 *)0xb786 = local_fe;
          *(undefined2 *)0xb30c = local_bc;
          *(undefined2 *)0xb30e = local_ba;
          *(undefined2 *)0xb37e = local_d0;
          *(undefined2 *)0xb380 = local_ce;
          puStack_a = (undefined2 *)0xbb41;
          local_5a = uVar4;
          local_56 = uVar20;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xbb46;
          func_0x00029d78();
          puStack_a = (undefined2 *)0xbb4e;
          func_0x00029c2c();
          puStack_a = (undefined2 *)0xbb57;
          func_0x000299b9();
          uStack_10 = 0x22b2;
          uStack_12 = 0xbb61;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          uStack_12 = 0xbb6a;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xbb74;
          func_0x000299d1();
          uStack_18 = 0;
          local_1a = 0x22b2;
          uStack_1c = 0xbb7c;
          puVar11 = (undefined2 *)FUN_1def_05d1();
          local_68 = *puVar11;
          local_66 = puVar11[1];
          puStack_a = (undefined2 *)0xbb95;
          func_0x00029834();
          uStack_10 = 0x22b2;
          uStack_12 = 0xbb9f;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          uStack_12 = 0xbba8;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xbbb2;
          func_0x000299d1();
          uStack_18 = 0;
          local_1a = 0x22b2;
          uStack_1c = 0xbbba;
          puVar11 = (undefined2 *)func_0x0001e558();
          local_64 = *puVar11;
          local_62 = puVar11[1];
          puStack_a = (undefined2 *)0xbbd3;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xbbdc;
          func_0x00029b6d();
          puStack_a = (undefined2 *)0xbbe1;
          func_0x00029d78();
          uStack_10 = 0x22b2;
          uStack_12 = 0xbbeb;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          uStack_12 = 0xbbf4;
          func_0x000297e6();
          uStack_10 = 0x22b2;
          uStack_12 = 0xbbfd;
          func_0x00029b6d();
          uStack_10 = 0x22b2;
          uStack_12 = 0xbc02;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xbc0c;
          func_0x000299d1();
          uStack_18 = *(undefined2 *)0x962a;
          local_1a = *(undefined2 *)0x9628;
          uStack_1c = *(undefined2 *)0x9626;
          local_1e = *(undefined2 *)0x9624;
          uStack_24 = *(undefined2 *)0x9626;
          uStack_26 = *(undefined2 *)0x9624;
          uStack_2a = 0xbc31;
          local_52 = FUN_1000_0718();
          if ((param_2 < param_4) || ((param_2 <= param_4 && (param_1 <= param_3)))) {
            puStack_a = (undefined2 *)param_3;
            puStack_c = (undefined1 *)0xdef;
            local_e = (undefined2 *******)0xbc68;
            func_0x00018779();
            puStack_a = (undefined2 *)param_1;
          }
          else {
            puStack_a = (undefined2 *)param_1;
            puStack_c = (undefined1 *)0xdef;
            local_e = (undefined2 *******)0xbc53;
            func_0x00018779();
            puStack_a = (undefined2 *)param_3;
          }
          puStack_c = (undefined1 *)0x11f2;
          local_e = (undefined2 *******)0xbc75;
          func_0x00018779();
          puStack_a = (undefined2 *)0xbc80;
          func_0x00029834();
          puStack_a = (undefined2 *)0xbc88;
          func_0x00029c2c();
          puStack_a = (undefined2 *)0xbc91;
          func_0x00029c74();
          goto LAB_3ab8_1111;
        }
      }
      *(undefined2 *)0xc22 = 2;
    }
    else {
      puStack_a = (undefined2 *)0xb040;
      func_0x000297e6();
      puStack_a = (undefined2 *)in_stack_00000044;
      puStack_c = (undefined1 *)in_stack_00000042;
      local_e = (undefined2 *******)in_stack_00000040;
      uStack_10 = 0x22b2;
      uStack_12 = 0xb051;
      func_0x0002a10c();
      puStack_a = (undefined2 *)0xb05b;
      func_0x00029834();
      puStack_a = (undefined2 *)in_stack_00000044;
      puStack_c = (undefined1 *)in_stack_00000042;
      local_e = (undefined2 *******)in_stack_00000040;
      uStack_10 = 0x22b2;
      uStack_12 = 0xb06c;
      func_0x0002a11e();
      uVar17 = (undefined1 *)0xfff7 < &local_e;
      puStack_a = (undefined2 *)0xb076;
      func_0x00029c44();
      puStack_a = (undefined2 *)0xb07f;
      func_0x00029c2c();
      puStack_a = (undefined2 *)0xb088;
      func_0x0002996b();
      puStack_a = (undefined2 *)0xb08d;
      FUN_28b3_1181();
      if (!(bool)uVar17) {
        local_84 = 0;
        puStack_a = (undefined2 *)0xb09e;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xb0a7;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xb0ac;
        FUN_28b3_1181();
        if ((bool)uVar17) {
          local_84 = 1;
        }
        if (local_84 == 0) {
          puStack_a = (undefined2 *)0xb0c7;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xb0cc;
          func_0x00029d78();
          puStack_a = (undefined2 *)0xb0d4;
          func_0x00029c2c();
          puStack_a = (undefined2 *)0xb0dc;
          func_0x0002996b();
          puStack_a = (undefined2 *)0xb0e4;
          func_0x00029b6d();
          puStack_a = (undefined2 *)0xb0ed;
          func_0x00029bb5();
          puStack_a = (undefined2 *)0xb0f6;
          func_0x0002996b();
          puStack_a = (undefined2 *)0xb0fe;
          func_0x00029983();
          puStack_a = (undefined2 *)0xb106;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xb10f;
          func_0x00029b6d();
          puStack_a = (undefined2 *)0xb118;
          func_0x00029bb5();
          puStack_a = (undefined2 *)0xb121;
          func_0x0002996b();
          puStack_a = (undefined2 *)0xb129;
          func_0x00029983();
          local_5a._0_2_ = 0;
          local_5a._2_2_ = 0x87;
          local_56._0_2_ = 0;
          local_56._2_2_ = 0xe1;
          puStack_a = (undefined2 *)0xb146;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xb14b;
          func_0x00029d78();
          uStack_10 = 0x22b2;
          uStack_12 = 0xb155;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          uStack_12 = 0xb15e;
          func_0x000297e6();
          uStack_10 = 0x22b2;
          uStack_12 = 0xb163;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xb16d;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          local_1a = 0xb176;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xb17b;
          func_0x00029d78();
          func_0x000299d1();
          func_0x000297e6();
          func_0x00029d78();
          uStack_2a = 0xb19d;
          func_0x000299d1();
          uStack_2a = 0xb1a2;
          local_52 = FUN_1000_0718();
        }
        else {
          puStack_a = (undefined2 *)0xb1b1;
          func_0x000297e6();
          puStack_a = (undefined2 *)in_stack_00000044;
          puStack_c = (undefined1 *)in_stack_00000042;
          local_e = (undefined2 *******)in_stack_00000040;
          uStack_10 = 0x22b2;
          uStack_12 = 0xb1c2;
          func_0x0002a11e();
          puStack_a = (undefined2 *)0xb1cc;
          func_0x00029834();
          puStack_a = (undefined2 *)in_stack_00000044;
          puStack_c = (undefined1 *)in_stack_00000042;
          local_e = (undefined2 *******)in_stack_00000040;
          uStack_10 = 0x22b2;
          uStack_12 = 0xb1dd;
          func_0x0002a10c();
          uVar17 = (undefined1 *)0xfff7 < &local_e;
          puStack_a = (undefined2 *)0xb1e7;
          func_0x00029c44();
          puStack_a = (undefined2 *)0xb1f0;
          func_0x00029c2c();
          puStack_a = (undefined2 *)0xb1f9;
          func_0x0002996b();
          puStack_a = (undefined2 *)0xb1fe;
          FUN_28b3_1181();
          if ((bool)uVar17) {
            return 0;
          }
          puStack_a = (undefined2 *)in_stack_00000044;
          puStack_c = (undefined1 *)in_stack_00000042;
          local_e = (undefined2 *******)in_stack_00000040;
          uStack_10 = 0x22b2;
          uStack_12 = 0xb214;
          func_0x0002a11e();
          puStack_a = (undefined2 *)0xb21e;
          func_0x00029834();
          puStack_a = (undefined2 *)in_stack_00000044;
          puStack_c = (undefined1 *)in_stack_00000042;
          local_e = (undefined2 *******)in_stack_00000040;
          uStack_10 = 0x22b2;
          uStack_12 = 0xb22f;
          func_0x0002a10c();
          puStack_a = (undefined2 *)0xb239;
          func_0x00029c44();
          puStack_a = (undefined2 *)0xb242;
          func_0x00029b6d();
          puStack_a = (undefined2 *)0xb24a;
          func_0x00029c2c();
          puStack_a = (undefined2 *)0xb252;
          func_0x00029983();
          puStack_a = (undefined2 *)0xb25a;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xb262;
          func_0x00029b6d();
          puStack_a = (undefined2 *)0xb26b;
          func_0x00029bb5();
          puStack_a = (undefined2 *)0xb274;
          func_0x0002996b();
          puStack_a = (undefined2 *)0xb27c;
          func_0x00029983();
          puStack_a = (undefined2 *)0xb284;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xb28d;
          func_0x00029b6d();
          puStack_a = (undefined2 *)0xb296;
          func_0x00029bb5();
          puStack_a = (undefined2 *)0xb29f;
          func_0x0002996b();
          puStack_a = (undefined2 *)0xb2a7;
          func_0x00029983();
          local_5a._0_2_ = 0;
          local_5a._2_2_ = 0x2d;
          local_56._0_2_ = 0;
          local_56._2_2_ = 0x87;
          puStack_a = (undefined2 *)0xb2c4;
          func_0x000297e6();
          puStack_a = (undefined2 *)0xb2c9;
          func_0x00029d78();
          uStack_10 = 0x22b2;
          uStack_12 = 0xb2d3;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          uStack_12 = 0xb2dc;
          func_0x000297e6();
          uStack_10 = 0x22b2;
          uStack_12 = 0xb2e1;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          local_1a = 0xb2eb;
          func_0x000299d1();
          uStack_18 = 0x22b2;
          local_1a = 0xb2f4;
          func_0x000297e6();
          uStack_18 = 0x22b2;
          local_1a = 0xb2f9;
          func_0x00029d78();
          func_0x000299d1();
          func_0x000297e6();
          func_0x00029d78();
          uStack_2a = 0xb31b;
          func_0x000299d1();
          uStack_2a = 0xb320;
          uVar19 = FUN_1000_0718();
          iVar13 = (int)((ulong)uVar19 >> 0x10);
          iVar12 = iVar13 + 0x5a;
          local_52 = CONCAT22(iVar12,(int)uVar19);
          if (0x167 < iVar12) {
            local_52 = CONCAT22(iVar13 + -0x10e,(int)uVar19);
          }
        }
        if ((param_2 < param_4) || ((param_2 <= param_4 && (param_1 <= param_3)))) {
          puStack_a = (undefined2 *)param_3;
          puStack_c = (undefined1 *)0xdef;
          local_e = (undefined2 *******)0xb376;
          func_0x00018779();
          puStack_a = (undefined2 *)param_1;
        }
        else {
          puStack_a = (undefined2 *)param_1;
          puStack_c = (undefined1 *)0xdef;
          local_e = (undefined2 *******)0xb361;
          func_0x00018779();
          puStack_a = (undefined2 *)param_3;
        }
        puStack_c = (undefined1 *)0x11f2;
        local_e = (undefined2 *******)0xb383;
        func_0x00018779();
        puStack_a = (undefined2 *)0xb38e;
        func_0x000297e6();
        puStack_a = (undefined2 *)0xb393;
        func_0x00029d78();
LAB_3ab8_1111:
        puStack_a = (undefined2 *)0xbc96;
        local_5c = FUN_28b3_0f51();
        local_4d = *(undefined1 *)0xa6a;
        local_4e = *(undefined1 *)0xa6c;
        local_4c = *(undefined1 *)0xb310;
        local_6e = 1;
        puVar15 = &uStack_26;
        puVar11 = &local_68;
        for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
          puVar2 = puVar15;
          puVar15 = puVar15 + 1;
          puVar1 = puVar11;
          puVar11 = puVar11 + 1;
          *puVar2 = *puVar1;
        }
        uStack_2a = 0xbcc4;
        iVar12 = FUN_13bf_01c1();
        if (iVar12 != 0) {
          local_6e = 2;
        }
        puStack_a = &local_16;
        puStack_c = local_3c;
        local_e = &local_e;
        uStack_10 = *(undefined2 *)0x14e;
        uStack_12 = *(undefined2 *)0x14c;
        uStack_14 = 0x11f2;
        local_16 = 0xbced;
        FUN_20a9_0ca3();
        puStack_a = (undefined2 *)0x1bb4;
        puStack_c = (undefined1 *)0xbcf8;
        func_0x00029834();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbd01;
        func_0x00029983();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbd09;
        func_0x00029834();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbd12;
        func_0x00029983();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbd1a;
        func_0x00029834();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbd23;
        func_0x00029983();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbd2b;
        func_0x00029834();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbd34;
        func_0x00029983();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbd3c;
        func_0x000297e6();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbd41;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbd4b;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbd53;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbd58;
        func_0x00029d78();
        local_1a = 0x22b2;
        uStack_1c = 0xbd62;
        func_0x000299d1();
        local_1a = 0x22b2;
        uStack_1c = 0xbd6a;
        func_0x000297e6();
        local_1a = 0x22b2;
        uStack_1c = 0xbd6f;
        func_0x00029d78();
        uStack_24 = 0xbd79;
        func_0x000299d1();
        uStack_24 = 0xbd81;
        func_0x000297e6();
        uStack_24 = 0xbd86;
        func_0x00029d78();
        uStack_2a = 0x22b2;
        uStack_2c = 0xbd90;
        func_0x000299d1();
        uStack_2a = 0x22b2;
        uStack_2c = 0xbd95;
        FUN_1def_043a();
        puStack_a = (undefined2 *)0x1bb4;
        puStack_c = (undefined1 *)0xbda1;
        func_0x000297e6();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbda6;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbdb0;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbdb9;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbdbe;
        func_0x00029d78();
        local_1a = 0x22b2;
        uStack_1c = 0xbdc8;
        func_0x000299d1();
        local_1a = 1;
        uStack_1c = 0x22b2;
        local_1e = 0xbdd1;
        func_0x0001e558();
        puStack_a = (undefined2 *)0x1bb4;
        puStack_c = (undefined1 *)0xbddb;
        func_0x000297e6();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbde0;
        func_0x00029d78();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbde8;
        func_0x000299d1();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbdf1;
        func_0x000297e6();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbdf6;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbe00;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbe09;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xbe0e;
        func_0x00029d78();
        local_1a = 0x22b2;
        uStack_1c = 0xbe18;
        func_0x000299d1();
        local_1a = 1;
        uStack_1c = 0x22b2;
        local_1e = 0xbe21;
        func_0x0001e558();
        uVar17 = (undefined1 *)0xffed < &local_1a;
        puStack_a = (undefined2 *)0x1bb4;
        puStack_c = (undefined1 *)0xbe2b;
        func_0x000297e6();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbe30;
        func_0x00029d78();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbe38;
        func_0x000299d1();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbe40;
        func_0x00029834();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbe45;
        func_0x00029ae7();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbe4d;
        func_0x00029834();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbe52;
        func_0x00029ae7();
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbe57;
        FUN_28b3_1181();
        if ((bool)uVar17) {
          local_ec = local_f0;
          local_ea = local_ee;
          local_f4 = local_fc;
          local_f2 = local_fa;
          local_f0 = uVar7;
          local_ee = uVar8;
          local_fc = uVar5;
          local_fa = uVar6;
        }
        puStack_a = (undefined2 *)0x22b2;
        puStack_c = (undefined1 *)0xbebe;
        bVar10 = func_0x0000db57();
        if ((bVar10 & 0xe) == 2) {
          param_5 = local_ec;
          param_6 = local_ea;
          param_7 = local_f4;
          param_8 = local_f2;
          in_stack_00000022 = local_f0;
          in_stack_00000024 = local_ee;
        }
        else {
          puStack_a = (undefined2 *)*(undefined2 *)0x962a;
          puStack_c = (undefined1 *)*(undefined2 *)0x9628;
          local_e = (undefined2 *******)*(undefined2 *)0x9626;
          uStack_10 = *(undefined2 *)0x9624;
          uStack_12 = 0x885;
          uStack_14 = 0xbf12;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          uStack_14 = 0xbf17;
          func_0x00029d78();
          local_1a = 0x22b2;
          uStack_1c = 0xbf21;
          func_0x000299d1();
          local_1a = 0x22b2;
          uStack_1c = 0xbf2a;
          func_0x000297e6();
          local_1a = 0x22b2;
          uStack_1c = 0xbf2f;
          func_0x00029d78();
          uStack_24 = 0xbf39;
          func_0x000299d1();
          uStack_24 = 0x22b2;
          uStack_26 = 0xbf42;
          FUN_1def_05d1();
          uStack_12 = 0x1bb4;
          uStack_14 = 0xbf4c;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          uStack_14 = 0xbf55;
          func_0x0002996b();
          uStack_12 = 0x22b2;
          uStack_14 = 0xbf5a;
          func_0x00029d78();
          local_1a = 0x22b2;
          uStack_1c = 0xbf64;
          func_0x000299d1();
          local_1a = 0;
          uStack_1c = 0x22b2;
          local_1e = 0xbf6c;
          puVar11 = (undefined2 *)FUN_1def_05d1();
          param_5 = *puVar11;
          param_6 = puVar11[1];
          puStack_a = (undefined2 *)*(undefined2 *)0x962a;
          puStack_c = (undefined1 *)*(undefined2 *)0x9628;
          local_e = (undefined2 *******)*(undefined2 *)0x9626;
          uStack_10 = *(undefined2 *)0x9624;
          uStack_12 = 0x1bb4;
          uStack_14 = 0xbf95;
          func_0x000297e6();
          local_1a = 0x22b2;
          uStack_1c = 0xbf9f;
          func_0x000299d1();
          local_1a = 0;
          uStack_1c = 0x22b2;
          local_1e = 0xbfa7;
          puVar11 = (undefined2 *)func_0x0001e558();
          param_7 = *puVar11;
          param_8 = puVar11[1];
          puStack_a = (undefined2 *)0x1bb4;
          puStack_c = (undefined1 *)0xbfbf;
          func_0x000297e6();
          puStack_a = (undefined2 *)0x22b2;
          puStack_c = (undefined1 *)0xbfc4;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0xbfce;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          uStack_14 = 0xbfd6;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          uStack_14 = 0xbfdb;
          func_0x00029d78();
          local_1a = 0x22b2;
          uStack_1c = 0xbfe5;
          func_0x000299d1();
          local_1a = 0x22b2;
          uStack_1c = 0xbfed;
          func_0x000297e6();
          local_1a = 0x22b2;
          uStack_1c = 0xbff2;
          func_0x00029d78();
          uStack_24 = 0xbffc;
          func_0x000299d1();
          uStack_24 = 0xc004;
          func_0x000297e6();
          uStack_24 = 0xc009;
          func_0x00029d78();
          uStack_2a = 0x22b2;
          uStack_2c = 0xc013;
          func_0x000299d1();
          uStack_2a = 0x22b2;
          uStack_2c = 0xc018;
          FUN_1def_043a();
          puStack_a = (undefined2 *)*(undefined2 *)0x962a;
          puStack_c = (undefined1 *)*(undefined2 *)0x9628;
          local_e = (undefined2 *******)*(undefined2 *)0x9626;
          uStack_10 = *(undefined2 *)0x9624;
          uStack_12 = 0x1bb4;
          uStack_14 = 0xc034;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          uStack_14 = 0xc039;
          func_0x00029d78();
          local_1a = 0x22b2;
          uStack_1c = 0xc043;
          func_0x000299d1();
          local_1a = 0x22b2;
          uStack_1c = 0xc04c;
          func_0x000297e6();
          local_1a = 0x22b2;
          uStack_1c = 0xc051;
          func_0x00029d78();
          uStack_24 = 0xc05b;
          func_0x000299d1();
          uStack_24 = 0x22b2;
          uStack_26 = 0xc064;
          FUN_1def_05d1();
          uStack_12 = 0x1bb4;
          uStack_14 = 0xc06e;
          func_0x000297e6();
          uStack_12 = 0x22b2;
          uStack_14 = 0xc077;
          func_0x0002996b();
          uStack_12 = 0x22b2;
          uStack_14 = 0xc07c;
          func_0x00029d78();
          local_1a = 0x22b2;
          uStack_1c = 0xc086;
          func_0x000299d1();
          local_1a = 0;
          uStack_1c = 0x22b2;
          local_1e = 0xc08e;
          puVar11 = (undefined2 *)FUN_1def_05d1();
          in_stack_00000022 = *puVar11;
          in_stack_00000024 = puVar11[1];
          puStack_a = (undefined2 *)*(undefined2 *)0x962a;
          puStack_c = (undefined1 *)*(undefined2 *)0x9628;
          local_e = (undefined2 *******)*(int *)0x9626;
          uStack_10 = *(undefined2 *)0x9624;
          uStack_12 = 0x1bb4;
          uStack_14 = 0xc0b7;
          func_0x000297e6();
          local_1a = 0x22b2;
          uStack_1c = 0xc0c1;
          func_0x000299d1();
          local_1a = 0;
          uStack_1c = 0x22b2;
          local_1e = 0xc0c9;
          puVar11 = (undefined2 *)func_0x0001e558();
          local_fc = *puVar11;
          local_fa = puVar11[1];
        }
        in_stack_00000026 = local_fc;
        in_stack_00000028 = local_fa;
        puVar15 = &local_1e;
        puVar16 = &local_1e;
        puVar11 = &param_5;
        for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
          puVar2 = puVar15;
          puVar15 = puVar15 + 1;
          puVar1 = puVar11;
          puVar11 = puVar11 + 1;
          *puVar2 = *puVar1;
        }
        FUN_17a6_0cba();
        puVar11 = &stack0x0022;
        for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
          puVar2 = puVar16;
          puVar16 = puVar16 + 1;
          puVar1 = puVar11;
          puVar11 = puVar11 + 1;
          *puVar2 = *puVar1;
        }
        FUN_17a6_0cba();
        return local_6e;
      }
    }
  }
  return 0;
}



/* 3ab8:1590  FUN_3ab8_1590  564 bytes, 2 callers */

/* WARNING: Removing unreachable block (ram,0x0003c1f8) */

void __cdecl16far FUN_3ab8_1590(void)

{
  long lVar1;
  long lVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 unaff_DS;
  long lVar5;
  undefined2 *in_stack_00000038;
  undefined2 *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  FUN_21f2_0ebc();
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
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
  FUN_1000_0718(0x22b2);
  func_0x000297e6(0xdef);
  uVar9 = 0x22b2;
  uVar8 = 0xc194;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  uVar6 = 0x22b2;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  lVar5 = FUN_1000_0718(0x22b2);
  lVar2 = CONCAT22(uVar9,uVar8);
  lVar1 = lVar5;
  if (lVar5 < lVar2) {
    lVar1 = lVar2;
    lVar2 = lVar5;
  }
  iVar4 = ((int)((ulong)lVar1 >> 0x10) - (int)((ulong)lVar2 >> 0x10)) -
          (uint)((uint)lVar1 < (uint)lVar2);
  func_0x000298b4(0xdef);
  func_0x00029c2c(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x000299b9(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  func_0x000298b4(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x000299d1(0x22b2);
  if ((0xb3 < iVar4) && ((0xb4 < iVar4 || ((uint)lVar1 != (uint)lVar2)))) {
    func_0x00029834(0x22b2);
    func_0x00029c2c(0x22b2);
    func_0x00029bfc(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000298b4(0x22b2);
    func_0x00029c2c(0x22b2);
    func_0x00029c2c(0x22b2);
    func_0x000299d1(0x22b2);
  }
  puVar3 = (undefined2 *)func_0x0002a11e(0x22b2,local_1e,local_1c,0xc1c2,uVar6);
  *in_stack_0000003c = *puVar3;
  in_stack_0000003c[1] = puVar3[1];
  in_stack_0000003c[2] = puVar3[2];
  in_stack_0000003c[3] = puVar3[3];
  uVar7 = 0x22b2;
  uVar8 = local_1e;
  uVar9 = local_1c;
  puVar3 = (undefined2 *)func_0x0002a10c();
  *in_stack_0000003e = *puVar3;
  in_stack_0000003e[1] = puVar3[1];
  in_stack_0000003e[2] = puVar3[2];
  in_stack_0000003e[3] = puVar3[3];
  *in_stack_00000038 = local_1e;
  in_stack_00000038[1] = local_1c;
  in_stack_00000038[2] = 0xc1c2;
  in_stack_00000038[3] = uVar6;
  *in_stack_0000003a = 0xc31c;
  in_stack_0000003a[1] = uVar7;
  in_stack_0000003a[2] = uVar8;
  in_stack_0000003a[3] = uVar9;
  return;
}



/* 3ab8:17c4  FUN_3ab8_17c4  172 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003db4b) */

undefined2 FUN_3ab8_17c4(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined1 *puVar10;
  undefined1 **ppuVar11;
  char cVar12;
  int iVar13;
  undefined2 *puVar14;
  int iVar15;
  uint uVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined2 **ppuVar19;
  uint *puVar20;
  undefined2 uVar21;
  undefined1 **ppuVar22;
  undefined1 **ppuVar23;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined4 uVar27;
  undefined2 *puVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 *apuStack_125e [2];
  int iStack_125a;
  undefined1 auStack_1258 [80];
  int iStack_1208;
  undefined2 auStack_11fc [10];
  byte abStack_11e8 [1388];
  undefined1 **ppuStack_c7c;
  int iStack_c7a;
  undefined1 **ppuStack_c78;
  undefined2 uStack_c76;
  undefined2 auStack_c74 [10];
  byte abStack_c60 [1388];
  undefined2 auStack_6f4 [10];
  undefined2 uStack_6e0;
  undefined1 local_174 [10];
  undefined1 **ppuStack_16a;
  int iStack_168;
  undefined1 **ppuStack_166;
  int iStack_164;
  uint uStack_162;
  undefined1 **ppuStack_158;
  int iStack_156;
  uint uStack_154;
  undefined2 uStack_152;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined2 uStack_14c;
  int iStack_14a;
  undefined1 **ppuStack_148;
  int iStack_146;
  uint local_144;
  int local_142;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined1 **ppuStack_138;
  int iStack_136;
  undefined1 **ppuStack_134;
  int iStack_132;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined1 auStack_128 [8];
  undefined1 **local_120;
  int local_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  int iStack_118;
  int iStack_116;
  undefined1 *puStack_114;
  undefined1 **ppuStack_112;
  undefined1 *local_10c;
  undefined1 **ppuStack_10a;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined2 local_104;
  undefined2 uStack_102;
  undefined2 uStack_100;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 **ppuStack_f4;
  undefined2 uStack_f2;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined1 **ppuStack_ec;
  undefined2 uStack_ea;
  char cStack_e8;
  char cStack_e7;
  char cStack_e6;
  byte bStack_e4;
  byte bStack_e3;
  undefined2 uStack_e2;
  uint uStack_e0;
  undefined1 **ppuStack_de;
  int iStack_dc;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined1 **ppuStack_ce;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined2 uStack_c8;
  undefined1 **ppuStack_c6;
  undefined2 uStack_c4;
  char cStack_c2;
  char cStack_c1;
  char cStack_c0;
  byte bStack_be;
  byte bStack_bd;
  undefined4 uStack_9c;
  uint local_98;
  int local_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  undefined4 uStack_82;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 **ppuStack_4c;
  int iStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined1 **ppuStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined1 **ppuStack_3c;
  undefined2 uStack_3a;
  undefined1 **ppuStack_38;
  undefined2 auStack_36 [2];
  uint local_32;
  int local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 *puStack_20;
  undefined1 **ppuVar31;
  byte bVar32;
  uint uStack_1c;
  undefined1 *puStack_1a;
  undefined2 uStack_18;
  undefined1 *puStack_16;
  undefined1 **ppuStack_14;
  undefined1 **ppuStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 **ppuStack_c;
  
  FUN_21f2_0ebc();
  local_11e = 0;
  local_120 = (undefined1 **)0x0;
  local_142 = 0;
  local_144 = 0;
  local_30 = 0;
  local_32 = 0;
  local_96 = 0;
  local_98 = 0;
  local_d6 = *(undefined2 *)0x9678;
  local_d4 = *(undefined2 *)0x967a;
  local_10c = (undefined1 *)*(int *)0x9634;
  ppuStack_10a = (undefined1 **)*(int *)0x9636;
  uStack_108 = *(undefined2 *)0x9638;
  uStack_106 = *(undefined2 *)0x963a;
  local_104 = *(undefined2 *)0x967c;
  uStack_102 = *(undefined2 *)0x967e;
  uStack_100 = *(undefined2 *)0x9680;
  uStack_fe = *(undefined2 *)0x9682;
  ppuStack_c = (undefined1 **)0x22b2;
  puStack_e = (undefined1 *)0xc3a6;
  func_0x00024c86();
  ppuStack_c = (undefined1 **)0x22b2;
  puStack_e = (undefined1 *)0xc3b6;
  FUN_21f2_2d26();
LAB_3ab8_1838:
  do {
    while( true ) {
      uVar21 = 0x885;
      func_0x0000c3ca();
      ppuStack_c = (undefined1 **)*(undefined2 *)0x9626;
      puStack_e = (undefined1 *)*(int *)0x9624;
      uStack_10 = *(undefined2 *)0x962a;
      ppuStack_12 = (undefined1 **)*(undefined2 *)0x9628;
      ppuStack_14 = (undefined1 **)*(int *)0x9626;
      puStack_16 = (undefined1 *)*(int *)0x9624;
      uStack_18 = 0;
      puStack_1a = local_174;
      uStack_1c = 0xffff;
      ppuVar31 = (undefined1 **)0x1;
      puStack_20 = (undefined2 *)0x1;
      pcVar4 = (code *)swi(0x3f);
      iVar13 = (*pcVar4)();
      if (iVar13 != -1) break;
      if (((local_30 < 1) && ((local_30 < 0 || (local_32 == 0)))) &&
         ((local_96 < 0 || ((local_96 < 1 && (local_98 == 0)))))) {
        return 0xffff;
      }
      func_0x0000c3ca();
      uVar21 = 0x885;
      while ((-1 < local_30 && ((0 < local_30 || (local_32 != 0))))) {
        bVar24 = local_32 == 0;
        local_32 = local_32 - 1;
        local_30 = local_30 - (uint)bVar24;
        ppuStack_158 = (undefined1 **)*(undefined2 *)0x148;
        iStack_156 = *(int *)0x14a;
        puStack_e = (undefined1 *)0xc451;
        ppuStack_c = (undefined1 **)uVar21;
        func_0x00018779();
        uVar21 = 0x11f2;
      }
      while ((-1 < local_96 && ((0 < local_96 || (local_98 != 0))))) {
        bVar24 = local_98 == 0;
        local_98 = local_98 - 1;
        local_96 = local_96 - (uint)bVar24;
        ppuStack_158 = (undefined1 **)*(undefined2 *)0x14c;
        iStack_156 = *(int *)0x14e;
        puStack_e = (undefined1 *)0xc485;
        ppuStack_c = (undefined1 **)uVar21;
        FUN_13bf_0327();
        uVar21 = 0x11f2;
      }
      iStack_136 = 0;
      for (ppuStack_138 = (undefined1 **)0x1;
          (iStack_136 <= iStack_164 && ((iStack_136 < iStack_164 || (ppuStack_138 <= ppuStack_166)))
          ); ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1)) {
        puVar14 = (undefined2 *)&stack0xffd2;
        puVar18 = auStack_c74 + (int)ppuStack_138 * 0xb;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          puVar28 = puVar18;
          puVar18 = puVar18 + 1;
          *puVar2 = *puVar28;
        }
        puVar20 = &uStack_1c;
        puVar14 = (undefined2 *)&stack0xffd2;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar2 = puVar20;
          puVar20 = puVar20 + 1;
          puVar28 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar28;
        }
        puStack_20 = (undefined2 *)0xc4e0;
        FUN_17a6_0cba();
        ppuStack_c = (undefined1 **)0x11f2;
        puStack_e = (undefined1 *)0xc4f0;
        uVar27 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar27 + 0x14);
        *pbVar1 = *pbVar1 | 2;
        iStack_136 = iStack_136 + (uint)((undefined1 **)0xfffe < ppuStack_138);
      }
      ppuStack_c = (undefined1 **)0xc506;
      func_0x0000b1d8();
      func_0x0000abfa();
      local_30 = 0;
      local_32 = 0;
      local_96 = 0;
      local_98 = 0;
      func_0x0000c3ca();
      ppuStack_c = (undefined1 **)0xc529;
      func_0x0000daa6();
    }
    if (*(int *)0x158 != 0) {
      return 0xfba9;
    }
    while( true ) {
      puStack_e = (undefined1 *)0xc67d;
      ppuStack_c = (undefined1 **)uVar21;
      func_0x00024c86();
      ppuStack_c = (undefined1 **)0x22b2;
      puStack_e = (undefined1 *)0xc68d;
      FUN_21f2_2d26();
      ppuStack_c = (undefined1 **)0x22b2;
      puStack_e = (undefined1 *)0xc69d;
      FUN_21f2_2d26();
      ppuStack_c = (undefined1 **)0x22b2;
      puStack_e = (undefined1 *)0xc6ad;
      FUN_21f2_2d26();
      ppuStack_c = (undefined1 **)0x22b2;
      puStack_e = (undefined1 *)0xc6bd;
      FUN_21f2_2d26();
      ppuStack_c = (undefined1 **)0x22b2;
      puStack_e = (undefined1 *)0xc550;
      FUN_21f2_2d26();
      ppuStack_c = (undefined1 **)0x22b2;
      puStack_e = (undefined1 *)0xc560;
      FUN_21f2_2d26();
      ppuStack_c = apuStack_125e;
      puStack_e = auStack_1258;
      uStack_10 = 1;
      ppuStack_12 = (undefined1 **)0x22b2;
      uVar21 = 0x1bb4;
      ppuStack_14 = (undefined1 **)0xc57f;
      iStack_125a = FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return 0xfba9;
      }
      if (iStack_125a == -1) {
        ppuStack_c = (undefined1 **)*(int *)0x9626;
        puStack_e = (undefined1 *)*(int *)0x9624;
        uStack_10 = *(undefined2 *)0x962a;
        ppuStack_12 = (undefined1 **)*(undefined2 *)0x9628;
        ppuStack_14 = (undefined1 **)*(int *)0x9626;
        puStack_16 = (undefined1 *)*(int *)0x9624;
        uStack_18 = 0;
        puStack_1a = local_174;
        uStack_1c = 0xffff;
        ppuVar31 = (undefined1 **)0xd8f1;
        puStack_20 = (undefined2 *)0x1;
        pcVar4 = (code *)swi(0x3f);
        iVar13 = (*pcVar4)();
        if (iVar13 == -1) goto LAB_3ab8_1838;
        if (*(int *)0x158 != 0) {
          return 0xfba9;
        }
      }
      if ((iStack_125a == 1) || (iStack_1208 == 1)) {
        func_0x0000c3ca();
        ppuStack_c = (undefined1 **)0xc5f9;
        func_0x00008095();
        iStack_164 = 0;
        ppuStack_166 = (undefined1 **)0x0;
        local_30 = 0;
        local_32 = 0;
        local_96 = 0;
        local_98 = 0;
        func_0x0000c3ca();
        ppuStack_c = (undefined1 **)0xc61f;
        func_0x0000daa6();
        uStack_152 = 1;
        uStack_150 = 0;
        ppuStack_138 = (undefined1 **)0x1;
        iStack_136 = 0;
        ppuVar22 = (undefined1 **)0x885;
        goto LAB_3ab8_1b7e;
      }
      if ((iStack_125a == 2) || (iStack_1208 == 2)) break;
      if (iStack_125a == 3) {
        if (*(char *)0x2836 == '\0') {
          *(undefined1 *)0x2836 = 1;
        }
        else {
          *(undefined1 *)0x2836 = 0;
        }
      }
    }
    func_0x0000c3ca();
    ppuStack_c = (undefined1 **)0xc652;
    func_0x00008095();
  } while( true );
LAB_3ab8_1b7e:
  if ((*(int *)0x14a < iStack_136) ||
     ((*(int *)0x14a <= iStack_136 && ((undefined1 **)*(uint *)0x148 < ppuStack_138))))
  goto LAB_3ab8_1c44;
  ppuVar23 = (undefined1 **)0x0;
  puStack_e = (undefined1 *)0xc721;
  ppuStack_c = ppuVar22;
  uVar27 = func_0x0000013f();
  uVar25 = (*(byte *)((int)uVar27 + 0x14) & 2) == 0;
  if (!(bool)uVar25) {
    ppuStack_c = (undefined1 **)0x0;
    puStack_e = (undefined1 *)0xc73b;
    puVar28 = (undefined2 *)func_0x0000013f();
    puVar18 = (undefined2 *)puVar28;
    puVar14 = (undefined2 *)&stack0xffd2;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar3 = puVar14;
      puVar14 = puVar14 + 1;
      puVar2 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar3 = *puVar2;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar25) {
      func_0x000297e6();
      func_0x000297e6();
      ppuVar23 = (undefined1 **)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar25) goto LAB_3ab8_1b74;
    }
    ppuVar23 = (undefined1 **)0x22b2;
    if (((uint)puStack_1a & 0xe0) == 0) {
      if ((-1 < iStack_164) && ((0 < iStack_164 || ((undefined1 **)0x3b < ppuStack_166)))) {
        *(undefined2 *)0xc22 = 1;
        uStack_10 = 0x764;
LAB_3ab8_1c36:
        ppuStack_c = (undefined1 **)0x2;
        puStack_e = (undefined1 *)0x36;
        ppuStack_14 = (undefined1 **)0xc7bc;
        ppuStack_12 = ppuVar23;
        FUN_1000_02b5();
        return 0;
      }
      bVar24 = (undefined1 **)0xfffe < ppuStack_166;
      ppuStack_166 = (undefined1 **)((int)ppuStack_166 + 1);
      iStack_164 = iStack_164 + (uint)bVar24;
      puStack_1a = (undefined1 *)((uint)puStack_1a & 0xfffd);
      puVar18 = auStack_c74 + (int)ppuStack_166 * 0xb;
      puVar14 = (undefined2 *)&stack0xffd2;
      for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
        puVar2 = puVar18;
        puVar18 = puVar18 + 1;
        puVar28 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar2 = *puVar28;
      }
    }
  }
LAB_3ab8_1b74:
  bVar24 = (undefined1 **)0xfffe < ppuStack_138;
  ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1);
  iStack_136 = iStack_136 + (uint)bVar24;
  ppuVar22 = ppuVar23;
  goto LAB_3ab8_1b7e;
LAB_3ab8_1c44:
  iStack_c7a = 0;
  ppuStack_c7c = (undefined1 **)0x0;
  iStack_136 = 0;
  for (ppuStack_138 = (undefined1 **)0x1;
      (iStack_136 <= iStack_164 && ((iStack_136 < iStack_164 || (ppuStack_138 <= ppuStack_166))));
      ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1)) {
    puVar18 = &uStack_d2;
    puVar14 = auStack_c74 + (int)ppuStack_138 * 0xb;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar18;
      puVar18 = puVar18 + 1;
      puVar28 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar2 = *puVar28;
    }
    if ((bStack_be & 2) == 0) {
LAB_3ab8_2094:
      func_0x000297e6();
      func_0x00029d78();
      uStack_10 = 0x22b2;
      ppuStack_12 = (undefined1 **)0xcc2c;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      ppuStack_12 = (undefined1 **)0xcc35;
      func_0x000297e6();
      uStack_10 = 0x22b2;
      ppuStack_12 = (undefined1 **)0xcc3a;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      puStack_1a = (undefined1 *)0xcc44;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      puStack_1a = (undefined1 *)0xcc4d;
      func_0x000297e6();
      uStack_18 = 0x22b2;
      puStack_1a = (undefined1 *)0xcc52;
      func_0x00029d78();
      puStack_20 = (undefined2 *)0x22b2;
      uStack_22 = 0xcc5c;
      func_0x000299d1();
      puStack_20 = (undefined2 *)0x22b2;
      uStack_22 = 0xcc65;
      func_0x000297e6();
      puStack_20 = (undefined2 *)0x22b2;
      uStack_22 = 0xcc6a;
      func_0x00029d78();
      uStack_2a = 0xcc74;
      func_0x000299d1();
      ppuVar22 = (undefined1 **)0x1bb4;
      uStack_2a = 0xcc79;
      FUN_1def_043a();
      ppuStack_158 = (undefined1 **)((int)ppuStack_138 + 1);
      iStack_156 = iStack_136 + (uint)((undefined1 **)0xfffe < ppuStack_138);
      do {
        if ((iStack_164 < iStack_156) ||
           ((iStack_164 <= iStack_156 && (ppuStack_166 < ppuStack_158)))) {
          bVar24 = (undefined1 **)0xfffe < ppuStack_c7c;
          ppuStack_c7c = (undefined1 **)((int)ppuStack_c7c + 1);
          iStack_c7a = iStack_c7a + (uint)bVar24;
          puVar14 = auStack_11fc + (int)ppuStack_c7c * 0xb;
          puVar18 = &uStack_d2;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar2 = puVar14;
            puVar14 = puVar14 + 1;
            puVar28 = puVar18;
            puVar18 = puVar18 + 1;
            *puVar2 = *puVar28;
          }
          break;
        }
        puVar18 = &uStack_f8;
        puVar14 = auStack_c74 + (int)ppuStack_158 * 0xb;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar2 = puVar18;
          puVar18 = puVar18 + 1;
          puVar28 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar28;
        }
        if (((((bStack_e4 & 2) == 0) && (cStack_e6 == cStack_c0)) && (cStack_e7 == cStack_c1)) &&
           (cStack_e8 == cStack_c2)) {
          func_0x000297e6();
          func_0x00029d78();
          uStack_10 = 0x22b2;
          ppuStack_12 = (undefined1 **)0xc7f3;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          ppuStack_12 = (undefined1 **)0xc7fc;
          func_0x000297e6();
          uStack_10 = 0x22b2;
          ppuStack_12 = (undefined1 **)0xc801;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          puStack_1a = (undefined1 *)0xc80b;
          func_0x000299d1();
          uStack_18 = 1;
          puStack_1a = (undefined1 *)0x22b2;
          uStack_1c = 0xc814;
          puVar14 = (undefined2 *)func_0x0001e558();
          uStack_140 = *puVar14;
          uStack_13e = puVar14[1];
          func_0x000297e6();
          func_0x00029d78();
          uStack_10 = 0x22b2;
          ppuStack_12 = (undefined1 **)0xc83e;
          func_0x000299d1();
          uStack_10 = 0x22b2;
          ppuStack_12 = (undefined1 **)0xc847;
          func_0x000297e6();
          uStack_10 = 0x22b2;
          ppuStack_12 = (undefined1 **)0xc84c;
          func_0x00029d78();
          uStack_18 = 0x22b2;
          puStack_1a = (undefined1 *)0xc856;
          func_0x000299d1();
          uStack_18 = 1;
          puStack_1a = (undefined1 *)0x22b2;
          uStack_1c = 0xc85f;
          puVar14 = (undefined2 *)func_0x0001e558();
          uVar25 = (undefined1 *)0xffed < &uStack_18;
          uVar26 = &stack0x0000 == (undefined1 *)0x6;
          uStack_14e = *puVar14;
          uStack_14c = puVar14[1];
          func_0x00029834();
          func_0x000297e6();
          func_0x00029ae7();
          func_0x00029d78();
          ppuVar22 = (undefined1 **)0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar25 || (bool)uVar26) {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029ae7();
            func_0x00029d78();
            ppuVar22 = (undefined1 **)0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar25 && !(bool)uVar26) goto LAB_3ab8_1d37;
            func_0x000297e6();
            func_0x00029d78();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xc937;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xc940;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xc945;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xc94f;
            func_0x000299d1();
            uStack_18 = 1;
            puStack_1a = (undefined1 *)0x22b2;
            uStack_1c = 0xc958;
            puVar14 = (undefined2 *)FUN_1def_05d1();
            uStack_12c = *puVar14;
            uStack_12a = puVar14[1];
            func_0x000297e6();
            func_0x000297e6();
            func_0x00029d78();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xc98b;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xc994;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xc999;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xc9a3;
            func_0x000299d1();
            uStack_18 = 1;
            puStack_1a = (undefined1 *)0x22b2;
            uStack_1c = 0xc9ac;
            FUN_1def_05d1();
            uVar25 = (undefined1 *)0xffed < &uStack_18;
            uVar26 = &stack0x0000 == (undefined1 *)0x6;
            func_0x000297e6();
            func_0x0002996b();
            FUN_28b3_1181();
            if ((bool)uVar25) {
              ppuStack_c78 = (undefined1 **)uStack_12c;
              uStack_c76 = uStack_12a;
              func_0x000297e6();
              func_0x00029983();
              uVar7 = uStack_f2;
              ppuVar22 = ppuStack_f4;
              uVar6 = uStack_f6;
              uVar21 = uStack_f8;
              uStack_13c = ppuStack_c78;
              uStack_13a = uStack_c76;
              uStack_f8 = uStack_f0;
              uStack_f6 = uStack_ee;
              uStack_f0 = uVar21;
              uStack_ee = uVar6;
              ppuStack_c78 = ppuStack_f4;
              uStack_c76 = uStack_f2;
              ppuStack_f4 = ppuStack_ec;
              uStack_f2 = uStack_ea;
              ppuStack_ec = ppuVar22;
              uStack_ea = uVar7;
            }
            iStack_14a = 0;
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar25) {
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar25 && !(bool)uVar26) {
                uStack_d2 = uStack_f8;
                uStack_d0 = uStack_f6;
                ppuStack_ce = ppuStack_f4;
                uStack_cc = uStack_f2;
                pbVar1 = abStack_c60 + (int)ppuStack_158 * 0x16;
                uVar25 = 0;
                *pbVar1 = *pbVar1 | 2;
                uVar26 = *pbVar1 == 0;
                iStack_14a = 1;
              }
            }
            func_0x000297e6();
            func_0x00029d78();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c74();
            FUN_28b3_1181();
            if (!(bool)uVar25 && !(bool)uVar26) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar25) {
                uStack_ca = uStack_f0;
                uStack_c8 = uStack_ee;
                ppuStack_c6 = ppuStack_ec;
                uStack_c4 = uStack_ea;
                abStack_c60[(int)ppuStack_158 * 0x16] = abStack_c60[(int)ppuStack_158 * 0x16] | 2;
                iStack_14a = 1;
              }
            }
            uVar25 = 0;
            uVar26 = iStack_14a == 0;
            if (!(bool)uVar26) goto LAB_3ab8_2094;
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar25 && !(bool)uVar26) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c74();
              ppuVar22 = (undefined1 **)0x22b2;
              FUN_28b3_1181();
              if (!(bool)uVar25 && !(bool)uVar26) {
                abStack_c60[(int)ppuStack_158 * 0x16] = abStack_c60[(int)ppuStack_158 * 0x16] | 2;
                goto LAB_3ab8_1d37;
              }
            }
            ppuVar22 = (undefined1 **)0x22b2;
          }
        }
LAB_3ab8_1d37:
        bVar24 = (undefined1 **)0xfffe < ppuStack_158;
        ppuStack_158 = (undefined1 **)((int)ppuStack_158 + 1);
        iStack_156 = iStack_156 + (uint)bVar24;
      } while( true );
    }
    iStack_136 = iStack_136 + (uint)((undefined1 **)0xfffe < ppuStack_138);
  }
  ppuStack_de = (undefined1 **)*(undefined2 *)0x148;
  iStack_dc = *(int *)0x14a;
  iStack_4a = 0;
  ppuStack_4c = (undefined1 **)0x0;
  iStack_136 = 0;
  for (ppuStack_138 = (undefined1 **)0x1;
      (iStack_136 <= iStack_dc && ((iStack_136 < iStack_dc || (ppuStack_138 <= ppuStack_de))));
      ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1)) {
    puStack_e = (undefined1 *)0xcce5;
    ppuStack_c = ppuVar22;
    uVar27 = func_0x0000013f();
    if ((*(byte *)((int)uVar27 + 0x14) & 2) == 0) {
      bVar24 = (undefined1 **)0xfffe < ppuStack_4c;
      ppuStack_4c = (undefined1 **)((int)ppuStack_4c + 1);
      iStack_4a = iStack_4a + (uint)bVar24;
      if ((ppuStack_138 != ppuStack_4c) || (iStack_136 != iStack_4a)) {
        ppuStack_c = (undefined1 **)0x0;
        puStack_e = (undefined1 *)0xcd19;
        puVar28 = (undefined2 *)func_0x0000013f();
        puVar18 = (undefined2 *)puVar28;
        puVar14 = (undefined2 *)&stack0xffd2;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar3 = puVar14;
          puVar14 = puVar14 + 1;
          puVar2 = puVar18;
          puVar18 = puVar18 + 1;
          *puVar3 = *puVar2;
        }
        ppuStack_c = (undefined1 **)0x0;
        puStack_e = (undefined1 *)0xcd36;
        puVar28 = (undefined2 *)func_0x0000013f();
        puVar18 = (undefined2 *)puVar28;
        puVar14 = (undefined2 *)&stack0xffd2;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar3 = puVar18;
          puVar18 = puVar18 + 1;
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar3 = *puVar2;
        }
      }
    }
    ppuVar22 = (undefined1 **)0x0;
    iStack_136 = iStack_136 + (uint)((undefined1 **)0xfffe < ppuStack_138);
  }
  *(int *)0x148 = (int)ppuStack_4c;
  *(int *)0x14a = iStack_4a;
  iStack_136 = 0;
  for (ppuStack_138 = (undefined1 **)0x1;
      (ppuVar23 = ppuVar22, iStack_136 <= iStack_164 &&
      ((iStack_136 < iStack_164 || (ppuStack_138 <= ppuStack_166))));
      ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1)) {
    puVar14 = (undefined2 *)&stack0xffd2;
    puVar18 = auStack_c74 + (int)ppuStack_138 * 0xb;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar14;
      puVar14 = puVar14 + 1;
      puVar28 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar2 = *puVar28;
    }
    puVar20 = &uStack_1c;
    puVar14 = (undefined2 *)&stack0xffd2;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar2 = puVar20;
      puVar20 = puVar20 + 1;
      puVar28 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar2 = *puVar28;
    }
    puStack_20 = (undefined2 *)0xcdbb;
    FUN_17a6_0ae3();
    iStack_136 = iStack_136 + (uint)((undefined1 **)0xfffe < ppuStack_138);
    ppuVar22 = (undefined1 **)0x11f2;
    ppuVar31 = ppuVar23;
  }
  iStack_136 = 0;
  for (ppuStack_138 = (undefined1 **)0x1;
      (iStack_136 <= iStack_c7a && ((iStack_136 < iStack_c7a || (ppuStack_138 <= ppuStack_c7c))));
      ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1)) {
    abStack_11e8[(int)ppuStack_138 * 0x16] = abStack_11e8[(int)ppuStack_138 * 0x16] & 0xfd;
    iStack_136 = iStack_136 + (uint)((undefined1 **)0xfffe < ppuStack_138);
  }
  do {
    iStack_118 = 0;
    iStack_168 = 0;
    ppuStack_16a = (undefined1 **)0x0;
    iStack_136 = 0;
    for (ppuStack_138 = (undefined1 **)0x1;
        (iStack_136 <= iStack_c7a && ((iStack_136 < iStack_c7a || (ppuStack_138 <= ppuStack_c7c))));
        ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1)) {
      if ((abStack_11e8[(int)ppuStack_138 * 0x16] & 2) == 0) {
        puVar14 = (undefined2 *)&stack0xffd2;
        puVar18 = auStack_11fc + (int)ppuStack_138 * 0xb;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          puVar28 = puVar18;
          puVar18 = puVar18 + 1;
          *puVar2 = *puVar28;
        }
        bVar32 = (byte)((uint)ppuVar31 >> 8);
        if (iStack_118 == 0) {
          iStack_118 = 1;
          uStack_e0 = uStack_1c & 0xff;
          uStack_162 = (uint)bVar32;
          uStack_154 = (uint)ppuVar31 & 0xff;
        }
        else if ((((uStack_1c & 0xff) != uStack_e0) || (bVar32 != uStack_162)) ||
                (((uint)ppuVar31 & 0xff) != uStack_154)) goto LAB_3ab8_22a1;
        abStack_11e8[(int)ppuStack_138 * 0x16] = abStack_11e8[(int)ppuStack_138 * 0x16] | 2;
        bVar24 = (undefined1 **)0xfffe < ppuStack_16a;
        ppuStack_16a = (undefined1 **)((int)ppuStack_16a + 1);
        iStack_168 = iStack_168 + (uint)bVar24;
        puVar18 = auStack_6f4 + (int)ppuStack_16a * 0xb;
        puVar14 = (undefined2 *)&stack0xffd2;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar2 = puVar18;
          puVar18 = puVar18 + 1;
          puVar28 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar28;
        }
      }
LAB_3ab8_22a1:
      iStack_136 = iStack_136 + (uint)((undefined1 **)0xfffe < ppuStack_138);
    }
    if (iStack_118 == 0) goto LAB_3ab8_1838;
    iStack_146 = 0;
    ppuStack_148 = (undefined1 **)0x0;
    iStack_132 = 0;
    local_142 = 0;
    local_144 = 0;
    iStack_116 = 0;
    for (ppuStack_134 = (undefined1 **)0x1;
        (iStack_132 <= iStack_168 && ((iStack_132 < iStack_168 || (ppuStack_134 <= ppuStack_16a))));
        ppuStack_134 = (undefined1 **)((int)ppuStack_134 + 1)) {
LAB_3ab8_2385:
      bVar24 = 0xfffe < local_144;
      local_144 = local_144 + 1;
      local_142 = local_142 + (uint)bVar24;
      ppuVar23 = (undefined1 **)0x11f2;
      uVar21 = 0xcf14;
      cVar12 = FUN_12c1_009c();
      ppuVar22 = ppuStack_134;
      if (cVar12 == '\x1b') {
        return 0;
      }
      if ((-1 < local_142) && ((0 < local_142 || (400 < local_144)))) {
        *(undefined2 *)0xc22 = 1;
        uStack_10 = 0x402;
        goto LAB_3ab8_1c36;
      }
      (&uStack_6e0)[(int)ppuStack_134 * 0xb] = (&uStack_6e0)[(int)ppuStack_134 * 0xb] & 0xfcfd;
      puVar14 = &uStack_18;
      puVar18 = auStack_6f4 + (int)ppuVar22 * 0xb;
      for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
        puVar2 = puVar14;
        puVar14 = puVar14 + 1;
        puVar28 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar2 = *puVar28;
      }
      iStack_14a = 0;
      uStack_e2 = 0;
      iStack_4a = iStack_132 + (uint)((undefined1 **)0xfffe < ppuStack_134);
      ppuStack_4c = (undefined1 **)((int)ppuStack_134 + 1);
      ppuStack_138 = (undefined1 **)((int)ppuStack_134 + 1);
      iStack_136 = iStack_4a;
      while( true ) {
        if ((iStack_168 < iStack_136) ||
           ((iStack_168 <= iStack_136 && (ppuStack_16a < ppuStack_138)))) goto LAB_3ab8_250d;
        iVar13 = (int)((long)(int)ppuStack_138 * 0x16);
        uVar25 = (long)iVar13 != (long)(int)ppuStack_138 * 0x16;
        puVar14 = &uStack_48;
        puVar18 = (undefined2 *)((int)auStack_6f4 + iVar13);
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          puVar28 = puVar18;
          puVar18 = puVar18 + 1;
          *puVar2 = *puVar28;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        FUN_28b3_1181();
        if ((bool)uVar25) break;
LAB_3ab8_240d:
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029ae7();
        uVar21 = 0xcfb0;
        FUN_28b3_1181();
        if ((bool)uVar25) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          uVar21 = 0xcfd5;
          FUN_28b3_1181();
          if ((bool)uVar25) {
            iStack_14a = 2;
            goto LAB_3ab8_24fd;
          }
        }
        uVar25 = 0;
        if (iStack_146 == 0 && ppuStack_148 == (undefined1 **)0x0) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          FUN_28b3_1181();
          if ((bool)uVar25) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029ae7();
            uVar21 = 0xd1ec;
            FUN_28b3_1181();
            if ((bool)uVar25) {
              iStack_14a = 3;
              goto LAB_3ab8_24fd;
            }
          }
          uVar25 = 0;
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029ae7();
          uVar21 = 0xd21a;
          FUN_28b3_1181();
          if ((bool)uVar25) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029ae7();
            uVar21 = 0xd242;
            FUN_28b3_1181();
            if ((bool)uVar25) {
              iStack_14a = 4;
              goto LAB_3ab8_24fd;
            }
          }
        }
        ppuVar23 = (undefined1 **)0x22b2;
        bVar24 = (undefined1 **)0xfffe < ppuStack_138;
        ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1);
        iStack_136 = iStack_136 + (uint)bVar24;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      uVar21 = 0xd072;
      FUN_28b3_1181();
      if (!(bool)uVar25) goto LAB_3ab8_240d;
      iStack_14a = 1;
LAB_3ab8_24fd:
      ppuVar23 = (undefined1 **)0x22b2;
      local_120 = ppuStack_138;
      local_11e = iStack_136;
LAB_3ab8_250d:
      ppuVar11 = ppuStack_14;
      puVar10 = puStack_16;
      uVar9 = uStack_18;
      uVar8 = uStack_42;
      ppuVar22 = ppuStack_44;
      uVar7 = uStack_46;
      uVar6 = uStack_48;
      if (0 < iStack_14a) {
        if (2 < iStack_14a) {
          uStack_18 = uStack_10;
          puStack_16 = puStack_e;
          uStack_10 = uVar9;
          puStack_e = puVar10;
          ppuStack_c78 = ppuStack_14;
          uStack_c76 = ppuStack_12;
          ppuStack_14 = ppuStack_c;
          ppuStack_12 = (undefined1 **)uVar21;
          ppuStack_c = ppuVar11;
        }
        if ((iStack_14a == 2) || (iStack_14a == 4)) {
          uStack_48 = uStack_40;
          uStack_46 = uStack_3e;
          uStack_40 = uVar6;
          uStack_3e = uVar7;
          ppuStack_c78 = ppuStack_44;
          uStack_c76 = uStack_42;
          ppuStack_44 = ppuStack_3c;
          uStack_42 = uStack_3a;
          ppuStack_3c = ppuVar22;
          uStack_3a = uVar8;
        }
        if ((local_120 == ppuStack_4c) && (local_11e == iStack_4a)) {
          puVar18 = auStack_6f4 + (int)ppuStack_4c * 0xb;
          puVar14 = &uStack_48;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar2 = puVar18;
            puVar18 = puVar18 + 1;
            puVar28 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar2 = *puVar28;
          }
        }
        else {
          puVar18 = auStack_6f4 + (int)ppuStack_4c * 0xb;
          puVar14 = (undefined2 *)&stack0xffd2;
          puVar17 = puVar18;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar2 = puVar14;
            puVar14 = puVar14 + 1;
            puVar28 = puVar17;
            puVar17 = puVar17 + 1;
            *puVar2 = *puVar28;
          }
          puVar14 = &uStack_48;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar2 = puVar18;
            puVar18 = puVar18 + 1;
            puVar28 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar2 = *puVar28;
          }
          puVar18 = auStack_6f4 + (int)local_120 * 0xb;
          puVar14 = (undefined2 *)&stack0xffd2;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar2 = puVar18;
            puVar18 = puVar18 + 1;
            puVar28 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar2 = *puVar28;
          }
        }
        puVar18 = auStack_6f4 + (int)ppuStack_134 * 0xb;
        puVar14 = &uStack_18;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar2 = puVar18;
          puVar18 = puVar18 + 1;
          puVar28 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = *puVar28;
        }
        if (iStack_146 == 0 && ppuStack_148 == (undefined1 **)0x0) {
          ppuStack_148 = ppuStack_134;
          iStack_146 = iStack_132;
        }
        goto LAB_3ab8_27ad;
      }
      if (iStack_146 == 0 && ppuStack_148 == (undefined1 **)0x0) goto LAB_3ab8_279f;
      iVar13 = (int)((long)(int)ppuStack_148 * 0x16);
      uVar25 = (long)iVar13 != (long)(int)ppuStack_148 * 0x16;
      puVar14 = &uStack_48;
      puVar18 = (undefined2 *)((int)auStack_6f4 + iVar13);
      for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
        puVar2 = puVar14;
        puVar14 = puVar14 + 1;
        puVar28 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar2 = *puVar28;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      FUN_28b3_1181();
      if (!(bool)uVar25) {
LAB_3ab8_27ba:
        ppuVar23 = (undefined1 **)0x22b2;
        if (iStack_116 == 0) goto code_r0x0003d341;
        goto LAB_3ab8_279f;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_100d();
      func_0x00029ae7();
      ppuVar23 = (undefined1 **)0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar25) goto LAB_3ab8_27ba;
      pbVar1 = (byte *)((int)&uStack_6e0 + iVar13 + 1);
      *pbVar1 = *pbVar1 | 1;
      pbVar1 = (byte *)((int)&uStack_6e0 + (int)ppuStack_134 * 0x16 + 1);
      *pbVar1 = *pbVar1 | 1;
LAB_3ab8_279f:
      iStack_146 = 0;
      ppuStack_148 = (undefined1 **)0x0;
      iStack_116 = 0;
LAB_3ab8_27ad:
      iStack_132 = iStack_132 + (uint)((undefined1 **)0xfffe < ppuStack_134);
    }
    if (*(char *)0x2836 == '\0') {
      ppuStack_c = ppuStack_16a;
      pcVar4 = (code *)swi(0x3f);
      (*pcVar4)();
    }
    iStack_146 = 0;
    ppuStack_148 = (undefined1 **)0x0;
    iStack_136 = 0;
    for (ppuStack_138 = (undefined1 **)0x1;
        (iStack_136 <= iStack_168 && ((iStack_136 < iStack_168 || (ppuStack_138 <= ppuStack_16a))));
        ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1)) {
      puVar18 = &uStack_f8;
      puVar14 = auStack_6f4 + (int)ppuStack_138 * 0xb;
      for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
        puVar2 = puVar18;
        puVar18 = puVar18 + 1;
        puVar28 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar2 = *puVar28;
      }
      if (((bStack_e4 & 2) == 0) && (iStack_146 == 0 && ppuStack_148 == (undefined1 **)0x0)) {
        iStack_146 = 0;
        ppuStack_148 = (undefined1 **)0x0;
      }
      else {
        if (iStack_146 == 0 && ppuStack_148 == (undefined1 **)0x0) {
          ppuStack_148 = ppuStack_138;
          iStack_146 = iStack_136;
        }
        else {
          ppuStack_134 = (undefined1 **)((int)ppuStack_138 + -1);
          iStack_132 = iStack_136 - (uint)(ppuStack_138 == (undefined1 **)0x0);
          while ((bStack_bd & 2) != 0) {
LAB_3ab8_3078:
            if ((((bStack_e4 & 2) != 0) || ((bStack_e3 & 1) == 0)) ||
               (iStack_146 == 0 && ppuStack_148 == (undefined1 **)0x0)) goto LAB_3ab8_2d58;
            puVar18 = &uStack_d2;
            puVar14 = auStack_6f4 + (int)ppuStack_148 * 0xb;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar2 = puVar18;
              puVar18 = puVar18 + 1;
              puVar28 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar28;
            }
            ppuStack_134 = ppuStack_148;
            iStack_132 = iStack_146;
            iStack_146 = 0;
            ppuStack_148 = (undefined1 **)0x0;
            if ((bStack_e3 & 2) != 0) {
              bStack_bd = bStack_bd | 2;
            }
          }
          ppuVar19 = &puStack_20;
          puVar14 = &uStack_f8;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar2 = ppuVar19;
            ppuVar19 = ppuVar19 + 1;
            puVar28 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar2 = *puVar28;
          }
          puVar18 = auStack_36;
          puVar14 = &uStack_d2;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            puVar2 = puVar18;
            puVar18 = puVar18 + 1;
            puVar28 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar2 = *puVar28;
          }
          uStack_3a = 0xd491;
          ppuStack_38 = ppuVar23;
          iVar13 = FUN_1def_1921();
          ppuVar23 = (undefined1 **)0x1bb4;
          if (iVar13 != 0) {
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029d78();
            func_0x00029c2c();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_117c();
            func_0x0002996b();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029d78();
            func_0x00029c2c();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_117c();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029d78();
            func_0x00029c2c();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_117c();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd570;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd579;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd582;
            FUN_28b3_100d();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd587;
            func_0x00029d78();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd590;
            func_0x00029c2c();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd599;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd59e;
            func_0x00029d78();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd5a3;
            FUN_28b3_117c();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd5ac;
            func_0x0002996b();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd5b1;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xd5bb;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xd5c4;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xd5c9;
            func_0x00029d78();
            puStack_20 = (undefined2 *)0x22b2;
            uStack_22 = 0xd5d3;
            func_0x000299d1();
            puStack_20 = (undefined2 *)0x22b2;
            uStack_22 = 0xd5dc;
            func_0x000297e6();
            puStack_20 = (undefined2 *)0x22b2;
            uStack_22 = 0xd5e1;
            func_0x00029d78();
            uStack_2a = 0xd5eb;
            func_0x000299d1();
            uStack_2a = 0x22b2;
            uStack_2c = 0xd5f4;
            FUN_3ab8_0000();
            func_0x000297e6();
            func_0x00029d78();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd60f;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd618;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd61d;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xd627;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xd630;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xd635;
            func_0x00029d78();
            puStack_20 = (undefined2 *)0x22b2;
            uStack_22 = 0xd63f;
            func_0x000299d1();
            puStack_20 = (undefined2 *)0x22b2;
            uStack_22 = 0xd648;
            func_0x000297e6();
            puStack_20 = (undefined2 *)0x22b2;
            uStack_22 = 0xd64d;
            func_0x00029d78();
            uStack_2a = 0xd657;
            func_0x000299d1();
            uStack_2a = 0x22b2;
            uStack_2c = 0xd660;
            FUN_3ab8_0000();
            ppuStack_c = &puStack_114;
            puStack_e = auStack_128;
            uStack_10 = uStack_106;
            ppuStack_12 = (undefined1 **)uStack_108;
            ppuStack_14 = ppuStack_10a;
            puStack_16 = local_10c;
            puVar18 = &uStack_2c;
            puVar14 = &uStack_f8;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar2 = puVar18;
              puVar18 = puVar18 + 1;
              puVar28 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar28;
            }
            puVar18 = &uStack_42;
            puVar14 = &uStack_d2;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar2 = puVar18;
              puVar18 = puVar18 + 1;
              puVar28 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar2 = *puVar28;
            }
            ppuStack_44 = (undefined1 **)0x22b2;
            uStack_46 = 0xd6a8;
            FUN_3ab8_1590();
            if (*(int *)0x103a == 0) {
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b9d();
              func_0x0002996b();
              FUN_28b3_0ee9();
              if (*(int *)0x103c == 0) {
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c2c();
                func_0x00029c44();
                func_0x00029983();
              }
            }
            if (*(int *)0x103a == 1) {
              func_0x000297e6();
              func_0x00029ae7();
              func_0x000297e6();
              func_0x00029b6d();
              FUN_28b3_1172();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c44();
              func_0x0002996b();
              func_0x00029983();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c2c();
              func_0x00029983();
              ppuStack_c = ppuStack_112;
              puStack_e = puStack_114;
              uStack_10 = 0x22b2;
              ppuStack_12 = (undefined1 **)0xd7ac;
              func_0x0002a11e();
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c9d();
              func_0x00029bb5();
              func_0x00029983();
              ppuStack_c = ppuStack_112;
              puStack_e = puStack_114;
              uStack_10 = 0x22b2;
              ppuStack_12 = (undefined1 **)0xd7f0;
              func_0x0002a10c();
              uVar25 = (undefined1 *)0xfff7 < &puStack_e;
              func_0x00029834();
              func_0x00029b6d();
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar25) {
                uStack_fc = uStack_8c;
                uStack_fa = uStack_8a;
                uStack_94 = uStack_11c;
                uStack_92 = uStack_11a;
                uStack_90 = uStack_130;
                uStack_8e = uStack_12e;
              }
            }
            func_0x000297e6();
            func_0x00029d78();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd876;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd87f;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            ppuStack_12 = (undefined1 **)0xd884;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xd88e;
            func_0x000299d1();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xd897;
            func_0x000297e6();
            uStack_18 = 0x22b2;
            puStack_1a = (undefined1 *)0xd89c;
            func_0x00029d78();
            puStack_20 = (undefined2 *)0x22b2;
            uStack_22 = 0xd8a6;
            func_0x000299d1();
            puStack_20 = &uStack_d2;
            uStack_22 = 0x22b2;
            uStack_24 = 0xd8af;
            iVar13 = FUN_3ab8_0138();
            if (iVar13 == 0) {
              func_0x000297e6();
              func_0x00029d78();
              uStack_10 = 0x22b2;
              ppuStack_12 = (undefined1 **)0xd911;
              func_0x000299d1();
              uStack_10 = 0x22b2;
              ppuStack_12 = (undefined1 **)0xd91a;
              func_0x000297e6();
              uStack_10 = 0x22b2;
              ppuStack_12 = (undefined1 **)0xd91f;
              func_0x00029d78();
              uStack_18 = 0x22b2;
              puStack_1a = (undefined1 *)0xd929;
              func_0x000299d1();
              uStack_18 = 0x22b2;
              puStack_1a = (undefined1 *)0xd932;
              func_0x000297e6();
              uStack_18 = 0x22b2;
              puStack_1a = (undefined1 *)0xd937;
              func_0x00029d78();
              puStack_20 = (undefined2 *)0x22b2;
              uStack_22 = 0xd941;
              func_0x000299d1();
              puStack_20 = &uStack_f8;
              uStack_22 = 0x22b2;
              uStack_24 = 0xd94a;
              iVar13 = FUN_3ab8_0138();
              if (iVar13 == 0) {
                puVar14 = auStack_6f4 + (int)ppuStack_134 * 0xb;
                puVar18 = &uStack_d2;
                for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar2 = puVar14;
                  puVar14 = puVar14 + 1;
                  puVar28 = puVar18;
                  puVar18 = puVar18 + 1;
                  *puVar2 = *puVar28;
                }
                func_0x000297e6();
                func_0x0002996b();
                FUN_28b3_0ee9();
                func_0x000297e6();
                func_0x0002996b();
                FUN_28b3_0ee9();
                puVar14 = auStack_6f4 + (int)ppuStack_138 * 0xb;
                puVar18 = &uStack_f8;
                for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar2 = puVar14;
                  puVar14 = puVar14 + 1;
                  puVar28 = puVar18;
                  puVar18 = puVar18 + 1;
                  *puVar2 = *puVar28;
                }
                func_0x000297e6();
                func_0x0002996b();
                FUN_28b3_0ee9();
                func_0x000297e6();
                func_0x0002996b();
                ppuVar23 = (undefined1 **)0x22b2;
                FUN_28b3_0ee9();
                if (*(int *)0x103a == 0) {
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029983();
                  uStack_1c = CONCAT11(uStack_1c._1_1_,(undefined1)uStack_e0);
                  puVar20 = &uStack_1c;
                  puVar14 = (undefined2 *)&stack0xffd2;
                  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
                    puVar2 = puVar20;
                    puVar20 = puVar20 + 1;
                    puVar28 = puVar14;
                    puVar14 = puVar14 + 1;
                    *puVar2 = *puVar28;
                  }
                  ppuVar31 = (undefined1 **)0x22b2;
                  ppuVar23 = (undefined1 **)0x11f2;
                  puStack_20 = (undefined2 *)0xda60;
                  iVar13 = FUN_17a6_0cba();
                  if (iVar13 != 0) {
                    bVar24 = 0xfffe < local_32;
                    local_32 = local_32 + 1;
                    local_30 = local_30 + (uint)bVar24;
                  }
                }
                if (*(int *)0x103a == 1) {
                  func_0x000297e6();
                  func_0x00029d78();
                  uStack_10 = 0x22b2;
                  ppuStack_12 = (undefined1 **)0xda91;
                  func_0x000299d1();
                  uStack_10 = 0x22b2;
                  ppuStack_12 = (undefined1 **)0xda9a;
                  func_0x000297e6();
                  uStack_10 = 0x22b2;
                  ppuStack_12 = (undefined1 **)0xda9f;
                  func_0x00029d78();
                  uStack_18 = 0x22b2;
                  puStack_1a = (undefined1 *)0xdaa9;
                  func_0x000299d1();
                  uStack_18 = 0x22b2;
                  puStack_1a = (undefined1 *)0xdab2;
                  func_0x000297e6();
                  puStack_20 = (undefined2 *)0x22b2;
                  uStack_22 = 0xdabc;
                  func_0x000299d1();
                  puStack_20 = (undefined2 *)0x22b2;
                  uStack_22 = 0xdac5;
                  func_0x000297e6();
                  uStack_2a = 0xdacf;
                  func_0x000299d1();
                  uStack_2a = 0xdad4;
                  uVar29 = FUN_1000_0718();
                  uStack_86 = uVar29;
                  func_0x000297e6();
                  func_0x00029d78();
                  uStack_10 = 0x22b2;
                  ppuStack_12 = (undefined1 **)0xdaf7;
                  func_0x000299d1();
                  uStack_10 = 0x22b2;
                  ppuStack_12 = (undefined1 **)0xdb00;
                  func_0x000297e6();
                  uStack_10 = 0x22b2;
                  ppuStack_12 = (undefined1 **)0xdb05;
                  func_0x00029d78();
                  uStack_18 = 0x22b2;
                  puStack_1a = (undefined1 *)0xdb0f;
                  func_0x000299d1();
                  uStack_18 = 0x22b2;
                  puStack_1a = (undefined1 *)0xdb18;
                  func_0x000297e6();
                  puStack_20 = (undefined2 *)0x22b2;
                  uStack_22 = 0xdb22;
                  func_0x000299d1();
                  puStack_20 = (undefined2 *)0x22b2;
                  uStack_22 = 0xdb2b;
                  func_0x000297e6();
                  uStack_2a = 0xdb35;
                  func_0x000299d1();
                  uStack_2a = 0xdb3a;
                  puVar14 = &uStack_26;
                  uVar30 = FUN_1000_0718();
                  uVar29 = uStack_86;
                  uStack_82 = uVar30;
                  if (uVar30 < uStack_86) {
                    uStack_9c = uStack_86;
                    uStack_86 = uVar30;
                    uStack_82 = uVar29;
                    uVar29 = uVar30;
                    uVar30 = uVar29;
                    uStack_9c = uVar29;
                  }
                  uStack_82._2_2_ = (int)(uVar30 >> 0x10);
                  uStack_82._0_2_ = (uint)uVar30;
                  uStack_86._2_2_ = (int)(uVar29 >> 0x10);
                  uStack_86._0_2_ = (uint)uVar29;
                  uVar16 = (uStack_82._2_2_ - uStack_86._2_2_) -
                           (uint)((uint)uStack_82 < (uint)uStack_86);
                  uVar5 = uVar29;
                  if ((0xb3 < uVar16) && ((0xb4 < uVar16 || ((uint)uStack_82 != (uint)uStack_86))))
                  {
                    uStack_9c = uVar29;
                    uStack_86 = uVar30;
                    uStack_82 = uVar29;
                    uVar5 = uVar30;
                    uVar30 = uVar29;
                  }
                  uStack_88 = 10000;
                  uStack_7c = 0;
                  uStack_7e = 0;
                  uStack_79 = (undefined1)uStack_162;
                  uStack_7a = (undefined1)uStack_154;
                  uStack_78 = (undefined1)uStack_e0;
                  puVar18 = &uStack_94;
                  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
                    puVar2 = puVar14;
                    puVar14 = puVar14 + 1;
                    puVar28 = puVar18;
                    puVar18 = puVar18 + 1;
                    *puVar2 = *puVar28;
                  }
                  ppuVar23 = (undefined1 **)0x11f2;
                  uStack_2a = 0xdbeb;
                  uStack_86 = uVar5;
                  uStack_82 = uVar30;
                  FUN_13bf_01c1();
                  bVar24 = 0xfffe < local_98;
                  local_98 = local_98 + 1;
                  local_96 = local_96 + (uint)bVar24;
                }
                goto LAB_3ab8_3078;
              }
            }
            *(undefined2 *)0xc22 = 1;
            ppuStack_c = (undefined1 **)0x2;
            puStack_e = (undefined1 *)0x14;
            uStack_10 = 0x396;
            ppuStack_12 = (undefined1 **)0x22b2;
            ppuStack_14 = (undefined1 **)0xd8d5;
            FUN_1000_02b5();
            ppuVar23 = (undefined1 **)0xdef;
          }
LAB_3ab8_2d58:
          if (((bStack_e4 & 2) == 0) && (iStack_146 != 0 || ppuStack_148 != (undefined1 **)0x0)) {
            iStack_146 = 0;
            ppuStack_148 = (undefined1 **)0x0;
          }
        }
        puVar14 = &uStack_d2;
        puVar18 = &uStack_f8;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          puVar28 = puVar18;
          puVar18 = puVar18 + 1;
          *puVar2 = *puVar28;
        }
      }
      iStack_136 = iStack_136 + (uint)((undefined1 **)0xfffe < ppuStack_138);
    }
    iStack_136 = 0;
    for (ppuStack_138 = (undefined1 **)0x1;
        (ppuVar22 = ppuVar23, iStack_136 <= iStack_168 &&
        ((iStack_136 < iStack_168 || (ppuStack_138 <= ppuStack_16a))));
        ppuStack_138 = (undefined1 **)((int)ppuStack_138 + 1)) {
      puVar14 = (undefined2 *)&stack0xffd2;
      puVar18 = auStack_6f4 + (int)ppuStack_138 * 0xb;
      for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
        puVar2 = puVar14;
        puVar14 = puVar14 + 1;
        puVar28 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar2 = *puVar28;
      }
      puVar20 = &uStack_1c;
      puVar14 = (undefined2 *)&stack0xffd2;
      for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
        puVar2 = puVar20;
        puVar20 = puVar20 + 1;
        puVar28 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar2 = *puVar28;
      }
      puStack_20 = (undefined2 *)0xdcae;
      iVar13 = FUN_17a6_0cba();
      if (iVar13 != 0) {
        bVar24 = 0xfffe < local_32;
        local_32 = local_32 + 1;
        local_30 = local_30 + (uint)bVar24;
      }
      iStack_136 = iStack_136 + (uint)((undefined1 **)0xfffe < ppuStack_138);
      ppuVar23 = (undefined1 **)0x11f2;
      ppuVar31 = ppuVar22;
    }
    ppuVar23 = (undefined1 **)0x885;
    func_0x0000abfa();
  } while( true );
code_r0x0003d341:
  iStack_116 = 1;
  puVar18 = auStack_6f4 + (int)ppuStack_148 * 0xb;
  puVar14 = &uStack_18;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar18;
    puVar18 = puVar18 + 1;
    puVar28 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar2 = *puVar28;
  }
  puVar18 = auStack_6f4 + (int)ppuStack_134 * 0xb;
  puVar14 = &uStack_48;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    puVar2 = puVar18;
    puVar18 = puVar18 + 1;
    puVar28 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar2 = *puVar28;
  }
  ppuStack_134 = ppuStack_148;
  iStack_132 = iStack_146;
  iStack_146 = 0;
  ppuStack_148 = (undefined1 **)0x0;
  goto LAB_3ab8_2385;
}



/* 3ab8:3167  FUN_3ab8_3167  5386 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003e51d) */
/* WARNING: Removing unreachable block (ram,0x0003e66f) */
/* WARNING: Removing unreachable block (ram,0x0003ee90) */
/* WARNING: Removing unreachable block (ram,0x0003f048) */

void __cdecl16far FUN_3ab8_3167(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined2 **ppuVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined2 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined2 *local_236;
  undefined2 local_22a;
  undefined2 local_228;
  undefined2 local_226;
  undefined2 local_224;
  undefined4 local_220;
  undefined2 local_21c;
  undefined2 local_21a;
  uint local_210;
  undefined2 local_1ec;
  undefined2 local_1ea;
  int local_1e8;
  undefined2 local_1dc;
  undefined2 local_1da;
  undefined2 local_1d8;
  undefined2 local_1d6;
  undefined2 local_1d4 [60];
  undefined2 local_15c;
  undefined2 local_15a;
  undefined2 local_150;
  undefined2 local_14e;
  int local_14c;
  int local_14a;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 *local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined2 local_12e;
  undefined2 local_128;
  undefined2 local_126;
  undefined2 *local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 uStack_116;
  undefined2 uStack_114;
  undefined2 uStack_112;
  undefined2 *local_110;
  undefined2 **local_10e;
  undefined2 *local_10c;
  undefined2 local_10a;
  undefined2 *local_100;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_dc [11];
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_84 [11];
  undefined4 local_6e;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined2 *local_56;
  undefined2 **ppuStack_54;
  undefined2 auStack_52 [6];
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 *puStack_20;
  undefined2 local_1c;
  undefined2 *local_1a;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_12;
  undefined2 *local_e;
  undefined2 **local_c;
  
  FUN_21f2_0ebc();
  local_120 = (undefined2 *)*(undefined2 *)0x9634;
  local_11e = *(undefined2 *)0x9636;
  local_11c = *(undefined2 *)0x9638;
  local_11a = *(undefined2 *)0x963a;
  local_118 = *(undefined2 *)0x967c;
  uStack_116 = *(undefined2 *)0x967e;
  uStack_114 = *(undefined2 *)0x9680;
  uStack_112 = *(undefined2 *)0x9682;
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xdd1a;
  FUN_21f2_3454();
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xdd29;
  FUN_21f2_3454();
  local_c = (undefined2 **)0x22b2;
  local_e = (undefined2 *)0xdd38;
  FUN_21f2_3454();
  local_c = (undefined2 **)0x22b2;
  puVar12 = (undefined2 *)0x22b2;
  local_e = (undefined2 *)0xdd48;
  FUN_21f2_3454();
LAB_3ab8_31ca:
  local_100 = (undefined2 *)0x0;
  local_14c = 0;
  local_1e8 = 0;
  puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
  local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
LAB_3ab8_31d8:
  do {
    local_e = (undefined2 *)0xdd66;
    local_c = (undefined2 **)puVar12;
    local_16 = puVar16;
    FUN_21f2_3454();
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xdd76;
    FUN_21f2_2d26();
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xdd86;
    FUN_21f2_2d26();
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xdd96;
    FUN_21f2_2d26();
    if (*(int *)0x103a == 0) {
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xddad;
      FUN_21f2_2d26();
    }
    if (*(int *)0x103a == 1) {
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xddc4;
      FUN_21f2_2d26();
    }
    if (*(int *)0x103a == 2) {
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xdddb;
      FUN_21f2_2d26();
    }
    if (*(int *)0x103a == 3) {
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xddf2;
      FUN_21f2_2d26();
    }
    local_c = (undefined2 **)0x22b2;
    local_e = (undefined2 *)0xde02;
    FUN_21f2_2d26();
    if (*(int *)0x103a == 0) {
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xde19;
      FUN_21f2_2d26();
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xde35;
      FUN_21f2_2d26();
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xde45;
      FUN_21f2_2d26();
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xde55;
      FUN_21f2_2d26();
    }
    if (*(int *)0x103a == 0) {
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xde6c;
      FUN_21f2_2d26();
      local_1a = (undefined2 *)*(undefined2 *)0x103e;
      local_18 = *(undefined2 *)0x1040;
    }
    if (*(int *)0x103a == 1) {
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xde91;
      FUN_21f2_2d26();
      local_1a = (undefined2 *)*(undefined2 *)0x1042;
      local_18 = *(undefined2 *)0x1044;
    }
    if (*(int *)0x103a == 2) {
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xdeb6;
      FUN_21f2_2d26();
      local_1a = (undefined2 *)*(undefined2 *)0x1046;
      local_18 = *(undefined2 *)0x1048;
    }
    if (*(int *)0x103a == 3) {
      local_c = (undefined2 **)0x22b2;
      local_e = (undefined2 *)0xdedb;
      FUN_21f2_2d26();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x00029983();
    }
    local_c = (undefined2 **)local_18;
    local_e = local_1a;
    local_12._2_2_ = (undefined2 *)0x2883;
    local_12._0_2_ = (undefined2 *)0xbf48;
    local_16._2_2_ = (undefined2 **)0x22b2;
    local_16._0_2_ = (undefined2 *)0xdf0e;
    FUN_10ad_1928();
    local_c = (undefined2 **)local_1d4;
    local_e = (undefined2 *)0x11f2;
    local_12._2_2_ = (undefined2 *)0xdf1f;
    FUN_21f2_2d26();
    if (*(int *)0x103a == 2) {
      local_c = (undefined2 **)*(undefined2 *)0x9660;
      local_e = (undefined2 *)*(undefined2 *)0x104c;
      local_12._2_2_ = (undefined2 *)*(undefined2 *)0x104a;
      local_12._0_2_ = (undefined2 *)0x288a;
      local_16._2_2_ = (undefined2 **)0xbf48;
      local_16._0_2_ = (undefined2 *)0x22b2;
      local_18 = 0xdf45;
      FUN_10ad_1928();
      local_c = (undefined2 **)0xbf48;
      local_e = local_1d4;
      local_12._2_2_ = (undefined2 *)0x11f2;
      local_12._0_2_ = (undefined2 *)0xdf56;
      FUN_21f2_2d26();
    }
    local_c = (undefined2 **)local_1d4;
    local_e = (undefined2 *)0x22b2;
    local_12._2_2_ = (undefined2 *)0xdf66;
    FUN_21f2_2d26();
    if ((*(int *)0x103a == 0) || (*(int *)0x103a == 1)) {
      local_c = (undefined2 **)local_1d4;
      local_e = (undefined2 *)0x22b2;
      local_12._2_2_ = (undefined2 *)0xdf84;
      FUN_21f2_2d26();
      local_c = (undefined2 **)local_1d4;
      local_e = (undefined2 *)0x22b2;
      local_12._2_2_ = (undefined2 *)0xdf94;
      FUN_21f2_2d26();
    }
    uVar14 = *(uint *)0x103a < 3;
    uVar15 = *(uint *)0x103a == 3;
    if ((bool)uVar15) {
      local_c = (undefined2 **)0xdfa9;
      func_0x00029834();
      local_c = (undefined2 **)0xdfb2;
      func_0x000297e6();
      local_c = (undefined2 **)0xdfb7;
      func_0x00029d78();
      local_c = (undefined2 **)0xdfbc;
      FUN_28b3_1181();
      if (!(bool)uVar14 && !(bool)uVar15) {
        uVar5 = *(undefined2 *)0x965e;
        *(undefined2 *)0x28ba = *(undefined2 *)0x965c;
        *(undefined2 *)0x28bc = uVar5;
      }
      local_c = (undefined2 **)local_1d4;
      local_e = (undefined2 *)0x22b2;
      local_12._2_2_ = (undefined2 *)0xdfda;
      FUN_21f2_2d26();
      local_c = (undefined2 **)0xdfe5;
      func_0x00029834();
      local_c = (undefined2 **)0xdfee;
      func_0x000297e6();
      local_c = (undefined2 **)0xdff3;
      func_0x00029d78();
      local_c = (undefined2 **)0xdff8;
      FUN_28b3_1181();
      if ((bool)uVar14) {
        local_c = (undefined2 **)0xbf48;
        local_e = (undefined2 *)0x22b2;
        local_12._2_2_ = (undefined2 *)0xe007;
        FUN_21f2_3454();
      }
      else {
        local_c = (undefined2 **)0xe014;
        func_0x000297e6();
        local_c = (undefined2 **)0xe019;
        func_0x00029d78();
        local_12._0_2_ = (undefined2 *)0x22b2;
        local_16._2_2_ = (undefined2 **)0xe023;
        func_0x000299d1();
        local_12._0_2_ = (undefined2 *)0x2897;
        local_16._2_2_ = (undefined2 **)0xbf48;
        local_16._0_2_ = (undefined2 *)0x22b2;
        local_18 = 0xe030;
        FUN_21f2_3454();
      }
      local_c = (undefined2 **)local_1d4;
      local_e = (undefined2 *)0x22b2;
      local_12._2_2_ = (undefined2 *)0xe041;
      FUN_21f2_2d26();
      local_c = (undefined2 **)local_1d4;
      local_e = (undefined2 *)0x22b2;
      local_12._2_2_ = (undefined2 *)0xe051;
      FUN_21f2_2d26();
    }
    local_c = (undefined2 **)0x4;
    local_e = (undefined2 *)0x22b2;
    local_12._2_2_ = (undefined2 *)0xe061;
    FUN_1def_07a4();
    *(undefined2 *)0xc1a = 1;
    local_c = (undefined2 **)&local_22a;
    local_e = &local_21c;
    local_12._2_2_ = local_1d4;
    local_12._0_2_ = local_100;
    local_16._2_2_ = (undefined2 **)0x1bb4;
    puVar12 = (undefined2 *)0x1bb4;
    local_16._0_2_ = (undefined2 *)0xe086;
    local_210 = FUN_1def_0904();
    *(undefined2 *)0xc1a = 0;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (*(int *)0xc18 != 0) {
      local_100 = (undefined2 *)0x0;
      func_0x000297e6();
      func_0x00029d78();
      local_12._2_2_ = (undefined2 *)0x22b2;
      local_12._0_2_ = (undefined2 *)0xe0c2;
      func_0x000299d1();
      local_12._2_2_ = (undefined2 *)0x22b2;
      local_12._0_2_ = (undefined2 *)0xe0cb;
      func_0x000297e6();
      local_12._2_2_ = (undefined2 *)0x22b2;
      local_12._0_2_ = (undefined2 *)0xe0d0;
      func_0x00029d78();
      local_18 = 0x22b2;
      local_1a = (undefined2 *)0xe0da;
      func_0x000299d1();
      local_18 = 0x22b2;
      puVar12 = (undefined2 *)0x3bf;
      local_1a = (undefined2 *)0xe0df;
      func_0x0000507a();
      goto LAB_3ab8_31ca;
    }
    if (((*(int *)0x103a == 0) && (local_210 == 4)) || ((*(int *)0x103a == 1 && (local_210 == 3))))
    break;
    if ((local_210 == 0xffff) && (0 < (int)local_100)) {
      local_c = (undefined2 **)0xe125;
      func_0x0000daa6();
      uVar5 = 0x885;
      for (; 0 < local_14c; local_14c = local_14c + -1) {
        local_220._0_2_ = (undefined2 *)*(undefined2 *)0x148;
        local_220._2_2_ = *(undefined2 *)0x14a;
        local_e = (undefined2 *)0xe13e;
        local_c = (undefined2 **)uVar5;
        func_0x00018779();
        uVar5 = 0x11f2;
      }
      for (; 0 < local_1e8; local_1e8 = local_1e8 + -1) {
        local_220._0_2_ = (undefined2 *)*(undefined2 *)0x14c;
        local_220._2_2_ = *(undefined2 *)0x14e;
        local_e = (undefined2 *)0xe163;
        local_c = (undefined2 **)uVar5;
        FUN_13bf_0327();
        uVar5 = 0x11f2;
      }
      puVar13 = &local_1c;
      puVar11 = &local_1c;
      puVar12 = local_84;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar13;
        puVar13 = puVar13 + 1;
        puVar16 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar3 = *puVar16;
      }
      puStack_20 = (undefined2 *)0xe185;
      FUN_17a6_0cba();
      puVar12 = local_dc;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        puVar16 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar3 = *puVar16;
      }
      puStack_20 = (undefined2 *)0xe19d;
      FUN_17a6_0cba();
      local_100 = (undefined2 *)0x0;
      func_0x0000abfa();
      puVar12 = (undefined2 *)0x885;
      local_c = (undefined2 **)0xe1b4;
      func_0x0000b1d8();
    }
    puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
    if (local_210 == 1) {
      *(int *)0x103a = *(int *)0x103a + 1;
      if (3 < *(int *)0x103a) {
        *(undefined2 *)0x103a = 0;
        puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
        local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
      }
    }
    else {
      if ((local_210 != 2) || (*(int *)0x103a != 0)) {
        do {
          if ((((local_210 != 3) || (*(int *)0x103a != 0)) &&
              ((local_210 != 2 || (*(int *)0x103a < 1)))) &&
             ((local_210 != 3 || (*(int *)0x103a != 3)))) goto LAB_3ab8_394a;
          puVar13 = puVar12;
          if (*(int *)0x103a == 0) {
            puVar13 = (undefined2 *)0x22b2;
            local_e = (undefined2 *)0xe340;
            local_c = (undefined2 **)puVar12;
            FUN_21f2_3454();
            local_130 = *(undefined2 *)0x103e;
            local_12e = *(undefined2 *)0x1040;
          }
          puVar12 = puVar13;
          if (*(int *)0x103a == 1) {
            puVar12 = (undefined2 *)0x22b2;
            local_e = (undefined2 *)0xe367;
            local_c = (undefined2 **)puVar13;
            FUN_21f2_3454();
            local_130 = *(undefined2 *)0x1042;
            local_12e = *(undefined2 *)0x1044;
          }
          local_236 = (undefined2 *)0x1;
          local_140 = local_130;
          local_13e = local_12e;
          puVar13 = puVar12;
          if (*(int *)0x103a == 2) {
            puVar13 = (undefined2 *)0x22b2;
            local_e = (undefined2 *)0xe3a4;
            local_c = (undefined2 **)puVar12;
            FUN_21f2_3454();
            local_130 = *(undefined2 *)0x1046;
            local_12e = *(undefined2 *)0x1048;
            local_236 = (undefined2 *)0x2;
            local_140 = *(undefined2 *)0x104a;
            local_13e = *(undefined2 *)0x104c;
          }
          if (*(int *)0x103a == 3) {
            if (local_210 == 2) {
              local_236 = (undefined2 *)0x1;
              local_e = (undefined2 *)0xe3f0;
              local_c = (undefined2 **)puVar13;
              FUN_21f2_3454();
              func_0x000297e6();
              func_0x00029ae7();
              puVar13 = (undefined2 *)0x22b2;
              func_0x00029983();
            }
            if (local_210 == 3) {
              local_236 = (undefined2 *)0x2711;
              local_130 = *(undefined2 *)0x28ba;
              local_12e = *(undefined2 *)0x28bc;
              local_e = (undefined2 *)0xe433;
              local_c = (undefined2 **)puVar13;
              func_0x00024c86();
              local_c = (undefined2 **)0x22b2;
              puVar13 = (undefined2 *)0x22b2;
              local_e = (undefined2 *)0xe443;
              FUN_21f2_2d26();
            }
            local_140 = local_130;
            local_13e = local_12e;
          }
          local_c = (undefined2 **)local_1d4;
          local_e = (undefined2 *)0x1;
          local_12._2_2_ = local_236;
          puVar12 = (undefined2 *)0xad;
          local_16._2_2_ = (undefined2 **)0xe471;
          local_12._0_2_ = puVar13;
          iVar6 = func_0x00001dd5();
          puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
          local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
          if (iVar6 == -1) goto LAB_3ab8_31d8;
          uVar14 = 0;
          if (*(int *)0x158 != 0) {
            return;
          }
          func_0x00029834();
          func_0x000297e6();
          func_0x00029d78();
          FUN_28b3_1181();
          if ((((bool)uVar14) && (*(int *)0x103a == 3)) && (local_210 == 3)) {
            uVar5 = *(undefined2 *)0x9660;
            uVar7 = *(undefined2 *)0x9662;
            goto LAB_3ab8_393d;
          }
          uVar14 = *(int *)0x103a == 0;
          if (*(int *)0x103a == 1) {
LAB_3ab8_36b2:
            uVar14 = *(int *)0x103a == 0;
            uVar15 = *(int *)0x103a == 1;
            if ((bool)uVar15) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if (!(bool)uVar14 && !(bool)uVar15) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar14) {
                  func_0x00029834();
                  func_0x000297e6();
                  func_0x00029ae7();
                  func_0x00029d78();
                  FUN_28b3_1181();
                  if (!(bool)uVar14) goto LAB_3ab8_3711;
                }
              }
            }
            else {
LAB_3ab8_3711:
              uVar14 = *(uint *)0x103a < 2;
              if (*(uint *)0x103a != 2) goto LAB_3ab8_3b75;
              func_0x00029834();
              func_0x000297e6();
              func_0x00029d78();
              FUN_28b3_1181();
              if (!(bool)uVar14) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar14) goto LAB_3ab8_3b75;
              }
            }
          }
          else {
            func_0x00029834();
            func_0x000297e6();
            func_0x00029d78();
            FUN_28b3_1181();
            if (!(bool)uVar14) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar14) goto LAB_3ab8_36b2;
            }
          }
          local_c = (undefined2 **)0xe2de;
          func_0x00012276();
          *(undefined2 *)0xc22 = 1;
          local_c = (undefined2 **)0x11f2;
          local_e = (undefined2 *)0xe2f2;
          FUN_1000_0599();
          puVar12 = (undefined2 *)0x11f2;
          local_c = (undefined2 **)0xe2fd;
          func_0x00012276();
        } while( true );
      }
      *(int *)0x103c = 1 - *(int *)0x103c;
      puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
      local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
    }
  } while( true );
  FUN_3ab8_17c4();
  if (*(int *)0x158 != 0) {
    return;
  }
  goto LAB_3ab8_31ca;
LAB_3ab8_3b75:
  if (*(int *)0x103a == 0) {
    *(undefined2 *)0x103e = local_130;
    *(undefined2 *)0x1040 = local_12e;
  }
  if (*(int *)0x103a == 1) {
    *(undefined2 *)0x1042 = local_130;
    *(undefined2 *)0x1044 = local_12e;
  }
  if (*(int *)0x103a == 2) {
    *(undefined2 *)0x1046 = local_130;
    *(undefined2 *)0x1048 = local_12e;
    *(undefined2 *)0x104a = local_140;
    *(undefined2 *)0x104c = local_13e;
  }
  if (*(int *)0x103a == 3) {
    if (local_210 == 2) {
      *(undefined2 *)0x1042 = local_130;
      *(undefined2 *)0x1044 = local_12e;
    }
    uVar14 = local_210 < 3;
    uVar15 = local_210 == 3;
    if ((bool)uVar15) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar14) {
        local_130 = *(undefined2 *)0x96a8;
        local_12e = *(undefined2 *)0x96aa;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar14) {
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c2c();
        local_12._2_2_ = (undefined2 *)0x22b2;
        local_12._0_2_ = (undefined2 *)0xe7d2;
        func_0x000299d1();
        local_12._2_2_ = (undefined2 *)0x22b2;
        local_12._0_2_ = (undefined2 *)0xe7d7;
        func_0x0002a10c();
        uVar14 = (undefined1 *)0xfff7 < &local_e;
        uVar15 = &stack0x0000 == (undefined1 *)0x6;
        func_0x00029834();
        func_0x00029983();
      }
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x0002996b();
      FUN_28b3_1181();
      if (!(bool)uVar14 && !(bool)uVar15) {
        local_130 = *(undefined2 *)0x965c;
        local_12e = *(undefined2 *)0x965e;
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029d78();
      func_0x00029c74();
      FUN_28b3_0f51();
      FUN_28b3_0d8b();
      func_0x00029983();
      func_0x000297e6();
      local_c = (undefined2 **)0xe86e;
      func_0x00029b6d();
      func_0x00029983();
      uVar5 = local_130;
      uVar7 = local_12e;
LAB_3ab8_393d:
      *(undefined2 *)0x28ba = uVar5;
      *(undefined2 *)0x28bc = uVar7;
    }
  }
  puVar12 = (undefined2 *)0x22b2;
  local_14a = 0;
LAB_3ab8_394a:
  puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
  local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
  if (local_14a != 0) {
    func_0x000297e6();
    func_0x00029d78();
    local_12._2_2_ = (undefined2 *)0x22b2;
    local_12._0_2_ = (undefined2 *)0xe4ec;
    func_0x000299d1();
    local_12._2_2_ = (undefined2 *)0x22b2;
    local_12._0_2_ = (undefined2 *)0xe4f5;
    func_0x000297e6();
    local_12._2_2_ = (undefined2 *)0x22b2;
    local_12._0_2_ = (undefined2 *)0xe4fa;
    func_0x00029d78();
    local_18 = 0x22b2;
    local_1a = (undefined2 *)0xe504;
    func_0x000299d1();
    local_18 = 0x22b2;
    puVar12 = (undefined2 *)0x11f2;
    local_1a = (undefined2 *)0xe509;
    puVar16 = (undefined2 *)FUN_13bf_39a0();
    local_220 = puVar16;
    if (0 < (long)puVar16) {
      local_c = (undefined2 **)0x11f2;
      local_e = (undefined2 *)0xe528;
      func_0x0000013f();
      puVar12 = (undefined2 *)0x885;
      local_c = (undefined2 **)0xe53a;
      iVar6 = func_0x00008854();
      puVar3 = local_220;
      if (iVar6 == 0) {
        local_226 = local_21c;
        local_224 = local_21a;
        local_16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
        local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
LAB_3ab8_39f8:
        do {
          local_e = (undefined2 *)0xe586;
          local_c = (undefined2 **)puVar12;
          FUN_21f2_3454();
          local_c = (undefined2 **)0x22b2;
          local_e = (undefined2 *)0xe596;
          FUN_21f2_2d26();
          local_c = (undefined2 **)0x22b2;
          local_e = (undefined2 *)0xe5a6;
          FUN_21f2_2d26();
          local_c = (undefined2 **)0x1;
          local_e = (undefined2 *)0x22b2;
          local_12._2_2_ = (undefined2 *)0xe5b9;
          iVar6 = FUN_1885_31c4();
          puVar16 = local_16;
          if (iVar6 == 0) goto LAB_3ab8_3a7b;
          local_c = (undefined2 **)&local_21c;
          local_e = local_1d4;
          local_12._2_2_ = (undefined2 *)0x270f;
          local_12._0_2_ = (undefined2 *)0x1b6e;
          local_16._2_2_ = (undefined2 **)0xe5dd;
          local_210 = FUN_1def_0904();
          local_c = (undefined2 **)0x0;
          local_e = (undefined2 *)0x1bb4;
          puVar12 = (undefined2 *)0x1b6e;
          local_12._2_2_ = (undefined2 *)0xe5f4;
          iVar6 = FUN_1885_31c4();
          puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
          if (iVar6 == 0) goto LAB_3ab8_3a7b;
          if (*(int *)0x158 != 0) {
            return;
          }
          local_16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
          local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
        } while (local_210 == 99);
        local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
        if (local_210 == 0xffff) goto LAB_3ab8_31d8;
        local_16 = puVar16;
        if (local_14a == 0) goto LAB_3ab8_39f8;
        func_0x000297e6();
        func_0x00029d78();
        local_12._2_2_ = (undefined2 *)0x22b2;
        local_12._0_2_ = (undefined2 *)0xe63e;
        func_0x000299d1();
        local_12._2_2_ = (undefined2 *)0x22b2;
        local_12._0_2_ = (undefined2 *)0xe647;
        func_0x000297e6();
        local_12._2_2_ = (undefined2 *)0x22b2;
        local_12._0_2_ = (undefined2 *)0xe64c;
        func_0x00029d78();
        local_18 = 0x22b2;
        local_1a = (undefined2 *)0xe656;
        func_0x000299d1();
        local_18 = 0x22b2;
        puVar12 = (undefined2 *)0x11f2;
        local_1a = (undefined2 *)0xe65b;
        puVar16 = (undefined2 *)FUN_13bf_39a0();
        local_220 = puVar16;
        if ((long)puVar16 < 1) {
LAB_3ab8_3d35:
          if (-1 < (long)local_220) goto LAB_3ab8_39f8;
          *(undefined2 *)0xc22 = 1;
          local_e = (undefined2 *)0xe8d2;
          local_c = (undefined2 **)puVar12;
          FUN_1000_0599();
        }
        else {
          local_c = (undefined2 **)0x11f2;
          local_e = (undefined2 *)0xe67a;
          func_0x0000013f();
          puVar12 = (undefined2 *)0x885;
          local_c = (undefined2 **)0xe68c;
          iVar6 = func_0x00008854();
          if (iVar6 != 0) goto LAB_3ab8_3d35;
          local_1c = local_228;
          local_16 = local_220;
          local_12 = local_220;
          if (puVar3 != local_220) {
            local_100 = (undefined2 *)0x0;
            local_14c = 0;
            local_1e8 = 0;
            local_c = (undefined2 **)0xe8ee;
            func_0x0000daa6();
            func_0x0000c3ca();
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b9d();
            func_0x00029983();
            local_c = (undefined2 **)0x22b2;
            local_e = (undefined2 *)0xe925;
            puVar16 = (undefined2 *)func_0x0000013f();
            puVar13 = (undefined2 *)puVar16;
            puVar12 = &local_9a;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar2 = puVar12;
              puVar12 = puVar12 + 1;
              puVar1 = puVar13;
              puVar13 = puVar13 + 1;
              *puVar2 = *puVar1;
            }
            puVar12 = local_84;
            puVar13 = &local_9a;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar1 = puVar12;
              puVar12 = puVar12 + 1;
              puVar16 = puVar13;
              puVar13 = puVar13 + 1;
              *puVar1 = *puVar16;
            }
            local_c = (undefined2 **)0x0;
            local_e = (undefined2 *)0xe950;
            puVar16 = (undefined2 *)func_0x0000013f();
            puVar13 = (undefined2 *)puVar16;
            puVar12 = &local_f2;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar2 = puVar12;
              puVar12 = puVar12 + 1;
              puVar1 = puVar13;
              puVar13 = puVar13 + 1;
              *puVar2 = *puVar1;
            }
            puVar12 = local_dc;
            puVar13 = &local_f2;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar1 = puVar12;
              puVar12 = puVar12 + 1;
              puVar16 = puVar13;
              puVar13 = puVar13 + 1;
              *puVar1 = *puVar16;
            }
            ppuVar9 = &puStack_20;
            puVar12 = &local_f2;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar1 = ppuVar9;
              ppuVar9 = ppuVar9 + 1;
              puVar16 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar1 = *puVar16;
            }
            puVar13 = &local_36;
            puVar12 = &local_9a;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar1 = puVar13;
              puVar13 = puVar13 + 1;
              puVar16 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar1 = *puVar16;
            }
            local_38 = 0;
            puVar12 = (undefined2 *)0x1bb4;
            local_3a = 0xe99b;
            iVar6 = FUN_1def_1921();
            if (iVar6 == 0) {
LAB_3ab8_3e22:
              *(undefined2 *)0xc22 = 1;
              puVar16 = local_16;
            }
            else {
              func_0x000297e6();
              func_0x00029d78();
              local_12._2_2_ = (undefined2 *)0x22b2;
              local_12._0_2_ = (undefined2 *)0xe9f2;
              func_0x000299d1();
              local_12._2_2_ = (undefined2 *)0x22b2;
              local_12._0_2_ = (undefined2 *)0xe9fb;
              func_0x000297e6();
              local_12._2_2_ = (undefined2 *)0x22b2;
              local_12._0_2_ = (undefined2 *)0xea00;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = (undefined2 *)0xea0a;
              func_0x000299d1();
              local_18 = 0x22b2;
              local_1a = (undefined2 *)0xea13;
              func_0x000297e6();
              local_18 = 0x22b2;
              local_1a = (undefined2 *)0xea18;
              func_0x00029d78();
              puStack_20 = (undefined2 *)0x22b2;
              uStack_22 = 0xea22;
              func_0x000299d1();
              puStack_20 = (undefined2 *)0x22b2;
              uStack_22 = 0xea2b;
              func_0x000297e6();
              puStack_20 = (undefined2 *)0x22b2;
              uStack_22 = 0xea30;
              func_0x00029d78();
              uStack_2a = 0xea3a;
              func_0x000299d1();
              uStack_2a = 0x22b2;
              uStack_2c = 0xea43;
              FUN_3ab8_0000();
              func_0x000297e6();
              func_0x00029d78();
              local_12._2_2_ = (undefined2 *)0x22b2;
              local_12._0_2_ = (undefined2 *)0xea5d;
              func_0x000299d1();
              local_12._2_2_ = (undefined2 *)0x22b2;
              local_12._0_2_ = (undefined2 *)0xea65;
              func_0x000297e6();
              local_12._2_2_ = (undefined2 *)0x22b2;
              local_12._0_2_ = (undefined2 *)0xea6a;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = (undefined2 *)0xea74;
              func_0x000299d1();
              local_18 = 0x22b2;
              local_1a = (undefined2 *)0xea7d;
              func_0x000297e6();
              local_18 = 0x22b2;
              local_1a = (undefined2 *)0xea82;
              func_0x00029d78();
              puStack_20 = (undefined2 *)0x22b2;
              uStack_22 = 0xea8c;
              func_0x000299d1();
              puStack_20 = (undefined2 *)0x22b2;
              uStack_22 = 0xea95;
              func_0x000297e6();
              puStack_20 = (undefined2 *)0x22b2;
              uStack_22 = 0xea9a;
              func_0x00029d78();
              uStack_2a = 0xeaa4;
              func_0x000299d1();
              uStack_2a = 0x22b2;
              uStack_2c = 0xeaad;
              FUN_3ab8_0000();
              local_c = &local_110;
              local_e = &local_138;
              local_12._2_2_ = (undefined2 *)local_11a;
              local_12._0_2_ = (undefined2 *)local_11c;
              local_16._2_2_ = (undefined2 **)local_11e;
              local_16._0_2_ = local_120;
              puVar13 = &uStack_2c;
              puVar12 = &local_f2;
              for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar1 = puVar13;
                puVar13 = puVar13 + 1;
                puVar16 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar1 = *puVar16;
              }
              puVar13 = &local_42;
              puVar12 = &local_9a;
              for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar1 = puVar13;
                puVar13 = puVar13 + 1;
                puVar16 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar1 = *puVar16;
              }
              uStack_44 = 0x22b2;
              uStack_46 = 0xeaf5;
              FUN_3ab8_1590();
              if ((*(int *)0x103a == 0) && (*(int *)0x103c == 0)) {
                func_0x000297e6();
                func_0x00029d78();
                func_0x00029c2c();
                func_0x00029c44();
                func_0x00029983();
              }
              if ((*(int *)0x103a == 1) || (*(int *)0x103a == 3)) {
                func_0x000297e6();
                func_0x00029ae7();
                func_0x0002996b();
                func_0x000297e6();
                func_0x00029b6d();
                FUN_28b3_1172();
                func_0x00029d78();
                func_0x000299b9();
                FUN_28b3_0ee9();
                if (*(int *)0x103a == 3) {
                  func_0x000297e6();
                  func_0x00029d78();
                  local_12._2_2_ = (undefined2 *)0x22b2;
                  local_12._0_2_ = (undefined2 *)0xeba6;
                  func_0x000299d1();
                  local_12._2_2_ = (undefined2 *)local_10a;
                  local_12._0_2_ = local_10c;
                  local_16._2_2_ = local_10e;
                  local_16._0_2_ = local_110;
                  local_18 = local_132;
                  local_1a = local_134;
                  local_1c = local_136;
                  puStack_20 = (undefined2 *)0x22b2;
                  uStack_22 = 0xebcf;
                  func_0x00029834();
                  puVar12 = (undefined2 *)0x22b2;
                  uStack_2a = 0xebd9;
                  func_0x000299d1();
                  puVar11 = &local_3c;
                  puVar13 = &local_f2;
                  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar1 = puVar11;
                    puVar11 = puVar11 + 1;
                    puVar16 = puVar13;
                    puVar13 = puVar13 + 1;
                    *puVar1 = *puVar16;
                  }
                  puVar11 = auStack_52;
                  puVar13 = &local_9a;
                  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar1 = puVar11;
                    puVar11 = puVar11 + 1;
                    puVar16 = puVar13;
                    puVar13 = puVar13 + 1;
                    *puVar1 = *puVar16;
                  }
                  ppuStack_54 = local_16._2_2_;
                  local_56 = (undefined2 *)local_16;
                  uStack_5c = 0x22b2;
                  uStack_5e = 0xec09;
                  uStack_5a = puVar3;
                  iVar6 = FUN_3ab8_03ad();
                  if (iVar6 == 0) goto LAB_3ab8_3e22;
                  local_100 = (undefined2 *)0x1;
                  local_14c = 2;
                  if (1 < iVar6) {
                    local_1e8 = 1;
                  }
                  puVar12 = (undefined2 *)0x885;
                  func_0x0000abfa();
                  puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
                  goto LAB_3ab8_3e28;
                }
                func_0x00029834();
                func_0x00029983();
                func_0x00029834();
                local_c = (undefined2 **)0xec5b;
                FUN_28b3_112c();
                func_0x000299b9();
                func_0x00029c2c();
                func_0x00029983();
                local_c = local_10e;
                local_e = local_110;
                local_12._2_2_ = (undefined2 *)0x22b2;
                local_12._0_2_ = (undefined2 *)0xec87;
                func_0x0002a11e();
                func_0x00029834();
                func_0x00029c2c();
                func_0x00029bb5();
                func_0x00029983();
                local_c = local_10e;
                local_e = local_110;
                local_12._2_2_ = (undefined2 *)0x22b2;
                local_12._0_2_ = (undefined2 *)0xecc1;
                func_0x0002a10c();
                uVar14 = (undefined1 *)0xfff7 < &local_e;
                func_0x00029834();
                func_0x00029c2c();
                func_0x00029bb5();
                func_0x00029983();
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar14) {
                  local_128 = local_be;
                  local_126 = local_bc;
                  local_c6 = local_144;
                  local_c4 = local_142;
                  local_c2 = local_15c;
                  local_c0 = local_15a;
                }
              }
              if (*(int *)0x103a == 2) {
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029b9d();
                func_0x00029983();
              }
              func_0x000297e6();
              func_0x00029d78();
              local_12._2_2_ = (undefined2 *)0x22b2;
              local_12._0_2_ = (undefined2 *)0xed72;
              func_0x000299d1();
              local_12._2_2_ = (undefined2 *)0x22b2;
              local_12._0_2_ = (undefined2 *)0xed7b;
              func_0x000297e6();
              local_12._2_2_ = (undefined2 *)0x22b2;
              local_12._0_2_ = (undefined2 *)0xed80;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = (undefined2 *)0xed8a;
              func_0x000299d1();
              local_18 = 0x22b2;
              local_1a = (undefined2 *)0xed93;
              func_0x000297e6();
              local_18 = 0x22b2;
              local_1a = (undefined2 *)0xed98;
              func_0x00029d78();
              puStack_20 = (undefined2 *)0x22b2;
              uStack_22 = 0xeda2;
              func_0x000299d1();
              puStack_20 = &local_9a;
              uStack_22 = 0x22b2;
              uStack_24 = 0xedab;
              iVar6 = FUN_3ab8_0138();
              if (iVar6 == 0) {
                local_150 = local_9a;
                local_14e = local_98;
                local_1dc = local_96;
                local_1da = local_94;
                if (*(int *)0x103a == 2) {
                  func_0x000297e6();
                  func_0x00029b6d();
                  func_0x00029b9d();
                  func_0x00029983();
                }
                func_0x000297e6();
                func_0x00029d78();
                local_12._2_2_ = (undefined2 *)0x22b2;
                local_12._0_2_ = (undefined2 *)0xee1e;
                func_0x000299d1();
                local_12._2_2_ = (undefined2 *)0x22b2;
                local_12._0_2_ = (undefined2 *)0xee27;
                func_0x000297e6();
                local_12._2_2_ = (undefined2 *)0x22b2;
                local_12._0_2_ = (undefined2 *)0xee2c;
                func_0x00029d78();
                local_18 = 0x22b2;
                local_1a = (undefined2 *)0xee36;
                func_0x000299d1();
                local_18 = 0x22b2;
                local_1a = (undefined2 *)0xee3f;
                func_0x000297e6();
                local_18 = 0x22b2;
                local_1a = (undefined2 *)0xee44;
                func_0x00029d78();
                puStack_20 = (undefined2 *)0x22b2;
                uStack_22 = 0xee4e;
                func_0x000299d1();
                puStack_20 = &local_f2;
                uStack_22 = 0x22b2;
                uStack_24 = 0xee57;
                iVar6 = FUN_3ab8_0138();
                if (iVar6 == 0) {
                  local_1d8 = local_f2;
                  local_1d6 = local_f0;
                  local_1ec = local_ee;
                  local_1ea = local_ec;
                  if ((long)CONCAT22(local_16._2_2_,(undefined2 *)local_16) < (long)puVar3) {
                    local_c = (undefined2 **)0x22b2;
                    local_e = (undefined2 *)0xee9c;
                    func_0x00018779();
                  }
                  else {
                    local_c = (undefined2 **)0x22b2;
                    local_e = (undefined2 *)0xeeb1;
                    func_0x00018779();
                  }
                  local_c = (undefined2 **)0x11f2;
                  local_e = (undefined2 *)0xeec0;
                  func_0x00018779();
                  puVar13 = &local_1c;
                  puVar11 = &local_1c;
                  puVar10 = &local_1c;
                  puVar12 = &local_9a;
                  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar3 = puVar13;
                    puVar13 = puVar13 + 1;
                    puVar16 = puVar12;
                    puVar12 = puVar12 + 1;
                    *puVar3 = *puVar16;
                  }
                  puStack_20 = (undefined2 *)0xeed7;
                  FUN_17a6_0cba();
                  puVar12 = &local_f2;
                  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                    puVar3 = puVar11;
                    puVar11 = puVar11 + 1;
                    puVar16 = puVar12;
                    puVar12 = puVar12 + 1;
                    *puVar3 = *puVar16;
                  }
                  puStack_20 = (undefined2 *)0xeeef;
                  FUN_17a6_0cba();
                  local_14c = 2;
                  if (*(int *)0x103a == 0) {
                    local_42 = local_150;
                    local_40 = local_14e;
                    local_3c = local_1da;
                    local_3a = local_1d8;
                    local_38 = local_1d6;
                    local_36 = local_1ec;
                    local_34 = local_1ea;
                    local_31 = *(undefined1 *)0xa6a;
                    local_32 = *(undefined1 *)0xa6c;
                    local_30 = *(undefined1 *)0xb310;
                    puVar12 = &local_42;
                    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                      puVar3 = puVar10;
                      puVar10 = puVar10 + 1;
                      puVar16 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar3 = *puVar16;
                    }
                    puStack_20 = (undefined2 *)0xef5d;
                    iVar6 = FUN_17a6_0cba();
                    if (iVar6 != 0) {
                      local_14c = 3;
                    }
                  }
                  if (*(int *)0x103a == 1) {
                    func_0x000297e6();
                    func_0x00029d78();
                    local_12._2_2_ = (undefined2 *)0x22b2;
                    local_12._0_2_ = (undefined2 *)0xef8c;
                    func_0x000299d1();
                    local_12._2_2_ = (undefined2 *)0x22b2;
                    local_12._0_2_ = (undefined2 *)0xef95;
                    func_0x000297e6();
                    local_12._2_2_ = (undefined2 *)0x22b2;
                    local_12._0_2_ = (undefined2 *)0xef9a;
                    func_0x00029d78();
                    local_18 = 0x22b2;
                    local_1a = (undefined2 *)0xefa4;
                    func_0x000299d1();
                    local_18 = 0x22b2;
                    local_1a = (undefined2 *)0xefad;
                    func_0x000297e6();
                    puStack_20 = (undefined2 *)0x22b2;
                    uStack_22 = 0xefb7;
                    func_0x000299d1();
                    puStack_20 = (undefined2 *)0x22b2;
                    uStack_22 = 0xefc0;
                    func_0x000297e6();
                    uStack_2a = 0xefca;
                    func_0x000299d1();
                    uStack_2a = 0xefcf;
                    uVar17 = FUN_1000_0718();
                    local_b8 = uVar17;
                    func_0x000297e6();
                    func_0x00029d78();
                    local_12._2_2_ = (undefined2 *)0x22b2;
                    local_12._0_2_ = (undefined2 *)0xeff2;
                    func_0x000299d1();
                    local_12._2_2_ = (undefined2 *)0x22b2;
                    local_12._0_2_ = (undefined2 *)0xeffb;
                    func_0x000297e6();
                    local_12._2_2_ = (undefined2 *)0x22b2;
                    local_12._0_2_ = (undefined2 *)0xf000;
                    func_0x00029d78();
                    local_18 = 0x22b2;
                    local_1a = (undefined2 *)0xf00a;
                    func_0x000299d1();
                    local_18 = 0x22b2;
                    local_1a = (undefined2 *)0xf013;
                    func_0x000297e6();
                    puStack_20 = (undefined2 *)0x22b2;
                    uStack_22 = 0xf01d;
                    func_0x000299d1();
                    puStack_20 = (undefined2 *)0x22b2;
                    uStack_22 = 0xf026;
                    func_0x000297e6();
                    uStack_2a = 0xf030;
                    func_0x000299d1();
                    uStack_2a = 0xf035;
                    puVar12 = &local_26;
                    uVar18 = FUN_1000_0718();
                    uVar17 = local_b8;
                    local_b4 = uVar18;
                    if (uVar18 < local_b8) {
                      local_6e = local_b8;
                      local_b8 = uVar18;
                      local_b4 = uVar17;
                      uVar17 = uVar18;
                      uVar18 = uVar17;
                      local_6e = uVar17;
                    }
                    local_b4._2_2_ = (int)(uVar18 >> 0x10);
                    local_b4._0_2_ = (uint)uVar18;
                    local_b8._2_2_ = (int)(uVar17 >> 0x10);
                    local_b8._0_2_ = (uint)uVar17;
                    uVar8 = (local_b4._2_2_ - local_b8._2_2_) -
                            (uint)((uint)local_b4 < (uint)local_b8);
                    uVar4 = uVar17;
                    if ((0xb3 < uVar8) && ((0xb4 < uVar8 || ((uint)local_b4 != (uint)local_b8)))) {
                      local_6e = uVar17;
                      local_b8 = uVar18;
                      local_b4 = uVar17;
                      uVar4 = uVar18;
                      uVar18 = uVar17;
                    }
                    local_ba = 10000;
                    local_ae = 0;
                    local_b0 = 0;
                    local_ab = *(undefined1 *)0xa6a;
                    local_ac = *(undefined1 *)0xa6c;
                    local_aa = *(undefined1 *)0xb310;
                    puVar13 = &local_c6;
                    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                      puVar3 = puVar12;
                      puVar12 = puVar12 + 1;
                      puVar16 = puVar13;
                      puVar13 = puVar13 + 1;
                      *puVar3 = *puVar16;
                    }
                    uStack_2a = 0xf0ea;
                    local_b8 = uVar4;
                    local_b4 = uVar18;
                    FUN_13bf_01c1();
                    local_1e8 = 1;
                  }
                  if (*(int *)0x103a == 2) {
                    local_3c = local_1da;
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x000297e6();
                    func_0x0002996b();
                    FUN_28b3_117c();
                    func_0x00029983();
                    func_0x000297e6();
                    FUN_28b3_100d();
                    func_0x00029bb5();
                    func_0x00029983();
                    local_31 = *(undefined1 *)0xa6a;
                    local_32 = *(undefined1 *)0xa6c;
                    local_30 = *(undefined1 *)0xb310;
                    puVar13 = &local_1c;
                    puVar11 = &local_1c;
                    puVar12 = &local_42;
                    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                      puVar3 = puVar13;
                      puVar13 = puVar13 + 1;
                      puVar16 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar3 = *puVar16;
                    }
                    puStack_20 = (undefined2 *)0xf184;
                    iVar6 = FUN_17a6_0cba();
                    if (iVar6 != 0) {
                      local_14c = local_14c + 1;
                    }
                    local_42 = local_1d8;
                    local_40 = local_1d6;
                    local_3c = local_1ea;
                    puVar12 = &local_42;
                    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                      puVar3 = puVar11;
                      puVar11 = puVar11 + 1;
                      puVar16 = puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar3 = *puVar16;
                    }
                    puStack_20 = (undefined2 *)0xf1bf;
                    iVar6 = FUN_17a6_0cba();
                    if (iVar6 != 0) {
                      local_14c = local_14c + 1;
                    }
                  }
                  puVar12 = (undefined2 *)0x885;
                  func_0x0000abfa();
                  puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
                  local_100 = (undefined2 *)0x1;
                  goto LAB_3ab8_3e28;
                }
              }
              puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
              puVar12 = (undefined2 *)0x22b2;
              *(undefined2 *)0xc22 = 2;
            }
LAB_3ab8_3e28:
            if (*(int *)0xc22 != 0) {
              local_c = (undefined2 **)0xe9bb;
              local_16 = puVar16;
              func_0x00012276();
              local_c = (undefined2 **)0x11f2;
              local_e = (undefined2 *)0xe9c9;
              FUN_1000_0599();
              puVar12 = (undefined2 *)0x11f2;
              local_c = (undefined2 **)0xf1e1;
              func_0x00012276();
              *(undefined2 *)0xc22 = 1;
              puVar16 = local_16;
            }
            goto LAB_3ab8_31d8;
          }
          *(undefined2 *)0xc22 = 1;
          local_c = (undefined2 **)0x885;
          local_e = (undefined2 *)0xe6e6;
          FUN_1000_0599();
        }
        puVar12 = (undefined2 *)0x11f2;
        local_c = (undefined2 **)0xe6f1;
        func_0x00012276();
        goto LAB_3ab8_39f8;
      }
    }
    puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
    if ((long)local_220 < 0) {
      local_c = (undefined2 **)0xe892;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      local_c = (undefined2 **)0x11f2;
      local_e = (undefined2 *)0xe8a6;
      FUN_1000_0599();
      puVar12 = (undefined2 *)0x11f2;
      local_c = (undefined2 **)0xe8b1;
      func_0x00012276();
      puVar16 = (undefined2 *)CONCAT22(local_16._2_2_,(undefined2 *)local_16);
      local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
    }
  }
  goto LAB_3ab8_31d8;
LAB_3ab8_3a7b:
  puVar12 = (undefined2 *)0x1b6e;
  local_12 = (undefined2 *)CONCAT22(local_12._2_2_,(undefined2 *)local_12);
  goto LAB_3ab8_31d8;
}



/* 3ab8:4671  FUN_3ab8_4671  936 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_4671(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 local_48 [4];
  undefined1 local_44 [6];
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  int local_36;
  undefined1 local_34 [34];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *puStack_e;
  undefined2 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined2 uStack_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  uVar1 = 0x22b2;
  uStack_6 = 0xf1fc;
  FUN_21f2_0ebc();
  do {
    while( true ) {
      if ((param_1 == 1) && (*(char *)0x2910 != '\0')) {
        uStack_6 = 0xf212;
        puStack_4 = (undefined2 *)uVar1;
        func_0x000297e6();
        puStack_4 = param_2;
        uStack_6 = 0x22b2;
        puStack_8 = (undefined1 *)0xf21b;
        func_0x00029b6d();
        puStack_4 = (undefined2 *)0x22b2;
        uStack_6 = 0xf221;
        func_0x00029983();
        puStack_4 = (undefined2 *)0x22b2;
        uStack_6 = 0xf22a;
        func_0x000297e6();
        puStack_4 = param_3;
        uStack_6 = 0x22b2;
        puStack_8 = (undefined1 *)0xf233;
        func_0x00029b6d();
        puStack_4 = (undefined2 *)0x22b2;
        uVar1 = 0x22b2;
        uStack_6 = 0xf239;
        func_0x00029983();
      }
      local_3a = *param_2;
      local_38 = param_2[1];
      local_3e = *param_3;
      local_3c = param_3[1];
      uVar2 = 0x1bb4;
      uStack_6 = 0xf25a;
      puStack_4 = (undefined2 *)uVar1;
      func_0x0001bb4e();
      if (param_1 == 1) {
        puStack_4 = (undefined2 *)0x28be;
        uStack_6 = 0x1bb4;
        uVar2 = 0x11f2;
        puStack_8 = (undefined1 *)0xf269;
        func_0x00012276();
        if (*(char *)0x2910 != '\0') {
          puStack_4 = (undefined2 *)0x0;
          uStack_6 = 7;
          puStack_8 = (undefined1 *)0x1;
          puStack_a = (undefined1 *)0xc;
          puStack_c = (undefined2 *)0x28ca;
          puStack_e = (undefined2 *)0x11f2;
          uVar2 = 0xdef;
          uStack_10 = 0xf289;
          FUN_1000_02b5();
        }
      }
      uVar1 = uVar2;
      if (param_1 == 2) {
        puStack_4 = (undefined2 *)0x28cd;
        uVar1 = 0x11f2;
        puStack_8 = (undefined1 *)0xf29b;
        uStack_6 = uVar2;
        func_0x00012276();
      }
      if ((param_1 == 1) || (uVar2 = uVar1, param_1 == 2)) {
        puStack_4 = (undefined2 *)0x0;
        uStack_6 = 7;
        puStack_8 = (undefined1 *)0x1;
        puStack_a = (undefined1 *)0x28;
        puStack_c = (undefined2 *)0x28d9;
        uVar2 = 0xdef;
        uStack_10 = 0xf2c0;
        puStack_e = (undefined2 *)uVar1;
        FUN_1000_02b5();
      }
      if (param_1 == 1) {
        puStack_4 = (undefined2 *)0x0;
        uStack_6 = 7;
        puStack_8 = (undefined1 *)0x1;
        puStack_a = (undefined1 *)0x4a;
        puStack_c = (undefined2 *)0x28e8;
        uStack_10 = 0xf2e4;
        puStack_e = (undefined2 *)uVar2;
        FUN_1000_02b5();
        if (*(char *)0x2910 != '\0') {
          puStack_4 = (undefined2 *)0x0;
          uStack_6 = 7;
          puStack_8 = (undefined1 *)0x1;
          puStack_a = (undefined1 *)0x4b;
          puStack_c = (undefined2 *)0x28f0;
          puStack_e = (undefined2 *)0xdef;
          uStack_10 = 0xf306;
          FUN_1000_02b5();
        }
        puStack_4 = (undefined2 *)*(undefined2 *)0x9662;
        uStack_6 = *(undefined2 *)0x9660;
        puStack_8 = (undefined1 *)local_38;
        puStack_a = (undefined1 *)local_3a;
        puStack_c = (undefined2 *)0x28f3;
        puStack_e = (undefined2 *)local_34;
        uStack_10 = 0xdef;
        uStack_12 = 0xf324;
        FUN_10ad_1928();
        uStack_6 = 0xffff;
        puStack_8 = (undefined1 *)0x7;
        puStack_a = (undefined1 *)0x2;
        puStack_c = (undefined2 *)0x3c;
        puStack_e = (undefined2 *)local_34;
        uStack_10 = 0x11f2;
        uStack_12 = 0xf340;
        FUN_1000_02b5();
        uStack_6 = 0xffff;
        puStack_8 = (undefined1 *)0x7;
        puStack_a = (undefined1 *)0x2;
        puStack_c = (undefined2 *)0x4d;
        puStack_e = (undefined2 *)0x28fd;
        uStack_10 = 0xdef;
        uVar2 = 0xdef;
        uStack_12 = 0xf35c;
        FUN_1000_02b5();
      }
      if (param_1 == 2) {
        puStack_4 = (undefined2 *)local_3c;
        uStack_6 = local_3e;
        puStack_8 = (undefined1 *)local_38;
        puStack_a = (undefined1 *)local_3a;
        puStack_c = (undefined2 *)0x2900;
        puStack_e = (undefined2 *)local_34;
        uStack_12 = 0xf37e;
        uStack_10 = uVar2;
        FUN_10ad_1928();
        uStack_6 = 0xffff;
        puStack_8 = (undefined1 *)0x7;
        puStack_a = (undefined1 *)0x2;
        puStack_c = (undefined2 *)0x38;
        puStack_e = (undefined2 *)local_34;
        uStack_10 = 0x11f2;
        uVar2 = 0xdef;
        uStack_12 = 0xf39a;
        FUN_1000_02b5();
      }
      puStack_4 = (undefined2 *)0x0;
      uStack_6 = 7;
      puStack_8 = (undefined1 *)0x1;
      puStack_a = (undefined1 *)0x38;
      puStack_c = (undefined2 *)0x31e;
      uStack_10 = 0xf3b5;
      puStack_e = (undefined2 *)uVar2;
      FUN_1000_02b5();
      puStack_4 = (undefined2 *)0x1;
      uStack_6 = 0x14;
      puStack_8 = local_48;
      puStack_a = local_44;
      puStack_c = &local_3e;
      puStack_e = &local_3a;
      uStack_10 = 0xdef;
      uStack_12 = 0xf3d5;
      local_36 = func_0x000021a4();
      puStack_4 = (undefined2 *)0x2;
      uStack_6 = 0x14;
      puStack_8 = (undefined1 *)0xad;
      puStack_a = (undefined1 *)0xf3e8;
      FUN_1000_0599();
      puStack_4 = (undefined2 *)0xdef;
      uVar1 = 0xdef;
      uStack_6 = 0xf3ef;
      func_0x00010526();
      if ((param_1 == 1) && (*(char *)0x2910 != '\0')) {
        puStack_4 = (undefined2 *)0xdef;
        uStack_6 = 0xf405;
        func_0x000297e6();
        puStack_4 = param_2;
        uStack_6 = 0x22b2;
        puStack_8 = (undefined1 *)0xf40e;
        func_0x00029b6d();
        puStack_4 = (undefined2 *)0x22b2;
        uStack_6 = 0xf414;
        func_0x00029983();
        puStack_4 = (undefined2 *)0x22b2;
        uStack_6 = 0xf41d;
        func_0x000297e6();
        puStack_4 = param_3;
        uStack_6 = 0x22b2;
        puStack_8 = (undefined1 *)0xf426;
        func_0x00029b6d();
        puStack_4 = (undefined2 *)0x22b2;
        uVar1 = 0x22b2;
        uStack_6 = 0xf42c;
        func_0x00029983();
      }
      if (local_36 == -1) {
        return 0xffff;
      }
      if (*(int *)0x158 != 0) {
        return 0xfba9;
      }
      if ((param_1 == 1) && ((local_36 == 0x6200 || ((0x4a < local_36 && (local_36 < 0x51)))))) {
        *(char *)0x2910 = '\x01' - *(char *)0x2910;
      }
      uVar3 = param_1 == 0;
      uVar4 = 0;
      if (param_1 == 1) {
        uVar3 = 0;
        uVar4 = *(char *)0x2910 == '\0';
        if (!(bool)uVar4) {
          uStack_6 = 0xf47d;
          puStack_4 = (undefined2 *)uVar1;
          func_0x000297e6();
          puStack_4 = &local_3a;
          uStack_6 = 0x22b2;
          puStack_8 = (undefined1 *)0xf486;
          func_0x00029b6d();
          puStack_4 = (undefined2 *)0x22b2;
          uVar1 = 0x22b2;
          uStack_6 = 0xf48c;
          func_0x00029983();
        }
        local_3e = local_3a;
        local_3c = local_38;
      }
      uStack_6 = 0xf4a1;
      puStack_4 = (undefined2 *)uVar1;
      func_0x00029834();
      puStack_4 = (undefined2 *)0x22b2;
      uStack_6 = 0xf4a9;
      func_0x000297e6();
      puStack_4 = (undefined2 *)0x22b2;
      uStack_6 = 0xf4ae;
      func_0x00029d78();
      puStack_4 = (undefined2 *)0x22b2;
      uStack_6 = 0xf4b3;
      FUN_28b3_1181();
      if (!(bool)uVar3) break;
LAB_3ab8_49a6:
      puStack_4 = (undefined2 *)0x1dc;
      uStack_6 = 0x22b2;
      puStack_8 = (undefined1 *)0xf52f;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      puStack_4 = (undefined2 *)0x2;
      uStack_6 = 0x14;
      puStack_8 = (undefined1 *)0x11f2;
      puStack_a = (undefined1 *)0xf543;
      FUN_1000_0599();
      puStack_4 = (undefined2 *)0x396;
      uStack_6 = 0x1de;
      puStack_8 = (undefined1 *)0xdef;
      uVar1 = 0x11f2;
      puStack_a = (undefined1 *)0xf552;
      func_0x00012276();
    }
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf4bd;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf4c5;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf4ca;
    FUN_28b3_1181();
    if (!(bool)uVar3 && !(bool)uVar4) goto LAB_3ab8_49a6;
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf4d5;
    func_0x00029834();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf4dd;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf4e2;
    func_0x00029d78();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf4e7;
    FUN_28b3_1181();
    if ((bool)uVar3) goto LAB_3ab8_49a6;
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf4f1;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf4fa;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf502;
    func_0x00029b6d();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf507;
    FUN_28b3_1181();
    if ((bool)uVar3) goto LAB_3ab8_49a6;
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf512;
    func_0x00029834();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf51a;
    func_0x000297e6();
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xf51f;
    func_0x00029d78();
    puStack_4 = (undefined2 *)0x22b2;
    uVar1 = 0x22b2;
    uStack_6 = 0xf524;
    FUN_28b3_1181();
    if (!(bool)uVar3 && !(bool)uVar4) goto LAB_3ab8_49a6;
    if (local_36 == 0x65) {
      return 0;
    }
    if (((local_36 == 0x66) || (local_36 == 0)) && (local_36 != 99)) {
      *param_2 = local_3a;
      param_2[1] = local_38;
      *param_3 = local_3e;
      param_3[1] = local_3c;
      return 1;
    }
  } while( true );
}



/* 3ab8:4a19  FUN_3ab8_4a19  632 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000403b8) */
/* WARNING: Removing unreachable block (ram,0x000403c3) */

int FUN_3ab8_4a19(undefined2 param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5,
                 undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined2 *puVar1;
  int **ppiVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int **ppiVar8;
  int *piVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 *puVar14;
  long lVar15;
  long lVar16;
  undefined2 in_stack_0000001a;
  int *in_stack_0000001c;
  int *in_stack_0000001e;
  int *in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000028;
  undefined2 in_stack_0000002a;
  int *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  int *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  int iStack_1b4;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a0;
  int *piStack_198;
  undefined2 *puStack_196;
  int iStack_16c;
  undefined2 local_16a;
  int iStack_168;
  undefined2 uStack_166;
  int iStack_164;
  undefined2 local_162;
  int iStack_160;
  undefined2 uStack_15e;
  int iStack_15c;
  undefined2 uStack_156;
  undefined2 uStack_154;
  int iStack_152;
  int local_150;
  int iStack_14e;
  undefined2 uStack_140;
  int iStack_13e;
  undefined2 auStack_13c [2];
  uint uStack_138;
  uint local_136;
  int local_134 [52];
  undefined2 uStack_cc;
  int iStack_ca;
  int iStack_c8;
  int iStack_c6;
  undefined2 local_c4;
  int *piStack_be;
  int *piStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 *local_b6;
  int aiStack_b4 [2];
  undefined4 uStack_b0;
  int iStack_ac;
  undefined2 uStack_a0;
  undefined2 *local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  int local_98;
  int *local_96;
  undefined2 local_94;
  undefined2 uStack_92;
  int *piStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  int iStack_88;
  int iStack_86;
  undefined1 uStack_73;
  undefined2 uStack_6e;
  int *piStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  int iStack_64;
  int iStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined2 uStack_50;
  int *piStack_4e;
  int *piStack_4c;
  int *piStack_4a;
  int iStack_46;
  int local_44 [11];
  int *piStack_2e;
  int *piStack_2a;
  int *piStack_26;
  int *piStack_24;
  int *piStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int *piStack_14;
  int *piStack_12;
  int *piStack_10;
  int *piStack_e;
  int *local_c;
  
  FUN_21f2_0ebc();
  aiStack_b4[1] = 999;
  local_c4 = 999;
  local_c = (undefined2 *)0x22b2;
  piVar9 = (int *)0x22b2;
  piStack_e = (int *)0xf5be;
  func_0x00024c86();
  local_9c = *(undefined2 *)0x96c4;
  local_9a = *(undefined2 *)0x96c6;
  if (param_2 != 0) {
    local_9e = (undefined2 *)0xffff;
    func_0x00029834();
    func_0x00029983();
    func_0x00029834();
    piVar9 = (int *)0x22b2;
    func_0x00029983();
  }
LAB_3ab8_4a7d:
  local_96 = (int *)*(undefined2 *)0x9660;
  local_94 = *(undefined2 *)0x9662;
  local_98 = 0;
  local_150 = 0;
  while (param_2 == 0) {
    piStack_e = (int *)0xf62d;
    local_c = piVar9;
    func_0x00024c86();
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf63d;
    FUN_21f2_2d26();
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf64d;
    FUN_21f2_2d26();
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf65d;
    FUN_21f2_2d26();
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf66d;
    FUN_21f2_2d26();
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf67d;
    FUN_1def_07a4();
    func_0x0000c340();
    *(undefined2 *)0xc1a = 1;
    *(undefined2 *)0xc20 = 1;
    local_c = &local_162;
    piStack_e = local_134;
    piStack_10 = (int *)0x0;
    piStack_12 = (int *)0x885;
    piStack_14 = (int *)0xf6a9;
    local_9e = (undefined2 *)FUN_1def_0904();
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
    if (*(int *)0xc18 == 0) {
      if (local_b6 != (undefined2 *)0x0) {
        local_c = local_b6;
        piStack_e = (int *)0x1bb4;
        piStack_10 = (int *)0xf71f;
        iVar5 = func_0x00015409();
        if (iVar5 != 0) {
          local_9e = (undefined2 *)0xffff;
          break;
        }
      }
      iVar5 = FUN_3ab8_4ca3();
      return iVar5;
    }
    local_98 = 0;
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf6e3;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf6ec;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xf6f1;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xf6fb;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    piVar9 = (int *)0x3bf;
    uStack_1a = 0xf700;
    func_0x0000507a();
  }
LAB_3ab8_4baf:
  do {
    if ((local_9e != (undefined2 *)0x0) && (local_9e != (undefined2 *)0x2)) {
      iVar5 = FUN_3ab8_4e5f();
      return iVar5;
    }
    local_136 = 1;
    func_0x0000c340();
    local_c = (int *)0x885;
    piStack_e = (int *)0xf759;
    FUN_21f2_3454();
    if (local_9e == (undefined2 *)0x2) {
      local_c = (int *)0x22b2;
      piStack_e = (int *)0xf770;
      FUN_21f2_2d26();
    }
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf780;
    FUN_21f2_2d26();
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf790;
    FUN_21f2_2d26();
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf7a0;
    FUN_21f2_2d26();
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf7b0;
    FUN_21f2_2d26();
    local_c = (int *)0x22b2;
    piStack_e = (int *)0xf7c0;
    FUN_21f2_2d26();
    if ((local_9e == (undefined2 *)0x0) && (local_98 != 0)) {
      local_c = (int *)local_94;
      piStack_e = local_96;
      piStack_10 = (int *)0x2943;
      piStack_12 = local_44;
      piStack_14 = (int *)0x22b2;
      uStack_16 = 0xf7ed;
      FUN_10ad_1928();
      local_c = local_134;
      piStack_e = (int *)0x11f2;
      piStack_10 = (int *)0xf7fe;
      FUN_21f2_2d26();
    }
    uVar10 = 0x22b2;
    if (((local_9e == (undefined2 *)0x2) && (local_98 != 0)) && (*(char *)0xb782 == '\0')) {
      piStack_14 = (int *)uVar10;
      for (iStack_16c = 0x11; iStack_16c < 0x30; iStack_16c = iStack_16c + 1) {
        local_c = (int *)iStack_16c;
        piStack_e = (int *)(*(int *)0xa58 + -1);
        piStack_10 = (int *)iStack_16c;
        piStack_12 = (int *)0x1;
        uStack_16 = 0xf863;
        func_0x0000def0();
        piStack_14 = (int *)0xdef;
      }
      local_c = (int *)*(undefined2 *)0x1054;
      piStack_e = (int *)*(undefined2 *)0x1052;
      piStack_10 = (int *)0x2950;
      piStack_12 = local_44;
      uStack_16 = 0xf885;
      FUN_10ad_1928();
      local_c = (int *)0x0;
      piStack_e = (int *)0x2;
      piStack_10 = (int *)0x1;
      piStack_12 = local_44;
      piStack_14 = (int *)0x11f2;
      uStack_16 = 0xf89d;
      FUN_1000_02b5();
      local_c = (int *)*(undefined2 *)0x9660;
      piStack_e = (int *)*(undefined2 *)0x1058;
      piStack_10 = (int *)*(undefined2 *)0x1056;
      piStack_12 = (int *)0x295e;
      piStack_14 = local_44;
      uStack_16 = 0xdef;
      uStack_18 = 0xf8bd;
      FUN_10ad_1928();
      local_c = (int *)0x0;
      piStack_e = (int *)0x0;
      piStack_10 = (int *)0x3;
      piStack_12 = (int *)0x1;
      piStack_14 = local_44;
      uStack_16 = 0x11f2;
      uVar10 = 0xdef;
      uStack_18 = 0xf8d5;
      FUN_1000_02b5();
    }
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc1a = 1;
    *(undefined2 *)0xc20 = 1;
    local_c = &local_162;
    piStack_e = local_134;
    piStack_10 = (int *)local_98;
    piStack_14 = (int *)0xf901;
    piStack_12 = (int *)uVar10;
    iStack_c6 = FUN_1def_0904();
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    piVar9 = (int *)0x885;
    func_0x0000abfa();
    if (*(int *)0x158 != 0) {
LAB_2bb4_569f_4:
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      piStack_10 = (int *)0x32b2;
      piStack_12 = (int *)0x1205;
      FUN_32b2_6eb1();
      piStack_10 = (int *)0x1;
      piStack_12 = (int *)0x32b2;
                    /* WARNING: Call to offcut address within same function */
      piStack_14 = (int *)0x120d;
      func_0x0003fc09();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1218;
      FUN_32b2_6cc6();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x121d;
      FUN_32b2_7258();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1225;
      FUN_32b2_6e99();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x122d;
      FUN_32b2_6ef9();
      uVar12 = 0;
      uStack_5c = 0;
      uStack_5e = 0;
      uStack_60 = 0;
      iStack_62 = param_8;
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1246;
      FUN_32b2_7285();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x124f;
      FUN_32b2_710c();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1257;
      FUN_32b2_6e99();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x125f;
      FUN_32b2_6ef9();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1267;
      FUN_32b2_6cc6();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x126c;
      FUN_32b2_7258();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1274;
      FUN_32b2_6e99();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x127c;
      FUN_32b2_6ef9();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1284;
      FUN_32b2_6cc6();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1289;
      FUN_32b2_7258();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1291;
      FUN_32b2_6e99();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x1299;
      FUN_32b2_6ef9();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x12a1;
      FUN_32b2_6cc6();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x12a6;
      FUN_32b2_6fc7();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x12ae;
      FUN_32b2_6cc6();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x12b3;
      FUN_32b2_6fc7();
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x12b8;
      FUN_32b2_7191();
      if ((bool)uVar12) {
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x12c2;
        FUN_32b2_6d14();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x12ca;
        FUN_32b2_6eb1();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x12d2;
        FUN_32b2_6d14();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x12da;
        FUN_32b2_70dc();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x12e2;
        FUN_32b2_710c();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x12ea;
        FUN_32b2_710c();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x12f2;
        FUN_32b2_710c();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x12fa;
        FUN_32b2_7124();
      }
      else {
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x1307;
        FUN_32b2_6d14();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x130f;
        FUN_32b2_6e99();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x1317;
        FUN_32b2_7124();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x131f;
        FUN_32b2_6d14();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x1327;
        FUN_32b2_710c();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x132f;
        FUN_32b2_710c();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x1337;
        FUN_32b2_713c();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x133c;
        FUN_32b2_7173();
        in_stack_00000024 = 0x32b2;
        in_stack_00000022 = 0x1344;
        FUN_32b2_710c();
      }
      in_stack_00000024 = 0x32b2;
      in_stack_00000022 = 0x134c;
      FUN_32b2_6eb1();
      in_stack_00000024 = in_stack_0000002a;
      in_stack_00000022 = in_stack_00000028;
      in_stack_00000020 = piStack_4c;
      in_stack_0000001e = piStack_4e;
      in_stack_0000001c = uStack_50;
      in_stack_0000001a = uStack_54._2_2_;
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      local_c = piStack_24;
      piStack_e = piStack_26;
      piStack_10 = (int *)0x0;
      piStack_12 = (int *)0x32b2;
                    /* WARNING: Call to offcut address within same function */
      piStack_14 = (int *)0x13b7;
      func_0x0003fc09();
      return 1;
    }
    if (*(int *)0xc18 != 0) {
      local_98 = 0;
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xf947;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xf950;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0xf955;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0xf95f;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uStack_1a = 0xf964;
      func_0x0000507a();
      goto LAB_3ab8_4baf;
    }
    if (iStack_c6 != -1) {
      if (iStack_c6 != 0x14) {
        if (local_b6 != (undefined2 *)0x0) {
          local_c = local_b6;
          piStack_e = (int *)0x885;
          piVar9 = (int *)0x11f2;
          piStack_10 = (int *)0xf9d5;
          iVar5 = func_0x00015409();
          if (iVar5 != 0) {
            if (local_9e == (undefined2 *)0xffff) {
              local_9e = (undefined2 *)0x0;
            }
            if (local_9e != (undefined2 *)0x1) {
              uStack_66 = local_16a;
              iStack_64 = iStack_168;
              func_0x000297e6();
              func_0x0002996b();
              piVar9 = (int *)0x22b2;
              func_0x00029983();
              uStack_166 = local_16a;
              iStack_164 = iStack_168;
              local_150 = 1;
            }
LAB_3ab8_4eb1:
            iStack_ac = 0;
            if (0 < (int)local_9e) {
              if (local_9e == (undefined2 *)0x1) {
                func_0x000297e6();
                func_0x0002996b();
                piVar9 = (int *)0x22b2;
                func_0x00029983();
              }
              else {
                uStack_6e = *(undefined2 *)0x1052;
                piStack_6c = (int *)*(undefined2 *)0x1054;
                uStack_92 = *(undefined2 *)0x1056;
                piStack_90 = (int *)*(undefined2 *)0x1058;
              }
              local_c = local_9e;
              piStack_10 = (int *)0xfa91;
              piStack_e = piVar9;
              iStack_46 = FUN_3ab8_4671();
              if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
              if ((iStack_46 == -1) && (local_9e == (undefined2 *)0x1)) goto LAB_3ab8_4a7d;
              if (iStack_46 == -1) goto LAB_3ab8_4baf;
              if ((iStack_46 == 0) && (local_9e == (undefined2 *)0x1)) break;
              if ((iStack_46 == 0) && (local_9e == (undefined2 *)0x2)) {
                do {
                  iStack_ac = 1;
                  do {
                    do {
                      local_c = (int *)0x296c;
                      piStack_e = local_134;
                      piStack_12 = (int *)0xfaf9;
                      piStack_10 = piVar9;
                      FUN_21f2_3454();
                      local_c = &uStack_cc;
                      piStack_e = local_134;
                      *(undefined2 *)0xc20 = 1;
                      piStack_10 = (int *)0x1;
                      piStack_12 = (int *)0x22b2;
                      piVar9 = (int *)0x1bb4;
                      piStack_14 = (int *)0xfb1c;
                      iStack_c6 = FUN_1def_0904();
                      *(undefined2 *)0xc20 = 0;
                      if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
                      if (iStack_c6 == -1) {
                        iStack_c6 = -1;
                        goto LAB_3ab8_4baf;
                      }
                    } while (local_b6 == (undefined2 *)0x0);
                    local_c = local_b6;
                    piStack_e = (int *)0x1bb4;
                    piVar9 = (int *)0x11f2;
                    piStack_10 = (int *)0xfb55;
                    iVar5 = func_0x00015409();
                  } while (iVar5 == 0);
                  while( true ) {
                    local_c = (int *)0x2978;
                    piStack_e = local_134;
                    piStack_12 = (int *)0xfb72;
                    piStack_10 = piVar9;
                    FUN_21f2_3454();
                    local_c = auStack_13c;
                    piStack_e = local_134;
                    *(undefined2 *)0xc20 = 1;
                    piStack_10 = (int *)0x1;
                    piStack_12 = (int *)0x22b2;
                    piVar9 = (int *)0x1bb4;
                    piStack_14 = (int *)0xfb95;
                    iStack_c6 = FUN_1def_0904();
                    *(undefined2 *)0xc20 = 0;
                    if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
                    if (iStack_c6 == -1) break;
                    if (local_b6 != (undefined2 *)0x0) {
                      local_c = local_b6;
                      piStack_e = (int *)0x1bb4;
                      piVar9 = (int *)0x11f2;
                      piStack_10 = (int *)0xfbce;
                      iVar5 = func_0x00015409();
                      if (iVar5 != 0) goto LAB_3ab8_50e8;
                    }
                  }
                } while( true );
              }
              func_0x000297e6();
              func_0x00029b6d();
              func_0x00029b9d();
              piVar9 = (int *)0x22b2;
              func_0x00029983();
              uStack_5e = 10000;
              uStack_5a = 0;
              uStack_5c = 0;
              uStack_56 = 0;
              uStack_58 = 0;
              uStack_54._2_2_ = 0;
              uStack_54._0_2_ = 0;
              if (local_9e == (undefined2 *)0x1) {
                *(undefined2 *)0x104e = uStack_6e;
                *(undefined2 *)0x1050 = piStack_6c;
              }
              else {
                *(undefined2 *)0x1056 = uStack_92;
                *(undefined2 *)0x1058 = piStack_90;
                func_0x000297e6();
                func_0x0002996b();
                func_0x00029b9d();
                func_0x00029b6d();
                func_0x00029d78();
                piVar9 = (int *)0x22b2;
                uStack_5e = FUN_28b3_0f51();
              }
            }
LAB_3ab8_50e8:
            if (local_9e != (undefined2 *)0x2) goto LAB_2bb4_4927;
            local_136 = 1;
            piStack_26 = (int *)*(undefined2 *)0x9660;
            piStack_24 = (int *)*(undefined2 *)0x9662;
            uStack_1e = *(undefined2 *)0x9674;
            uStack_1c = *(undefined2 *)0x9676;
            uStack_1a = *(undefined2 *)0x9660;
            uStack_18 = *(undefined2 *)0x9662;
            piStack_e = (int *)0xfcbf;
            piStack_22 = piStack_26;
            uStack_20 = piStack_24;
            local_c = piVar9;
            FUN_21f2_3454();
            local_c = (int *)0x22b2;
            piStack_e = (int *)0xfccf;
            FUN_21f2_2d26();
            local_c = (int *)0x22b2;
            piStack_e = (int *)0xfcdf;
            FUN_21f2_2d26();
            local_c = (int *)0x22b2;
            piStack_e = (int *)0xfcef;
            FUN_21f2_2d26();
            local_c = (int *)0x22b2;
            piStack_e = (int *)0xfcff;
            FUN_21f2_2d26();
            local_c = (int *)0x22b2;
            piStack_e = (int *)0xfd0f;
            FUN_21f2_2d26();
            local_c = (int *)0x22b2;
            piStack_e = (int *)0xfd1f;
            FUN_1def_07a4();
            local_c = &local_162;
            piStack_e = local_134;
            piStack_10 = (int *)0x1;
            piStack_12 = (int *)0x1bb4;
            piVar9 = (int *)0x1bb4;
            piStack_14 = (int *)0xfd3e;
            iVar5 = FUN_1def_0904();
            if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
            if (iVar5 != -1) {
              if (iVar5 == 1) goto LAB_3ab8_51df;
              goto LAB_3ab8_529d;
            }
            goto LAB_3ab8_4eb1;
          }
        }
        goto LAB_3ab8_4baf;
      }
      goto LAB_3ab8_4a7d;
    }
    local_c = (int *)0xf979;
    func_0x0000daa6();
    local_c = (int *)0x885;
    for (; 0 < local_98; local_98 = local_98 + -1) {
      uStack_156 = *(undefined2 *)0x14c;
      uStack_154 = *(undefined2 *)0x14e;
      piStack_e = (int *)0xf992;
      FUN_13bf_0327();
      local_c = (int *)0x11f2;
    }
    local_c = (undefined2 *)0xf9a8;
    func_0x0000b1d8();
    func_0x0000abfa();
  } while( true );
  local_9e = (undefined2 *)0x0;
  goto LAB_3ab8_4baf;
LAB_3ab8_58ed:
  if ((local_9e == (undefined2 *)0x0) ||
     (uVar12 = local_9e == (undefined2 *)0x0, local_9e == (undefined2 *)0x1)) {
    func_0x0000c340();
    *(undefined2 *)0xc24 = 1;
    local_c = (int *)0x0;
    piStack_e = (int *)0x0;
    piStack_10 = (int *)0x885;
    piStack_12 = (int *)0x49b;
    func_0x0000a76b();
    local_c = (int *)0x4ba;
    func_0x00012276();
    local_c = (int *)0x11f2;
    piStack_e = (int *)0x4c8;
    func_0x00012276();
    func_0x00010526();
    local_c = (int *)0xdef;
    piStack_e = (int *)0x4dc;
    FUN_1000_0599();
    local_136 = (uint)*(byte *)0x2a0f;
    if (*(int *)0xce6 != 0) {
      local_136 = 1;
    }
    local_c = (int *)0xdef;
    uVar10 = 0x11f2;
    piStack_e = (int *)0x501;
    func_0x00012276();
    if (*(int *)0xce6 != 0) {
      local_c = (int *)0x1;
      piStack_e = (int *)0x40;
      piStack_10 = (int *)0x29db;
      piStack_12 = (int *)0x11f2;
      uVar10 = 0xdef;
      piStack_14 = (int *)0x522;
      FUN_1000_02b5();
    }
    if (local_136 != 1) {
      piStack_e = (int *)0x539;
      local_c = (int *)uVar10;
      FUN_1000_0599();
      uVar10 = 0x11f2;
      local_c = (int *)0x544;
      func_0x00012276();
    }
    local_c = (int *)*(undefined2 *)0x962a;
    piStack_e = (int *)*(undefined2 *)0x9628;
    piStack_10 = (int *)*(undefined2 *)0x9626;
    piStack_12 = (int *)*(undefined2 *)0x9624;
    piStack_14 = (int *)*(undefined2 *)0x962a;
    uStack_16 = *(undefined2 *)0x9628;
    uStack_18 = *(undefined2 *)0x9626;
    uStack_1a = *(undefined2 *)0x9624;
    uStack_1c = *(undefined2 *)0x9692;
    uStack_1e = *(undefined2 *)0x9690;
    uStack_20 = *(undefined2 *)0x968e;
    piStack_22 = (int *)*(undefined2 *)0x968c;
    piStack_24 = (int *)0x0;
    piStack_26 = (int *)0x7;
    piStack_2a = (int *)*(undefined2 *)0x96e4;
    piStack_2e = (int *)*(undefined2 *)0x96e0;
    local_44[10] = *(undefined2 *)0x96ee;
    local_44[9] = *(undefined2 *)0x96ec;
    local_44[8] = *(undefined2 *)0x96ea;
    local_44[7] = *(undefined2 *)0x96e8;
    local_44[6] = *(undefined2 *)0x96f6;
    local_44[5] = *(undefined2 *)0x96f4;
    local_44[4] = *(undefined2 *)0x96f2;
    local_44[3] = *(undefined2 *)0x96f0;
    uVar11 = 0xdef;
    local_44[1] = 0x5b3;
    local_44[2] = uVar10;
    func_0x0000fd9f();
    iStack_152 = 0;
    iStack_14e = 0;
    if (local_9e == (undefined2 *)0x1) {
      if ((*(char *)0x2a0e == '\0') || (3 < *(byte *)0x2a0e)) {
        iStack_1ac = 0;
      }
      else {
        iStack_1ac = -1;
      }
      if ((*(byte *)0x2a0e < 5) || (7 < *(byte *)0x2a0e)) {
        iStack_1a8 = 0;
      }
      else {
        iStack_1a8 = 1;
      }
      iStack_14e = iStack_1ac + iStack_1a8;
      if ((*(byte *)0x2a0e < 3) || (5 < *(byte *)0x2a0e)) {
        iStack_1a0 = 0;
      }
      else {
        iStack_1a0 = -1;
      }
      if ((*(byte *)0x2a0e < 7) && (*(char *)0x2a0e != '\x01')) {
        piStack_198 = (int *)0x0;
      }
      else {
        piStack_198 = (int *)0x1;
      }
      local_c = (int *)*(undefined2 *)0x962a;
      piStack_e = (int *)*(undefined2 *)0x9628;
      piStack_10 = (int *)*(undefined2 *)0x9626;
      piStack_12 = (int *)*(undefined2 *)0x9624;
      piStack_14 = (int *)*(undefined2 *)0x962a;
      uStack_16 = *(undefined2 *)0x9628;
      uStack_18 = *(undefined2 *)0x9626;
      uStack_1a = *(undefined2 *)0x9624;
      uStack_1c = *(undefined2 *)0x9692;
      uStack_1e = *(undefined2 *)0x9690;
      uStack_20 = *(undefined2 *)0x968e;
      piStack_22 = (int *)*(undefined2 *)0x968c;
      piStack_24 = (int *)0x3;
      piStack_26 = (int *)0x2;
      piStack_2a = (int *)*(undefined2 *)0x9640;
      piStack_2e = (int *)*(undefined2 *)0x963c;
      iStack_152 = iStack_1a0 + (int)piStack_198;
      local_44[10] = 0xdef;
      local_44[9] = 0x6ba;
      FUN_28b3_0d8b();
      local_44[6] = 0x22b2;
      local_44[5] = 0x6c4;
      func_0x000299d1();
      local_44[6] = 0x22b2;
      local_44[5] = 0x6dd;
      FUN_28b3_0d8b();
      local_44[2] = 0x22b2;
      uVar11 = 0x22b2;
      local_44[1] = 0x6e7;
      func_0x000299d1();
    }
    else {
      if (*(char *)0x2a0e != '\0') goto LAB_3ab8_5be8;
      local_c = (int *)*(undefined2 *)0x962a;
      piStack_e = (int *)*(undefined2 *)0x9628;
      piStack_10 = (int *)*(undefined2 *)0x9626;
      piStack_12 = (int *)*(undefined2 *)0x9624;
      piStack_14 = (int *)*(undefined2 *)0x962a;
      uStack_16 = *(undefined2 *)0x9628;
      uStack_18 = *(undefined2 *)0x9626;
      uStack_1a = *(undefined2 *)0x9624;
      uStack_1c = *(undefined2 *)0x9692;
      uStack_1e = *(undefined2 *)0x9690;
      uStack_20 = *(undefined2 *)0x968e;
      piStack_22 = (int *)*(undefined2 *)0x968c;
      piStack_24 = (int *)0x3;
      piStack_26 = (int *)0x7;
      piStack_2a = (int *)*(undefined2 *)0x9640;
      piStack_2e = (int *)*(undefined2 *)0x963c;
      local_44[10] = *(undefined2 *)0x96ee;
      local_44[9] = *(undefined2 *)0x96ec;
      local_44[8] = *(undefined2 *)0x96ea;
      local_44[7] = *(undefined2 *)0x96e8;
      local_44[6] = *(undefined2 *)0x96f6;
      local_44[5] = *(undefined2 *)0x96f4;
      local_44[4] = *(undefined2 *)0x96f2;
      local_44[3] = *(undefined2 *)0x96f0;
    }
    local_44[1] = 0x765;
    local_44[2] = uVar11;
    func_0x0000fd9f();
LAB_3ab8_5be8:
    uVar10 = 0x885;
    func_0x0000a799();
    uStack_140 = *(undefined2 *)0x96f8;
    iStack_13e = *(int *)0x96fa;
    uStack_5e = 10000;
    uStack_5a = 0;
    uStack_5c = 0;
    uStack_56 = 0;
    uStack_58 = 0;
    uStack_54._2_2_ = 0;
    uStack_54._0_2_ = 0;
    piStack_4e = (int *)CONCAT11(piStack_4e._1_1_,*(undefined1 *)0xb310);
    uStack_50 = (int *)CONCAT11(uStack_50._1_1_,*(undefined1 *)0xa6c);
    uStack_cc = uStack_140;
    iStack_ca = iStack_13e;
LAB_3ab8_5c29:
    do {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xa48 = 3;
      if (local_136 != 1) {
        *(undefined2 *)0xa48 = 4;
      }
      local_c = &local_162;
      piStack_e = &iStack_c8;
      piStack_10 = aiStack_b4;
      piVar9 = (int *)0x3bf;
      piStack_14 = (int *)0x7e2;
      piStack_12 = (int *)uVar10;
      iStack_c6 = func_0x00006608();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(int *)0x158 != 0) {
LAB_3ab8_5c7d:
        func_0x00013e19();
LAB_3ab8_5c82:
        local_c = (int *)0x80a;
        func_0x0000daa6();
        iVar5 = func_0x0000abfa();
        return iVar5;
      }
LAB_3ab8_6556:
      if (iStack_c6 == -1) {
        iVar5 = func_0x00013e19();
        if (param_2 != 0) {
          return iVar5;
        }
        if ((local_9e == (undefined2 *)0x1) && (local_98 != 0)) {
          local_c = (int *)0x1107;
          func_0x0000daa6();
          local_c = (int *)0x885;
          for (; 0 < local_98; local_98 = local_98 + -1) {
            uStack_156 = *(undefined2 *)0x14c;
            uStack_154 = *(undefined2 *)0x14e;
            piStack_e = (int *)0x829;
            FUN_13bf_0327();
            local_c = (int *)0x11f2;
          }
          local_c = (int *)0x83f;
          func_0x0000b1d8();
        }
        local_c = (undefined2 *)0x848;
        func_0x0000daa6();
        func_0x0000abfa();
        goto LAB_3ab8_6656;
      }
      uStack_54 = CONCAT22(uStack_54._2_2_,(undefined2)uStack_54);
      if (iStack_c6 == 99) goto LAB_3ab8_58ed;
      bVar4 = false;
      if ((local_b6 != (undefined2 *)0x0) && (iStack_c8 < *(int *)0xa5e)) {
        local_b6 = (undefined2 *)0x0;
        uStack_54 = CONCAT22(uStack_54._2_2_,(undefined2)uStack_54);
        if (aiStack_b4[0] < 0x125) goto LAB_3ab8_58ed;
        iStack_c6 = (aiStack_b4[0] + -0x124) / 0x60 + 0x31;
      }
      if (iStack_c6 == 0x31) {
        func_0x00013e19();
        local_b6 = (undefined2 *)0x0;
        uStack_92 = *(undefined2 *)0x104e;
        piStack_90 = (int *)*(undefined2 *)0x1050;
        local_c = (undefined2 *)0x1;
        piStack_e = (int *)0x11f2;
        piStack_10 = (int *)0x8d1;
        uStack_6e = uStack_92;
        piStack_6c = piStack_90;
        iStack_46 = FUN_4375_baa1();
        if (*(int *)0x158 != 0) goto LAB_3ab8_5c82;
        if (iStack_46 == -1) goto LAB_3ab8_58ed;
        if (iStack_46 == 0) {
          if (local_9e == (undefined2 *)0x1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          local_9e = (undefined2 *)0x0;
          uStack_54 = CONCAT22(uStack_54._2_2_,(undefined2)uStack_54);
          goto LAB_3ab8_58ed;
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        piVar9 = (int *)0x22b2;
        func_0x00029983();
        uStack_5e = 10000;
        uStack_5a = 0;
        uStack_5c = 0;
        uStack_56 = 0;
        uStack_58 = 0;
        uStack_54._2_2_ = 0;
        uStack_54._0_2_ = 0;
        uStack_54 = 0;
        *(undefined2 *)0x104e = uStack_6e;
        *(undefined2 *)0x1050 = piStack_6c;
        local_9e = (undefined2 *)0x1;
        if (local_150 == 0) goto LAB_3ab8_58ed;
        local_150 = 0;
        local_162 = uStack_15e;
        iStack_160 = iStack_15c;
        local_16a = uStack_166;
        iStack_168 = iStack_164;
        bVar4 = true;
        uStack_cc = *(undefined2 *)0x96fc;
        iStack_ca = *(int *)0x96fe;
      }
      if (iStack_c6 == 0x32) {
        if (*(char *)0x15b == '\x02') {
          iStack_1b4 = *(byte *)0x2a0e - 1;
        }
        else {
          iStack_1b4 = *(byte *)0x2a0e + 1;
        }
        if ((local_9e == (undefined2 *)0x1) && (8 < iStack_1b4)) {
          iStack_1b4 = 0;
        }
        if ((local_9e == (undefined2 *)0x0) && (1 < iStack_1b4)) {
          iStack_1b4 = 0;
        }
        if ((local_9e == (undefined2 *)0x1) && (iStack_1b4 < 0)) {
          iStack_1b4 = 8;
        }
        if ((local_9e == (undefined2 *)0x0) && (iStack_1b4 < 0)) {
          iStack_1b4 = 1;
        }
        *(undefined1 *)0x2a0e = (undefined1)iStack_1b4;
        uStack_54 = CONCAT22(uStack_54._2_2_,(undefined2)uStack_54);
        goto LAB_3ab8_58ed;
      }
      if (iStack_c6 == 0x33) {
        if (*(int *)0xce6 != 0) {
          iVar5 = func_0x00013e19();
          *(undefined2 *)0xce6 = 0x14;
          return iVar5;
        }
        *(char *)0x2a0f = *(char *)0x2a0f + '\x01';
        if (10 < *(byte *)0x2a0f) {
LAB_3ab8_5eb7:
          *(undefined1 *)0x2a0f = 1;
          uStack_54 = CONCAT22(uStack_54._2_2_,(undefined2)uStack_54);
        }
        goto LAB_3ab8_58ed;
      }
      if ((*(int *)0xce6 == 0) && (iStack_c6 == 0x34)) goto LAB_3ab8_5eb7;
      if ((local_b6 != (undefined2 *)0x0) && (iStack_c6 == 100)) {
        uStack_cc = *(undefined2 *)0x96fc;
        iStack_ca = *(int *)0x96fe;
        local_c = local_b6;
        piStack_10 = (int *)0xa7d;
        piStack_e = piVar9;
        iVar5 = func_0x00015409();
        if (iVar5 == 0) goto LAB_3ab8_58ed;
        bVar4 = true;
      }
      uVar12 = *(char *)0x15a == '\0';
      if (!(bool)uVar12) goto LAB_3ab8_58ed;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) {
        func_0x000297e6();
        func_0x000297e6();
        uVar10 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar12) goto LAB_3ab8_5c29;
      }
      uStack_cc = local_162;
      iStack_ca = iStack_160;
      uStack_140 = local_16a;
      iStack_13e = iStack_168;
      uVar10 = 0x11f2;
      func_0x00013e19();
      if ((((aiStack_b4[0] < *(int *)0xa5c) || (*(int *)0xa60 < iStack_c8)) ||
          (iStack_c8 < *(int *)0xa5e)) && (!bVar4)) goto LAB_3ab8_5c29;
      uStack_50 = (int *)CONCAT11(uStack_50._1_1_,*(undefined1 *)0xa6c);
      if (local_9e == (undefined2 *)0x0) {
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_117c();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xbcb;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0xbd0;
        FUN_28b3_1582();
        func_0x00029834();
        func_0x00029983();
        if ((*(char *)0x4a != '\0') && (local_b6 != (undefined2 *)0x2)) {
          func_0x0000c4c4();
          func_0x000297e6();
          local_c = (undefined2 *)0xc1a;
          func_0x00029b9d();
          func_0x00029983();
          if (*(char *)0x2a0e == '\0') {
            func_0x000297e6();
            local_c = (undefined2 *)0xc3a;
            func_0x00029b6d();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029c74();
          FUN_28b3_0f51();
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029983();
        }
        if (*(char *)0x2a0e != '\0') {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          local_c = (undefined2 *)0xce8;
          func_0x00029b6d();
          func_0x00029983();
        }
      }
      else {
        if (*(int *)0xcb6 == 0) {
          uVar10 = *(undefined2 *)0x965e;
          *(undefined2 *)0xb76a = *(undefined2 *)0x965c;
          *(undefined2 *)0xb76c = uVar10;
          uVar10 = *(undefined2 *)0x9660;
          uVar11 = *(undefined2 *)0x9662;
        }
        else {
          uVar10 = *(undefined2 *)0xcbc;
          *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
          *(undefined2 *)0xb76c = uVar10;
          uVar10 = *(undefined2 *)0xcbe;
          uVar11 = *(undefined2 *)0xcc0;
        }
        *(undefined2 *)0xb784 = uVar10;
        *(undefined2 *)0xb786 = uVar11;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        if (*(char *)0x2a0e != '\0') {
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029b6d();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xdba;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xdc3;
          FUN_28b3_0d8b();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xdcc;
          func_0x0002996b();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xdd4;
          func_0x00029b6d();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xdd9;
          func_0x00029af6();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xdde;
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xde7;
          func_0x000299b9();
          uStack_18 = 0x22b2;
          uStack_1a = 0xdf1;
          func_0x000299d1();
          uStack_18 = 0;
          uStack_1a = 0x22b2;
          uStack_1c = 0xdf9;
          puVar6 = (undefined2 *)FUN_1def_05d1();
          uStack_6a = *puVar6;
          uStack_68 = puVar6[1];
          func_0x00029834();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xe1c;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xe25;
          func_0x00029834();
          uStack_18 = 0x22b2;
          uStack_1a = 0xe2f;
          func_0x000299d1();
          uStack_18 = 0;
          uStack_1a = 0x22b2;
          uStack_1c = 0xe37;
          puVar6 = (undefined2 *)func_0x0001e558();
          uStack_66 = *puVar6;
          iStack_64 = puVar6[1];
        }
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b6d();
      func_0x00029983();
      if (*(char *)0xb782 == '\0') {
        iStack_1b4 = 0x11;
        piStack_14 = (int *)0x22b2;
        do {
          local_c = (int *)iStack_1b4;
          piStack_e = (int *)(*(int *)0xa58 + -1);
          piStack_10 = (int *)iStack_1b4;
          piStack_12 = (int *)0x1;
          uStack_16 = 0xe98;
          func_0x0000def0();
          iStack_1b4 = iStack_1b4 + 1;
          piStack_14 = (int *)0xdef;
        } while (iStack_1b4 < 0x30);
        local_c = (int *)local_94;
        piStack_e = local_96;
        piStack_10 = (int *)0x29ed;
        piStack_12 = local_44;
        piStack_14 = (int *)0xdef;
        uStack_16 = 0xec3;
        FUN_10ad_1928();
        local_c = (int *)0x0;
        piStack_e = (int *)0x2;
        piStack_10 = (int *)0x1;
        piStack_12 = local_44;
        piStack_14 = (int *)0x11f2;
        uStack_16 = 0xedb;
        FUN_1000_02b5();
        local_c = (int *)*(undefined2 *)0x9660;
        piStack_e = (int *)0xdef;
        piStack_10 = (int *)0xeef;
        func_0x000297e6();
        piStack_e = (int *)0x22b2;
        piStack_10 = (int *)0xef8;
        func_0x00029b6d();
        piStack_12 = (int *)0x22b2;
        piStack_14 = (int *)0xf02;
        func_0x00029983();
        piStack_e = (int *)0x29fb;
        piStack_10 = local_44;
        piStack_12 = (int *)0x22b2;
        piStack_14 = (int *)0xf0f;
        FUN_10ad_1928();
        local_c = (undefined2 *)0x3;
        piStack_e = (int *)0x1;
        piStack_10 = local_44;
        piStack_12 = (int *)0x11f2;
        piStack_14 = (int *)0xf27;
        FUN_1000_02b5();
      }
      uVar12 = 0;
      if (bVar4) {
        func_0x00013e19();
        uStack_5e = 10000;
        uVar12 = false;
        uStack_5a = 0;
        uStack_5c = 0;
        uStack_56 = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        break;
      }
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar12) goto code_r0x00040f9e;
LAB_3ab8_6451:
      uVar10 = 0x22b2;
    } while( true );
  }
  local_98 = 0;
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  iVar5 = FUN_28b3_1181();
  if ((bool)uVar12) {
    if (param_2 == 0) {
      halt_baddata();
    }
    return iVar5;
  }
  uStack_50 = (int *)CONCAT11(*(undefined1 *)0xa6a,*(undefined1 *)0xa6c);
  piStack_4e = (int *)CONCAT11(piStack_4e._1_1_,*(undefined1 *)0xb310);
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b6d();
  func_0x00029983();
  local_c = (undefined2 *)0x1148;
  func_0x0000daa6();
  puVar7 = &uStack_8e;
  puVar6 = &uStack_6a;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    puVar14 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = *puVar14;
  }
  for (uStack_138 = local_136; uVar12 = uStack_138 == 0, 0 < (int)uStack_138;
      uStack_138 = uStack_138 - 1) {
    func_0x00029834();
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar12) {
      ppiVar8 = &piStack_26;
      puVar6 = &uStack_8e;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = ppiVar8;
        ppiVar8 = ppiVar8 + 1;
        puVar14 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = *puVar14;
      }
      piStack_2a = (int *)0x11b3;
      FUN_13bf_01c1();
      local_98 = local_98 + 1;
    }
  }
  iVar5 = func_0x0000abfa();
  local_150 = 0;
  if (param_2 != 0) {
    return iVar5;
  }
LAB_3ab8_6656:
  if (local_9e != (undefined2 *)0x1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  goto LAB_3ab8_58ed;
code_r0x00040f9e:
  puVar7 = &uStack_8e;
  puVar6 = &uStack_6a;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    puVar14 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = *puVar14;
  }
  uStack_73 = 9;
  uStack_138 = local_136;
  lVar15 = -1;
  while( true ) {
    if ((int)uStack_138 < 1) goto LAB_3ab8_6451;
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029d78();
    uVar10 = 0x22b2;
    lVar16 = FUN_28b3_0f51();
    if (lVar16 != lVar15) {
      ppiVar8 = &piStack_26;
      puVar6 = &uStack_8e;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = ppiVar8;
        ppiVar8 = ppiVar8 + 1;
        puVar14 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = *puVar14;
      }
      uVar10 = 0x11f2;
      piStack_2a = (int *)0x1038;
      func_0x00013e46();
    }
    *(undefined2 *)0xc20 = 1;
    *(undefined2 *)0xa4a = 1;
    *(undefined2 *)0xa48 = 2;
    local_c = &local_162;
    piStack_e = &iStack_c8;
    piStack_10 = aiStack_b4;
    piStack_14 = (int *)0x1078;
    piStack_12 = (int *)uVar10;
    iStack_c6 = func_0x00006608();
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xa4a = 0;
    *(undefined2 *)0xa48 = 0;
    uVar12 = *(int *)0x158 == 0;
    if (!(bool)uVar12) goto LAB_3ab8_5c7d;
    func_0x000297e6();
    func_0x000297e6();
    piVar9 = (int *)0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar12) break;
    func_0x000297e6();
    func_0x000297e6();
    piVar9 = (int *)0x22b2;
    FUN_28b3_1181();
    if (((!(bool)uVar12) || (iStack_c6 != 0)) || (local_b6 != (undefined2 *)0x0)) break;
    uStack_138 = uStack_138 - 1;
    lVar15 = lVar16;
  }
  goto LAB_3ab8_6556;
LAB_3ab8_51df:
  pcVar3 = (code *)swi(0x3f);
  iVar5 = (*pcVar3)();
  if (iVar5 == -1) goto LAB_3ab8_50e8;
  if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
  piStack_26 = (int *)*(undefined2 *)0x9660;
  piStack_24 = (int *)*(undefined2 *)0x9662;
  piStack_22 = piStack_26;
  uStack_20 = piStack_24;
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c2c();
  func_0x0002996b();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xfdbf;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xfdc4;
  func_0x0002a11e();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xfdf7;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xfdfc;
  func_0x0002a10c();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  local_b6 = (undefined2 *)0x0;
LAB_3ab8_529d:
  if (local_b6 != (undefined2 *)0x0) {
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xfe3f;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xfe48;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    piStack_12 = (int *)0xfe4d;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0xfe57;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    piVar9 = (int *)0x11f2;
    uStack_1a = 0xfe5c;
    lVar15 = FUN_13bf_39a0();
    uStack_b0 = lVar15;
    if (lVar15 == 0) goto LAB_3ab8_50e8;
    uVar12 = (int)((ulong)lVar15 >> 0x10) == 0;
    if (lVar15 < 0) {
      local_c = (int *)0xfe7e;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      local_c = (int *)0x11f2;
      piStack_e = (int *)0xfe92;
      FUN_1000_0599();
      local_c = (undefined2 *)0xfe9d;
      func_0x00012276();
LAB_3ab8_531d:
      piVar9 = (int *)0x11f2;
      goto LAB_3ab8_50e8;
    }
    local_c = (undefined2 *)0x11f2;
    piStack_e = (int *)0xfeab;
    puVar14 = (undefined2 *)func_0x0000013f();
    puVar6 = (undefined2 *)puVar14;
    ppiVar8 = &piStack_26;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      ppiVar2 = ppiVar8;
      ppiVar8 = ppiVar8 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *ppiVar2 = (int *)*puVar1;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar12) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar12) {
        local_c = (int *)0xfef4;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        local_c = (int *)0x11f2;
        piStack_e = (int *)0xff08;
        FUN_1000_0599();
        local_c = (undefined2 *)0xdef;
        piStack_e = (int *)0xff17;
        func_0x00012276();
        goto LAB_3ab8_531d;
      }
    }
  }
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xff2c;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xff34;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xff3e;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xff46;
  func_0x000297e6();
  uStack_20 = 0x22b2;
  piStack_22 = (int *)0xff50;
  func_0x000299d1();
  uStack_20 = 0x22b2;
  piStack_22 = (int *)0xff58;
  func_0x000297e6();
  piStack_2a = (int *)0xff62;
  func_0x000299d1();
  piStack_2a = (int *)0xff67;
  uStack_54 = FUN_1000_0718();
  if (iStack_ac == 0) {
LAB_2bb4_4927:
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
    local_c = (int *)0x32b2;
    piStack_e = (int *)0x5db;
    FUN_32b2_6cc6();
    local_c = (int *)0x32b2;
    piStack_e = (int *)0x5e0;
    FUN_32b2_7258();
    piStack_14 = (int *)0x32b2;
    uStack_16 = 0x5ea;
    FUN_32b2_6eb1();
    piStack_14 = (int *)0x32b2;
    uStack_16 = 0x5f2;
    FUN_32b2_6cc6();
    piStack_14 = (int *)0x32b2;
    uStack_16 = 0x5f7;
    FUN_32b2_7258();
    uStack_1c = 0x32b2;
    uStack_1e = 0x601;
    FUN_32b2_6eb1();
    uStack_1c = uStack_66;
    uStack_1e = uStack_68;
    uStack_20 = uStack_6a;
    piStack_22 = piStack_6c;
    piStack_24 = piStack_4a;
    piStack_26 = piStack_4c;
    piStack_2a = uStack_50;
    piStack_2e = (int *)0x622;
    FUN_32b2_6d14();
    local_44[8] = 0x32b2;
    local_44[7] = 0x62c;
    FUN_32b2_6eb1();
    local_44[8] = 0x32b2;
    local_44[7] = 0x635;
    FUN_32b2_6d14();
    local_44[4] = 0x32b2;
    local_44[3] = 0x63f;
    FUN_32b2_6eb1();
    local_44[4] = 0;
    local_44[3] = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
    local_44[2] = 0x646;
    func_0x0003fc09();
    iStack_88 = iStack_64;
    iStack_86 = iStack_62;
    uStack_a0 = uStack_8c;
    local_9e = (undefined2 *)uStack_8a;
    ppiVar8 = &piStack_2a;
    puVar6 = &stack0x001a;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar1 = ppiVar8;
      ppiVar8 = ppiVar8 + 1;
      puVar14 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = *puVar14;
    }
    piStack_2e = (int *)0x684;
    iVar5 = FUN_3ab8_522f();
    uVar12 = 0;
    uVar13 = iVar5 == 0;
    if (!(bool)uVar13) {
      FUN_32b2_6d14();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_7258();
      FUN_32b2_7191();
      if ((bool)uVar12 || (bool)uVar13) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if ((bool)uVar12 || (bool)uVar13) {
          piStack_be = (int *)*(undefined2 *)0x93c0;
          piStack_bc = (int *)*(undefined2 *)0x93c2;
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
    if ((bool)uVar12) {
      local_44[6] = 0;
    }
    else {
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_7191();
      if (!(bool)uVar12) {
        piStack_be = (int *)*(undefined2 *)0x93c0;
        piStack_bc = (int *)*(undefined2 *)0x93c2;
        uStack_ba = *(undefined2 *)0x93c4;
        uStack_b8 = *(undefined2 *)0x93c6;
      }
      local_c = piStack_bc;
      piStack_e = piStack_be;
      piStack_10 = (int *)0x32b2;
      piStack_12 = (int *)0x774;
      FUN_32b2_7592();
      local_c = (int *)0x77e;
      FUN_32b2_6d14();
      local_c = (int *)0x786;
      FUN_32b2_70dc();
      local_c = (int *)0x78e;
      FUN_32b2_6d14();
      local_c = (int *)0x797;
      FUN_32b2_710c();
      local_c = (int *)0x79c;
      FUN_32b2_7182();
      local_c = (int *)0x7a5;
      FUN_32b2_6e99();
      local_c = (int *)0x7ad;
      FUN_32b2_710c();
      local_c = (int *)0x7b5;
      FUN_32b2_7154();
      local_c = (int *)0x7be;
      FUN_32b2_6e99();
      local_c = (int *)0x7c7;
      FUN_32b2_6eb1();
      local_c = &iStack_64;
      piStack_e = (int *)0x32b2;
      piStack_10 = (int *)0x7d9;
      FUN_32b2_6cc6();
      piStack_e = (int *)0x32b2;
      piStack_10 = (int *)0x7de;
      FUN_32b2_7258();
      uStack_16 = 0x32b2;
      uStack_18 = 0x7e8;
      FUN_32b2_6eb1();
      uStack_16 = 0x32b2;
      uStack_18 = 0x7f0;
      FUN_32b2_6cc6();
      uStack_16 = 0x32b2;
      uStack_18 = 0x7f5;
      FUN_32b2_7258();
      uStack_1e = 0x32b2;
      uStack_20 = 0x7ff;
      FUN_32b2_6eb1();
      uStack_1e = uStack_66;
      uStack_20 = uStack_68;
      piStack_22 = (int *)uStack_6a;
      piStack_24 = piStack_6c;
      piStack_26 = piStack_4a;
      piStack_2a = piStack_4e;
      piStack_2e = (int *)0x32b2;
      local_44[10] = 0x820;
      FUN_32b2_6d14();
      local_44[7] = 0x32b2;
      local_44[6] = 0x82a;
      FUN_32b2_6eb1();
      local_44[7] = 0x32b2;
      local_44[6] = 0x833;
      FUN_32b2_6d14();
      local_44[3] = 0x32b2;
      local_44[2] = 0x83d;
      FUN_32b2_6eb1();
      local_44[3] = 0;
      local_44[2] = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      local_44[1] = 0x844;
      func_0x0003fc09();
      uVar12 = (undefined1 *)0xffc9 < local_44 + 3;
      uVar13 = &stack0x0000 == (undefined1 *)0x8;
      local_c = (int *)0x84f;
      FUN_32b2_6cc6();
      local_c = (int *)0x857;
      FUN_32b2_6cc6();
      local_c = (int *)0x85c;
      FUN_32b2_7191();
      if ((bool)uVar13) {
        iStack_64 = param_2;
        iStack_62 = param_3;
      }
      local_c = (int *)0x872;
      FUN_32b2_6cc6();
      local_c = (int *)0x87a;
      FUN_32b2_6cc6();
      local_c = (int *)0x87f;
      FUN_32b2_7191();
      if ((bool)uVar13) {
        uStack_8c = param_4;
        uStack_8a = param_5;
      }
      *in_stack_0000003a = iStack_64;
      in_stack_0000003a[1] = iStack_62;
      *in_stack_0000003c = uStack_8c;
      in_stack_0000003c[1] = uStack_8a;
      *in_stack_0000003e = iStack_64;
      in_stack_0000003e[1] = iStack_62;
      *in_stack_00000040 = uStack_8c;
      in_stack_00000040[1] = uStack_8a;
      local_44[6] = local_44[6] + 1;
      uVar13 = local_44[6] == 0;
      local_c = (int *)0x8d7;
      FUN_32b2_6d14();
      local_c = (int *)0x8e0;
      FUN_32b2_6d14();
      local_c = (int *)0x8e5;
      FUN_32b2_7191();
      if (!(bool)uVar12 && !(bool)uVar13) {
        local_c = (int *)uStack_ba;
        piStack_e = piStack_bc;
        piStack_10 = piStack_be;
        piStack_12 = (int *)0x32b2;
        piStack_14 = (int *)0x8ff;
        FUN_32b2_7592();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x909;
        FUN_32b2_6d14();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x911;
        FUN_32b2_7154();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x916;
        FUN_32b2_6fd6();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x91e;
        FUN_32b2_6d14();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x927;
        FUN_32b2_710c();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x92c;
        FUN_32b2_7182();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x935;
        FUN_32b2_6e99();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x93d;
        FUN_32b2_710c();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x945;
        FUN_32b2_7154();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x94e;
        FUN_32b2_6e99();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x957;
        FUN_32b2_6eb1();
        local_c = &uStack_8c;
        piStack_e = &iStack_64;
        piStack_10 = (int *)0x32b2;
        piStack_12 = (int *)0x969;
        FUN_32b2_6cc6();
        piStack_10 = (int *)0x32b2;
        piStack_12 = (int *)0x96e;
        FUN_32b2_7258();
        uStack_18 = 0x32b2;
        uStack_1a = 0x978;
        FUN_32b2_6eb1();
        uStack_18 = 0x32b2;
        uStack_1a = 0x980;
        FUN_32b2_6cc6();
        uStack_18 = 0x32b2;
        uStack_1a = 0x985;
        FUN_32b2_7258();
        uStack_20 = 0x32b2;
        piStack_22 = (int *)0x98f;
        FUN_32b2_6eb1();
        uStack_20 = uStack_66;
        piStack_22 = (int *)uStack_68;
        piStack_24 = (int *)uStack_6a;
        piStack_26 = piStack_6c;
        piStack_2a = piStack_4c;
        piStack_2e = uStack_50;
        local_44[10] = 0x32b2;
        local_44[9] = 0x9b0;
        FUN_32b2_6d14();
        local_44[6] = 0x32b2;
        local_44[5] = 0x9ba;
        FUN_32b2_6eb1();
        local_44[6] = 0x32b2;
        local_44[5] = 0x9c3;
        FUN_32b2_6d14();
        local_44[2] = 0x32b2;
        local_44[1] = 0x9cd;
        FUN_32b2_6eb1();
        local_44[2] = 0;
        local_44[1] = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
        local_44[0] = 0x9d4;
        func_0x0003fc09();
        uVar12 = &stack0x0000 == (undefined1 *)0xa;
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x9df;
        FUN_32b2_6cc6();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x9e7;
        FUN_32b2_6cc6();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0x9ec;
        FUN_32b2_7191();
        if ((bool)uVar12) {
          iStack_64 = param_2;
          iStack_62 = param_3;
        }
        local_c = (int *)0x32b2;
        piStack_e = (int *)0xa02;
        FUN_32b2_6cc6();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0xa0a;
        FUN_32b2_6cc6();
        local_c = (int *)0x32b2;
        piStack_e = (int *)0xa0f;
        FUN_32b2_7191();
        if ((bool)uVar12) {
          uStack_8c = param_4;
          uStack_8a = param_5;
        }
        *in_stack_0000003e = iStack_64;
        in_stack_0000003e[1] = iStack_62;
        *in_stack_00000040 = uStack_8c;
        in_stack_00000040[1] = uStack_8a;
        local_44[6] = local_44[6] + 1;
      }
    }
    return local_44[6];
  }
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xff8c;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xff94;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0xff9e;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0xffa6;
  func_0x000297e6();
  uStack_20 = 0x22b2;
  piStack_22 = (int *)0xffb0;
  func_0x000299d1();
  uStack_20 = 0x22b2;
  piStack_22 = (int *)0xffb8;
  func_0x000297e6();
  piStack_2a = (int *)0xffc2;
  func_0x000299d1();
  piStack_2a = (int *)0xffc7;
  FUN_1def_043a();
  *(undefined2 *)0xb30c = uStack_6a;
  *(undefined2 *)0xb30e = uStack_68;
  *(undefined2 *)0xb37e = uStack_66;
  *(int *)0xb380 = iStack_64;
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xfffc;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x5;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xa;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0x14;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0x1d;
  FUN_1def_05d1();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x4d;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x56;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x5b;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0x65;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0x6e;
  func_0x0001e558();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xd4;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xdd;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0xe2;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0xec;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0xf5;
  FUN_1def_05d1();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x125;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x12e;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  piStack_12 = (int *)0x133;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0x13d;
  func_0x000299d1();
  uStack_18 = 1;
  uStack_1a = 0x22b2;
  uStack_1c = 0x146;
  func_0x0001e558();
  uVar12 = (undefined1 *)0xffed < &uStack_18;
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299b9();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029834();
  func_0x00029bfc();
  func_0x000299b9();
  func_0x00029ae7();
  FUN_28b3_1181();
  if (!(bool)uVar12) {
    func_0x00029834();
    func_0x00029834();
    func_0x00029bfc();
    func_0x00029c44();
    func_0x000299b9();
    FUN_28b3_1181();
    if (!(bool)uVar12) {
      local_c = puStack_196;
      piStack_e = piStack_198;
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x238;
      FUN_28b3_1582();
      func_0x00029834();
      func_0x00029c2c();
      FUN_28b3_112c();
      func_0x00029c2c();
      func_0x00029c2c();
      func_0x00029c74();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x287;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      piStack_12 = (int *)0x28c;
      FUN_28b3_1582();
      uVar12 = (undefined1 *)0xfff7 < &piStack_e;
      uVar13 = &stack0x0000 == (undefined1 *)0x6;
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      uVar10 = (undefined2)uStack_54;
      if ((bool)uVar12) {
        iVar5 = uStack_54._2_2_ + 0x5a;
        local_c = (undefined2 *)0x22b2;
        piStack_e = (int *)0x2d2;
        func_0x00021eee();
        uStack_54._0_2_ = uVar10;
        uStack_54._2_2_ = iVar5;
        func_0x00029834();
        FUN_28b3_1c08();
        FUN_28b3_1177();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_112c();
        func_0x00029c2c();
        func_0x00029c2c();
        func_0x00029c74();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0x33e;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        piStack_12 = (int *)0x343;
        FUN_28b3_1582();
        uVar13 = &stack0x0000 == (undefined1 *)0x6;
      }
      uVar12 = (bool)uVar12 && (undefined1 *)0xfff7 < &piStack_e;
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      if (!(bool)uVar12) {
        func_0x00029834();
        func_0x00029834();
        FUN_28b3_1181();
        if ((bool)uVar12 || (bool)uVar13) {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029c74();
          lVar15 = FUN_28b3_0f51();
          iStack_1ac = (int)lVar15;
          if ((0x270e < lVar15) && (lVar15 < 0x2712)) {
            iStack_1ac = 10000;
          }
          uStack_5e = iStack_1ac;
          uStack_5a = 0;
          uStack_5c = 0;
          uStack_56 = 0;
          uStack_58 = 0;
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029834();
          func_0x0002996b();
          func_0x00029c9d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029da5();
          func_0x00029c9d();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x00029983();
          local_98 = 0;
          goto LAB_3ab8_58ed;
        }
      }
    }
  }
  *(undefined2 *)0xc22 = 1;
  local_c = (int *)0x22b2;
  piStack_e = (int *)0x1e0;
  FUN_1000_0599();
  local_c = (int *)0x1eb;
  func_0x00012276();
  halt_baddata();
}



/* 3ab8:4c91  FUN_3ab8_4c91  18 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x0003f73d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0003f73d) */
/* WARNING: Removing unreachable block (ram,0x000403b8) */
/* WARNING: Removing unreachable block (ram,0x000403c3) */

undefined2 __cdecl16far FUN_3ab8_4c91(void)

{
  int *piVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  int unaff_BP;
  undefined2 *puVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  long lVar17;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_28;
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
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  
  uVar7 = 0x3ab8;
code_r0x0003f811:
  if (*(char *)0xb782 == '\0') {
    *(undefined2 *)(unaff_BP + -0x16a) = 0x11;
    iStack_e = uVar7;
    while (*(int *)(unaff_BP + -0x16a) < 0x30) {
      iStack_a = *(undefined2 *)(unaff_BP + -0x16a);
      iStack_c = 1;
      iStack_10 = 0xf863;
      func_0x0000def0();
      *(int *)(unaff_BP + -0x16a) = *(int *)(unaff_BP + -0x16a) + 1;
      iStack_e = 0xdef;
    }
    iStack_a = 0x2950;
    iStack_c = unaff_BP + -0x42;
    iStack_10 = 0xf885;
    FUN_10ad_1928();
    iStack_a = 1;
    iStack_c = unaff_BP + -0x42;
    iStack_e = 0x11f2;
    iStack_10 = 0xf89d;
    FUN_1000_02b5();
    iStack_a = *(undefined2 *)0x1056;
    iStack_c = 0x295e;
    iStack_e = unaff_BP + -0x42;
    iStack_10 = 0xdef;
    uStack_12 = 0xf8bd;
    FUN_10ad_1928();
    iStack_a = 3;
    iStack_c = 1;
    iStack_e = unaff_BP + -0x42;
    iStack_10 = 0x11f2;
    uVar7 = 0xdef;
    uStack_12 = 0xf8d5;
    FUN_1000_02b5();
  }
LAB_3ab8_4d58:
  *(undefined2 *)0xc2c = 1;
  *(undefined2 *)0xc1a = 1;
  *(undefined2 *)0xc20 = 1;
  iStack_a = unaff_BP + -0x160;
  iStack_c = unaff_BP + -0x132;
  iStack_e = *(undefined2 *)(unaff_BP + -0x96);
  uStack_12 = 0xf901;
  iStack_10 = uVar7;
  uVar7 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0xc4) = uVar7;
  *(undefined2 *)0xc2c = 0;
  *(undefined2 *)0xc1a = 0;
  *(undefined2 *)0xc20 = 0;
  iVar10 = 0x885;
  func_0x0000abfa();
  if (*(int *)0x158 != 0) {
LAB_2bb4_569f_4:
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    iStack_e = 0x32b2;
    iStack_10 = 0x1205;
    FUN_32b2_6eb1();
    iStack_e = 1;
    iStack_10 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
    uStack_12 = 0x120d;
    func_0x0003fc09();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    uVar7 = *(undefined2 *)(unaff_BP + 0x12);
    uVar13 = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x5c) = 0;
    *(undefined2 *)(unaff_BP + -0x5e) = 0;
    *(undefined2 *)(unaff_BP + -0x60) = uVar7;
    FUN_32b2_7285();
    FUN_32b2_710c();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_6fc7();
    FUN_32b2_6cc6();
    FUN_32b2_6fc7();
    FUN_32b2_7191();
    if ((bool)uVar13) {
      FUN_32b2_6d14();
      FUN_32b2_6eb1();
      FUN_32b2_6d14();
      FUN_32b2_70dc();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_7124();
    }
    else {
      FUN_32b2_6d14();
      FUN_32b2_6e99();
      FUN_32b2_7124();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_713c();
      FUN_32b2_7173();
      FUN_32b2_710c();
    }
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    iStack_a = *(undefined2 *)(unaff_BP + -0x22);
    iStack_c = *(int *)(unaff_BP + -0x24);
    iStack_e = 0;
    iStack_10 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
    uStack_12 = 0x13b7;
    func_0x0003fc09();
    return 1;
  }
  if (*(int *)0xc18 == 0) {
    if (*(int *)(unaff_BP + -0xc4) == -1) {
      iStack_a = 0xf979;
      func_0x0000daa6();
      iStack_a = 0x885;
      while (0 < *(int *)(unaff_BP + -0x96)) {
        uVar7 = *(undefined2 *)0x14e;
        *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
        *(undefined2 *)(unaff_BP + -0x152) = uVar7;
        iStack_c = -0x66e;
        FUN_13bf_0327();
        *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
        iStack_a = 0x11f2;
      }
      iStack_a = -0x658;
      func_0x0000b1d8();
      iVar10 = 0x885;
      func_0x0000abfa();
    }
    else {
      if (*(int *)(unaff_BP + -0xc4) == 0x14) goto LAB_3ab8_4a7d;
      if (*(int *)(unaff_BP + -0xb4) != 0) {
        iStack_a = *(int *)(unaff_BP + -0xb4);
        iStack_c = 0x885;
        iVar10 = 0x11f2;
        iStack_e = 0xf9d5;
        iVar6 = func_0x00015409();
        if (iVar6 != 0) goto FUN_3ab8_4e5f;
      }
    }
  }
  else {
    *(undefined2 *)(unaff_BP + -0x96) = 0;
    func_0x000297e6();
    func_0x00029d78();
    iStack_e = 0x22b2;
    iStack_10 = 0xf947;
    func_0x000299d1();
    iStack_e = 0x22b2;
    iStack_10 = 0xf950;
    func_0x000297e6();
    iStack_e = 0x22b2;
    iStack_10 = 0xf955;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    uStack_18 = 0xf95f;
    func_0x000299d1();
    uStack_16 = 0x22b2;
    iVar10 = 0x3bf;
    uStack_18 = 0xf964;
    func_0x0000507a();
  }
LAB_3ab8_4baf:
  if ((*(int *)(unaff_BP + -0x9c) != 0) && (*(int *)(unaff_BP + -0x9c) != 2)) {
FUN_3ab8_4e5f:
    if (*(int *)(unaff_BP + -0x9c) == -1) {
      *(undefined2 *)(unaff_BP + -0x9c) = 0;
    }
    if (*(int *)(unaff_BP + -0x9c) != 1) {
      uVar7 = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x168);
      *(undefined2 *)(unaff_BP + -0x62) = uVar7;
      func_0x000297e6();
      func_0x0002996b();
      iVar10 = 0x22b2;
      func_0x00029983();
      uVar7 = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)(unaff_BP + -0x168);
      *(undefined2 *)(unaff_BP + -0x162) = uVar7;
      *(undefined2 *)(unaff_BP + -0x14e) = 1;
    }
LAB_3ab8_4eb1:
    *(undefined2 *)(unaff_BP + -0xaa) = 0;
    if (0 < *(int *)(unaff_BP + -0x9c)) {
      if (*(int *)(unaff_BP + -0x9c) == 1) {
        func_0x000297e6();
        func_0x0002996b();
        iVar10 = 0x22b2;
        func_0x00029983();
      }
      else {
        uVar7 = *(undefined2 *)0x1054;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0x1052;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar7;
        uVar7 = *(undefined2 *)0x1058;
        *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x1056;
        *(undefined2 *)(unaff_BP + -0x8e) = uVar7;
      }
      iStack_a = *(int *)(unaff_BP + -0x9c);
      iStack_e = 0xfa91;
      iStack_c = iVar10;
      iVar6 = FUN_3ab8_4671();
      *(int *)(unaff_BP + -0x44) = iVar6;
      if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
      if ((iVar6 == -1) && (*(int *)(unaff_BP + -0x9c) == 1)) goto LAB_3ab8_4a7d;
      if (iVar6 == -1) goto LAB_3ab8_4baf;
      if ((iVar6 == 0) && (*(int *)(unaff_BP + -0x9c) == 1)) goto code_r0x0003fac3;
      if ((iVar6 == 0) && (*(int *)(unaff_BP + -0x9c) == 2)) {
        do {
          *(undefined2 *)(unaff_BP + -0xaa) = 1;
          do {
            do {
              iStack_a = 0x296c;
              iStack_c = unaff_BP + -0x132;
              iStack_10 = 0xfaf9;
              iStack_e = iVar10;
              FUN_21f2_3454();
              iStack_a = unaff_BP + -0xca;
              iStack_c = unaff_BP + -0x132;
              *(undefined2 *)0xc20 = 1;
              iStack_e = 1;
              iStack_10 = 0x22b2;
              iVar10 = 0x1bb4;
              uStack_12 = 0xfb1c;
              iVar6 = FUN_1def_0904();
              *(int *)(unaff_BP + -0xc4) = iVar6;
              *(undefined2 *)0xc20 = 0;
              if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
              if (iVar6 == -1) goto LAB_3ab8_4baf;
            } while (*(int *)(unaff_BP + -0xb4) == 0);
            iStack_a = *(undefined2 *)(unaff_BP + -0xb4);
            iStack_c = 0x1bb4;
            iVar10 = 0x11f2;
            iStack_e = 0xfb55;
            iVar6 = func_0x00015409();
          } while (iVar6 == 0);
          while( true ) {
            iStack_a = 0x2978;
            iStack_c = unaff_BP + -0x132;
            iStack_10 = 0xfb72;
            iStack_e = iVar10;
            FUN_21f2_3454();
            iStack_a = unaff_BP + -0x13a;
            iStack_c = unaff_BP + -0x132;
            *(undefined2 *)0xc20 = 1;
            iStack_e = 1;
            iStack_10 = 0x22b2;
            iVar10 = 0x1bb4;
            uStack_12 = 0xfb95;
            iVar6 = FUN_1def_0904();
            *(int *)(unaff_BP + -0xc4) = iVar6;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
            if (iVar6 == -1) break;
            if (*(int *)(unaff_BP + -0xb4) != 0) {
              iStack_a = *(int *)(unaff_BP + -0xb4);
              iStack_c = 0x1bb4;
              iVar10 = 0x11f2;
              iStack_e = 0xfbce;
              iVar6 = func_0x00015409();
              if (iVar6 != 0) goto LAB_3ab8_50e8;
            }
          }
        } while( true );
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b9d();
      iVar10 = 0x22b2;
      func_0x00029983();
      *(undefined2 *)(unaff_BP + -0x5c) = 10000;
      *(undefined2 *)(unaff_BP + -0x58) = 0;
      *(undefined2 *)(unaff_BP + -0x5a) = 0;
      *(undefined2 *)(unaff_BP + -0x54) = 0;
      *(undefined2 *)(unaff_BP + -0x56) = 0;
      *(undefined2 *)(unaff_BP + -0x50) = 0;
      *(undefined2 *)(unaff_BP + -0x52) = 0;
      if (*(int *)(unaff_BP + -0x9c) == 1) {
        uVar7 = *(undefined2 *)(unaff_BP + -0x6a);
        *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
        *(undefined2 *)0x1050 = uVar7;
      }
      else {
        uVar7 = *(undefined2 *)(unaff_BP + -0x8e);
        *(undefined2 *)0x1056 = *(undefined2 *)(unaff_BP + -0x90);
        *(undefined2 *)0x1058 = uVar7;
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029b9d();
        func_0x00029b6d();
        func_0x00029d78();
        iVar10 = 0x22b2;
        uVar7 = FUN_28b3_0f51();
        *(undefined2 *)(unaff_BP + -0x5c) = uVar7;
      }
    }
LAB_3ab8_50e8:
    if (*(int *)(unaff_BP + -0x9c) != 2) goto LAB_2bb4_4927;
    *(undefined2 *)(unaff_BP + -0x134) = 1;
    uVar7 = *(undefined2 *)0x9660;
    uVar11 = *(undefined2 *)0x9662;
    *(undefined2 *)(unaff_BP + -0x24) = uVar7;
    *(undefined2 *)(unaff_BP + -0x22) = uVar11;
    *(undefined2 *)(unaff_BP + -0x20) = uVar7;
    *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
    uVar7 = *(undefined2 *)0x9676;
    *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)0x9674;
    *(undefined2 *)(unaff_BP + -0x1a) = uVar7;
    uVar7 = *(undefined2 *)0x9662;
    *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)0x9660;
    *(undefined2 *)(unaff_BP + -0x16) = uVar7;
    iStack_c = -0x341;
    iStack_a = iVar10;
    FUN_21f2_3454();
    iStack_a = 0x22b2;
    iStack_c = -0x331;
    FUN_21f2_2d26();
    iStack_a = 0x22b2;
    iStack_c = -0x321;
    FUN_21f2_2d26();
    iStack_a = 0x22b2;
    iStack_c = -0x311;
    FUN_21f2_2d26();
    iStack_a = 0x22b2;
    iStack_c = -0x301;
    FUN_21f2_2d26();
    iStack_a = 0x22b2;
    iStack_c = -0x2f1;
    FUN_21f2_2d26();
    iStack_a = 0x22b2;
    iStack_c = -0x2e1;
    FUN_1def_07a4();
    iStack_a = unaff_BP + -0x160;
    iStack_c = unaff_BP + -0x132;
    iStack_e = 1;
    iStack_10 = 0x1bb4;
    iVar10 = 0x1bb4;
    uStack_12 = 0xfd3e;
    iVar6 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x16a) = iVar6;
    if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
    if (iVar6 != -1) {
      if (iVar6 == 1) goto LAB_3ab8_51df;
      goto LAB_3ab8_529d;
    }
    goto LAB_3ab8_4eb1;
  }
  *(undefined2 *)(unaff_BP + -0x134) = 1;
  func_0x0000c340();
  iStack_a = 0x885;
  iStack_c = -0x8a7;
  FUN_21f2_3454();
  if (*(int *)(unaff_BP + -0x9c) == 2) {
    iStack_a = 0x22b2;
    iStack_c = -0x890;
    FUN_21f2_2d26();
  }
  iStack_a = 0x22b2;
  iStack_c = -0x880;
  FUN_21f2_2d26();
  iStack_a = 0x22b2;
  iStack_c = -0x870;
  FUN_21f2_2d26();
  iStack_a = 0x22b2;
  iStack_c = -0x860;
  FUN_21f2_2d26();
  iStack_a = 0x22b2;
  iStack_c = -0x850;
  FUN_21f2_2d26();
  FUN_21f2_2d26();
  if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x96) != 0)) {
    iStack_a = 0x2943;
    iStack_c = unaff_BP + -0x42;
    iStack_e = 0x22b2;
    iStack_10 = 0xf7ed;
    FUN_10ad_1928();
    iStack_a = 0xf7fe;
    FUN_21f2_2d26();
  }
  uVar7 = 0x22b2;
  if ((*(int *)(unaff_BP + -0x9c) != 2) || (*(int *)(unaff_BP + -0x96) == 0)) goto LAB_3ab8_4d58;
  goto code_r0x0003f811;
LAB_3ab8_4a7d:
  uVar7 = *(undefined2 *)0x9662;
  *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)0x9660;
  *(undefined2 *)(unaff_BP + -0x92) = uVar7;
  *(undefined2 *)(unaff_BP + -0x96) = 0;
  *(undefined2 *)(unaff_BP + -0x14e) = 0;
  while (*(int *)(unaff_BP + 6) == 0) {
    iStack_c = -0x9d3;
    iStack_a = iVar10;
    func_0x00024c86();
    iStack_a = 0x22b2;
    iStack_c = -0x9c3;
    FUN_21f2_2d26();
    iStack_a = 0x22b2;
    iStack_c = -0x9b3;
    FUN_21f2_2d26();
    iStack_a = 0x22b2;
    iStack_c = -0x9a3;
    FUN_21f2_2d26();
    iStack_a = 0x22b2;
    iStack_c = -0x993;
    FUN_21f2_2d26();
    iStack_a = 0x22b2;
    iStack_c = -0x983;
    FUN_1def_07a4();
    func_0x0000c340();
    *(undefined2 *)0xc1a = 1;
    *(undefined2 *)0xc20 = 1;
    iStack_a = unaff_BP + -0x160;
    iStack_c = unaff_BP + -0x132;
    iStack_e = 0;
    iStack_10 = 0x885;
    uStack_12 = 0xf6a9;
    uVar7 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
    if (*(int *)0xc18 == 0) {
      if (*(int *)(unaff_BP + -0xb4) != 0) {
        iStack_a = *(int *)(unaff_BP + -0xb4);
        iStack_c = 0x1bb4;
        iVar10 = 0x11f2;
        iStack_e = 0xf71f;
        iVar6 = func_0x00015409();
        if (iVar6 != 0) {
          *(undefined2 *)(unaff_BP + -0x9c) = 0xffff;
          break;
        }
      }
      uVar7 = FUN_3ab8_4ca3();
      return uVar7;
    }
    *(undefined2 *)(unaff_BP + -0x96) = 0;
    func_0x000297e6();
    func_0x00029d78();
    iStack_e = 0x22b2;
    iStack_10 = 0xf6e3;
    func_0x000299d1();
    iStack_e = 0x22b2;
    iStack_10 = 0xf6ec;
    func_0x000297e6();
    iStack_e = 0x22b2;
    iStack_10 = 0xf6f1;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    uStack_18 = 0xf6fb;
    func_0x000299d1();
    uStack_16 = 0x22b2;
    iVar10 = 0x3bf;
    uStack_18 = 0xf700;
    func_0x0000507a();
  }
  goto LAB_3ab8_4baf;
code_r0x0003fac3:
  *(undefined2 *)(unaff_BP + -0x9c) = 0;
  goto LAB_3ab8_4baf;
LAB_3ab8_58ed:
  if ((*(int *)(unaff_BP + -0x9c) == 0) ||
     (uVar13 = *(int *)(unaff_BP + -0x9c) == 0, *(int *)(unaff_BP + -0x9c) == 1)) {
    func_0x0000c340();
    *(undefined2 *)0xc24 = 1;
    iStack_a = 0;
    iStack_c = 0;
    iStack_e = 0x885;
    iStack_10 = 0x49b;
    func_0x0000a76b();
    iStack_a = 0x4ba;
    func_0x00012276();
    iStack_a = 0x11f2;
    iStack_c = 0x4c8;
    func_0x00012276();
    func_0x00010526();
    iStack_a = 0xdef;
    iStack_c = 0x4dc;
    FUN_1000_0599();
    *(uint *)(unaff_BP + -0x134) = (uint)*(byte *)0x2a0f;
    if (*(int *)0xce6 != 0) {
      *(undefined2 *)(unaff_BP + -0x134) = 1;
    }
    iStack_a = 0xdef;
    uVar7 = 0x11f2;
    iStack_c = 0x501;
    func_0x00012276();
    if (*(int *)0xce6 != 0) {
      iStack_a = 1;
      iStack_c = 0x40;
      iStack_e = 0x29db;
      iStack_10 = 0x11f2;
      uVar7 = 0xdef;
      uStack_12 = 0x522;
      FUN_1000_02b5();
    }
    if (*(int *)(unaff_BP + -0x134) != 1) {
      iStack_c = 0x539;
      iStack_a = uVar7;
      FUN_1000_0599();
      uVar7 = 0x11f2;
      iStack_a = 0x544;
      func_0x00012276();
    }
    iStack_a = *(undefined2 *)0x962a;
    iStack_c = *(int *)0x9628;
    iStack_e = *(undefined2 *)0x9626;
    iStack_10 = *(undefined2 *)0x9624;
    uStack_12 = *(undefined2 *)0x962a;
    uStack_14 = *(undefined2 *)0x9628;
    uStack_16 = *(undefined2 *)0x9626;
    uStack_18 = *(undefined2 *)0x9624;
    uStack_1a = *(undefined2 *)0x9692;
    uStack_1c = *(undefined2 *)0x9690;
    uStack_1e = *(undefined2 *)0x968e;
    uStack_20 = *(undefined2 *)0x968c;
    uStack_22 = 0;
    uStack_24 = 7;
    uStack_28 = *(undefined2 *)0x96e4;
    uStack_2c = *(undefined2 *)0x96e0;
    uStack_2e = *(undefined2 *)0x96ee;
    uStack_30 = *(undefined2 *)0x96ec;
    uStack_32 = *(undefined2 *)0x96ea;
    uStack_34 = *(undefined2 *)0x96e8;
    uStack_36 = *(undefined2 *)0x96f6;
    uStack_38 = *(undefined2 *)0x96f4;
    uStack_3a = *(undefined2 *)0x96f2;
    uStack_3c = *(undefined2 *)0x96f0;
    uVar11 = 0xdef;
    func_0x0000fd9f(uVar7);
    *(undefined2 *)(unaff_BP + -0x150) = 0;
    *(undefined2 *)(unaff_BP + -0x14c) = 0;
    if (*(int *)(unaff_BP + -0x9c) == 1) {
      *(undefined2 *)(unaff_BP + -0x1b2) = 2;
      if ((*(char *)0x2a0e == '\0') || (3 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 5) || (7 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1a6) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1a6) = 1;
      }
      *(int *)(unaff_BP + -0x14c) = *(int *)(unaff_BP + -0x1aa) + *(int *)(unaff_BP + -0x1a6);
      if ((*(byte *)0x2a0e < 3) || (5 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x19e) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x19e) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 7) && (*(char *)0x2a0e != '\x01')) {
        *(undefined2 *)(unaff_BP + -0x196) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x196) = 1;
      }
      iStack_a = *(undefined2 *)0x962a;
      iStack_c = *(int *)0x9628;
      iStack_e = *(undefined2 *)0x9626;
      iStack_10 = *(undefined2 *)0x9624;
      uStack_12 = *(undefined2 *)0x962a;
      uStack_14 = *(undefined2 *)0x9628;
      uStack_16 = *(undefined2 *)0x9626;
      uStack_18 = *(undefined2 *)0x9624;
      uStack_1a = *(undefined2 *)0x9692;
      uStack_1c = *(undefined2 *)0x9690;
      uStack_1e = *(undefined2 *)0x968e;
      uStack_20 = *(undefined2 *)0x968c;
      uStack_22 = 3;
      uStack_24 = *(undefined2 *)(unaff_BP + -0x1b2);
      uStack_28 = *(undefined2 *)0x9640;
      uStack_2c = *(undefined2 *)0x963c;
      iVar10 = *(int *)(unaff_BP + -0x19e) + *(int *)(unaff_BP + -0x196);
      *(int *)(unaff_BP + -0x150) = iVar10;
      *(int *)(unaff_BP + -0x18e) = -(iVar10 * 5 + -8);
      uStack_2e = 0xdef;
      uStack_30 = 0x6ba;
      FUN_28b3_0d8b();
      uStack_36 = 0x22b2;
      uStack_38 = 0x6c4;
      func_0x000299d1();
      *(int *)(unaff_BP + -0x186) = (*(int *)(unaff_BP + -0x14c) + 0x5e) * 5;
      uStack_36 = 0x22b2;
      uStack_38 = 0x6dd;
      FUN_28b3_0d8b();
      uVar11 = 0x22b2;
      func_0x000299d1(0x22b2);
    }
    else {
      *(undefined2 *)(unaff_BP + -0x1b2) = 7;
      if (*(char *)0x2a0e != '\0') goto LAB_3ab8_5be8;
      iStack_a = *(undefined2 *)0x962a;
      iStack_c = *(int *)0x9628;
      iStack_e = *(undefined2 *)0x9626;
      iStack_10 = *(undefined2 *)0x9624;
      uStack_12 = *(undefined2 *)0x962a;
      uStack_14 = *(undefined2 *)0x9628;
      uStack_16 = *(undefined2 *)0x9626;
      uStack_18 = *(undefined2 *)0x9624;
      uStack_1a = *(undefined2 *)0x9692;
      uStack_1c = *(undefined2 *)0x9690;
      uStack_1e = *(undefined2 *)0x968e;
      uStack_20 = *(undefined2 *)0x968c;
      uStack_22 = 3;
      uStack_24 = 7;
      uStack_28 = *(undefined2 *)0x9640;
      uStack_2c = *(undefined2 *)0x963c;
      uStack_2e = *(undefined2 *)0x96ee;
      uStack_30 = *(undefined2 *)0x96ec;
      uStack_32 = *(undefined2 *)0x96ea;
      uStack_34 = *(undefined2 *)0x96e8;
      uStack_36 = *(undefined2 *)0x96f6;
      uStack_38 = *(undefined2 *)0x96f4;
      uStack_3a = *(undefined2 *)0x96f2;
      uStack_3c = *(undefined2 *)0x96f0;
    }
    func_0x0000fd9f(uVar11);
LAB_3ab8_5be8:
    uVar12 = 0x885;
    func_0x0000a799();
    uVar7 = *(undefined2 *)0x96f8;
    uVar11 = *(undefined2 *)0x96fa;
    *(undefined2 *)(unaff_BP + -0xca) = uVar7;
    *(undefined2 *)(unaff_BP + -200) = uVar11;
    *(undefined2 *)(unaff_BP + -0x13e) = uVar7;
    *(undefined2 *)(unaff_BP + -0x13c) = uVar11;
    *(undefined2 *)(unaff_BP + -0x5c) = 10000;
    *(undefined2 *)(unaff_BP + -0x58) = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = 0;
    *(undefined2 *)(unaff_BP + -0x50) = 0;
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
    *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
LAB_3ab8_5c29:
    do {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xa48 = 3;
      if (*(int *)(unaff_BP + -0x134) != 1) {
        *(undefined2 *)0xa48 = 4;
      }
      iStack_a = unaff_BP + -0x160;
      iStack_c = unaff_BP + -0xc6;
      iStack_e = unaff_BP + -0xb2;
      iVar10 = 0x3bf;
      uStack_12 = 0x7e2;
      iStack_10 = uVar12;
      uVar7 = func_0x00006608();
      *(undefined2 *)(unaff_BP + -0xc4) = uVar7;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(int *)0x158 != 0) {
LAB_3ab8_5c7d:
        func_0x00013e19();
LAB_3ab8_5c82:
        iStack_a = 0x80a;
        func_0x0000daa6();
        uVar7 = func_0x0000abfa();
        return uVar7;
      }
LAB_3ab8_6556:
      if (*(int *)(unaff_BP + -0xc4) == -1) {
        uVar7 = func_0x00013e19();
        if (*(int *)(unaff_BP + 6) != 0) {
          return uVar7;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x96) != 0)) {
          iStack_a = 0x1107;
          func_0x0000daa6();
          iStack_a = 0x885;
          while (0 < *(int *)(unaff_BP + -0x96)) {
            uVar7 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x152) = uVar7;
            iStack_c = 0x829;
            FUN_13bf_0327();
            *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
            iStack_a = 0x11f2;
          }
          iStack_a = 0x83f;
          func_0x0000b1d8();
        }
        iStack_a = 0x848;
        func_0x0000daa6();
        func_0x0000abfa();
        goto LAB_3ab8_6656;
      }
      if (*(int *)(unaff_BP + -0xc4) == 99) goto LAB_3ab8_58ed;
      *(undefined2 *)(unaff_BP + -0x1ba) = 0;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) {
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        if (*(int *)(unaff_BP + -0xb2) < 0x125) goto LAB_3ab8_58ed;
        *(int *)(unaff_BP + -0xc4) = (*(int *)(unaff_BP + -0xb2) + -0x124) / 0x60 + 0x31;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x31) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        uVar7 = *(undefined2 *)0x104e;
        uVar11 = *(undefined2 *)0x1050;
        *(undefined2 *)(unaff_BP + -0x6c) = uVar7;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
        *(undefined2 *)(unaff_BP + -0x90) = uVar7;
        *(undefined2 *)(unaff_BP + -0x8e) = uVar11;
        iStack_a = 1;
        iStack_c = 0x11f2;
        iStack_e = 0x8d1;
        iVar10 = FUN_4375_baa1();
        *(int *)(unaff_BP + -0x44) = iVar10;
        if (*(int *)0x158 != 0) goto LAB_3ab8_5c82;
        if (iVar10 == -1) goto LAB_3ab8_58ed;
        if (iVar10 == 0) {
          if (*(int *)(unaff_BP + -0x9c) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(unaff_BP + -0x9c) = 0;
          goto LAB_3ab8_58ed;
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        iVar10 = 0x22b2;
        func_0x00029983();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        uVar7 = *(undefined2 *)(unaff_BP + -0x6a);
        *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
        *(undefined2 *)0x1050 = uVar7;
        *(undefined2 *)(unaff_BP + -0x9c) = 1;
        if (*(int *)(unaff_BP + -0x14e) == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x14e) = 0;
        uVar7 = *(undefined2 *)(unaff_BP + -0x15a);
        *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x15c);
        *(undefined2 *)(unaff_BP + -0x15e) = uVar7;
        uVar7 = *(undefined2 *)(unaff_BP + -0x162);
        *(undefined2 *)(unaff_BP + -0x168) = *(undefined2 *)(unaff_BP + -0x164);
        *(undefined2 *)(unaff_BP + -0x166) = uVar7;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
        uVar7 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar7;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x32) {
        bVar2 = *(byte *)0x2a0e;
        *(uint *)(unaff_BP + -0x1b2) = (uint)bVar2;
        if (*(char *)0x15b == '\x02') {
          *(int *)(unaff_BP + -0x1b2) = bVar2 - 1;
        }
        else {
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (8 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (1 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 8;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 1;
        }
        *(undefined1 *)0x2a0e = *(undefined1 *)(unaff_BP + -0x1b2);
        goto LAB_3ab8_58ed;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x33) {
        if (*(int *)0xce6 != 0) {
          uVar7 = func_0x00013e19();
          *(undefined2 *)0xce6 = 0x14;
          return uVar7;
        }
        *(char *)0x2a0f = *(char *)0x2a0f + '\x01';
        if (10 < *(byte *)0x2a0f) {
LAB_3ab8_5eb7:
          *(undefined1 *)0x2a0f = 1;
        }
        goto LAB_3ab8_58ed;
      }
      if ((*(int *)0xce6 == 0) && (*(int *)(unaff_BP + -0xc4) == 0x34)) goto LAB_3ab8_5eb7;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc4) == 100)) {
        uVar7 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar7;
        iStack_a = *(int *)(unaff_BP + -0xb4);
        iStack_e = 0xa7d;
        iStack_c = iVar10;
        iVar10 = func_0x00015409();
        if (iVar10 == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
      }
      uVar13 = *(char *)0x15a == '\0';
      if (!(bool)uVar13) goto LAB_3ab8_58ed;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        func_0x000297e6();
        func_0x000297e6();
        uVar12 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar13) goto LAB_3ab8_5c29;
      }
      uVar7 = *(undefined2 *)(unaff_BP + -0x15e);
      *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)(unaff_BP + -0x160);
      *(undefined2 *)(unaff_BP + -200) = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x13e) = *(undefined2 *)(unaff_BP + -0x168);
      *(undefined2 *)(unaff_BP + -0x13c) = uVar7;
      uVar12 = 0x11f2;
      func_0x00013e19();
      if ((((*(int *)(unaff_BP + -0xb2) < *(int *)0xa5c) ||
           (*(int *)0xa60 < *(int *)(unaff_BP + -0xc6))) ||
          (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) && (*(int *)(unaff_BP + -0x1ba) == 0))
      goto LAB_3ab8_5c29;
      *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
      if (*(int *)(unaff_BP + -0x9c) == 0) {
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_117c();
        iStack_e = 0x22b2;
        iStack_10 = 0xbcb;
        func_0x000299d1();
        iStack_e = 0x22b2;
        iStack_10 = 0xbd0;
        FUN_28b3_1582();
        func_0x00029834();
        func_0x00029983();
        if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0xb4) != 2)) {
          puVar8 = (undefined2 *)func_0x0000c4c4();
          uVar7 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x1b2) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x1b0) = uVar7;
          func_0x000297e6();
          iStack_a = 0xc1a;
          func_0x00029b9d();
          func_0x00029983();
          if (*(char *)0x2a0e == '\0') {
            func_0x000297e6();
            iStack_a = 0xc3a;
            func_0x00029b6d();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029c74();
          uVar16 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x1aa) = (int)uVar16;
          *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)uVar16 >> 0x10);
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029983();
        }
        if (*(char *)0x2a0e != '\0') {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          iStack_a = 0xce8;
          func_0x00029b6d();
          func_0x00029983();
        }
      }
      else {
        if (*(int *)0xcb6 == 0) {
          uVar7 = *(undefined2 *)0x965e;
          *(undefined2 *)0xb76a = *(undefined2 *)0x965c;
          *(undefined2 *)0xb76c = uVar7;
          uVar7 = *(undefined2 *)0x9660;
          uVar11 = *(undefined2 *)0x9662;
        }
        else {
          uVar7 = *(undefined2 *)0xcbc;
          *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
          *(undefined2 *)0xb76c = uVar7;
          uVar7 = *(undefined2 *)0xcbe;
          uVar11 = *(undefined2 *)0xcc0;
        }
        *(undefined2 *)0xb784 = uVar7;
        *(undefined2 *)0xb786 = uVar11;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        if (*(char *)0x2a0e != '\0') {
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029b6d();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          iStack_e = 0x22b2;
          iStack_10 = 0xdba;
          func_0x000299d1();
          iStack_e = 0x22b2;
          iStack_10 = 0xdc3;
          FUN_28b3_0d8b();
          iStack_e = 0x22b2;
          iStack_10 = 0xdcc;
          func_0x0002996b();
          iStack_e = 0x22b2;
          iStack_10 = 0xdd4;
          func_0x00029b6d();
          iStack_e = 0x22b2;
          iStack_10 = 0xdd9;
          func_0x00029af6();
          iStack_e = 0x22b2;
          iStack_10 = 0xdde;
          func_0x00029d78();
          iStack_e = 0x22b2;
          iStack_10 = 0xde7;
          func_0x000299b9();
          uStack_16 = 0x22b2;
          uStack_18 = 0xdf1;
          func_0x000299d1();
          uStack_16 = 0;
          uStack_18 = 0x22b2;
          uStack_1a = 0xdf9;
          puVar8 = (undefined2 *)FUN_1def_05d1();
          uVar7 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x68) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x66) = uVar7;
          func_0x00029834();
          iStack_e = 0x22b2;
          iStack_10 = 0xe1c;
          func_0x000299d1();
          iStack_e = 0x22b2;
          iStack_10 = 0xe25;
          func_0x00029834();
          uStack_16 = 0x22b2;
          uStack_18 = 0xe2f;
          func_0x000299d1();
          uStack_16 = 0;
          uStack_18 = 0x22b2;
          uStack_1a = 0xe37;
          puVar8 = (undefined2 *)func_0x0001e558();
          uVar7 = puVar8[1];
          *(undefined2 *)(unaff_BP + -100) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x62) = uVar7;
        }
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b6d();
      func_0x00029983();
      if (*(char *)0xb782 == '\0') {
        *(undefined2 *)(unaff_BP + -0x1b2) = 0x11;
        uStack_12 = 0x22b2;
        do {
          iStack_a = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_c = *(int *)0xa58 + -1;
          iStack_e = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_10 = 1;
          uStack_14 = 0xe98;
          func_0x0000def0();
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
          uStack_12 = 0xdef;
        } while (*(int *)(unaff_BP + -0x1b2) < 0x30);
        iStack_a = *(undefined2 *)(unaff_BP + -0x92);
        iStack_c = *(int *)(unaff_BP + -0x94);
        iStack_e = 0x29ed;
        iStack_10 = unaff_BP + -0x42;
        uStack_12 = 0xdef;
        uStack_14 = 0xec3;
        FUN_10ad_1928();
        iStack_a = 0;
        iStack_c = 2;
        iStack_e = 1;
        iStack_10 = unaff_BP + -0x42;
        uStack_12 = 0x11f2;
        uStack_14 = 0xedb;
        FUN_1000_02b5();
        iStack_a = *(undefined2 *)0x9660;
        iStack_c = 0xdef;
        iStack_e = 0xeef;
        func_0x000297e6();
        iStack_c = 0x22b2;
        iStack_e = 0xef8;
        func_0x00029b6d();
        iStack_10 = 0x22b2;
        uStack_12 = 0xf02;
        func_0x00029983();
        iStack_c = 0x29fb;
        iStack_e = unaff_BP + -0x42;
        iStack_10 = 0x22b2;
        uStack_12 = 0xf0f;
        FUN_10ad_1928();
        iStack_a = 3;
        iStack_c = 1;
        iStack_e = unaff_BP + -0x42;
        iStack_10 = 0x11f2;
        uStack_12 = 0xf27;
        FUN_1000_02b5();
      }
      uVar13 = 0;
      if (*(int *)(unaff_BP + -0x1ba) != 0) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        uVar13 = false;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        break;
      }
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar13) goto code_r0x00040f9e;
LAB_3ab8_6451:
      uVar12 = 0x22b2;
    } while( true );
  }
  *(undefined2 *)(unaff_BP + -0x96) = 0;
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  uVar7 = FUN_28b3_1181();
  if ((bool)uVar13) {
    if (*(int *)(unaff_BP + 6) == 0) {
      halt_baddata();
    }
    return uVar7;
  }
  *(undefined1 *)(unaff_BP + -0x4d) = *(undefined1 *)0xa6a;
  *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
  *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b6d();
  func_0x00029983();
  iStack_a = 0x1148;
  func_0x0000daa6();
  puVar9 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while (uVar13 = *(int *)(unaff_BP + -0x136) == 0, 0 < *(int *)(unaff_BP + -0x136)) {
    func_0x00029834();
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      puVar9 = &uStack_24;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uStack_28 = 0x11b3;
      FUN_13bf_01c1();
      *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + 1;
    }
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  uVar7 = func_0x0000abfa();
  *(undefined2 *)(unaff_BP + -0x14e) = 0;
  if (*(int *)(unaff_BP + 6) != 0) {
    return uVar7;
  }
LAB_3ab8_6656:
  if (*(int *)(unaff_BP + -0x9c) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  goto LAB_3ab8_58ed;
code_r0x00040f9e:
  *(undefined2 *)(unaff_BP + -0x1b2) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x1b0) = 0xffff;
  puVar9 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined1 *)(unaff_BP + -0x71) = 9;
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while( true ) {
    if (*(int *)(unaff_BP + -0x136) < 1) goto LAB_3ab8_6451;
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029d78();
    uVar7 = 0x22b2;
    uVar16 = FUN_28b3_0f51();
    iVar10 = (int)((ulong)uVar16 >> 0x10);
    *(int *)(unaff_BP + -0x1aa) = (int)uVar16;
    *(int *)(unaff_BP + -0x1a8) = iVar10;
    if (((int)uVar16 != *(int *)(unaff_BP + -0x1b2)) || (iVar10 != *(int *)(unaff_BP + -0x1b0))) {
      puVar9 = &uStack_24;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uVar7 = 0x11f2;
      uStack_28 = 0x1038;
      func_0x00013e46();
    }
    uVar11 = *(undefined2 *)(unaff_BP + -0x1a8);
    *(undefined2 *)(unaff_BP + -0x1b2) = *(undefined2 *)(unaff_BP + -0x1aa);
    *(undefined2 *)(unaff_BP + -0x1b0) = uVar11;
    *(undefined2 *)0xc20 = 1;
    *(undefined2 *)0xa4a = 1;
    *(undefined2 *)0xa48 = 2;
    iStack_a = unaff_BP + -0x160;
    iStack_c = unaff_BP + -0xc6;
    iStack_e = unaff_BP + -0xb2;
    uStack_12 = 0x1078;
    iStack_10 = uVar7;
    uVar7 = func_0x00006608();
    *(undefined2 *)(unaff_BP + -0xc4) = uVar7;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xa4a = 0;
    *(undefined2 *)0xa48 = 0;
    uVar13 = *(int *)0x158 == 0;
    if (!(bool)uVar13) goto LAB_3ab8_5c7d;
    func_0x000297e6();
    func_0x000297e6();
    iVar10 = 0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar13) break;
    func_0x000297e6();
    func_0x000297e6();
    iVar10 = 0x22b2;
    FUN_28b3_1181();
    if (((!(bool)uVar13) || (*(int *)(unaff_BP + -0xc4) != 0)) || (*(int *)(unaff_BP + -0xb4) != 0))
    break;
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  goto LAB_3ab8_6556;
LAB_3ab8_51df:
  pcVar5 = (code *)swi(0x3f);
  iVar6 = (*pcVar5)();
  if (iVar6 == -1) goto LAB_3ab8_50e8;
  if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
  uVar7 = *(undefined2 *)0x9660;
  uVar11 = *(undefined2 *)0x9662;
  *(undefined2 *)(unaff_BP + -0x24) = uVar7;
  *(undefined2 *)(unaff_BP + -0x22) = uVar11;
  *(undefined2 *)(unaff_BP + -0x20) = uVar7;
  *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c2c();
  func_0x0002996b();
  func_0x00029d78();
  iStack_e = 0x22b2;
  iStack_10 = 0xfdbf;
  func_0x000299d1();
  iStack_e = 0x22b2;
  iStack_10 = 0xfdc4;
  func_0x0002a11e();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  iStack_e = 0x22b2;
  iStack_10 = 0xfdf7;
  func_0x000299d1();
  iStack_e = 0x22b2;
  iStack_10 = 0xfdfc;
  func_0x0002a10c();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  *(undefined2 *)(unaff_BP + -0xb4) = 0;
LAB_3ab8_529d:
  if (*(int *)(unaff_BP + -0xb4) != 0) {
    func_0x000297e6();
    func_0x00029d78();
    iStack_e = 0x22b2;
    iStack_10 = 0xfe3f;
    func_0x000299d1();
    iStack_e = 0x22b2;
    iStack_10 = 0xfe48;
    func_0x000297e6();
    iStack_e = 0x22b2;
    iStack_10 = 0xfe4d;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    uStack_18 = 0xfe57;
    func_0x000299d1();
    uStack_16 = 0x22b2;
    iVar10 = 0x11f2;
    uStack_18 = 0xfe5c;
    lVar17 = FUN_13bf_39a0();
    *(undefined2 *)(unaff_BP + -0xae) = (int)lVar17;
    *(undefined2 *)(unaff_BP + -0xac) = (int)((ulong)lVar17 >> 0x10);
    if (lVar17 == 0) goto LAB_3ab8_50e8;
    uVar13 = *(int *)(unaff_BP + -0xac) == 0;
    if (*(int *)(unaff_BP + -0xac) < 0) {
      iStack_a = 0xfe7e;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      iStack_a = 0x11f2;
      iStack_c = -0x16e;
      FUN_1000_0599();
      iStack_a = -0x163;
      func_0x00012276();
LAB_3ab8_531d:
      iVar10 = 0x11f2;
      goto LAB_3ab8_50e8;
    }
    iStack_a = 0x11f2;
    iStack_c = -0x155;
    puVar15 = (undefined2 *)func_0x0000013f();
    puVar9 = (undefined2 *)puVar15;
    puVar8 = (undefined2 *)(unaff_BP + -0x24);
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar4 = *puVar3;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar13) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        iStack_a = 0xfef4;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        iStack_a = 0x11f2;
        iStack_c = -0xf8;
        FUN_1000_0599();
        iStack_a = 0xdef;
        iStack_c = -0xe9;
        func_0x00012276();
        goto LAB_3ab8_531d;
      }
    }
  }
  func_0x000297e6();
  iStack_e = 0x22b2;
  iStack_10 = 0xff2c;
  func_0x000299d1();
  iStack_e = 0x22b2;
  iStack_10 = 0xff34;
  func_0x000297e6();
  uStack_16 = 0x22b2;
  uStack_18 = 0xff3e;
  func_0x000299d1();
  uStack_16 = 0x22b2;
  uStack_18 = 0xff46;
  func_0x000297e6();
  uStack_1e = 0x22b2;
  uStack_20 = 0xff50;
  func_0x000299d1();
  uStack_1e = 0x22b2;
  uStack_20 = 0xff58;
  func_0x000297e6();
  uStack_28 = 0xff62;
  func_0x000299d1();
  uStack_28 = 0xff67;
  uVar16 = FUN_1000_0718();
  *(undefined2 *)(unaff_BP + -0x52) = (int)uVar16;
  *(undefined2 *)(unaff_BP + -0x50) = (int)((ulong)uVar16 >> 0x10);
  if (*(int *)(unaff_BP + -0xaa) == 0) {
LAB_2bb4_4927:
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
    iStack_a = 0x32b2;
    iStack_c = 0x5db;
    FUN_32b2_6cc6();
    iStack_a = 0x32b2;
    iStack_c = 0x5e0;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x5ea;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x5f2;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    uStack_14 = 0x5f7;
    FUN_32b2_7258();
    uStack_1a = 0x32b2;
    uStack_1c = 0x601;
    FUN_32b2_6eb1();
    uStack_1a = *(undefined2 *)(unaff_BP + -100);
    uStack_1c = *(undefined2 *)(unaff_BP + -0x66);
    uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
    uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
    uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
    uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
    uStack_28 = *(undefined2 *)(unaff_BP + -0x4e);
    uStack_2c = 0x622;
    FUN_32b2_6d14();
    uStack_32 = 0x32b2;
    uStack_34 = 0x62c;
    FUN_32b2_6eb1();
    uStack_32 = 0x32b2;
    uStack_34 = 0x635;
    FUN_32b2_6d14();
    uStack_3a = 0x32b2;
    uStack_3c = 0x63f;
    FUN_32b2_6eb1();
    uStack_3a = 0;
    uStack_3c = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
    func_0x0003fc09();
    uVar7 = *(undefined2 *)(unaff_BP + -0x60);
    *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
    *(undefined2 *)(unaff_BP + -0x84) = uVar7;
    uVar7 = *(undefined2 *)(unaff_BP + -0x88);
    *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
    *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
    puVar9 = &uStack_28;
    puVar8 = (undefined2 *)(unaff_BP + 0x1c);
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar15;
    }
    uStack_2c = 0x684;
    iVar10 = FUN_3ab8_522f();
    uVar13 = 0;
    uVar14 = iVar10 == 0;
    if (!(bool)uVar14) {
      FUN_32b2_6d14();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_7258();
      FUN_32b2_7191();
      if ((bool)uVar13 || (bool)uVar14) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if ((bool)uVar13 || (bool)uVar14) {
          *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
          *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
          *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
          *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
        }
      }
    }
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_710c();
    FUN_32b2_7154();
    FUN_32b2_7191();
    if ((bool)uVar13) {
      uVar7 = 0;
    }
    else {
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_7191();
      if (!(bool)uVar13) {
        *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
        *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
        *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
        *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
      }
      iStack_a = *(undefined2 *)(unaff_BP + -0xba);
      iStack_c = *(int *)(unaff_BP + -0xbc);
      iStack_e = 0x32b2;
      iStack_10 = 0x774;
      FUN_32b2_7592();
      iStack_a = 0x77e;
      FUN_32b2_6d14();
      iStack_a = 0x786;
      FUN_32b2_70dc();
      iStack_a = 0x78e;
      FUN_32b2_6d14();
      iStack_a = 0x797;
      FUN_32b2_710c();
      iStack_a = 0x79c;
      FUN_32b2_7182();
      iStack_a = 0x7a5;
      FUN_32b2_6e99();
      iStack_a = 0x7ad;
      FUN_32b2_710c();
      iStack_a = 0x7b5;
      FUN_32b2_7154();
      iStack_a = 0x7be;
      FUN_32b2_6e99();
      iStack_a = 0x7c7;
      FUN_32b2_6eb1();
      iStack_a = unaff_BP + -0x62;
      iStack_c = 0x32b2;
      iStack_e = 0x7d9;
      FUN_32b2_6cc6();
      iStack_c = 0x32b2;
      iStack_e = 0x7de;
      FUN_32b2_7258();
      uStack_14 = 0x32b2;
      uStack_16 = 0x7e8;
      FUN_32b2_6eb1();
      uStack_14 = 0x32b2;
      uStack_16 = 0x7f0;
      FUN_32b2_6cc6();
      uStack_14 = 0x32b2;
      uStack_16 = 0x7f5;
      FUN_32b2_7258();
      uStack_1c = 0x32b2;
      uStack_1e = 0x7ff;
      FUN_32b2_6eb1();
      uStack_1c = *(undefined2 *)(unaff_BP + -100);
      uStack_1e = *(undefined2 *)(unaff_BP + -0x66);
      uStack_20 = *(undefined2 *)(unaff_BP + -0x68);
      uStack_22 = *(undefined2 *)(unaff_BP + -0x6a);
      uStack_24 = *(undefined2 *)(unaff_BP + -0x48);
      uStack_28 = *(undefined2 *)(unaff_BP + -0x4c);
      uStack_2c = 0x32b2;
      uStack_2e = 0x820;
      FUN_32b2_6d14();
      uStack_34 = 0x32b2;
      uStack_36 = 0x82a;
      FUN_32b2_6eb1();
      uStack_34 = 0x32b2;
      uStack_36 = 0x833;
      FUN_32b2_6d14();
      uStack_3c = 0x32b2;
      FUN_32b2_6eb1();
      uStack_3c = 0;
                    /* WARNING: Call to offcut address within same function */
      func_0x0003fc09(0x32b2);
      uVar13 = (undefined1 *)0xffc9 < &uStack_3c;
      uVar14 = &stack0x0000 == (undefined1 *)0x6;
      iStack_a = 0x84f;
      FUN_32b2_6cc6();
      iStack_a = 0x857;
      FUN_32b2_6cc6();
      iStack_a = 0x85c;
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uVar7 = *(undefined2 *)(unaff_BP + 8);
        *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
        *(undefined2 *)(unaff_BP + -0x60) = uVar7;
      }
      iStack_a = 0x872;
      FUN_32b2_6cc6();
      iStack_a = 0x87a;
      FUN_32b2_6cc6();
      iStack_a = 0x87f;
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uVar7 = *(undefined2 *)(unaff_BP + 0xc);
        *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
        *(undefined2 *)(unaff_BP + -0x88) = uVar7;
      }
      uVar7 = *(undefined2 *)(unaff_BP + -0x60);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
      puVar8[1] = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x88);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar8[1] = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x60);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
      puVar8[1] = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x88);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar8[1] = uVar7;
      piVar1 = (int *)(unaff_BP + -0x36);
      *piVar1 = *piVar1 + 1;
      uVar14 = *piVar1 == 0;
      iStack_a = 0x8d7;
      FUN_32b2_6d14();
      iStack_a = 0x8e0;
      FUN_32b2_6d14();
      iStack_a = 0x8e5;
      FUN_32b2_7191();
      if (!(bool)uVar13 && !(bool)uVar14) {
        iStack_a = *(undefined2 *)(unaff_BP + -0xb8);
        iStack_c = *(int *)(unaff_BP + -0xba);
        iStack_e = *(undefined2 *)(unaff_BP + -0xbc);
        iStack_10 = 0x32b2;
        uStack_12 = 0x8ff;
        FUN_32b2_7592();
        iStack_a = 0x32b2;
        iStack_c = 0x909;
        FUN_32b2_6d14();
        iStack_a = 0x32b2;
        iStack_c = 0x911;
        FUN_32b2_7154();
        iStack_a = 0x32b2;
        iStack_c = 0x916;
        FUN_32b2_6fd6();
        iStack_a = 0x32b2;
        iStack_c = 0x91e;
        FUN_32b2_6d14();
        iStack_a = 0x32b2;
        iStack_c = 0x927;
        FUN_32b2_710c();
        iStack_a = 0x32b2;
        iStack_c = 0x92c;
        FUN_32b2_7182();
        iStack_a = 0x32b2;
        iStack_c = 0x935;
        FUN_32b2_6e99();
        iStack_a = 0x32b2;
        iStack_c = 0x93d;
        FUN_32b2_710c();
        iStack_a = 0x32b2;
        iStack_c = 0x945;
        FUN_32b2_7154();
        iStack_a = 0x32b2;
        iStack_c = 0x94e;
        FUN_32b2_6e99();
        iStack_a = 0x32b2;
        iStack_c = 0x957;
        FUN_32b2_6eb1();
        iStack_a = unaff_BP + -0x8a;
        iStack_c = unaff_BP + -0x62;
        iStack_e = 0x32b2;
        iStack_10 = 0x969;
        FUN_32b2_6cc6();
        iStack_e = 0x32b2;
        iStack_10 = 0x96e;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 0x978;
        FUN_32b2_6eb1();
        uStack_16 = 0x32b2;
        uStack_18 = 0x980;
        FUN_32b2_6cc6();
        uStack_16 = 0x32b2;
        uStack_18 = 0x985;
        FUN_32b2_7258();
        uStack_1e = 0x32b2;
        uStack_20 = 0x98f;
        FUN_32b2_6eb1();
        uStack_1e = *(undefined2 *)(unaff_BP + -100);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x66);
        uStack_22 = *(undefined2 *)(unaff_BP + -0x68);
        uStack_24 = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_28 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_2c = *(undefined2 *)(unaff_BP + -0x4e);
        uStack_2e = 0x32b2;
        uStack_30 = 0x9b0;
        FUN_32b2_6d14();
        uStack_36 = 0x32b2;
        uStack_38 = 0x9ba;
        FUN_32b2_6eb1();
        uStack_36 = 0x32b2;
        uStack_38 = 0x9c3;
        FUN_32b2_6d14();
        FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
        func_0x0003fc09(0x32b2,0);
        uVar13 = &stack0x0000 == (undefined1 *)0x8;
        iStack_a = 0x32b2;
        iStack_c = 0x9df;
        FUN_32b2_6cc6();
        iStack_a = 0x32b2;
        iStack_c = 0x9e7;
        FUN_32b2_6cc6();
        iStack_a = 0x32b2;
        iStack_c = 0x9ec;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          uVar7 = *(undefined2 *)(unaff_BP + 8);
          *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
          *(undefined2 *)(unaff_BP + -0x60) = uVar7;
        }
        iStack_a = 0x32b2;
        iStack_c = 0xa02;
        FUN_32b2_6cc6();
        iStack_a = 0x32b2;
        iStack_c = 0xa0a;
        FUN_32b2_6cc6();
        iStack_a = 0x32b2;
        iStack_c = 0xa0f;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          uVar7 = *(undefined2 *)(unaff_BP + 0xc);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
          *(undefined2 *)(unaff_BP + -0x88) = uVar7;
        }
        uVar7 = *(undefined2 *)(unaff_BP + -0x60);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
        puVar8[1] = uVar7;
        uVar7 = *(undefined2 *)(unaff_BP + -0x88);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
        puVar8[1] = uVar7;
        *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
      }
      uVar7 = *(undefined2 *)(unaff_BP + -0x36);
    }
    return uVar7;
  }
  func_0x000297e6();
  iStack_e = 0x22b2;
  iStack_10 = 0xff8c;
  func_0x000299d1();
  iStack_e = 0x22b2;
  iStack_10 = 0xff94;
  func_0x000297e6();
  uStack_16 = 0x22b2;
  uStack_18 = 0xff9e;
  func_0x000299d1();
  uStack_16 = 0x22b2;
  uStack_18 = 0xffa6;
  func_0x000297e6();
  uStack_1e = 0x22b2;
  uStack_20 = 0xffb0;
  func_0x000299d1();
  uStack_1e = 0x22b2;
  uStack_20 = 0xffb8;
  func_0x000297e6();
  uStack_28 = 0xffc2;
  func_0x000299d1();
  uStack_28 = 0xffc7;
  FUN_1def_043a();
  uVar7 = *(undefined2 *)(unaff_BP + -0x66);
  *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0x68);
  *(undefined2 *)0xb30e = uVar7;
  uVar7 = *(undefined2 *)(unaff_BP + -0x62);
  *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -100);
  *(undefined2 *)0xb380 = uVar7;
  func_0x000297e6();
  func_0x00029d78();
  iStack_e = 0x22b2;
  iStack_10 = 0xfffc;
  func_0x000299d1();
  iStack_e = 0x22b2;
  iStack_10 = 5;
  func_0x000297e6();
  iStack_e = 0x22b2;
  iStack_10 = 10;
  func_0x00029d78();
  uStack_16 = 0x22b2;
  uStack_18 = 0x14;
  func_0x000299d1();
  uStack_16 = 1;
  uStack_18 = 0x22b2;
  uStack_1a = 0x1d;
  FUN_1def_05d1();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  iStack_e = 0x22b2;
  iStack_10 = 0x4d;
  func_0x000299d1();
  iStack_e = 0x22b2;
  iStack_10 = 0x56;
  func_0x000297e6();
  iStack_e = 0x22b2;
  iStack_10 = 0x5b;
  func_0x00029d78();
  uStack_16 = 0x22b2;
  uStack_18 = 0x65;
  func_0x000299d1();
  uStack_16 = 1;
  uStack_18 = 0x22b2;
  uStack_1a = 0x6e;
  func_0x0001e558();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  iStack_e = 0x22b2;
  iStack_10 = 0xd4;
  func_0x000299d1();
  iStack_e = 0x22b2;
  iStack_10 = 0xdd;
  func_0x000297e6();
  iStack_e = 0x22b2;
  iStack_10 = 0xe2;
  func_0x00029d78();
  uStack_16 = 0x22b2;
  uStack_18 = 0xec;
  func_0x000299d1();
  uStack_16 = 1;
  uStack_18 = 0x22b2;
  uStack_1a = 0xf5;
  FUN_1def_05d1();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  iStack_e = 0x22b2;
  iStack_10 = 0x125;
  func_0x000299d1();
  iStack_e = 0x22b2;
  iStack_10 = 0x12e;
  func_0x000297e6();
  iStack_e = 0x22b2;
  iStack_10 = 0x133;
  func_0x00029d78();
  uStack_16 = 0x22b2;
  uStack_18 = 0x13d;
  func_0x000299d1();
  uStack_16 = 1;
  uStack_18 = 0x22b2;
  uStack_1a = 0x146;
  func_0x0001e558();
  uVar13 = (undefined1 *)0xffed < &uStack_16;
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299b9();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029834();
  func_0x00029bfc();
  func_0x000299b9();
  func_0x00029ae7();
  FUN_28b3_1181();
  if (!(bool)uVar13) {
    func_0x00029834();
    func_0x00029834();
    func_0x00029bfc();
    func_0x00029c44();
    func_0x000299b9();
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      iStack_a = *(int *)(unaff_BP + -0x194);
      iStack_c = *(int *)(unaff_BP + -0x196);
      iStack_e = 0x22b2;
      iStack_10 = 0x238;
      puVar8 = (undefined2 *)FUN_28b3_1582();
      *(undefined2 *)(unaff_BP + -0x18e) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x18c) = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x18a) = puVar8[2];
      *(undefined2 *)(unaff_BP + -0x188) = puVar8[3];
      func_0x00029834();
      func_0x00029c2c();
      FUN_28b3_112c();
      func_0x00029c2c();
      func_0x00029c2c();
      func_0x00029c74();
      iStack_e = 0x22b2;
      iStack_10 = 0x287;
      func_0x000299d1();
      iStack_e = 0x22b2;
      iStack_10 = 0x28c;
      puVar8 = (undefined2 *)FUN_28b3_1582();
      uVar13 = (undefined1 *)0xfff7 < &iStack_c;
      uVar14 = &stack0x0000 == (undefined1 *)0x4;
      *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
      *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        iVar10 = *(int *)(unaff_BP + -0x50);
        *(undefined2 *)(unaff_BP + -0x1aa) = *(undefined2 *)(unaff_BP + -0x52);
        *(int *)(unaff_BP + -0x1a8) = iVar10 + 0x5a;
        iStack_a = 0x22b2;
        iStack_c = 0x2d2;
        func_0x00021eee();
        uVar7 = *(undefined2 *)(unaff_BP + -0x1a8);
        *(undefined2 *)(unaff_BP + -0x52) = *(undefined2 *)(unaff_BP + -0x1aa);
        *(undefined2 *)(unaff_BP + -0x50) = uVar7;
        func_0x00029834();
        FUN_28b3_1c08();
        FUN_28b3_1177();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_112c();
        func_0x00029c2c();
        func_0x00029c2c();
        func_0x00029c74();
        iStack_e = 0x22b2;
        iStack_10 = 0x33e;
        func_0x000299d1();
        iStack_e = 0x22b2;
        iStack_10 = 0x343;
        puVar8 = (undefined2 *)FUN_28b3_1582();
        uVar14 = &stack0x0000 == (undefined1 *)0x4;
        *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
        *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
        *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
        *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
      }
      uVar13 = (bool)uVar13 && (undefined1 *)0xfff7 < &iStack_c;
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      if (!(bool)uVar13) {
        func_0x00029834();
        func_0x00029834();
        FUN_28b3_1181();
        if ((bool)uVar13 || (bool)uVar14) {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029c74();
          lVar17 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x1aa) = (int)lVar17;
          *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)lVar17 >> 0x10);
          if ((0x270e < lVar17) && (lVar17 < 0x2712)) {
            *(undefined2 *)(unaff_BP + -0x1aa) = 10000;
            *(undefined2 *)(unaff_BP + -0x1a8) = 0;
          }
          *(undefined2 *)(unaff_BP + -0x5c) = *(undefined2 *)(unaff_BP + -0x1aa);
          *(undefined2 *)(unaff_BP + -0x58) = 0;
          *(undefined2 *)(unaff_BP + -0x5a) = 0;
          *(undefined2 *)(unaff_BP + -0x54) = 0;
          *(undefined2 *)(unaff_BP + -0x56) = 0;
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029834();
          func_0x0002996b();
          func_0x00029c9d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          uVar7 = *(undefined2 *)(unaff_BP + -0x1aa);
          *(undefined2 *)(unaff_BP + -0x1b4) = 0;
          *(undefined2 *)(unaff_BP + -0x1b6) = 0;
          *(undefined2 *)(unaff_BP + -0x1b8) = 0;
          *(undefined2 *)(unaff_BP + -0x1ba) = uVar7;
          func_0x00029da5();
          func_0x00029c9d();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x00029983();
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          goto LAB_3ab8_58ed;
        }
      }
    }
  }
  *(undefined2 *)0xc22 = 1;
  iStack_a = 0x22b2;
  iStack_c = 0x1e0;
  FUN_1000_0599();
  iStack_a = 0x1eb;
  func_0x00012276();
  halt_baddata();
}



/* 3ab8:4ca3  FUN_3ab8_4ca3  286 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000403b8) */
/* WARNING: Removing unreachable block (ram,0x000403c3) */

undefined2 __cdecl16far FUN_3ab8_4ca3(void)

{
  int *piVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int unaff_BP;
  undefined2 *puVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  long lVar17;
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
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  iVar10 = 0x3ab8;
  if ((*(int *)(unaff_BP + -0x9c) != 1) && (*(int *)(unaff_BP + -0x9c) != 2)) goto LAB_3ab8_4a96;
LAB_3ab8_4baf:
  do {
    if ((*(int *)(unaff_BP + -0x9c) != 0) && (*(int *)(unaff_BP + -0x9c) != 2)) {
      uVar6 = FUN_3ab8_4e5f();
      return uVar6;
    }
    *(undefined2 *)(unaff_BP + -0x134) = 1;
    func_0x0000c340();
    iStack_6 = 0x885;
    iStack_8 = -0x8a7;
    FUN_21f2_3454();
    if (*(int *)(unaff_BP + -0x9c) == 2) {
      iStack_6 = 0x22b2;
      iStack_8 = -0x890;
      FUN_21f2_2d26();
    }
    iStack_6 = 0x22b2;
    iStack_8 = -0x880;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = -0x870;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = -0x860;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = -0x850;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = -0x840;
    FUN_21f2_2d26();
    if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x96) != 0)) {
      iStack_6 = *(undefined2 *)(unaff_BP + -0x92);
      iStack_8 = *(int *)(unaff_BP + -0x94);
      iStack_a = 0x2943;
      iStack_c = unaff_BP + -0x42;
      iStack_e = 0x22b2;
      uStack_10 = 0xf7ed;
      FUN_10ad_1928();
      iStack_6 = unaff_BP + -0x132;
      iStack_8 = 0x11f2;
      iStack_a = 0xf7fe;
      FUN_21f2_2d26();
    }
    uVar6 = 0x22b2;
    if (((*(int *)(unaff_BP + -0x9c) == 2) && (*(int *)(unaff_BP + -0x96) != 0)) &&
       (*(char *)0xb782 == '\0')) {
      *(undefined2 *)(unaff_BP + -0x16a) = 0x11;
      iStack_e = uVar6;
      while (*(int *)(unaff_BP + -0x16a) < 0x30) {
        iStack_6 = *(undefined2 *)(unaff_BP + -0x16a);
        iStack_8 = *(int *)0xa58 + -1;
        iStack_a = *(undefined2 *)(unaff_BP + -0x16a);
        iStack_c = 1;
        uStack_10 = 0xf863;
        func_0x0000def0();
        *(int *)(unaff_BP + -0x16a) = *(int *)(unaff_BP + -0x16a) + 1;
        iStack_e = 0xdef;
      }
      iStack_6 = *(undefined2 *)0x1054;
      iStack_8 = *(int *)0x1052;
      iStack_a = 0x2950;
      iStack_c = unaff_BP + -0x42;
      uStack_10 = 0xf885;
      FUN_10ad_1928();
      iStack_6 = 0;
      iStack_8 = 2;
      iStack_a = 1;
      iStack_c = unaff_BP + -0x42;
      iStack_e = 0x11f2;
      uStack_10 = 0xf89d;
      FUN_1000_02b5();
      iStack_6 = *(undefined2 *)0x9660;
      iStack_8 = *(int *)0x1058;
      iStack_a = *(undefined2 *)0x1056;
      iStack_c = 0x295e;
      iStack_e = unaff_BP + -0x42;
      uStack_10 = 0xdef;
      uStack_12 = 0xf8bd;
      FUN_10ad_1928();
      iStack_6 = 0;
      iStack_8 = 0;
      iStack_a = 3;
      iStack_c = 1;
      iStack_e = unaff_BP + -0x42;
      uStack_10 = 0x11f2;
      uVar6 = 0xdef;
      uStack_12 = 0xf8d5;
      FUN_1000_02b5();
    }
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc1a = 1;
    *(undefined2 *)0xc20 = 1;
    iStack_6 = unaff_BP + -0x160;
    iStack_8 = unaff_BP + -0x132;
    iStack_a = *(undefined2 *)(unaff_BP + -0x96);
    iStack_e = 0xf901;
    iStack_c = uVar6;
    uVar6 = FUN_1def_0904();
    *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
    *(undefined2 *)0xc2c = 0;
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)0xc20 = 0;
    iVar10 = 0x885;
    func_0x0000abfa();
    if (*(int *)0x158 != 0) {
LAB_2bb4_569f_4:
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      iStack_a = 0x32b2;
      iStack_c = 0x1205;
      FUN_32b2_6eb1();
      iStack_a = 1;
      iStack_c = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      iStack_e = 0x120d;
      func_0x0003fc09();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      uVar6 = *(undefined2 *)(unaff_BP + 0x12);
      uVar13 = 0;
      *(undefined2 *)(unaff_BP + -0x5a) = 0;
      *(undefined2 *)(unaff_BP + -0x5c) = 0;
      *(undefined2 *)(unaff_BP + -0x5e) = 0;
      *(undefined2 *)(unaff_BP + -0x60) = uVar6;
      FUN_32b2_7285();
      FUN_32b2_710c();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      FUN_32b2_6cc6();
      FUN_32b2_6fc7();
      FUN_32b2_6cc6();
      FUN_32b2_6fc7();
      FUN_32b2_7191();
      if ((bool)uVar13) {
        FUN_32b2_6d14();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        FUN_32b2_70dc();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_7124();
      }
      else {
        FUN_32b2_6d14();
        FUN_32b2_6e99();
        FUN_32b2_7124();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_713c();
        FUN_32b2_7173();
        FUN_32b2_710c();
      }
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      iStack_6 = *(undefined2 *)(unaff_BP + -0x22);
      iStack_8 = *(int *)(unaff_BP + -0x24);
      iStack_a = 0;
      iStack_c = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      iStack_e = 0x13b7;
      func_0x0003fc09();
      return 1;
    }
    if (*(int *)0xc18 == 0) {
      if (*(int *)(unaff_BP + -0xc4) == -1) {
        iStack_6 = 0xf979;
        func_0x0000daa6();
        iStack_6 = 0x885;
        while (0 < *(int *)(unaff_BP + -0x96)) {
          uVar6 = *(undefined2 *)0x14e;
          *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
          *(undefined2 *)(unaff_BP + -0x152) = uVar6;
          iStack_8 = -0x66e;
          FUN_13bf_0327();
          *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
          iStack_6 = 0x11f2;
        }
        iStack_6 = -0x658;
        func_0x0000b1d8();
        func_0x0000abfa();
      }
      else if (*(int *)(unaff_BP + -0xc4) == 0x14) {
LAB_3ab8_4a7d:
        uVar6 = *(undefined2 *)0x9662;
        *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)0x9660;
        *(undefined2 *)(unaff_BP + -0x92) = uVar6;
        *(undefined2 *)(unaff_BP + -0x96) = 0;
        *(undefined2 *)(unaff_BP + -0x14e) = 0;
LAB_3ab8_4a96:
        while (*(int *)(unaff_BP + 6) == 0) {
          iStack_8 = -0x9d3;
          iStack_6 = iVar10;
          func_0x00024c86();
          iStack_6 = 0x22b2;
          iStack_8 = -0x9c3;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = -0x9b3;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = -0x9a3;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = -0x993;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = -0x983;
          FUN_1def_07a4();
          func_0x0000c340();
          *(undefined2 *)0xc1a = 1;
          *(undefined2 *)0xc20 = 1;
          iStack_6 = unaff_BP + -0x160;
          iStack_8 = unaff_BP + -0x132;
          iStack_a = 0;
          iStack_c = 0x885;
          iStack_e = 0xf6a9;
          uVar6 = FUN_1def_0904();
          *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
          *(undefined2 *)0xc1a = 0;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
          if (*(int *)0xc18 == 0) {
            if (*(int *)(unaff_BP + -0xb4) != 0) {
              iStack_6 = *(int *)(unaff_BP + -0xb4);
              iStack_8 = 0x1bb4;
              iStack_a = 0xf71f;
              iVar10 = func_0x00015409();
              if (iVar10 != 0) {
                *(undefined2 *)(unaff_BP + -0x9c) = 0xffff;
                break;
              }
            }
            uVar6 = FUN_3ab8_4ca3();
            return uVar6;
          }
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0xf6e3;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xf6ec;
          func_0x000297e6();
          iStack_a = 0x22b2;
          iStack_c = 0xf6f1;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0xf6fb;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          iVar10 = 0x3bf;
          uStack_14 = 0xf700;
          func_0x0000507a();
        }
      }
      else if (*(int *)(unaff_BP + -0xb4) != 0) {
        iStack_6 = *(int *)(unaff_BP + -0xb4);
        iStack_8 = 0x885;
        iVar10 = 0x11f2;
        iStack_a = 0xf9d5;
        iVar7 = func_0x00015409();
        if (iVar7 != 0) {
          if (*(int *)(unaff_BP + -0x9c) == -1) {
            *(undefined2 *)(unaff_BP + -0x9c) = 0;
          }
          if (*(int *)(unaff_BP + -0x9c) != 1) {
            uVar6 = *(undefined2 *)(unaff_BP + -0x166);
            *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x168);
            *(undefined2 *)(unaff_BP + -0x62) = uVar6;
            func_0x000297e6();
            func_0x0002996b();
            iVar10 = 0x22b2;
            func_0x00029983();
            uVar6 = *(undefined2 *)(unaff_BP + -0x166);
            *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)(unaff_BP + -0x168);
            *(undefined2 *)(unaff_BP + -0x162) = uVar6;
            *(undefined2 *)(unaff_BP + -0x14e) = 1;
          }
LAB_3ab8_4eb1:
          *(undefined2 *)(unaff_BP + -0xaa) = 0;
          if (0 < *(int *)(unaff_BP + -0x9c)) {
            if (*(int *)(unaff_BP + -0x9c) == 1) {
              func_0x000297e6();
              func_0x0002996b();
              iVar10 = 0x22b2;
              func_0x00029983();
            }
            else {
              uVar6 = *(undefined2 *)0x1054;
              *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0x1052;
              *(undefined2 *)(unaff_BP + -0x6a) = uVar6;
              uVar6 = *(undefined2 *)0x1058;
              *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x1056;
              *(undefined2 *)(unaff_BP + -0x8e) = uVar6;
            }
            iStack_6 = *(int *)(unaff_BP + -0x9c);
            iStack_a = 0xfa91;
            iStack_8 = iVar10;
            iVar7 = FUN_3ab8_4671();
            *(int *)(unaff_BP + -0x44) = iVar7;
            if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
            if ((iVar7 == -1) && (*(int *)(unaff_BP + -0x9c) == 1)) goto LAB_3ab8_4a7d;
            if (iVar7 == -1) goto LAB_3ab8_4baf;
            if ((iVar7 == 0) && (*(int *)(unaff_BP + -0x9c) == 1)) break;
            if ((iVar7 == 0) && (*(int *)(unaff_BP + -0x9c) == 2)) {
              do {
                *(undefined2 *)(unaff_BP + -0xaa) = 1;
                do {
                  do {
                    iStack_6 = 0x296c;
                    iStack_8 = unaff_BP + -0x132;
                    iStack_c = 0xfaf9;
                    iStack_a = iVar10;
                    FUN_21f2_3454();
                    iStack_6 = unaff_BP + -0xca;
                    iStack_8 = unaff_BP + -0x132;
                    *(undefined2 *)0xc20 = 1;
                    iStack_a = 1;
                    iStack_c = 0x22b2;
                    iVar10 = 0x1bb4;
                    iStack_e = 0xfb1c;
                    iVar7 = FUN_1def_0904();
                    *(int *)(unaff_BP + -0xc4) = iVar7;
                    *(undefined2 *)0xc20 = 0;
                    if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
                    if (iVar7 == -1) goto LAB_3ab8_4baf;
                  } while (*(int *)(unaff_BP + -0xb4) == 0);
                  iStack_6 = *(undefined2 *)(unaff_BP + -0xb4);
                  iStack_8 = 0x1bb4;
                  iVar10 = 0x11f2;
                  iStack_a = 0xfb55;
                  iVar7 = func_0x00015409();
                } while (iVar7 == 0);
                while( true ) {
                  iStack_6 = 0x2978;
                  iStack_8 = unaff_BP + -0x132;
                  iStack_c = 0xfb72;
                  iStack_a = iVar10;
                  FUN_21f2_3454();
                  iStack_6 = unaff_BP + -0x13a;
                  iStack_8 = unaff_BP + -0x132;
                  *(undefined2 *)0xc20 = 1;
                  iStack_a = 1;
                  iStack_c = 0x22b2;
                  iVar10 = 0x1bb4;
                  iStack_e = 0xfb95;
                  iVar7 = FUN_1def_0904();
                  *(int *)(unaff_BP + -0xc4) = iVar7;
                  *(undefined2 *)0xc20 = 0;
                  if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
                  if (iVar7 == -1) break;
                  if (*(int *)(unaff_BP + -0xb4) != 0) {
                    iStack_6 = *(int *)(unaff_BP + -0xb4);
                    iStack_8 = 0x1bb4;
                    iVar10 = 0x11f2;
                    iStack_a = 0xfbce;
                    iVar7 = func_0x00015409();
                    if (iVar7 != 0) goto LAB_3ab8_50e8;
                  }
                }
              } while( true );
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b9d();
            iVar10 = 0x22b2;
            func_0x00029983();
            *(undefined2 *)(unaff_BP + -0x5c) = 10000;
            *(undefined2 *)(unaff_BP + -0x58) = 0;
            *(undefined2 *)(unaff_BP + -0x5a) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x50) = 0;
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            if (*(int *)(unaff_BP + -0x9c) == 1) {
              uVar6 = *(undefined2 *)(unaff_BP + -0x6a);
              *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
              *(undefined2 *)0x1050 = uVar6;
            }
            else {
              uVar6 = *(undefined2 *)(unaff_BP + -0x8e);
              *(undefined2 *)0x1056 = *(undefined2 *)(unaff_BP + -0x90);
              *(undefined2 *)0x1058 = uVar6;
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029b9d();
              func_0x00029b6d();
              func_0x00029d78();
              iVar10 = 0x22b2;
              uVar6 = FUN_28b3_0f51();
              *(undefined2 *)(unaff_BP + -0x5c) = uVar6;
            }
          }
LAB_3ab8_50e8:
          if (*(int *)(unaff_BP + -0x9c) != 2) goto LAB_2bb4_4927;
          *(undefined2 *)(unaff_BP + -0x134) = 1;
          uVar6 = *(undefined2 *)0x9660;
          uVar11 = *(undefined2 *)0x9662;
          *(undefined2 *)(unaff_BP + -0x24) = uVar6;
          *(undefined2 *)(unaff_BP + -0x22) = uVar11;
          *(undefined2 *)(unaff_BP + -0x20) = uVar6;
          *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
          uVar6 = *(undefined2 *)0x9676;
          *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)0x9674;
          *(undefined2 *)(unaff_BP + -0x1a) = uVar6;
          uVar6 = *(undefined2 *)0x9662;
          *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)0x9660;
          *(undefined2 *)(unaff_BP + -0x16) = uVar6;
          iStack_8 = -0x341;
          iStack_6 = iVar10;
          FUN_21f2_3454();
          iStack_6 = 0x22b2;
          iStack_8 = -0x331;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = -0x321;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = -0x311;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = -0x301;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = -0x2f1;
          FUN_21f2_2d26();
          iStack_6 = 0x22b2;
          iStack_8 = -0x2e1;
          FUN_1def_07a4();
          iStack_6 = unaff_BP + -0x160;
          iStack_8 = unaff_BP + -0x132;
          iStack_a = 1;
          iStack_c = 0x1bb4;
          iVar10 = 0x1bb4;
          iStack_e = 0xfd3e;
          iVar7 = FUN_1def_0904();
          *(int *)(unaff_BP + -0x16a) = iVar7;
          if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
          if (iVar7 != -1) {
            if (iVar7 == 1) goto LAB_3ab8_51df;
            goto LAB_3ab8_529d;
          }
          goto LAB_3ab8_4eb1;
        }
      }
      goto LAB_3ab8_4baf;
    }
    *(undefined2 *)(unaff_BP + -0x96) = 0;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xf947;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xf950;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0xf955;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf95f;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf964;
    func_0x0000507a();
  } while( true );
  *(undefined2 *)(unaff_BP + -0x9c) = 0;
  goto LAB_3ab8_4baf;
LAB_3ab8_58ed:
  if ((*(int *)(unaff_BP + -0x9c) == 0) ||
     (uVar13 = *(int *)(unaff_BP + -0x9c) == 0, *(int *)(unaff_BP + -0x9c) == 1)) {
    func_0x0000c340();
    *(undefined2 *)0xc24 = 1;
    iStack_6 = 0;
    iStack_8 = 0;
    iStack_a = 0x885;
    iStack_c = 0x49b;
    func_0x0000a76b();
    iStack_6 = 0x4ba;
    func_0x00012276();
    iStack_6 = 0x11f2;
    iStack_8 = 0x4c8;
    func_0x00012276();
    func_0x00010526();
    iStack_6 = 0xdef;
    iStack_8 = 0x4dc;
    FUN_1000_0599();
    *(uint *)(unaff_BP + -0x134) = (uint)*(byte *)0x2a0f;
    if (*(int *)0xce6 != 0) {
      *(undefined2 *)(unaff_BP + -0x134) = 1;
    }
    iStack_6 = 0xdef;
    uVar6 = 0x11f2;
    iStack_8 = 0x501;
    func_0x00012276();
    if (*(int *)0xce6 != 0) {
      iStack_6 = 1;
      iStack_8 = 0x40;
      iStack_a = 0x29db;
      iStack_c = 0x11f2;
      uVar6 = 0xdef;
      iStack_e = 0x522;
      FUN_1000_02b5();
    }
    if (*(int *)(unaff_BP + -0x134) != 1) {
      iStack_8 = 0x539;
      iStack_6 = uVar6;
      FUN_1000_0599();
      uVar6 = 0x11f2;
      iStack_6 = 0x544;
      func_0x00012276();
    }
    iStack_6 = *(undefined2 *)0x962a;
    iStack_8 = *(int *)0x9628;
    iStack_a = *(undefined2 *)0x9626;
    iStack_c = *(undefined2 *)0x9624;
    iStack_e = *(undefined2 *)0x962a;
    uStack_10 = *(undefined2 *)0x9628;
    uStack_12 = *(undefined2 *)0x9626;
    uStack_14 = *(undefined2 *)0x9624;
    uStack_16 = *(undefined2 *)0x9692;
    uStack_18 = *(undefined2 *)0x9690;
    uStack_1a = *(undefined2 *)0x968e;
    uStack_1c = *(undefined2 *)0x968c;
    uStack_1e = 0;
    uStack_20 = 7;
    uStack_24 = *(undefined2 *)0x96e4;
    uStack_28 = *(undefined2 *)0x96e0;
    uStack_2a = *(undefined2 *)0x96ee;
    uStack_2c = *(undefined2 *)0x96ec;
    uStack_2e = *(undefined2 *)0x96ea;
    uStack_30 = *(undefined2 *)0x96e8;
    uStack_32 = *(undefined2 *)0x96f6;
    uStack_34 = *(undefined2 *)0x96f4;
    uStack_36 = *(undefined2 *)0x96f2;
    uStack_38 = *(undefined2 *)0x96f0;
    uVar11 = 0xdef;
    func_0x0000fd9f(uVar6);
    *(undefined2 *)(unaff_BP + -0x150) = 0;
    *(undefined2 *)(unaff_BP + -0x14c) = 0;
    if (*(int *)(unaff_BP + -0x9c) == 1) {
      *(undefined2 *)(unaff_BP + -0x1b2) = 2;
      if ((*(char *)0x2a0e == '\0') || (3 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 5) || (7 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1a6) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1a6) = 1;
      }
      *(int *)(unaff_BP + -0x14c) = *(int *)(unaff_BP + -0x1aa) + *(int *)(unaff_BP + -0x1a6);
      if ((*(byte *)0x2a0e < 3) || (5 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x19e) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x19e) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 7) && (*(char *)0x2a0e != '\x01')) {
        *(undefined2 *)(unaff_BP + -0x196) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x196) = 1;
      }
      iStack_6 = *(undefined2 *)0x962a;
      iStack_8 = *(int *)0x9628;
      iStack_a = *(undefined2 *)0x9626;
      iStack_c = *(undefined2 *)0x9624;
      iStack_e = *(undefined2 *)0x962a;
      uStack_10 = *(undefined2 *)0x9628;
      uStack_12 = *(undefined2 *)0x9626;
      uStack_14 = *(undefined2 *)0x9624;
      uStack_16 = *(undefined2 *)0x9692;
      uStack_18 = *(undefined2 *)0x9690;
      uStack_1a = *(undefined2 *)0x968e;
      uStack_1c = *(undefined2 *)0x968c;
      uStack_1e = 3;
      uStack_20 = *(undefined2 *)(unaff_BP + -0x1b2);
      uStack_24 = *(undefined2 *)0x9640;
      uStack_28 = *(undefined2 *)0x963c;
      iVar10 = *(int *)(unaff_BP + -0x19e) + *(int *)(unaff_BP + -0x196);
      *(int *)(unaff_BP + -0x150) = iVar10;
      *(int *)(unaff_BP + -0x18e) = -(iVar10 * 5 + -8);
      uStack_2a = 0xdef;
      uStack_2c = 0x6ba;
      FUN_28b3_0d8b();
      uStack_32 = 0x22b2;
      uStack_34 = 0x6c4;
      func_0x000299d1();
      *(int *)(unaff_BP + -0x186) = (*(int *)(unaff_BP + -0x14c) + 0x5e) * 5;
      uStack_32 = 0x22b2;
      uStack_34 = 0x6dd;
      FUN_28b3_0d8b();
      uVar11 = 0x22b2;
      func_0x000299d1(0x22b2);
    }
    else {
      *(undefined2 *)(unaff_BP + -0x1b2) = 7;
      if (*(char *)0x2a0e != '\0') goto LAB_3ab8_5be8;
      iStack_6 = *(undefined2 *)0x962a;
      iStack_8 = *(int *)0x9628;
      iStack_a = *(undefined2 *)0x9626;
      iStack_c = *(undefined2 *)0x9624;
      iStack_e = *(undefined2 *)0x962a;
      uStack_10 = *(undefined2 *)0x9628;
      uStack_12 = *(undefined2 *)0x9626;
      uStack_14 = *(undefined2 *)0x9624;
      uStack_16 = *(undefined2 *)0x9692;
      uStack_18 = *(undefined2 *)0x9690;
      uStack_1a = *(undefined2 *)0x968e;
      uStack_1c = *(undefined2 *)0x968c;
      uStack_1e = 3;
      uStack_20 = 7;
      uStack_24 = *(undefined2 *)0x9640;
      uStack_28 = *(undefined2 *)0x963c;
      uStack_2a = *(undefined2 *)0x96ee;
      uStack_2c = *(undefined2 *)0x96ec;
      uStack_2e = *(undefined2 *)0x96ea;
      uStack_30 = *(undefined2 *)0x96e8;
      uStack_32 = *(undefined2 *)0x96f6;
      uStack_34 = *(undefined2 *)0x96f4;
      uStack_36 = *(undefined2 *)0x96f2;
      uStack_38 = *(undefined2 *)0x96f0;
    }
    func_0x0000fd9f(uVar11);
LAB_3ab8_5be8:
    uVar12 = 0x885;
    func_0x0000a799();
    uVar6 = *(undefined2 *)0x96f8;
    uVar11 = *(undefined2 *)0x96fa;
    *(undefined2 *)(unaff_BP + -0xca) = uVar6;
    *(undefined2 *)(unaff_BP + -200) = uVar11;
    *(undefined2 *)(unaff_BP + -0x13e) = uVar6;
    *(undefined2 *)(unaff_BP + -0x13c) = uVar11;
    *(undefined2 *)(unaff_BP + -0x5c) = 10000;
    *(undefined2 *)(unaff_BP + -0x58) = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = 0;
    *(undefined2 *)(unaff_BP + -0x50) = 0;
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
    *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
LAB_3ab8_5c29:
    do {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xa48 = 3;
      if (*(int *)(unaff_BP + -0x134) != 1) {
        *(undefined2 *)0xa48 = 4;
      }
      iStack_6 = unaff_BP + -0x160;
      iStack_8 = unaff_BP + -0xc6;
      iStack_a = unaff_BP + -0xb2;
      iVar10 = 0x3bf;
      iStack_e = 0x7e2;
      iStack_c = uVar12;
      uVar6 = func_0x00006608();
      *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(int *)0x158 != 0) {
LAB_3ab8_5c7d:
        func_0x00013e19();
LAB_3ab8_5c82:
        iStack_6 = 0x80a;
        func_0x0000daa6();
        uVar6 = func_0x0000abfa();
        return uVar6;
      }
LAB_3ab8_6556:
      if (*(int *)(unaff_BP + -0xc4) == -1) {
        uVar6 = func_0x00013e19();
        if (*(int *)(unaff_BP + 6) != 0) {
          return uVar6;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x96) != 0)) {
          iStack_6 = 0x1107;
          func_0x0000daa6();
          iStack_6 = 0x885;
          while (0 < *(int *)(unaff_BP + -0x96)) {
            uVar6 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x152) = uVar6;
            iStack_8 = 0x829;
            FUN_13bf_0327();
            *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
            iStack_6 = 0x11f2;
          }
          iStack_6 = 0x83f;
          func_0x0000b1d8();
        }
        iStack_6 = 0x848;
        func_0x0000daa6();
        func_0x0000abfa();
        goto LAB_3ab8_6656;
      }
      if (*(int *)(unaff_BP + -0xc4) == 99) goto LAB_3ab8_58ed;
      *(undefined2 *)(unaff_BP + -0x1ba) = 0;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) {
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        if (*(int *)(unaff_BP + -0xb2) < 0x125) goto LAB_3ab8_58ed;
        *(int *)(unaff_BP + -0xc4) = (*(int *)(unaff_BP + -0xb2) + -0x124) / 0x60 + 0x31;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x31) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        uVar6 = *(undefined2 *)0x104e;
        uVar11 = *(undefined2 *)0x1050;
        *(undefined2 *)(unaff_BP + -0x6c) = uVar6;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
        *(undefined2 *)(unaff_BP + -0x90) = uVar6;
        *(undefined2 *)(unaff_BP + -0x8e) = uVar11;
        iStack_6 = 1;
        iStack_8 = 0x11f2;
        iStack_a = 0x8d1;
        iVar10 = FUN_4375_baa1();
        *(int *)(unaff_BP + -0x44) = iVar10;
        if (*(int *)0x158 != 0) goto LAB_3ab8_5c82;
        if (iVar10 == -1) goto LAB_3ab8_58ed;
        if (iVar10 == 0) {
          if (*(int *)(unaff_BP + -0x9c) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(unaff_BP + -0x9c) = 0;
          goto LAB_3ab8_58ed;
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        iVar10 = 0x22b2;
        func_0x00029983();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x6a);
        *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
        *(undefined2 *)0x1050 = uVar6;
        *(undefined2 *)(unaff_BP + -0x9c) = 1;
        if (*(int *)(unaff_BP + -0x14e) == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x14e) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x15a);
        *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x15c);
        *(undefined2 *)(unaff_BP + -0x15e) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x162);
        *(undefined2 *)(unaff_BP + -0x168) = *(undefined2 *)(unaff_BP + -0x164);
        *(undefined2 *)(unaff_BP + -0x166) = uVar6;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
        uVar6 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar6;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x32) {
        bVar2 = *(byte *)0x2a0e;
        *(uint *)(unaff_BP + -0x1b2) = (uint)bVar2;
        if (*(char *)0x15b == '\x02') {
          *(int *)(unaff_BP + -0x1b2) = bVar2 - 1;
        }
        else {
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (8 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (1 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 8;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 1;
        }
        *(undefined1 *)0x2a0e = *(undefined1 *)(unaff_BP + -0x1b2);
        goto LAB_3ab8_58ed;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x33) {
        if (*(int *)0xce6 != 0) {
          uVar6 = func_0x00013e19();
          *(undefined2 *)0xce6 = 0x14;
          return uVar6;
        }
        *(char *)0x2a0f = *(char *)0x2a0f + '\x01';
        if (10 < *(byte *)0x2a0f) {
LAB_3ab8_5eb7:
          *(undefined1 *)0x2a0f = 1;
        }
        goto LAB_3ab8_58ed;
      }
      if ((*(int *)0xce6 == 0) && (*(int *)(unaff_BP + -0xc4) == 0x34)) goto LAB_3ab8_5eb7;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc4) == 100)) {
        uVar6 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar6;
        iStack_6 = *(int *)(unaff_BP + -0xb4);
        iStack_a = 0xa7d;
        iStack_8 = iVar10;
        iVar10 = func_0x00015409();
        if (iVar10 == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
      }
      uVar13 = *(char *)0x15a == '\0';
      if (!(bool)uVar13) goto LAB_3ab8_58ed;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        func_0x000297e6();
        func_0x000297e6();
        uVar12 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar13) goto LAB_3ab8_5c29;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x15e);
      *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)(unaff_BP + -0x160);
      *(undefined2 *)(unaff_BP + -200) = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x13e) = *(undefined2 *)(unaff_BP + -0x168);
      *(undefined2 *)(unaff_BP + -0x13c) = uVar6;
      uVar12 = 0x11f2;
      func_0x00013e19();
      if ((((*(int *)(unaff_BP + -0xb2) < *(int *)0xa5c) ||
           (*(int *)0xa60 < *(int *)(unaff_BP + -0xc6))) ||
          (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) && (*(int *)(unaff_BP + -0x1ba) == 0))
      goto LAB_3ab8_5c29;
      *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
      if (*(int *)(unaff_BP + -0x9c) == 0) {
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_117c();
        iStack_a = 0x22b2;
        iStack_c = 0xbcb;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xbd0;
        FUN_28b3_1582();
        func_0x00029834();
        func_0x00029983();
        if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0xb4) != 2)) {
          puVar8 = (undefined2 *)func_0x0000c4c4();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x1b2) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x1b0) = uVar6;
          func_0x000297e6();
          iStack_6 = 0xc1a;
          func_0x00029b9d();
          func_0x00029983();
          if (*(char *)0x2a0e == '\0') {
            func_0x000297e6();
            iStack_6 = 0xc3a;
            func_0x00029b6d();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029c74();
          uVar16 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x1aa) = (int)uVar16;
          *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)uVar16 >> 0x10);
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029983();
        }
        if (*(char *)0x2a0e != '\0') {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          iStack_6 = 0xce8;
          func_0x00029b6d();
          func_0x00029983();
        }
      }
      else {
        if (*(int *)0xcb6 == 0) {
          uVar6 = *(undefined2 *)0x965e;
          *(undefined2 *)0xb76a = *(undefined2 *)0x965c;
          *(undefined2 *)0xb76c = uVar6;
          uVar6 = *(undefined2 *)0x9660;
          uVar11 = *(undefined2 *)0x9662;
        }
        else {
          uVar6 = *(undefined2 *)0xcbc;
          *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
          *(undefined2 *)0xb76c = uVar6;
          uVar6 = *(undefined2 *)0xcbe;
          uVar11 = *(undefined2 *)0xcc0;
        }
        *(undefined2 *)0xb784 = uVar6;
        *(undefined2 *)0xb786 = uVar11;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        if (*(char *)0x2a0e != '\0') {
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029b6d();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          iStack_a = 0x22b2;
          iStack_c = 0xdba;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xdc3;
          FUN_28b3_0d8b();
          iStack_a = 0x22b2;
          iStack_c = 0xdcc;
          func_0x0002996b();
          iStack_a = 0x22b2;
          iStack_c = 0xdd4;
          func_0x00029b6d();
          iStack_a = 0x22b2;
          iStack_c = 0xdd9;
          func_0x00029af6();
          iStack_a = 0x22b2;
          iStack_c = 0xdde;
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0xde7;
          func_0x000299b9();
          uStack_12 = 0x22b2;
          uStack_14 = 0xdf1;
          func_0x000299d1();
          uStack_12 = 0;
          uStack_14 = 0x22b2;
          uStack_16 = 0xdf9;
          puVar8 = (undefined2 *)FUN_1def_05d1();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x68) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x66) = uVar6;
          func_0x00029834();
          iStack_a = 0x22b2;
          iStack_c = 0xe1c;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xe25;
          func_0x00029834();
          uStack_12 = 0x22b2;
          uStack_14 = 0xe2f;
          func_0x000299d1();
          uStack_12 = 0;
          uStack_14 = 0x22b2;
          uStack_16 = 0xe37;
          puVar8 = (undefined2 *)func_0x0001e558();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -100) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x62) = uVar6;
        }
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b6d();
      func_0x00029983();
      if (*(char *)0xb782 == '\0') {
        *(undefined2 *)(unaff_BP + -0x1b2) = 0x11;
        iStack_e = 0x22b2;
        do {
          iStack_6 = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_8 = *(int *)0xa58 + -1;
          iStack_a = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_c = 1;
          uStack_10 = 0xe98;
          func_0x0000def0();
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
          iStack_e = 0xdef;
        } while (*(int *)(unaff_BP + -0x1b2) < 0x30);
        iStack_6 = *(undefined2 *)(unaff_BP + -0x92);
        iStack_8 = *(int *)(unaff_BP + -0x94);
        iStack_a = 0x29ed;
        iStack_c = unaff_BP + -0x42;
        iStack_e = 0xdef;
        uStack_10 = 0xec3;
        FUN_10ad_1928();
        iStack_6 = 0;
        iStack_8 = 2;
        iStack_a = 1;
        iStack_c = unaff_BP + -0x42;
        iStack_e = 0x11f2;
        uStack_10 = 0xedb;
        FUN_1000_02b5();
        iStack_6 = *(undefined2 *)0x9660;
        iStack_8 = 0xdef;
        iStack_a = 0xeef;
        func_0x000297e6();
        iStack_8 = 0x22b2;
        iStack_a = 0xef8;
        func_0x00029b6d();
        iStack_c = 0x22b2;
        iStack_e = 0xf02;
        func_0x00029983();
        iStack_8 = 0x29fb;
        iStack_a = unaff_BP + -0x42;
        iStack_c = 0x22b2;
        iStack_e = 0xf0f;
        FUN_10ad_1928();
        iStack_6 = 3;
        iStack_8 = 1;
        iStack_a = unaff_BP + -0x42;
        iStack_c = 0x11f2;
        iStack_e = 0xf27;
        FUN_1000_02b5();
      }
      uVar13 = 0;
      if (*(int *)(unaff_BP + -0x1ba) != 0) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        uVar13 = false;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        break;
      }
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar13) goto code_r0x00040f9e;
LAB_3ab8_6451:
      uVar12 = 0x22b2;
    } while( true );
  }
  *(undefined2 *)(unaff_BP + -0x96) = 0;
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  uVar6 = FUN_28b3_1181();
  if ((bool)uVar13) {
    if (*(int *)(unaff_BP + 6) == 0) {
      halt_baddata();
    }
    return uVar6;
  }
  *(undefined1 *)(unaff_BP + -0x4d) = *(undefined1 *)0xa6a;
  *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
  *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b6d();
  func_0x00029983();
  iStack_6 = 0x1148;
  func_0x0000daa6();
  puVar9 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while (uVar13 = *(int *)(unaff_BP + -0x136) == 0, 0 < *(int *)(unaff_BP + -0x136)) {
    func_0x00029834();
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      puVar9 = &uStack_20;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uStack_24 = 0x11b3;
      FUN_13bf_01c1();
      *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + 1;
    }
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  uVar6 = func_0x0000abfa();
  *(undefined2 *)(unaff_BP + -0x14e) = 0;
  if (*(int *)(unaff_BP + 6) != 0) {
    return uVar6;
  }
LAB_3ab8_6656:
  if (*(int *)(unaff_BP + -0x9c) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  goto LAB_3ab8_58ed;
code_r0x00040f9e:
  *(undefined2 *)(unaff_BP + -0x1b2) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x1b0) = 0xffff;
  puVar9 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined1 *)(unaff_BP + -0x71) = 9;
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while( true ) {
    if (*(int *)(unaff_BP + -0x136) < 1) goto LAB_3ab8_6451;
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029d78();
    uVar6 = 0x22b2;
    uVar16 = FUN_28b3_0f51();
    iVar10 = (int)((ulong)uVar16 >> 0x10);
    *(int *)(unaff_BP + -0x1aa) = (int)uVar16;
    *(int *)(unaff_BP + -0x1a8) = iVar10;
    if (((int)uVar16 != *(int *)(unaff_BP + -0x1b2)) || (iVar10 != *(int *)(unaff_BP + -0x1b0))) {
      puVar9 = &uStack_20;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uVar6 = 0x11f2;
      uStack_24 = 0x1038;
      func_0x00013e46();
    }
    uVar11 = *(undefined2 *)(unaff_BP + -0x1a8);
    *(undefined2 *)(unaff_BP + -0x1b2) = *(undefined2 *)(unaff_BP + -0x1aa);
    *(undefined2 *)(unaff_BP + -0x1b0) = uVar11;
    *(undefined2 *)0xc20 = 1;
    *(undefined2 *)0xa4a = 1;
    *(undefined2 *)0xa48 = 2;
    iStack_6 = unaff_BP + -0x160;
    iStack_8 = unaff_BP + -0xc6;
    iStack_a = unaff_BP + -0xb2;
    iStack_e = 0x1078;
    iStack_c = uVar6;
    uVar6 = func_0x00006608();
    *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xa4a = 0;
    *(undefined2 *)0xa48 = 0;
    uVar13 = *(int *)0x158 == 0;
    if (!(bool)uVar13) goto LAB_3ab8_5c7d;
    func_0x000297e6();
    func_0x000297e6();
    iVar10 = 0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar13) break;
    func_0x000297e6();
    func_0x000297e6();
    iVar10 = 0x22b2;
    FUN_28b3_1181();
    if (((!(bool)uVar13) || (*(int *)(unaff_BP + -0xc4) != 0)) || (*(int *)(unaff_BP + -0xb4) != 0))
    break;
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  goto LAB_3ab8_6556;
LAB_3ab8_51df:
  pcVar5 = (code *)swi(0x3f);
  iVar7 = (*pcVar5)();
  if (iVar7 == -1) goto LAB_3ab8_50e8;
  if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
  uVar6 = *(undefined2 *)0x9660;
  uVar11 = *(undefined2 *)0x9662;
  *(undefined2 *)(unaff_BP + -0x24) = uVar6;
  *(undefined2 *)(unaff_BP + -0x22) = uVar11;
  *(undefined2 *)(unaff_BP + -0x20) = uVar6;
  *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c2c();
  func_0x0002996b();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xfdbf;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xfdc4;
  func_0x0002a11e();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xfdf7;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xfdfc;
  func_0x0002a10c();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  *(undefined2 *)(unaff_BP + -0xb4) = 0;
LAB_3ab8_529d:
  if (*(int *)(unaff_BP + -0xb4) != 0) {
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xfe3f;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xfe48;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0xfe4d;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe57;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    iVar10 = 0x11f2;
    uStack_14 = 0xfe5c;
    lVar17 = FUN_13bf_39a0();
    *(undefined2 *)(unaff_BP + -0xae) = (int)lVar17;
    *(undefined2 *)(unaff_BP + -0xac) = (int)((ulong)lVar17 >> 0x10);
    if (lVar17 == 0) goto LAB_3ab8_50e8;
    uVar13 = *(int *)(unaff_BP + -0xac) == 0;
    if (*(int *)(unaff_BP + -0xac) < 0) {
      iStack_6 = 0xfe7e;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      iStack_6 = 0x11f2;
      iStack_8 = -0x16e;
      FUN_1000_0599();
      iStack_6 = -0x163;
      func_0x00012276();
LAB_3ab8_531d:
      iVar10 = 0x11f2;
      goto LAB_3ab8_50e8;
    }
    iStack_6 = 0x11f2;
    iStack_8 = -0x155;
    puVar15 = (undefined2 *)func_0x0000013f();
    puVar9 = (undefined2 *)puVar15;
    puVar8 = (undefined2 *)(unaff_BP + -0x24);
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar4 = *puVar3;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar13) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        iStack_6 = 0xfef4;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        iStack_6 = 0x11f2;
        iStack_8 = -0xf8;
        FUN_1000_0599();
        iStack_6 = 0xdef;
        iStack_8 = -0xe9;
        func_0x00012276();
        goto LAB_3ab8_531d;
      }
    }
  }
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0xff2c;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xff34;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xff3e;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xff46;
  func_0x000297e6();
  uStack_1a = 0x22b2;
  uStack_1c = 0xff50;
  func_0x000299d1();
  uStack_1a = 0x22b2;
  uStack_1c = 0xff58;
  func_0x000297e6();
  uStack_24 = 0xff62;
  func_0x000299d1();
  uStack_24 = 0xff67;
  uVar16 = FUN_1000_0718();
  *(undefined2 *)(unaff_BP + -0x52) = (int)uVar16;
  *(undefined2 *)(unaff_BP + -0x50) = (int)((ulong)uVar16 >> 0x10);
  if (*(int *)(unaff_BP + -0xaa) == 0) {
LAB_2bb4_4927:
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
    iStack_6 = 0x32b2;
    iStack_8 = 0x5db;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    iStack_8 = 0x5e0;
    FUN_32b2_7258();
    iStack_e = 0x32b2;
    uStack_10 = 0x5ea;
    FUN_32b2_6eb1();
    iStack_e = 0x32b2;
    uStack_10 = 0x5f2;
    FUN_32b2_6cc6();
    iStack_e = 0x32b2;
    uStack_10 = 0x5f7;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x601;
    FUN_32b2_6eb1();
    uStack_16 = *(undefined2 *)(unaff_BP + -100);
    uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
    uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
    uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
    uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
    uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
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
    uVar6 = *(undefined2 *)(unaff_BP + -0x60);
    *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
    *(undefined2 *)(unaff_BP + -0x84) = uVar6;
    uVar6 = *(undefined2 *)(unaff_BP + -0x88);
    *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
    *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
    puVar9 = &uStack_24;
    puVar8 = (undefined2 *)(unaff_BP + 0x1c);
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar15;
    }
    uStack_28 = 0x684;
    iVar10 = FUN_3ab8_522f();
    uVar13 = 0;
    uVar14 = iVar10 == 0;
    if (!(bool)uVar14) {
      FUN_32b2_6d14();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_7258();
      FUN_32b2_7191();
      if ((bool)uVar13 || (bool)uVar14) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if ((bool)uVar13 || (bool)uVar14) {
          *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
          *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
          *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
          *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
        }
      }
    }
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_710c();
    FUN_32b2_7154();
    FUN_32b2_7191();
    if ((bool)uVar13) {
      uVar6 = 0;
    }
    else {
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_7191();
      if (!(bool)uVar13) {
        *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
        *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
        *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
        *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
      }
      iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_8 = *(int *)(unaff_BP + -0xbc);
      iStack_a = 0x32b2;
      iStack_c = 0x774;
      FUN_32b2_7592();
      iStack_6 = 0x77e;
      FUN_32b2_6d14();
      iStack_6 = 0x786;
      FUN_32b2_70dc();
      iStack_6 = 0x78e;
      FUN_32b2_6d14();
      iStack_6 = 0x797;
      FUN_32b2_710c();
      iStack_6 = 0x79c;
      FUN_32b2_7182();
      iStack_6 = 0x7a5;
      FUN_32b2_6e99();
      iStack_6 = 0x7ad;
      FUN_32b2_710c();
      iStack_6 = 0x7b5;
      FUN_32b2_7154();
      iStack_6 = 0x7be;
      FUN_32b2_6e99();
      iStack_6 = 0x7c7;
      FUN_32b2_6eb1();
      iStack_6 = unaff_BP + -0x62;
      iStack_8 = 0x32b2;
      iStack_a = 0x7d9;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x7de;
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
      uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
      uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
      uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
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
      uVar13 = (undefined1 *)0xffc9 < &uStack_38;
      uVar14 = &stack0x0000 == (undefined1 *)0x2;
      iStack_6 = 0x84f;
      FUN_32b2_6cc6();
      iStack_6 = 0x857;
      FUN_32b2_6cc6();
      iStack_6 = 0x85c;
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uVar6 = *(undefined2 *)(unaff_BP + 8);
        *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
        *(undefined2 *)(unaff_BP + -0x60) = uVar6;
      }
      iStack_6 = 0x872;
      FUN_32b2_6cc6();
      iStack_6 = 0x87a;
      FUN_32b2_6cc6();
      iStack_6 = 0x87f;
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uVar6 = *(undefined2 *)(unaff_BP + 0xc);
        *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
        *(undefined2 *)(unaff_BP + -0x88) = uVar6;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x60);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
      puVar8[1] = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x88);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar8[1] = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x60);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
      puVar8[1] = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x88);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar8[1] = uVar6;
      piVar1 = (int *)(unaff_BP + -0x36);
      *piVar1 = *piVar1 + 1;
      uVar14 = *piVar1 == 0;
      iStack_6 = 0x8d7;
      FUN_32b2_6d14();
      iStack_6 = 0x8e0;
      FUN_32b2_6d14();
      iStack_6 = 0x8e5;
      FUN_32b2_7191();
      if (!(bool)uVar13 && !(bool)uVar14) {
        iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
        iStack_8 = *(int *)(unaff_BP + -0xba);
        iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
        iStack_c = 0x32b2;
        iStack_e = 0x8ff;
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
        iStack_a = 0x32b2;
        iStack_c = 0x969;
        FUN_32b2_6cc6();
        iStack_a = 0x32b2;
        iStack_c = 0x96e;
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
        uStack_1c = 0x98f;
        FUN_32b2_6eb1();
        uStack_1a = *(undefined2 *)(unaff_BP + -100);
        uStack_1c = *(undefined2 *)(unaff_BP + -0x66);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
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
        uVar13 = &stack0x0000 == (undefined1 *)0x4;
        iStack_6 = 0x32b2;
        iStack_8 = 0x9df;
        FUN_32b2_6cc6();
        iStack_6 = 0x32b2;
        iStack_8 = 0x9e7;
        FUN_32b2_6cc6();
        iStack_6 = 0x32b2;
        iStack_8 = 0x9ec;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + 8);
          *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
          *(undefined2 *)(unaff_BP + -0x60) = uVar6;
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
        if ((bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + 0xc);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
          *(undefined2 *)(unaff_BP + -0x88) = uVar6;
        }
        uVar6 = *(undefined2 *)(unaff_BP + -0x60);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
        puVar8[1] = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x88);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
        puVar8[1] = uVar6;
        *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x36);
    }
    return uVar6;
  }
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0xff8c;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xff94;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xff9e;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xffa6;
  func_0x000297e6();
  uStack_1a = 0x22b2;
  uStack_1c = 0xffb0;
  func_0x000299d1();
  uStack_1a = 0x22b2;
  uStack_1c = 0xffb8;
  func_0x000297e6();
  uStack_24 = 0xffc2;
  func_0x000299d1();
  uStack_24 = 0xffc7;
  FUN_1def_043a();
  uVar6 = *(undefined2 *)(unaff_BP + -0x66);
  *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0x68);
  *(undefined2 *)0xb30e = uVar6;
  uVar6 = *(undefined2 *)(unaff_BP + -0x62);
  *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -100);
  *(undefined2 *)0xb380 = uVar6;
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xfffc;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 5;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 10;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x14;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0x1d;
  FUN_1def_05d1();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0x4d;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0x56;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0x5b;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x65;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0x6e;
  func_0x0001e558();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xd4;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xdd;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0xe2;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xec;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf5;
  FUN_1def_05d1();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0x125;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0x12e;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0x133;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x13d;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0x146;
  func_0x0001e558();
  uVar13 = (undefined1 *)0xffed < &uStack_12;
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299b9();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029834();
  func_0x00029bfc();
  func_0x000299b9();
  func_0x00029ae7();
  FUN_28b3_1181();
  if (!(bool)uVar13) {
    func_0x00029834();
    func_0x00029834();
    func_0x00029bfc();
    func_0x00029c44();
    func_0x000299b9();
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      iStack_6 = *(int *)(unaff_BP + -0x194);
      iStack_8 = *(int *)(unaff_BP + -0x196);
      iStack_a = 0x22b2;
      iStack_c = 0x238;
      puVar8 = (undefined2 *)FUN_28b3_1582();
      *(undefined2 *)(unaff_BP + -0x18e) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x18c) = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x18a) = puVar8[2];
      *(undefined2 *)(unaff_BP + -0x188) = puVar8[3];
      func_0x00029834();
      func_0x00029c2c();
      FUN_28b3_112c();
      func_0x00029c2c();
      func_0x00029c2c();
      func_0x00029c74();
      iStack_a = 0x22b2;
      iStack_c = 0x287;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0x28c;
      puVar8 = (undefined2 *)FUN_28b3_1582();
      uVar13 = (undefined1 *)0xfff7 < &iStack_8;
      uVar14 = &stack0x0000 == (undefined1 *)0x0;
      *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
      *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        iVar10 = *(int *)(unaff_BP + -0x50);
        *(undefined2 *)(unaff_BP + -0x1aa) = *(undefined2 *)(unaff_BP + -0x52);
        *(int *)(unaff_BP + -0x1a8) = iVar10 + 0x5a;
        iStack_6 = 0x22b2;
        iStack_8 = 0x2d2;
        func_0x00021eee();
        uVar6 = *(undefined2 *)(unaff_BP + -0x1a8);
        *(undefined2 *)(unaff_BP + -0x52) = *(undefined2 *)(unaff_BP + -0x1aa);
        *(undefined2 *)(unaff_BP + -0x50) = uVar6;
        func_0x00029834();
        FUN_28b3_1c08();
        FUN_28b3_1177();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_112c();
        func_0x00029c2c();
        func_0x00029c2c();
        func_0x00029c74();
        iStack_a = 0x22b2;
        iStack_c = 0x33e;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0x343;
        puVar8 = (undefined2 *)FUN_28b3_1582();
        uVar14 = &stack0x0000 == (undefined1 *)0x0;
        *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
        *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
        *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
        *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
      }
      uVar13 = (bool)uVar13 && (undefined1 *)0xfff7 < &iStack_8;
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      if (!(bool)uVar13) {
        func_0x00029834();
        func_0x00029834();
        FUN_28b3_1181();
        if ((bool)uVar13 || (bool)uVar14) {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029c74();
          lVar17 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x1aa) = (int)lVar17;
          *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)lVar17 >> 0x10);
          if ((0x270e < lVar17) && (lVar17 < 0x2712)) {
            *(undefined2 *)(unaff_BP + -0x1aa) = 10000;
            *(undefined2 *)(unaff_BP + -0x1a8) = 0;
          }
          *(undefined2 *)(unaff_BP + -0x5c) = *(undefined2 *)(unaff_BP + -0x1aa);
          *(undefined2 *)(unaff_BP + -0x58) = 0;
          *(undefined2 *)(unaff_BP + -0x5a) = 0;
          *(undefined2 *)(unaff_BP + -0x54) = 0;
          *(undefined2 *)(unaff_BP + -0x56) = 0;
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029834();
          func_0x0002996b();
          func_0x00029c9d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          uVar6 = *(undefined2 *)(unaff_BP + -0x1aa);
          *(undefined2 *)(unaff_BP + -0x1b4) = 0;
          *(undefined2 *)(unaff_BP + -0x1b6) = 0;
          *(undefined2 *)(unaff_BP + -0x1b8) = 0;
          *(undefined2 *)(unaff_BP + -0x1ba) = uVar6;
          func_0x00029da5();
          func_0x00029c9d();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x00029983();
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          goto LAB_3ab8_58ed;
        }
      }
    }
  }
  *(undefined2 *)0xc22 = 1;
  iStack_6 = 0x22b2;
  iStack_8 = 0x1e0;
  FUN_1000_0599();
  iStack_6 = 0x1eb;
  func_0x00012276();
  halt_baddata();
}



/* 3ab8:4e5f  FUN_3ab8_4e5f  800 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000403b8) */
/* WARNING: Removing unreachable block (ram,0x000403c3) */

undefined2 __cdecl16far FUN_3ab8_4e5f(void)

{
  int *piVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int unaff_BP;
  undefined2 *puVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  long lVar17;
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
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  iVar10 = 0x3ab8;
code_r0x0003f9df:
  if (*(int *)(unaff_BP + -0x9c) == -1) {
    *(undefined2 *)(unaff_BP + -0x9c) = 0;
  }
  if (*(int *)(unaff_BP + -0x9c) != 1) {
    uVar6 = *(undefined2 *)(unaff_BP + -0x166);
    *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x168);
    *(undefined2 *)(unaff_BP + -0x62) = uVar6;
    func_0x000297e6();
    func_0x0002996b();
    iVar10 = 0x22b2;
    func_0x00029983();
    uVar6 = *(undefined2 *)(unaff_BP + -0x166);
    *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)(unaff_BP + -0x168);
    *(undefined2 *)(unaff_BP + -0x162) = uVar6;
    *(undefined2 *)(unaff_BP + -0x14e) = 1;
  }
LAB_3ab8_4eb1:
  *(undefined2 *)(unaff_BP + -0xaa) = 0;
  if (0 < *(int *)(unaff_BP + -0x9c)) {
    if (*(int *)(unaff_BP + -0x9c) == 1) {
      func_0x000297e6();
      func_0x0002996b();
      iVar10 = 0x22b2;
      func_0x00029983();
    }
    else {
      uVar6 = *(undefined2 *)0x1054;
      *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0x1052;
      *(undefined2 *)(unaff_BP + -0x6a) = uVar6;
      uVar6 = *(undefined2 *)0x1058;
      *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x1056;
      *(undefined2 *)(unaff_BP + -0x8e) = uVar6;
    }
    iStack_6 = *(int *)(unaff_BP + -0x9c);
    iStack_a = 0xfa91;
    iStack_8 = iVar10;
    iVar7 = FUN_3ab8_4671();
    *(int *)(unaff_BP + -0x44) = iVar7;
    if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
    if ((iVar7 == -1) && (*(int *)(unaff_BP + -0x9c) == 1)) goto LAB_3ab8_4a7d;
    if (iVar7 == -1) goto LAB_3ab8_4baf;
    if ((iVar7 == 0) && (*(int *)(unaff_BP + -0x9c) == 1)) goto code_r0x0003fac3;
    if ((iVar7 == 0) && (*(int *)(unaff_BP + -0x9c) == 2)) {
      do {
        *(undefined2 *)(unaff_BP + -0xaa) = 1;
        do {
          do {
            iStack_6 = 0x296c;
            iStack_8 = unaff_BP + -0x132;
            iStack_c = 0xfaf9;
            iStack_a = iVar10;
            FUN_21f2_3454();
            iStack_6 = unaff_BP + -0xca;
            iStack_8 = unaff_BP + -0x132;
            *(undefined2 *)0xc20 = 1;
            iStack_a = 1;
            iStack_c = 0x22b2;
            iVar10 = 0x1bb4;
            iStack_e = 0xfb1c;
            iVar7 = FUN_1def_0904();
            *(int *)(unaff_BP + -0xc4) = iVar7;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
            if (iVar7 == -1) goto LAB_3ab8_4baf;
          } while (*(int *)(unaff_BP + -0xb4) == 0);
          iStack_6 = *(undefined2 *)(unaff_BP + -0xb4);
          iStack_8 = 0x1bb4;
          iVar10 = 0x11f2;
          iStack_a = 0xfb55;
          iVar7 = func_0x00015409();
        } while (iVar7 == 0);
        while( true ) {
          iStack_6 = 0x2978;
          iStack_8 = unaff_BP + -0x132;
          iStack_c = 0xfb72;
          iStack_a = iVar10;
          FUN_21f2_3454();
          iStack_6 = unaff_BP + -0x13a;
          iStack_8 = unaff_BP + -0x132;
          *(undefined2 *)0xc20 = 1;
          iStack_a = 1;
          iStack_c = 0x22b2;
          iVar10 = 0x1bb4;
          iStack_e = 0xfb95;
          iVar7 = FUN_1def_0904();
          *(int *)(unaff_BP + -0xc4) = iVar7;
          *(undefined2 *)0xc20 = 0;
          if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
          if (iVar7 == -1) break;
          if (*(int *)(unaff_BP + -0xb4) != 0) {
            iStack_6 = *(int *)(unaff_BP + -0xb4);
            iStack_8 = 0x1bb4;
            iVar10 = 0x11f2;
            iStack_a = 0xfbce;
            iVar7 = func_0x00015409();
            if (iVar7 != 0) goto LAB_3ab8_50e8;
          }
        }
      } while( true );
    }
    func_0x000297e6();
    func_0x00029b6d();
    func_0x00029b9d();
    iVar10 = 0x22b2;
    func_0x00029983();
    *(undefined2 *)(unaff_BP + -0x5c) = 10000;
    *(undefined2 *)(unaff_BP + -0x58) = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = 0;
    *(undefined2 *)(unaff_BP + -0x50) = 0;
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    if (*(int *)(unaff_BP + -0x9c) == 1) {
      uVar6 = *(undefined2 *)(unaff_BP + -0x6a);
      *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
      *(undefined2 *)0x1050 = uVar6;
    }
    else {
      uVar6 = *(undefined2 *)(unaff_BP + -0x8e);
      *(undefined2 *)0x1056 = *(undefined2 *)(unaff_BP + -0x90);
      *(undefined2 *)0x1058 = uVar6;
      func_0x000297e6();
      func_0x0002996b();
      func_0x00029b9d();
      func_0x00029b6d();
      func_0x00029d78();
      iVar10 = 0x22b2;
      uVar6 = FUN_28b3_0f51();
      *(undefined2 *)(unaff_BP + -0x5c) = uVar6;
    }
  }
LAB_3ab8_50e8:
  if (*(int *)(unaff_BP + -0x9c) != 2) goto LAB_2bb4_4927;
  *(undefined2 *)(unaff_BP + -0x134) = 1;
  uVar6 = *(undefined2 *)0x9660;
  uVar11 = *(undefined2 *)0x9662;
  *(undefined2 *)(unaff_BP + -0x24) = uVar6;
  *(undefined2 *)(unaff_BP + -0x22) = uVar11;
  *(undefined2 *)(unaff_BP + -0x20) = uVar6;
  *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
  uVar6 = *(undefined2 *)0x9676;
  *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)0x9674;
  *(undefined2 *)(unaff_BP + -0x1a) = uVar6;
  uVar6 = *(undefined2 *)0x9662;
  *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)0x9660;
  *(undefined2 *)(unaff_BP + -0x16) = uVar6;
  iStack_8 = -0x341;
  iStack_6 = iVar10;
  FUN_21f2_3454();
  iStack_6 = 0x22b2;
  iStack_8 = -0x331;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x321;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x311;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x301;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x2f1;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x2e1;
  FUN_1def_07a4();
  iStack_6 = unaff_BP + -0x160;
  iStack_8 = unaff_BP + -0x132;
  iStack_a = 1;
  iStack_c = 0x1bb4;
  iVar10 = 0x1bb4;
  iStack_e = 0xfd3e;
  iVar7 = FUN_1def_0904();
  *(int *)(unaff_BP + -0x16a) = iVar7;
  if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
  if (iVar7 != -1) {
    if (iVar7 == 1) goto LAB_3ab8_51df;
    goto LAB_3ab8_529d;
  }
  goto LAB_3ab8_4eb1;
code_r0x0003fac3:
  *(undefined2 *)(unaff_BP + -0x9c) = 0;
LAB_3ab8_4baf:
  if ((*(int *)(unaff_BP + -0x9c) != 0) && (*(int *)(unaff_BP + -0x9c) != 2)) {
    uVar6 = FUN_3ab8_4e5f();
    return uVar6;
  }
  *(undefined2 *)(unaff_BP + -0x134) = 1;
  func_0x0000c340();
  iStack_6 = 0x885;
  iStack_8 = -0x8a7;
  FUN_21f2_3454();
  if (*(int *)(unaff_BP + -0x9c) == 2) {
    iStack_6 = 0x22b2;
    iStack_8 = -0x890;
    FUN_21f2_2d26();
  }
  iStack_6 = 0x22b2;
  iStack_8 = -0x880;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x870;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x860;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x850;
  FUN_21f2_2d26();
  iStack_6 = 0x22b2;
  iStack_8 = -0x840;
  FUN_21f2_2d26();
  if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x96) != 0)) {
    iStack_6 = *(undefined2 *)(unaff_BP + -0x92);
    iStack_8 = *(int *)(unaff_BP + -0x94);
    iStack_a = 0x2943;
    iStack_c = unaff_BP + -0x42;
    iStack_e = 0x22b2;
    uStack_10 = 0xf7ed;
    FUN_10ad_1928();
    iStack_6 = unaff_BP + -0x132;
    iStack_8 = 0x11f2;
    iStack_a = 0xf7fe;
    FUN_21f2_2d26();
  }
  uVar6 = 0x22b2;
  if (((*(int *)(unaff_BP + -0x9c) == 2) && (*(int *)(unaff_BP + -0x96) != 0)) &&
     (*(char *)0xb782 == '\0')) {
    *(undefined2 *)(unaff_BP + -0x16a) = 0x11;
    iStack_e = uVar6;
    while (*(int *)(unaff_BP + -0x16a) < 0x30) {
      iStack_6 = *(undefined2 *)(unaff_BP + -0x16a);
      iStack_8 = *(int *)0xa58 + -1;
      iStack_a = *(undefined2 *)(unaff_BP + -0x16a);
      iStack_c = 1;
      uStack_10 = 0xf863;
      func_0x0000def0();
      *(int *)(unaff_BP + -0x16a) = *(int *)(unaff_BP + -0x16a) + 1;
      iStack_e = 0xdef;
    }
    iStack_6 = *(undefined2 *)0x1054;
    iStack_8 = *(int *)0x1052;
    iStack_a = 0x2950;
    iStack_c = unaff_BP + -0x42;
    uStack_10 = 0xf885;
    FUN_10ad_1928();
    iStack_6 = 0;
    iStack_8 = 2;
    iStack_a = 1;
    iStack_c = unaff_BP + -0x42;
    iStack_e = 0x11f2;
    uStack_10 = 0xf89d;
    FUN_1000_02b5();
    iStack_6 = *(undefined2 *)0x9660;
    iStack_8 = *(int *)0x1058;
    iStack_a = *(undefined2 *)0x1056;
    iStack_c = 0x295e;
    iStack_e = unaff_BP + -0x42;
    uStack_10 = 0xdef;
    uStack_12 = 0xf8bd;
    FUN_10ad_1928();
    iStack_6 = 0;
    iStack_8 = 0;
    iStack_a = 3;
    iStack_c = 1;
    iStack_e = unaff_BP + -0x42;
    uStack_10 = 0x11f2;
    uVar6 = 0xdef;
    uStack_12 = 0xf8d5;
    FUN_1000_02b5();
  }
  *(undefined2 *)0xc2c = 1;
  *(undefined2 *)0xc1a = 1;
  *(undefined2 *)0xc20 = 1;
  iStack_6 = unaff_BP + -0x160;
  iStack_8 = unaff_BP + -0x132;
  iStack_a = *(undefined2 *)(unaff_BP + -0x96);
  iStack_e = 0xf901;
  iStack_c = uVar6;
  uVar6 = FUN_1def_0904();
  *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
  *(undefined2 *)0xc2c = 0;
  *(undefined2 *)0xc1a = 0;
  *(undefined2 *)0xc20 = 0;
  iVar10 = 0x885;
  func_0x0000abfa();
  if (*(int *)0x158 != 0) {
LAB_2bb4_569f_4:
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    iStack_a = 0x32b2;
    iStack_c = 0x1205;
    FUN_32b2_6eb1();
    iStack_a = 1;
    iStack_c = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
    iStack_e = 0x120d;
    func_0x0003fc09();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    uVar6 = *(undefined2 *)(unaff_BP + 0x12);
    uVar13 = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x5c) = 0;
    *(undefined2 *)(unaff_BP + -0x5e) = 0;
    *(undefined2 *)(unaff_BP + -0x60) = uVar6;
    FUN_32b2_7285();
    FUN_32b2_710c();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_6fc7();
    FUN_32b2_6cc6();
    FUN_32b2_6fc7();
    FUN_32b2_7191();
    if ((bool)uVar13) {
      FUN_32b2_6d14();
      FUN_32b2_6eb1();
      FUN_32b2_6d14();
      FUN_32b2_70dc();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_7124();
    }
    else {
      FUN_32b2_6d14();
      FUN_32b2_6e99();
      FUN_32b2_7124();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_713c();
      FUN_32b2_7173();
      FUN_32b2_710c();
    }
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    iStack_6 = *(undefined2 *)(unaff_BP + -0x22);
    iStack_8 = *(int *)(unaff_BP + -0x24);
    iStack_a = 0;
    iStack_c = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
    iStack_e = 0x13b7;
    func_0x0003fc09();
    return 1;
  }
  if (*(int *)0xc18 != 0) {
    *(undefined2 *)(unaff_BP + -0x96) = 0;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xf947;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xf950;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0xf955;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf95f;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xf964;
    func_0x0000507a();
    goto LAB_3ab8_4baf;
  }
  if (*(int *)(unaff_BP + -0xc4) == -1) {
    iStack_6 = 0xf979;
    func_0x0000daa6();
    iStack_6 = 0x885;
    while (0 < *(int *)(unaff_BP + -0x96)) {
      uVar6 = *(undefined2 *)0x14e;
      *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
      *(undefined2 *)(unaff_BP + -0x152) = uVar6;
      iStack_8 = -0x66e;
      FUN_13bf_0327();
      *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
      iStack_6 = 0x11f2;
    }
    iStack_6 = -0x658;
    func_0x0000b1d8();
    func_0x0000abfa();
    goto LAB_3ab8_4baf;
  }
  if (*(int *)(unaff_BP + -0xc4) == 0x14) {
LAB_3ab8_4a7d:
    uVar6 = *(undefined2 *)0x9662;
    *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)0x9660;
    *(undefined2 *)(unaff_BP + -0x92) = uVar6;
    *(undefined2 *)(unaff_BP + -0x96) = 0;
    *(undefined2 *)(unaff_BP + -0x14e) = 0;
    while (*(int *)(unaff_BP + 6) == 0) {
      iStack_8 = -0x9d3;
      iStack_6 = iVar10;
      func_0x00024c86();
      iStack_6 = 0x22b2;
      iStack_8 = -0x9c3;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = -0x9b3;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = -0x9a3;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = -0x993;
      FUN_21f2_2d26();
      iStack_6 = 0x22b2;
      iStack_8 = -0x983;
      FUN_1def_07a4();
      func_0x0000c340();
      *(undefined2 *)0xc1a = 1;
      *(undefined2 *)0xc20 = 1;
      iStack_6 = unaff_BP + -0x160;
      iStack_8 = unaff_BP + -0x132;
      iStack_a = 0;
      iStack_c = 0x885;
      iStack_e = 0xf6a9;
      uVar6 = FUN_1def_0904();
      *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
      *(undefined2 *)0xc1a = 0;
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
      if (*(int *)0xc18 == 0) {
        if (*(int *)(unaff_BP + -0xb4) != 0) {
          iStack_6 = *(int *)(unaff_BP + -0xb4);
          iStack_8 = 0x1bb4;
          iStack_a = 0xf71f;
          iVar10 = func_0x00015409();
          if (iVar10 != 0) {
            *(undefined2 *)(unaff_BP + -0x9c) = 0xffff;
            break;
          }
        }
        uVar6 = FUN_3ab8_4ca3();
        return uVar6;
      }
      *(undefined2 *)(unaff_BP + -0x96) = 0;
      func_0x000297e6();
      func_0x00029d78();
      iStack_a = 0x22b2;
      iStack_c = 0xf6e3;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0xf6ec;
      func_0x000297e6();
      iStack_a = 0x22b2;
      iStack_c = 0xf6f1;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xf6fb;
      func_0x000299d1();
      uStack_12 = 0x22b2;
      iVar10 = 0x3bf;
      uStack_14 = 0xf700;
      func_0x0000507a();
    }
    goto LAB_3ab8_4baf;
  }
  if (*(int *)(unaff_BP + -0xb4) == 0) goto LAB_3ab8_4baf;
  iStack_6 = *(int *)(unaff_BP + -0xb4);
  iStack_8 = 0x885;
  iVar10 = 0x11f2;
  iStack_a = 0xf9d5;
  iVar7 = func_0x00015409();
  if (iVar7 == 0) goto LAB_3ab8_4baf;
  goto code_r0x0003f9df;
LAB_3ab8_58ed:
  if ((*(int *)(unaff_BP + -0x9c) == 0) ||
     (uVar13 = *(int *)(unaff_BP + -0x9c) == 0, *(int *)(unaff_BP + -0x9c) == 1)) {
    func_0x0000c340();
    *(undefined2 *)0xc24 = 1;
    iStack_6 = 0;
    iStack_8 = 0;
    iStack_a = 0x885;
    iStack_c = 0x49b;
    func_0x0000a76b();
    iStack_6 = 0x4ba;
    func_0x00012276();
    iStack_6 = 0x11f2;
    iStack_8 = 0x4c8;
    func_0x00012276();
    func_0x00010526();
    iStack_6 = 0xdef;
    iStack_8 = 0x4dc;
    FUN_1000_0599();
    *(uint *)(unaff_BP + -0x134) = (uint)*(byte *)0x2a0f;
    if (*(int *)0xce6 != 0) {
      *(undefined2 *)(unaff_BP + -0x134) = 1;
    }
    iStack_6 = 0xdef;
    uVar6 = 0x11f2;
    iStack_8 = 0x501;
    func_0x00012276();
    if (*(int *)0xce6 != 0) {
      iStack_6 = 1;
      iStack_8 = 0x40;
      iStack_a = 0x29db;
      iStack_c = 0x11f2;
      uVar6 = 0xdef;
      iStack_e = 0x522;
      FUN_1000_02b5();
    }
    if (*(int *)(unaff_BP + -0x134) != 1) {
      iStack_8 = 0x539;
      iStack_6 = uVar6;
      FUN_1000_0599();
      uVar6 = 0x11f2;
      iStack_6 = 0x544;
      func_0x00012276();
    }
    iStack_6 = *(undefined2 *)0x962a;
    iStack_8 = *(int *)0x9628;
    iStack_a = *(undefined2 *)0x9626;
    iStack_c = *(undefined2 *)0x9624;
    iStack_e = *(undefined2 *)0x962a;
    uStack_10 = *(undefined2 *)0x9628;
    uStack_12 = *(undefined2 *)0x9626;
    uStack_14 = *(undefined2 *)0x9624;
    uStack_16 = *(undefined2 *)0x9692;
    uStack_18 = *(undefined2 *)0x9690;
    uStack_1a = *(undefined2 *)0x968e;
    uStack_1c = *(undefined2 *)0x968c;
    uStack_1e = 0;
    uStack_20 = 7;
    uStack_24 = *(undefined2 *)0x96e4;
    uStack_28 = *(undefined2 *)0x96e0;
    uStack_2a = *(undefined2 *)0x96ee;
    uStack_2c = *(undefined2 *)0x96ec;
    uStack_2e = *(undefined2 *)0x96ea;
    uStack_30 = *(undefined2 *)0x96e8;
    uStack_32 = *(undefined2 *)0x96f6;
    uStack_34 = *(undefined2 *)0x96f4;
    uStack_36 = *(undefined2 *)0x96f2;
    uStack_38 = *(undefined2 *)0x96f0;
    uVar11 = 0xdef;
    func_0x0000fd9f(uVar6);
    *(undefined2 *)(unaff_BP + -0x150) = 0;
    *(undefined2 *)(unaff_BP + -0x14c) = 0;
    if (*(int *)(unaff_BP + -0x9c) == 1) {
      *(undefined2 *)(unaff_BP + -0x1b2) = 2;
      if ((*(char *)0x2a0e == '\0') || (3 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 5) || (7 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1a6) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1a6) = 1;
      }
      *(int *)(unaff_BP + -0x14c) = *(int *)(unaff_BP + -0x1aa) + *(int *)(unaff_BP + -0x1a6);
      if ((*(byte *)0x2a0e < 3) || (5 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x19e) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x19e) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 7) && (*(char *)0x2a0e != '\x01')) {
        *(undefined2 *)(unaff_BP + -0x196) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x196) = 1;
      }
      iStack_6 = *(undefined2 *)0x962a;
      iStack_8 = *(int *)0x9628;
      iStack_a = *(undefined2 *)0x9626;
      iStack_c = *(undefined2 *)0x9624;
      iStack_e = *(undefined2 *)0x962a;
      uStack_10 = *(undefined2 *)0x9628;
      uStack_12 = *(undefined2 *)0x9626;
      uStack_14 = *(undefined2 *)0x9624;
      uStack_16 = *(undefined2 *)0x9692;
      uStack_18 = *(undefined2 *)0x9690;
      uStack_1a = *(undefined2 *)0x968e;
      uStack_1c = *(undefined2 *)0x968c;
      uStack_1e = 3;
      uStack_20 = *(undefined2 *)(unaff_BP + -0x1b2);
      uStack_24 = *(undefined2 *)0x9640;
      uStack_28 = *(undefined2 *)0x963c;
      iVar10 = *(int *)(unaff_BP + -0x19e) + *(int *)(unaff_BP + -0x196);
      *(int *)(unaff_BP + -0x150) = iVar10;
      *(int *)(unaff_BP + -0x18e) = -(iVar10 * 5 + -8);
      uStack_2a = 0xdef;
      uStack_2c = 0x6ba;
      FUN_28b3_0d8b();
      uStack_32 = 0x22b2;
      uStack_34 = 0x6c4;
      func_0x000299d1();
      *(int *)(unaff_BP + -0x186) = (*(int *)(unaff_BP + -0x14c) + 0x5e) * 5;
      uStack_32 = 0x22b2;
      uStack_34 = 0x6dd;
      FUN_28b3_0d8b();
      uVar11 = 0x22b2;
      func_0x000299d1(0x22b2);
    }
    else {
      *(undefined2 *)(unaff_BP + -0x1b2) = 7;
      if (*(char *)0x2a0e != '\0') goto LAB_3ab8_5be8;
      iStack_6 = *(undefined2 *)0x962a;
      iStack_8 = *(int *)0x9628;
      iStack_a = *(undefined2 *)0x9626;
      iStack_c = *(undefined2 *)0x9624;
      iStack_e = *(undefined2 *)0x962a;
      uStack_10 = *(undefined2 *)0x9628;
      uStack_12 = *(undefined2 *)0x9626;
      uStack_14 = *(undefined2 *)0x9624;
      uStack_16 = *(undefined2 *)0x9692;
      uStack_18 = *(undefined2 *)0x9690;
      uStack_1a = *(undefined2 *)0x968e;
      uStack_1c = *(undefined2 *)0x968c;
      uStack_1e = 3;
      uStack_20 = 7;
      uStack_24 = *(undefined2 *)0x9640;
      uStack_28 = *(undefined2 *)0x963c;
      uStack_2a = *(undefined2 *)0x96ee;
      uStack_2c = *(undefined2 *)0x96ec;
      uStack_2e = *(undefined2 *)0x96ea;
      uStack_30 = *(undefined2 *)0x96e8;
      uStack_32 = *(undefined2 *)0x96f6;
      uStack_34 = *(undefined2 *)0x96f4;
      uStack_36 = *(undefined2 *)0x96f2;
      uStack_38 = *(undefined2 *)0x96f0;
    }
    func_0x0000fd9f(uVar11);
LAB_3ab8_5be8:
    uVar12 = 0x885;
    func_0x0000a799();
    uVar6 = *(undefined2 *)0x96f8;
    uVar11 = *(undefined2 *)0x96fa;
    *(undefined2 *)(unaff_BP + -0xca) = uVar6;
    *(undefined2 *)(unaff_BP + -200) = uVar11;
    *(undefined2 *)(unaff_BP + -0x13e) = uVar6;
    *(undefined2 *)(unaff_BP + -0x13c) = uVar11;
    *(undefined2 *)(unaff_BP + -0x5c) = 10000;
    *(undefined2 *)(unaff_BP + -0x58) = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = 0;
    *(undefined2 *)(unaff_BP + -0x50) = 0;
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
    *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
LAB_3ab8_5c29:
    do {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xa48 = 3;
      if (*(int *)(unaff_BP + -0x134) != 1) {
        *(undefined2 *)0xa48 = 4;
      }
      iStack_6 = unaff_BP + -0x160;
      iStack_8 = unaff_BP + -0xc6;
      iStack_a = unaff_BP + -0xb2;
      iVar10 = 0x3bf;
      iStack_e = 0x7e2;
      iStack_c = uVar12;
      uVar6 = func_0x00006608();
      *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(int *)0x158 != 0) {
LAB_3ab8_5c7d:
        func_0x00013e19();
LAB_3ab8_5c82:
        iStack_6 = 0x80a;
        func_0x0000daa6();
        uVar6 = func_0x0000abfa();
        return uVar6;
      }
LAB_3ab8_6556:
      if (*(int *)(unaff_BP + -0xc4) == -1) {
        uVar6 = func_0x00013e19();
        if (*(int *)(unaff_BP + 6) != 0) {
          return uVar6;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x96) != 0)) {
          iStack_6 = 0x1107;
          func_0x0000daa6();
          iStack_6 = 0x885;
          while (0 < *(int *)(unaff_BP + -0x96)) {
            uVar6 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x152) = uVar6;
            iStack_8 = 0x829;
            FUN_13bf_0327();
            *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
            iStack_6 = 0x11f2;
          }
          iStack_6 = 0x83f;
          func_0x0000b1d8();
        }
        iStack_6 = 0x848;
        func_0x0000daa6();
        func_0x0000abfa();
        goto LAB_3ab8_6656;
      }
      if (*(int *)(unaff_BP + -0xc4) == 99) goto LAB_3ab8_58ed;
      *(undefined2 *)(unaff_BP + -0x1ba) = 0;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) {
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        if (*(int *)(unaff_BP + -0xb2) < 0x125) goto LAB_3ab8_58ed;
        *(int *)(unaff_BP + -0xc4) = (*(int *)(unaff_BP + -0xb2) + -0x124) / 0x60 + 0x31;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x31) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        uVar6 = *(undefined2 *)0x104e;
        uVar11 = *(undefined2 *)0x1050;
        *(undefined2 *)(unaff_BP + -0x6c) = uVar6;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
        *(undefined2 *)(unaff_BP + -0x90) = uVar6;
        *(undefined2 *)(unaff_BP + -0x8e) = uVar11;
        iStack_6 = 1;
        iStack_8 = 0x11f2;
        iStack_a = 0x8d1;
        iVar10 = FUN_4375_baa1();
        *(int *)(unaff_BP + -0x44) = iVar10;
        if (*(int *)0x158 != 0) goto LAB_3ab8_5c82;
        if (iVar10 == -1) goto LAB_3ab8_58ed;
        if (iVar10 == 0) {
          if (*(int *)(unaff_BP + -0x9c) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(unaff_BP + -0x9c) = 0;
          goto LAB_3ab8_58ed;
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        iVar10 = 0x22b2;
        func_0x00029983();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x6a);
        *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
        *(undefined2 *)0x1050 = uVar6;
        *(undefined2 *)(unaff_BP + -0x9c) = 1;
        if (*(int *)(unaff_BP + -0x14e) == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x14e) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x15a);
        *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x15c);
        *(undefined2 *)(unaff_BP + -0x15e) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x162);
        *(undefined2 *)(unaff_BP + -0x168) = *(undefined2 *)(unaff_BP + -0x164);
        *(undefined2 *)(unaff_BP + -0x166) = uVar6;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
        uVar6 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar6;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x32) {
        bVar2 = *(byte *)0x2a0e;
        *(uint *)(unaff_BP + -0x1b2) = (uint)bVar2;
        if (*(char *)0x15b == '\x02') {
          *(int *)(unaff_BP + -0x1b2) = bVar2 - 1;
        }
        else {
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (8 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (1 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 8;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 1;
        }
        *(undefined1 *)0x2a0e = *(undefined1 *)(unaff_BP + -0x1b2);
        goto LAB_3ab8_58ed;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x33) {
        if (*(int *)0xce6 != 0) {
          uVar6 = func_0x00013e19();
          *(undefined2 *)0xce6 = 0x14;
          return uVar6;
        }
        *(char *)0x2a0f = *(char *)0x2a0f + '\x01';
        if (10 < *(byte *)0x2a0f) {
LAB_3ab8_5eb7:
          *(undefined1 *)0x2a0f = 1;
        }
        goto LAB_3ab8_58ed;
      }
      if ((*(int *)0xce6 == 0) && (*(int *)(unaff_BP + -0xc4) == 0x34)) goto LAB_3ab8_5eb7;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc4) == 100)) {
        uVar6 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar6;
        iStack_6 = *(int *)(unaff_BP + -0xb4);
        iStack_a = 0xa7d;
        iStack_8 = iVar10;
        iVar10 = func_0x00015409();
        if (iVar10 == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
      }
      uVar13 = *(char *)0x15a == '\0';
      if (!(bool)uVar13) goto LAB_3ab8_58ed;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        func_0x000297e6();
        func_0x000297e6();
        uVar12 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar13) goto LAB_3ab8_5c29;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x15e);
      *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)(unaff_BP + -0x160);
      *(undefined2 *)(unaff_BP + -200) = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x13e) = *(undefined2 *)(unaff_BP + -0x168);
      *(undefined2 *)(unaff_BP + -0x13c) = uVar6;
      uVar12 = 0x11f2;
      func_0x00013e19();
      if ((((*(int *)(unaff_BP + -0xb2) < *(int *)0xa5c) ||
           (*(int *)0xa60 < *(int *)(unaff_BP + -0xc6))) ||
          (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) && (*(int *)(unaff_BP + -0x1ba) == 0))
      goto LAB_3ab8_5c29;
      *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
      if (*(int *)(unaff_BP + -0x9c) == 0) {
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_117c();
        iStack_a = 0x22b2;
        iStack_c = 0xbcb;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xbd0;
        FUN_28b3_1582();
        func_0x00029834();
        func_0x00029983();
        if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0xb4) != 2)) {
          puVar8 = (undefined2 *)func_0x0000c4c4();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x1b2) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x1b0) = uVar6;
          func_0x000297e6();
          iStack_6 = 0xc1a;
          func_0x00029b9d();
          func_0x00029983();
          if (*(char *)0x2a0e == '\0') {
            func_0x000297e6();
            iStack_6 = 0xc3a;
            func_0x00029b6d();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029c74();
          uVar16 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x1aa) = (int)uVar16;
          *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)uVar16 >> 0x10);
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029983();
        }
        if (*(char *)0x2a0e != '\0') {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          iStack_6 = 0xce8;
          func_0x00029b6d();
          func_0x00029983();
        }
      }
      else {
        if (*(int *)0xcb6 == 0) {
          uVar6 = *(undefined2 *)0x965e;
          *(undefined2 *)0xb76a = *(undefined2 *)0x965c;
          *(undefined2 *)0xb76c = uVar6;
          uVar6 = *(undefined2 *)0x9660;
          uVar11 = *(undefined2 *)0x9662;
        }
        else {
          uVar6 = *(undefined2 *)0xcbc;
          *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
          *(undefined2 *)0xb76c = uVar6;
          uVar6 = *(undefined2 *)0xcbe;
          uVar11 = *(undefined2 *)0xcc0;
        }
        *(undefined2 *)0xb784 = uVar6;
        *(undefined2 *)0xb786 = uVar11;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        if (*(char *)0x2a0e != '\0') {
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029b6d();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          iStack_a = 0x22b2;
          iStack_c = 0xdba;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xdc3;
          FUN_28b3_0d8b();
          iStack_a = 0x22b2;
          iStack_c = 0xdcc;
          func_0x0002996b();
          iStack_a = 0x22b2;
          iStack_c = 0xdd4;
          func_0x00029b6d();
          iStack_a = 0x22b2;
          iStack_c = 0xdd9;
          func_0x00029af6();
          iStack_a = 0x22b2;
          iStack_c = 0xdde;
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0xde7;
          func_0x000299b9();
          uStack_12 = 0x22b2;
          uStack_14 = 0xdf1;
          func_0x000299d1();
          uStack_12 = 0;
          uStack_14 = 0x22b2;
          uStack_16 = 0xdf9;
          puVar8 = (undefined2 *)FUN_1def_05d1();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x68) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x66) = uVar6;
          func_0x00029834();
          iStack_a = 0x22b2;
          iStack_c = 0xe1c;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xe25;
          func_0x00029834();
          uStack_12 = 0x22b2;
          uStack_14 = 0xe2f;
          func_0x000299d1();
          uStack_12 = 0;
          uStack_14 = 0x22b2;
          uStack_16 = 0xe37;
          puVar8 = (undefined2 *)func_0x0001e558();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -100) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x62) = uVar6;
        }
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b6d();
      func_0x00029983();
      if (*(char *)0xb782 == '\0') {
        *(undefined2 *)(unaff_BP + -0x1b2) = 0x11;
        iStack_e = 0x22b2;
        do {
          iStack_6 = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_8 = *(int *)0xa58 + -1;
          iStack_a = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_c = 1;
          uStack_10 = 0xe98;
          func_0x0000def0();
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
          iStack_e = 0xdef;
        } while (*(int *)(unaff_BP + -0x1b2) < 0x30);
        iStack_6 = *(undefined2 *)(unaff_BP + -0x92);
        iStack_8 = *(int *)(unaff_BP + -0x94);
        iStack_a = 0x29ed;
        iStack_c = unaff_BP + -0x42;
        iStack_e = 0xdef;
        uStack_10 = 0xec3;
        FUN_10ad_1928();
        iStack_6 = 0;
        iStack_8 = 2;
        iStack_a = 1;
        iStack_c = unaff_BP + -0x42;
        iStack_e = 0x11f2;
        uStack_10 = 0xedb;
        FUN_1000_02b5();
        iStack_6 = *(undefined2 *)0x9660;
        iStack_8 = 0xdef;
        iStack_a = 0xeef;
        func_0x000297e6();
        iStack_8 = 0x22b2;
        iStack_a = 0xef8;
        func_0x00029b6d();
        iStack_c = 0x22b2;
        iStack_e = 0xf02;
        func_0x00029983();
        iStack_8 = 0x29fb;
        iStack_a = unaff_BP + -0x42;
        iStack_c = 0x22b2;
        iStack_e = 0xf0f;
        FUN_10ad_1928();
        iStack_6 = 3;
        iStack_8 = 1;
        iStack_a = unaff_BP + -0x42;
        iStack_c = 0x11f2;
        iStack_e = 0xf27;
        FUN_1000_02b5();
      }
      uVar13 = 0;
      if (*(int *)(unaff_BP + -0x1ba) != 0) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        uVar13 = false;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        break;
      }
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar13) goto code_r0x00040f9e;
LAB_3ab8_6451:
      uVar12 = 0x22b2;
    } while( true );
  }
  *(undefined2 *)(unaff_BP + -0x96) = 0;
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  uVar6 = FUN_28b3_1181();
  if ((bool)uVar13) {
    if (*(int *)(unaff_BP + 6) == 0) {
      halt_baddata();
    }
    return uVar6;
  }
  *(undefined1 *)(unaff_BP + -0x4d) = *(undefined1 *)0xa6a;
  *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
  *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b6d();
  func_0x00029983();
  iStack_6 = 0x1148;
  func_0x0000daa6();
  puVar9 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while (uVar13 = *(int *)(unaff_BP + -0x136) == 0, 0 < *(int *)(unaff_BP + -0x136)) {
    func_0x00029834();
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      puVar9 = &uStack_20;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uStack_24 = 0x11b3;
      FUN_13bf_01c1();
      *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + 1;
    }
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  uVar6 = func_0x0000abfa();
  *(undefined2 *)(unaff_BP + -0x14e) = 0;
  if (*(int *)(unaff_BP + 6) != 0) {
    return uVar6;
  }
LAB_3ab8_6656:
  if (*(int *)(unaff_BP + -0x9c) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  goto LAB_3ab8_58ed;
code_r0x00040f9e:
  *(undefined2 *)(unaff_BP + -0x1b2) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x1b0) = 0xffff;
  puVar9 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined1 *)(unaff_BP + -0x71) = 9;
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while( true ) {
    if (*(int *)(unaff_BP + -0x136) < 1) goto LAB_3ab8_6451;
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029d78();
    uVar6 = 0x22b2;
    uVar16 = FUN_28b3_0f51();
    iVar10 = (int)((ulong)uVar16 >> 0x10);
    *(int *)(unaff_BP + -0x1aa) = (int)uVar16;
    *(int *)(unaff_BP + -0x1a8) = iVar10;
    if (((int)uVar16 != *(int *)(unaff_BP + -0x1b2)) || (iVar10 != *(int *)(unaff_BP + -0x1b0))) {
      puVar9 = &uStack_20;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uVar6 = 0x11f2;
      uStack_24 = 0x1038;
      func_0x00013e46();
    }
    uVar11 = *(undefined2 *)(unaff_BP + -0x1a8);
    *(undefined2 *)(unaff_BP + -0x1b2) = *(undefined2 *)(unaff_BP + -0x1aa);
    *(undefined2 *)(unaff_BP + -0x1b0) = uVar11;
    *(undefined2 *)0xc20 = 1;
    *(undefined2 *)0xa4a = 1;
    *(undefined2 *)0xa48 = 2;
    iStack_6 = unaff_BP + -0x160;
    iStack_8 = unaff_BP + -0xc6;
    iStack_a = unaff_BP + -0xb2;
    iStack_e = 0x1078;
    iStack_c = uVar6;
    uVar6 = func_0x00006608();
    *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xa4a = 0;
    *(undefined2 *)0xa48 = 0;
    uVar13 = *(int *)0x158 == 0;
    if (!(bool)uVar13) goto LAB_3ab8_5c7d;
    func_0x000297e6();
    func_0x000297e6();
    iVar10 = 0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar13) break;
    func_0x000297e6();
    func_0x000297e6();
    iVar10 = 0x22b2;
    FUN_28b3_1181();
    if (((!(bool)uVar13) || (*(int *)(unaff_BP + -0xc4) != 0)) || (*(int *)(unaff_BP + -0xb4) != 0))
    break;
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  goto LAB_3ab8_6556;
LAB_3ab8_51df:
  pcVar5 = (code *)swi(0x3f);
  iVar7 = (*pcVar5)();
  if (iVar7 == -1) goto LAB_3ab8_50e8;
  if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
  uVar6 = *(undefined2 *)0x9660;
  uVar11 = *(undefined2 *)0x9662;
  *(undefined2 *)(unaff_BP + -0x24) = uVar6;
  *(undefined2 *)(unaff_BP + -0x22) = uVar11;
  *(undefined2 *)(unaff_BP + -0x20) = uVar6;
  *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c2c();
  func_0x0002996b();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xfdbf;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xfdc4;
  func_0x0002a11e();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xfdf7;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xfdfc;
  func_0x0002a10c();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  *(undefined2 *)(unaff_BP + -0xb4) = 0;
LAB_3ab8_529d:
  if (*(int *)(unaff_BP + -0xb4) != 0) {
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xfe3f;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xfe48;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0xfe4d;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe57;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    iVar10 = 0x11f2;
    uStack_14 = 0xfe5c;
    lVar17 = FUN_13bf_39a0();
    *(undefined2 *)(unaff_BP + -0xae) = (int)lVar17;
    *(undefined2 *)(unaff_BP + -0xac) = (int)((ulong)lVar17 >> 0x10);
    if (lVar17 == 0) goto LAB_3ab8_50e8;
    uVar13 = *(int *)(unaff_BP + -0xac) == 0;
    if (*(int *)(unaff_BP + -0xac) < 0) {
      iStack_6 = 0xfe7e;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      iStack_6 = 0x11f2;
      iStack_8 = -0x16e;
      FUN_1000_0599();
      iStack_6 = -0x163;
      func_0x00012276();
LAB_3ab8_531d:
      iVar10 = 0x11f2;
      goto LAB_3ab8_50e8;
    }
    iStack_6 = 0x11f2;
    iStack_8 = -0x155;
    puVar15 = (undefined2 *)func_0x0000013f();
    puVar9 = (undefined2 *)puVar15;
    puVar8 = (undefined2 *)(unaff_BP + -0x24);
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar4 = *puVar3;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar13) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        iStack_6 = 0xfef4;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        iStack_6 = 0x11f2;
        iStack_8 = -0xf8;
        FUN_1000_0599();
        iStack_6 = 0xdef;
        iStack_8 = -0xe9;
        func_0x00012276();
        goto LAB_3ab8_531d;
      }
    }
  }
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0xff2c;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xff34;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xff3e;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xff46;
  func_0x000297e6();
  uStack_1a = 0x22b2;
  uStack_1c = 0xff50;
  func_0x000299d1();
  uStack_1a = 0x22b2;
  uStack_1c = 0xff58;
  func_0x000297e6();
  uStack_24 = 0xff62;
  func_0x000299d1();
  uStack_24 = 0xff67;
  uVar16 = FUN_1000_0718();
  *(undefined2 *)(unaff_BP + -0x52) = (int)uVar16;
  *(undefined2 *)(unaff_BP + -0x50) = (int)((ulong)uVar16 >> 0x10);
  if (*(int *)(unaff_BP + -0xaa) == 0) {
LAB_2bb4_4927:
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
    iStack_6 = 0x32b2;
    iStack_8 = 0x5db;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    iStack_8 = 0x5e0;
    FUN_32b2_7258();
    iStack_e = 0x32b2;
    uStack_10 = 0x5ea;
    FUN_32b2_6eb1();
    iStack_e = 0x32b2;
    uStack_10 = 0x5f2;
    FUN_32b2_6cc6();
    iStack_e = 0x32b2;
    uStack_10 = 0x5f7;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x601;
    FUN_32b2_6eb1();
    uStack_16 = *(undefined2 *)(unaff_BP + -100);
    uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
    uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
    uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
    uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
    uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
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
    uVar6 = *(undefined2 *)(unaff_BP + -0x60);
    *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
    *(undefined2 *)(unaff_BP + -0x84) = uVar6;
    uVar6 = *(undefined2 *)(unaff_BP + -0x88);
    *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
    *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
    puVar9 = &uStack_24;
    puVar8 = (undefined2 *)(unaff_BP + 0x1c);
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar15;
    }
    uStack_28 = 0x684;
    iVar10 = FUN_3ab8_522f();
    uVar13 = 0;
    uVar14 = iVar10 == 0;
    if (!(bool)uVar14) {
      FUN_32b2_6d14();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_6fc7();
      FUN_32b2_7258();
      FUN_32b2_7191();
      if ((bool)uVar13 || (bool)uVar14) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if ((bool)uVar13 || (bool)uVar14) {
          *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
          *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
          *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
          *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
        }
      }
    }
    FUN_32b2_6d14();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_710c();
    FUN_32b2_7154();
    FUN_32b2_7191();
    if ((bool)uVar13) {
      uVar6 = 0;
    }
    else {
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_7191();
      if (!(bool)uVar13) {
        *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
        *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
        *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
        *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
      }
      iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_8 = *(int *)(unaff_BP + -0xbc);
      iStack_a = 0x32b2;
      iStack_c = 0x774;
      FUN_32b2_7592();
      iStack_6 = 0x77e;
      FUN_32b2_6d14();
      iStack_6 = 0x786;
      FUN_32b2_70dc();
      iStack_6 = 0x78e;
      FUN_32b2_6d14();
      iStack_6 = 0x797;
      FUN_32b2_710c();
      iStack_6 = 0x79c;
      FUN_32b2_7182();
      iStack_6 = 0x7a5;
      FUN_32b2_6e99();
      iStack_6 = 0x7ad;
      FUN_32b2_710c();
      iStack_6 = 0x7b5;
      FUN_32b2_7154();
      iStack_6 = 0x7be;
      FUN_32b2_6e99();
      iStack_6 = 0x7c7;
      FUN_32b2_6eb1();
      iStack_6 = unaff_BP + -0x62;
      iStack_8 = 0x32b2;
      iStack_a = 0x7d9;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      iStack_a = 0x7de;
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
      uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
      uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
      uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
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
      uVar13 = (undefined1 *)0xffc9 < &uStack_38;
      uVar14 = &stack0x0000 == (undefined1 *)0x2;
      iStack_6 = 0x84f;
      FUN_32b2_6cc6();
      iStack_6 = 0x857;
      FUN_32b2_6cc6();
      iStack_6 = 0x85c;
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uVar6 = *(undefined2 *)(unaff_BP + 8);
        *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
        *(undefined2 *)(unaff_BP + -0x60) = uVar6;
      }
      iStack_6 = 0x872;
      FUN_32b2_6cc6();
      iStack_6 = 0x87a;
      FUN_32b2_6cc6();
      iStack_6 = 0x87f;
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uVar6 = *(undefined2 *)(unaff_BP + 0xc);
        *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
        *(undefined2 *)(unaff_BP + -0x88) = uVar6;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x60);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
      puVar8[1] = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x88);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar8[1] = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x60);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
      puVar8[1] = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x88);
      puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
      *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar8[1] = uVar6;
      piVar1 = (int *)(unaff_BP + -0x36);
      *piVar1 = *piVar1 + 1;
      uVar14 = *piVar1 == 0;
      iStack_6 = 0x8d7;
      FUN_32b2_6d14();
      iStack_6 = 0x8e0;
      FUN_32b2_6d14();
      iStack_6 = 0x8e5;
      FUN_32b2_7191();
      if (!(bool)uVar13 && !(bool)uVar14) {
        iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
        iStack_8 = *(int *)(unaff_BP + -0xba);
        iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
        iStack_c = 0x32b2;
        iStack_e = 0x8ff;
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
        iStack_a = 0x32b2;
        iStack_c = 0x969;
        FUN_32b2_6cc6();
        iStack_a = 0x32b2;
        iStack_c = 0x96e;
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
        uStack_1c = 0x98f;
        FUN_32b2_6eb1();
        uStack_1a = *(undefined2 *)(unaff_BP + -100);
        uStack_1c = *(undefined2 *)(unaff_BP + -0x66);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
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
        uVar13 = &stack0x0000 == (undefined1 *)0x4;
        iStack_6 = 0x32b2;
        iStack_8 = 0x9df;
        FUN_32b2_6cc6();
        iStack_6 = 0x32b2;
        iStack_8 = 0x9e7;
        FUN_32b2_6cc6();
        iStack_6 = 0x32b2;
        iStack_8 = 0x9ec;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + 8);
          *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
          *(undefined2 *)(unaff_BP + -0x60) = uVar6;
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
        if ((bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + 0xc);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
          *(undefined2 *)(unaff_BP + -0x88) = uVar6;
        }
        uVar6 = *(undefined2 *)(unaff_BP + -0x60);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
        puVar8[1] = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x88);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
        puVar8[1] = uVar6;
        *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x36);
    }
    return uVar6;
  }
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0xff8c;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xff94;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xff9e;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xffa6;
  func_0x000297e6();
  uStack_1a = 0x22b2;
  uStack_1c = 0xffb0;
  func_0x000299d1();
  uStack_1a = 0x22b2;
  uStack_1c = 0xffb8;
  func_0x000297e6();
  uStack_24 = 0xffc2;
  func_0x000299d1();
  uStack_24 = 0xffc7;
  FUN_1def_043a();
  uVar6 = *(undefined2 *)(unaff_BP + -0x66);
  *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0x68);
  *(undefined2 *)0xb30e = uVar6;
  uVar6 = *(undefined2 *)(unaff_BP + -0x62);
  *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -100);
  *(undefined2 *)0xb380 = uVar6;
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xfffc;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 5;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 10;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x14;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0x1d;
  FUN_1def_05d1();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0x4d;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0x56;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0x5b;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x65;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0x6e;
  func_0x0001e558();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xd4;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xdd;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0xe2;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xec;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf5;
  FUN_1def_05d1();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0x125;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0x12e;
  func_0x000297e6();
  iStack_a = 0x22b2;
  iStack_c = 0x133;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0x13d;
  func_0x000299d1();
  uStack_12 = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0x146;
  func_0x0001e558();
  uVar13 = (undefined1 *)0xffed < &uStack_12;
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299b9();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029c2c();
  func_0x000299d1();
  func_0x00029834();
  func_0x00029834();
  func_0x00029bfc();
  func_0x000299b9();
  func_0x00029ae7();
  FUN_28b3_1181();
  if (!(bool)uVar13) {
    func_0x00029834();
    func_0x00029834();
    func_0x00029bfc();
    func_0x00029c44();
    func_0x000299b9();
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      iStack_6 = *(int *)(unaff_BP + -0x194);
      iStack_8 = *(int *)(unaff_BP + -0x196);
      iStack_a = 0x22b2;
      iStack_c = 0x238;
      puVar8 = (undefined2 *)FUN_28b3_1582();
      *(undefined2 *)(unaff_BP + -0x18e) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x18c) = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x18a) = puVar8[2];
      *(undefined2 *)(unaff_BP + -0x188) = puVar8[3];
      func_0x00029834();
      func_0x00029c2c();
      FUN_28b3_112c();
      func_0x00029c2c();
      func_0x00029c2c();
      func_0x00029c74();
      iStack_a = 0x22b2;
      iStack_c = 0x287;
      func_0x000299d1();
      iStack_a = 0x22b2;
      iStack_c = 0x28c;
      puVar8 = (undefined2 *)FUN_28b3_1582();
      uVar13 = (undefined1 *)0xfff7 < &iStack_8;
      uVar14 = &stack0x0000 == (undefined1 *)0x0;
      *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
      *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
      *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
      *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        iVar10 = *(int *)(unaff_BP + -0x50);
        *(undefined2 *)(unaff_BP + -0x1aa) = *(undefined2 *)(unaff_BP + -0x52);
        *(int *)(unaff_BP + -0x1a8) = iVar10 + 0x5a;
        iStack_6 = 0x22b2;
        iStack_8 = 0x2d2;
        func_0x00021eee();
        uVar6 = *(undefined2 *)(unaff_BP + -0x1a8);
        *(undefined2 *)(unaff_BP + -0x52) = *(undefined2 *)(unaff_BP + -0x1aa);
        *(undefined2 *)(unaff_BP + -0x50) = uVar6;
        func_0x00029834();
        FUN_28b3_1c08();
        FUN_28b3_1177();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_112c();
        func_0x00029c2c();
        func_0x00029c2c();
        func_0x00029c74();
        iStack_a = 0x22b2;
        iStack_c = 0x33e;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0x343;
        puVar8 = (undefined2 *)FUN_28b3_1582();
        uVar14 = &stack0x0000 == (undefined1 *)0x0;
        *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
        *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
        *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
        *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
      }
      uVar13 = (bool)uVar13 && (undefined1 *)0xfff7 < &iStack_8;
      func_0x00029834();
      func_0x00029834();
      FUN_28b3_1181();
      if (!(bool)uVar13) {
        func_0x00029834();
        func_0x00029834();
        FUN_28b3_1181();
        if ((bool)uVar13 || (bool)uVar14) {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029c74();
          lVar17 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x1aa) = (int)lVar17;
          *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)lVar17 >> 0x10);
          if ((0x270e < lVar17) && (lVar17 < 0x2712)) {
            *(undefined2 *)(unaff_BP + -0x1aa) = 10000;
            *(undefined2 *)(unaff_BP + -0x1a8) = 0;
          }
          *(undefined2 *)(unaff_BP + -0x5c) = *(undefined2 *)(unaff_BP + -0x1aa);
          *(undefined2 *)(unaff_BP + -0x58) = 0;
          *(undefined2 *)(unaff_BP + -0x5a) = 0;
          *(undefined2 *)(unaff_BP + -0x54) = 0;
          *(undefined2 *)(unaff_BP + -0x56) = 0;
          func_0x000297e6();
          func_0x00029b6d();
          func_0x00029834();
          func_0x0002996b();
          func_0x00029c9d();
          func_0x0002996b();
          func_0x00029983();
          func_0x000297e6();
          uVar6 = *(undefined2 *)(unaff_BP + -0x1aa);
          *(undefined2 *)(unaff_BP + -0x1b4) = 0;
          *(undefined2 *)(unaff_BP + -0x1b6) = 0;
          *(undefined2 *)(unaff_BP + -0x1b8) = 0;
          *(undefined2 *)(unaff_BP + -0x1ba) = uVar6;
          func_0x00029da5();
          func_0x00029c9d();
          func_0x00029d78();
          func_0x00029c2c();
          func_0x00029983();
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          goto LAB_3ab8_58ed;
        }
      }
    }
  }
  *(undefined2 *)0xc22 = 1;
  iStack_6 = 0x22b2;
  iStack_8 = 0x1e0;
  FUN_1000_0599();
  iStack_6 = 0x1eb;
  func_0x00012276();
  halt_baddata();
}



/* 3ab8:517f  FUN_3ab8_517f  105 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x0003f73d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0003f73d) */
/* WARNING: Removing unreachable block (ram,0x000403b8) */
/* WARNING: Removing unreachable block (ram,0x000403c3) */

undefined2 __cdecl16far FUN_3ab8_517f(void)

{
  int *piVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int unaff_BP;
  undefined2 *puVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  long lVar17;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  int iStack_2;
  
  uVar6 = 0x3ab8;
  while( true ) {
    iStack_4 = -0x2f1;
    iStack_2 = uVar6;
    FUN_21f2_2d26();
    iStack_2 = 0x22b2;
    iStack_4 = -0x2e1;
    FUN_1def_07a4();
    iStack_2 = unaff_BP + -0x160;
    iStack_4 = unaff_BP + -0x132;
    iStack_6 = 1;
    iStack_8 = 0x1bb4;
    iVar10 = 0x1bb4;
    iStack_a = 0xfd3e;
    iVar7 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x16a) = iVar7;
    if (*(int *)0x158 != 0) break;
    if (iVar7 == -1) {
      while (*(undefined2 *)(unaff_BP + -0xaa) = 0, 0 < *(int *)(unaff_BP + -0x9c)) {
        if (*(int *)(unaff_BP + -0x9c) == 1) {
          func_0x000297e6();
          func_0x0002996b();
          iVar10 = 0x22b2;
          func_0x00029983();
        }
        else {
          uVar6 = *(undefined2 *)0x1054;
          *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0x1052;
          *(undefined2 *)(unaff_BP + -0x6a) = uVar6;
          uVar6 = *(undefined2 *)0x1058;
          *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x1056;
          *(undefined2 *)(unaff_BP + -0x8e) = uVar6;
        }
        iStack_2 = *(int *)(unaff_BP + -0x9c);
        iStack_6 = 0xfa91;
        iStack_4 = iVar10;
        iVar7 = FUN_3ab8_4671();
        *(int *)(unaff_BP + -0x44) = iVar7;
        if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
        if ((iVar7 == -1) && (*(int *)(unaff_BP + -0x9c) == 1)) goto LAB_3ab8_4a7d;
        if (iVar7 != -1) {
          if ((iVar7 != 0) || (*(int *)(unaff_BP + -0x9c) != 1)) {
            if ((iVar7 == 0) && (*(int *)(unaff_BP + -0x9c) == 2)) {
              do {
                *(undefined2 *)(unaff_BP + -0xaa) = 1;
                do {
                  do {
                    iStack_2 = 0x296c;
                    iStack_4 = unaff_BP + -0x132;
                    iStack_8 = 0xfaf9;
                    iStack_6 = iVar10;
                    FUN_21f2_3454();
                    iStack_2 = unaff_BP + -0xca;
                    iStack_4 = unaff_BP + -0x132;
                    *(undefined2 *)0xc20 = 1;
                    iStack_6 = 1;
                    iStack_8 = 0x22b2;
                    iVar10 = 0x1bb4;
                    iStack_a = 0xfb1c;
                    iVar7 = FUN_1def_0904();
                    *(int *)(unaff_BP + -0xc4) = iVar7;
                    *(undefined2 *)0xc20 = 0;
                    if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
                    if (iVar7 == -1) goto LAB_3ab8_4baf;
                  } while (*(int *)(unaff_BP + -0xb4) == 0);
                  iStack_2 = *(undefined2 *)(unaff_BP + -0xb4);
                  iStack_4 = 0x1bb4;
                  iVar10 = 0x11f2;
                  iStack_6 = 0xfb55;
                  iVar7 = func_0x00015409();
                } while (iVar7 == 0);
                while( true ) {
                  iStack_2 = 0x2978;
                  iStack_4 = unaff_BP + -0x132;
                  iStack_8 = 0xfb72;
                  iStack_6 = iVar10;
                  FUN_21f2_3454();
                  iStack_2 = unaff_BP + -0x13a;
                  iStack_4 = unaff_BP + -0x132;
                  *(undefined2 *)0xc20 = 1;
                  iStack_6 = 1;
                  iStack_8 = 0x22b2;
                  iVar10 = 0x1bb4;
                  iStack_a = 0xfb95;
                  iVar7 = FUN_1def_0904();
                  *(int *)(unaff_BP + -0xc4) = iVar7;
                  *(undefined2 *)0xc20 = 0;
                  if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
                  if (iVar7 == -1) break;
                  if (*(int *)(unaff_BP + -0xb4) != 0) {
                    iStack_2 = *(int *)(unaff_BP + -0xb4);
                    iStack_4 = 0x1bb4;
                    iVar10 = 0x11f2;
                    iStack_6 = 0xfbce;
                    iVar7 = func_0x00015409();
                    if (iVar7 != 0) goto LAB_3ab8_50e8;
                  }
                }
              } while( true );
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b9d();
            iVar10 = 0x22b2;
            func_0x00029983();
            *(undefined2 *)(unaff_BP + -0x5c) = 10000;
            *(undefined2 *)(unaff_BP + -0x58) = 0;
            *(undefined2 *)(unaff_BP + -0x5a) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x50) = 0;
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            if (*(int *)(unaff_BP + -0x9c) == 1) {
              uVar6 = *(undefined2 *)(unaff_BP + -0x6a);
              *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
              *(undefined2 *)0x1050 = uVar6;
            }
            else {
              uVar6 = *(undefined2 *)(unaff_BP + -0x8e);
              *(undefined2 *)0x1056 = *(undefined2 *)(unaff_BP + -0x90);
              *(undefined2 *)0x1058 = uVar6;
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029b9d();
              func_0x00029b6d();
              func_0x00029d78();
              iVar10 = 0x22b2;
              uVar6 = FUN_28b3_0f51();
              *(undefined2 *)(unaff_BP + -0x5c) = uVar6;
            }
            break;
          }
          *(undefined2 *)(unaff_BP + -0x9c) = 0;
        }
LAB_3ab8_4baf:
        if ((*(int *)(unaff_BP + -0x9c) != 0) && (*(int *)(unaff_BP + -0x9c) != 2))
        goto FUN_3ab8_4e5f;
        *(undefined2 *)(unaff_BP + -0x134) = 1;
        func_0x0000c340();
        iStack_2 = 0x885;
        iStack_4 = -0x8a7;
        FUN_21f2_3454();
        if (*(int *)(unaff_BP + -0x9c) == 2) {
          iStack_2 = 0x22b2;
          iStack_4 = -0x890;
          FUN_21f2_2d26();
        }
        iStack_2 = 0x22b2;
        iStack_4 = -0x880;
        FUN_21f2_2d26();
        iStack_2 = 0x22b2;
        iStack_4 = -0x870;
        FUN_21f2_2d26();
        iStack_2 = 0x22b2;
        iStack_4 = -0x860;
        FUN_21f2_2d26();
        iStack_2 = 0x22b2;
        iStack_4 = -0x850;
        FUN_21f2_2d26();
        iStack_2 = 0x22b2;
        iStack_4 = -0x840;
        FUN_21f2_2d26();
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x96) != 0)) {
          iStack_2 = *(undefined2 *)(unaff_BP + -0x92);
          iStack_4 = *(int *)(unaff_BP + -0x94);
          iStack_6 = 0x2943;
          iStack_8 = unaff_BP + -0x42;
          iStack_a = 0x22b2;
          uStack_c = 0xf7ed;
          FUN_10ad_1928();
          iStack_2 = unaff_BP + -0x132;
          iStack_4 = 0x11f2;
          iStack_6 = 0xf7fe;
          FUN_21f2_2d26();
        }
        uVar6 = 0x22b2;
        if (((*(int *)(unaff_BP + -0x9c) == 2) && (*(int *)(unaff_BP + -0x96) != 0)) &&
           (*(char *)0xb782 == '\0')) {
          *(undefined2 *)(unaff_BP + -0x16a) = 0x11;
          iStack_a = uVar6;
          while (*(int *)(unaff_BP + -0x16a) < 0x30) {
            iStack_2 = *(undefined2 *)(unaff_BP + -0x16a);
            iStack_4 = *(int *)0xa58 + -1;
            iStack_6 = *(undefined2 *)(unaff_BP + -0x16a);
            iStack_8 = 1;
            uStack_c = 0xf863;
            func_0x0000def0();
            *(int *)(unaff_BP + -0x16a) = *(int *)(unaff_BP + -0x16a) + 1;
            iStack_a = 0xdef;
          }
          iStack_2 = *(undefined2 *)0x1054;
          iStack_4 = *(int *)0x1052;
          iStack_6 = 0x2950;
          iStack_8 = unaff_BP + -0x42;
          uStack_c = 0xf885;
          FUN_10ad_1928();
          iStack_2 = 0;
          iStack_4 = 2;
          iStack_6 = 1;
          iStack_8 = unaff_BP + -0x42;
          iStack_a = 0x11f2;
          uStack_c = 0xf89d;
          FUN_1000_02b5();
          iStack_2 = *(undefined2 *)0x9660;
          iStack_4 = *(int *)0x1058;
          iStack_6 = *(undefined2 *)0x1056;
          iStack_8 = 0x295e;
          iStack_a = unaff_BP + -0x42;
          uStack_c = 0xdef;
          uStack_e = 0xf8bd;
          FUN_10ad_1928();
          iStack_2 = 0;
          iStack_4 = 0;
          iStack_6 = 3;
          iStack_8 = 1;
          iStack_a = unaff_BP + -0x42;
          uStack_c = 0x11f2;
          uVar6 = 0xdef;
          uStack_e = 0xf8d5;
          FUN_1000_02b5();
        }
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc1a = 1;
        *(undefined2 *)0xc20 = 1;
        iStack_2 = unaff_BP + -0x160;
        iStack_4 = unaff_BP + -0x132;
        iStack_6 = *(undefined2 *)(unaff_BP + -0x96);
        iStack_a = 0xf901;
        iStack_8 = uVar6;
        uVar6 = FUN_1def_0904();
        *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc20 = 0;
        iVar10 = 0x885;
        func_0x0000abfa();
        if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
        if (*(int *)0xc18 != 0) {
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          func_0x000297e6();
          func_0x00029d78();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf947;
          func_0x000299d1();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf950;
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 0xf955;
          func_0x00029d78();
          uStack_e = 0x22b2;
          uStack_10 = 0xf95f;
          func_0x000299d1();
          uStack_e = 0x22b2;
          iVar10 = 0x3bf;
          uStack_10 = 0xf964;
          func_0x0000507a();
          goto LAB_3ab8_4baf;
        }
        if (*(int *)(unaff_BP + -0xc4) == -1) {
          iStack_2 = 0xf979;
          func_0x0000daa6();
          iStack_2 = 0x885;
          while (0 < *(int *)(unaff_BP + -0x96)) {
            uVar6 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x152) = uVar6;
            iStack_4 = -0x66e;
            FUN_13bf_0327();
            *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
            iStack_2 = 0x11f2;
          }
          iStack_2 = -0x658;
          func_0x0000b1d8();
          iVar10 = 0x885;
          func_0x0000abfa();
          goto LAB_3ab8_4baf;
        }
        if (*(int *)(unaff_BP + -0xc4) == 0x14) {
LAB_3ab8_4a7d:
          uVar6 = *(undefined2 *)0x9662;
          *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)0x9660;
          *(undefined2 *)(unaff_BP + -0x92) = uVar6;
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          *(undefined2 *)(unaff_BP + -0x14e) = 0;
          while (*(int *)(unaff_BP + 6) == 0) {
            iStack_4 = -0x9d3;
            iStack_2 = iVar10;
            func_0x00024c86();
            iStack_2 = 0x22b2;
            iStack_4 = -0x9c3;
            FUN_21f2_2d26();
            iStack_2 = 0x22b2;
            iStack_4 = -0x9b3;
            FUN_21f2_2d26();
            iStack_2 = 0x22b2;
            iStack_4 = -0x9a3;
            FUN_21f2_2d26();
            iStack_2 = 0x22b2;
            iStack_4 = -0x993;
            FUN_21f2_2d26();
            iStack_2 = 0x22b2;
            iStack_4 = -0x983;
            FUN_1def_07a4();
            func_0x0000c340();
            *(undefined2 *)0xc1a = 1;
            *(undefined2 *)0xc20 = 1;
            iStack_2 = unaff_BP + -0x160;
            iStack_4 = unaff_BP + -0x132;
            iStack_6 = 0;
            iStack_8 = 0x885;
            iStack_a = 0xf6a9;
            uVar6 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
            if (*(int *)0xc18 == 0) {
              if (*(int *)(unaff_BP + -0xb4) != 0) {
                iStack_2 = *(int *)(unaff_BP + -0xb4);
                iStack_4 = 0x1bb4;
                iVar10 = 0x11f2;
                iStack_6 = 0xf71f;
                iVar7 = func_0x00015409();
                if (iVar7 != 0) {
                  *(undefined2 *)(unaff_BP + -0x9c) = 0xffff;
                  break;
                }
              }
              uVar6 = FUN_3ab8_4ca3();
              return uVar6;
            }
            *(undefined2 *)(unaff_BP + -0x96) = 0;
            func_0x000297e6();
            func_0x00029d78();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf6e3;
            func_0x000299d1();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf6ec;
            func_0x000297e6();
            iStack_6 = 0x22b2;
            iStack_8 = 0xf6f1;
            func_0x00029d78();
            uStack_e = 0x22b2;
            uStack_10 = 0xf6fb;
            func_0x000299d1();
            uStack_e = 0x22b2;
            iVar10 = 0x3bf;
            uStack_10 = 0xf700;
            func_0x0000507a();
          }
          goto LAB_3ab8_4baf;
        }
        if (*(int *)(unaff_BP + -0xb4) == 0) goto LAB_3ab8_4baf;
        iStack_2 = *(int *)(unaff_BP + -0xb4);
        iStack_4 = 0x885;
        iVar10 = 0x11f2;
        iStack_6 = 0xf9d5;
        iVar7 = func_0x00015409();
        if (iVar7 == 0) goto LAB_3ab8_4baf;
FUN_3ab8_4e5f:
        if (*(int *)(unaff_BP + -0x9c) == -1) {
          *(undefined2 *)(unaff_BP + -0x9c) = 0;
        }
        if (*(int *)(unaff_BP + -0x9c) != 1) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x166);
          *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x168);
          *(undefined2 *)(unaff_BP + -0x62) = uVar6;
          func_0x000297e6();
          func_0x0002996b();
          iVar10 = 0x22b2;
          func_0x00029983();
          uVar6 = *(undefined2 *)(unaff_BP + -0x166);
          *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)(unaff_BP + -0x168);
          *(undefined2 *)(unaff_BP + -0x162) = uVar6;
          *(undefined2 *)(unaff_BP + -0x14e) = 1;
        }
      }
    }
    else {
      if (iVar7 == 1) {
        pcVar5 = (code *)swi(0x3f);
        iVar7 = (*pcVar5)();
        if (iVar7 == -1) goto LAB_3ab8_50e8;
        if (*(int *)0x158 != 0) break;
        uVar6 = *(undefined2 *)0x9660;
        uVar11 = *(undefined2 *)0x9662;
        *(undefined2 *)(unaff_BP + -0x24) = uVar6;
        *(undefined2 *)(unaff_BP + -0x22) = uVar11;
        *(undefined2 *)(unaff_BP + -0x20) = uVar6;
        *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x0002996b();
        func_0x00029d78();
        iStack_6 = 0x22b2;
        iStack_8 = 0xfdbf;
        func_0x000299d1();
        iStack_6 = 0x22b2;
        iStack_8 = 0xfdc4;
        func_0x0002a11e();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029d78();
        iStack_6 = 0x22b2;
        iStack_8 = 0xfdf7;
        func_0x000299d1();
        iStack_6 = 0x22b2;
        iStack_8 = 0xfdfc;
        func_0x0002a10c();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029983();
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
      }
      if (*(int *)(unaff_BP + -0xb4) == 0) goto LAB_3ab8_539a;
      func_0x000297e6();
      func_0x00029d78();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfe3f;
      func_0x000299d1();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfe48;
      func_0x000297e6();
      iStack_6 = 0x22b2;
      iStack_8 = 0xfe4d;
      func_0x00029d78();
      uStack_e = 0x22b2;
      uStack_10 = 0xfe57;
      func_0x000299d1();
      uStack_e = 0x22b2;
      iVar10 = 0x11f2;
      uStack_10 = 0xfe5c;
      lVar17 = FUN_13bf_39a0();
      *(undefined2 *)(unaff_BP + -0xae) = (int)lVar17;
      *(undefined2 *)(unaff_BP + -0xac) = (int)((ulong)lVar17 >> 0x10);
      if (lVar17 != 0) {
        uVar13 = *(int *)(unaff_BP + -0xac) == 0;
        if (-1 < *(int *)(unaff_BP + -0xac)) {
          iStack_2 = 0x11f2;
          iStack_4 = -0x155;
          puVar15 = (undefined2 *)func_0x0000013f();
          puVar9 = (undefined2 *)puVar15;
          puVar8 = (undefined2 *)(unaff_BP + -0x24);
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar4 = puVar8;
            puVar8 = puVar8 + 1;
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar4 = *puVar3;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar13) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar13) {
              iStack_2 = 0xfef4;
              func_0x00012276();
              *(undefined2 *)0xc22 = 1;
              iStack_2 = 0x11f2;
              iStack_4 = -0xf8;
              FUN_1000_0599();
              iStack_2 = 0xdef;
              iStack_4 = -0xe9;
              func_0x00012276();
              goto LAB_3ab8_531d;
            }
          }
LAB_3ab8_539a:
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 0xff2c;
          func_0x000299d1();
          iStack_6 = 0x22b2;
          iStack_8 = 0xff34;
          func_0x000297e6();
          uStack_e = 0x22b2;
          uStack_10 = 0xff3e;
          func_0x000299d1();
          uStack_e = 0x22b2;
          uStack_10 = 0xff46;
          func_0x000297e6();
          uStack_16 = 0x22b2;
          uStack_18 = 0xff50;
          func_0x000299d1();
          uStack_16 = 0x22b2;
          uStack_18 = 0xff58;
          func_0x000297e6();
          uStack_20 = 0xff62;
          func_0x000299d1();
          uStack_20 = 0xff67;
          uVar16 = FUN_1000_0718();
          *(undefined2 *)(unaff_BP + -0x52) = (int)uVar16;
          *(undefined2 *)(unaff_BP + -0x50) = (int)((ulong)uVar16 >> 0x10);
          if (*(int *)(unaff_BP + -0xaa) == 0) goto LAB_2bb4_4927;
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 0xff8c;
          func_0x000299d1();
          iStack_6 = 0x22b2;
          iStack_8 = 0xff94;
          func_0x000297e6();
          uStack_e = 0x22b2;
          uStack_10 = 0xff9e;
          func_0x000299d1();
          uStack_e = 0x22b2;
          uStack_10 = 0xffa6;
          func_0x000297e6();
          uStack_16 = 0x22b2;
          uStack_18 = 0xffb0;
          func_0x000299d1();
          uStack_16 = 0x22b2;
          uStack_18 = 0xffb8;
          func_0x000297e6();
          uStack_20 = 0xffc2;
          func_0x000299d1();
          uStack_20 = 0xffc7;
          FUN_1def_043a();
          uVar6 = *(undefined2 *)(unaff_BP + -0x66);
          *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0x68);
          *(undefined2 *)0xb30e = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -100);
          *(undefined2 *)0xb380 = uVar6;
          func_0x000297e6();
          func_0x00029d78();
          iStack_6 = 0x22b2;
          iStack_8 = 0xfffc;
          func_0x000299d1();
          iStack_6 = 0x22b2;
          iStack_8 = 5;
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 10;
          func_0x00029d78();
          uStack_e = 0x22b2;
          uStack_10 = 0x14;
          func_0x000299d1();
          uStack_e = 1;
          uStack_10 = 0x22b2;
          uStack_12 = 0x1d;
          FUN_1def_05d1();
          func_0x000297e6();
          func_0x00029d78();
          func_0x000299d1();
          func_0x000297e6();
          func_0x00029d78();
          iStack_6 = 0x22b2;
          iStack_8 = 0x4d;
          func_0x000299d1();
          iStack_6 = 0x22b2;
          iStack_8 = 0x56;
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 0x5b;
          func_0x00029d78();
          uStack_e = 0x22b2;
          uStack_10 = 0x65;
          func_0x000299d1();
          uStack_e = 1;
          uStack_10 = 0x22b2;
          uStack_12 = 0x6e;
          func_0x0001e558();
          func_0x000297e6();
          func_0x00029d78();
          func_0x000299d1();
          func_0x00029834();
          func_0x00029c2c();
          func_0x000299d1();
          func_0x00029834();
          func_0x00029c2c();
          func_0x000299d1();
          func_0x000297e6();
          func_0x00029d78();
          iStack_6 = 0x22b2;
          iStack_8 = 0xd4;
          func_0x000299d1();
          iStack_6 = 0x22b2;
          iStack_8 = 0xdd;
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 0xe2;
          func_0x00029d78();
          uStack_e = 0x22b2;
          uStack_10 = 0xec;
          func_0x000299d1();
          uStack_e = 1;
          uStack_10 = 0x22b2;
          uStack_12 = 0xf5;
          FUN_1def_05d1();
          func_0x000297e6();
          func_0x00029d78();
          func_0x000299d1();
          func_0x000297e6();
          func_0x00029d78();
          iStack_6 = 0x22b2;
          iStack_8 = 0x125;
          func_0x000299d1();
          iStack_6 = 0x22b2;
          iStack_8 = 0x12e;
          func_0x000297e6();
          iStack_6 = 0x22b2;
          iStack_8 = 0x133;
          func_0x00029d78();
          uStack_e = 0x22b2;
          uStack_10 = 0x13d;
          func_0x000299d1();
          uStack_e = 1;
          uStack_10 = 0x22b2;
          uStack_12 = 0x146;
          func_0x0001e558();
          uVar13 = (undefined1 *)0xffed < &uStack_e;
          func_0x000297e6();
          func_0x00029d78();
          func_0x000299d1();
          func_0x00029834();
          func_0x00029c2c();
          func_0x000299b9();
          func_0x000299d1();
          func_0x00029834();
          func_0x00029c2c();
          func_0x000299d1();
          func_0x00029834();
          func_0x00029834();
          func_0x00029bfc();
          func_0x000299b9();
          func_0x00029ae7();
          FUN_28b3_1181();
          if (!(bool)uVar13) {
            func_0x00029834();
            func_0x00029834();
            func_0x00029bfc();
            func_0x00029c44();
            func_0x000299b9();
            FUN_28b3_1181();
            if (!(bool)uVar13) {
              iStack_2 = *(int *)(unaff_BP + -0x194);
              iStack_4 = *(int *)(unaff_BP + -0x196);
              iStack_6 = 0x22b2;
              iStack_8 = 0x238;
              puVar8 = (undefined2 *)FUN_28b3_1582();
              *(undefined2 *)(unaff_BP + -0x18e) = *puVar8;
              *(undefined2 *)(unaff_BP + -0x18c) = puVar8[1];
              *(undefined2 *)(unaff_BP + -0x18a) = puVar8[2];
              *(undefined2 *)(unaff_BP + -0x188) = puVar8[3];
              func_0x00029834();
              func_0x00029c2c();
              FUN_28b3_112c();
              func_0x00029c2c();
              func_0x00029c2c();
              func_0x00029c74();
              iStack_6 = 0x22b2;
              iStack_8 = 0x287;
              func_0x000299d1();
              iStack_6 = 0x22b2;
              iStack_8 = 0x28c;
              puVar8 = (undefined2 *)FUN_28b3_1582();
              uVar13 = (undefined1 *)0xfff7 < &iStack_4;
              uVar14 = &stack0x0000 == (undefined1 *)0xfffc;
              *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
              *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
              *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
              *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
              func_0x00029834();
              func_0x00029834();
              FUN_28b3_1181();
              if ((bool)uVar13) {
                iVar7 = *(int *)(unaff_BP + -0x50);
                *(undefined2 *)(unaff_BP + -0x1aa) = *(undefined2 *)(unaff_BP + -0x52);
                *(int *)(unaff_BP + -0x1a8) = iVar7 + 0x5a;
                iStack_2 = 0x22b2;
                iStack_4 = 0x2d2;
                func_0x00021eee();
                uVar6 = *(undefined2 *)(unaff_BP + -0x1a8);
                *(undefined2 *)(unaff_BP + -0x52) = *(undefined2 *)(unaff_BP + -0x1aa);
                *(undefined2 *)(unaff_BP + -0x50) = uVar6;
                func_0x00029834();
                FUN_28b3_1c08();
                FUN_28b3_1177();
                func_0x000299d1();
                func_0x00029834();
                func_0x00029c2c();
                FUN_28b3_112c();
                func_0x00029c2c();
                func_0x00029c2c();
                func_0x00029c74();
                iStack_6 = 0x22b2;
                iStack_8 = 0x33e;
                func_0x000299d1();
                iStack_6 = 0x22b2;
                iStack_8 = 0x343;
                puVar8 = (undefined2 *)FUN_28b3_1582();
                uVar14 = &stack0x0000 == (undefined1 *)0xfffc;
                *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
                *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
                *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
                *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
              }
              uVar13 = (bool)uVar13 && (undefined1 *)0xfff7 < &iStack_4;
              func_0x00029834();
              func_0x00029834();
              FUN_28b3_1181();
              if (!(bool)uVar13) {
                func_0x00029834();
                func_0x00029834();
                FUN_28b3_1181();
                if ((bool)uVar13 || (bool)uVar14) {
                  func_0x00029834();
                  func_0x00029c2c();
                  func_0x00029c74();
                  lVar17 = FUN_28b3_0f51();
                  *(undefined2 *)(unaff_BP + -0x1aa) = (int)lVar17;
                  *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)lVar17 >> 0x10);
                  if ((0x270e < lVar17) && (lVar17 < 0x2712)) {
                    *(undefined2 *)(unaff_BP + -0x1aa) = 10000;
                    *(undefined2 *)(unaff_BP + -0x1a8) = 0;
                  }
                  *(undefined2 *)(unaff_BP + -0x5c) = *(undefined2 *)(unaff_BP + -0x1aa);
                  *(undefined2 *)(unaff_BP + -0x58) = 0;
                  *(undefined2 *)(unaff_BP + -0x5a) = 0;
                  *(undefined2 *)(unaff_BP + -0x54) = 0;
                  *(undefined2 *)(unaff_BP + -0x56) = 0;
                  func_0x000297e6();
                  func_0x00029b6d();
                  func_0x00029834();
                  func_0x0002996b();
                  func_0x00029c9d();
                  func_0x0002996b();
                  func_0x00029983();
                  func_0x000297e6();
                  uVar6 = *(undefined2 *)(unaff_BP + -0x1aa);
                  *(undefined2 *)(unaff_BP + -0x1b4) = 0;
                  *(undefined2 *)(unaff_BP + -0x1b6) = 0;
                  *(undefined2 *)(unaff_BP + -0x1b8) = 0;
                  *(undefined2 *)(unaff_BP + -0x1ba) = uVar6;
                  func_0x00029da5();
                  func_0x00029c9d();
                  func_0x00029d78();
                  func_0x00029c2c();
                  func_0x00029983();
                  *(undefined2 *)(unaff_BP + -0x96) = 0;
                  goto LAB_3ab8_58ed;
                }
              }
            }
          }
          *(undefined2 *)0xc22 = 1;
          iStack_2 = 0x22b2;
          iStack_4 = 0x1e0;
          FUN_1000_0599();
          iStack_2 = 0x1eb;
          func_0x00012276();
          halt_baddata();
        }
        iStack_2 = 0xfe7e;
        func_0x00012276();
        *(undefined2 *)0xc22 = 1;
        iStack_2 = 0x11f2;
        iStack_4 = -0x16e;
        FUN_1000_0599();
        iStack_2 = -0x163;
        func_0x00012276();
LAB_3ab8_531d:
        iVar10 = 0x11f2;
      }
    }
LAB_3ab8_50e8:
    if (*(int *)(unaff_BP + -0x9c) != 2) {
LAB_2bb4_4927:
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
      iStack_2 = 0x32b2;
      iStack_4 = 0x5db;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      iStack_4 = 0x5e0;
      FUN_32b2_7258();
      iStack_a = 0x32b2;
      uStack_c = 0x5ea;
      FUN_32b2_6eb1();
      iStack_a = 0x32b2;
      uStack_c = 0x5f2;
      FUN_32b2_6cc6();
      iStack_a = 0x32b2;
      uStack_c = 0x5f7;
      FUN_32b2_7258();
      uStack_12 = 0x32b2;
      uStack_14 = 0x601;
      FUN_32b2_6eb1();
      uStack_12 = *(undefined2 *)(unaff_BP + -100);
      uStack_14 = *(undefined2 *)(unaff_BP + -0x66);
      uStack_16 = *(undefined2 *)(unaff_BP + -0x68);
      uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
      uStack_1a = *(undefined2 *)(unaff_BP + -0x48);
      uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
      uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
      uStack_24 = 0x622;
      FUN_32b2_6d14();
      uStack_2a = 0x32b2;
      uStack_2c = 0x62c;
      FUN_32b2_6eb1();
      uStack_2a = 0x32b2;
      uStack_2c = 0x635;
      FUN_32b2_6d14();
      uStack_32 = 0x32b2;
      uStack_34 = 0x63f;
      FUN_32b2_6eb1();
      uStack_32 = 0;
      uStack_34 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      func_0x0003fc09();
      uVar6 = *(undefined2 *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
      *(undefined2 *)(unaff_BP + -0x84) = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x88);
      *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
      *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
      puVar9 = &uStack_20;
      puVar8 = (undefined2 *)(unaff_BP + 0x1c);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uStack_24 = 0x684;
      iVar7 = FUN_3ab8_522f();
      uVar13 = 0;
      uVar14 = iVar7 == 0;
      if (!(bool)uVar14) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_6fc7();
        FUN_32b2_7258();
        FUN_32b2_7191();
        if ((bool)uVar13 || (bool)uVar14) {
          FUN_32b2_6d14();
          FUN_32b2_6cc6();
          FUN_32b2_701d();
          FUN_32b2_6fc7();
          FUN_32b2_7258();
          FUN_32b2_7191();
          if ((bool)uVar13 || (bool)uVar14) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
        }
      }
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_710c();
      FUN_32b2_710c();
      FUN_32b2_7154();
      FUN_32b2_7191();
      if ((bool)uVar13) {
        uVar6 = 0;
      }
      else {
        FUN_32b2_6d14();
        FUN_32b2_6fc7();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_7191();
        if (!(bool)uVar13) {
          *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
          *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
          *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
          *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
        }
        iStack_2 = *(undefined2 *)(unaff_BP + -0xba);
        iStack_4 = *(int *)(unaff_BP + -0xbc);
        iStack_6 = 0x32b2;
        iStack_8 = 0x774;
        FUN_32b2_7592();
        iStack_2 = 0x77e;
        FUN_32b2_6d14();
        iStack_2 = 0x786;
        FUN_32b2_70dc();
        iStack_2 = 0x78e;
        FUN_32b2_6d14();
        iStack_2 = 0x797;
        FUN_32b2_710c();
        iStack_2 = 0x79c;
        FUN_32b2_7182();
        iStack_2 = 0x7a5;
        FUN_32b2_6e99();
        iStack_2 = 0x7ad;
        FUN_32b2_710c();
        iStack_2 = 0x7b5;
        FUN_32b2_7154();
        iStack_2 = 0x7be;
        FUN_32b2_6e99();
        iStack_2 = 0x7c7;
        FUN_32b2_6eb1();
        iStack_2 = unaff_BP + -0x62;
        iStack_4 = 0x32b2;
        iStack_6 = 0x7d9;
        FUN_32b2_6cc6();
        iStack_4 = 0x32b2;
        iStack_6 = 0x7de;
        FUN_32b2_7258();
        uStack_c = 0x32b2;
        uStack_e = 0x7e8;
        FUN_32b2_6eb1();
        uStack_c = 0x32b2;
        uStack_e = 0x7f0;
        FUN_32b2_6cc6();
        uStack_c = 0x32b2;
        uStack_e = 0x7f5;
        FUN_32b2_7258();
        uStack_14 = 0x32b2;
        uStack_16 = 0x7ff;
        FUN_32b2_6eb1();
        uStack_14 = *(undefined2 *)(unaff_BP + -100);
        uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
        uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
        uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
        uStack_24 = 0x32b2;
        uStack_26 = 0x820;
        FUN_32b2_6d14();
        uStack_2c = 0x32b2;
        uStack_2e = 0x82a;
        FUN_32b2_6eb1();
        uStack_2c = 0x32b2;
        uStack_2e = 0x833;
        FUN_32b2_6d14();
        uStack_34 = 0x32b2;
        FUN_32b2_6eb1();
        uStack_34 = 0;
                    /* WARNING: Call to offcut address within same function */
        func_0x0003fc09(0x32b2);
        uVar13 = (undefined1 *)0xffc9 < &uStack_34;
        uVar14 = &stack0x0000 == (undefined1 *)0xfffe;
        iStack_2 = 0x84f;
        FUN_32b2_6cc6();
        iStack_2 = 0x857;
        FUN_32b2_6cc6();
        iStack_2 = 0x85c;
        FUN_32b2_7191();
        if ((bool)uVar14) {
          uVar6 = *(undefined2 *)(unaff_BP + 8);
          *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
          *(undefined2 *)(unaff_BP + -0x60) = uVar6;
        }
        iStack_2 = 0x872;
        FUN_32b2_6cc6();
        iStack_2 = 0x87a;
        FUN_32b2_6cc6();
        iStack_2 = 0x87f;
        FUN_32b2_7191();
        if ((bool)uVar14) {
          uVar6 = *(undefined2 *)(unaff_BP + 0xc);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
          *(undefined2 *)(unaff_BP + -0x88) = uVar6;
        }
        uVar6 = *(undefined2 *)(unaff_BP + -0x60);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
        puVar8[1] = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x88);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
        puVar8[1] = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x60);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
        puVar8[1] = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x88);
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
        *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
        puVar8[1] = uVar6;
        piVar1 = (int *)(unaff_BP + -0x36);
        *piVar1 = *piVar1 + 1;
        uVar14 = *piVar1 == 0;
        iStack_2 = 0x8d7;
        FUN_32b2_6d14();
        iStack_2 = 0x8e0;
        FUN_32b2_6d14();
        iStack_2 = 0x8e5;
        FUN_32b2_7191();
        if (!(bool)uVar13 && !(bool)uVar14) {
          iStack_2 = *(undefined2 *)(unaff_BP + -0xb8);
          iStack_4 = *(int *)(unaff_BP + -0xba);
          iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
          iStack_8 = 0x32b2;
          iStack_a = 0x8ff;
          FUN_32b2_7592();
          iStack_2 = 0x32b2;
          iStack_4 = 0x909;
          FUN_32b2_6d14();
          iStack_2 = 0x32b2;
          iStack_4 = 0x911;
          FUN_32b2_7154();
          iStack_2 = 0x32b2;
          iStack_4 = 0x916;
          FUN_32b2_6fd6();
          iStack_2 = 0x32b2;
          iStack_4 = 0x91e;
          FUN_32b2_6d14();
          iStack_2 = 0x32b2;
          iStack_4 = 0x927;
          FUN_32b2_710c();
          iStack_2 = 0x32b2;
          iStack_4 = 0x92c;
          FUN_32b2_7182();
          iStack_2 = 0x32b2;
          iStack_4 = 0x935;
          FUN_32b2_6e99();
          iStack_2 = 0x32b2;
          iStack_4 = 0x93d;
          FUN_32b2_710c();
          iStack_2 = 0x32b2;
          iStack_4 = 0x945;
          FUN_32b2_7154();
          iStack_2 = 0x32b2;
          iStack_4 = 0x94e;
          FUN_32b2_6e99();
          iStack_2 = 0x32b2;
          iStack_4 = 0x957;
          FUN_32b2_6eb1();
          iStack_2 = unaff_BP + -0x8a;
          iStack_4 = unaff_BP + -0x62;
          iStack_6 = 0x32b2;
          iStack_8 = 0x969;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          iStack_8 = 0x96e;
          FUN_32b2_7258();
          uStack_e = 0x32b2;
          uStack_10 = 0x978;
          FUN_32b2_6eb1();
          uStack_e = 0x32b2;
          uStack_10 = 0x980;
          FUN_32b2_6cc6();
          uStack_e = 0x32b2;
          uStack_10 = 0x985;
          FUN_32b2_7258();
          uStack_16 = 0x32b2;
          uStack_18 = 0x98f;
          FUN_32b2_6eb1();
          uStack_16 = *(undefined2 *)(unaff_BP + -100);
          uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
          uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
          uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
          uStack_26 = 0x32b2;
          uStack_28 = 0x9b0;
          FUN_32b2_6d14();
          uStack_2e = 0x32b2;
          uStack_30 = 0x9ba;
          FUN_32b2_6eb1();
          uStack_2e = 0x32b2;
          uStack_30 = 0x9c3;
          FUN_32b2_6d14();
          FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
          func_0x0003fc09(0x32b2,0);
          uVar13 = &stack0x0000 == (undefined1 *)0x0;
          iStack_2 = 0x32b2;
          iStack_4 = 0x9df;
          FUN_32b2_6cc6();
          iStack_2 = 0x32b2;
          iStack_4 = 0x9e7;
          FUN_32b2_6cc6();
          iStack_2 = 0x32b2;
          iStack_4 = 0x9ec;
          FUN_32b2_7191();
          if ((bool)uVar13) {
            uVar6 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar6;
          }
          iStack_2 = 0x32b2;
          iStack_4 = 0xa02;
          FUN_32b2_6cc6();
          iStack_2 = 0x32b2;
          iStack_4 = 0xa0a;
          FUN_32b2_6cc6();
          iStack_2 = 0x32b2;
          iStack_4 = 0xa0f;
          FUN_32b2_7191();
          if ((bool)uVar13) {
            uVar6 = *(undefined2 *)(unaff_BP + 0xc);
            *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
            *(undefined2 *)(unaff_BP + -0x88) = uVar6;
          }
          uVar6 = *(undefined2 *)(unaff_BP + -0x60);
          puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
          *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
          puVar8[1] = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x88);
          puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
          *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar8[1] = uVar6;
          *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
        }
        uVar6 = *(undefined2 *)(unaff_BP + -0x36);
      }
      return uVar6;
    }
    *(undefined2 *)(unaff_BP + -0x134) = 1;
    uVar6 = *(undefined2 *)0x9660;
    uVar11 = *(undefined2 *)0x9662;
    *(undefined2 *)(unaff_BP + -0x24) = uVar6;
    *(undefined2 *)(unaff_BP + -0x22) = uVar11;
    *(undefined2 *)(unaff_BP + -0x20) = uVar6;
    *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
    uVar6 = *(undefined2 *)0x9676;
    *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)0x9674;
    *(undefined2 *)(unaff_BP + -0x1a) = uVar6;
    uVar6 = *(undefined2 *)0x9662;
    *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)0x9660;
    *(undefined2 *)(unaff_BP + -0x16) = uVar6;
    iStack_4 = -0x341;
    iStack_2 = iVar10;
    FUN_21f2_3454();
    iStack_2 = 0x22b2;
    iStack_4 = -0x331;
    FUN_21f2_2d26();
    iStack_2 = 0x22b2;
    iStack_4 = -0x321;
    FUN_21f2_2d26();
    iStack_2 = 0x22b2;
    iStack_4 = -0x311;
    FUN_21f2_2d26();
    iStack_2 = 0x22b2;
    uVar6 = 0x22b2;
    iStack_4 = -0x301;
    FUN_21f2_2d26();
  }
LAB_2bb4_569f_4:
  FUN_32b2_6eb1();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  iStack_6 = 0x32b2;
  iStack_8 = 0x1205;
  FUN_32b2_6eb1();
  iStack_6 = 1;
  iStack_8 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
  iStack_a = 0x120d;
  func_0x0003fc09();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6e99();
  FUN_32b2_6ef9();
  uVar6 = *(undefined2 *)(unaff_BP + 0x12);
  uVar13 = 0;
  *(undefined2 *)(unaff_BP + -0x5a) = 0;
  *(undefined2 *)(unaff_BP + -0x5c) = 0;
  *(undefined2 *)(unaff_BP + -0x5e) = 0;
  *(undefined2 *)(unaff_BP + -0x60) = uVar6;
  FUN_32b2_7285();
  FUN_32b2_710c();
  FUN_32b2_6e99();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6e99();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6e99();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_6fc7();
  FUN_32b2_6cc6();
  FUN_32b2_6fc7();
  FUN_32b2_7191();
  if ((bool)uVar13) {
    FUN_32b2_6d14();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    FUN_32b2_70dc();
    FUN_32b2_710c();
    FUN_32b2_710c();
    FUN_32b2_710c();
    FUN_32b2_7124();
  }
  else {
    FUN_32b2_6d14();
    FUN_32b2_6e99();
    FUN_32b2_7124();
    FUN_32b2_6d14();
    FUN_32b2_710c();
    FUN_32b2_710c();
    FUN_32b2_713c();
    FUN_32b2_7173();
    FUN_32b2_710c();
  }
  FUN_32b2_6eb1();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  iStack_2 = *(undefined2 *)(unaff_BP + -0x22);
  iStack_4 = *(int *)(unaff_BP + -0x24);
  iStack_6 = 0;
  iStack_8 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
  iStack_a = 0x13b7;
  func_0x0003fc09();
  return 1;
LAB_3ab8_58ed:
  if ((*(int *)(unaff_BP + -0x9c) == 0) ||
     (uVar13 = *(int *)(unaff_BP + -0x9c) == 0, *(int *)(unaff_BP + -0x9c) == 1)) {
    func_0x0000c340();
    *(undefined2 *)0xc24 = 1;
    iStack_2 = 0;
    iStack_4 = 0;
    iStack_6 = 0x885;
    iStack_8 = 0x49b;
    func_0x0000a76b();
    iStack_2 = 0x4ba;
    func_0x00012276();
    iStack_2 = 0x11f2;
    iStack_4 = 0x4c8;
    func_0x00012276();
    func_0x00010526();
    iStack_2 = 0xdef;
    iStack_4 = 0x4dc;
    FUN_1000_0599();
    *(uint *)(unaff_BP + -0x134) = (uint)*(byte *)0x2a0f;
    if (*(int *)0xce6 != 0) {
      *(undefined2 *)(unaff_BP + -0x134) = 1;
    }
    iStack_2 = 0xdef;
    uVar6 = 0x11f2;
    iStack_4 = 0x501;
    func_0x00012276();
    if (*(int *)0xce6 != 0) {
      iStack_2 = 1;
      iStack_4 = 0x40;
      iStack_6 = 0x29db;
      iStack_8 = 0x11f2;
      uVar6 = 0xdef;
      iStack_a = 0x522;
      FUN_1000_02b5();
    }
    if (*(int *)(unaff_BP + -0x134) != 1) {
      iStack_4 = 0x539;
      iStack_2 = uVar6;
      FUN_1000_0599();
      uVar6 = 0x11f2;
      iStack_2 = 0x544;
      func_0x00012276();
    }
    iStack_2 = *(undefined2 *)0x962a;
    iStack_4 = *(int *)0x9628;
    iStack_6 = *(undefined2 *)0x9626;
    iStack_8 = *(undefined2 *)0x9624;
    iStack_a = *(undefined2 *)0x962a;
    uStack_c = *(undefined2 *)0x9628;
    uStack_e = *(undefined2 *)0x9626;
    uStack_10 = *(undefined2 *)0x9624;
    uStack_12 = *(undefined2 *)0x9692;
    uStack_14 = *(undefined2 *)0x9690;
    uStack_16 = *(undefined2 *)0x968e;
    uStack_18 = *(undefined2 *)0x968c;
    uStack_1a = 0;
    uStack_1c = 7;
    uStack_20 = *(undefined2 *)0x96e4;
    uStack_24 = *(undefined2 *)0x96e0;
    uStack_26 = *(undefined2 *)0x96ee;
    uStack_28 = *(undefined2 *)0x96ec;
    uStack_2a = *(undefined2 *)0x96ea;
    uStack_2c = *(undefined2 *)0x96e8;
    uStack_2e = *(undefined2 *)0x96f6;
    uStack_30 = *(undefined2 *)0x96f4;
    uStack_32 = *(undefined2 *)0x96f2;
    uStack_34 = *(undefined2 *)0x96f0;
    uVar11 = 0xdef;
    func_0x0000fd9f(uVar6);
    *(undefined2 *)(unaff_BP + -0x150) = 0;
    *(undefined2 *)(unaff_BP + -0x14c) = 0;
    if (*(int *)(unaff_BP + -0x9c) == 1) {
      *(undefined2 *)(unaff_BP + -0x1b2) = 2;
      if ((*(char *)0x2a0e == '\0') || (3 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 5) || (7 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1a6) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1a6) = 1;
      }
      *(int *)(unaff_BP + -0x14c) = *(int *)(unaff_BP + -0x1aa) + *(int *)(unaff_BP + -0x1a6);
      if ((*(byte *)0x2a0e < 3) || (5 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x19e) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x19e) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 7) && (*(char *)0x2a0e != '\x01')) {
        *(undefined2 *)(unaff_BP + -0x196) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x196) = 1;
      }
      iStack_2 = *(undefined2 *)0x962a;
      iStack_4 = *(int *)0x9628;
      iStack_6 = *(undefined2 *)0x9626;
      iStack_8 = *(undefined2 *)0x9624;
      iStack_a = *(undefined2 *)0x962a;
      uStack_c = *(undefined2 *)0x9628;
      uStack_e = *(undefined2 *)0x9626;
      uStack_10 = *(undefined2 *)0x9624;
      uStack_12 = *(undefined2 *)0x9692;
      uStack_14 = *(undefined2 *)0x9690;
      uStack_16 = *(undefined2 *)0x968e;
      uStack_18 = *(undefined2 *)0x968c;
      uStack_1a = 3;
      uStack_1c = *(undefined2 *)(unaff_BP + -0x1b2);
      uStack_20 = *(undefined2 *)0x9640;
      uStack_24 = *(undefined2 *)0x963c;
      iVar7 = *(int *)(unaff_BP + -0x19e) + *(int *)(unaff_BP + -0x196);
      *(int *)(unaff_BP + -0x150) = iVar7;
      *(int *)(unaff_BP + -0x18e) = -(iVar7 * 5 + -8);
      uStack_26 = 0xdef;
      uStack_28 = 0x6ba;
      FUN_28b3_0d8b();
      uStack_2e = 0x22b2;
      uStack_30 = 0x6c4;
      func_0x000299d1();
      *(int *)(unaff_BP + -0x186) = (*(int *)(unaff_BP + -0x14c) + 0x5e) * 5;
      uStack_2e = 0x22b2;
      uStack_30 = 0x6dd;
      FUN_28b3_0d8b();
      uVar11 = 0x22b2;
      func_0x000299d1(0x22b2);
    }
    else {
      *(undefined2 *)(unaff_BP + -0x1b2) = 7;
      if (*(char *)0x2a0e != '\0') goto LAB_3ab8_5be8;
      iStack_2 = *(undefined2 *)0x962a;
      iStack_4 = *(int *)0x9628;
      iStack_6 = *(undefined2 *)0x9626;
      iStack_8 = *(undefined2 *)0x9624;
      iStack_a = *(undefined2 *)0x962a;
      uStack_c = *(undefined2 *)0x9628;
      uStack_e = *(undefined2 *)0x9626;
      uStack_10 = *(undefined2 *)0x9624;
      uStack_12 = *(undefined2 *)0x9692;
      uStack_14 = *(undefined2 *)0x9690;
      uStack_16 = *(undefined2 *)0x968e;
      uStack_18 = *(undefined2 *)0x968c;
      uStack_1a = 3;
      uStack_1c = 7;
      uStack_20 = *(undefined2 *)0x9640;
      uStack_24 = *(undefined2 *)0x963c;
      uStack_26 = *(undefined2 *)0x96ee;
      uStack_28 = *(undefined2 *)0x96ec;
      uStack_2a = *(undefined2 *)0x96ea;
      uStack_2c = *(undefined2 *)0x96e8;
      uStack_2e = *(undefined2 *)0x96f6;
      uStack_30 = *(undefined2 *)0x96f4;
      uStack_32 = *(undefined2 *)0x96f2;
      uStack_34 = *(undefined2 *)0x96f0;
    }
    func_0x0000fd9f(uVar11);
LAB_3ab8_5be8:
    uVar12 = 0x885;
    func_0x0000a799();
    uVar6 = *(undefined2 *)0x96f8;
    uVar11 = *(undefined2 *)0x96fa;
    *(undefined2 *)(unaff_BP + -0xca) = uVar6;
    *(undefined2 *)(unaff_BP + -200) = uVar11;
    *(undefined2 *)(unaff_BP + -0x13e) = uVar6;
    *(undefined2 *)(unaff_BP + -0x13c) = uVar11;
    *(undefined2 *)(unaff_BP + -0x5c) = 10000;
    *(undefined2 *)(unaff_BP + -0x58) = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = 0;
    *(undefined2 *)(unaff_BP + -0x50) = 0;
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
    *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
LAB_3ab8_5c29:
    do {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xa48 = 3;
      if (*(int *)(unaff_BP + -0x134) != 1) {
        *(undefined2 *)0xa48 = 4;
      }
      iStack_2 = unaff_BP + -0x160;
      iStack_4 = unaff_BP + -0xc6;
      iStack_6 = unaff_BP + -0xb2;
      iVar7 = 0x3bf;
      iStack_a = 0x7e2;
      iStack_8 = uVar12;
      uVar6 = func_0x00006608();
      *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(int *)0x158 != 0) {
LAB_3ab8_5c7d:
        func_0x00013e19();
LAB_3ab8_5c82:
        iStack_2 = 0x80a;
        func_0x0000daa6();
        uVar6 = func_0x0000abfa();
        return uVar6;
      }
LAB_3ab8_6556:
      if (*(int *)(unaff_BP + -0xc4) == -1) {
        uVar6 = func_0x00013e19();
        if (*(int *)(unaff_BP + 6) != 0) {
          return uVar6;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x96) != 0)) {
          iStack_2 = 0x1107;
          func_0x0000daa6();
          iStack_2 = 0x885;
          while (0 < *(int *)(unaff_BP + -0x96)) {
            uVar6 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x152) = uVar6;
            iStack_4 = 0x829;
            FUN_13bf_0327();
            *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
            iStack_2 = 0x11f2;
          }
          iStack_2 = 0x83f;
          func_0x0000b1d8();
        }
        iStack_2 = 0x848;
        func_0x0000daa6();
        func_0x0000abfa();
        goto LAB_3ab8_6656;
      }
      if (*(int *)(unaff_BP + -0xc4) == 99) goto LAB_3ab8_58ed;
      *(undefined2 *)(unaff_BP + -0x1ba) = 0;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) {
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        if (*(int *)(unaff_BP + -0xb2) < 0x125) goto LAB_3ab8_58ed;
        *(int *)(unaff_BP + -0xc4) = (*(int *)(unaff_BP + -0xb2) + -0x124) / 0x60 + 0x31;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x31) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        uVar6 = *(undefined2 *)0x104e;
        uVar11 = *(undefined2 *)0x1050;
        *(undefined2 *)(unaff_BP + -0x6c) = uVar6;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
        *(undefined2 *)(unaff_BP + -0x90) = uVar6;
        *(undefined2 *)(unaff_BP + -0x8e) = uVar11;
        iStack_2 = 1;
        iStack_4 = 0x11f2;
        iStack_6 = 0x8d1;
        iVar7 = FUN_4375_baa1();
        *(int *)(unaff_BP + -0x44) = iVar7;
        if (*(int *)0x158 != 0) goto LAB_3ab8_5c82;
        if (iVar7 == -1) goto LAB_3ab8_58ed;
        if (iVar7 == 0) {
          if (*(int *)(unaff_BP + -0x9c) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(unaff_BP + -0x9c) = 0;
          goto LAB_3ab8_58ed;
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        iVar7 = 0x22b2;
        func_0x00029983();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x6a);
        *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
        *(undefined2 *)0x1050 = uVar6;
        *(undefined2 *)(unaff_BP + -0x9c) = 1;
        if (*(int *)(unaff_BP + -0x14e) == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x14e) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x15a);
        *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x15c);
        *(undefined2 *)(unaff_BP + -0x15e) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x162);
        *(undefined2 *)(unaff_BP + -0x168) = *(undefined2 *)(unaff_BP + -0x164);
        *(undefined2 *)(unaff_BP + -0x166) = uVar6;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
        uVar6 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar6;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x32) {
        bVar2 = *(byte *)0x2a0e;
        *(uint *)(unaff_BP + -0x1b2) = (uint)bVar2;
        if (*(char *)0x15b == '\x02') {
          *(int *)(unaff_BP + -0x1b2) = bVar2 - 1;
        }
        else {
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (8 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (1 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 8;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 1;
        }
        *(undefined1 *)0x2a0e = *(undefined1 *)(unaff_BP + -0x1b2);
        goto LAB_3ab8_58ed;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x33) {
        if (*(int *)0xce6 != 0) {
          uVar6 = func_0x00013e19();
          *(undefined2 *)0xce6 = 0x14;
          return uVar6;
        }
        *(char *)0x2a0f = *(char *)0x2a0f + '\x01';
        if (10 < *(byte *)0x2a0f) {
LAB_3ab8_5eb7:
          *(undefined1 *)0x2a0f = 1;
        }
        goto LAB_3ab8_58ed;
      }
      if ((*(int *)0xce6 == 0) && (*(int *)(unaff_BP + -0xc4) == 0x34)) goto LAB_3ab8_5eb7;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc4) == 100)) {
        uVar6 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar6;
        iStack_2 = *(int *)(unaff_BP + -0xb4);
        iStack_6 = 0xa7d;
        iStack_4 = iVar7;
        iVar7 = func_0x00015409();
        if (iVar7 == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
      }
      uVar13 = *(char *)0x15a == '\0';
      if (!(bool)uVar13) goto LAB_3ab8_58ed;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        func_0x000297e6();
        func_0x000297e6();
        uVar12 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar13) goto LAB_3ab8_5c29;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x15e);
      *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)(unaff_BP + -0x160);
      *(undefined2 *)(unaff_BP + -200) = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x13e) = *(undefined2 *)(unaff_BP + -0x168);
      *(undefined2 *)(unaff_BP + -0x13c) = uVar6;
      uVar12 = 0x11f2;
      func_0x00013e19();
      if ((((*(int *)(unaff_BP + -0xb2) < *(int *)0xa5c) ||
           (*(int *)0xa60 < *(int *)(unaff_BP + -0xc6))) ||
          (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) && (*(int *)(unaff_BP + -0x1ba) == 0))
      goto LAB_3ab8_5c29;
      *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
      if (*(int *)(unaff_BP + -0x9c) == 0) {
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_117c();
        iStack_6 = 0x22b2;
        iStack_8 = 0xbcb;
        func_0x000299d1();
        iStack_6 = 0x22b2;
        iStack_8 = 0xbd0;
        FUN_28b3_1582();
        func_0x00029834();
        func_0x00029983();
        if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0xb4) != 2)) {
          puVar8 = (undefined2 *)func_0x0000c4c4();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x1b2) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x1b0) = uVar6;
          func_0x000297e6();
          iStack_2 = 0xc1a;
          func_0x00029b9d();
          func_0x00029983();
          if (*(char *)0x2a0e == '\0') {
            func_0x000297e6();
            iStack_2 = 0xc3a;
            func_0x00029b6d();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029c74();
          uVar16 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x1aa) = (int)uVar16;
          *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)uVar16 >> 0x10);
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029983();
        }
        if (*(char *)0x2a0e != '\0') {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          iStack_2 = 0xce8;
          func_0x00029b6d();
          func_0x00029983();
        }
      }
      else {
        if (*(int *)0xcb6 == 0) {
          uVar6 = *(undefined2 *)0x965e;
          *(undefined2 *)0xb76a = *(undefined2 *)0x965c;
          *(undefined2 *)0xb76c = uVar6;
          uVar6 = *(undefined2 *)0x9660;
          uVar11 = *(undefined2 *)0x9662;
        }
        else {
          uVar6 = *(undefined2 *)0xcbc;
          *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
          *(undefined2 *)0xb76c = uVar6;
          uVar6 = *(undefined2 *)0xcbe;
          uVar11 = *(undefined2 *)0xcc0;
        }
        *(undefined2 *)0xb784 = uVar6;
        *(undefined2 *)0xb786 = uVar11;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        if (*(char *)0x2a0e != '\0') {
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029b6d();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          iStack_6 = 0x22b2;
          iStack_8 = 0xdba;
          func_0x000299d1();
          iStack_6 = 0x22b2;
          iStack_8 = 0xdc3;
          FUN_28b3_0d8b();
          iStack_6 = 0x22b2;
          iStack_8 = 0xdcc;
          func_0x0002996b();
          iStack_6 = 0x22b2;
          iStack_8 = 0xdd4;
          func_0x00029b6d();
          iStack_6 = 0x22b2;
          iStack_8 = 0xdd9;
          func_0x00029af6();
          iStack_6 = 0x22b2;
          iStack_8 = 0xdde;
          func_0x00029d78();
          iStack_6 = 0x22b2;
          iStack_8 = 0xde7;
          func_0x000299b9();
          uStack_e = 0x22b2;
          uStack_10 = 0xdf1;
          func_0x000299d1();
          uStack_e = 0;
          uStack_10 = 0x22b2;
          uStack_12 = 0xdf9;
          puVar8 = (undefined2 *)FUN_1def_05d1();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x68) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x66) = uVar6;
          func_0x00029834();
          iStack_6 = 0x22b2;
          iStack_8 = 0xe1c;
          func_0x000299d1();
          iStack_6 = 0x22b2;
          iStack_8 = 0xe25;
          func_0x00029834();
          uStack_e = 0x22b2;
          uStack_10 = 0xe2f;
          func_0x000299d1();
          uStack_e = 0;
          uStack_10 = 0x22b2;
          uStack_12 = 0xe37;
          puVar8 = (undefined2 *)func_0x0001e558();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -100) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x62) = uVar6;
        }
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b6d();
      func_0x00029983();
      if (*(char *)0xb782 == '\0') {
        *(undefined2 *)(unaff_BP + -0x1b2) = 0x11;
        iStack_a = 0x22b2;
        do {
          iStack_2 = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_4 = *(int *)0xa58 + -1;
          iStack_6 = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_8 = 1;
          uStack_c = 0xe98;
          func_0x0000def0();
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
          iStack_a = 0xdef;
        } while (*(int *)(unaff_BP + -0x1b2) < 0x30);
        iStack_2 = *(undefined2 *)(unaff_BP + -0x92);
        iStack_4 = *(int *)(unaff_BP + -0x94);
        iStack_6 = 0x29ed;
        iStack_8 = unaff_BP + -0x42;
        iStack_a = 0xdef;
        uStack_c = 0xec3;
        FUN_10ad_1928();
        iStack_2 = 0;
        iStack_4 = 2;
        iStack_6 = 1;
        iStack_8 = unaff_BP + -0x42;
        iStack_a = 0x11f2;
        uStack_c = 0xedb;
        FUN_1000_02b5();
        iStack_2 = *(undefined2 *)0x9660;
        iStack_4 = 0xdef;
        iStack_6 = 0xeef;
        func_0x000297e6();
        iStack_4 = 0x22b2;
        iStack_6 = 0xef8;
        func_0x00029b6d();
        iStack_8 = 0x22b2;
        iStack_a = 0xf02;
        func_0x00029983();
        iStack_4 = 0x29fb;
        iStack_6 = unaff_BP + -0x42;
        iStack_8 = 0x22b2;
        iStack_a = 0xf0f;
        FUN_10ad_1928();
        iStack_2 = 3;
        iStack_4 = 1;
        iStack_6 = unaff_BP + -0x42;
        iStack_8 = 0x11f2;
        iStack_a = 0xf27;
        FUN_1000_02b5();
      }
      uVar13 = 0;
      if (*(int *)(unaff_BP + -0x1ba) != 0) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        uVar13 = false;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        break;
      }
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar13) goto code_r0x00040f9e;
LAB_3ab8_6451:
      uVar12 = 0x22b2;
    } while( true );
  }
  *(undefined2 *)(unaff_BP + -0x96) = 0;
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  uVar6 = FUN_28b3_1181();
  if ((bool)uVar13) {
    if (*(int *)(unaff_BP + 6) == 0) {
      halt_baddata();
    }
    return uVar6;
  }
  *(undefined1 *)(unaff_BP + -0x4d) = *(undefined1 *)0xa6a;
  *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
  *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b6d();
  func_0x00029983();
  iStack_2 = 0x1148;
  func_0x0000daa6();
  puVar9 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while (uVar13 = *(int *)(unaff_BP + -0x136) == 0, 0 < *(int *)(unaff_BP + -0x136)) {
    func_0x00029834();
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      puVar9 = &uStack_1c;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uStack_20 = 0x11b3;
      FUN_13bf_01c1();
      *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + 1;
    }
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  uVar6 = func_0x0000abfa();
  *(undefined2 *)(unaff_BP + -0x14e) = 0;
  if (*(int *)(unaff_BP + 6) != 0) {
    return uVar6;
  }
LAB_3ab8_6656:
  if (*(int *)(unaff_BP + -0x9c) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  goto LAB_3ab8_58ed;
code_r0x00040f9e:
  *(undefined2 *)(unaff_BP + -0x1b2) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x1b0) = 0xffff;
  puVar9 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined1 *)(unaff_BP + -0x71) = 9;
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while( true ) {
    if (*(int *)(unaff_BP + -0x136) < 1) goto LAB_3ab8_6451;
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029d78();
    uVar6 = 0x22b2;
    uVar16 = FUN_28b3_0f51();
    iVar7 = (int)((ulong)uVar16 >> 0x10);
    *(int *)(unaff_BP + -0x1aa) = (int)uVar16;
    *(int *)(unaff_BP + -0x1a8) = iVar7;
    if (((int)uVar16 != *(int *)(unaff_BP + -0x1b2)) || (iVar7 != *(int *)(unaff_BP + -0x1b0))) {
      puVar9 = &uStack_1c;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar9;
        puVar9 = puVar9 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uVar6 = 0x11f2;
      uStack_20 = 0x1038;
      func_0x00013e46();
    }
    uVar11 = *(undefined2 *)(unaff_BP + -0x1a8);
    *(undefined2 *)(unaff_BP + -0x1b2) = *(undefined2 *)(unaff_BP + -0x1aa);
    *(undefined2 *)(unaff_BP + -0x1b0) = uVar11;
    *(undefined2 *)0xc20 = 1;
    *(undefined2 *)0xa4a = 1;
    *(undefined2 *)0xa48 = 2;
    iStack_2 = unaff_BP + -0x160;
    iStack_4 = unaff_BP + -0xc6;
    iStack_6 = unaff_BP + -0xb2;
    iStack_a = 0x1078;
    iStack_8 = uVar6;
    uVar6 = func_0x00006608();
    *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xa4a = 0;
    *(undefined2 *)0xa48 = 0;
    uVar13 = *(int *)0x158 == 0;
    if (!(bool)uVar13) goto LAB_3ab8_5c7d;
    func_0x000297e6();
    func_0x000297e6();
    iVar7 = 0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar13) break;
    func_0x000297e6();
    func_0x000297e6();
    iVar7 = 0x22b2;
    FUN_28b3_1181();
    if (((!(bool)uVar13) || (*(int *)(unaff_BP + -0xc4) != 0)) || (*(int *)(unaff_BP + -0xb4) != 0))
    break;
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  goto LAB_3ab8_6556;
}



/* 3ab8:522f  FUN_3ab8_522f  5178 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0003fdb0) overlaps instruction at (ram,0x0003fdaf)
    */
/* WARNING: Possible PIC construction at 0x0003f73d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0003f73d) */
/* WARNING: Removing unreachable block (ram,0x000403b8) */
/* WARNING: Removing unreachable block (ram,0x000403c3) */

undefined2 __cdecl16far FUN_3ab8_522f(void)

{
  int *piVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  long lVar17;
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
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  uVar6 = 0x3ab8;
code_r0x0003fdb5:
  iStack_c = 0xfdbf;
  iStack_a = uVar6;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xfdc4;
  func_0x0002a11e();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  iStack_a = 0x22b2;
  iStack_c = 0xfdf7;
  func_0x000299d1();
  iStack_a = 0x22b2;
  iStack_c = 0xfdfc;
  func_0x0002a10c();
  func_0x00029834();
  func_0x00029c2c();
  func_0x00029983();
  *(undefined2 *)(unaff_BP + -0xb4) = 0;
  do {
    if (*(int *)(unaff_BP + -0xb4) == 0) goto LAB_3ab8_539a;
    func_0x000297e6();
    func_0x00029d78();
    iStack_a = 0x22b2;
    iStack_c = 0xfe3f;
    func_0x000299d1();
    iStack_a = 0x22b2;
    iStack_c = 0xfe48;
    func_0x000297e6();
    iStack_a = 0x22b2;
    iStack_c = 0xfe4d;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfe57;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    iVar9 = 0x11f2;
    uStack_14 = 0xfe5c;
    lVar17 = FUN_13bf_39a0();
    *(undefined2 *)(unaff_BP + -0xae) = (int)lVar17;
    *(undefined2 *)(unaff_BP + -0xac) = (int)((ulong)lVar17 >> 0x10);
    if (lVar17 != 0) {
      uVar13 = *(int *)(unaff_BP + -0xac) == 0;
      if (-1 < *(int *)(unaff_BP + -0xac)) {
        iStack_6 = 0x11f2;
        iStack_8 = -0x155;
        puVar15 = (undefined2 *)func_0x0000013f();
        puVar10 = (undefined2 *)puVar15;
        puVar8 = (undefined2 *)(unaff_BP + -0x24);
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar4 = puVar8;
          puVar8 = puVar8 + 1;
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar4 = *puVar3;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar13) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar13) {
            iStack_6 = 0xfef4;
            func_0x00012276();
            *(undefined2 *)0xc22 = 1;
            iStack_6 = 0x11f2;
            iStack_8 = -0xf8;
            FUN_1000_0599();
            iStack_6 = 0xdef;
            iStack_8 = -0xe9;
            func_0x00012276();
            goto LAB_3ab8_531d;
          }
        }
LAB_3ab8_539a:
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0xff2c;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xff34;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xff3e;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xff46;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        uStack_1c = 0xff50;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        uStack_1c = 0xff58;
        func_0x000297e6();
        uStack_24 = 0xff62;
        func_0x000299d1();
        uStack_24 = 0xff67;
        uVar16 = FUN_1000_0718();
        *(undefined2 *)(unaff_BP + -0x52) = (int)uVar16;
        *(undefined2 *)(unaff_BP + -0x50) = (int)((ulong)uVar16 >> 0x10);
        if (*(int *)(unaff_BP + -0xaa) == 0) {
LAB_2bb4_4927:
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
          iStack_6 = 0x32b2;
          iStack_8 = 0x5db;
          FUN_32b2_6cc6();
          iStack_6 = 0x32b2;
          iStack_8 = 0x5e0;
          FUN_32b2_7258();
          iStack_e = 0x32b2;
          uStack_10 = 0x5ea;
          FUN_32b2_6eb1();
          iStack_e = 0x32b2;
          uStack_10 = 0x5f2;
          FUN_32b2_6cc6();
          iStack_e = 0x32b2;
          uStack_10 = 0x5f7;
          FUN_32b2_7258();
          uStack_16 = 0x32b2;
          uStack_18 = 0x601;
          FUN_32b2_6eb1();
          uStack_16 = *(undefined2 *)(unaff_BP + -100);
          uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
          uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
          uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
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
          uVar6 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
          puVar10 = &uStack_24;
          puVar8 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            puVar15 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar3 = *puVar15;
          }
          uStack_28 = 0x684;
          iVar9 = FUN_3ab8_522f();
          uVar13 = 0;
          uVar14 = iVar9 == 0;
          if (!(bool)uVar14) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar13 || (bool)uVar14) {
              FUN_32b2_6d14();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_6fc7();
              FUN_32b2_7258();
              FUN_32b2_7191();
              if ((bool)uVar13 || (bool)uVar14) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
            }
          }
          FUN_32b2_6d14();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_7154();
          FUN_32b2_7191();
          if ((bool)uVar13) {
            uVar6 = 0;
          }
          else {
            FUN_32b2_6d14();
            FUN_32b2_6fc7();
            FUN_32b2_6d14();
            FUN_32b2_710c();
            FUN_32b2_710c();
            FUN_32b2_7191();
            if (!(bool)uVar13) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_8 = *(int *)(unaff_BP + -0xbc);
            iStack_a = 0x32b2;
            iStack_c = 0x774;
            FUN_32b2_7592();
            iStack_6 = 0x77e;
            FUN_32b2_6d14();
            iStack_6 = 0x786;
            FUN_32b2_70dc();
            iStack_6 = 0x78e;
            FUN_32b2_6d14();
            iStack_6 = 0x797;
            FUN_32b2_710c();
            iStack_6 = 0x79c;
            FUN_32b2_7182();
            iStack_6 = 0x7a5;
            FUN_32b2_6e99();
            iStack_6 = 0x7ad;
            FUN_32b2_710c();
            iStack_6 = 0x7b5;
            FUN_32b2_7154();
            iStack_6 = 0x7be;
            FUN_32b2_6e99();
            iStack_6 = 0x7c7;
            FUN_32b2_6eb1();
            iStack_6 = unaff_BP + -0x62;
            iStack_8 = 0x32b2;
            iStack_a = 0x7d9;
            FUN_32b2_6cc6();
            iStack_8 = 0x32b2;
            iStack_a = 0x7de;
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
            uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
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
            uVar13 = (undefined1 *)0xffc9 < &uStack_38;
            uVar14 = &stack0x0000 == (undefined1 *)0x2;
            iStack_6 = 0x84f;
            FUN_32b2_6cc6();
            iStack_6 = 0x857;
            FUN_32b2_6cc6();
            iStack_6 = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar14) {
              uVar6 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar6;
            }
            iStack_6 = 0x872;
            FUN_32b2_6cc6();
            iStack_6 = 0x87a;
            FUN_32b2_6cc6();
            iStack_6 = 0x87f;
            FUN_32b2_7191();
            if ((bool)uVar14) {
              uVar6 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar6;
            }
            uVar6 = *(undefined2 *)(unaff_BP + -0x60);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
            puVar8[1] = uVar6;
            uVar6 = *(undefined2 *)(unaff_BP + -0x88);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar8[1] = uVar6;
            uVar6 = *(undefined2 *)(unaff_BP + -0x60);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
            puVar8[1] = uVar6;
            uVar6 = *(undefined2 *)(unaff_BP + -0x88);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar8[1] = uVar6;
            piVar1 = (int *)(unaff_BP + -0x36);
            *piVar1 = *piVar1 + 1;
            uVar14 = *piVar1 == 0;
            iStack_6 = 0x8d7;
            FUN_32b2_6d14();
            iStack_6 = 0x8e0;
            FUN_32b2_6d14();
            iStack_6 = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar13 && !(bool)uVar14) {
              iStack_6 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_8 = *(int *)(unaff_BP + -0xba);
              iStack_a = *(undefined2 *)(unaff_BP + -0xbc);
              iStack_c = 0x32b2;
              iStack_e = 0x8ff;
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
              iStack_a = 0x32b2;
              iStack_c = 0x969;
              FUN_32b2_6cc6();
              iStack_a = 0x32b2;
              iStack_c = 0x96e;
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
              uStack_1c = 0x98f;
              FUN_32b2_6eb1();
              uStack_1a = *(undefined2 *)(unaff_BP + -100);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x66);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
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
              uVar13 = &stack0x0000 == (undefined1 *)0x4;
              iStack_6 = 0x32b2;
              iStack_8 = 0x9df;
              FUN_32b2_6cc6();
              iStack_6 = 0x32b2;
              iStack_8 = 0x9e7;
              FUN_32b2_6cc6();
              iStack_6 = 0x32b2;
              iStack_8 = 0x9ec;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uVar6 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar6;
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
              if ((bool)uVar13) {
                uVar6 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar6;
              }
              uVar6 = *(undefined2 *)(unaff_BP + -0x60);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
              puVar8[1] = uVar6;
              uVar6 = *(undefined2 *)(unaff_BP + -0x88);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar8[1] = uVar6;
              *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
            }
            uVar6 = *(undefined2 *)(unaff_BP + -0x36);
          }
          return uVar6;
        }
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0xff8c;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xff94;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xff9e;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xffa6;
        func_0x000297e6();
        uStack_1a = 0x22b2;
        uStack_1c = 0xffb0;
        func_0x000299d1();
        uStack_1a = 0x22b2;
        uStack_1c = 0xffb8;
        func_0x000297e6();
        uStack_24 = 0xffc2;
        func_0x000299d1();
        uStack_24 = 0xffc7;
        FUN_1def_043a();
        uVar6 = *(undefined2 *)(unaff_BP + -0x66);
        *(undefined2 *)0xb30c = *(undefined2 *)(unaff_BP + -0x68);
        *(undefined2 *)0xb30e = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x62);
        *(undefined2 *)0xb37e = *(undefined2 *)(unaff_BP + -100);
        *(undefined2 *)0xb380 = uVar6;
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xfffc;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 5;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 10;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0x14;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0x1d;
        FUN_1def_05d1();
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0x4d;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0x56;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0x5b;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0x65;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0x6e;
        func_0x0001e558();
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0xd4;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xdd;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0xe2;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xec;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0xf5;
        FUN_1def_05d1();
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x000297e6();
        func_0x00029d78();
        iStack_a = 0x22b2;
        iStack_c = 0x125;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0x12e;
        func_0x000297e6();
        iStack_a = 0x22b2;
        iStack_c = 0x133;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0x13d;
        func_0x000299d1();
        uStack_12 = 1;
        uStack_14 = 0x22b2;
        uStack_16 = 0x146;
        func_0x0001e558();
        uVar13 = (undefined1 *)0xffed < &uStack_12;
        func_0x000297e6();
        func_0x00029d78();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029834();
        func_0x00029bfc();
        func_0x000299b9();
        func_0x00029ae7();
        FUN_28b3_1181();
        if (!(bool)uVar13) {
          func_0x00029834();
          func_0x00029834();
          func_0x00029bfc();
          func_0x00029c44();
          func_0x000299b9();
          FUN_28b3_1181();
          if (!(bool)uVar13) {
            iStack_6 = *(int *)(unaff_BP + -0x194);
            iStack_8 = *(int *)(unaff_BP + -0x196);
            iStack_a = 0x22b2;
            iStack_c = 0x238;
            puVar8 = (undefined2 *)FUN_28b3_1582();
            *(undefined2 *)(unaff_BP + -0x18e) = *puVar8;
            *(undefined2 *)(unaff_BP + -0x18c) = puVar8[1];
            *(undefined2 *)(unaff_BP + -0x18a) = puVar8[2];
            *(undefined2 *)(unaff_BP + -0x188) = puVar8[3];
            func_0x00029834();
            func_0x00029c2c();
            FUN_28b3_112c();
            func_0x00029c2c();
            func_0x00029c2c();
            func_0x00029c74();
            iStack_a = 0x22b2;
            iStack_c = 0x287;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0x28c;
            puVar8 = (undefined2 *)FUN_28b3_1582();
            uVar13 = (undefined1 *)0xfff7 < &iStack_8;
            uVar14 = &stack0x0000 == (undefined1 *)0x0;
            *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
            *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
            *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
            *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
            func_0x00029834();
            func_0x00029834();
            FUN_28b3_1181();
            if ((bool)uVar13) {
              iVar9 = *(int *)(unaff_BP + -0x50);
              *(undefined2 *)(unaff_BP + -0x1aa) = *(undefined2 *)(unaff_BP + -0x52);
              *(int *)(unaff_BP + -0x1a8) = iVar9 + 0x5a;
              iStack_6 = 0x22b2;
              iStack_8 = 0x2d2;
              func_0x00021eee();
              uVar6 = *(undefined2 *)(unaff_BP + -0x1a8);
              *(undefined2 *)(unaff_BP + -0x52) = *(undefined2 *)(unaff_BP + -0x1aa);
              *(undefined2 *)(unaff_BP + -0x50) = uVar6;
              func_0x00029834();
              FUN_28b3_1c08();
              FUN_28b3_1177();
              func_0x000299d1();
              func_0x00029834();
              func_0x00029c2c();
              FUN_28b3_112c();
              func_0x00029c2c();
              func_0x00029c2c();
              func_0x00029c74();
              iStack_a = 0x22b2;
              iStack_c = 0x33e;
              func_0x000299d1();
              iStack_a = 0x22b2;
              iStack_c = 0x343;
              puVar8 = (undefined2 *)FUN_28b3_1582();
              uVar14 = &stack0x0000 == (undefined1 *)0x0;
              *(undefined2 *)(unaff_BP + -0x176) = *puVar8;
              *(undefined2 *)(unaff_BP + -0x174) = puVar8[1];
              *(undefined2 *)(unaff_BP + -0x172) = puVar8[2];
              *(undefined2 *)(unaff_BP + -0x170) = puVar8[3];
            }
            uVar13 = (bool)uVar13 && (undefined1 *)0xfff7 < &iStack_8;
            func_0x00029834();
            func_0x00029834();
            FUN_28b3_1181();
            if (!(bool)uVar13) {
              func_0x00029834();
              func_0x00029834();
              FUN_28b3_1181();
              if ((bool)uVar13 || (bool)uVar14) {
                func_0x00029834();
                func_0x00029c2c();
                func_0x00029c74();
                lVar17 = FUN_28b3_0f51();
                *(undefined2 *)(unaff_BP + -0x1aa) = (int)lVar17;
                *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)lVar17 >> 0x10);
                if ((0x270e < lVar17) && (lVar17 < 0x2712)) {
                  *(undefined2 *)(unaff_BP + -0x1aa) = 10000;
                  *(undefined2 *)(unaff_BP + -0x1a8) = 0;
                }
                *(undefined2 *)(unaff_BP + -0x5c) = *(undefined2 *)(unaff_BP + -0x1aa);
                *(undefined2 *)(unaff_BP + -0x58) = 0;
                *(undefined2 *)(unaff_BP + -0x5a) = 0;
                *(undefined2 *)(unaff_BP + -0x54) = 0;
                *(undefined2 *)(unaff_BP + -0x56) = 0;
                func_0x000297e6();
                func_0x00029b6d();
                func_0x00029834();
                func_0x0002996b();
                func_0x00029c9d();
                func_0x0002996b();
                func_0x00029983();
                func_0x000297e6();
                uVar6 = *(undefined2 *)(unaff_BP + -0x1aa);
                *(undefined2 *)(unaff_BP + -0x1b4) = 0;
                *(undefined2 *)(unaff_BP + -0x1b6) = 0;
                *(undefined2 *)(unaff_BP + -0x1b8) = 0;
                *(undefined2 *)(unaff_BP + -0x1ba) = uVar6;
                func_0x00029da5();
                func_0x00029c9d();
                func_0x00029d78();
                func_0x00029c2c();
                func_0x00029983();
                *(undefined2 *)(unaff_BP + -0x96) = 0;
                break;
              }
            }
          }
        }
        *(undefined2 *)0xc22 = 1;
        iStack_6 = 0x22b2;
        iStack_8 = 0x1e0;
        FUN_1000_0599();
        iStack_6 = 0x1eb;
        func_0x00012276();
        halt_baddata();
      }
      iStack_6 = 0xfe7e;
      func_0x00012276();
      *(undefined2 *)0xc22 = 1;
      iStack_6 = 0x11f2;
      iStack_8 = -0x16e;
      FUN_1000_0599();
      iStack_6 = -0x163;
      func_0x00012276();
LAB_3ab8_531d:
      iVar9 = 0x11f2;
    }
LAB_3ab8_50e8:
    if (*(int *)(unaff_BP + -0x9c) != 2) goto LAB_2bb4_4927;
    *(undefined2 *)(unaff_BP + -0x134) = 1;
    uVar6 = *(undefined2 *)0x9660;
    uVar11 = *(undefined2 *)0x9662;
    *(undefined2 *)(unaff_BP + -0x24) = uVar6;
    *(undefined2 *)(unaff_BP + -0x22) = uVar11;
    *(undefined2 *)(unaff_BP + -0x20) = uVar6;
    *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
    uVar6 = *(undefined2 *)0x9676;
    *(undefined2 *)(unaff_BP + -0x1c) = *(undefined2 *)0x9674;
    *(undefined2 *)(unaff_BP + -0x1a) = uVar6;
    uVar6 = *(undefined2 *)0x9662;
    *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)0x9660;
    *(undefined2 *)(unaff_BP + -0x16) = uVar6;
    iStack_8 = -0x341;
    iStack_6 = iVar9;
    FUN_21f2_3454();
    iStack_6 = 0x22b2;
    iStack_8 = -0x331;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = -0x321;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = -0x311;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = -0x301;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = -0x2f1;
    FUN_21f2_2d26();
    iStack_6 = 0x22b2;
    iStack_8 = -0x2e1;
    FUN_1def_07a4();
    iStack_6 = unaff_BP + -0x160;
    iStack_8 = unaff_BP + -0x132;
    iStack_a = 1;
    iStack_c = 0x1bb4;
    iVar9 = 0x1bb4;
    iStack_e = 0xfd3e;
    iVar7 = FUN_1def_0904();
    *(int *)(unaff_BP + -0x16a) = iVar7;
    if (*(int *)0x158 != 0) {
LAB_2bb4_569f_4:
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      iStack_a = 0x32b2;
      iStack_c = 0x1205;
      FUN_32b2_6eb1();
      iStack_a = 1;
      iStack_c = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      iStack_e = 0x120d;
      func_0x0003fc09();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      uVar6 = *(undefined2 *)(unaff_BP + 0x12);
      uVar13 = 0;
      *(undefined2 *)(unaff_BP + -0x5a) = 0;
      *(undefined2 *)(unaff_BP + -0x5c) = 0;
      *(undefined2 *)(unaff_BP + -0x5e) = 0;
      *(undefined2 *)(unaff_BP + -0x60) = uVar6;
      FUN_32b2_7285();
      FUN_32b2_710c();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      FUN_32b2_6cc6();
      FUN_32b2_6fc7();
      FUN_32b2_6cc6();
      FUN_32b2_6fc7();
      FUN_32b2_7191();
      if ((bool)uVar13) {
        FUN_32b2_6d14();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        FUN_32b2_70dc();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_7124();
      }
      else {
        FUN_32b2_6d14();
        FUN_32b2_6e99();
        FUN_32b2_7124();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_710c();
        FUN_32b2_713c();
        FUN_32b2_7173();
        FUN_32b2_710c();
      }
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      iStack_6 = *(undefined2 *)(unaff_BP + -0x22);
      iStack_8 = *(int *)(unaff_BP + -0x24);
      iStack_a = 0;
      iStack_c = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      iStack_e = 0x13b7;
      func_0x0003fc09();
      return 1;
    }
    if (iVar7 == -1) {
      while (*(undefined2 *)(unaff_BP + -0xaa) = 0, 0 < *(int *)(unaff_BP + -0x9c)) {
        if (*(int *)(unaff_BP + -0x9c) == 1) {
          func_0x000297e6();
          func_0x0002996b();
          iVar9 = 0x22b2;
          func_0x00029983();
        }
        else {
          uVar6 = *(undefined2 *)0x1054;
          *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0x1052;
          *(undefined2 *)(unaff_BP + -0x6a) = uVar6;
          uVar6 = *(undefined2 *)0x1058;
          *(undefined2 *)(unaff_BP + -0x90) = *(undefined2 *)0x1056;
          *(undefined2 *)(unaff_BP + -0x8e) = uVar6;
        }
        iStack_6 = *(int *)(unaff_BP + -0x9c);
        iStack_a = 0xfa91;
        iStack_8 = iVar9;
        iVar7 = FUN_3ab8_4671();
        *(int *)(unaff_BP + -0x44) = iVar7;
        if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
        if ((iVar7 == -1) && (*(int *)(unaff_BP + -0x9c) == 1)) goto LAB_3ab8_4a7d;
        if (iVar7 != -1) {
          if ((iVar7 != 0) || (*(int *)(unaff_BP + -0x9c) != 1)) {
            if ((iVar7 == 0) && (*(int *)(unaff_BP + -0x9c) == 2)) {
              do {
                *(undefined2 *)(unaff_BP + -0xaa) = 1;
                do {
                  do {
                    iStack_6 = 0x296c;
                    iStack_8 = unaff_BP + -0x132;
                    iStack_c = 0xfaf9;
                    iStack_a = iVar9;
                    FUN_21f2_3454();
                    iStack_6 = unaff_BP + -0xca;
                    iStack_8 = unaff_BP + -0x132;
                    *(undefined2 *)0xc20 = 1;
                    iStack_a = 1;
                    iStack_c = 0x22b2;
                    iVar9 = 0x1bb4;
                    iStack_e = 0xfb1c;
                    iVar7 = FUN_1def_0904();
                    *(int *)(unaff_BP + -0xc4) = iVar7;
                    *(undefined2 *)0xc20 = 0;
                    if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
                    if (iVar7 == -1) goto LAB_3ab8_4baf;
                  } while (*(int *)(unaff_BP + -0xb4) == 0);
                  iStack_6 = *(undefined2 *)(unaff_BP + -0xb4);
                  iStack_8 = 0x1bb4;
                  iVar9 = 0x11f2;
                  iStack_a = 0xfb55;
                  iVar7 = func_0x00015409();
                } while (iVar7 == 0);
                while( true ) {
                  iStack_6 = 0x2978;
                  iStack_8 = unaff_BP + -0x132;
                  iStack_c = 0xfb72;
                  iStack_a = iVar9;
                  FUN_21f2_3454();
                  iStack_6 = unaff_BP + -0x13a;
                  iStack_8 = unaff_BP + -0x132;
                  *(undefined2 *)0xc20 = 1;
                  iStack_a = 1;
                  iStack_c = 0x22b2;
                  iVar9 = 0x1bb4;
                  iStack_e = 0xfb95;
                  iVar7 = FUN_1def_0904();
                  *(int *)(unaff_BP + -0xc4) = iVar7;
                  *(undefined2 *)0xc20 = 0;
                  if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
                  if (iVar7 == -1) break;
                  if (*(int *)(unaff_BP + -0xb4) != 0) {
                    iStack_6 = *(int *)(unaff_BP + -0xb4);
                    iStack_8 = 0x1bb4;
                    iVar9 = 0x11f2;
                    iStack_a = 0xfbce;
                    iVar7 = func_0x00015409();
                    if (iVar7 != 0) goto LAB_3ab8_50e8;
                  }
                }
              } while( true );
            }
            func_0x000297e6();
            func_0x00029b6d();
            func_0x00029b9d();
            iVar9 = 0x22b2;
            func_0x00029983();
            *(undefined2 *)(unaff_BP + -0x5c) = 10000;
            *(undefined2 *)(unaff_BP + -0x58) = 0;
            *(undefined2 *)(unaff_BP + -0x5a) = 0;
            *(undefined2 *)(unaff_BP + -0x54) = 0;
            *(undefined2 *)(unaff_BP + -0x56) = 0;
            *(undefined2 *)(unaff_BP + -0x50) = 0;
            *(undefined2 *)(unaff_BP + -0x52) = 0;
            if (*(int *)(unaff_BP + -0x9c) == 1) {
              uVar6 = *(undefined2 *)(unaff_BP + -0x6a);
              *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
              *(undefined2 *)0x1050 = uVar6;
            }
            else {
              uVar6 = *(undefined2 *)(unaff_BP + -0x8e);
              *(undefined2 *)0x1056 = *(undefined2 *)(unaff_BP + -0x90);
              *(undefined2 *)0x1058 = uVar6;
              func_0x000297e6();
              func_0x0002996b();
              func_0x00029b9d();
              func_0x00029b6d();
              func_0x00029d78();
              iVar9 = 0x22b2;
              uVar6 = FUN_28b3_0f51();
              *(undefined2 *)(unaff_BP + -0x5c) = uVar6;
            }
            break;
          }
          *(undefined2 *)(unaff_BP + -0x9c) = 0;
        }
LAB_3ab8_4baf:
        if ((*(int *)(unaff_BP + -0x9c) != 0) && (*(int *)(unaff_BP + -0x9c) != 2))
        goto FUN_3ab8_4e5f;
        *(undefined2 *)(unaff_BP + -0x134) = 1;
        func_0x0000c340();
        iStack_6 = 0x885;
        iStack_8 = -0x8a7;
        FUN_21f2_3454();
        if (*(int *)(unaff_BP + -0x9c) == 2) {
          iStack_6 = 0x22b2;
          iStack_8 = -0x890;
          FUN_21f2_2d26();
        }
        iStack_6 = 0x22b2;
        iStack_8 = -0x880;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = -0x870;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = -0x860;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = -0x850;
        FUN_21f2_2d26();
        iStack_6 = 0x22b2;
        iStack_8 = -0x840;
        FUN_21f2_2d26();
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x96) != 0)) {
          iStack_6 = *(undefined2 *)(unaff_BP + -0x92);
          iStack_8 = *(int *)(unaff_BP + -0x94);
          iStack_a = 0x2943;
          iStack_c = unaff_BP + -0x42;
          iStack_e = 0x22b2;
          uStack_10 = 0xf7ed;
          FUN_10ad_1928();
          iStack_6 = unaff_BP + -0x132;
          iStack_8 = 0x11f2;
          iStack_a = 0xf7fe;
          FUN_21f2_2d26();
        }
        uVar6 = 0x22b2;
        if (((*(int *)(unaff_BP + -0x9c) == 2) && (*(int *)(unaff_BP + -0x96) != 0)) &&
           (*(char *)0xb782 == '\0')) {
          *(undefined2 *)(unaff_BP + -0x16a) = 0x11;
          iStack_e = uVar6;
          while (*(int *)(unaff_BP + -0x16a) < 0x30) {
            iStack_6 = *(undefined2 *)(unaff_BP + -0x16a);
            iStack_8 = *(int *)0xa58 + -1;
            iStack_a = *(undefined2 *)(unaff_BP + -0x16a);
            iStack_c = 1;
            uStack_10 = 0xf863;
            func_0x0000def0();
            *(int *)(unaff_BP + -0x16a) = *(int *)(unaff_BP + -0x16a) + 1;
            iStack_e = 0xdef;
          }
          iStack_6 = *(undefined2 *)0x1054;
          iStack_8 = *(int *)0x1052;
          iStack_a = 0x2950;
          iStack_c = unaff_BP + -0x42;
          uStack_10 = 0xf885;
          FUN_10ad_1928();
          iStack_6 = 0;
          iStack_8 = 2;
          iStack_a = 1;
          iStack_c = unaff_BP + -0x42;
          iStack_e = 0x11f2;
          uStack_10 = 0xf89d;
          FUN_1000_02b5();
          iStack_6 = *(undefined2 *)0x9660;
          iStack_8 = *(int *)0x1058;
          iStack_a = *(undefined2 *)0x1056;
          iStack_c = 0x295e;
          iStack_e = unaff_BP + -0x42;
          uStack_10 = 0xdef;
          uStack_12 = 0xf8bd;
          FUN_10ad_1928();
          iStack_6 = 0;
          iStack_8 = 0;
          iStack_a = 3;
          iStack_c = 1;
          iStack_e = unaff_BP + -0x42;
          uStack_10 = 0x11f2;
          uVar6 = 0xdef;
          uStack_12 = 0xf8d5;
          FUN_1000_02b5();
        }
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc1a = 1;
        *(undefined2 *)0xc20 = 1;
        iStack_6 = unaff_BP + -0x160;
        iStack_8 = unaff_BP + -0x132;
        iStack_a = *(undefined2 *)(unaff_BP + -0x96);
        iStack_e = 0xf901;
        iStack_c = uVar6;
        uVar6 = FUN_1def_0904();
        *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc20 = 0;
        iVar9 = 0x885;
        func_0x0000abfa();
        if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
        if (*(int *)0xc18 != 0) {
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          func_0x000297e6();
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0xf947;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xf950;
          func_0x000297e6();
          iStack_a = 0x22b2;
          iStack_c = 0xf955;
          func_0x00029d78();
          uStack_12 = 0x22b2;
          uStack_14 = 0xf95f;
          func_0x000299d1();
          uStack_12 = 0x22b2;
          iVar9 = 0x3bf;
          uStack_14 = 0xf964;
          func_0x0000507a();
          goto LAB_3ab8_4baf;
        }
        if (*(int *)(unaff_BP + -0xc4) == -1) {
          iStack_6 = 0xf979;
          func_0x0000daa6();
          iStack_6 = 0x885;
          while (0 < *(int *)(unaff_BP + -0x96)) {
            uVar6 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x152) = uVar6;
            iStack_8 = -0x66e;
            FUN_13bf_0327();
            *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
            iStack_6 = 0x11f2;
          }
          iStack_6 = -0x658;
          func_0x0000b1d8();
          iVar9 = 0x885;
          func_0x0000abfa();
          goto LAB_3ab8_4baf;
        }
        if (*(int *)(unaff_BP + -0xc4) == 0x14) {
LAB_3ab8_4a7d:
          uVar6 = *(undefined2 *)0x9662;
          *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)0x9660;
          *(undefined2 *)(unaff_BP + -0x92) = uVar6;
          *(undefined2 *)(unaff_BP + -0x96) = 0;
          *(undefined2 *)(unaff_BP + -0x14e) = 0;
          while (*(int *)(unaff_BP + 6) == 0) {
            iStack_8 = -0x9d3;
            iStack_6 = iVar9;
            func_0x00024c86();
            iStack_6 = 0x22b2;
            iStack_8 = -0x9c3;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = -0x9b3;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = -0x9a3;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = -0x993;
            FUN_21f2_2d26();
            iStack_6 = 0x22b2;
            iStack_8 = -0x983;
            FUN_1def_07a4();
            func_0x0000c340();
            *(undefined2 *)0xc1a = 1;
            *(undefined2 *)0xc20 = 1;
            iStack_6 = unaff_BP + -0x160;
            iStack_8 = unaff_BP + -0x132;
            iStack_a = 0;
            iStack_c = 0x885;
            iStack_e = 0xf6a9;
            uVar6 = FUN_1def_0904();
            *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
            *(undefined2 *)0xc1a = 0;
            *(undefined2 *)0xc20 = 0;
            if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
            if (*(int *)0xc18 == 0) {
              if (*(int *)(unaff_BP + -0xb4) != 0) {
                iStack_6 = *(int *)(unaff_BP + -0xb4);
                iStack_8 = 0x1bb4;
                iVar9 = 0x11f2;
                iStack_a = 0xf71f;
                iVar7 = func_0x00015409();
                if (iVar7 != 0) {
                  *(undefined2 *)(unaff_BP + -0x9c) = 0xffff;
                  break;
                }
              }
              uVar6 = FUN_3ab8_4ca3();
              return uVar6;
            }
            *(undefined2 *)(unaff_BP + -0x96) = 0;
            func_0x000297e6();
            func_0x00029d78();
            iStack_a = 0x22b2;
            iStack_c = 0xf6e3;
            func_0x000299d1();
            iStack_a = 0x22b2;
            iStack_c = 0xf6ec;
            func_0x000297e6();
            iStack_a = 0x22b2;
            iStack_c = 0xf6f1;
            func_0x00029d78();
            uStack_12 = 0x22b2;
            uStack_14 = 0xf6fb;
            func_0x000299d1();
            uStack_12 = 0x22b2;
            iVar9 = 0x3bf;
            uStack_14 = 0xf700;
            func_0x0000507a();
          }
          goto LAB_3ab8_4baf;
        }
        if (*(int *)(unaff_BP + -0xb4) == 0) goto LAB_3ab8_4baf;
        iStack_6 = *(int *)(unaff_BP + -0xb4);
        iStack_8 = 0x885;
        iVar9 = 0x11f2;
        iStack_a = 0xf9d5;
        iVar7 = func_0x00015409();
        if (iVar7 == 0) goto LAB_3ab8_4baf;
FUN_3ab8_4e5f:
        if (*(int *)(unaff_BP + -0x9c) == -1) {
          *(undefined2 *)(unaff_BP + -0x9c) = 0;
        }
        if (*(int *)(unaff_BP + -0x9c) != 1) {
          uVar6 = *(undefined2 *)(unaff_BP + -0x166);
          *(undefined2 *)(unaff_BP + -100) = *(undefined2 *)(unaff_BP + -0x168);
          *(undefined2 *)(unaff_BP + -0x62) = uVar6;
          func_0x000297e6();
          func_0x0002996b();
          iVar9 = 0x22b2;
          func_0x00029983();
          uVar6 = *(undefined2 *)(unaff_BP + -0x166);
          *(undefined2 *)(unaff_BP + -0x164) = *(undefined2 *)(unaff_BP + -0x168);
          *(undefined2 *)(unaff_BP + -0x162) = uVar6;
          *(undefined2 *)(unaff_BP + -0x14e) = 1;
        }
      }
      goto LAB_3ab8_50e8;
    }
    if (iVar7 == 1) {
      pcVar5 = (code *)swi(0x3f);
      iVar7 = (*pcVar5)();
      if (iVar7 != -1) {
        if (*(int *)0x158 != 0) goto LAB_2bb4_569f_4;
        uVar6 = *(undefined2 *)0x9660;
        uVar11 = *(undefined2 *)0x9662;
        *(undefined2 *)(unaff_BP + -0x24) = uVar6;
        *(undefined2 *)(unaff_BP + -0x22) = uVar11;
        *(undefined2 *)(unaff_BP + -0x20) = uVar6;
        *(undefined2 *)(unaff_BP + -0x1e) = uVar11;
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c2c();
        func_0x0002996b();
        uVar6 = 0x22b2;
        func_0x00029d78();
        goto code_r0x0003fdb5;
      }
      goto LAB_3ab8_50e8;
    }
  } while( true );
LAB_3ab8_58ed:
  if ((*(int *)(unaff_BP + -0x9c) == 0) ||
     (uVar13 = *(int *)(unaff_BP + -0x9c) == 0, *(int *)(unaff_BP + -0x9c) == 1)) {
    func_0x0000c340();
    *(undefined2 *)0xc24 = 1;
    iStack_6 = 0;
    iStack_8 = 0;
    iStack_a = 0x885;
    iStack_c = 0x49b;
    func_0x0000a76b();
    iStack_6 = 0x4ba;
    func_0x00012276();
    iStack_6 = 0x11f2;
    iStack_8 = 0x4c8;
    func_0x00012276();
    func_0x00010526();
    iStack_6 = 0xdef;
    iStack_8 = 0x4dc;
    FUN_1000_0599();
    *(uint *)(unaff_BP + -0x134) = (uint)*(byte *)0x2a0f;
    if (*(int *)0xce6 != 0) {
      *(undefined2 *)(unaff_BP + -0x134) = 1;
    }
    iStack_6 = 0xdef;
    uVar6 = 0x11f2;
    iStack_8 = 0x501;
    func_0x00012276();
    if (*(int *)0xce6 != 0) {
      iStack_6 = 1;
      iStack_8 = 0x40;
      iStack_a = 0x29db;
      iStack_c = 0x11f2;
      uVar6 = 0xdef;
      iStack_e = 0x522;
      FUN_1000_02b5();
    }
    if (*(int *)(unaff_BP + -0x134) != 1) {
      iStack_8 = 0x539;
      iStack_6 = uVar6;
      FUN_1000_0599();
      uVar6 = 0x11f2;
      iStack_6 = 0x544;
      func_0x00012276();
    }
    iStack_6 = *(undefined2 *)0x962a;
    iStack_8 = *(int *)0x9628;
    iStack_a = *(undefined2 *)0x9626;
    iStack_c = *(undefined2 *)0x9624;
    iStack_e = *(undefined2 *)0x962a;
    uStack_10 = *(undefined2 *)0x9628;
    uStack_12 = *(undefined2 *)0x9626;
    uStack_14 = *(undefined2 *)0x9624;
    uStack_16 = *(undefined2 *)0x9692;
    uStack_18 = *(undefined2 *)0x9690;
    uStack_1a = *(undefined2 *)0x968e;
    uStack_1c = *(undefined2 *)0x968c;
    uStack_1e = 0;
    uStack_20 = 7;
    uStack_24 = *(undefined2 *)0x96e4;
    uStack_28 = *(undefined2 *)0x96e0;
    uStack_2a = *(undefined2 *)0x96ee;
    uStack_2c = *(undefined2 *)0x96ec;
    uStack_2e = *(undefined2 *)0x96ea;
    uStack_30 = *(undefined2 *)0x96e8;
    uStack_32 = *(undefined2 *)0x96f6;
    uStack_34 = *(undefined2 *)0x96f4;
    uStack_36 = *(undefined2 *)0x96f2;
    uStack_38 = *(undefined2 *)0x96f0;
    uVar11 = 0xdef;
    func_0x0000fd9f(uVar6);
    *(undefined2 *)(unaff_BP + -0x150) = 0;
    *(undefined2 *)(unaff_BP + -0x14c) = 0;
    if (*(int *)(unaff_BP + -0x9c) == 1) {
      *(undefined2 *)(unaff_BP + -0x1b2) = 2;
      if ((*(char *)0x2a0e == '\0') || (3 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1aa) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 5) || (7 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x1a6) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x1a6) = 1;
      }
      *(int *)(unaff_BP + -0x14c) = *(int *)(unaff_BP + -0x1aa) + *(int *)(unaff_BP + -0x1a6);
      if ((*(byte *)0x2a0e < 3) || (5 < *(byte *)0x2a0e)) {
        *(undefined2 *)(unaff_BP + -0x19e) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x19e) = 0xffff;
      }
      if ((*(byte *)0x2a0e < 7) && (*(char *)0x2a0e != '\x01')) {
        *(undefined2 *)(unaff_BP + -0x196) = 0;
      }
      else {
        *(undefined2 *)(unaff_BP + -0x196) = 1;
      }
      iStack_6 = *(undefined2 *)0x962a;
      iStack_8 = *(int *)0x9628;
      iStack_a = *(undefined2 *)0x9626;
      iStack_c = *(undefined2 *)0x9624;
      iStack_e = *(undefined2 *)0x962a;
      uStack_10 = *(undefined2 *)0x9628;
      uStack_12 = *(undefined2 *)0x9626;
      uStack_14 = *(undefined2 *)0x9624;
      uStack_16 = *(undefined2 *)0x9692;
      uStack_18 = *(undefined2 *)0x9690;
      uStack_1a = *(undefined2 *)0x968e;
      uStack_1c = *(undefined2 *)0x968c;
      uStack_1e = 3;
      uStack_20 = *(undefined2 *)(unaff_BP + -0x1b2);
      uStack_24 = *(undefined2 *)0x9640;
      uStack_28 = *(undefined2 *)0x963c;
      iVar9 = *(int *)(unaff_BP + -0x19e) + *(int *)(unaff_BP + -0x196);
      *(int *)(unaff_BP + -0x150) = iVar9;
      *(int *)(unaff_BP + -0x18e) = -(iVar9 * 5 + -8);
      uStack_2a = 0xdef;
      uStack_2c = 0x6ba;
      FUN_28b3_0d8b();
      uStack_32 = 0x22b2;
      uStack_34 = 0x6c4;
      func_0x000299d1();
      *(int *)(unaff_BP + -0x186) = (*(int *)(unaff_BP + -0x14c) + 0x5e) * 5;
      uStack_32 = 0x22b2;
      uStack_34 = 0x6dd;
      FUN_28b3_0d8b();
      uVar11 = 0x22b2;
      func_0x000299d1(0x22b2);
    }
    else {
      *(undefined2 *)(unaff_BP + -0x1b2) = 7;
      if (*(char *)0x2a0e != '\0') goto LAB_3ab8_5be8;
      iStack_6 = *(undefined2 *)0x962a;
      iStack_8 = *(int *)0x9628;
      iStack_a = *(undefined2 *)0x9626;
      iStack_c = *(undefined2 *)0x9624;
      iStack_e = *(undefined2 *)0x962a;
      uStack_10 = *(undefined2 *)0x9628;
      uStack_12 = *(undefined2 *)0x9626;
      uStack_14 = *(undefined2 *)0x9624;
      uStack_16 = *(undefined2 *)0x9692;
      uStack_18 = *(undefined2 *)0x9690;
      uStack_1a = *(undefined2 *)0x968e;
      uStack_1c = *(undefined2 *)0x968c;
      uStack_1e = 3;
      uStack_20 = 7;
      uStack_24 = *(undefined2 *)0x9640;
      uStack_28 = *(undefined2 *)0x963c;
      uStack_2a = *(undefined2 *)0x96ee;
      uStack_2c = *(undefined2 *)0x96ec;
      uStack_2e = *(undefined2 *)0x96ea;
      uStack_30 = *(undefined2 *)0x96e8;
      uStack_32 = *(undefined2 *)0x96f6;
      uStack_34 = *(undefined2 *)0x96f4;
      uStack_36 = *(undefined2 *)0x96f2;
      uStack_38 = *(undefined2 *)0x96f0;
    }
    func_0x0000fd9f(uVar11);
LAB_3ab8_5be8:
    uVar12 = 0x885;
    func_0x0000a799();
    uVar6 = *(undefined2 *)0x96f8;
    uVar11 = *(undefined2 *)0x96fa;
    *(undefined2 *)(unaff_BP + -0xca) = uVar6;
    *(undefined2 *)(unaff_BP + -200) = uVar11;
    *(undefined2 *)(unaff_BP + -0x13e) = uVar6;
    *(undefined2 *)(unaff_BP + -0x13c) = uVar11;
    *(undefined2 *)(unaff_BP + -0x5c) = 10000;
    *(undefined2 *)(unaff_BP + -0x58) = 0;
    *(undefined2 *)(unaff_BP + -0x5a) = 0;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    *(undefined2 *)(unaff_BP + -0x56) = 0;
    *(undefined2 *)(unaff_BP + -0x50) = 0;
    *(undefined2 *)(unaff_BP + -0x52) = 0;
    *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
    *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
LAB_3ab8_5c29:
    do {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xa48 = 3;
      if (*(int *)(unaff_BP + -0x134) != 1) {
        *(undefined2 *)0xa48 = 4;
      }
      iStack_6 = unaff_BP + -0x160;
      iStack_8 = unaff_BP + -0xc6;
      iStack_a = unaff_BP + -0xb2;
      iVar9 = 0x3bf;
      iStack_e = 0x7e2;
      iStack_c = uVar12;
      uVar6 = func_0x00006608();
      *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(int *)0x158 != 0) {
LAB_3ab8_5c7d:
        func_0x00013e19();
LAB_3ab8_5c82:
        iStack_6 = 0x80a;
        func_0x0000daa6();
        uVar6 = func_0x0000abfa();
        return uVar6;
      }
LAB_3ab8_6556:
      if (*(int *)(unaff_BP + -0xc4) == -1) {
        uVar6 = func_0x00013e19();
        if (*(int *)(unaff_BP + 6) != 0) {
          return uVar6;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x96) != 0)) {
          iStack_6 = 0x1107;
          func_0x0000daa6();
          iStack_6 = 0x885;
          while (0 < *(int *)(unaff_BP + -0x96)) {
            uVar6 = *(undefined2 *)0x14e;
            *(undefined2 *)(unaff_BP + -0x154) = *(undefined2 *)0x14c;
            *(undefined2 *)(unaff_BP + -0x152) = uVar6;
            iStack_8 = 0x829;
            FUN_13bf_0327();
            *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + -1;
            iStack_6 = 0x11f2;
          }
          iStack_6 = 0x83f;
          func_0x0000b1d8();
        }
        iStack_6 = 0x848;
        func_0x0000daa6();
        func_0x0000abfa();
        goto LAB_3ab8_6656;
      }
      if (*(int *)(unaff_BP + -0xc4) == 99) goto LAB_3ab8_58ed;
      *(undefined2 *)(unaff_BP + -0x1ba) = 0;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) {
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        if (*(int *)(unaff_BP + -0xb2) < 0x125) goto LAB_3ab8_58ed;
        *(int *)(unaff_BP + -0xc4) = (*(int *)(unaff_BP + -0xb2) + -0x124) / 0x60 + 0x31;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x31) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0xb4) = 0;
        uVar6 = *(undefined2 *)0x104e;
        uVar11 = *(undefined2 *)0x1050;
        *(undefined2 *)(unaff_BP + -0x6c) = uVar6;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
        *(undefined2 *)(unaff_BP + -0x90) = uVar6;
        *(undefined2 *)(unaff_BP + -0x8e) = uVar11;
        iStack_6 = 1;
        iStack_8 = 0x11f2;
        iStack_a = 0x8d1;
        iVar9 = FUN_4375_baa1();
        *(int *)(unaff_BP + -0x44) = iVar9;
        if (*(int *)0x158 != 0) goto LAB_3ab8_5c82;
        if (iVar9 == -1) goto LAB_3ab8_58ed;
        if (iVar9 == 0) {
          if (*(int *)(unaff_BP + -0x9c) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(unaff_BP + -0x9c) = 0;
          goto LAB_3ab8_58ed;
        }
        func_0x000297e6();
        func_0x00029b6d();
        func_0x00029b9d();
        iVar9 = 0x22b2;
        func_0x00029983();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x6a);
        *(undefined2 *)0x104e = *(undefined2 *)(unaff_BP + -0x6c);
        *(undefined2 *)0x1050 = uVar6;
        *(undefined2 *)(unaff_BP + -0x9c) = 1;
        if (*(int *)(unaff_BP + -0x14e) == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x14e) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x15a);
        *(undefined2 *)(unaff_BP + -0x160) = *(undefined2 *)(unaff_BP + -0x15c);
        *(undefined2 *)(unaff_BP + -0x15e) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x162);
        *(undefined2 *)(unaff_BP + -0x168) = *(undefined2 *)(unaff_BP + -0x164);
        *(undefined2 *)(unaff_BP + -0x166) = uVar6;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
        uVar6 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar6;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x32) {
        bVar2 = *(byte *)0x2a0e;
        *(uint *)(unaff_BP + -0x1b2) = (uint)bVar2;
        if (*(char *)0x15b == '\x02') {
          *(int *)(unaff_BP + -0x1b2) = bVar2 - 1;
        }
        else {
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (8 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (1 < *(int *)(unaff_BP + -0x1b2))) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 0;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 1) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 8;
        }
        if ((*(int *)(unaff_BP + -0x9c) == 0) && (*(int *)(unaff_BP + -0x1b2) < 0)) {
          *(undefined2 *)(unaff_BP + -0x1b2) = 1;
        }
        *(undefined1 *)0x2a0e = *(undefined1 *)(unaff_BP + -0x1b2);
        goto LAB_3ab8_58ed;
      }
      if (*(int *)(unaff_BP + -0xc4) == 0x33) {
        if (*(int *)0xce6 != 0) {
          uVar6 = func_0x00013e19();
          *(undefined2 *)0xce6 = 0x14;
          return uVar6;
        }
        *(char *)0x2a0f = *(char *)0x2a0f + '\x01';
        if (10 < *(byte *)0x2a0f) {
LAB_3ab8_5eb7:
          *(undefined1 *)0x2a0f = 1;
        }
        goto LAB_3ab8_58ed;
      }
      if ((*(int *)0xce6 == 0) && (*(int *)(unaff_BP + -0xc4) == 0x34)) goto LAB_3ab8_5eb7;
      if ((*(int *)(unaff_BP + -0xb4) != 0) && (*(int *)(unaff_BP + -0xc4) == 100)) {
        uVar6 = *(undefined2 *)0x96fe;
        *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)0x96fc;
        *(undefined2 *)(unaff_BP + -200) = uVar6;
        iStack_6 = *(int *)(unaff_BP + -0xb4);
        iStack_a = 0xa7d;
        iStack_8 = iVar9;
        iVar9 = func_0x00015409();
        if (iVar9 == 0) goto LAB_3ab8_58ed;
        *(undefined2 *)(unaff_BP + -0x1ba) = 1;
      }
      uVar13 = *(char *)0x15a == '\0';
      if (!(bool)uVar13) goto LAB_3ab8_58ed;
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        func_0x000297e6();
        func_0x000297e6();
        uVar12 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar13) goto LAB_3ab8_5c29;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x15e);
      *(undefined2 *)(unaff_BP + -0xca) = *(undefined2 *)(unaff_BP + -0x160);
      *(undefined2 *)(unaff_BP + -200) = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x166);
      *(undefined2 *)(unaff_BP + -0x13e) = *(undefined2 *)(unaff_BP + -0x168);
      *(undefined2 *)(unaff_BP + -0x13c) = uVar6;
      uVar12 = 0x11f2;
      func_0x00013e19();
      if ((((*(int *)(unaff_BP + -0xb2) < *(int *)0xa5c) ||
           (*(int *)0xa60 < *(int *)(unaff_BP + -0xc6))) ||
          (*(int *)(unaff_BP + -0xc6) < *(int *)0xa5e)) && (*(int *)(unaff_BP + -0x1ba) == 0))
      goto LAB_3ab8_5c29;
      *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
      if (*(int *)(unaff_BP + -0x9c) == 0) {
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029d78();
        func_0x000299b9();
        func_0x000299d1();
        func_0x00029834();
        func_0x00029c2c();
        func_0x00029834();
        func_0x00029c2c();
        FUN_28b3_117c();
        iStack_a = 0x22b2;
        iStack_c = 0xbcb;
        func_0x000299d1();
        iStack_a = 0x22b2;
        iStack_c = 0xbd0;
        FUN_28b3_1582();
        func_0x00029834();
        func_0x00029983();
        if ((*(char *)0x4a != '\0') && (*(int *)(unaff_BP + -0xb4) != 2)) {
          puVar8 = (undefined2 *)func_0x0000c4c4();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x1b2) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x1b0) = uVar6;
          func_0x000297e6();
          iStack_6 = 0xc1a;
          func_0x00029b9d();
          func_0x00029983();
          if (*(char *)0x2a0e == '\0') {
            func_0x000297e6();
            iStack_6 = 0xc3a;
            func_0x00029b6d();
            func_0x00029983();
          }
          func_0x000297e6();
          func_0x00029b85();
          func_0x00029d78();
          func_0x00029c74();
          uVar16 = FUN_28b3_0f51();
          *(undefined2 *)(unaff_BP + -0x1aa) = (int)uVar16;
          *(undefined2 *)(unaff_BP + -0x1a8) = (int)((ulong)uVar16 >> 0x10);
          func_0x000298b4();
          func_0x00029b6d();
          func_0x00029983();
        }
        if (*(char *)0x2a0e != '\0') {
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x00029834();
          func_0x00029c2c();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          iStack_6 = 0xce8;
          func_0x00029b6d();
          func_0x00029983();
        }
      }
      else {
        if (*(int *)0xcb6 == 0) {
          uVar6 = *(undefined2 *)0x965e;
          *(undefined2 *)0xb76a = *(undefined2 *)0x965c;
          *(undefined2 *)0xb76c = uVar6;
          uVar6 = *(undefined2 *)0x9660;
          uVar11 = *(undefined2 *)0x9662;
        }
        else {
          uVar6 = *(undefined2 *)0xcbc;
          *(undefined2 *)0xb76a = *(undefined2 *)0xcba;
          *(undefined2 *)0xb76c = uVar6;
          uVar6 = *(undefined2 *)0xcbe;
          uVar11 = *(undefined2 *)0xcc0;
        }
        *(undefined2 *)0xb784 = uVar6;
        *(undefined2 *)0xb786 = uVar11;
        func_0x000297e6();
        func_0x0002996b();
        FUN_28b3_0ee9();
        func_0x000297e6();
        func_0x0002996b();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029983();
        if (*(char *)0x2a0e != '\0') {
          FUN_28b3_0d8b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029b6d();
          func_0x00029af6();
          func_0x00029d78();
          func_0x000299b9();
          iStack_a = 0x22b2;
          iStack_c = 0xdba;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xdc3;
          FUN_28b3_0d8b();
          iStack_a = 0x22b2;
          iStack_c = 0xdcc;
          func_0x0002996b();
          iStack_a = 0x22b2;
          iStack_c = 0xdd4;
          func_0x00029b6d();
          iStack_a = 0x22b2;
          iStack_c = 0xdd9;
          func_0x00029af6();
          iStack_a = 0x22b2;
          iStack_c = 0xdde;
          func_0x00029d78();
          iStack_a = 0x22b2;
          iStack_c = 0xde7;
          func_0x000299b9();
          uStack_12 = 0x22b2;
          uStack_14 = 0xdf1;
          func_0x000299d1();
          uStack_12 = 0;
          uStack_14 = 0x22b2;
          uStack_16 = 0xdf9;
          puVar8 = (undefined2 *)FUN_1def_05d1();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -0x68) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x66) = uVar6;
          func_0x00029834();
          iStack_a = 0x22b2;
          iStack_c = 0xe1c;
          func_0x000299d1();
          iStack_a = 0x22b2;
          iStack_c = 0xe25;
          func_0x00029834();
          uStack_12 = 0x22b2;
          uStack_14 = 0xe2f;
          func_0x000299d1();
          uStack_12 = 0;
          uStack_14 = 0x22b2;
          uStack_16 = 0xe37;
          puVar8 = (undefined2 *)func_0x0001e558();
          uVar6 = puVar8[1];
          *(undefined2 *)(unaff_BP + -100) = *puVar8;
          *(undefined2 *)(unaff_BP + -0x62) = uVar6;
        }
      }
      func_0x000297e6();
      func_0x00029b6d();
      func_0x00029b6d();
      func_0x00029983();
      if (*(char *)0xb782 == '\0') {
        *(undefined2 *)(unaff_BP + -0x1b2) = 0x11;
        iStack_e = 0x22b2;
        do {
          iStack_6 = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_8 = *(int *)0xa58 + -1;
          iStack_a = *(undefined2 *)(unaff_BP + -0x1b2);
          iStack_c = 1;
          uStack_10 = 0xe98;
          func_0x0000def0();
          *(int *)(unaff_BP + -0x1b2) = *(int *)(unaff_BP + -0x1b2) + 1;
          iStack_e = 0xdef;
        } while (*(int *)(unaff_BP + -0x1b2) < 0x30);
        iStack_6 = *(undefined2 *)(unaff_BP + -0x92);
        iStack_8 = *(int *)(unaff_BP + -0x94);
        iStack_a = 0x29ed;
        iStack_c = unaff_BP + -0x42;
        iStack_e = 0xdef;
        uStack_10 = 0xec3;
        FUN_10ad_1928();
        iStack_6 = 0;
        iStack_8 = 2;
        iStack_a = 1;
        iStack_c = unaff_BP + -0x42;
        iStack_e = 0x11f2;
        uStack_10 = 0xedb;
        FUN_1000_02b5();
        iStack_6 = *(undefined2 *)0x9660;
        iStack_8 = 0xdef;
        iStack_a = 0xeef;
        func_0x000297e6();
        iStack_8 = 0x22b2;
        iStack_a = 0xef8;
        func_0x00029b6d();
        iStack_c = 0x22b2;
        iStack_e = 0xf02;
        func_0x00029983();
        iStack_8 = 0x29fb;
        iStack_a = unaff_BP + -0x42;
        iStack_c = 0x22b2;
        iStack_e = 0xf0f;
        FUN_10ad_1928();
        iStack_6 = 3;
        iStack_8 = 1;
        iStack_a = unaff_BP + -0x42;
        iStack_c = 0x11f2;
        iStack_e = 0xf27;
        FUN_1000_02b5();
      }
      uVar13 = 0;
      if (*(int *)(unaff_BP + -0x1ba) != 0) {
        func_0x00013e19();
        *(undefined2 *)(unaff_BP + -0x5c) = 10000;
        uVar13 = false;
        *(undefined2 *)(unaff_BP + -0x58) = 0;
        *(undefined2 *)(unaff_BP + -0x5a) = 0;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        *(undefined2 *)(unaff_BP + -0x56) = 0;
        *(undefined2 *)(unaff_BP + -0x50) = 0;
        *(undefined2 *)(unaff_BP + -0x52) = 0;
        break;
      }
      func_0x00029834();
      func_0x000297e6();
      func_0x00029d78();
      FUN_28b3_1181();
      if (!(bool)uVar13) goto code_r0x00040f9e;
LAB_3ab8_6451:
      uVar12 = 0x22b2;
    } while( true );
  }
  *(undefined2 *)(unaff_BP + -0x96) = 0;
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  uVar6 = FUN_28b3_1181();
  if ((bool)uVar13) {
    if (*(int *)(unaff_BP + 6) == 0) {
      halt_baddata();
    }
    return uVar6;
  }
  *(undefined1 *)(unaff_BP + -0x4d) = *(undefined1 *)0xa6a;
  *(undefined1 *)(unaff_BP + -0x4e) = *(undefined1 *)0xa6c;
  *(undefined1 *)(unaff_BP + -0x4c) = *(undefined1 *)0xb310;
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029b6d();
  func_0x00029983();
  iStack_6 = 0x1148;
  func_0x0000daa6();
  puVar10 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while (uVar13 = *(int *)(unaff_BP + -0x136) == 0, 0 < *(int *)(unaff_BP + -0x136)) {
    func_0x00029834();
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029d78();
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      puVar10 = &uStack_20;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar3 = puVar10;
        puVar10 = puVar10 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uStack_24 = 0x11b3;
      FUN_13bf_01c1();
      *(int *)(unaff_BP + -0x96) = *(int *)(unaff_BP + -0x96) + 1;
    }
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  uVar6 = func_0x0000abfa();
  *(undefined2 *)(unaff_BP + -0x14e) = 0;
  if (*(int *)(unaff_BP + 6) != 0) {
    return uVar6;
  }
LAB_3ab8_6656:
  if (*(int *)(unaff_BP + -0x9c) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  goto LAB_3ab8_58ed;
code_r0x00040f9e:
  *(undefined2 *)(unaff_BP + -0x1b2) = 0xffff;
  *(undefined2 *)(unaff_BP + -0x1b0) = 0xffff;
  puVar10 = (undefined2 *)(unaff_BP + -0x8c);
  puVar8 = (undefined2 *)(unaff_BP + -0x68);
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    puVar15 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar15;
  }
  *(undefined1 *)(unaff_BP + -0x71) = 9;
  *(undefined2 *)(unaff_BP + -0x136) = *(undefined2 *)(unaff_BP + -0x134);
  while( true ) {
    if (*(int *)(unaff_BP + -0x136) < 1) goto LAB_3ab8_6451;
    FUN_28b3_0d8b();
    FUN_28b3_0d8b();
    FUN_28b3_1172();
    func_0x00029b6d();
    func_0x0002996b();
    func_0x00029b6d();
    func_0x00029d78();
    uVar6 = 0x22b2;
    uVar16 = FUN_28b3_0f51();
    iVar9 = (int)((ulong)uVar16 >> 0x10);
    *(int *)(unaff_BP + -0x1aa) = (int)uVar16;
    *(int *)(unaff_BP + -0x1a8) = iVar9;
    if (((int)uVar16 != *(int *)(unaff_BP + -0x1b2)) || (iVar9 != *(int *)(unaff_BP + -0x1b0))) {
      puVar10 = &uStack_20;
      puVar8 = (undefined2 *)(unaff_BP + -0x8c);
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar3 = puVar10;
        puVar10 = puVar10 + 1;
        puVar15 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar15;
      }
      uVar6 = 0x11f2;
      uStack_24 = 0x1038;
      func_0x00013e46();
    }
    uVar11 = *(undefined2 *)(unaff_BP + -0x1a8);
    *(undefined2 *)(unaff_BP + -0x1b2) = *(undefined2 *)(unaff_BP + -0x1aa);
    *(undefined2 *)(unaff_BP + -0x1b0) = uVar11;
    *(undefined2 *)0xc20 = 1;
    *(undefined2 *)0xa4a = 1;
    *(undefined2 *)0xa48 = 2;
    iStack_6 = unaff_BP + -0x160;
    iStack_8 = unaff_BP + -0xc6;
    iStack_a = unaff_BP + -0xb2;
    iStack_e = 0x1078;
    iStack_c = uVar6;
    uVar6 = func_0x00006608();
    *(undefined2 *)(unaff_BP + -0xc4) = uVar6;
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xa4a = 0;
    *(undefined2 *)0xa48 = 0;
    uVar13 = *(int *)0x158 == 0;
    if (!(bool)uVar13) goto LAB_3ab8_5c7d;
    func_0x000297e6();
    func_0x000297e6();
    iVar9 = 0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar13) break;
    func_0x000297e6();
    func_0x000297e6();
    iVar9 = 0x22b2;
    FUN_28b3_1181();
    if (((!(bool)uVar13) || (*(int *)(unaff_BP + -0xc4) != 0)) || (*(int *)(unaff_BP + -0xb4) != 0))
    break;
    *(int *)(unaff_BP + -0x136) = *(int *)(unaff_BP + -0x136) + -1;
  }
  goto LAB_3ab8_6556;
}



/* 3ab8:6669  FUN_3ab8_6669  420 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_6669(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 local_34 [20];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 *local_10;
  undefined2 *local_e;
  undefined1 *local_c;
  undefined1 *puStack_a;
  undefined2 uStack_8;
  undefined1 **ppuStack_6;
  undefined1 **ppuStack_4;
  
  ppuStack_4 = (undefined1 **)0x3ab8;
  ppuStack_6 = (undefined1 **)0x11f4;
  FUN_21f2_0ebc();
LAB_3ab8_6674:
  do {
    local_16 = *param_2;
    local_14 = param_2[1];
    if (param_1 == 1) {
      ppuStack_4 = (undefined1 **)0x2a10;
    }
    else {
      ppuStack_4 = (undefined1 **)0x2a15;
    }
    ppuStack_6 = &local_c;
    uStack_8 = 0x22b2;
    puStack_a = (undefined1 *)0x1220;
    local_12 = local_16;
    local_10 = (undefined2 *)local_14;
    FUN_21f2_3454();
    ppuStack_4 = (undefined1 **)0x22b2;
    ppuStack_6 = (undefined1 **)0x1227;
    func_0x0001bb4e();
    ppuStack_4 = &local_c;
    ppuStack_6 = (undefined1 **)0x2a1a;
    uStack_8 = 0x1bb4;
    puStack_a = (undefined1 *)0x1234;
    func_0x00012276();
    ppuStack_4 = (undefined1 **)0x1;
    ppuStack_6 = (undefined1 **)0x22;
    uStack_8 = 0x11f2;
    puStack_a = (undefined1 *)0x1243;
    FUN_1000_0599();
    ppuStack_4 = (undefined1 **)0x31e;
    ppuStack_6 = &local_c;
    uStack_8 = 0x2a1f;
    puStack_a = (undefined1 *)0xdef;
    local_c = (undefined1 *)0x1256;
    func_0x00012276();
    if (param_1 == 1) {
      local_18 = 1;
      ppuStack_4 = (undefined1 **)*(undefined2 *)0x9662;
      ppuStack_6 = (undefined1 **)*(undefined2 *)0x9660;
      uStack_8 = local_10;
      puStack_a = (undefined1 *)local_12;
      local_c = (undefined1 *)0x2a30;
      local_e = (undefined2 *)local_34;
      local_10 = (undefined2 *)0x11f2;
      local_12 = 0x127f;
      FUN_10ad_1928();
      ppuStack_6 = (undefined1 **)local_34;
      uStack_8 = 0x11f2;
      puStack_a = (undefined1 *)0x128b;
      func_0x00012276();
    }
    else {
      local_18 = 0x2711;
      ppuStack_4 = (undefined1 **)0x11f2;
      ppuStack_6 = (undefined1 **)0x129b;
      func_0x000297e6();
      ppuStack_4 = (undefined1 **)0x22b2;
      ppuStack_6 = (undefined1 **)0x12a0;
      func_0x00029d78();
      local_c = (undefined1 *)0x22b2;
      local_e = (undefined2 *)0x12aa;
      func_0x000299d1();
      local_c = (undefined1 *)0x2a3a;
      local_e = (undefined2 *)0x22b2;
      local_10 = (undefined2 *)0x12b3;
      func_0x00012276();
    }
    ppuStack_6 = (undefined1 **)local_18;
    uStack_8 = 0xf;
    puStack_a = local_20;
    local_c = local_1c;
    local_e = &local_16;
    local_10 = &local_12;
    local_12 = 0x11f2;
    local_14 = 0x12d2;
    local_e = (undefined2 *)func_0x000021a4();
    if (*(int *)0x158 != 0) {
      return 0;
    }
    uVar1 = param_1 == 0;
    uVar2 = param_1 == 1;
    if ((bool)uVar2) {
      ppuStack_6 = (undefined1 **)0xad;
      uStack_8 = 0x12f3;
      func_0x00029834();
      ppuStack_6 = (undefined1 **)0x22b2;
      uStack_8 = 0x12fb;
      func_0x000297e6();
      ppuStack_6 = (undefined1 **)0x22b2;
      uStack_8 = 0x1300;
      FUN_28b3_1181();
      if ((bool)uVar1) goto LAB_3ab8_6674;
      ppuStack_4 = (undefined1 **)0x22b2;
      ppuStack_6 = (undefined1 **)0x130e;
      func_0x00029834();
      ppuStack_4 = (undefined1 **)0x22b2;
      ppuStack_6 = (undefined1 **)0x1316;
      func_0x000297e6();
      ppuStack_4 = (undefined1 **)0x22b2;
      ppuStack_6 = (undefined1 **)0x131b;
      FUN_28b3_1181();
      if (!(bool)uVar1 && !(bool)uVar2) goto LAB_3ab8_6674;
    }
    else {
      ppuStack_6 = (undefined1 **)0xad;
      uStack_8 = 0x1329;
      func_0x00029834();
      ppuStack_6 = (undefined1 **)0x22b2;
      uStack_8 = 0x1331;
      func_0x000297e6();
      ppuStack_6 = (undefined1 **)0x22b2;
      uStack_8 = 0x1336;
      func_0x00029d78();
      ppuStack_6 = (undefined1 **)0x22b2;
      uStack_8 = 0x133b;
      FUN_28b3_1181();
      if ((bool)uVar1) goto LAB_3ab8_6674;
      ppuStack_4 = (undefined1 **)0x22b2;
      ppuStack_6 = (undefined1 **)0x1345;
      func_0x000297e6();
      ppuStack_4 = (undefined1 **)0x22b2;
      ppuStack_6 = (undefined1 **)0x134e;
      func_0x000297e6();
      ppuStack_4 = (undefined1 **)0x22b2;
      ppuStack_6 = (undefined1 **)0x1353;
      FUN_28b3_1181();
      if ((bool)uVar1 || (bool)uVar2) goto LAB_3ab8_6674;
    }
    if ((local_e == (undefined2 *)0x65) || (local_e == (undefined2 *)0xffff)) {
      return 0xffff;
    }
    if ((local_e == (undefined2 *)0x66) || (local_e == (undefined2 *)0x0)) {
      *param_2 = local_12;
      param_2[1] = local_10;
      return 1;
    }
  } while( true );
}



/* 4000:138d  FUN_4000_138d  9066 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x00042eaf) */
/* WARNING: Removing unreachable block (ram,0x0004229e) */
/* WARNING: Removing unreachable block (ram,0x0004226c) */
/* WARNING: Removing unreachable block (ram,0x00042ebb) */
/* WARNING: Removing unreachable block (ram,0x00042ec9) */
/* WARNING: Removing unreachable block (ram,0x00042efb) */
/* WARNING: Removing unreachable block (ram,0x00042f09) */
/* WARNING: Removing unreachable block (ram,0x00042f1f) */
/* WARNING: Type propagation algorithm not settling */

void FUN_4000_138d(undefined2 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined4 uVar15;
  int local_218;
  undefined2 local_208;
  undefined2 local_206;
  int *local_204;
  undefined2 *local_202;
  int local_200;
  int local_1fe;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined2 local_1f6;
  undefined2 local_1f4;
  int *local_1f2;
  undefined2 local_1f0;
  undefined2 local_1ee;
  undefined2 local_1e0;
  undefined2 local_1de;
  undefined2 local_1d4;
  undefined2 uStack_1d2;
  undefined2 uStack_1d0;
  undefined2 uStack_1ce;
  undefined1 local_1c4 [40];
  undefined1 local_19c [10];
  undefined2 local_192;
  undefined2 local_190;
  undefined2 local_18e;
  undefined2 local_18c;
  undefined2 local_17a;
  undefined2 local_178;
  undefined2 local_176;
  undefined2 local_174;
  int local_16e;
  int local_16c [50];
  undefined1 local_108 [14];
  undefined2 local_fa;
  undefined2 local_f8;
  int local_f6;
  int local_f4;
  int local_f2;
  int local_f0;
  undefined4 local_ee;
  undefined2 *local_ea;
  int local_e8;
  int local_e6;
  int local_e4;
  int local_de;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  int *local_ca;
  undefined1 local_c8 [10];
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined4 local_b6;
  char local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  uint local_a4;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined2 local_90;
  undefined2 local_8e;
  int local_6e [20];
  undefined1 local_46 [28];
  undefined2 uStack_2a;
  undefined2 local_26;
  uint local_24;
  uint local_22;
  undefined2 local_20 [2];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 *puStack_12;
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  int *piStack_a;
  
  FUN_21f2_0ebc();
  local_e4 = -9999;
  local_f0 = -9999;
  local_b2 = 1;
  piStack_a = (int *)0x2a43;
  piStack_c = (int *)local_1c4;
  piStack_e = (int *)0x22b2;
  piStack_10 = (int *)0x13bc;
  FUN_21f2_3454();
  piStack_a = (int *)0x302;
  piStack_c = (int *)0x2a53;
  piStack_e = local_6e;
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x13d4;
  FUN_21f2_3454();
  piStack_a = (int *)local_c8;
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0x13e5;
  FUN_21f2_3454();
  piStack_a = (int *)local_108;
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0x13f5;
  FUN_21f2_3454();
  piStack_a = (int *)local_19c;
  piStack_c = (undefined2 *)0x22b2;
  uVar10 = 0x22b2;
  piStack_e = (int *)0x1405;
  FUN_21f2_3454();
  local_d2 = *(undefined2 *)0x96c4;
  local_d0 = *(undefined2 *)0x96c6;
LAB_3ab8_6896:
  local_24 = 1;
  local_22 = 1;
  local_ca = (int *)0x0;
  local_e8 = 0;
  local_f6 = 0;
  local_16e = 0;
  local_be = *(undefined2 *)0x9660;
  local_bc = *(undefined2 *)0x9662;
  local_b2 = '\x01';
  local_a4 = 10000;
  local_a2._2_2_ = 0;
  local_a2._0_2_ = 0;
  local_9e._2_2_ = 0;
  local_9e._0_2_ = 0;
  local_9a._2_2_ = 0;
  local_9a._0_2_ = 0;
  local_95 = *(undefined1 *)0xa6a;
  local_96 = *(undefined1 *)0xa6c;
  local_94 = *(undefined1 *)0xb310;
  do {
    while( true ) {
      if (param_2 != 0) goto LAB_3ab8_6a39;
      piStack_a = local_16c;
      piStack_e = (int *)0x1491;
      piStack_c = (int *)uVar10;
      FUN_21f2_3454();
      piStack_a = local_16c;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x14a2;
      FUN_21f2_2d26();
      piStack_a = local_16c;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x14b2;
      FUN_21f2_2d26();
      piStack_a = local_16c;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x14c3;
      FUN_21f2_2d26();
      piStack_a = local_16c;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x14d3;
      FUN_21f2_2d26();
      piStack_a = local_16c;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x14e4;
      FUN_21f2_2d26();
      piStack_a = local_16c;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x14f4;
      FUN_21f2_2d26();
      piStack_a = (int *)0x3;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x1504;
      FUN_1def_07a4();
      piStack_a = (int *)0x150b;
      func_0x0000c340();
      *(undefined2 *)0xc1a = 1;
      *(undefined2 *)0xc20 = 1;
      piStack_a = &local_208;
      piStack_c = &local_1fc;
      piStack_e = local_16c;
      piStack_10 = (int *)0x0;
      puStack_12 = (undefined2 *)0x885;
      uVar10 = 0x1bb4;
      uStack_14 = 0x1530;
      local_d4 = FUN_1def_0904();
      *(undefined2 *)0xc1a = 0;
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (*(int *)0xc18 == 0) break;
      local_ca = (int *)0x0;
      piStack_a = (int *)0x155b;
      func_0x000297e6();
      piStack_a = (int *)0x1560;
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      puStack_12 = (undefined2 *)0x156a;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      puStack_12 = (undefined2 *)0x1573;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      puStack_12 = (undefined2 *)0x1578;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0x1582;
      func_0x000299d1();
      uStack_18 = 0x22b2;
      uVar10 = 0x3bf;
      uStack_1a = 0x1587;
      func_0x0000507a();
    }
    if (local_ea != (undefined2 *)0x0) {
      piStack_a = &local_1fc;
      piStack_c = local_ea;
      piStack_e = (int *)0x1bb4;
      uVar10 = 0x11f2;
      piStack_10 = (int *)0x15a9;
      iVar6 = func_0x00015409();
      if (iVar6 != 0) {
        local_d4 = -1;
        break;
      }
    }
  } while ((local_d4 < 1) || (3 < local_d4));
LAB_3ab8_6a39:
  if (param_2 != 0) {
    local_d4 = -1;
    piStack_a = (int *)0x15cd;
    func_0x00029834();
    piStack_a = (int *)0x15d6;
    func_0x00029983();
    piStack_a = (int *)0x15de;
    func_0x00029834();
    uVar10 = 0x22b2;
    piStack_a = (int *)0x15e7;
    func_0x00029983();
  }
LAB_3ab8_6a67:
  if (local_d4 < 1) {
LAB_3ab8_6a71:
    while( true ) {
      while( true ) {
        if (local_d4 == -1) goto LAB_3ab8_6be9;
        piStack_a = (int *)0x1600;
        func_0x0000c340();
        piStack_a = local_16c;
        piStack_c = (int *)0x885;
        piStack_e = (int *)0x160f;
        FUN_21f2_3454();
        if (local_ca != (int *)0x0) {
          piStack_a = local_16c;
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0x1627;
          FUN_21f2_2d26();
          piStack_a = (int *)0x1632;
          func_0x000297e6();
          piStack_a = (int *)0x1637;
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          puStack_12 = (undefined2 *)0x1641;
          func_0x000299d1();
          piStack_10 = (int *)0x2a8c;
          puStack_12 = (undefined2 *)local_46;
          uStack_14 = 0x22b2;
          uStack_16 = 0x164e;
          FUN_21f2_3454();
          piStack_a = local_16c;
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0x165f;
          FUN_21f2_2d26();
        }
        *(undefined2 *)0xc2c = 1;
        *(undefined2 *)0xc1a = 1;
        *(undefined2 *)0xc20 = 1;
        piStack_a = &local_208;
        piStack_c = &local_1fc;
        piStack_e = local_16c;
        piStack_10 = local_ca;
        puStack_12 = (undefined2 *)0x22b2;
        uVar10 = 0x1bb4;
        uStack_14 = 0x168a;
        local_f2 = FUN_1def_0904();
        *(undefined2 *)0xc2c = 0;
        *(undefined2 *)0xc1a = 0;
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) {
          return;
        }
        if (*(int *)0xc18 == 0) break;
        local_ca = (int *)0x0;
        piStack_a = (int *)0x16cc;
        func_0x000297e6();
        piStack_a = (int *)0x16d1;
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x16db;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x16e4;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x16e9;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x16f3;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0x16f8;
        func_0x0000507a();
      }
      if (local_f2 != -1) break;
      piStack_a = (int *)0x1bb4;
      piStack_c = (int *)0x170b;
      func_0x0000daa6();
      local_1f0 = *(undefined2 *)0x14c;
      local_1ee = *(undefined2 *)0x14e;
      piStack_c = (int *)0x885;
      piStack_e = (int *)0x1722;
      piStack_a = (int *)local_1f0;
      FUN_13bf_0327();
      local_ca = (int *)0x0;
      piStack_a = (int *)0x11f2;
      piStack_c = (undefined2 *)0x1733;
      func_0x0000b1d8();
      piStack_a = (int *)0x1739;
      func_0x0000abfa();
    }
    if (local_f2 != 0x14) goto LAB_3ab8_6bc6;
    goto LAB_3ab8_6896;
  }
  local_be = *(undefined2 *)0x9660;
  local_bc = *(undefined2 *)0x9662;
LAB_3ab8_7981:
  if (((local_d4 != 1) && (local_d4 != 2)) && (local_d4 != 3)) {
    return;
  }
LAB_3ab8_7999:
  while( true ) {
    piStack_a = local_16c;
    piStack_e = (int *)0x2527;
    piStack_c = (int *)uVar10;
    FUN_21f2_3454();
    piStack_a = local_16c;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x2537;
    FUN_21f2_2d26();
    piStack_a = local_16c;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x2547;
    FUN_21f2_2d26();
    uVar11 = 0x885;
    piStack_a = (int *)0x254e;
    func_0x0000c340();
    *(undefined2 *)0xc2c = 1;
    *(undefined2 *)0xc20 = 1;
    if (local_ca != (int *)0x0) {
      if (local_d4 == 3) {
        piStack_a = local_16c;
        piStack_c = (int *)0x885;
        uVar11 = 0x22b2;
        piStack_e = (int *)0x2573;
        FUN_21f2_2d26();
      }
      piStack_a = local_16c;
      piStack_e = (int *)0x2584;
      piStack_c = (int *)uVar11;
      FUN_21f2_2d26();
      piStack_a = (int *)0x258f;
      func_0x000297e6();
      piStack_a = (int *)0x2594;
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      puStack_12 = (undefined2 *)0x259e;
      func_0x000299d1();
      piStack_10 = (int *)0x2adc;
      puStack_12 = local_20;
      uStack_14 = 0x22b2;
      uStack_16 = 0x25ab;
      FUN_21f2_3454();
      piStack_a = local_16c;
      piStack_c = (int *)0x22b2;
      uVar11 = 0x22b2;
      piStack_e = (int *)0x25bc;
      FUN_21f2_2d26();
    }
    piStack_a = &local_208;
    piStack_c = &local_1fc;
    piStack_e = local_16c;
    piStack_10 = local_ca;
    uVar10 = 0x1bb4;
    uStack_14 = 0x25db;
    puStack_12 = (undefined2 *)uVar11;
    local_f2 = FUN_1def_0904();
    if (local_f2 != -1) break;
    piStack_a = (int *)0x1bb4;
    piStack_c = (int *)0x25ed;
    func_0x0000daa6();
    local_1f0 = *(undefined2 *)0x14c;
    local_1ee = *(undefined2 *)0x14e;
    piStack_c = (int *)0x885;
    piStack_e = (int *)0x2604;
    piStack_a = (int *)local_1f0;
    FUN_13bf_0327();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x260f;
    func_0x0000b1d8();
    uVar10 = 0x885;
    piStack_a = (int *)0x2615;
    func_0x0000abfa();
    local_ca = (int *)0x0;
    *(undefined2 *)0xc20 = 0;
  }
  *(undefined2 *)0xc2c = 0;
  *(undefined2 *)0xc20 = 0;
  if (*(int *)0x158 != 0) {
    return;
  }
  if (local_f2 != 0x14) {
    if (local_ea != (undefined2 *)0x0) goto code_r0x00042642;
    goto LAB_3ab8_7adf;
  }
  goto LAB_3ab8_6896;
LAB_3ab8_6bc6:
  if (local_ea != (undefined2 *)0x0) {
    piStack_a = &local_1fc;
    piStack_c = local_ea;
    piStack_e = (int *)0x1bb4;
    piStack_10 = (int *)0x175f;
    iVar6 = func_0x00015409();
    if (iVar6 != 0) {
LAB_3ab8_6be9:
      local_b0 = local_1fc;
      local_ae = local_1fa;
      local_ac = local_208;
      local_aa = local_206;
      if (local_d4 == -1) {
        local_d4 = 0;
      }
LAB_3ab8_6c16:
      piStack_a = (int *)0x179b;
      func_0x0000c340();
      piStack_a = local_16c;
      piStack_c = (int *)0x885;
      piStack_e = (int *)0x17a9;
      FUN_21f2_3454();
      piStack_a = local_16c;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x17b9;
      FUN_21f2_2d26();
      piStack_a = local_16c;
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x17c9;
      FUN_21f2_2d26();
      if (*(int *)0xce6 != 0) {
        piStack_a = local_16c;
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0x17e0;
        FUN_21f2_2d26();
      }
      piStack_a = &local_208;
      piStack_c = &local_1fc;
      piStack_e = local_16c;
      *(undefined2 *)0xc20 = 1;
      piStack_10 = (int *)0x1;
      puStack_12 = (undefined2 *)0x22b2;
      uStack_14 = 0x1802;
      local_f2 = FUN_1def_0904();
      *(undefined2 *)0xc20 = 0;
      if (local_f2 != -1) {
        if (*(int *)0x158 != 0) {
          return;
        }
        if ((local_f2 == 1) && (*(int *)0xce6 != 0)) {
          *(undefined2 *)0xce6 = 0x14;
          return;
        }
        if (local_ea != (undefined2 *)0x0) goto code_r0x00041846;
        goto LAB_3ab8_6ce0;
      }
      if (param_2 != 0) {
        return;
      }
    }
  }
  goto LAB_3ab8_6a71;
code_r0x00041846:
  piStack_a = &local_1fc;
  piStack_c = local_ea;
  piStack_e = (int *)0x1bb4;
  piStack_10 = (int *)0x1859;
  iVar6 = func_0x00015409();
  if (iVar6 == 0) goto LAB_3ab8_6c16;
LAB_3ab8_6ce0:
  piStack_a = (int *)0x1869;
  func_0x000297e6();
  piStack_a = (int *)0x186e;
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x1878;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x1881;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x1886;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0x1890;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0x1899;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0x189e;
  func_0x00029d78();
  local_20[0] = 0x22b2;
  local_22 = 0x18a8;
  func_0x000299d1();
  local_20[0] = 0x22b2;
  local_22 = 0x18b1;
  func_0x000297e6();
  local_20[0] = 0x22b2;
  local_22 = 0x18b6;
  func_0x00029d78();
  uStack_2a = 0x18c0;
  func_0x000299d1();
  uStack_2a = 0x18c5;
  iVar6 = FUN_1def_043a();
  if (iVar6 == 0) goto LAB_3ab8_6c16;
  local_ba = *(undefined2 *)0xc122;
  local_b8 = *(undefined2 *)0xc124;
  local_96 = *(undefined1 *)0xa6c;
  piStack_a = (int *)0x18ee;
  func_0x000297e6();
  piStack_a = (int *)0x18f7;
  FUN_28b3_100d();
  piStack_a = (int *)0x1900;
  func_0x00029b6d();
  piStack_a = (int *)0x1909;
  func_0x00029bb5();
  piStack_a = (int *)0x1912;
  func_0x0002996b();
  piStack_a = (int *)0x191b;
  func_0x00029983();
  piStack_a = (int *)0x1924;
  func_0x000297e6();
  piStack_a = (int *)0x192d;
  FUN_28b3_100d();
  piStack_a = (int *)0x1936;
  func_0x00029b6d();
  piStack_a = (int *)0x193f;
  func_0x00029bb5();
  piStack_a = (int *)0x1948;
  func_0x0002996b();
  piStack_a = (int *)0x1951;
  func_0x00029983();
  piStack_a = (int *)0x195a;
  func_0x000297e6();
  piStack_a = (int *)0x1963;
  func_0x00029983();
  piStack_a = (int *)0x196c;
  func_0x000297e6();
  piStack_a = (int *)0x1975;
  func_0x00029983();
  piStack_a = (int *)0x197e;
  func_0x000297e6();
  piStack_a = (int *)0x1983;
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x198d;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x1996;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x199b;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0x19a5;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0x19ae;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0x19b3;
  func_0x00029d78();
  local_20[0] = 0x22b2;
  local_22 = 0x19bd;
  func_0x000299d1();
  local_20[0] = 0x22b2;
  local_22 = 0x19c6;
  func_0x000297e6();
  local_20[0] = 0x22b2;
  local_22 = 0x19cb;
  func_0x00029d78();
  uStack_2a = 0x19d5;
  func_0x000299d1();
  uStack_2a = 0x19da;
  lVar14 = FUN_1000_0718();
  local_dc = lVar14;
  lVar14 = local_ee;
LAB_3ab8_6e65:
  do {
    local_e4 = -999;
    piStack_a = (int *)0x19f0;
    local_ee = lVar14;
    func_0x0000c340();
    piStack_a = local_16c;
    piStack_c = (int *)0x885;
    piStack_e = (int *)0x19fe;
    FUN_21f2_3454();
    piStack_a = local_16c;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x1a0e;
    FUN_21f2_2d26();
    piStack_a = local_16c;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x1a1e;
    FUN_21f2_2d26();
    piStack_a = (int *)0x0;
    piStack_c = local_16c;
    piStack_e = (int *)0x1;
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x1a32;
    func_0x0001e740();
    piStack_a = (int *)0x2f;
    piStack_c = (int *)0x1bb4;
    piStack_e = (int *)0x1a42;
    FUN_1000_0599();
    piStack_a = (int *)0xdef;
    piStack_c = (int *)0x1a4d;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1a57;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1a62;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1a6c;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1a76;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1a80;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1a8a;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1a94;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1aaa;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1ab4;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x1abf;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    uVar10 = 0x11f2;
    piStack_c = (int *)0x1ac9;
    func_0x00012276();
    local_a8 = local_ba;
    local_a6 = local_b8;
    lVar14 = local_ee;
    if (local_e8 != 0) {
      piStack_a = (int *)0x1aea;
      func_0x000297e6();
      piStack_a = (int *)0x1af3;
      func_0x00029b6d();
      piStack_a = (int *)0x1afc;
      func_0x00029b9d();
      uVar10 = 0x22b2;
      piStack_a = (int *)0x1b05;
      func_0x00029983();
      lVar14 = local_ee;
    }
    while( true ) {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xa48 = 2;
      piStack_a = &local_208;
      piStack_c = &local_1fc;
      piStack_e = &local_f4;
      piStack_10 = &local_e6;
      uStack_14 = 0x1b32;
      puStack_12 = (undefined2 *)uVar10;
      local_ee = lVar14;
      local_f2 = func_0x00006608();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(int *)0x158 != 0) goto LAB_3ab8_6fca;
      if (local_f2 == -1) {
        piStack_a = (int *)0x1b6c;
        func_0x00013e19();
        piStack_a = (int *)0x11f2;
        piStack_c = (undefined2 *)0x1b74;
        func_0x0000daa6();
        piStack_a = (int *)0x1b7a;
        func_0x0000abfa();
        goto LAB_3ab8_6c16;
      }
      lVar14 = local_ee;
      if (local_f2 == 99) goto LAB_3ab8_6e65;
      if ((local_f2 == 0x31) ||
         ((((local_ea != (undefined2 *)0x0 && (0x174 < local_e6)) && (local_e6 < 0x1cc)) &&
          (local_f4 < *(int *)0xa5e)))) {
        piStack_a = (int *)0x1bb2;
        func_0x00013e19();
        piStack_a = (int *)0x1;
        piStack_c = (undefined2 *)0x11f2;
        piStack_e = (int *)0x1bbe;
        iVar6 = FUN_3ab8_6669();
        lVar14 = local_ee;
        if (iVar6 == -1) {
          local_e8 = 0;
        }
        else {
          local_e8 = 1;
        }
        goto LAB_3ab8_6e65;
      }
      if ((local_f2 == 0x32) ||
         (((local_ea != (undefined2 *)0x0 && (0x1cc < local_e6)) &&
          ((local_e6 < 0x224 && (local_f4 < *(int *)0xa5e)))))) {
        piStack_a = (int *)0x1c01;
        func_0x00013e19();
        piStack_a = (int *)0x2;
        piStack_c = (undefined2 *)0x11f2;
        piStack_e = (int *)0x1c0d;
        iVar6 = FUN_3ab8_6669();
        lVar14 = local_ee;
        if (iVar6 == -1) {
          local_f6 = 0;
        }
        else {
          local_f6 = 1;
        }
        goto LAB_3ab8_6e65;
      }
      if ((local_f2 == 0x33) ||
         (((local_ea != (undefined2 *)0x0 && (0x224 < local_e6)) && (local_f4 < *(int *)0xa5e)))) {
        piStack_a = (int *)0x1c48;
        func_0x00013e19();
        lVar14 = local_ee;
        if (local_b2 == '\0') {
          local_b2 = '\x01';
        }
        else {
          local_b2 = '\0';
        }
        goto LAB_3ab8_6e65;
      }
      local_de = 0;
      if ((local_ea != (undefined2 *)0x0) && (local_f2 == 100)) {
        piStack_a = &local_1fc;
        piStack_c = local_ea;
        piStack_e = (int *)0x3bf;
        piStack_10 = (int *)0x1c86;
        iVar6 = func_0x00015409();
        lVar14 = local_ee;
        if (iVar6 == 0) goto LAB_3ab8_6e65;
        local_de = 1;
      }
      if ((local_b2 == '\0') && (local_e8 == 0)) {
        piStack_a = (int *)0x1cb0;
        func_0x000297e6();
        piStack_a = (int *)0x1cb9;
        FUN_28b3_100d();
        piStack_a = (int *)0x1cc2;
        func_0x0002996b();
        piStack_a = (int *)0x1ccb;
        func_0x00029983();
        piStack_a = (int *)0x1cd4;
        func_0x000297e6();
        piStack_a = (int *)0x1cdd;
        FUN_28b3_100d();
        piStack_a = (int *)0x1ce6;
        func_0x0002996b();
        piStack_a = (int *)0x1cef;
        func_0x00029b6d();
        piStack_a = (int *)0x1cf8;
        func_0x000297e6();
        piStack_a = (int *)0x1d01;
        func_0x00029b6d();
        piStack_a = (int *)0x1d06;
        FUN_28b3_117c();
        piStack_a = (int *)0x1d0b;
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x1d15;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x1d1a;
        FUN_28b3_1582();
        piStack_a = (int *)0x1d24;
        func_0x00029834();
        piStack_a = (int *)0x1d2d;
        func_0x00029983();
      }
      uVar12 = 0;
      uVar13 = local_de == 0;
      if (!(bool)uVar13) break;
      piStack_a = (int *)0x1e3b;
      func_0x000297e6();
      piStack_a = (int *)0x1e44;
      func_0x000297e6();
      piStack_a = (int *)0x1e4d;
      FUN_28b3_100d();
      piStack_a = (int *)0x1e56;
      func_0x000297e6();
      piStack_a = (int *)0x1e5f;
      FUN_28b3_100d();
      piStack_a = (int *)0x1e64;
      func_0x00029c9d();
      piStack_a = (int *)0x1e6d;
      func_0x000297e6();
      piStack_a = (int *)0x1e76;
      FUN_28b3_100d();
      piStack_a = (int *)0x1e7f;
      func_0x000297e6();
      piStack_a = (int *)0x1e88;
      FUN_28b3_100d();
      piStack_a = (int *)0x1e8d;
      func_0x00029c9d();
      piStack_a = (int *)0x1e92;
      FUN_28b3_1163();
      piStack_a = (int *)0x1e97;
      FUN_28b3_1181();
      local_22 = (uint)(!(bool)uVar12 && !(bool)uVar13);
      uVar12 = local_22 < local_24;
      uVar13 = local_22 == local_24;
      lVar14 = local_ee;
      if (!(bool)uVar13) {
        piStack_a = (int *)0x1eb9;
        func_0x000297e6();
        piStack_a = (int *)0x1ec2;
        func_0x000297e6();
        piStack_a = (int *)0x1ecb;
        FUN_28b3_100d();
        piStack_a = (int *)0x1ed4;
        func_0x000297e6();
        piStack_a = (int *)0x1edd;
        FUN_28b3_100d();
        piStack_a = (int *)0x1ee6;
        func_0x0002996b();
        piStack_a = (int *)0x1eeb;
        func_0x00029c9d();
        piStack_a = (int *)0x1ef4;
        func_0x000297e6();
        piStack_a = (int *)0x1efd;
        FUN_28b3_100d();
        piStack_a = (int *)0x1f06;
        func_0x000297e6();
        piStack_a = (int *)0x1f0f;
        FUN_28b3_100d();
        piStack_a = (int *)0x1f18;
        func_0x0002996b();
        piStack_a = (int *)0x1f1d;
        func_0x00029c9d();
        piStack_a = (int *)0x1f22;
        FUN_28b3_1163();
        piStack_a = (int *)0x1f2b;
        func_0x000297e6();
        piStack_a = (int *)0x1f34;
        FUN_28b3_100d();
        piStack_a = (int *)0x1f3d;
        func_0x00029b6d();
        piStack_a = (int *)0x1f46;
        func_0x000297e6();
        piStack_a = (int *)0x1f4f;
        FUN_28b3_100d();
        piStack_a = (int *)0x1f58;
        func_0x00029b6d();
        piStack_a = (int *)0x1f5d;
        FUN_28b3_1163();
        piStack_a = (int *)0x1f62;
        func_0x00029c9d();
        piStack_a = (int *)0x1f67;
        FUN_28b3_1181();
        lVar14 = local_ee;
        if ((bool)uVar12 || (bool)uVar13) {
          piStack_a = (int *)0x1f75;
          func_0x000297e6();
          piStack_a = (int *)0x1f7e;
          func_0x000297e6();
          piStack_a = (int *)0x1f87;
          FUN_28b3_100d();
          piStack_a = (int *)0x1f90;
          func_0x0002996b();
          piStack_a = (int *)0x1f99;
          func_0x000297e6();
          piStack_a = (int *)0x1fa2;
          FUN_28b3_100d();
          piStack_a = (int *)0x1fa7;
          func_0x00029c9d();
          piStack_a = (int *)0x1fb0;
          func_0x000297e6();
          piStack_a = (int *)0x1fb9;
          FUN_28b3_100d();
          piStack_a = (int *)0x1fc2;
          func_0x000297e6();
          piStack_a = (int *)0x1fcb;
          FUN_28b3_100d();
          piStack_a = (int *)0x1fd4;
          func_0x0002996b();
          piStack_a = (int *)0x1fd9;
          func_0x00029c9d();
          piStack_a = (int *)0x1fde;
          FUN_28b3_1163();
          piStack_a = (int *)0x1fe7;
          func_0x000297e6();
          piStack_a = (int *)0x1ff0;
          FUN_28b3_100d();
          piStack_a = (int *)0x1ff9;
          func_0x00029b6d();
          piStack_a = (int *)0x2002;
          func_0x000297e6();
          piStack_a = (int *)0x200b;
          FUN_28b3_100d();
          piStack_a = (int *)0x2014;
          func_0x00029b6d();
          piStack_a = (int *)0x2019;
          FUN_28b3_1163();
          piStack_a = (int *)0x201e;
          func_0x00029c9d();
          piStack_a = (int *)0x2023;
          FUN_28b3_1181();
          lVar14 = local_ee;
          if ((bool)uVar12 || (bool)uVar13) {
            local_24 = local_22;
          }
        }
      }
      uVar10 = 0x22b2;
      local_176 = local_1fc;
      local_174 = local_1fa;
      local_192 = local_208;
      local_190 = local_206;
      if ((local_e6 != local_e4) || (local_f4 != local_f0)) {
        uVar12 = 0;
        local_e4 = local_e6;
        local_f0 = local_f4;
        piStack_a = (int *)0x207b;
        local_ee = lVar14;
        func_0x000297e6();
        piStack_a = (int *)0x2084;
        func_0x000297e6();
        piStack_a = (int *)0x2089;
        FUN_28b3_1181();
        if ((bool)uVar12) {
          piStack_a = (int *)0x2094;
          func_0x000297e6();
          piStack_a = (int *)0x209d;
          func_0x000297e6();
          piStack_a = (int *)0x20a2;
          FUN_28b3_1181();
          lVar14 = local_ee;
          if ((bool)uVar12) goto LAB_3ab8_6e65;
        }
        piStack_a = (int *)0x20b0;
        func_0x000297e6();
        piStack_a = (int *)0x20b5;
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x20bf;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x20c8;
        func_0x000297e6();
        piStack_10 = (undefined2 *)0x22b2;
        puStack_12 = (undefined2 *)0x20cd;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x20d7;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0x20e0;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0x20e5;
        func_0x00029d78();
        local_20[0] = 0x22b2;
        local_22 = 0x20ef;
        func_0x000299d1();
        local_20[0] = 0x22b2;
        local_22 = 0x20f8;
        func_0x000297e6();
        local_20[0] = 0x22b2;
        local_22 = 0x20fd;
        func_0x00029d78();
        uStack_2a = 0x2107;
        func_0x000299d1();
        uVar10 = 0xdef;
        uStack_2a = 0x210c;
        lVar14 = FUN_1000_0718();
        local_d8 = local_dc;
        if (lVar14 != local_dc) {
          lVar4 = local_dc;
          if (local_f6 != 0) {
            piStack_a = (int *)0x2145;
            local_ee = lVar14;
            func_0x000297e6();
            piStack_a = (int *)0x214e;
            func_0x000297e6();
            piStack_a = (int *)0x2153;
            func_0x00029d78();
            piStack_10 = (int *)0x22b2;
            puStack_12 = (undefined2 *)0x215d;
            func_0x000299d1();
            piStack_10 = (int *)0x22b2;
            puStack_12 = (undefined2 *)0x2166;
            func_0x000297e6();
            piStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined2 *)0x216b;
            func_0x00029d78();
            uStack_18 = 0x22b2;
            uStack_1a = 0x2175;
            func_0x000299d1();
            uStack_18 = 1;
            uStack_1a = 0x22b2;
            uStack_1c = 0x217e;
            func_0x0001e558();
            uVar12 = (undefined1 *)0xffed < &uStack_18;
            uVar13 = &stack0x0000 == (undefined1 *)0x6;
            piStack_a = (int *)0x2188;
            func_0x000297e6();
            piStack_a = (int *)0x218d;
            FUN_28b3_1181();
            if ((bool)uVar12 || (bool)uVar13) {
              local_24 = 0;
              piStack_a = (int *)0x21c4;
              func_0x000297e6();
              piStack_a = (int *)0x21cd;
              func_0x00029b6d();
              piStack_a = (int *)0x21d6;
              func_0x000298b4();
              piStack_a = (int *)0x21db;
              FUN_28b3_1168();
            }
            else {
              local_24 = 1;
              piStack_a = (int *)0x219d;
              func_0x000297e6();
              piStack_a = (int *)0x21a6;
              func_0x00029b6d();
              piStack_a = (int *)0x21af;
              func_0x000298b4();
              piStack_a = (int *)0x21b4;
              FUN_28b3_117c();
            }
            piStack_a = (int *)0x21e0;
            func_0x00029d78();
            uVar10 = 0x22b2;
            piStack_a = (int *)0x21e5;
            uVar15 = FUN_28b3_0f51();
            for (local_ee._2_2_ = (int)((ulong)uVar15 >> 0x10); 0x167 < local_ee._2_2_;
                local_ee._2_2_ = local_ee._2_2_ + -0x168) {
            }
            for (; lVar14 = CONCAT22(local_ee._2_2_,(int)uVar15), lVar4 = local_d8,
                local_ee._2_2_ < 0; local_ee._2_2_ = local_ee._2_2_ + 0x168) {
            }
          }
          local_d8._2_2_ = (int)((ulong)lVar4 >> 0x10);
          local_d8._0_2_ = (int)lVar4;
          local_ee._2_2_ = (int)((ulong)lVar14 >> 0x10);
          local_ee._0_2_ = (int)lVar14;
          if (local_24 == 0) {
            if (lVar14 < lVar4) {
              iVar6 = 0;
            }
            else {
              iVar6 = 0x168;
            }
            local_b6 = lVar4 + CONCAT22((iVar6 - local_ee._2_2_) - (uint)((int)local_ee != 0),
                                        -(int)local_ee);
            local_9e = lVar4;
            local_a2 = lVar14;
          }
          else {
            if (lVar4 < lVar14) {
              iVar6 = 0;
            }
            else {
              iVar6 = 0x168;
            }
            local_b6 = lVar14 + CONCAT22((iVar6 - local_d8._2_2_) - (uint)((int)local_d8 != 0),
                                         -(int)local_d8);
            local_9e = lVar14;
            local_a2 = lVar4;
          }
          if (*(char *)0xb782 == '\0') {
            local_218 = 0x11;
            uStack_14 = uVar10;
            local_ee = lVar14;
            local_d8 = lVar4;
            do {
              piStack_a = (int *)0x4;
              piStack_c = (int *)local_218;
              piStack_e = (int *)(*(int *)0xa58 + -1);
              piStack_10 = (int *)local_218;
              puStack_12 = (undefined2 *)0x1;
              uStack_16 = 0x22f4;
              func_0x0000def0();
              local_218 = local_218 + 1;
              uStack_14 = 0xdef;
            } while (local_218 < 0x30);
            piStack_a = (int *)0x0;
            piStack_c = (int *)0x2;
            piStack_e = (int *)0x1;
            piStack_10 = (int *)local_19c;
            puStack_12 = (undefined2 *)0xdef;
            uStack_14 = 0x2318;
            FUN_1000_02b5();
            piStack_a = (int *)*(undefined2 *)0x9660;
            piStack_c = (int *)0xdef;
            piStack_e = (int *)0x232c;
            func_0x000297e6();
            piStack_c = (int *)0x22b2;
            piStack_e = (int *)0x2335;
            func_0x00029b6d();
            piStack_c = (int *)0x22b2;
            piStack_e = (int *)0x233e;
            func_0x00029b6d();
            piStack_10 = (int *)0x22b2;
            puStack_12 = (undefined2 *)0x2348;
            func_0x00029983();
            piStack_10 = (int *)0x2abd;
            puStack_12 = local_20;
            uStack_14 = 0x22b2;
            uStack_16 = 0x2355;
            FUN_10ad_1928();
            piStack_a = (int *)0x0;
            piStack_c = (int *)0x0;
            piStack_e = (int *)0x2;
            piStack_10 = (int *)0x5;
            puStack_12 = local_20;
            uStack_14 = 0x11f2;
            uStack_16 = 0x236d;
            FUN_1000_02b5();
            piStack_a = (int *)0xdef;
            piStack_c = (int *)0x2379;
            func_0x000298b4();
            piStack_a = (int *)0x22b2;
            piStack_c = (int *)0x2382;
            func_0x00029c2c();
            puStack_12 = (undefined2 *)0x22b2;
            uStack_14 = 0x238c;
            func_0x000299d1();
            piStack_10 = (int *)0x2ac6;
            puStack_12 = local_20;
            uStack_14 = 0x22b2;
            uStack_16 = 0x2399;
            FUN_21f2_3454();
            piStack_a = (int *)0x0;
            piStack_c = (undefined2 *)0x3;
            piStack_e = (int *)0x1;
            piStack_10 = local_20;
            puStack_12 = (undefined2 *)0x22b2;
            uStack_14 = 0x23b1;
            FUN_1000_02b5();
            lVar14 = local_ee;
            lVar4 = local_d8;
          }
          piStack_a = (int *)0x23b9;
          local_ee = lVar14;
          local_d8 = lVar4;
          func_0x00013e19();
          local_96 = *(undefined1 *)0xa6c;
          local_95 = 9;
          puVar9 = &local_26;
          puVar8 = &local_b0;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
          uVar10 = 0x11f2;
          uStack_2a = 0x23da;
          func_0x00013e46();
          lVar14 = local_ee;
        }
      }
    }
    piStack_a = (int *)0x1d3c;
    func_0x00013e19();
    piStack_a = (int *)0x1d45;
    func_0x000297e6();
    piStack_a = (int *)0x1d4e;
    func_0x000297e6();
    piStack_a = (int *)0x1d53;
    FUN_28b3_1181();
    if ((bool)uVar13) {
      piStack_a = (int *)0x1d5e;
      func_0x000297e6();
      piStack_a = (int *)0x1d67;
      func_0x000297e6();
      piStack_a = (int *)0x1d6c;
      FUN_28b3_1181();
      lVar14 = local_ee;
      if ((bool)uVar13) goto LAB_3ab8_6e65;
    }
    piStack_a = (int *)0x1d7a;
    func_0x000297e6();
    piStack_a = (int *)0x1d7f;
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x1d89;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x1d92;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x1d97;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0x1da1;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0x1daa;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0x1daf;
    func_0x00029d78();
    local_20[0] = 0x22b2;
    local_22 = 0x1db9;
    func_0x000299d1();
    local_20[0] = 0x22b2;
    local_22 = 0x1dc2;
    func_0x000297e6();
    local_20[0] = 0x22b2;
    local_22 = 0x1dc7;
    func_0x00029d78();
    uStack_2a = 0x1dd1;
    func_0x000299d1();
    uVar10 = 0xdef;
    uStack_2a = 0x1dd6;
    lVar14 = FUN_1000_0718();
    local_d8 = local_dc;
  } while (lVar14 == local_dc);
  if (local_f6 != 0) {
    local_ee = lVar14;
    if (local_24 == 0) {
      piStack_a = (int *)0x23e9;
      func_0x000297e6();
      piStack_a = (int *)0x23f2;
      func_0x00029b6d();
      piStack_a = (int *)0x23fb;
      func_0x000298b4();
      piStack_a = (int *)0x2400;
      FUN_28b3_1168();
    }
    else {
      piStack_a = (int *)0x1e18;
      func_0x000297e6();
      piStack_a = (int *)0x1e21;
      func_0x00029b6d();
      piStack_a = (int *)0x1e2a;
      func_0x000298b4();
      piStack_a = (int *)0x1e2f;
      FUN_28b3_117c();
    }
    piStack_a = (int *)0x2405;
    func_0x00029d78();
    uVar10 = 0x22b2;
    piStack_a = (int *)0x240a;
    uVar15 = FUN_28b3_0f51();
    for (local_ee._2_2_ = (int)((ulong)uVar15 >> 0x10); 0x167 < local_ee._2_2_;
        local_ee._2_2_ = local_ee._2_2_ + -0x168) {
    }
    for (; lVar14 = CONCAT22(local_ee._2_2_,(int)uVar15), local_ee._2_2_ < 0;
        local_ee._2_2_ = local_ee._2_2_ + 0x168) {
    }
  }
  local_9e = local_d8;
  local_a2 = lVar14;
  if (local_24 != 0) {
    local_9e = lVar14;
    local_a2 = local_d8;
  }
  local_96 = *(undefined1 *)0xa6c;
  local_95 = *(undefined1 *)0xa6a;
  local_94 = *(undefined1 *)0xb310;
  local_a4 = 10000;
  piStack_c = (undefined2 *)0x249e;
  piStack_a = (int *)uVar10;
  local_ee = lVar14;
  func_0x0000daa6();
  puVar9 = &local_26;
  puVar8 = &local_b0;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  uStack_2a = 0x24b4;
  FUN_13bf_01c1();
  piStack_a = (int *)0x24c0;
  func_0x000297e6();
  piStack_a = (int *)0x24c9;
  func_0x00029b6d();
  piStack_a = (int *)0x24d2;
  func_0x00029b6d();
  piStack_a = (int *)0x24db;
  func_0x00029983();
  local_ca = (int *)0x1;
  uVar10 = 0x885;
  piStack_a = (int *)0x24e6;
  func_0x0000abfa();
  if (param_2 != 0) {
    return;
  }
  goto LAB_3ab8_6a67;
code_r0x00042642:
  piStack_a = &local_1fc;
  piStack_c = local_ea;
  piStack_e = (int *)0x1bb4;
  uVar10 = 0x11f2;
  piStack_10 = (int *)0x2655;
  iVar6 = func_0x00015409();
  if (iVar6 != 0) {
LAB_3ab8_7adf:
    local_fa = local_1fc;
    local_f8 = local_1fa;
    local_17a = local_208;
    local_178 = local_206;
LAB_3ab8_7aff:
    piStack_a = local_16c;
    piStack_e = (int *)0x268d;
    piStack_c = (int *)uVar10;
    FUN_21f2_3454();
    piStack_a = local_16c;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x269d;
    FUN_21f2_2d26();
    piStack_a = local_16c;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x26ad;
    FUN_21f2_2d26();
    piStack_a = (int *)0x26b4;
    func_0x0000c340();
    piStack_a = &local_208;
    piStack_c = &local_1fc;
    piStack_e = local_16c;
    *(undefined2 *)0xc20 = 1;
    piStack_10 = (int *)0x1;
    puStack_12 = (undefined2 *)0x885;
    uVar10 = 0x1bb4;
    uStack_14 = 0x26d4;
    local_f2 = FUN_1def_0904();
    if (local_f2 != -1) {
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_ea != (undefined2 *)0x0) goto code_r0x000426fe;
      goto LAB_3ab8_7b9b;
    }
    *(undefined2 *)0xc20 = 0;
  }
  goto LAB_3ab8_7999;
code_r0x000426fe:
  piStack_a = &local_1fc;
  piStack_c = local_ea;
  piStack_e = (int *)0x1bb4;
  uVar10 = 0x11f2;
  piStack_10 = (int *)0x2711;
  iVar6 = func_0x00015409();
  if (iVar6 == 0) goto LAB_3ab8_7aff;
LAB_3ab8_7b9b:
  local_192 = local_208;
  local_190 = local_206;
  piStack_a = (int *)0x2734;
  func_0x000297e6();
  piStack_a = (int *)0x2739;
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x2743;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x274c;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x2755;
  func_0x0002996b();
  piStack_10 = (int *)0x22b2;
  puStack_12 = (undefined2 *)0x275a;
  func_0x00029d78();
  uStack_18 = 0x22b2;
  uStack_1a = 0x2764;
  func_0x000299d1();
  uStack_18 = 0x22b2;
  uStack_1a = 0x276d;
  func_0x000297e6();
  uStack_18 = 0x22b2;
  uStack_1a = 0x2772;
  func_0x00029d78();
  local_20[0] = 0x22b2;
  local_22 = 0x277c;
  func_0x000299d1();
  local_20[0] = 0x22b2;
  local_22 = 0x2785;
  func_0x000297e6();
  local_20[0] = 0x22b2;
  local_22 = 0x278a;
  func_0x00029d78();
  uStack_2a = 0x2794;
  func_0x000299d1();
  uVar10 = 0x1bb4;
  uStack_2a = 0x2799;
  iVar6 = FUN_1def_043a();
  if (iVar6 == 0) goto LAB_3ab8_7aff;
LAB_3ab8_7c23:
  local_ca = (int *)0x0;
  uVar10 = 0x885;
  piStack_a = (int *)0x27ae;
  func_0x0000c340();
  if (local_d4 == 1) {
    piStack_a = (int *)0x27bd;
    func_0x0001bb4e();
    piStack_a = (int *)0x1bb4;
    piStack_c = (int *)0x27c6;
    func_0x00012276();
    piStack_a = (int *)0x45;
    piStack_c = (int *)0x11f2;
    piStack_e = (int *)0x27d4;
    FUN_1000_0599();
    piStack_a = (int *)0xdef;
    piStack_c = (int *)0x27df;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x27e9;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    piStack_c = (int *)0x27f4;
    func_0x00012276();
    piStack_a = (int *)0x11f2;
    uVar10 = 0x11f2;
    piStack_c = (int *)0x27fe;
    func_0x00012276();
LAB_3ab8_7c7f:
    do {
      *(undefined2 *)0xc20 = 1;
      *(undefined2 *)0xa4a = 1;
      piStack_a = &local_208;
      piStack_c = &local_1fc;
      piStack_e = &local_f4;
      piStack_10 = &local_e6;
      uStack_14 = 0x2826;
      puStack_12 = (undefined2 *)uVar10;
      local_f2 = func_0x00006608();
      *(undefined2 *)0xc20 = 0;
      *(undefined2 *)0xa4a = 0;
      if (*(int *)0x158 != 0) {
LAB_3ab8_6fca:
        piStack_a = (int *)0x1b4f;
        func_0x00013e19();
        piStack_a = (int *)0x11f2;
        piStack_c = (int *)0x1b57;
        func_0x0000daa6();
        piStack_a = (int *)0x1b5d;
        func_0x0000abfa();
        return;
      }
      if (local_f2 == -1) {
        piStack_a = (int *)0x284a;
        func_0x00013e19();
        piStack_a = (int *)0x11f2;
        piStack_c = (int *)0x2852;
        func_0x0000daa6();
        uVar10 = 0x885;
        piStack_a = (int *)0x2858;
        func_0x0000abfa();
        goto LAB_3ab8_7aff;
      }
      if (local_f2 == 99) goto LAB_3ab8_7c23;
      if ((local_f2 == 0x31) ||
         (((local_ea != (undefined2 *)0x0 && (0x224 < local_e6)) && (local_f4 < *(int *)0xa5e))))
      goto LAB_3ab8_7d03;
      bVar3 = false;
      uVar10 = 0x3bf;
      if ((local_ea != (undefined2 *)0x0) && (local_f2 == 100)) {
        piStack_a = &local_1fc;
        piStack_c = local_ea;
        piStack_e = (int *)0x3bf;
        uVar10 = 0x11f2;
        piStack_10 = (int *)0x28d2;
        iVar6 = func_0x00015409();
        if (iVar6 == 0) goto LAB_3ab8_7c23;
        bVar3 = true;
        local_e4 = -9999;
      }
    } while ((local_e6 == local_e4) && (local_f4 == local_f0));
    local_e4 = local_e6;
    local_f0 = local_f4;
    local_18e = local_1fc;
    local_18c = local_1fa;
    local_1e0 = local_208;
    local_1de = local_206;
    piStack_a = (int *)0x2938;
    func_0x000297e6();
    piStack_a = (int *)0x293d;
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x2947;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x2950;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x2955;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0x295f;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0x2968;
    FUN_1def_05d1();
    piStack_a = (int *)0x2972;
    func_0x000297e6();
    piStack_a = (int *)0x2977;
    func_0x00029d78();
    piStack_a = (int *)0x2980;
    func_0x000299d1();
    local_1d4 = *(undefined2 *)0x9624;
    uStack_1d2 = *(undefined2 *)0x9626;
    uStack_1d0 = *(undefined2 *)0x9628;
    uStack_1ce = *(undefined2 *)0x962a;
    piStack_a = (int *)0x2996;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x29a0;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x29a9;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0x29b3;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0x29bc;
    FUN_1def_05d1();
    piStack_a = (int *)0x29c6;
    func_0x000297e6();
    piStack_a = (int *)0x29cb;
    func_0x00029d78();
    piStack_a = (int *)0x29d4;
    func_0x000299d1();
    piStack_a = (int *)0x29dd;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x29e7;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x29f0;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0x29fa;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0x2a03;
    func_0x0001e558();
    uVar12 = (undefined1 *)0xffed < &uStack_18;
    piStack_a = (int *)0x2a0d;
    func_0x000297e6();
    piStack_a = (int *)0x2a12;
    func_0x00029d78();
    piStack_a = (int *)0x2a1b;
    func_0x000299d1();
    piStack_a = (int *)0x2a20;
    func_0x00013e19();
    piStack_a = (int *)0x2a29;
    func_0x00029834();
    piStack_a = (int *)0x2a32;
    func_0x00029834();
    piStack_a = (int *)0x2a37;
    func_0x00029ae7();
    piStack_a = (int *)0x2a3c;
    FUN_28b3_1181();
    if (!(bool)uVar12) {
      piStack_a = (int *)0x2a5e;
      func_0x00029834();
      piStack_a = (int *)0x2a67;
      func_0x00029c2c();
      piStack_a = (int *)0x2a70;
      func_0x000299b9();
      piStack_a = (int *)0x2a78;
      FUN_28b3_0ee9();
      uVar12 = 0;
      uVar13 = local_16e == 0;
      if ((bool)uVar13) {
        piStack_a = (int *)0x2a8b;
        func_0x00029834();
        piStack_a = (int *)0x2a94;
        func_0x00029bfc();
        piStack_a = (int *)0x2a9d;
        func_0x00029c2c();
        piStack_a = (int *)0x2aa6;
        func_0x00029834();
        piStack_a = (int *)0x2aaf;
        func_0x00029c2c();
        piStack_a = (int *)0x2ab4;
        FUN_28b3_117c();
        piStack_a = (int *)0x2abd;
        func_0x00029834();
        piStack_a = (int *)0x2ac6;
        func_0x00029c2c();
        piStack_a = (int *)0x2acb;
        FUN_28b3_1172();
        piStack_a = (int *)0x2ad4;
        func_0x000299b9();
        piStack_a = (int *)0x2add;
        func_0x00029c2c();
        piStack_a = (int *)0x2ae6;
        func_0x00029834();
        piStack_a = (int *)0x2aef;
        func_0x00029c2c();
        piStack_a = (int *)0x2af4;
        FUN_28b3_117c();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2afe;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2b03;
        FUN_28b3_1582();
        piStack_a = (int *)0x2b0d;
        func_0x00029834();
        piStack_a = (int *)0x2b16;
        func_0x00029983();
      }
      else {
        piStack_a = (int *)0x2b22;
        func_0x000297e6();
        piStack_a = (int *)0x2b2b;
        func_0x00029b6d();
        piStack_a = (int *)0x2b34;
        func_0x00029b9d();
        piStack_a = (int *)0x2b3d;
        func_0x0002996b();
        piStack_a = (int *)0x2b46;
        func_0x00029b6d();
        piStack_a = (int *)0x2b4b;
        func_0x00029d78();
        piStack_a = (int *)0x2b54;
        func_0x00029834();
        piStack_a = (int *)0x2b5d;
        func_0x00029c2c();
        piStack_a = (int *)0x2b62;
        FUN_28b3_1163();
        piStack_a = (int *)0x2b6b;
        func_0x000299b9();
        piStack_a = (int *)0x2b73;
        FUN_28b3_0ee9();
        piStack_a = (int *)0x2b7c;
        func_0x00029834();
        piStack_a = (int *)0x2b85;
        func_0x00029834();
        piStack_a = (int *)0x2b8a;
        FUN_28b3_1181();
        if ((bool)uVar12 || (bool)uVar13) {
          local_16e = 0;
          *(undefined2 *)0xc22 = 1;
          piStack_a = (int *)0x14;
          piStack_c = (int *)0x22b2;
          uVar10 = 0xdef;
          piStack_e = (int *)0x2ba5;
          FUN_1000_0599();
          goto LAB_3ab8_7ecb;
        }
        piStack_a = (int *)local_200;
        piStack_c = local_202;
        piStack_e = local_204;
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2bc2;
        piVar7 = (int *)FUN_28b3_1582();
        uVar12 = (undefined1 *)0xfff7 < &piStack_e;
        uVar13 = &stack0x0000 == (undefined1 *)0x6;
        local_204 = (int *)*piVar7;
        local_202 = (undefined2 *)piVar7[1];
        local_200 = piVar7[2];
        local_1fe = piVar7[3];
        piStack_a = (int *)0x2bda;
        func_0x00029834();
        piStack_a = (int *)0x2be3;
        func_0x00029834();
        piStack_a = (int *)0x2be8;
        FUN_28b3_1181();
        if (!(bool)uVar12 && !(bool)uVar13) {
          piStack_a = (int *)0x2bf3;
          func_0x00029834();
          piStack_a = (int *)0x2bf8;
          func_0x00029af6();
          piStack_a = (int *)0x2c01;
          func_0x000299d1();
        }
        piStack_a = (int *)0x2c0a;
        func_0x00029834();
        piStack_a = (int *)0x2c0f;
        func_0x00029ae7();
        piStack_a = (int *)0x2c18;
        func_0x00029834();
        piStack_a = (int *)0x2c1d;
        func_0x00029ae7();
        piStack_a = (int *)0x2c22;
        FUN_28b3_1181();
        if (!(bool)uVar12 && !(bool)uVar13) {
          piStack_a = (int *)0x2c2d;
          func_0x00029834();
          piStack_a = (int *)0x2c32;
          func_0x00029ae7();
          piStack_a = (int *)0x2c3b;
          func_0x00029834();
          piStack_a = (int *)0x22b2;
          piStack_c = (int *)0x2c45;
          FUN_28b3_10e4();
          piStack_a = (int *)0x2c4b;
          func_0x000299b9();
          piStack_a = (int *)0x2c50;
          func_0x00029ae7();
          piStack_a = (int *)0x2c55;
          FUN_28b3_1181();
          if ((bool)uVar12) {
            piStack_a = (int *)0x2c60;
            func_0x00029834();
            piStack_a = (int *)0x2c65;
            func_0x00029af6();
            piStack_a = (int *)0x2c6e;
            func_0x000299d1();
          }
        }
      }
      piStack_a = (int *)local_200;
      piStack_c = local_202;
      piStack_e = local_204;
      piStack_10 = local_1f2;
      puStack_12 = (undefined2 *)local_1f4;
      uStack_14 = local_1f6;
      uStack_16 = local_1f8;
      uStack_18 = 0;
      uStack_1a = 0x22b2;
      uStack_1c = 0x2c96;
      iVar6 = FUN_1def_05d1();
      local_26 = *(undefined2 *)(iVar6 + 2);
      piStack_a = (int *)local_200;
      piStack_c = local_202;
      piStack_e = local_204;
      piStack_10 = local_1f2;
      puStack_12 = (undefined2 *)local_1f4;
      uStack_14 = local_1f6;
      uStack_16 = local_1f8;
      uStack_18 = 0;
      uStack_1a = 0x1bb4;
      uStack_1c = 0x2cce;
      puVar8 = (undefined2 *)func_0x0001e558();
      uVar12 = (undefined1 *)0xffed < &uStack_18;
      uVar13 = &stack0x0000 == (undefined1 *)0x6;
      local_90 = *puVar8;
      local_8e = puVar8[1];
      piStack_a = (int *)0x2ce9;
      func_0x00029834();
      piStack_a = (int *)0x2cf2;
      func_0x000297e6();
      piStack_a = (int *)0x2cf7;
      func_0x00029d78();
      piStack_a = (int *)0x2cfc;
      FUN_28b3_1181();
      if ((bool)uVar12 || (bool)uVar13) {
        piStack_a = (int *)0x2d0a;
        func_0x000297e6();
        piStack_a = (int *)0x2d13;
        func_0x0002996b();
        piStack_a = (int *)0x2d1b;
        FUN_28b3_0ee9();
        local_a8 = local_be;
        local_a6 = local_bc;
        piStack_a = (int *)0x2d34;
        func_0x000297e6();
        piStack_a = (int *)0x2d39;
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2d43;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2d4c;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2d51;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x2d5b;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0x2d64;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0x2d69;
        func_0x00029d78();
        local_20[0] = 0x22b2;
        local_22 = 0x2d73;
        func_0x000299d1();
        local_20[0] = 0x22b2;
        local_22 = 0x2d7b;
        func_0x000297e6();
        local_20[0] = 0x22b2;
        local_22 = 0x2d84;
        func_0x0002996b();
        local_20[0] = 0x22b2;
        local_22 = 0x2d89;
        func_0x00029d78();
        uStack_2a = 0x2d93;
        func_0x000299d1();
        uStack_2a = 0x2d98;
        lVar14 = FUN_1000_0718();
        piStack_a = (int *)0x2dac;
        local_d8 = lVar14;
        func_0x000297e6();
        piStack_a = (int *)0x2db1;
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2dbb;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2dc4;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2dc9;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x2dd3;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0x2ddc;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0x2de1;
        func_0x00029d78();
        local_20[0] = 0x22b2;
        local_22 = 0x2deb;
        func_0x000299d1();
        local_20[0] = 0x22b2;
        local_22 = 0x2df4;
        func_0x000297e6();
        uStack_2a = 0x2dfe;
        func_0x000299d1();
        uStack_2a = 0x2e03;
        lVar14 = FUN_1000_0718();
        piStack_a = (int *)0x2e17;
        local_ee = lVar14;
        func_0x000297e6();
        piStack_a = (int *)0x2e1c;
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2e26;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2e2f;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x2e34;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x2e3e;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0x2e47;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0x2e4c;
        func_0x00029d78();
        local_20[0] = 0x22b2;
        local_22 = 0x2e56;
        func_0x000299d1();
        local_20[0] = 0x22b2;
        local_22 = 0x2e5f;
        func_0x000297e6();
        uStack_2a = 0x2e69;
        func_0x000299d1();
        uVar10 = 0xdef;
        uStack_2a = 0x2e6e;
        puVar8 = &local_26;
        lVar14 = FUN_1000_0718();
        local_a2 = local_d8;
        local_9e = local_ee;
        local_9a._2_2_ = 0;
        local_9a._0_2_ = 0;
        local_9a = 0;
        local_a4 = 10000;
        if ((local_d8 < local_ee) && ((lVar14 < local_d8 || (local_ee < lVar14)))) {
          local_a2 = local_ee;
          local_9e = local_d8;
        }
        if (((local_ee < local_d8) && (lVar14 < local_d8)) && (local_ee < lVar14)) {
          local_a2 = local_ee;
          local_9e = local_d8;
        }
        local_b6 = lVar14;
        if (bVar3) goto LAB_3ab8_83bc;
        local_96 = *(undefined1 *)0xa6c;
        local_95 = 9;
        puVar9 = &local_b0;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          puVar1 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar2 = *puVar1;
        }
        uVar10 = 0x11f2;
        uStack_2a = 0x2fc2;
        func_0x00013e46();
        goto LAB_3ab8_7c7f;
      }
    }
    if (!bVar3) goto LAB_3ab8_7c23;
    goto LAB_3ab8_7ec8;
  }
LAB_3ab8_83bc:
  if (local_d4 == 2) {
    piStack_a = local_16c;
    piStack_e = (int *)0x2f55;
    piStack_c = (int *)uVar10;
    FUN_21f2_3454();
    piStack_a = local_16c;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x2f65;
    FUN_21f2_2d26();
    piStack_a = local_16c;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x2f75;
    FUN_21f2_2d26();
    piStack_a = &local_208;
    piStack_c = &local_1fc;
    piStack_e = local_16c;
    piStack_10 = (int *)0x1;
    puStack_12 = (undefined2 *)0x22b2;
    uVar10 = 0x1bb4;
    uStack_14 = 0x2f94;
    local_f2 = FUN_1def_0904();
    if (local_f2 == -1) {
      local_f2 = -1;
      goto LAB_3ab8_7aff;
    }
    if (*(int *)0x158 != 0) {
      return;
    }
    local_1e0 = local_208;
    local_1de = local_206;
    piStack_a = (int *)0x2feb;
    func_0x000297e6();
    piStack_a = (int *)0x2ff4;
    func_0x000297e6();
    piStack_a = (int *)0x2ff9;
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x3003;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x300c;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x3015;
    func_0x0002996b();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x301a;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0x3024;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0x302d;
    func_0x0001e558();
    uVar12 = &stack0x0000 == (undefined1 *)0x6;
    piStack_a = (int *)0x3037;
    func_0x000297e6();
    piStack_a = (int *)0x3040;
    func_0x0002996b();
    piStack_a = (int *)0x3045;
    FUN_28b3_1181();
    if ((bool)uVar12) goto LAB_3ab8_7c23;
    piStack_a = (int *)0x3053;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x305d;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x3066;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0x3070;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0x3079;
    func_0x000297e6();
    local_20[0] = 0x22b2;
    local_22 = 0x3083;
    func_0x000299d1();
    local_20[0] = 0x22b2;
    local_22 = 0x308c;
    func_0x000297e6();
    uStack_2a = 0x3096;
    func_0x000299d1();
    uStack_2a = 0x309b;
    lVar14 = FUN_1000_0718();
    piStack_a = (int *)0x30af;
    local_d8 = lVar14;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x30b9;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x30c2;
    func_0x000297e6();
    uStack_18 = 0x22b2;
    uStack_1a = 0x30cc;
    func_0x000299d1();
    uStack_18 = 0x22b2;
    uStack_1a = 0x30d5;
    func_0x000297e6();
    local_20[0] = 0x22b2;
    local_22 = 0x30df;
    func_0x000299d1();
    local_20[0] = 0x22b2;
    local_22 = 0x30e8;
    func_0x000297e6();
    uStack_2a = 0x30f2;
    func_0x000299d1();
    uStack_2a = 0x30f7;
    lVar14 = FUN_1000_0718();
    uVar12 = (undefined1 *)0xffdf < &local_26;
    uVar13 = &stack0x0000 == (undefined1 *)0x6;
    piStack_a = (int *)0x310b;
    local_ee = lVar14;
    func_0x000297e6();
    piStack_a = (int *)0x3114;
    func_0x000297e6();
    piStack_a = (int *)0x3119;
    FUN_28b3_1181();
    local_9e = local_ee;
    local_a2 = local_d8;
    if (!(bool)uVar12 && !(bool)uVar13) {
      local_9e = local_d8;
      local_a2 = local_ee;
      local_b6 = local_d8;
    }
    local_9a._2_2_ = 0;
    local_9a._0_2_ = 0;
    piStack_a = (int *)0x317e;
    local_ee = local_9e;
    local_d8 = local_a2;
    func_0x000297e6();
    piStack_a = (int *)0x3187;
    FUN_28b3_100d();
    piStack_a = (int *)0x3190;
    func_0x00029b6d();
    piStack_a = (int *)0x3199;
    func_0x0002996b();
    piStack_a = (int *)0x31a1;
    func_0x00029983();
    piStack_a = (int *)0x31aa;
    func_0x000297e6();
    piStack_a = (int *)0x31b3;
    FUN_28b3_100d();
    piStack_a = (int *)0x31bc;
    func_0x00029b6d();
    piStack_a = (int *)0x31c5;
    func_0x0002996b();
    piStack_a = (int *)0x31ce;
    func_0x00029983();
    piStack_a = (int *)0x31d7;
    func_0x000297e6();
    piStack_a = (int *)0x31e0;
    func_0x00029bb5();
    piStack_a = (int *)0x31e9;
    func_0x00029983();
    piStack_a = (int *)0x31f2;
    func_0x000297e6();
    piStack_a = (int *)0x31fb;
    func_0x00029bb5();
    piStack_a = (int *)0x3204;
    func_0x00029983();
    piStack_a = (int *)0x320d;
    func_0x000297e6();
    piStack_a = (int *)0x3216;
    func_0x00029b6d();
    uVar10 = 0x22b2;
    piStack_a = (int *)0x321f;
    func_0x00029983();
    local_a4 = 10000;
  }
  if (local_d4 == 3) {
    do {
      do {
        piStack_a = local_16c;
        piStack_e = (int *)0x323e;
        piStack_c = (int *)uVar10;
        FUN_21f2_3454();
        piStack_a = local_16c;
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0x324e;
        FUN_21f2_2d26();
        piStack_a = local_16c;
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0x325e;
        FUN_21f2_2d26();
        piStack_a = &local_208;
        piStack_c = &local_1fc;
        piStack_e = local_16c;
        *(undefined2 *)0xc20 = 1;
        piStack_10 = (int *)0x1;
        puStack_12 = (undefined2 *)0x22b2;
        uVar10 = 0x1bb4;
        uStack_14 = 0x3280;
        local_f2 = FUN_1def_0904();
        if (local_f2 == -1) {
          *(undefined2 *)0xc20 = 0;
          local_f2 = -1;
          goto LAB_3ab8_7aff;
        }
        *(undefined2 *)0xc20 = 0;
        if (*(int *)0x158 != 0) {
          return;
        }
      } while (local_ea == (undefined2 *)0x0);
      piStack_a = &local_1fc;
      piStack_c = local_ea;
      piStack_e = (int *)0x1bb4;
      uVar10 = 0x11f2;
      piStack_10 = (int *)0x32bd;
      iVar6 = func_0x00015409();
    } while (iVar6 == 0);
    local_1e0 = local_208;
    local_1de = local_206;
    piStack_a = (int *)0x32e0;
    func_0x000297e6();
    piStack_a = (int *)0x32e9;
    func_0x000297e6();
    piStack_a = (int *)0x32ee;
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x32f8;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x3301;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x330a;
    func_0x0002996b();
    piStack_10 = (int *)0x22b2;
    puStack_12 = (undefined2 *)0x330f;
    func_0x00029d78();
    uStack_18 = 0x22b2;
    uStack_1a = 0x3319;
    func_0x000299d1();
    uStack_18 = 1;
    uStack_1a = 0x22b2;
    uStack_1c = 0x3322;
    func_0x0001e558();
    uVar12 = (undefined1 *)0xffed < &uStack_18;
    uVar13 = &stack0x0000 == (undefined1 *)0x6;
    piStack_a = (int *)0x332c;
    func_0x000297e6();
    piStack_a = (int *)0x3335;
    func_0x0002996b();
    piStack_a = (int *)0x333a;
    FUN_28b3_1181();
    if (!(bool)uVar13) {
      piStack_a = (int *)0x3348;
      func_0x000297e6();
      piStack_a = (int *)0x3351;
      func_0x000297e6();
      piStack_a = (int *)0x3356;
      FUN_28b3_1181();
      if ((bool)uVar12 || (bool)uVar13) {
        piStack_a = (int *)0x33af;
        func_0x000297e6();
        piStack_a = (int *)0x33b4;
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x33be;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x33c7;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x33cc;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x33d6;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0x33df;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0x33e4;
        func_0x00029d78();
        local_20[0] = 0x22b2;
        local_22 = 0x33ee;
        func_0x000299d1();
      }
      else {
        piStack_a = (int *)0x3361;
        func_0x000297e6();
        piStack_a = (int *)0x3366;
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x3370;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x3379;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x337e;
        func_0x00029d78();
        uStack_18 = 0x22b2;
        uStack_1a = 0x3388;
        func_0x000299d1();
        uStack_18 = 0x22b2;
        uStack_1a = 0x3391;
        func_0x000297e6();
        uStack_18 = 0x22b2;
        uStack_1a = 0x3396;
        func_0x00029d78();
        local_20[0] = 0x22b2;
        local_22 = 0x33a0;
        func_0x000299d1();
      }
      local_20[0] = 0x22b2;
      local_22 = 0x33f7;
      func_0x000297e6();
      local_20[0] = 0x22b2;
      local_22 = 0x33fc;
      func_0x00029d78();
      uStack_2a = 0x3406;
      func_0x000299d1();
      uStack_2a = 0x340b;
      uVar15 = FUN_1000_0718();
      local_a2._2_2_ = 0;
      local_a2._0_2_ = 0;
      local_9e._0_2_ = 0;
      local_9e._2_2_ = 0xb4;
      piStack_a = (int *)0x3433;
      local_9a = uVar15;
      func_0x000297e6();
      piStack_a = (int *)0x343c;
      FUN_28b3_100d();
      piStack_a = (int *)0x3445;
      func_0x00029b6d();
      piStack_a = (int *)0x344e;
      func_0x00029bb5();
      piStack_a = (int *)0x3457;
      func_0x00029983();
      piStack_a = (int *)0x3460;
      func_0x000297e6();
      piStack_a = (int *)0x3469;
      FUN_28b3_100d();
      piStack_a = (int *)0x3472;
      func_0x00029b6d();
      piStack_a = (int *)0x347b;
      func_0x00029bb5();
      piStack_a = (int *)0x3484;
      func_0x00029983();
      piStack_a = (int *)0x348d;
      func_0x000297e6();
      piStack_a = (int *)0x3496;
      func_0x00029b6d();
      piStack_a = (int *)0x349f;
      func_0x0002996b();
      piStack_a = (int *)0x34a8;
      func_0x00029983();
      piStack_a = (int *)0x34b1;
      func_0x000297e6();
      piStack_a = (int *)0x34b6;
      func_0x00029d78();
      piStack_a = (int *)0x34bf;
      func_0x00029bfc();
      piStack_a = (int *)0x34c8;
      func_0x000297e6();
      piStack_a = (int *)0x34cd;
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      puStack_12 = (undefined2 *)0x34d7;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      puStack_12 = (undefined2 *)0x34e0;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      puStack_12 = (undefined2 *)0x34e5;
      func_0x00029d78();
      uStack_18 = 0x22b2;
      uStack_1a = 0x34ef;
      func_0x000299d1();
      uStack_18 = 1;
      uStack_1a = 0x22b2;
      uStack_1c = 0x34f8;
      FUN_1def_05d1();
      uVar12 = (undefined1 *)0xffed < &uStack_18;
      piStack_a = (int *)0x3502;
      func_0x000297e6();
      piStack_a = (int *)0x350b;
      FUN_28b3_100d();
      piStack_a = (int *)0x3513;
      func_0x0002996b();
      piStack_a = (int *)0x3518;
      func_0x00029ae7();
      piStack_a = (int *)0x351d;
      func_0x00029d78();
      piStack_a = (int *)0x3522;
      FUN_28b3_1181();
      if ((bool)uVar12) {
        piStack_a = (int *)0x3530;
        func_0x00029834();
        piStack_a = (int *)0x3539;
        func_0x000297e6();
        piStack_a = (int *)0x353e;
        func_0x00029ae7();
        piStack_a = (int *)0x3547;
        func_0x000297e6();
        piStack_a = (int *)0x3550;
        func_0x00029b6d();
        piStack_a = (int *)0x3558;
        func_0x000297e6();
        piStack_a = (int *)0x3560;
        func_0x00029b6d();
        piStack_a = (int *)0x3565;
        FUN_28b3_1163();
        piStack_a = (int *)0x356a;
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x3574;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        puStack_12 = (undefined2 *)0x3579;
        FUN_28b3_1582();
        uVar12 = (undefined1 *)0xfff7 < &piStack_e;
        uVar13 = &stack0x0000 == (undefined1 *)0x6;
        piStack_a = (int *)0x3583;
        func_0x00029834();
        piStack_a = (int *)0x358c;
        func_0x0002996b();
        piStack_a = (int *)0x3591;
        FUN_28b3_1172();
        piStack_a = (int *)0x359a;
        func_0x0002996b();
        piStack_a = (int *)0x359f;
        func_0x00029d78();
        piStack_a = (int *)0x35a4;
        FUN_28b3_1181();
        if ((bool)uVar12 || (bool)uVar13) {
          piStack_a = (int *)0x35af;
          func_0x000297e6();
          piStack_a = (int *)0x35b8;
          func_0x00029b6d();
          piStack_a = (int *)0x35bd;
          func_0x00029d78();
          piStack_a = (int *)0x35c2;
          local_a4 = FUN_28b3_0f51();
          if (499 < local_a4) goto LAB_3ab8_8b09;
        }
        else {
          uVar5 = local_9a._2_2_ + 0x5a;
          if (0x167 < local_9a._2_2_ + 0x5a) {
            uVar5 = local_9a._2_2_ - 0x10e;
          }
          local_9a._2_2_ = uVar5;
          local_a2._0_2_ = 0;
          local_a2._2_2_ = 0x10e;
          local_9e._0_2_ = 0;
          local_9e._2_2_ = 0x5a;
          piStack_a = (int *)0x361b;
          func_0x00029834();
          piStack_a = (int *)0x3624;
          func_0x00029b85();
          piStack_a = (int *)0x3629;
          local_a4 = FUN_28b3_0f51();
          if (999 < local_a4) {
            piStack_a = (int *)0x363b;
            func_0x000297e6();
            piStack_a = (int *)0x3644;
            func_0x000297e6();
            piStack_a = (int *)0x3649;
            func_0x00029d78();
            uVar12 = 0;
            uVar13 = 1;
            piStack_a = (int *)0x3668;
            func_0x00029da5();
            piStack_a = (int *)0x366d;
            FUN_28b3_1172();
            piStack_a = (int *)0x3676;
            func_0x00029c2c();
            piStack_a = (int *)0x367f;
            func_0x0002996b();
            piStack_a = (int *)0x3684;
            FUN_28b3_1181();
            if ((bool)uVar12 || (bool)uVar13) goto LAB_3ab8_8b09;
          }
        }
      }
LAB_3ab8_7ec8:
      uVar10 = 0x22b2;
LAB_3ab8_7ecb:
      piStack_c = (undefined2 *)0x2a51;
      piStack_a = (int *)uVar10;
      func_0x00012276();
    }
    goto LAB_3ab8_7c23;
  }
LAB_3ab8_8b09:
  local_96 = *(undefined1 *)0xa6c;
  local_95 = *(undefined1 *)0xa6a;
  local_94 = *(undefined1 *)0xb310;
  piStack_a = (int *)0x36a7;
  func_0x000297e6();
  piStack_a = (int *)0x36b0;
  func_0x00029b6d();
  piStack_a = (int *)0x36b9;
  func_0x00029b6d();
  piStack_a = (int *)0x36c2;
  func_0x00029983();
  piStack_a = (int *)0x22b2;
  piStack_c = (int *)0x36ca;
  func_0x0000daa6();
  puVar9 = &local_26;
  puVar8 = &local_b0;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  uStack_2a = 0x36e0;
  FUN_13bf_01c1();
  local_ca = (int *)0x1;
  uVar10 = 0x885;
  piStack_a = (int *)0x36ee;
  func_0x0000abfa();
  goto LAB_3ab8_7981;
LAB_3ab8_7d03:
  piStack_a = (int *)0x2888;
  func_0x00013e19();
  piStack_a = (int *)0x1;
  piStack_c = (undefined2 *)0x11f2;
  piStack_e = (int *)0x2894;
  iVar6 = FUN_3ab8_6669();
  if (iVar6 == -1) {
    local_16e = 0;
  }
  else {
    local_16e = 1;
  }
  goto LAB_3ab8_7c23;
}


