/* 2bb4:264f */

void __cdecl16far
FUN_2bb4_264f(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
             undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 param_16,
             int param_17)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0x2bb4;
  local_6 = 0xe19a;
  FUN_32b2_02bc();
  local_4 = param_16;
  local_6 = param_15;
  local_8 = param_14;
  local_a = param_13;
  iVar2 = FUN_2bb4_200e(&local_4,&local_8,&local_6,&local_a,param_1,param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  uVar1 = local_a;
  if (iVar2 == 0) {
    if (param_17 == 1) {
      local_4 = *(undefined2 *)(*(int *)0xa6c * 2 + 0xa88);
    }
    else {
      local_4 = *(undefined2 *)0xa8a;
    }
    if (param_17 == 2) {
      local_6 = 2;
    }
    else {
      local_6 = 1;
    }
    local_8 = local_a;
    local_a = local_6;
    FUN_2b6e_0231(local_4,uVar1);
  }
  return;
}


