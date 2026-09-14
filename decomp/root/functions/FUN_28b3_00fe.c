/* 28b3:00fe */

int __cdecl16far FUN_28b3_00fe(char *param_1)

{
  int local_4;
  
  FUN_32b2_02bc();
  local_4 = 0;
  while (*param_1 != '\0') {
    local_4 = local_4 + 1;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
  }
  return local_4;
}


