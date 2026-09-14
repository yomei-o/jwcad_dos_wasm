/* 21f2:0ac6 */

void __cdecl16far FUN_21f2_0ac6(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  uint local_8;
  uint local_6;
  uint *local_4;
  
  local_4 = (uint *)0x21f2;
  local_6 = 0x29f1;
  FUN_32b2_02bc();
  if (param_5 == 1) {
    local_4 = (uint *)0x32b2;
    local_6 = 0x2a04;
    uVar1 = FUN_32b2_4ef0();
    *(undefined2 *)0xbee2 = uVar1;
    param_1 = param_1 & 0x3fff | *(uint *)0xbee4;
    param_2 = *(uint *)0xbee6;
  }
  if (param_5 == 2) {
    local_4 = (uint *)0x32b2;
    local_6 = 0x2a31;
    uVar1 = FUN_32b2_4ef0();
    *(undefined2 *)0xc728 = uVar1;
    param_1 = param_1 & 0x3fff | *(uint *)0xc72a;
    param_2 = *(uint *)0xc72c;
  }
  uVar2 = 0x32b2;
  while( true ) {
    uVar4 = 0x32b2;
    local_6 = 0x2a62;
    iVar3 = param_4;
    local_4 = (uint *)uVar2;
    uVar2 = FUN_32b2_4ef0();
    if ((iVar3 < (int)local_4 >> 0xf) || ((iVar3 <= (int)local_4 >> 0xf && (uVar2 <= local_4))))
    break;
    if (param_5 == 1) {
      local_4 = (uint *)0x32b2;
      uVar4 = 0x1000;
      local_6 = 0x2a7f;
      FUN_1000_00cd();
      *(int *)0xbee2 = *(int *)0xbee2 + 1;
    }
    uVar2 = uVar4;
    if (param_5 == 2) {
      uVar2 = 0x1000;
      local_6 = 0x2a8e;
      local_4 = (uint *)uVar4;
      FUN_1000_0106();
      *(int *)0xc728 = *(int *)0xc728 + 1;
    }
    local_4 = &local_8;
    local_6 = 0x4000;
    local_8 = param_2;
    iVar3 = FUN_21f2_08a3(param_1);
    if (iVar3 != 0) {
      local_4 = (uint *)0x1d36;
      local_8 = 0x2ab3;
      local_6 = uVar2;
      FUN_21f2_26d3();
    }
    if ((int)local_8 < 0x4000) {
      local_4 = (uint *)0x370;
      local_8 = 0x2ac3;
      local_6 = uVar2;
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
    local_6 = 0x2aed;
    FUN_1000_00cd();
  }
  uVar2 = uVar4;
  if (param_5 == 2) {
    uVar2 = 0x1000;
    local_6 = 11000;
    local_4 = (uint *)uVar4;
    FUN_1000_0106();
  }
  *(undefined2 *)0xc728 = 0xffff;
  *(undefined2 *)0xbee2 = 0xffff;
  local_4 = &local_8;
  local_6 = param_3 & 0x3fff;
  local_8 = param_2;
  iVar3 = FUN_21f2_08a3(param_1);
  if (iVar3 != 0) {
    local_4 = (uint *)0x1d3b;
    local_8 = 0x2b25;
    local_6 = uVar2;
    FUN_21f2_26d3();
  }
  if (((int)local_8 >> 0xf < 1) &&
     (((int)local_8 < 0 && (int)local_8 >> 0xf < 1 || (local_8 < (param_3 & 0x3fff))))) {
    local_4 = (uint *)0x370;
    local_8 = 0x2b44;
    local_6 = uVar2;
    FUN_21f2_26d3();
  }
  return;
}


