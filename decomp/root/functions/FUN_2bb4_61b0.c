/* 2bb4:61b0 */

undefined2 __cdecl16far FUN_2bb4_61b0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 in_DX;
  uint extraout_DX;
  uint uVar7;
  undefined2 *puVar8;
  uint *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint *in_stack_00000018;
  undefined2 local_3a [6];
  undefined2 local_2e;
  uint local_2c;
  uint local_2a;
  uint local_28;
  uint local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_32b2_02bc();
  uStack_c = 0x32b2;
  uStack_e = 0x1d08;
  puVar3 = (undefined2 *)FUN_1000_0271();
  puVar8 = local_3a;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  puVar9 = &local_2a;
  puVar8 = local_3a;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  local_2c = 0x1000;
  local_2e = 0x1d33;
  FUN_3ab8_517f();
  FUN_32b2_6d14();
  FUN_32b2_701d();
  FUN_32b2_6e99();
  FUN_32b2_6ef9();
  FUN_32b2_6d14();
  FUN_32b2_701d();
  FUN_32b2_6e99();
  FUN_32b2_6ef9();
  FUN_32b2_6d14();
  FUN_32b2_710c();
  FUN_32b2_6d14();
  FUN_32b2_710c();
  FUN_32b2_718c();
  FUN_32b2_6e4b();
  FUN_32b2_6e63();
  FUN_32b2_6d14();
  FUN_32b2_710c();
  FUN_32b2_6d14();
  FUN_32b2_710c();
  FUN_32b2_7173();
  FUN_32b2_7285();
  FUN_32b2_7182();
  FUN_32b2_710c();
  FUN_32b2_6e4b();
  FUN_32b2_6e63();
  uVar7 = extraout_DX;
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  uStack_10 = 0x32b2;
  local_12 = 0x1e29;
  FUN_32b2_6eb1();
  uStack_10 = 0x32b2;
  local_12 = 0x1e31;
  FUN_32b2_6cc6();
  uStack_10 = 0x32b2;
  local_12 = 0x1e36;
  FUN_32b2_7258();
  uStack_18 = 0x32b2;
  local_1a = 0x1e40;
  FUN_32b2_6eb1();
  uStack_18 = *(undefined2 *)0x93c6;
  local_1a = *(undefined2 *)0x93c4;
  uStack_1c = *(undefined2 *)0x93c2;
  uStack_1e = *(undefined2 *)0x93c0;
  uStack_20 = *(undefined2 *)0x93c6;
  uStack_22 = *(undefined2 *)0x93c4;
  uStack_24 = *(undefined2 *)0x93c2;
  local_26 = *(uint *)0x93c0;
  local_28 = 0x32b2;
  local_2a = 0x1e65;
  uVar4 = FUN_1def_2828();
  *in_stack_00000018 = uVar4;
  in_stack_00000018[1] = uVar7;
  if (((local_2c == local_28) && (local_2a == local_26)) ||
     (((local_2a <= local_26 &&
       ((((local_2a < local_26 || (local_2c < local_28)) && (local_2a <= in_stack_00000018[1])) &&
        ((in_stack_00000018[1] != local_2a || (local_2c < *in_stack_00000018)))))) &&
      ((in_stack_00000018[1] <= local_26 &&
       ((in_stack_00000018[1] < local_26 || (*in_stack_00000018 < local_28)))))))) {
    uVar5 = 1;
  }
  else {
    if (((local_26 <= local_2a) && ((local_2a != local_26 || (local_28 < local_2c)))) &&
       ((local_2a < in_stack_00000018[1] ||
        (((local_2a <= in_stack_00000018[1] && (local_2c < *in_stack_00000018)) ||
         ((in_stack_00000018[1] <= local_26 &&
          ((in_stack_00000018[1] < local_26 || (*in_stack_00000018 < local_28)))))))))) {
      return 2;
    }
    uVar5 = 0;
  }
  return uVar5;
}


