/* 32b2:08f4 */

uint __cdecl16far FUN_32b2_08f4(undefined2 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)(param_1 + 3);
  if (((bVar2 & 0x83) != 0) && ((bVar2 & 0x40) == 0)) {
    if ((bVar2 & 2) == 0) {
      *(byte *)(param_1 + 3) = bVar2 | 1;
      if (((bVar2 & 0xc) == 0) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
        FUN_32b2_0a9a(param_1);
      }
      uVar3 = param_1[2];
      *param_1 = uVar3;
      uVar5 = (uint)*(byte *)((int)param_1 + 7);
      iVar4 = FUN_32b2_1d18(0x32b2,uVar5,uVar3,param_1[0x51]);
      if (iVar4 == 0) {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x10;
      }
      else {
        if (iVar4 != -1) {
          if (((*(byte *)(uVar5 + 0x7a43) & 0x82) == 0x82) && ((*(byte *)(param_1 + 3) & 0x82) == 0)
             ) {
            pbVar1 = (byte *)(param_1 + 0x50);
            *pbVar1 = *pbVar1 | 0x20;
          }
          param_1[1] = iVar4 + -1;
          bVar2 = *(byte *)*param_1;
          *param_1 = (byte *)*param_1 + 1;
          return (uint)bVar2;
        }
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
      }
      param_1[1] = 0;
    }
    else {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
    }
  }
  return 0xffff;
}


