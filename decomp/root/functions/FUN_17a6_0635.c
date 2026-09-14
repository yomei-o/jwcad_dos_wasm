/* 17a6:0635 */

undefined2 __cdecl16far FUN_17a6_0635(undefined2 param_1)

{
  int iVar1;
  undefined2 in_DX;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  FUN_32b2_02bc();
  FUN_1885_5256(0);
  *(undefined2 *)0xbc2 = param_1;
  iVar2 = 0x1885;
  FUN_1885_3b7a();
  uVar4 = 1;
  while( true ) {
    if (*(int *)0x152 < (int)uVar4) {
      uVar4 = 1;
      iVar6 = 0;
      while( true ) {
        iVar1 = *(int *)0x14a;
        if ((iVar1 < iVar6) || ((iVar1 <= iVar6 && (*(uint *)0x148 < uVar4)))) break;
        if ((char)uVar4 == '\0') {
          uVar4 = 0x812d;
          iVar5 = FUN_1885_532a();
          iVar6 = iVar2;
          if (iVar5 != 0) {
            return 0x20;
          }
        }
        iVar2 = 0x1000;
        iVar5 = FUN_1000_013f();
        if ((*(byte *)(iVar5 + 0x14) & 2) != 0) {
          FUN_17a6_033b(param_1);
        }
        bVar3 = 0xfffe < uVar4;
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + (uint)bVar3;
      }
      uVar4 = 1;
      iVar6 = 0;
      while( true ) {
        iVar1 = *(int *)0x14e;
        if ((iVar1 < iVar6) || ((iVar1 <= iVar6 && (*(uint *)0x14c < uVar4)))) break;
        if ((uVar4 & 0xf) == 0) {
          uVar4 = 0x818d;
          iVar5 = FUN_1885_532a();
          iVar6 = iVar2;
          if (iVar5 != 0) {
            return 0x20;
          }
        }
        iVar2 = 0x1000;
        iVar5 = FUN_1000_0271();
        if ((*(byte *)(iVar5 + 0x1e) & 2) != 0) {
          bVar3 = uVar4 != 0;
          uVar4 = -uVar4;
          iVar6 = -(iVar6 + (uint)bVar3);
          FUN_17a6_033b(param_1);
        }
        bVar3 = 0xfffe < uVar4;
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + (uint)bVar3;
      }
      uVar4 = 1;
      while( true ) {
        if (*(int *)0x150 < (int)uVar4) {
          return 0;
        }
        if (((uVar4 & 7) == 0) && (iVar2 = FUN_1885_532a(), iVar2 != 0)) break;
        iVar5 = -0x7e18;
        iVar6 = FUN_1000_0398(uVar4);
        iVar2 = iVar5;
        if ((*(byte *)(iVar6 + 0x16) & 2) != 0) {
          iVar2 = 0x1000;
          FUN_17a6_05a9(param_1,iVar5);
        }
        uVar4 = iVar2 + 1;
      }
      return 0x20;
    }
    if (((uVar4 & 7) == 0) && (iVar2 = FUN_1885_532a(), iVar2 != 0)) break;
    iVar2 = 0x1000;
    iVar5 = -0x7f3d;
    iVar1 = FUN_1000_03ef(uVar4);
    iVar6 = iVar5;
    if ((*(byte *)(iVar1 + 10) & 2) != 0) {
      iVar6 = 0x1000;
      FUN_17a6_0532(param_1,iVar5);
    }
    uVar4 = iVar6 + 1;
  }
  return 0x20;
}


