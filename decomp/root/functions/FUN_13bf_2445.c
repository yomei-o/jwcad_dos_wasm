/* 13bf:2445 */

undefined2 __cdecl16far FUN_13bf_2445(int param_1,int *param_2)

{
  undefined2 unaff_DS;
  uint local_6;
  int iVar1;
  
  FUN_32b2_02bc();
  iVar1 = 0;
  if (*(byte *)0x74 < 4) {
    iVar1 = 0x32b2;
    local_6 = FUN_1885_5307();
    local_6 = local_6 & 0xe;
  }
  else if (param_1 == 0x75) {
    local_6 = 2;
  }
  else if (param_1 == 0x69) {
    local_6 = 8;
  }
  else {
    if (param_1 != 0x6f) {
      return 0;
    }
    local_6 = 4;
  }
  if (local_6 == 2) {
    if (*param_2 != -1) {
      iVar1 = 1;
      *param_2 = -1;
    }
  }
  else if (local_6 == 8) {
    if (*param_2 != 1) {
      iVar1 = 1;
      *param_2 = 1;
    }
  }
  else if (local_6 == 4) {
    if (*param_2 != 2) {
      iVar1 = 1;
      *param_2 = 2;
    }
  }
  else if (*param_2 != 0) {
    iVar1 = 1;
    *param_2 = 0;
  }
  if ((iVar1 != 0) && (*(int *)0xc1a != -5)) {
    FUN_13bf_17e7(0);
    if (*param_2 != 0) {
      *(int *)0xc1e = *param_2;
      FUN_13bf_17e7(2);
    }
    *(undefined2 *)0xc22 = 1;
    return 1;
  }
  return 0;
}


