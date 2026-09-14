/* 32b2:798a */

undefined1 * __cdecl16far FUN_32b2_798a(undefined2 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  int *local_4;
  
  if (*(char *)0x8e9e == '\0') {
    local_4 = (int *)FUN_32b2_73ca(*param_1,param_1[1],param_1[2],param_1[3]);
    FUN_32b2_22fc(param_2 + (*local_4 == 0x2d),local_4[1] + param_3,local_4);
  }
  else {
    local_4 = (int *)*(undefined2 *)0xb2e4;
    iVar2 = *local_4;
    if (*(int *)0x8ea0 == param_3) {
      iVar1 = *(int *)0x8ea0;
      param_2[iVar1 + (uint)(iVar2 == 0x2d)] = 0x30;
      param_2[iVar1 + (uint)(iVar2 == 0x2d) + 1] = 0;
    }
  }
  puVar3 = param_2;
  if (*local_4 == 0x2d) {
    *param_2 = 0x2d;
    puVar3 = param_2 + 1;
  }
  if (local_4[1] < 1) {
    FUN_32b2_7ba6(1,puVar3);
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = puVar3 + local_4[1];
  }
  if (0 < param_3) {
    FUN_32b2_7ba6(1,puVar3);
    *puVar3 = 0x2e;
    if (local_4[1] < 0) {
      if (*(char *)0x8e9e == '\0') {
        iVar2 = -local_4[1];
        if (-param_3 != local_4[1] && param_3 <= iVar2) {
          iVar2 = param_3;
        }
      }
      else {
        iVar2 = -local_4[1];
      }
      FUN_32b2_7ba6(iVar2,puVar3 + 1);
      FUN_32b2_31c2(puVar3 + 1,0x30,iVar2);
    }
  }
  return param_2;
}


