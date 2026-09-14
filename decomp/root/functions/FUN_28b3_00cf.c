/* 28b3:00cf */

void __cdecl16far FUN_28b3_00cf(char *param_1,char *param_2)

{
  char *pcVar1;
  
  FUN_32b2_02bc();
  while (pcVar1 = param_1, *param_2 != '\0') {
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    *pcVar1 = *param_2;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
  }
  *param_1 = '\0';
  return;
}


