/* 32b2:3c28 */

uint __cdecl16far
FUN_32b2_3c28(int *param_1,int *param_2,int *param_3,undefined2 *param_4,undefined1 *param_5,
             int param_6,int param_7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 unaff_DS;
  int *local_8;
  int local_4;
  
  uVar6 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)*(undefined2 *)0x7a5b;
  }
  if (param_2 != (int *)0x0) {
    local_8 = param_2;
    for (; (*local_8 != 0 && (uVar6 < 0x8000)); uVar6 = uVar6 + iVar3 + 1) {
      iVar3 = FUN_32b2_21c4(*local_8);
      local_8 = local_8 + 1;
    }
  }
  if (*(int *)0x88b0 == 0) {
    local_4 = 0;
  }
  else {
    for (local_4 = *(int *)0x7a41; (local_4 != 0 && (*(char *)(local_4 + 0x7a42) == '\0'));
        local_4 = local_4 + -1) {
    }
  }
  if (local_4 != 0) {
    uVar6 = uVar6 + (local_4 + 7) * 2;
  }
  if (param_6 != 0) {
    iVar3 = FUN_32b2_21c4(param_6);
    uVar6 = uVar6 + iVar3 + 3;
  }
  if (uVar6 + 1 < 0x8000) {
    uVar4 = *(undefined2 *)0x7c46;
    *(undefined2 *)0x7c46 = 0x10;
    iVar3 = thunk_FUN_32b2_1f83(uVar6 + 0x10);
    if (iVar3 != 0) {
      *(undefined2 *)0x7c46 = uVar4;
      *param_3 = iVar3;
      pcVar5 = (char *)(iVar3 + 0xfU & 0xfff0);
      *param_4 = pcVar5;
      if (param_2 != (int *)0x0) {
        for (local_8 = param_2; *local_8 != 0; local_8 = local_8 + 1) {
          uVar4 = FUN_32b2_2166(pcVar5,*local_8,0);
          iVar3 = FUN_32b2_2f7a(uVar4);
          pcVar5 = (char *)(iVar3 + 1);
        }
      }
      if (local_4 != 0) {
        uVar4 = FUN_32b2_2166(pcVar5,0x7a18,0);
        pcVar5 = (char *)FUN_32b2_2f7a(uVar4);
        iVar3 = 0;
        while (local_4 != 0) {
          bVar2 = *(byte *)(iVar3 + 0x7a43);
          *pcVar5 = ((char)bVar2 >> 4 & 0xfU) + 0x41;
          pcVar5[1] = (bVar2 & 0xf) + 0x41;
          pcVar5 = pcVar5 + 2;
          iVar3 = iVar3 + 1;
          local_4 = local_4 + -1;
        }
        *pcVar5 = '\0';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = '\0';
      if (param_6 != 0) {
        pcVar5[1] = '\x01';
        pcVar5[2] = '\0';
        FUN_32b2_2166(pcVar5 + 3,param_6);
      }
      puVar7 = (undefined1 *)0x0;
      puVar8 = param_5 + 1;
      if (param_7 != 0) {
        uVar4 = FUN_32b2_2166(puVar8,0x88ac,0,param_7,0);
        uVar4 = FUN_32b2_2f7a(uVar4);
        uVar4 = FUN_32b2_2166(uVar4);
        iVar3 = FUN_32b2_2f7a(uVar4);
        puVar8 = (undefined1 *)(iVar3 + -4);
        puVar7 = puVar8 + (-1 - (int)param_5);
      }
      if (*param_1 != 0) {
        if (param_1[1] != 0) {
          *puVar8 = 0x20;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        }
        local_8 = param_1 + 1;
        while (*local_8 != 0) {
          iVar3 = FUN_32b2_21c4(*local_8);
          if ((undefined1 *)0x7d < puVar7 + iVar3) {
            *(undefined2 *)0x7a34 = 7;
            *(undefined2 *)0x7a3f = 10;
            thunk_FUN_32b2_1f62(*param_3);
            return 0xffff;
          }
          puVar7 = puVar7 + iVar3;
          piVar1 = local_8 + 1;
          uVar4 = FUN_32b2_2166(puVar8,*local_8,0);
          puVar8 = (undefined1 *)FUN_32b2_2f7a(uVar4);
          local_8 = piVar1;
          if (*piVar1 != 0) {
            *puVar8 = 0x20;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 1;
          }
        }
      }
      *puVar8 = 0xd;
      *param_5 = (char)puVar7;
      return uVar6 + 1;
    }
    *(undefined2 *)0x7a34 = 0xc;
    *(undefined2 *)0x7a3f = 8;
    *(undefined2 *)0x7c46 = uVar4;
  }
  else {
    *(undefined2 *)0x7a34 = 7;
    *(undefined2 *)0x7a3f = 10;
  }
  return 0xffff;
}


