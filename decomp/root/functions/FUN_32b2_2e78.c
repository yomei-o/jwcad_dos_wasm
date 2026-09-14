/* 32b2:2e78 */

int __cdecl16far
FUN_32b2_2e78(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int local_18;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  int local_a;
  int local_6;
  
  uVar2 = (int)(param_1 + 3U) >> 0xf;
  iVar1 = ((int)((param_1 + 3U ^ uVar2) - uVar2) >> 2 ^ uVar2) - uVar2;
  local_18 = FUN_32b2_4e12(iVar1,iVar1 >> 0xf,0x5180,1);
  iVar1 = *(int *)(param_2 * 2 + 0x7d86);
  if ((param_1 % 4 == 0) && (2 < param_2)) {
    iVar1 = iVar1 + 1;
  }
  local_6 = param_3 + iVar1;
  FUN_32b2_2cf4();
  uVar7 = 0;
  uVar6 = 0x3c;
  uVar5 = 0;
  uVar4 = 0x3c;
  uVar2 = param_1 * 0x16d + param_3 + iVar1;
  uVar3 = FUN_32b2_4e12(uVar2 + 0xe44,((int)uVar2 >> 0xf) + (uint)(0xf1bb < uVar2),0x18,0);
  uVar3 = FUN_32b2_4e12(param_4 + (uint)uVar3,
                        ((int)param_4 >> 0xf) + (int)((ulong)uVar3 >> 0x10) +
                        (uint)CARRY2(param_4,(uint)uVar3),uVar4,uVar5);
  iVar1 = FUN_32b2_4e12(param_5 + (uint)uVar3,
                        ((int)param_5 >> 0xf) + (int)((ulong)uVar3 >> 0x10) +
                        (uint)CARRY2(param_5,(uint)uVar3),uVar6,uVar7);
  local_18 = local_18 + param_6 + iVar1 + *(int *)0x7dc0;
  local_a = param_1 + 0x50;
  local_c = param_2 + -1;
  local_10 = param_4;
  if (*(int *)0x7dc4 != 0) {
    iVar1 = FUN_32b2_2dae(local_14);
    if (iVar1 != 0) {
      local_18 = local_18 + -0xe10;
    }
  }
  return local_18;
}


