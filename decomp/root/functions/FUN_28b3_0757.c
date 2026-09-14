/* 28b3:0757 */

int __cdecl16far FUN_28b3_0757(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  
  FUN_32b2_02bc();
  local_c = 0;
  local_10 = 0;
  FUN_3a75_00b2(param_1);
  iVar1 = FUN_32b2_21c4(param_1,*(undefined2 *)(param_3 + 2));
  *param_2 = iVar1;
  iVar1 = 0x32b2;
  local_a = -0x6d32;
  iVar2 = FUN_28b3_0260(param_1);
  local_e = iVar2 + -1;
  if (*(char *)(param_1 + -0x6d32) == -0x5b) {
    iVar1 = param_1;
    iVar3 = FUN_3a75_02e8(param_1,0x92ce);
    if (iVar3 == 2) {
      return iVar1;
    }
    local_c = -0x6d1a;
    local_10 = 1;
    local_a = 0x32b1;
  }
  for (; (((char *)(local_a + param_1))[-1] == -0x7f && (*(char *)(local_a + param_1) == 'E'));
      local_a = local_a + -2) {
    local_c = local_c + 2;
    local_10 = local_10 + 1;
  }
  if (0 < local_c) {
    iVar1 = FUN_3a75_02e8(param_1,local_a);
    if (iVar1 == 2) {
      local_e = iVar2 + -2;
    }
    iVar1 = param_1;
    if (-0x6cd6 < local_e) {
      FUN_32b2_6d9b();
      FUN_32b2_6d9b();
      FUN_32b2_7187(0x32b2);
      FUN_32b2_704d();
      iVar1 = -0x6c97;
      FUN_32b2_6e63(0x32b2);
      *param_2 = *param_2 + 0x6cd6;
      iVar1 = iVar1 - local_10;
    }
  }
  return iVar1;
}


