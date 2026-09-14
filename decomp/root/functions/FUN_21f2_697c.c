/* 21f2:697c */

void __cdecl16far FUN_21f2_697c(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 in_DX;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_18 [5];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_32b2_02bc();
  uStack_c = 0x32b2;
  uStack_e = 0x88b4;
  puVar3 = (undefined2 *)FUN_1000_013f();
  puVar5 = local_18;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  uStack_c = 0x1000;
  uStack_e = 0x895e;
  puVar3 = (undefined2 *)FUN_1000_013f();
  puVar5 = local_18;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


