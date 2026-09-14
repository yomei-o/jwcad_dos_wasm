/* 21f2:1ff7 */

void __cdecl16far FUN_21f2_1ff7(uint param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_5c;
  int local_5a;
  undefined2 local_46 [14];
  undefined2 uStack_2a;
  undefined2 local_26 [12];
  undefined2 uStack_e;
  undefined2 local_c;
  
  FUN_32b2_02bc();
  if (((param_2 <= *(int *)0x14e) &&
      ((((param_2 < *(int *)0x14e || (param_1 <= *(uint *)0x14c)) && (-1 < param_2)) &&
       ((0 < param_2 || (param_1 != 0)))))) &&
     ((0 < *(int *)0x14e || ((-1 < *(int *)0x14e && (*(int *)0x14c != 0)))))) {
    *(undefined1 *)0xd14 = 2;
    local_c = 0x32b2;
    uStack_e = 0x3f6b;
    iVar6 = param_2;
    puVar4 = (undefined2 *)FUN_1000_0271();
    puVar7 = local_26;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar3 = *puVar2;
    }
    local_5a = param_2;
    for (local_5c = param_1;
        (local_5a <= *(int *)0x14e && ((local_5a < *(int *)0x14e || (local_5c < *(uint *)0x14c))));
        local_5c = local_5c + 1) {
      iVar5 = local_5a + (uint)(0xfffe < local_5c);
      local_c = 0x1000;
      uStack_e = 0x3fb4;
      puVar4 = (undefined2 *)FUN_1000_0271();
      puVar7 = local_46;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar7;
        puVar7 = puVar7 + 1;
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = *puVar2;
      }
      local_c = 0x1000;
      uStack_e = 0x3fd1;
      puVar4 = (undefined2 *)FUN_1000_0271();
      puVar7 = local_46;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar4;
        puVar4 = puVar4 + 1;
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar2;
      }
      local_5a = local_5a + (uint)(0xfffe < local_5c);
    }
    local_c = 0x1000;
    uStack_e = 0x3ff3;
    puVar4 = (undefined2 *)FUN_1000_0271();
    puVar7 = local_26;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar3 = puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    if (local_c._1_1_ < 0x5a) {
      local_c = 1;
      puVar4 = local_26;
      puVar7 = local_26;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar4;
        puVar4 = puVar4 + 1;
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar2;
      }
      uStack_2a = 0x4027;
      FUN_21f2_1f26();
    }
    piVar1 = (int *)0x14c;
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)0x14e = *(int *)0x14e - (uint)(iVar6 == 0);
  }
  return;
}


