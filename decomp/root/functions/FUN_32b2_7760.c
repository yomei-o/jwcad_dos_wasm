/* 32b2:7760 */

void __cdecl16far FUN_32b2_7760(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  char *local_4;
  
  for (; (*param_1 != '\0' && (*param_1 != '.')); param_1 = param_1 + 1) {
  }
  if (*param_1 != '\0') {
    do {
      pcVar2 = param_1;
      param_1 = pcVar2 + 1;
      if ((*param_1 == '\0') || (*param_1 == 'e')) break;
    } while (*param_1 != 'E');
    local_4 = param_1;
    for (param_1 = pcVar2; *param_1 == '0'; param_1 = param_1 + -1) {
    }
    if (*param_1 == '.') {
      param_1 = param_1 + -1;
    }
    do {
      cVar1 = *local_4;
      param_1 = param_1 + 1;
      *param_1 = cVar1;
      local_4 = local_4 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


