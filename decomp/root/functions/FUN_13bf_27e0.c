/* 13bf:27e0 */

uint __cdecl16far
FUN_13bf_27e0(int *param_1,int *param_2,int *param_3,int **param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined2 unaff_DS;
  int *local_c;
  int *local_a;
  int *local_8;
  int **local_6;
  
  piVar4 = (int *)0x32b2;
  local_6 = (int **)0x63db;
  FUN_32b2_02bc();
  local_c = (int *)0x0;
  while( true ) {
    *(undefined1 *)0x15a = 0;
    *(undefined1 *)0x15b = 0;
    local_8 = (int *)0x63ee;
    local_6 = (int **)piVar4;
    uVar1 = FUN_1def_2742();
    if (uVar1 != 0) break;
    *param_5 = 0;
    *param_6 = 0;
    local_6 = param_4;
    local_8 = param_3;
    local_a = param_2;
    local_c = param_1;
    piVar4 = (int *)0x1885;
    FUN_1885_546d();
    local_6 = (int **)(*param_2 + *param_1);
    *(undefined1 *)0x15b = (char)local_6;
    if ((((*(char *)0xb782 != '\0') || (*(int *)0xa5c < *param_3)) ||
        ((*param_3 < 8 || (((int)*param_4 < 0x40 || (0x12e < (int)*param_4)))))) ||
       (*(int *)0x158 != 0)) {
      local_8 = (int *)0x0;
      goto LAB_13bf_293d;
    }
    uVar3 = (int)(*param_4 + -0x20) >> 0xf;
    iVar2 = ((int)(((uint)(*param_4 + -0x20) ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3;
    local_8 = (int *)(iVar2 + 1);
    if (*param_3 < 0x45) {
      local_8 = (int *)(iVar2 + 0x10);
    }
    if (local_6 != (int **)0x0) goto LAB_13bf_2912;
    local_6 = &local_c;
    local_a = (int *)0x1;
    local_c = (int *)0x1885;
    FUN_13bf_1c1a();
  }
  do {
    local_6 = (int **)0x1def;
    local_8 = (int *)0x63fa;
    iVar2 = FUN_1def_2742();
  } while (iVar2 != 0);
  *param_5 = uVar1 & 0xff;
  *param_6 = uVar1 & 0xff00;
  *param_1 = 0;
  *param_2 = 0;
  if ((((*(int *)0xca0 != 0) || (*param_3 <= *(int *)0xa5c)) || ((int)*param_4 <= *(int *)0xa5e)) ||
     (*(int *)0xa60 <= (int)*param_4)) {
    *param_3 = 400;
    *param_4 = (int *)0xc8;
  }
  *(undefined1 *)0x15a = 1;
  local_6 = (int **)0xb5b6;
  local_8 = (int *)0x1def;
  piVar4 = (int *)0x32b2;
  local_a = (int *)0x6463;
  FUN_32b2_2ca0();
LAB_13bf_293d:
  if (local_c != (int *)0x0) {
    local_6 = &local_c;
    local_8 = (int *)0x0;
    local_a = (int *)0x0;
    local_c = piVar4;
    FUN_13bf_1c1a();
  }
  if (*param_5 != 0) {
    local_a = (int *)0x1;
    do {
      if ((uint)*(byte *)(local_a + 0x76e) == *param_5) {
        local_8 = local_a;
      }
      local_a = (int *)((int)local_a + 1);
    } while ((int)local_a < 0x1f);
  }
  if (((int)local_8 < 1) || (0x1e < (int)local_8)) {
    local_8 = (int *)0x0;
  }
  if ((((*(char *)0x124 != '\0') && (local_8 == (int *)0x0)) && (*param_5 != 0)) &&
     ((*param_5 == 0x47 || (*param_5 == 0x67)))) {
    local_8 = (int *)0x20;
  }
  if (local_8 == (int *)0x0) {
    if ((*param_5 == 0x1b) ||
       (((local_6 != (int **)0x0 && (*param_3 < 0x25)) && ((int)*param_4 <= *(int *)0xa5e)))) {
      do {
        do {
          local_6 = param_4;
          local_8 = param_3;
          local_a = param_2;
          local_c = param_1;
          FUN_1885_546d();
        } while (*param_1 != 0);
      } while (*param_2 != 0);
      uVar1 = 0xffff;
    }
  }
  else {
    *(undefined2 *)0xa62 = local_8;
    *(undefined2 *)0x158 = 1;
    uVar1 = 0xd499;
  }
  return uVar1;
LAB_13bf_2912:
  do {
    do {
      local_6 = param_4;
      local_8 = param_3;
      local_a = param_2;
      local_c = param_1;
      piVar4 = (int *)0x1885;
      FUN_1885_546d();
    } while (*param_1 != 0);
  } while (*param_2 != 0);
  goto LAB_13bf_293d;
}


