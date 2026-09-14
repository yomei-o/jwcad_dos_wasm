/* 32b2:783c */

undefined1 * __cdecl16far
FUN_32b2_783c(undefined2 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  int *local_4;
  
  if (*(char *)0x8e9e == '\0') {
    local_4 = (int *)FUN_32b2_73ca(*param_1,param_1[1],param_1[2],param_1[3]);
    FUN_32b2_22fc(param_2 + (uint)(*local_4 == 0x2d) + (uint)(0 < param_3),param_3 + 1,local_4);
  }
  else {
    local_4 = (int *)*(undefined2 *)0xb2e4;
    FUN_32b2_7ba6(0 < param_3,param_2 + (*local_4 == 0x2d));
  }
  puVar1 = param_2;
  if (*local_4 == 0x2d) {
    *param_2 = 0x2d;
    puVar1 = param_2 + 1;
  }
  if (0 < param_3) {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    *puVar1 = 0x2e;
  }
  puVar1 = (undefined1 *)FUN_32b2_2166(puVar1 + (uint)(*(char *)0x8e9e == '\0') + param_3,0x8e98);
  if (param_4 != 0) {
    *puVar1 = 0x45;
  }
  if (*(char *)local_4[3] != '0') {
    iVar2 = local_4[1] + -1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      puVar1[1] = 0x2d;
    }
    if (99 < iVar2) {
      puVar1[2] = puVar1[2] + (char)(iVar2 / 100);
      iVar2 = iVar2 % 100;
    }
    if (9 < iVar2) {
      puVar1[3] = puVar1[3] + (char)(iVar2 / 10);
      iVar2 = iVar2 % 10;
    }
    puVar1[4] = puVar1[4] + (char)iVar2;
  }
  return param_2;
}


