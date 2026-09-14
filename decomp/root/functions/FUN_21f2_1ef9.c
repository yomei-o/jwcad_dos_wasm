/* 21f2:1ef9 */

void __cdecl16far FUN_21f2_1ef9(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 auStack_26 [2];
  undefined2 local_22 [13];
  undefined1 local_7;
  
  FUN_32b2_02bc();
  local_7 = 99;
  puVar5 = auStack_26;
  puVar4 = local_22;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  FUN_21f2_1f26();
  return;
}


