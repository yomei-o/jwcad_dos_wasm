/* 21f2:0915 */

void __cdecl16far FUN_21f2_0915(uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  uint local_6;
  uint *local_4;
  
  local_4 = (uint *)0x21f2;
  local_6 = 0x2840;
  FUN_32b2_02bc();
  if (param_5 == 1) {
    local_4 = (uint *)0x32b2;
    local_6 = 0x2853;
    uVar1 = FUN_32b2_4ef0();
    *(undefined2 *)0xbee2 = uVar1;
    param_1 = param_1 & 0x3fff | *(uint *)0xbee4;
    param_2 = *(int *)0xbee6;
  }
  if (param_5 == 2) {
    local_4 = (uint *)0x32b2;
    local_6 = 0x2881;
    uVar1 = FUN_32b2_4ef0();
    *(undefined2 *)0xc728 = uVar1;
    param_1 = param_1 & 0x3fff | *(uint *)0xc72a;
    param_2 = *(int *)0xc72c;
  }
  uVar2 = 0x32b2;
  while( true ) {
    uVar4 = 0x32b2;
    local_6 = 0x28b3;
    iVar3 = param_4;
    local_4 = (uint *)uVar2;
    uVar2 = FUN_32b2_4ef0();
    if ((iVar3 < (int)local_4 >> 0xf) || ((iVar3 <= (int)local_4 >> 0xf && (uVar2 <= local_4))))
    break;
    if (param_5 == 1) {
      local_4 = (uint *)0x32b2;
      uVar4 = 0x1000;
      local_6 = 0x28d6;
      FUN_1000_00cd();
      *(int *)0xbee2 = *(int *)0xbee2 + 1;
    }
    uVar2 = uVar4;
    if (param_5 == 2) {
      uVar2 = 0x1000;
      local_6 = 0x28e5;
      local_4 = (uint *)uVar4;
      FUN_1000_0106();
      *(int *)0xc728 = *(int *)0xc728 + 1;
    }
    local_4 = &local_6;
    local_6 = 0x4000;
    iVar3 = FUN_21f2_082e(param_1,param_2);
    if (iVar3 != 0) {
      local_4 = (uint *)0x1d12;
      local_6 = uVar2;
      FUN_21f2_26d3();
    }
    if ((int)local_6 < 0x4000) {
      local_4 = (uint *)0x2;
      local_6 = 0x14;
      uVar2 = 0x1def;
      FUN_1def_26a9();
      local_4 = (uint *)param_4;
      local_6 = param_3;
      FUN_21f2_0356(0x1d16,param_3);
      local_4 = (uint *)0x35c;
      local_6 = 0x1def;
      FUN_21f2_26d3();
    }
    uVar4 = -(uint)(param_5 == 0) & 0x4000;
    bVar5 = CARRY2(param_1,uVar4);
    param_1 = param_1 + uVar4;
    param_2 = param_2 + (uint)bVar5 * 0x1000;
  }
  if (param_5 == 1) {
    local_4 = (uint *)0x32b2;
    uVar4 = 0x1000;
    local_6 = 0x2967;
    FUN_1000_00cd();
  }
  uVar2 = uVar4;
  if (param_5 == 2) {
    uVar2 = 0x1000;
    local_6 = 0x2972;
    local_4 = (uint *)uVar4;
    FUN_1000_0106();
  }
  *(undefined2 *)0xc728 = 0xffff;
  *(undefined2 *)0xbee2 = 0xffff;
  local_4 = &local_6;
  local_6 = param_3 & 0x3fff;
  iVar3 = FUN_21f2_082e(param_1,param_2);
  if (iVar3 != 0) {
    local_4 = (uint *)0x1d24;
    local_6 = uVar2;
    FUN_21f2_26d3();
  }
  if (((int)local_6 >> 0xf < 1) &&
     (((int)local_6 < 0 && (int)local_6 >> 0xf < 1 || (local_6 < (param_3 & 0x3fff))))) {
    local_4 = (uint *)0x2;
    local_6 = 0x14;
    FUN_1def_26a9();
    local_4 = (uint *)param_4;
    local_6 = param_3;
    FUN_21f2_0356(0x1d28,param_3);
    local_4 = (uint *)0x35c;
    local_6 = 0x1def;
    FUN_21f2_26d3();
  }
  return;
}


