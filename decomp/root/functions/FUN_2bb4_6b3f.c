/* 2bb4:6b3f */

undefined2 __cdecl16far
FUN_2bb4_6b3f(char *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,uint param_6,int param_7)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  int local_14;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  FUN_32b2_02bc();
  if (-2 < (int)param_6) {
    uVar6 = param_6 < 9;
    uVar7 = param_6 == 9;
    if ((int)param_6 < 10) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_7191(0x32b2);
      if ((bool)uVar6 || (bool)uVar7) {
        FUN_32b2_2854(param_1,0x2120,param_2,param_3,param_4,param_5);
        if (-1 < (int)param_6) {
          iVar3 = FUN_32b2_21c4(param_1);
          for (iVar4 = 0; (iVar4 < iVar3 && (param_1[iVar4] != '.')); iVar4 = iVar4 + 1) {
          }
          iVar4 = iVar4 + param_6 + 1;
          if (iVar4 < iVar3) {
            iVar9 = 0;
            if ((param_7 == 0) && (0x34 < (byte)param_1[iVar4])) {
              iVar9 = 1;
            }
            if (param_7 == 1) {
              iVar9 = 0;
            }
            iVar8 = iVar4;
            if (param_7 == 2) {
              for (; iVar8 < iVar3; iVar8 = iVar8 + 1) {
                if (0x30 < (byte)param_1[iVar8]) {
                  iVar9 = 1;
                }
              }
            }
            param_1[iVar4] = '\0';
            if (iVar9 != 0) {
              iVar4 = FUN_32b2_21c4(param_1);
              uVar10 = (uint)(*param_1 == '-');
              iVar3 = iVar4;
              while (iVar3 = iVar3 + -1, (int)uVar10 <= iVar3) {
                bVar1 = param_1[iVar3];
                if (bVar1 != 0x2e) {
                  if (bVar1 < 0x39) {
                    param_1[iVar3] = bVar1 + 1;
                    iVar9 = 0;
                    break;
                  }
                  param_1[iVar3] = '0';
                }
              }
              if (0 < iVar9) {
                for (; (int)uVar10 <= iVar4; iVar4 = iVar4 + -1) {
                  param_1[iVar4 + 1] = param_1[iVar4];
                }
                param_1[uVar10] = '1';
              }
            }
          }
        }
        do {
          if (*(int *)0x112c != 0) {
LAB_2bb4_6cc8:
            if (*(int *)0x112c == 1) {
              iVar4 = FUN_32b2_21c4(param_1);
              if (param_1[iVar4 + -1] == '.') {
                param_1[iVar4 + -1] = '\0';
              }
            }
            if (*(int *)0x112a != 0) {
              local_14 = FUN_32b2_21c4(param_1);
              for (iVar4 = 0; (iVar4 < local_14 && (param_1[iVar4] != '.')); iVar4 = iVar4 + 1) {
              }
              cVar2 = *param_1;
              while( true ) {
                iVar4 = iVar4 + -3;
                local_14 = local_14 + 1;
                iVar3 = local_14;
                if (iVar4 <= (int)(uint)(cVar2 == '-')) break;
                for (; iVar4 <= iVar3; iVar3 = iVar3 + -1) {
                  param_1[iVar3 + 1] = param_1[iVar3];
                }
                param_1[iVar4] = ',';
                if (*(int *)0x112a == 2) {
                  param_1[iVar4] = ' ';
                }
              }
            }
            return 1;
          }
          iVar4 = FUN_32b2_21c4(param_1);
          pcVar5 = param_1 + iVar4 + -1;
          if (*pcVar5 == '.') {
            *pcVar5 = '\0';
            goto LAB_2bb4_6cc8;
          }
          if ((*pcVar5 != '0') ||
             (pcVar5 = param_1, iVar4 = FUN_32b2_2f7a(param_1,0x2e), iVar4 == 0))
          goto LAB_2bb4_6cc8;
          *pcVar5 = '\0';
        } while( true );
      }
    }
  }
  return 0;
}


