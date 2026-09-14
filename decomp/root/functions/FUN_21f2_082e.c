/* 21f2:082e */

int __cdecl16far FUN_21f2_082e(undefined2 param_1,undefined2 param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_c;
  undefined2 local_a;
  uint local_8;
  uint local_6;
  int *local_4;
  
  local_4 = (int *)0x21f2;
  local_6 = 0x2759;
  FUN_32b2_02bc();
  local_a = 0;
  *param_4 = 0;
  while( true ) {
    if (param_3 <= local_a) {
      return 0;
    }
    local_4 = &local_c;
    local_a = param_3 - local_a;
    if (0x4000 < local_a) {
      local_a = 0x4000;
    }
    local_c = *(int *)0xd12;
    local_8 = local_a;
    local_6 = local_a;
    iVar1 = FUN_21f2_07da();
    if (iVar1 != 0) break;
    *param_4 = *param_4 + local_c;
    local_a = CONCAT11(local_a._1_1_ + '@',(undefined1)local_a);
  }
  return iVar1;
}


