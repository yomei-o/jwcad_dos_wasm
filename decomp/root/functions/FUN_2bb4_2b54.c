/* 2bb4:2b54 */

void __cdecl16far FUN_2bb4_2b54(int param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_78;
  char local_76 [106];
  undefined2 uStack_c;
  undefined2 uStack_a;
  char *pcStack_8;
  char *local_6;
  char *pcVar5;
  
  local_6 = (char *)0xe69f;
  FUN_32b2_02bc();
  local_78 = 0;
  local_6 = (char *)0x0;
  uVar4 = 0x32b2;
  for (pcVar5 = param_2; uStack_a = uVar4, *pcVar5 != '\0'; pcVar5 = pcVar5 + 1) {
    cVar2 = *pcVar5;
    local_76[local_78] = cVar2;
    iVar1 = local_78 + 1;
    if ((cVar2 == '|') && ((int)local_6 < param_1)) {
      local_6 = (char *)0x7c;
      pcStack_8 = pcVar5 + 1;
      uVar4 = 0x32b2;
      uStack_c = 0xe6d4;
      iVar3 = FUN_32b2_2f7a();
      if (iVar3 != 0) {
        local_6 = (char *)((int)pcVar5 - (int)param_2);
        pcStack_8 = param_2;
        uStack_a = 0x32b2;
        uVar4 = 0x3a75;
        uStack_c = 0xe6e9;
        iVar3 = FUN_3a75_02e8();
        if (iVar3 == 0) {
          local_76[local_78 + 1] = '\0';
          local_6 = (char *)(((int)local_6 + 1) * 3 + 0xa2a);
          pcStack_8 = local_76;
          uStack_a = 0x3a75;
          uVar4 = 0x32b2;
          uStack_c = 0xe70f;
          FUN_32b2_2126();
          iVar1 = local_78 + 3;
        }
      }
    }
    local_78 = iVar1;
  }
  local_76[local_78] = '\0';
  if (local_6 != (char *)0x0) {
    local_6 = local_76;
    pcStack_8 = param_2;
    uStack_c = 0xe739;
    FUN_32b2_2854();
  }
  return;
}


