/* 21f2:6a57 */

void __cdecl16far FUN_21f2_6a57(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 in_DX;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_22 [10];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_32b2_02bc();
  uStack_c = 0x32b2;
  uStack_e = 0x898f;
  puVar3 = (undefined2 *)FUN_1000_0271();
  puVar5 = local_22;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  uStack_c = 0x1000;
  uStack_e = 0x89dc;
  puVar3 = (undefined2 *)FUN_1000_0271();
  puVar5 = local_22;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


