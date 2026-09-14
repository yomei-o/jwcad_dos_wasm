/* 1885:3c2b */

void __cdecl16far
FUN_1885_3c2b(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             uint param_5,uint param_6)

{
  undefined2 local_6;
  undefined2 local_4;
  
  FUN_32b2_02bc();
  local_4 = 1;
  for (local_6 = 0; local_6 < 3; local_6 = local_6 + 1) {
    if ((param_5 & local_4) != 0) {
      local_4 = param_6;
      FUN_1def_12ae(param_1,param_2,param_3,param_4);
    }
    local_4 = local_4 << 1;
  }
  return;
}


