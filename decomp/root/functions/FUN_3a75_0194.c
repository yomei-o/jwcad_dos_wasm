/* 3a75:0194 */

byte * __cdecl16far FUN_3a75_0194(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  byte *local_4;
  
  local_4 = (byte *)0x0;
  uVar7 = 0x3a75;
  do {
    bVar2 = *param_1;
    uVar4 = (uint)bVar2;
    iVar5 = FUN_32b2_312f(uVar7,uVar4);
    pbVar3 = param_1;
    if (iVar5 == 0) {
joined_r0x0003a930:
      pbVar6 = param_1;
      param_1 = pbVar3;
      if (uVar4 == param_2) {
LAB_3a75_01e5:
        local_4 = pbVar6;
      }
    }
    else {
      pbVar6 = param_1 + 1;
      if (*pbVar6 != 0) {
        uVar4 = CONCAT11(bVar2,*pbVar6);
        pbVar3 = pbVar6;
        goto joined_r0x0003a930;
      }
      param_1 = pbVar6;
      if (local_4 == (byte *)0x0) goto LAB_3a75_01e5;
    }
    pbVar1 = param_1;
    uVar7 = 0x32b2;
    param_1 = param_1 + 1;
    if (*pbVar1 == 0) {
      return local_4;
    }
  } while( true );
}


