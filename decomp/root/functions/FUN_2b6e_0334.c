/* 2b6e:0334 */

undefined2 __cdecl16far FUN_2b6e_0334(undefined2 param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 in_DX;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_38 [7];
  undefined2 uStack_2a;
  undefined2 auStack_26 [3];
  undefined2 uStack_20;
  undefined2 local_1c [2];
  undefined2 local_18 [5];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_32b2_02bc();
  uVar7 = 0x1885;
  uStack_c = 0xba29;
  FUN_1885_5256();
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    uStack_c = 0x1885;
    uStack_e = 0xba46;
    puVar3 = (undefined2 *)FUN_1000_013f();
    puVar6 = local_18;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    uStack_c = 0xba63;
    iVar4 = FUN_21f2_0680();
    if (iVar4 == 0) {
      return 0;
    }
    uStack_c = 0xba78;
    iVar4 = FUN_21f2_06d1();
    if (iVar4 == 0) {
      puVar3 = local_1c;
      puVar6 = local_18;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      uStack_20 = 0xba91;
      FUN_21f2_6623();
      return 0;
    }
    puVar3 = local_1c;
    puVar6 = local_18;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    uVar7 = 0x21f2;
    uStack_20 = 0xbab4;
    FUN_21f2_6623();
  }
  if (-1 < param_3) {
    return 1;
  }
  iVar5 = -(param_3 + (uint)(param_2 != 0));
  uStack_e = 0xbad4;
  uStack_c = uVar7;
  puVar3 = (undefined2 *)FUN_1000_0271();
  puVar6 = local_38;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  uStack_c = 0xbaf1;
  iVar4 = FUN_21f2_0680();
  if (iVar4 != 0) {
    uStack_c = 0xbb04;
    iVar4 = FUN_21f2_06d1();
    if (iVar4 != 0) {
      puVar3 = auStack_26;
      puVar6 = local_38;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      uStack_2a = 0xbb41;
      FUN_21f2_1aa6();
      return 1;
    }
    puVar3 = auStack_26;
    puVar6 = local_38;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    uStack_2a = 0xbb1d;
    FUN_21f2_1aa6();
  }
  return 0;
}


