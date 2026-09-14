/* 32b2:1e02 */

/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_32b2_1e02(undefined2 param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  if (*(uint *)0x7a41 <= param_2) {
LAB_32b2_1e15:
    uVar4 = FUN_32b2_0621();
    return uVar4;
  }
  if (*(int *)0x8eaa == -0x292a) {
    (*(code *)*(undefined2 *)0x8eac)();
  }
  if ((*(byte *)(param_2 + 0x7a43) & 0x20) != 0) {
    bVar9 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar9) goto LAB_32b2_1e15;
  }
  if ((*(byte *)(param_2 + 0x7a43) & 0x80) != 0) {
    bVar9 = true;
    iVar6 = param_4;
    pcVar8 = param_3;
    if (param_4 != 0) {
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar9 = *pcVar1 == '\n';
      } while (!bVar9);
      if (!bVar9) goto LAB_32b2_1ead;
      pcVar7 = param_3;
      uVar5 = FUN_32b2_1f42();
      if (uVar5 < 0xa9) {
        uVar4 = FUN_32b2_02bc();
        bVar9 = pcVar8 < pcVar7;
        if (pcVar8 != pcVar7) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)(iVar6,param_2);
          if ((bVar9) || (uVar5 < (uint)((int)pcVar8 - (int)pcVar7))) {
            uVar4 = FUN_32b2_0621();
            return uVar4;
          }
        }
        return uVar4;
      }
      pcVar7 = &stack0xfff0;
      pcVar8 = &stack0xfff2;
      do {
        pcVar1 = param_3;
        param_3 = param_3 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar8 == pcVar7) {
            cVar3 = FUN_32b2_1eb6();
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar8 == pcVar7) {
          cVar3 = FUN_32b2_1eb6();
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = cVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      FUN_32b2_1eb6();
    }
    uVar4 = FUN_32b2_1f00();
    return uVar4;
  }
LAB_32b2_1ead:
  uVar4 = FUN_32b2_1f0e();
  return uVar4;
}


