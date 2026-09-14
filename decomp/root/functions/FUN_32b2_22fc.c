/* 32b2:22fc */

void __cdecl16far FUN_32b2_22fc(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  pcVar2 = (char *)*(undefined2 *)(param_3 + 6);
  *param_1 = '0';
  pcVar1 = param_1;
  for (; pcVar1 = pcVar1 + 1, 0 < param_2; param_2 = param_2 + -1) {
    if (*pcVar2 == '\0') {
      *pcVar1 = '0';
    }
    else {
      *pcVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    }
  }
  *pcVar1 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar2)) {
    while (pcVar1 = pcVar1 + -1, *pcVar1 == '9') {
      *pcVar1 = '0';
    }
    *pcVar1 = *pcVar1 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(param_3 + 2) = *(int *)(param_3 + 2) + 1;
  }
  else {
    FUN_32b2_2166(param_1,param_1 + 1);
  }
  return;
}


