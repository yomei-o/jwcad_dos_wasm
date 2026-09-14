/* 32b2:61d3 */

void __cdecl16near FUN_32b2_61d3(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *unaff_SI;
  uint uVar9;
  undefined2 unaff_DS;
  
  uVar4 = unaff_SI[3];
  uVar9 = 0;
  iVar5 = 5;
  uVar6 = unaff_SI[1];
  uVar7 = unaff_SI[2];
  uVar8 = *unaff_SI;
  do {
    uVar1 = uVar4 & 1;
    uVar4 = uVar4 >> 1;
    uVar1 = (uint)(CONCAT12(uVar1 != 0,uVar7) >> 1);
    uVar2 = (uint)(CONCAT12((uVar7 & 1) != 0,uVar6) >> 1);
    uVar3 = (uint)(CONCAT12((uVar6 & 1) != 0,uVar8) >> 1);
    uVar9 = (uint)(CONCAT12((uVar8 & 1) != 0,uVar9) >> 1);
    iVar5 = iVar5 + -1;
    uVar6 = uVar2;
    uVar7 = uVar1;
    uVar8 = uVar3;
  } while (iVar5 != 0);
  uVar4 = uVar4 << 1 | (uint)((int)uVar1 < 0);
  *unaff_SI = uVar9;
  unaff_SI[1] = uVar3;
  unaff_SI[2] = uVar2;
  unaff_SI[3] = (uint)(CONCAT12(uVar4 != 0,uVar1 << 1) >> 1);
  unaff_SI[4] = uVar4 - 0x3fe;
  return;
}


