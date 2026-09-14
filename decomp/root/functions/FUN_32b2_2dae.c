/* 32b2:2dae */

undefined2 __cdecl16far FUN_32b2_2dae(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  int local_6;
  
  if ((*(int *)(param_1 + 8) < 3) || (9 < *(int *)(param_1 + 8))) goto LAB_32b2_2e6f;
  if ((*(int *)(param_1 + 8) < 4) || (8 < *(int *)(param_1 + 8))) {
    uVar4 = *(int *)(param_1 + 10) + 0x76c;
    if (((int)uVar4 < 0x7c3) || (*(int *)(param_1 + 8) != 3)) {
      local_6 = *(int *)(*(int *)(param_1 + 8) * 2 + 0x7d8a);
    }
    else {
      local_6 = *(int *)(*(int *)(param_1 + 8) * 2 + 0x7d88) + 7;
    }
    if ((uVar4 & 3) == 0) {
      local_6 = local_6 + 1;
    }
    uVar4 = *(int *)(param_1 + 10) - 0x45;
    uVar2 = (int)uVar4 >> 0xf;
    local_6 = (int)((((int)((uVar4 ^ uVar2) - uVar2) >> 2 ^ uVar2) - uVar2) +
                    (*(int *)(param_1 + 10) + -0x46) * 0x16d + local_6 + 4) % 7 - local_6;
    iVar3 = -local_6;
    if (*(int *)(param_1 + 8) == 3) {
      if ((iVar3 < *(int *)(param_1 + 0xe)) ||
         ((-*(int *)(param_1 + 0xe) == local_6 && (1 < *(int *)(param_1 + 4))))) goto LAB_32b2_2e5b;
    }
    else if ((*(int *)(param_1 + 0xe) < iVar3) ||
            ((*(int *)(param_1 + 0xe) == iVar3 && (*(int *)(param_1 + 4) < 1)))) goto LAB_32b2_2e5b;
LAB_32b2_2e6f:
    uVar1 = 0;
  }
  else {
LAB_32b2_2e5b:
    uVar1 = 1;
  }
  return uVar1;
}


