/* 32b2:77f6 */

void __cdecl16far FUN_32b2_77f6(int param_1,undefined2 *param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  if (param_1 != 0) {
    puVar1 = (undefined2 *)FUN_32b2_2246(param_3);
    uVar3 = (undefined2)((ulong)param_2 >> 0x10);
    puVar2 = (undefined2 *)param_2;
    *param_2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    return;
  }
  FUN_32b2_2246(param_3);
  FUN_32b2_6d14();
  FUN_32b2_6e67();
  return;
}


