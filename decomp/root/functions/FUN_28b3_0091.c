/* 28b3:0091 */

void __cdecl16far FUN_28b3_0091(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined2 unaff_DS;
  int local_4;
  
  FUN_32b2_02bc();
  local_4 = 0;
  do {
    if (*param_2 == '\0') break;
    pcVar1 = param_1 + 1;
    *param_1 = *param_2;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    local_4 = local_4 + 1;
    param_1 = pcVar1;
  } while (local_4 < param_3);
  *param_1 = '\0';
  return;
}


