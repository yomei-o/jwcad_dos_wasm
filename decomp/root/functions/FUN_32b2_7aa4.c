/* 32b2:7aa4 */

void __cdecl16far FUN_32b2_7aa4(undefined2 *param_1,int param_2,int param_3,undefined2 param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  char *local_4;
  
  piVar1 = (int *)FUN_32b2_73ca(*param_1,param_1[1],param_1[2],param_1[3]);
  *(undefined2 *)0xb2e4 = piVar1;
  *(int *)0x8ea0 = piVar1[1] + -1;
  pcVar2 = (char *)((uint)(*piVar1 == 0x2d) + param_2);
  FUN_32b2_22fc(pcVar2,param_3,piVar1);
  iVar3 = *(int *)(*(int *)0xb2e4 + 2) + -1;
  *(bool *)0x8ea2 = *(int *)0x8ea0 < iVar3;
  *(int *)0x8ea0 = iVar3;
  if ((-5 < iVar3) && (iVar3 < param_3)) {
    if (*(char *)0x8ea2 != '\0') {
      do {
        local_4 = pcVar2;
        pcVar2 = local_4 + 1;
      } while (*local_4 != '\0');
      local_4[-1] = '\0';
    }
    FUN_32b2_7a82(param_1,param_2,param_3);
    return;
  }
  FUN_32b2_7966(param_1,param_2,param_3,param_4);
  return;
}


