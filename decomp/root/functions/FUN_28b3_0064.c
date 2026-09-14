/* 28b3:0064 */

void __cdecl16far FUN_28b3_0064(char *param_1,char *param_2)

{
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  while (*param_2 != '\0') {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
  }
  *param_1 = '\0';
  return;
}


