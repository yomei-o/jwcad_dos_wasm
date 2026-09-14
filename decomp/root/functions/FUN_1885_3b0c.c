/* 1885:3b0c */

void __cdecl16far FUN_1885_3b0c(undefined2 param_1,int param_2)

{
  int iVar1;
  int local_6;
  
  FUN_32b2_02bc();
  FUN_1885_5256(0);
  local_6 = (param_2 + -1) * 0x10;
  iVar1 = local_6 + 0xf;
  while (local_6 <= iVar1) {
    iVar1 = local_6;
    FUN_1def_0000(0xffff,local_6,local_6);
    local_6 = 1;
  }
  return;
}


