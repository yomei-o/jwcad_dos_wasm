/* 1000:0042 */

char __cdecl16far FUN_1000_0042(undefined1 param_1)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 local_1e;
  byte local_1d;
  undefined2 local_10;
  undefined1 local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x1000;
  puStack_6 = (undefined2 *)0x4d;
  FUN_32b2_02bc();
  local_10 = 0x7001;
  local_e = param_1;
  puStack_4 = &local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x67;
  uStack_a = 0x32b2;
  uStack_c = 0x69;
  cVar2 = FUN_32b2_247a();
  if (local_1d != 0) {
    cVar2 = '\0';
    puStack_4 = (undefined1 *)(uint)local_1d;
    pcVar1 = (code *)swi(0x3f);
    cVar3 = (*pcVar1)();
    cVar2 = (cVar3 + '\f') - cVar2;
  }
  return cVar2;
}


