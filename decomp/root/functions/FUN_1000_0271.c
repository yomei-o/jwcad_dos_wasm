/* 1000:0271 */

uint __cdecl16far FUN_1000_0271(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (param_2 < 0) {
    param_2 = 0;
    param_1 = 0;
  }
  if (*(int *)0xbed2 == 0) {
    iVar1 = FUN_32b2_4ee4();
    if ((iVar1 + *(int *)0xb788 & 0x1000U) == 0) {
      iVar1 = FUN_32b2_4ee4();
      uVar2 = iVar1 + *(int *)0xb788;
    }
    else {
      uVar2 = (iVar1 + *(int *)0xb788) - 0x1000;
    }
  }
  else {
    *(undefined2 *)0xbee2 = 0xffff;
    iVar1 = param_1 - *(uint *)0x11fe;
    uVar2 = (uint)(param_1 < *(uint *)0x11fe);
    if ((iVar1 == 1) && (param_2 - *(int *)0x1200 == uVar2)) {
      iVar3 = *(uint *)0x11fa + 0x20;
      iVar1 = *(int *)0x11fc + (uint)(0xffdf < *(uint *)0x11fa);
    }
    else if ((iVar1 == -1) && ((param_2 - *(int *)0x1200) - uVar2 == -1)) {
      iVar3 = *(uint *)0x11fa - 0x20;
      iVar1 = *(int *)0x11fc - (uint)(*(uint *)0x11fa < 0x20);
    }
    else {
      iVar1 = param_2;
      iVar3 = FUN_32b2_4ee4();
    }
    *(uint *)0x11fe = param_1;
    *(int *)0x1200 = param_2;
    *(int *)0x11fa = iVar3;
    *(int *)0x11fc = iVar1;
    iVar3 = FUN_32b2_5062();
    uVar2 = *(uint *)0x11fa;
    if ((iVar3 != *(int *)0xc728) || (iVar1 != *(int *)0xc728 >> 0xf)) {
      *(int *)0xc728 = iVar3;
      FUN_1000_0106();
    }
    uVar2 = uVar2 & 0x3fff | *(uint *)0xc72a;
  }
  return uVar2;
}


