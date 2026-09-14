/* 32b2:41e6 */

int __cdecl16far
FUN_32b2_41e6(undefined2 param_1,char *param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined2 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  int local_8;
  
  pcVar7 = (char *)0x0;
  uVar4 = *(undefined2 *)0x7c46;
  *(undefined2 *)0x7c46 = 0x10;
  local_8 = FUN_32b2_406e(param_1,param_2,param_3,param_4);
  if (((((local_8 == -1) && (*(int *)0x7a34 == 2)) &&
       (iVar1 = FUN_3a75_0064(param_2,0x2f), iVar1 == 0)) &&
      (iVar1 = FUN_3a75_0064(param_2,0x5c), iVar1 == 0)) &&
     (((*param_2 == '\0' || (param_2[1] != ':')) &&
      ((iVar1 = FUN_32b2_238c(0x88fe), iVar1 != 0 &&
       (pcVar7 = (char *)thunk_FUN_32b2_1f83(0x104), pcVar7 != (char *)0x0)))))) {
    *(undefined2 *)0x7c46 = uVar4;
    while ((iVar1 = FUN_32b2_3250(iVar1,pcVar7,0x103), iVar1 != 0 && (*pcVar7 != '\0'))) {
      iVar2 = FUN_32b2_21c4(pcVar7);
      pcVar6 = pcVar7 + iVar2 + -1;
      if (*pcVar6 == '\\') {
        pcVar3 = (char *)FUN_3a75_0194(pcVar7,0x5c);
        if (pcVar6 != pcVar3) {
          uVar4 = 0x8903;
LAB_32b2_42ce:
          FUN_32b2_2126(pcVar7,uVar4);
        }
      }
      else if (*pcVar6 != '/') {
        uVar4 = 0x8905;
        goto LAB_32b2_42ce;
      }
      iVar2 = FUN_32b2_21c4(param_2);
      iVar5 = FUN_32b2_21c4(pcVar7);
      if (0x103 < (uint)(iVar5 + iVar2)) break;
      FUN_32b2_2126(pcVar7,param_2);
      local_8 = FUN_32b2_406e(param_1,pcVar7,param_3,param_4);
      if ((local_8 != -1) ||
         ((*(int *)0x7a34 != 2 &&
          (((pcVar6 = (char *)FUN_3a75_0064(pcVar7,0x5c), pcVar6 != pcVar7 &&
            (pcVar6 = (char *)FUN_3a75_0064(pcVar7,0x2f), pcVar6 != pcVar7)) ||
           ((iVar2 = FUN_3a75_0064(pcVar7 + 1,0x5c), iVar2 - (int)pcVar7 != 1 &&
            (iVar2 = FUN_3a75_0064(pcVar7 + 1,0x2f), iVar2 - (int)pcVar7 != 1)))))))) break;
    }
  }
  else {
    *(undefined2 *)0x7c46 = uVar4;
  }
  if (pcVar7 != (char *)0x0) {
    thunk_FUN_32b2_1f62(pcVar7);
  }
  return local_8;
}


