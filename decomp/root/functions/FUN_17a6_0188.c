/* 17a6:0188 */

undefined2 __cdecl16far FUN_17a6_0188(uint param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 in_DX;
  undefined2 uVar4;
  undefined2 unaff_DS;
  uint local_a;
  int local_8;
  
  FUN_32b2_02bc();
  if ((0 < param_2) || ((-1 < param_2 && (param_1 != 0)))) {
    iVar2 = FUN_1000_013f(param_1,param_2);
    if (((*(uint *)(iVar2 + 0x14) & 0x40) != 0) || ((*(uint *)(iVar2 + 0x14) & 0x80) != 0)) {
      local_8 = param_2;
      local_a = param_1;
      iVar2 = param_2;
      while ((iVar3 = local_8, uVar1 = local_a, 0 < local_8 || ((-1 < local_8 && (1 < local_a))))) {
        local_8 = 0x1000;
        local_a = 0x7c92;
        iVar3 = FUN_1000_013f(uVar1,iVar3);
        if (((*(uint *)(iVar3 + 0x14) & 0x40) != 0) && ((*(uint *)(iVar3 + 0x14) & 0x80) == 0))
        goto LAB_17a6_01ea;
        iVar2 = 0x1000;
        local_8 = 0x1000;
        local_a = 0x7cba;
        iVar3 = FUN_1000_013f(0x7c91,0x1000);
        uVar1 = *(uint *)(iVar3 + 0x14);
        if ((((uVar1 & 0x40) == 0) && ((uVar1 & 0x80) == 0)) ||
           (((uVar1 & 0x40) != 0 && ((uVar1 & 0x80) != 0)))) goto LAB_17a6_01ea;
        local_8 = 0x1000;
        local_a = 0x7cb9;
      }
      local_a = 1;
      local_8 = 0;
LAB_17a6_01ea:
      *param_3 = local_a;
      param_3[1] = local_8;
      local_8 = param_2;
      local_a = param_1;
      while ((iVar2 = local_8, uVar1 = local_a, local_8 < *(int *)0x14a ||
             ((local_8 <= *(int *)0x14a && (local_a < *(uint *)0x148))))) {
        local_8 = 0x1000;
        local_a = 0x7cf0;
        iVar3 = FUN_1000_013f(uVar1,iVar2);
        if (((*(uint *)(iVar3 + 0x14) & 0x40) != 0) && ((*(uint *)(iVar3 + 0x14) & 0x80) != 0))
        goto LAB_17a6_02a5;
        uVar4 = 0x1000;
        local_8 = 0x1000;
        local_a = 0x7d68;
        iVar2 = FUN_1000_013f(0x7cf1,0x1000);
        uVar1 = *(uint *)(iVar2 + 0x14);
        if ((((uVar1 & 0x40) == 0) && ((uVar1 & 0x80) == 0)) ||
           (((uVar1 & 0x40) != 0 && ((uVar1 & 0x80) == 0)))) goto LAB_17a6_02a5;
        local_8 = 0x1000;
        local_a = 0x7d69;
      }
      local_a = *(int *)0x148;
      local_8 = *(int *)0x14a;
LAB_17a6_02a5:
      *param_4 = local_a;
      param_4[1] = local_8;
      if ((*param_3 != local_a) || (param_3[1] != local_8)) {
        return 1;
      }
      iVar2 = param_3[1];
      iVar3 = FUN_1000_013f(*param_3,iVar2);
      *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) & 0xbf;
      iVar3 = FUN_1000_013f(0x7d31,0x1000);
      *(byte *)(iVar3 + 0x14) = *(byte *)(iVar3 + 0x14) & 0x7f;
    }
  }
  return 0;
}


