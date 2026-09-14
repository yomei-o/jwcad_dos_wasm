/* 21f2:0786 */

undefined2 __cdecl16far
FUN_21f2_0786(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 *param_5)

{
  undefined2 unaff_DS;
  undefined2 local_26 [6];
  int local_1a;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined1 *puStack_8;
  undefined2 *puStack_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x21f2;
  puStack_6 = (undefined2 *)0x26b1;
  FUN_32b2_02bc();
  local_17 = 0x3f;
  local_12 = param_2;
  local_14 = param_4;
  local_16 = param_1;
  local_4 = &local_a;
  puStack_6 = local_26;
  puStack_8 = &local_18;
  local_a = 0x32b2;
  uStack_c = 0x26de;
  FUN_32b2_29f4();
  if (local_1a == 0) {
    *param_5 = local_26[0];
    local_26[0] = 0;
  }
  return local_26[0];
}


