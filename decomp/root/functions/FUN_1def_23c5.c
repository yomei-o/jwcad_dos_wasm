/* 1def:23c5 */

void __cdecl16far
FUN_1def_23c5(undefined1 *param_1,int param_2,int param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined2 local_1a;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  
  FUN_32b2_02bc();
  uVar4 = (int)*(uint *)0x1b3e >> 0xf;
  iVar1 = (((int)((*(uint *)0x1b3e ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4) + 1;
  if (param_3 < 1) {
    param_3 = 1;
  }
  else if (*(int *)0x1b42 < param_3) {
    param_3 = *(int *)0x1b42;
  }
  if (param_2 < 1) {
    iVar1 = 1;
  }
  else if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  if ((param_5 == 0) || (param_5 != 2)) {
    local_1a = 0;
  }
  else {
    local_1a = param_4;
  }
  uVar9 = param_4;
  FUN_1885_5256(0,param_4);
  if ((param_5 == -1) || (param_5 == 1)) {
    iVar2 = (param_3 + -1) * 0x10;
    iVar3 = FUN_32b2_21c4(param_1);
    iVar5 = (iVar1 + -1) * 8;
    iVar8 = iVar2 + 0xf;
    while (iVar2 <= iVar8) {
      iVar7 = 0x32b2;
      func_0x0002def0(0x32b2,iVar5,iVar2,iVar3 * 8 + iVar5 + -1,iVar2,param_4,0xffff);
      iVar2 = iVar7 + 1;
    }
    uVar9 = 0;
    local_1a = 0;
  }
  uVar6 = 0x3a75;
  iVar2 = FUN_3a75_00b2(param_1,uVar9);
  param_2 = iVar1;
  for (iVar8 = 1; iVar8 <= iVar2; iVar8 = iVar8 + 1) {
    iVar1 = FUN_3a75_0002(*param_1,0);
    if (iVar1 == 1) {
      uVar4 = CONCAT11(*param_1,param_1[1]);
      FUN_3a75_0260(uVar4);
      if (((uVar4 < 0x8740) || (0x8748 < uVar4)) || ((*(byte *)0x129 & 1) != 0)) {
        iVar3 = (param_3 + -1) * 0x10;
        iVar1 = param_2 + -1;
      }
      else {
        iVar3 = (param_3 + -1) * 0x10;
        FUN_20a9_03e1((param_2 + -1) * 8,iVar3,uVar9,local_1a,uVar4 + 0x78f1);
        uVar4 = 0x29;
        iVar1 = param_2;
      }
      iVar8 = 0x3e1;
      FUN_20a9_03e1(iVar1 << 3,iVar3,uVar9,local_1a,uVar4);
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    }
    else {
      iVar8 = 0x416;
      FUN_20a9_03e1((param_2 + -1) * 8,(param_3 + -1) * 0x10,uVar9,local_1a,*param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    uVar6 = 0x20a9;
  }
  func_0x0002def0(uVar6,0,*(undefined2 *)0xa5e,*(undefined2 *)0x1b3e,*(undefined2 *)0xa5e,7,0xffff);
  return;
}


