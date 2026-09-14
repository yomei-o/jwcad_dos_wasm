/* 20a9:03e1 */

void __cdecl16far
FUN_20a9_03e1(undefined2 param_1,undefined2 param_2,int param_3,int param_4,uint param_5)

{
  undefined1 local_24 [16];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  uint local_4;
  
  local_4 = 0x20a9;
  puStack_6 = (undefined1 *)0xe7c;
  FUN_32b2_02bc();
  if (0x1f < param_5) {
    if (param_5 < 0x100) {
      local_4 = param_5;
      puStack_6 = local_24;
      puStack_8 = (undefined1 *)0x32b2;
      iStack_a = 0xe94;
      FUN_20a9_03c3();
    }
    else {
      local_4 = param_5;
      puStack_6 = local_24;
      puStack_8 = (undefined1 *)0x32b2;
      iStack_a = 0xea8;
      FUN_20a9_03a5();
    }
    if (param_3 == param_4) {
      local_4 = param_3;
      puStack_6 = local_24;
      puStack_8 = (undefined1 *)0x10;
      iStack_a = param_3;
      iStack_c = param_2;
      uStack_e = param_1;
      uStack_10 = 0x32b2;
      uStack_12 = 0xeed;
      FUN_20a9_028a();
    }
    else {
      local_4 = param_4;
      puStack_6 = (undefined1 *)param_3;
      puStack_8 = local_24;
      iStack_a = 0x10;
      iStack_c = param_4;
      uStack_e = param_2;
      uStack_10 = param_1;
      uStack_12 = 0x32b2;
      uStack_14 = 0xed0;
      FUN_20a9_014e();
    }
  }
  return;
}


