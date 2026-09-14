/* 21f2:6859 */

void __cdecl16far FUN_21f2_6859(uint param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_32;
  int local_30;
  undefined2 local_2e [7];
  undefined2 uStack_20;
  undefined2 auStack_1c [2];
  undefined2 local_18 [5];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_32b2_02bc();
  if (((param_2 <= *(int *)0x14a) &&
      ((((param_2 < *(int *)0x14a || (param_1 <= *(uint *)0x148)) && (-1 < param_2)) &&
       ((0 < param_2 || (param_1 != 0)))))) &&
     ((0 < *(int *)0x14a || ((-1 < *(int *)0x14a && (*(int *)0x148 != 0)))))) {
    *(undefined1 *)0xd14 = 2;
    uStack_c = 0x32b2;
    uStack_e = 0x87cd;
    iVar7 = param_2;
    puVar5 = (undefined2 *)FUN_1000_013f();
    puVar8 = local_18;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = *puVar2;
    }
    local_30 = param_2;
    for (local_32 = param_1;
        (local_30 <= *(int *)0x14a && ((local_30 < *(int *)0x14a || (local_32 < *(uint *)0x148))));
        local_32 = local_32 + 1) {
      iVar6 = local_30 + (uint)(0xfffe < local_32);
      uStack_c = 0x1000;
      uStack_e = 0x8816;
      puVar5 = (undefined2 *)FUN_1000_013f();
      puVar8 = local_2e;
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar3 = *puVar2;
      }
      uStack_c = 0x1000;
      uStack_e = 0x8833;
      puVar5 = (undefined2 *)FUN_1000_013f();
      puVar8 = local_2e;
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar2;
      }
      local_30 = local_30 + (uint)(0xfffe < local_32);
    }
    uVar4 = *(undefined2 *)0x14a;
    uStack_c = 0x1000;
    uStack_e = 0x8855;
    puVar5 = (undefined2 *)FUN_1000_013f();
    puVar8 = local_18;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar3 = *puVar2;
    }
    if ((byte)((uint)uVar4 >> 8) < 0x5a) {
      puVar5 = auStack_1c;
      puVar8 = local_18;
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar3 = *puVar2;
      }
      uStack_20 = 0x8889;
      FUN_21f2_6623();
    }
    piVar1 = (int *)0x148;
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)0x14a = *(int *)0x14a - (uint)(iVar7 == 0);
  }
  return;
}


