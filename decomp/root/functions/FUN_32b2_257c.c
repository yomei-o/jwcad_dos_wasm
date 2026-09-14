/* 32b2:257c */

char * __cdecl16far FUN_32b2_257c(char *param_1,int param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_DS;
  
  if (param_2 < 1) {
LAB_32b2_25dc:
    param_1 = (char *)0x0;
  }
  else {
    uVar6 = param_2 - 1;
    pcVar8 = param_1;
    while (uVar6 != 0) {
      uVar4 = param_3[1];
      if (uVar4 == 0) {
        iVar3 = FUN_32b2_08f4(param_3);
        if (iVar3 == -1) {
          if ((pcVar8 == param_1) || ((*(byte *)(param_3 + 3) & 0x20) != 0)) goto LAB_32b2_25dc;
          break;
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = (char)iVar3;
        if ((char)iVar3 == '\n') break;
        uVar6 = uVar6 - 1;
      }
      else {
        if (uVar6 < uVar4) {
          uVar4 = uVar6;
        }
        pcVar7 = (char *)*param_3;
        uVar5 = uVar4;
        do {
          pcVar1 = pcVar7;
          pcVar7 = pcVar7 + 1;
          cVar2 = *pcVar1;
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0 && cVar2 != '\n');
        *param_3 = (int)pcVar7;
        if (cVar2 == '\n') {
          param_3[1] = param_3[1] - (uVar4 - uVar5);
          break;
        }
        param_3[1] = param_3[1] - uVar4;
        uVar6 = uVar6 - uVar4;
      }
    }
    *pcVar8 = '\0';
  }
  return param_1;
}


