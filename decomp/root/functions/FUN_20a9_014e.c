/* 20a9:014e */

void __cdecl16far
FUN_20a9_014e(uint param_1,int param_2,uint param_3,int param_4,byte *param_5,int param_6,
             int param_7)

{
  undefined2 uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  FUN_32b2_02bc();
  FUN_1885_5256(0);
  FUN_32b2_4c4c();
  FUN_20a9_0732(param_7,0);
  FUN_32b2_4d3c(0x3ce,param_7 << 8);
  FUN_32b2_4d3c(0x3ce,0xf01);
  FUN_20a9_0732(param_6,0);
  FUN_32b2_4d3c(0x3ce,0x305);
  uVar3 = (int)param_1 >> 0xf;
  pbVar2 = (byte *)(*(int *)0x1cc2 * param_2 +
                   (((int)((param_1 ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3));
  while (param_4 != 0) {
    for (iVar4 = 0; uVar3 = (int)param_3 >> 0xf,
        iVar4 < (int)(((int)((param_3 ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3); iVar4 = iVar4 + 1) {
      out(0x3ce,param_6 << 8);
      unaff_DS = *(undefined2 *)0xbc78;
      uVar1 = *(undefined2 *)0x1cca;
      *pbVar2 = *param_5;
      out(0x3ce,param_7 << 8);
      *pbVar2 = ~*param_5;
      pbVar2 = pbVar2 + 1;
      param_5 = param_5 + 1;
    }
    pbVar2 = pbVar2 + -((((int)((param_3 ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3) - *(int *)0x1cc2);
    param_4 = param_4 + -1;
  }
  FUN_20a9_0702();
  FUN_32b2_4c7a();
  return;
}


