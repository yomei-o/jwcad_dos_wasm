/* 17a6:0532 */

undefined2 __cdecl16far FUN_17a6_0532(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  *(undefined2 *)0xbc0 = 1;
  iVar1 = FUN_1000_03ef(param_2);
  if (*(byte *)(iVar1 + 9) < 0x5a) {
    iVar1 = FUN_21f2_06d1(*(undefined1 *)(iVar1 + 8));
    if (iVar1 == 0) {
                    /* WARNING: Read-only address (ram,0x00017fdc) is written */
      uRam00017fdc = 5;
    }
    else {
      FUN_2bb4_3645();
      FUN_1885_5256(0);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


