/* 2b6e:004d */

undefined2 __cdecl16far FUN_2b6e_004d(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  FUN_32b2_02bc();
  if (((((*param_3 != *param_1) || (*param_4 != *param_2)) &&
       ((*(int *)0xc16c <= *param_1 || (*(int *)0xc16c <= *param_3)))) &&
      (((*param_1 <= *(int *)0xc16e || (*param_3 <= *(int *)0xc16e)) &&
       ((*(int *)0xc270 <= *param_2 || (*(int *)0xc270 <= *param_4)))))) &&
     ((*param_2 <= *(int *)0xc276 || (*param_4 <= *(int *)0xc276)))) {
    iVar2 = *param_3;
    iVar4 = iVar2 - *param_1 >> 0xf;
    iVar1 = *param_4 - *param_2;
    iVar5 = iVar1 >> 0xf;
    if (iVar2 < *param_1) {
      iVar3 = *param_1;
      *param_1 = iVar2;
      *param_3 = iVar3;
      iVar2 = *param_2;
      *param_2 = *param_4;
      *param_4 = iVar2;
    }
    if (*param_1 < *(int *)0xc16c) {
      iVar1 = *(int *)0xc16c - *param_1;
      iVar5 = iVar4;
      iVar2 = iVar4;
      uVar6 = FUN_32b2_4e12(iVar1,iVar1 >> 0xf,iVar4,iVar4);
      iVar1 = (int)((ulong)uVar6 >> 0x10);
      iVar2 = FUN_32b2_4d78(uVar6,iVar5,iVar2);
      *param_2 = *param_2 + iVar2;
      *param_1 = *(int *)0xc16c;
    }
    if (*(int *)0xc16e < *param_3) {
      iVar1 = -(*(int *)0xc16e - *param_3);
      iVar5 = iVar4;
      iVar2 = iVar4;
      uVar6 = FUN_32b2_4e12(iVar1,iVar1 >> 0xf,iVar4,iVar4);
      iVar1 = (int)((ulong)uVar6 >> 0x10);
      iVar2 = FUN_32b2_4d78(uVar6,iVar5,iVar2);
      *param_4 = *param_4 - iVar2;
      *param_3 = *(int *)0xc16e;
    }
    if (((*(int *)0xc270 <= *param_2) || (*(int *)0xc270 <= *param_4)) &&
       ((*param_2 <= *(int *)0xc276 || (*param_4 <= *(int *)0xc276)))) {
      iVar2 = *param_2;
      if (*param_4 < iVar2) {
        *param_2 = *param_4;
        *param_4 = iVar2;
        iVar2 = *param_1;
        *param_1 = *param_3;
        *param_3 = iVar2;
      }
      iVar2 = iVar5;
      if (*(int *)0xc276 < *param_4) {
        iVar3 = -(*(int *)0xc276 - *param_4);
        iVar2 = iVar1;
        uVar6 = FUN_32b2_4e12(iVar3,iVar3 >> 0xf,iVar5,iVar4);
        iVar1 = (int)((ulong)uVar6 >> 0x10);
        iVar5 = FUN_32b2_4d78(uVar6,iVar2,iVar5);
        *param_3 = *param_3 - iVar5;
        *param_4 = *(int *)0xc276;
      }
      if (*param_2 < *(int *)0xc270) {
        iVar5 = *(int *)0xc270 - *param_2;
        uVar6 = FUN_32b2_4e12(iVar5,iVar5 >> 0xf,iVar2,iVar4);
        iVar2 = FUN_32b2_4d78(uVar6,iVar1,iVar2);
        *param_1 = *param_1 + iVar2;
        *param_2 = *(int *)0xc270;
      }
      return 1;
    }
  }
  return 0;
}


