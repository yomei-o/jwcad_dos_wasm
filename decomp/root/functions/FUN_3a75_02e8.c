/* 3a75:02e8 */

undefined2 __cdecl16far FUN_3a75_02e8(char *param_1,int param_2)

{
  char *pcVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 0xffff;
  while( true ) {
    if (param_2 < 0) {
      return local_4;
    }
    if (*param_1 == '\0') break;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
    local_4 = FUN_3a75_0002(*pcVar1,local_4);
    param_2 = param_2 + -1;
  }
  return 0xffff;
}


