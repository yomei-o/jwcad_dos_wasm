/* 28b3:0260 */

int __cdecl16far FUN_28b3_0260(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 local_a;
  undefined2 local_6;
  
  FUN_32b2_02bc();
  local_a = FUN_32b2_21c4(param_1);
  iVar2 = local_a;
  for (local_6 = 0; local_6 < local_a; local_6 = local_6 + 1) {
    iVar2 = local_6 >> 0xf;
    local_a = 0x32b2;
    iVar1 = FUN_28b3_0126(param_1);
    if (iVar1 != 0) {
      iVar2 = iVar2 + -2;
    }
    if (3 < iVar1 % 10) {
      iVar2 = iVar2 + -1;
    }
    if (10 < iVar1) {
      iVar2 = iVar2 + -1;
    }
  }
  return iVar2;
}


