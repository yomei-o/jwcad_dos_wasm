/* 2bb4:35b8 */

undefined2 __cdecl16far FUN_2bb4_35b8(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 auStack_12 [2];
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  
  FUN_32b2_02bc();
  uStack_8 = 0x32b2;
  local_a = 0xf10d;
  FUN_32b2_6d14();
  uStack_8 = 0x32b2;
  local_a = 0xf115;
  FUN_32b2_6e63();
  uStack_8 = 0x32b2;
  local_a = 0xf11d;
  FUN_32b2_6d14();
  uStack_8 = 0x32b2;
  uVar7 = 0x32b2;
  local_a = 0xf125;
  FUN_32b2_6e63();
  puVar6 = auStack_12;
  puVar5 = &local_e;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  iVar4 = FUN_2bb4_34a0();
  uVar3 = 0;
  if (iVar4 != 0) {
    if (*(char *)(*(int *)0xb310 + -0x4b5a) == '\0') {
      *(undefined1 *)(*(int *)0xb310 + -0x4b5a) = 1;
      uStack_8 = 0xffff;
      local_a = 0x32b2;
      uStack_c = 0xf164;
      FUN_1885_2988();
      uStack_8 = 0;
      local_a = 0x1885;
      uVar7 = 0x1885;
      uStack_c = 0xf16d;
      FUN_1885_5256();
    }
    uStack_8 = *(undefined2 *)0x152;
    local_a = 1;
    local_e = 0xf17a;
    uStack_c = uVar7;
    FUN_2bb4_3645();
    uVar3 = *(undefined2 *)0x152;
  }
  return uVar3;
}


