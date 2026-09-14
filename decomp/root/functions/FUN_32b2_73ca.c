/* 32b2:73ca */

undefined2 __cdecl16far
FUN_32b2_73ca(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint in_BX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  *(undefined2 *)0x8df8 = param_1;
  *(undefined2 *)0x8dfa = param_2;
  *(undefined2 *)0x8dfc = param_3;
  *(undefined2 *)0x8dfe = param_4;
  uVar6 = FUN_32b2_622f(&stack0xfffe);
  puVar5 = (undefined1 *)0x8e00;
  puVar4 = (undefined1 *)0x8df9;
  for (iVar3 = (int)*(char *)0x8df8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  *(uint *)0x8df0 = in_BX & 0xff;
  *(undefined2 *)0x8df2 = (int)((ulong)uVar6 >> 0x10);
  *(undefined2 *)0x8df4 = (int)uVar6;
  *(undefined2 *)0x8df6 = 0x8e00;
  return 0x8df0;
}


