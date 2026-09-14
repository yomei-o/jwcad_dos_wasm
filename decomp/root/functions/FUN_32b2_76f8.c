/* 32b2:76f8 */

void __cdecl16far FUN_32b2_76f8(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  char local_4;
  
  if ((*(byte *)(*param_1 + 0x7c67) & 1) == 0) {
    iVar2 = (int)*param_1;
  }
  else {
    iVar2 = *param_1 + 0x20;
  }
  if (iVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
    } while ((*(byte *)(*param_1 + 0x7c67) & 4) != 0);
  }
  local_4 = *param_1;
  *param_1 = '.';
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = local_4;
    local_4 = cVar1;
  } while (*param_1 != '\0');
  return;
}


