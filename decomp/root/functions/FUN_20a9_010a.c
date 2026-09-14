/* 20a9:010a */

void __cdecl16far FUN_20a9_010a(byte param_1,undefined1 *param_2)

{
  undefined2 unaff_DS;
  undefined1 local_1e [4];
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_17;
  undefined1 local_10;
  undefined1 local_f;
  uint local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x20a9;
  puStack_6 = (undefined1 *)0xba5;
  FUN_32b2_02bc();
  local_f = 0x10;
  local_10 = 0x15;
  local_e = (uint)param_1;
  puStack_4 = local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x10;
  uStack_a = 0x32b2;
  uStack_c = 0xbc6;
  FUN_32b2_247a();
  param_2[1] = local_19;
  param_2[2] = local_1a;
  *param_2 = local_17;
  return;
}


