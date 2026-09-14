/* 32b2:4514 */

undefined2 __cdecl16far FUN_32b2_4514(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  char local_124 [260];
  int local_20;
  undefined2 local_1e [6];
  int local_12;
  undefined1 local_10;
  undefined1 local_f;
  char local_a;
  char *local_8;
  
  if (param_1 == 0) {
    param_1 = FUN_32b2_44da();
  }
  local_124[0] = (char)param_1 + '@';
  local_124[1] = 0x3a;
  local_124[2] = 0x5c;
  local_8 = local_124 + 3;
  local_f = 0x47;
  local_a = (char)param_1;
  FUN_32b2_29ac(&local_10,local_1e);
  if (local_12 == 0) {
    local_20 = FUN_32b2_21c4(local_124);
    local_20 = local_20 + 1;
    if (param_2 == 0) {
      if (param_3 < local_20) {
        param_3 = local_20;
      }
      param_2 = thunk_FUN_32b2_1f83(param_3);
      if (param_2 == 0) {
        *(undefined2 *)0x7a34 = 0xc;
        return 0;
      }
    }
    if (local_20 <= param_3) {
      uVar1 = FUN_32b2_2166(param_2,local_124);
      return uVar1;
    }
    *(undefined2 *)0x7a34 = 0x22;
  }
  else {
    *(undefined2 *)0x7a34 = 0xd;
    *(undefined2 *)0x7a3f = local_1e[0];
  }
  return 0;
}


