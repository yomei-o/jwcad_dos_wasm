/* 32b2:7285 */

void __cdecl16far FUN_32b2_7285(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *in_BX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 unaff_DS;
  
  uVar4 = in_BX[1];
  uVar7 = in_BX[3];
  uVar3 = in_BX[2];
  if ((int)uVar7 < 0) {
    uVar5 = ~uVar3;
    uVar3 = ~uVar4;
    uVar4 = uVar3 + (*in_BX == 0);
    uVar2 = (uint)CARRY2(uVar3,(uint)(*in_BX == 0));
    uVar3 = uVar5 + uVar2;
    uVar7 = ~uVar7 + (uint)CARRY2(uVar5,uVar2);
  }
  iVar1 = *(int *)0x8ac6;
  iVar6 = iVar1 + 0xc;
  if (iVar6 != -0x754e) {
    *(int *)0x8ac6 = iVar6;
    *(int *)(iVar1 + 8) = iVar6;
    if ((uVar7 == 0 && uVar3 == 0) && ((uVar4 & 0xff00) == 0)) {
      *(undefined1 *)(iVar1 + 10) = 3;
      FUN_32b2_568a();
      return;
    }
    *(undefined1 *)(iVar1 + 10) = 7;
    FUN_32b2_5a00();
    return;
  }
  FUN_32b2_7312();
  return;
}


