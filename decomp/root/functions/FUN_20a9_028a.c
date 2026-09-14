/* 20a9:028a */

void __cdecl16far
FUN_20a9_028a(uint param_1,int param_2,uint param_3,int param_4,undefined1 *param_5,int param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  FUN_32b2_02bc();
  FUN_1885_5256(0);
  FUN_32b2_4c4c();
  FUN_20a9_0732(param_6,0);
  FUN_32b2_4d3c(0x3ce,0x305);
  uVar2 = (int)param_1 >> 0xf;
  puVar1 = (undefined1 *)
           (*(int *)0x1cc2 * param_2 + (((int)((param_1 ^ uVar2) - uVar2) >> 3 ^ uVar2) - uVar2));
  while (param_4 != 0) {
    for (iVar3 = 0; uVar2 = (int)param_3 >> 0xf,
        iVar3 < (int)(((int)((param_3 ^ uVar2) - uVar2) >> 3 ^ uVar2) - uVar2); iVar3 = iVar3 + 1) {
      out(0x3ce,param_6 << 8);
      unaff_DS = *(undefined2 *)0xbc78;
      *puVar1 = *param_5;
      puVar1 = puVar1 + 1;
      param_5 = param_5 + 1;
    }
    puVar1 = puVar1 + -((((int)((param_3 ^ uVar2) - uVar2) >> 3 ^ uVar2) - uVar2) - *(int *)0x1cc2);
    param_4 = param_4 + -1;
  }
  FUN_20a9_0702();
  FUN_32b2_4c7a();
  return;
}


