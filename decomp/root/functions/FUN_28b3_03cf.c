/* 28b3:03cf */

undefined2 __cdecl16far FUN_28b3_03cf(undefined2 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 *local_6;
  
  local_6 = (undefined2 *)0x8f0a;
  FUN_32b2_02bc();
  iVar1 = (param_3 ^ (int)param_3 >> 0xf) - ((int)param_3 >> 0xf);
  local_6 = (undefined2 *)param_1;
  local_8 = 0x32b2;
  local_a = 0x8f1e;
  iVar2 = FUN_32b2_21c4();
  if (param_2 == 0) {
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x8f67;
    FUN_32b2_6d9b();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x8f6f;
    FUN_32b2_6e4b();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x8f74;
    FUN_32b2_7258();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x8f79;
    uVar3 = FUN_32b2_6f61();
    *(undefined2 *)0x182 = uVar3;
    uVar3 = *(undefined2 *)(iVar1 * 2 + 0x198);
  }
  else {
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x8f3a;
    FUN_32b2_6d9b();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x8f42;
    FUN_32b2_6e4b();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x8f47;
    FUN_32b2_7258();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x8f4c;
    uVar3 = FUN_32b2_6f61();
    *(undefined2 *)0x182 = uVar3;
    uVar3 = *(undefined2 *)(iVar1 * 2 + 0x182);
  }
  *(undefined2 *)0x198 = uVar3;
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8f8b;
  FUN_32b2_6cc6();
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8f90;
  FUN_32b2_7258();
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8f99;
  FUN_32b2_7065();
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8fa2;
  FUN_32b2_710c();
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8faa;
  FUN_32b2_6e63();
  uVar3 = *(undefined2 *)(iVar1 * 2 + 0x1ae);
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8fc0;
  FUN_32b2_6d9b();
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8fc5;
  FUN_32b2_7258();
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8fce;
  FUN_32b2_7065();
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8fd7;
  FUN_32b2_710c();
  local_6 = (undefined2 *)0x32b2;
  local_8 = 0x8fdf;
  FUN_32b2_6e63();
  *(undefined2 *)0x1ae = uVar3;
  if ((int)param_3 < 1) {
    local_6 = (undefined2 *)param_1;
    local_8 = 0x32b2;
    local_a = 0x9006;
    iVar1 = FUN_28b3_0260();
  }
  else {
    local_6 = (undefined2 *)param_1;
    local_8 = 0x32b2;
    local_a = 0x8ff0;
    iVar4 = FUN_28b3_034b();
    local_6 = (undefined2 *)param_1;
    local_8 = 0x32b2;
    local_a = 0x8ffa;
    iVar1 = FUN_28b3_0260();
    iVar1 = iVar1 - iVar4;
  }
  if (iVar1 < 1) {
    local_a = *(undefined2 *)0x9314;
    local_8 = *(undefined2 *)0x9316;
  }
  else {
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x902a;
    FUN_32b2_6cc6();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x9032;
    FUN_32b2_7095();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x9037;
    FUN_32b2_7258();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x903f;
    FUN_32b2_6d9b();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x9044;
    FUN_32b2_7258();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x9049;
    FUN_32b2_717d();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x9052;
    FUN_32b2_710c();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x905a;
    FUN_32b2_6e4b();
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x9062;
    FUN_32b2_6ef9();
    local_6 = (undefined2 *)(iVar2 + -1);
    local_8 = param_1;
    local_a = 0x32b2;
    iVar1 = FUN_3a75_02e8();
    if (iVar1 == 0) {
      local_6 = (undefined2 *)0x3a75;
      local_8 = 0x907d;
      FUN_32b2_6cc6();
      local_6 = (undefined2 *)0x32b2;
      local_8 = 0x9082;
      FUN_32b2_7258();
      local_6 = (undefined2 *)0x32b2;
      local_8 = 0x908b;
      FUN_32b2_710c();
      local_6 = (undefined2 *)0x32b2;
      local_8 = 0x9093;
      FUN_32b2_6cc6();
      local_6 = (undefined2 *)0x32b2;
      local_8 = 0x9098;
      FUN_32b2_7258();
      local_6 = (undefined2 *)0x32b2;
      local_8 = 0x909d;
      FUN_32b2_718c();
    }
    else {
      local_6 = (undefined2 *)0x3a75;
      local_8 = 0x90aa;
      FUN_32b2_6cc6();
      local_6 = &local_a;
      local_8 = 0x32b2;
      local_a = 0x90b3;
      FUN_32b2_7035();
    }
    local_6 = (undefined2 *)0x32b2;
    local_8 = 0x90b9;
    FUN_32b2_6e63();
  }
  *(undefined2 *)0x7a2a = local_a;
  *(undefined2 *)0x7a2c = local_8;
  return 0x7a2a;
}


