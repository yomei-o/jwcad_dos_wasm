/* 3a75:00e4 */

char * __cdecl16far FUN_3a75_00e4(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  char *local_6;
  char *local_4;
  
  uVar4 = 0x3a75;
  for (local_6 = param_1; *local_6 != '\0'; local_6 = local_6 + 1) {
    for (local_4 = param_2; uVar3 = uVar4, *local_4 != '\0'; local_4 = local_4 + 1) {
      cVar1 = *local_4;
      uVar3 = 0x32b2;
      iVar2 = FUN_32b2_312f(uVar4,cVar1);
      if (iVar2 == 0) {
        if (*local_6 == *local_4) break;
      }
      else {
        if (((*local_6 == cVar1) && (local_6[1] == local_4[1])) || (local_4[1] == '\0')) break;
        local_4 = local_4 + 1;
      }
      uVar4 = uVar3;
    }
    if (*local_4 != '\0') break;
    uVar4 = 0x32b2;
    iVar2 = FUN_32b2_312f(uVar3,*local_6);
    if ((iVar2 != 0) && (local_6 = local_6 + 1, *local_6 == '\0')) break;
  }
  if (*local_6 == '\0') {
    local_6 = (char *)0x0;
  }
  return local_6;
}


