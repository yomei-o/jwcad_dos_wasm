/* 10ad:0a7a */

void __cdecl16far
FUN_10ad_0a7a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,int *param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,uint *param_12)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 *puStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 local_a;
  
  FUN_32b2_02bc();
  do {
    local_a = param_11;
    local_c = param_10;
    uStack_e = param_9;
    uStack_10 = param_8;
    puStack_12 = &local_a;
    uStack_14 = param_2;
    uStack_16 = param_1;
    uStack_18 = 0x32b2;
    iVar2 = FUN_10ad_0773();
    *param_7 = iVar2;
    uVar1 = *param_12;
    uVar4 = uVar1 < 100;
    uVar5 = uVar1 == 100;
    if (100 < (int)uVar1) {
LAB_10ad_0ab4:
      puVar3 = (undefined2 *)0x9000;
      goto LAB_10ad_0abc;
    }
    local_a = 0x159e;
    FUN_32b2_6d14();
    local_a = 0x15a6;
    FUN_32b2_6d14();
    local_a = 0x15ab;
    FUN_32b2_7191();
    uVar6 = uVar5;
    if ((bool)uVar4) {
      local_a = 0x15b5;
      FUN_32b2_6d14();
      local_a = 0x15bd;
      FUN_32b2_6d14();
      local_a = 0x15c2;
      local_c = FUN_32b2_6f61();
      local_a = 0x15cd;
      FUN_32b2_6d9b();
      local_a = 0x15d2;
      FUN_32b2_7191();
      uVar6 = 1;
      if ((bool)uVar5) goto LAB_10ad_0b04;
LAB_10ad_0b34:
      *param_12 = 0x67;
      goto LAB_10ad_0ab4;
    }
LAB_10ad_0b04:
    local_a = 0x15dd;
    FUN_32b2_6d14();
    local_a = 0x15e5;
    FUN_32b2_6d14();
    local_a = 0x15ea;
    FUN_32b2_7191();
    if ((bool)uVar6) {
      local_a = 0x15f4;
      FUN_32b2_6d14();
      local_a = 0x15fd;
      FUN_32b2_6d14();
      local_a = 0x1602;
      FUN_32b2_7191();
      if (!(bool)uVar4) goto LAB_10ad_0b34;
    }
    local_a = 0x1617;
    FUN_32b2_6d14();
    uStack_10 = param_6;
    puStack_12 = (undefined2 *)param_5;
    uStack_14 = param_4;
    uStack_16 = param_3;
    uStack_18 = 0x32b2;
    FUN_32b2_75a4();
    uVar4 = (undefined1 *)0xffef < &uStack_18;
    uVar5 = &stack0x0000 == (undefined1 *)0x8;
    local_a = 0x32b2;
    local_c = 0x163e;
    FUN_32b2_6d14();
    local_a = 0x32b2;
    local_c = 0x1646;
    FUN_32b2_6e99();
    local_a = 0x32b2;
    local_c = 0x164b;
    FUN_32b2_7191();
    if (!(bool)uVar4 && !(bool)uVar5) {
      *param_12 = 0x65;
      goto LAB_10ad_0ab4;
    }
  } while (*param_7 == 0x5e);
  puVar3 = &param_3;
LAB_10ad_0abc:
  *(undefined2 *)0x7a2a = *puVar3;
  *(undefined2 *)0x7a2c = puVar3[1];
  *(undefined2 *)0x7a2e = puVar3[2];
  *(undefined2 *)0x7a30 = puVar3[3];
  return;
}


