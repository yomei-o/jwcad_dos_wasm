/* 1def:0000 */

void __cdecl16far
FUN_1def_0000(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6)

{
  FUN_32b2_02bc();
  if (param_5 < 9) {
    FUN_20a9_07dc(param_1,param_2,param_3,param_4,param_5,0,param_6);
  }
  else {
    FUN_20a9_07dc(param_1,param_2,param_3,param_4,1 << ((char)param_5 - 8U & 0x1f),0x18,param_6);
  }
  return;
}


