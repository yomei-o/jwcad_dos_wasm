/* 32b2:2f7a */

char * __cdecl16far FUN_32b2_2f7a(char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (param_2 != *pcVar1);
  param_1 = param_1 + -1;
  if (*param_1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}


