/* 1000:013f */

uint __cdecl16far FUN_1000_013f(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  FUN_32b2_02bc();
  if (param_2 < 0) {
    param_2 = 0;
    param_1 = 0;
  }
  if (*(int *)0xbed2 == 0) {
    iVar1 = FUN_32b2_4e12(param_1,param_2,0x16,0);
    if ((iVar1 + *(int *)0xbc7e & 0x1000U) == 0) {
      iVar1 = FUN_32b2_4e12(param_1,param_2,0x16,0);
      uVar2 = iVar1 + *(int *)0xbc7e;
    }
    else {
      uVar2 = (iVar1 + *(int *)0xbc7e) - 0x1000;
    }
  }
  else {
    *(undefined2 *)0xc728 = 0xffff;
    iVar1 = param_1 - *(uint *)0x11f6;
    uVar2 = (uint)(param_1 < *(uint *)0x11f6);
    if ((iVar1 == 1) && (param_2 - *(int *)0x11f8 == uVar2)) {
      uVar4 = CONCAT22(*(int *)0x11f4 + (uint)(0xffe9 < *(uint *)0x11f2),*(uint *)0x11f2 + 0x16);
    }
    else if ((iVar1 == -1) && ((param_2 - *(int *)0x11f8) - uVar2 == -1)) {
      uVar4 = CONCAT22(*(int *)0x11f4 - (uint)(*(uint *)0x11f2 < 0x16),*(uint *)0x11f2 - 0x16);
    }
    else {
      uVar4 = FUN_32b2_4e12(param_1,param_2,0x16,0);
    }
    iVar3 = (int)((ulong)uVar4 >> 0x10);
    *(uint *)0x11f6 = param_1;
    *(int *)0x11f8 = param_2;
    *(undefined2 *)0x11f2 = (int)uVar4;
    *(int *)0x11f4 = iVar3;
    iVar1 = FUN_32b2_5062();
    uVar2 = *(uint *)0x11f2;
    if ((iVar1 != *(int *)0xbee2) || (iVar3 != *(int *)0xbee2 >> 0xf)) {
      *(int *)0xbee2 = iVar1;
      FUN_1000_00cd();
    }
    uVar2 = *(uint *)0xbee4 | uVar2 & 0x3fff;
  }
  return uVar2;
}


