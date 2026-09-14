/* 32b2:3fda */

undefined2 __cdecl16far
FUN_32b2_3fda(undefined2 param_1,undefined1 *param_2,undefined2 param_3,undefined2 param_4,
             int param_5)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_8c [116];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 **ppuStack_10;
  undefined1 *puStack_e;
  undefined1 *local_c;
  undefined1 *local_a;
  undefined2 local_8;
  
  local_8 = 0x6b0c;
  FUN_32b2_02bc();
  if (param_5 == 0) {
    local_8 = 0x88e0;
    local_a = (undefined1 *)0x32b2;
    local_c = (undefined1 *)0x6b22;
    param_2 = (undefined1 *)FUN_32b2_238c();
    if (param_2 == (undefined1 *)0x0) {
      *(undefined2 *)0x7a34 = 8;
      return 0xffff;
    }
  }
  else {
    local_a = (undefined1 *)0x0;
  }
  local_8 = local_a;
  local_a = (undefined1 *)0x0;
  local_c = local_8c;
  puStack_e = &stack0xfffa;
  ppuStack_10 = &local_c;
  uStack_12 = param_4;
  uStack_14 = param_3;
  uStack_16 = 0x32b2;
  uStack_18 = 0x6b59;
  iVar1 = FUN_32b2_3c28();
  if (iVar1 == -1) {
    return 0xffff;
  }
  local_a = local_8c;
  puStack_e = (undefined1 *)param_1;
  ppuStack_10 = (undefined1 **)0x32b2;
  uStack_12 = 0x6b70;
  local_c = param_2;
  local_8 = FUN_32b2_3eaa();
  local_a = local_c;
  local_c = (undefined1 *)0x32b2;
  puStack_e = (undefined1 *)0x6b7e;
  thunk_FUN_32b2_1f62();
  return local_8;
}


