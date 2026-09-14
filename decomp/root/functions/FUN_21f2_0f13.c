/* 21f2:0f13 */

void __cdecl16far FUN_21f2_0f13(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 local_a;
  
  FUN_32b2_02bc();
  FUN_1885_5256(0);
  if (param_1 == 0) {
    local_a = -0xf;
  }
  else {
    local_a = -8;
  }
  local_a = param_3 * 0x10 + -1 + local_a;
  do {
    iVar1 = local_a;
    local_a = -1;
    FUN_1def_12ae(0xffff,2);
  } while (iVar1 + 1 < 8);
  return;
}


