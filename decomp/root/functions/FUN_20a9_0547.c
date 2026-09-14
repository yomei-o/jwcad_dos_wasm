/* 20a9:0547 */

void __cdecl16far FUN_20a9_0547(void)

{
  int iVar1;
  undefined2 in_CX;
  byte bVar2;
  uint local_a;
  uint local_8;
  uint uStack_6;
  uint *puStack_4;
  
  bVar2 = (byte)((uint)in_CX >> 8);
  puStack_4 = (uint *)0x20a9;
  uStack_6 = 0xfe2;
  FUN_32b2_02bc();
  puStack_4 = (uint *)0x1ce3;
  uStack_6 = 0x1ce6;
  local_8 = 0x32b2;
  local_a = 0xfef;
  iVar1 = FUN_32b2_0748();
  if (iVar1 != 0) {
    puStack_4 = &local_a;
    uStack_6 = (uint)bVar2 << 8;
    local_8 = 0x32b2;
    local_a = 0x1008;
    FUN_20a9_010a();
    puStack_4 = (uint *)(local_8 & 0xff);
    uStack_6 = local_a >> 8;
    local_8 = local_a & 0xff;
    local_a = 0x1cf1;
    FUN_32b2_075e(iVar1);
  }
  puStack_4 = (uint *)0x32b2;
  uStack_6 = 0x1035;
  FUN_32b2_252e();
  return;
}


