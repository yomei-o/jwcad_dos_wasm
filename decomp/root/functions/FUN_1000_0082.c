/* 1000:0082 */

char __cdecl16far FUN_1000_0082(undefined1 param_1,undefined2 param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 local_1e;
  byte local_1d;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x1000;
  puStack_6 = (undefined1 *)0x8d;
  FUN_32b2_02bc();
  local_f = 0x44;
  local_10 = param_1;
  local_e = param_2;
  puStack_4 = &local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x67;
  local_a = 0x32b2;
  uStack_c = 0xb4;
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


