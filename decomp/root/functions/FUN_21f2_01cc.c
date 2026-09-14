/* 21f2:01cc */

void __cdecl16far FUN_21f2_01cc(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  FUN_32b2_02bc();
  uVar4 = 0x254;
  iVar3 = 0x100;
  iVar1 = FUN_32b2_0748(0x100,0x254);
  if (iVar1 != 0) {
    iVar3 = 0xbc;
    uVar2 = 0x211f;
    iVar1 = FUN_32b2_0748(0xbc,600);
    uVar4 = 0;
    if (iVar1 != 0) {
      for (iVar1 = 1; iVar1 < 100; iVar1 = iVar1 + 1) {
        iVar3 = -0x40b8;
        iVar1 = FUN_32b2_257c(0xbf48,0x12a,uVar2);
        uVar4 = uVar2;
        if (iVar1 == 0) {
          if (iVar3 < param_1) {
            uVar2 = 0x1d04;
            iVar3 = 0x32b2;
            FUN_32b2_2854(0xbf48,0x1d04);
          }
          uVar4 = uVar2;
          if (param_1 < iVar3) break;
        }
        if (iVar3 == param_1) {
          uVar4 = param_2;
          FUN_32b2_2854(0xbf48,0x1d06,param_2);
        }
        iVar1 = 0x32b2;
        uVar2 = 0x2198;
        iVar3 = FUN_32b2_25f0(0xbf48,uVar4);
        if (iVar3 != 0) break;
      }
      iVar3 = 0x21a8;
      FUN_32b2_252e();
      uVar4 = 0;
      if (iVar3 == 0) {
        uVar4 = 0x100;
        iVar1 = FUN_32b2_4b78(0x32b2,0x100);
        if (iVar1 != 0) {
          FUN_21f2_26d3(0x1d0a);
        }
        iVar3 = 0x100;
        iVar1 = FUN_32b2_45d0(0x32b2,0xbc,0x100);
        if (iVar1 != 0) {
          FUN_21f2_26d3(0x1d0d);
        }
      }
    }
  }
  FUN_32b2_252e(iVar3,uVar4);
  return;
}


