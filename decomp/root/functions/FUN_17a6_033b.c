/* 17a6:033b */

undefined2 __cdecl16far FUN_17a6_033b(int param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 in_DX;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_40 [8];
  undefined1 local_30;
  byte local_2f;
  byte local_2b;
  undefined2 local_2a;
  undefined2 auStack_26 [2];
  undefined2 uStack_22;
  undefined2 auStack_1e [7];
  undefined1 local_10;
  byte local_f;
  uint local_e;
  undefined2 uStack_c;
  
  uVar8 = 0x32b2;
  FUN_32b2_02bc();
  *(undefined2 *)0xbc0 = 1;
  if ((param_3 < 0) || ((param_3 < 1 && (param_2 == 0)))) {
LAB_17a6_0448:
    if (param_3 < 0) {
      iVar5 = -(param_3 + (uint)(param_2 != 0));
      local_e = 0x7ec5;
      uStack_c = uVar8;
      puVar3 = (undefined2 *)FUN_1000_0271();
      puVar7 = &local_2a;
      puVar6 = puVar3;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      if (0x59 < local_f) goto LAB_17a6_038b;
      uStack_c = 0x7ef4;
      iVar4 = FUN_21f2_06d1();
      if (iVar4 == 0) {
        *(byte *)(puVar3 + 0xf) = *(byte *)(puVar3 + 0xf) & 0xfd;
      }
      else {
        if (param_1 == 0) {
          if ((local_e & 0x100) != 0) {
            local_f = 0;
            local_10 = 0;
            puVar6 = auStack_26;
            puVar7 = &local_2a;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar1;
            }
            local_2a = 0x7f4f;
            FUN_21f2_1c0d();
            puVar7 = &local_2a;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              puVar1 = puVar3;
              puVar3 = puVar3 + 1;
              *puVar2 = *puVar1;
            }
          }
        }
        else {
          if ((local_e & 0x100) != 0) {
            local_f = 0;
            puVar6 = auStack_26;
            puVar7 = &local_2a;
            for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar1;
            }
            local_2a = 0x7f20;
            FUN_21f2_1c0d();
            local_10 = 0;
          }
          local_f = 7;
        }
        puVar6 = auStack_26;
        puVar7 = &local_2a;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
        local_2a = 0x7f7c;
        FUN_21f2_1c0d();
      }
    }
    uVar8 = 1;
  }
  else {
    uStack_c = 0x32b2;
    local_e = 0x7dcd;
    puVar3 = (undefined2 *)FUN_1000_013f();
    puVar7 = local_40;
    puVar6 = puVar3;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    if (local_2f < 0x5a) {
      uVar8 = 0x21f2;
      uStack_c = 0x7dfe;
      iVar4 = FUN_21f2_06d1();
      if (iVar4 == 0) {
        *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xfd;
      }
      else {
        if (param_1 == 0) {
          if (((local_2b & 1) != 0) || ((local_2b & 2) != 0)) {
            local_2f = 0;
            local_30 = 0;
            puVar6 = auStack_1e;
            puVar7 = local_40;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar1;
            }
            uStack_22 = 0x7e6b;
            FUN_21f2_6476();
            puVar7 = local_40;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar7;
              puVar7 = puVar7 + 1;
              puVar1 = puVar3;
              puVar3 = puVar3 + 1;
              *puVar2 = *puVar1;
            }
          }
        }
        else {
          if (((local_2b & 1) != 0) || ((local_2b & 2) != 0)) {
            local_2f = 0;
            puVar6 = auStack_1e;
            puVar7 = local_40;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              puVar1 = puVar7;
              puVar7 = puVar7 + 1;
              *puVar2 = *puVar1;
            }
            uStack_22 = 0x7e33;
            FUN_21f2_6476();
            local_30 = 0;
          }
          local_2f = 7;
        }
        puVar6 = auStack_1e;
        puVar7 = local_40;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
        uVar8 = 0x21f2;
        uStack_22 = 0x7e9b;
        FUN_21f2_6476();
      }
      goto LAB_17a6_0448;
    }
LAB_17a6_038b:
    uVar8 = 0;
  }
  return uVar8;
}


