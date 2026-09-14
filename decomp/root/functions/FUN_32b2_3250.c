/* 32b2:3250 */

char * __cdecl16near FUN_32b2_3250(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined2 unaff_DS;
  char *local_4;
  
  local_4 = param_1;
  while (param_3 = param_3 + -1, pcVar1 = param_1, param_3 != 0) {
    if ((*param_1 == '\0') || (*param_1 == ';')) goto LAB_32b2_3281;
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
LAB_32b2_3286:
  local_4 = pcVar1;
  *param_2 = '\0';
  if (local_4 == param_1) {
    param_1 = (char *)0x0;
  }
  return param_1;
LAB_32b2_3281:
  for (; pcVar1 = local_4, *param_1 == ';'; param_1 = param_1 + 1) {
  }
  goto LAB_32b2_3286;
}


