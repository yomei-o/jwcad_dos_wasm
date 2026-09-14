/* 1def:1691 */

void __cdecl16far
FUN_1def_1691(undefined2 param_1,undefined2 param_2,uint param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  uint local_48;
  undefined1 local_46 [4];
  undefined1 local_42 [4];
  int local_3e;
  int local_3c;
  undefined1 local_3a [40];
  undefined2 local_12;
  uint local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined1 *local_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x1def;
  local_6 = (undefined1 *)0xf58c;
  FUN_32b2_02bc();
  local_a = *(undefined2 *)0x9224;
  local_4 = (undefined1 *)0x0;
  local_6 = (undefined1 *)0x32b2;
  local_8 = 0xf5a1;
  FUN_1885_5256();
  local_48 = param_3;
  if (param_3 < 400) {
    local_a = *(undefined2 *)0x9228;
    local_48 = CONCAT11((char)(param_3 >> 8) + '\"',(char)param_3);
  }
  local_4 = (undefined1 *)local_48;
  local_6 = (undefined1 *)0x1885;
  local_8 = 0xf5c9;
  local_12 = FUN_3a75_01fa();
  local_6 = local_3a;
  local_8 = 0x3a75;
  local_a = 0xf5d7;
  local_4 = (undefined1 *)local_12;
  FUN_20a9_03a5();
  local_4 = (undefined1 *)0x20a9;
  local_6 = (undefined1 *)0xf5e7;
  FUN_32b2_6d9b();
  local_4 = (undefined1 *)0x32b2;
  local_6 = (undefined1 *)0xf5ef;
  FUN_32b2_6e63();
  local_3c = 0;
  do {
    local_4 = (undefined1 *)0x32b2;
    local_6 = (undefined1 *)0xf5fc;
    FUN_32b2_6cc6();
    local_4 = (undefined1 *)0x32b2;
    local_6 = (undefined1 *)0xf601;
    FUN_32b2_7258();
    local_4 = (undefined1 *)0x32b2;
    local_6 = (undefined1 *)0xf606;
    local_e = FUN_32b2_6f61();
    local_4 = (undefined1 *)0x32b2;
    local_6 = (undefined1 *)0xf611;
    FUN_32b2_6d9b();
    local_4 = (undefined1 *)0x32b2;
    local_6 = (undefined1 *)0xf619;
    FUN_32b2_6e63();
    local_10 = CONCAT11(*local_6,local_6[1]);
    local_3e = 0;
    do {
      local_4 = (undefined1 *)0x32b2;
      local_6 = (undefined1 *)0xf640;
      FUN_32b2_6cc6();
      local_4 = (undefined1 *)0x32b2;
      local_6 = (undefined1 *)0xf645;
      FUN_32b2_7258();
      local_4 = (undefined1 *)0x32b2;
      local_6 = (undefined1 *)0xf64a;
      uVar1 = FUN_32b2_6f61();
      if ((local_10 & 0x8000) != 0) {
        local_4 = (undefined1 *)param_6;
        local_6 = (undefined1 *)local_e;
        local_a = 0x32b2;
        uStack_c = 0xf65e;
        local_8 = uVar1;
        FUN_1def_1423();
      }
      local_10 = local_10 << 1;
      local_4 = (undefined1 *)0x32b2;
      local_6 = (undefined1 *)0xf66c;
      FUN_32b2_6cc6();
      local_4 = local_42;
      local_6 = (undefined1 *)0x32b2;
      local_8 = 0xf675;
      FUN_32b2_7095();
      local_4 = (undefined1 *)0x32b2;
      local_6 = (undefined1 *)0xf67b;
      FUN_32b2_6e63();
      local_3e = local_3e + 1;
    } while (local_3e < 0x10);
    local_4 = (undefined1 *)0x32b2;
    local_6 = (undefined1 *)0xf68c;
    FUN_32b2_6cc6();
    local_4 = local_46;
    local_6 = (undefined1 *)0x32b2;
    local_8 = 0xf695;
    FUN_32b2_7095();
    local_4 = (undefined1 *)0x32b2;
    local_6 = (undefined1 *)0xf69b;
    FUN_32b2_6e63();
    local_3c = local_3c + 1;
  } while (local_3c < 0x10);
  return;
}


