/* 21f2:5670 */

uint __cdecl16far
FUN_21f2_5670(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint in_DX;
  uint uVar5;
  uint unaff_DI;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_1c;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  uVar7 = 0x32b2;
  FUN_32b2_02bc();
  *(undefined2 *)0x1eba = 0;
  uStack_c = param_6;
  uStack_e = param_5;
  uStack_10 = param_4;
  uStack_12 = param_3;
  uStack_14 = param_2;
  uStack_16 = param_1;
  local_18 = 0x32b2;
  local_1c = FUN_21f2_573f();
  uVar5 = in_DX | local_1c;
  if (uVar5 == 0) {
    *(undefined2 *)0xc22 = 1;
    uStack_c = 0x32b2;
    uVar7 = 0x1def;
    uStack_e = 0x75df;
    FUN_1def_26a9();
    uStack_c = 0x1def;
    uStack_e = 0x75ed;
    FUN_21f2_0356();
  }
  if (((*(int *)0x1150 == 0) && (-1 < (int)in_DX)) && ((0 < (int)in_DX || (local_1c != 0)))) {
    uStack_e = 0x760f;
    uStack_c = uVar7;
    puVar3 = (undefined2 *)FUN_1000_013f();
    puVar6 = &local_18;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    if (((unaff_DI & 0x40) != 0) || ((unaff_DI & 0x80) != 0)) {
      *(undefined2 *)0xc22 = 1;
      uStack_c = 0x1000;
      uStack_e = 0x7640;
      FUN_1def_26a9();
      uStack_c = 0x764a;
      FUN_21f2_0356();
      local_1c = 0;
    }
  }
  return local_1c;
}


