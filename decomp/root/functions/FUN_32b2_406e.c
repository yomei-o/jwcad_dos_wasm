/* 32b2:406e */

undefined2 __cdecl16far
FUN_32b2_406e(int param_1,uint param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (param_1 == 2) {
    uVar1 = FUN_32b2_4444(0x32b2,param_2,param_3,param_4);
  }
  else {
    uVar2 = FUN_3a75_0194(param_2,0x5c);
    uVar3 = FUN_32b2_2fe6(param_2,0x2f);
    if (uVar3 == 0) {
      if (uVar2 == 0) {
        uVar2 = param_2;
      }
    }
    else if ((uVar2 == 0) || (uVar2 < uVar3)) {
      uVar2 = uVar3;
    }
    iVar4 = FUN_32b2_2f7a(uVar2,0x2e);
    if (iVar4 == 0) {
      *(undefined2 *)0x7c46 = 0x10;
      iVar4 = FUN_32b2_21c4(param_2,0);
      iVar4 = iVar4 + 5;
      iVar5 = thunk_FUN_32b2_1f83();
      *(int *)0x7c46 = iVar4;
      if (iVar5 == 0) {
        uVar1 = 0xffff;
      }
      else {
        FUN_32b2_2166(iVar5,param_2);
        iVar6 = FUN_32b2_21c4(param_2);
        iVar6 = iVar6 + iVar5;
        for (iVar4 = 2; -1 < iVar4; iVar4 = iVar4 + -1) {
          FUN_32b2_2166(iVar6,*(undefined2 *)(iVar4 * 2 + -0x7708));
          iVar4 = 0x32b2;
          iVar7 = FUN_32b2_445a(0x32b2,iVar5,0);
          if (iVar7 != -1) {
            FUN_32b2_3fda(param_1,iVar5,param_3,param_4,iVar4);
            break;
          }
        }
        uVar1 = 0x32b2;
        thunk_FUN_32b2_1f62(iVar5);
      }
    }
    else {
      uVar1 = FUN_32b2_2fa4(iVar4,*(undefined2 *)0x88f8);
      uVar1 = FUN_32b2_3fda(param_1,param_2,param_3,param_4,uVar1);
    }
  }
  return uVar1;
}


