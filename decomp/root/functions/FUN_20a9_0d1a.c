/* 20a9:0d1a */

void __cdecl16far
FUN_20a9_0d1a(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,int param_6,
             int param_7)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  int iVar3;
  
  FUN_32b2_02bc();
  if ((*(byte *)(param_7 + 0x5b) & 0x80) == 0) {
    *(int *)(param_7 + 0x5a) = *(int *)(param_7 + 0x5a) << 1;
  }
  else {
    local_6 = 0;
    while ((local_6 < 5 && (*(int *)(param_7 + local_6 * 2 + 0x28) != -1))) {
      local_8 = param_3;
      iVar1 = *(int *)(param_7 + local_6 * 2 + 0x28);
      iVar3 = param_1;
      if (iVar1 == 0) {
LAB_20a9_0d62:
        local_8 = param_3 + iVar3;
        iVar3 = param_4 - param_2;
      }
      else {
        if (iVar1 == 1) {
          iVar3 = -param_1;
          goto LAB_20a9_0d62;
        }
        if (iVar1 == 2) {
          iVar2 = -param_1;
LAB_20a9_0d88:
          local_8 = param_3 + iVar2;
          iVar3 = param_4 + param_2;
        }
        else {
          iVar3 = param_4;
          iVar2 = param_1;
          if (iVar1 == 3) goto LAB_20a9_0d88;
        }
      }
      if (((((local_8 <= *(int *)(param_7 + local_6 * 2 + 0x32)) &&
            (*(int *)(param_7 + local_6 * 2 + 0x3c) <= local_8)) &&
           (iVar3 <= *(int *)(param_7 + local_6 * 2 + 0x46))) &&
          ((*(int *)(param_7 + local_6 * 2 + 0x50) <= iVar3 && (local_8 <= *(int *)0xc16e)))) &&
         ((*(int *)0xc16c <= local_8 && ((iVar3 <= *(int *)0xc276 && (*(int *)0xc270 <= iVar3))))))
      {
        local_6 = param_6;
        FUN_20a9_075c(param_5,iVar3);
      }
      local_6 = local_6 + 1;
    }
    *(int *)(param_7 + 0x5a) = *(int *)(param_7 + 0x5a) << 1;
    *(byte *)(param_7 + 0x5a) = *(byte *)(param_7 + 0x5a) | 1;
  }
  return;
}


