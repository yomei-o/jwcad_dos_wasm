/* 3ab8:0281 */

undefined2 __cdecl16far FUN_3ab8_0281(void)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 local_88 [4];
  undefined1 local_84 [6];
  undefined1 local_7e [100];
  int local_1a;
  uint local_18;
  int local_16;
  undefined4 local_14;
  int local_10;
  uint local_e;
  undefined1 *local_c;
  undefined1 *local_a;
  undefined1 *local_8;
  int *local_6;
  
  local_6 = (int *)0xae0c;
  FUN_21f2_0ebc();
  local_16 = 0;
  local_6 = (int *)0x22b2;
  local_8 = (undefined1 *)0xae17;
  func_0x0000c3ca();
  local_e = 1;
  local_c = (undefined1 *)0x0;
  local_a = (undefined1 *)0x885;
  while( true ) {
    if ((*(int *)0x14a < (int)local_c) ||
       ((*(int *)0x14a <= (int)local_c && (*(uint *)0x148 < local_e)))) break;
    local_6 = (int *)local_c;
    local_8 = (undefined1 *)local_e;
    uVar3 = 0;
    local_c = (undefined1 *)0xae46;
    uVar7 = func_0x0000013f();
    uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
    if ((*(byte *)((int)uVar7 + 0x14) & 2) != 0) {
      bVar1 = *(byte *)((int)uVar7 + 0x12) >> 4;
      local_18 = (uint)bVar1;
      local_6 = (int *)0x0;
      local_8 = (undefined1 *)0xae71;
      func_0x000297e6();
      uVar6 = bVar1 == 0;
      local_6 = (int *)0x22b2;
      local_8 = (undefined1 *)0xae7e;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uVar3 = 0x22b2;
      local_8 = (undefined1 *)0xae83;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_16 = 1;
      }
    }
    bVar5 = 0xfffe < local_e;
    local_e = local_e + 1;
    local_c = (undefined1 *)((int)local_c + (uint)bVar5);
    local_a = (undefined1 *)uVar3;
  }
  local_c = (undefined1 *)0x0;
  for (local_e = 1;
      ((int)local_c <= *(int *)0x14e &&
      (((int)local_c < *(int *)0x14e || (local_e <= *(uint *)0x14c)))); local_e = local_e + 1) {
    local_6 = (int *)local_c;
    local_8 = (undefined1 *)local_e;
    uVar3 = 0;
    local_c = (undefined1 *)0xaebb;
    uVar7 = func_0x00000271();
    uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
    local_14 = uVar7;
    if ((*(byte *)((int)uVar7 + 0x1e) & 2) != 0) {
      bVar1 = *(byte *)((int)uVar7 + 0x1c) >> 4;
      local_18 = (uint)bVar1;
      local_6 = (int *)0x0;
      local_8 = (undefined1 *)0xaee6;
      func_0x000297e6();
      uVar6 = bVar1 == 0;
      local_6 = (int *)0x22b2;
      local_8 = (undefined1 *)0xaef3;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uVar3 = 0x22b2;
      local_8 = (undefined1 *)0xaef8;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_16 = 1;
      }
    }
    local_c = (undefined1 *)((int)local_c + (uint)(0xfffe < local_e));
    local_a = (undefined1 *)uVar3;
  }
  local_8 = local_a;
  for (local_10 = 1; local_10 <= *(int *)0x150; local_10 = local_10 + 1) {
    local_6 = (int *)local_10;
    uVar4 = 0;
    local_a = (undefined1 *)0xaf10;
    uVar7 = func_0x00000398();
    if ((*(byte *)((int)uVar7 + 0x16) & 2) != 0) {
      local_6 = (int *)local_10;
      local_8 = (undefined1 *)0x0;
      local_a = (undefined1 *)0xaf24;
      uVar7 = func_0x00000398();
      local_18 = (uint)(*(byte *)((int)uVar7 + 0x15) >> 4);
      local_6 = (int *)0x0;
      local_8 = (undefined1 *)0xaf3f;
      func_0x000297e6();
      uVar6 = (local_18 & 0x3fff) == 0;
      local_6 = (int *)0x22b2;
      local_8 = (undefined1 *)0xaf4f;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uVar4 = 0x22b2;
      local_8 = (undefined1 *)0xaf54;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_16 = 1;
      }
    }
    local_8 = (undefined1 *)uVar4;
  }
  for (local_10 = 1; local_10 <= *(int *)0x152; local_10 = local_10 + 1) {
    local_6 = (int *)local_10;
    uVar3 = 0;
    local_a = (undefined1 *)0xaf75;
    uVar7 = func_0x000003ef();
    uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
    local_a = (undefined1 *)uVar7;
    if ((*(byte *)((int)local_a + 10) & 2) != 0) {
      bVar1 = *(byte *)((int)local_a + 8) >> 4;
      local_18 = (uint)bVar1;
      local_6 = (int *)0x0;
      local_8 = (undefined1 *)0xaf9f;
      func_0x000297e6();
      uVar6 = bVar1 == 0;
      local_6 = (int *)0x22b2;
      local_8 = (undefined1 *)0xafac;
      func_0x000297e6();
      local_6 = (int *)0x22b2;
      uVar3 = 0x22b2;
      local_8 = (undefined1 *)0xafb1;
      FUN_28b3_1181();
      if (!(bool)uVar6) {
        local_16 = 1;
      }
    }
    local_8 = (undefined1 *)uVar3;
  }
  if (local_16 != 0) {
    local_6 = (int *)0x1dc;
    local_a = (undefined1 *)0xafd2;
    func_0x00012276();
    local_6 = (int *)0x522;
    local_8 = (undefined1 *)0x676;
    local_a = (undefined1 *)0x214b;
    local_c = local_7e;
    local_e = 0x11f2;
    local_10 = 0xafe8;
    FUN_21f2_3454();
    local_6 = &local_1a;
    local_8 = local_88;
    local_a = local_84;
    local_c = local_7e;
    local_e = 1;
    local_10 = 0x22b2;
    local_14._2_2_ = 0xb006;
    iVar2 = FUN_1def_0904();
    if ((*(int *)0x158 == 0) && (((iVar2 == -1 || (iVar2 == 2)) || (local_1a == 2)))) {
      return 0xffff;
    }
  }
  return 0;
}


