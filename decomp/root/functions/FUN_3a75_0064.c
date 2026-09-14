/* 3a75:0064 */

uint * __cdecl16far FUN_3a75_0064(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  uVar5 = 0x3a75;
  while( true ) {
    uVar2 = *param_1;
    uVar4 = uVar2 & 0xff;
    if (uVar4 == 0) {
      return (uint *)0x0;
    }
    iVar3 = FUN_32b2_312f(uVar5,uVar4);
    puVar1 = param_1;
    if (iVar3 != 0) {
      puVar1 = (uint *)((int)param_1 + 1);
      if ((char)*puVar1 == '\0') {
        return (uint *)0x0;
      }
      uVar4 = CONCAT11((char)uVar2,(char)*puVar1);
    }
    if (param_2 == uVar4) break;
    param_1 = (uint *)((int)puVar1 + 1);
    uVar5 = 0x32b2;
  }
  return param_1;
}


