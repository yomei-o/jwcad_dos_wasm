/* 20a9:05d3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_20a9_05d3(void)

{
  int iVar1;
  undefined2 unaff_DS;
  byte local_20;
  byte local_1e [14];
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  byte *pbStack_4;
  
  pbStack_4 = (byte *)0x20a9;
  puStack_6 = (undefined1 *)0x106e;
  FUN_32b2_02bc();
  local_f = 0xf;
  pbStack_4 = local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x10;
  uStack_a = 0x32b2;
  uStack_c = 0x1083;
  FUN_32b2_247a();
  if (*(int *)0x1cc6 == -1) {
    *(uint *)0x1cc6 = (uint)local_1e[0];
  }
  if (*(int *)0x1cc4 == -1) {
    *(undefined2 *)0x1cc4 = *(undefined2 *)0x1cc6;
  }
  local_f = 0;
  local_10 = *(undefined1 *)0x1cc4;
  pbStack_4 = local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x10;
  uStack_a = 0x32b2;
  uStack_c = 0x10bd;
  FUN_32b2_247a();
  *(undefined2 *)0x1cc2 = _DAT_0000_044a;
  *(int *)0xc16a = DAT_0000_0484 - 1;
  iVar1 = _DAT_0000_0485;
  *(int *)0xbea2 = _DAT_0000_0485;
  *(int *)0x1b42 = ((uint)(iVar1 * *(int *)0xc16a) >> 4) + 2;
  if (*(byte *)0x129 / 10 < 0xf) {
    *(int *)0x1b42 = -((uint)(*(byte *)0x129 / 10) - *(int *)0x1b42);
  }
  if (*(int *)0x1b42 < 0x1c) {
    *(undefined2 *)0x1b42 = 0x1b;
  }
  *(int *)0x1b3e = *(int *)0x1cc2 * 8 + -1;
  iVar1 = *(int *)0x1b42;
  *(int *)0x1b40 = iVar1 * 0x10 + -1;
  iVar1 = iVar1 * 0x10 + -0x11;
  *(int *)0xa60 = iVar1;
  *(int *)0xa5a = iVar1;
  local_20 = 0;
  do {
    puStack_6 = (undefined1 *)CONCAT11((char)((uint)iVar1 >> 8),local_20);
    uStack_8 = 0x32b2;
    uStack_a = 0x1145;
    pbStack_4 = puStack_6;
    iVar1 = FUN_20a9_005e();
    local_20 = local_20 + 1;
  } while (local_20 < 0x10);
  pbStack_4 = (byte *)0x32b2;
  puStack_6 = (undefined1 *)0x1154;
  FUN_20a9_04ba();
  return;
}


