/* 21f2:2750 */

undefined2 __cdecl16far FUN_21f2_2750(undefined2 param_1)

{
  int iVar1;
  undefined2 in_DX;
  undefined1 uVar2;
  undefined2 uStack_4;
  
  FUN_32b2_02bc();
  iVar1 = FUN_1000_013f(param_1);
  uVar2 = *(byte *)(iVar1 + 0x11) < 0x5a;
  if ((bool)uVar2) {
    FUN_32b2_6cc6();
    FUN_32b2_6ca8();
    FUN_32b2_7016();
    FUN_32b2_6fc7();
    iVar1 = 0x46c8;
    FUN_32b2_7191();
    if ((bool)uVar2) {
      FUN_32b2_6cc6();
      FUN_32b2_6ca8();
      FUN_32b2_7016();
      FUN_32b2_6fc7();
      iVar1 = 0x46f3;
      FUN_32b2_7191();
      if ((bool)uVar2) {
        uRam00037227 = 0x50;
        return 1;
      }
    }
    uStack_4 = 0x32b2;
    in_DX = uStack_4;
  }
  *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xef;
                    /* WARNING: Read-only address (ram,0x00037227) is written */
  return 0;
}


