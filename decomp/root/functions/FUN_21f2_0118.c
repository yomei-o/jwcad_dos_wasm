/* 21f2:0118 */

undefined2 __cdecl16far FUN_21f2_0118(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 unaff_DS;
  int local_a;
  int iVar3;
  
  FUN_32b2_02bc();
  local_a = FUN_32b2_0748(0x100,0x254);
  if (local_a == 0) {
    FUN_32b2_252e();
  }
  else {
    for (iVar3 = 0; iVar1 = local_a, iVar3 < param_1; iVar3 = iVar3 + 1) {
      iVar3 = -0x40b8;
      local_a = 0x32b2;
      iVar1 = FUN_32b2_257c(0xbf48,0x12a,iVar1);
      if (iVar1 == 0) break;
    }
    iVar3 = 0x209d;
    FUN_32b2_252e();
    if (iVar3 != 0) {
      puVar2 = (undefined1 *)FUN_32b2_2fe6(0xbf48,10);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
      }
      iVar3 = 0x32b2;
      iVar1 = FUN_32b2_21c4(0xbf48);
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        return 0;
      }
      FUN_32b2_2854(param_2,0xbf48);
      return param_2;
    }
  }
  return 0;
}


