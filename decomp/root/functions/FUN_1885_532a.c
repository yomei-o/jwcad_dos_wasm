/* 1885:532a */

undefined2 __cdecl16far FUN_1885_532a(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  uint local_28;
  uint local_26;
  uint local_24;
  uint local_22;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 uStack_c;
  undefined2 uStack_a;
  uint local_8;
  undefined2 *local_6;
  uint *local_4;
  
  local_4 = (uint *)0x1885;
  local_6 = (undefined2 *)0xdb85;
  FUN_32b2_02bc();
  local_6 = (undefined2 *)0x1;
  local_8 = 1;
  local_26 = 0;
  local_28 = 0;
  do {
    if ((local_6 == (undefined2 *)0x0) && (local_8 == 0)) break;
    if (*(int *)0xb780 != 0) {
      local_14 = 0;
    }
    local_16 = 5;
    local_4 = &local_24;
    local_6 = &local_16;
    local_8 = 0x33;
    uStack_a = 0x32b2;
    uStack_c = 0xdbca;
    FUN_32b2_247a();
    local_26 = local_26 | local_22;
    if (*(int *)0xb780 == 0) {
      local_16 = 7;
    }
    else {
      local_14 = 1;
      local_16 = 5;
    }
    local_4 = &local_24;
    local_6 = &local_16;
    local_8 = 0x33;
    uStack_a = 0x32b2;
    uStack_c = 0xdc11;
    FUN_32b2_247a();
    local_8 = local_24;
    if (*(int *)0xb780 != 0) {
      local_8 = local_24 & 2;
    }
    local_28 = local_28 | local_22;
  } while ((local_26 != 0) || (local_28 != 0));
  if (local_26 == 0) {
    if (local_28 == 0) {
      local_4 = (uint *)0x32b2;
      local_6 = (undefined2 *)0xdc64;
      uVar2 = FUN_1def_2742();
      if ((uVar2 & 0xff) != 0x20) {
        if (uVar2 != 0) {
          *(undefined1 *)0x15c = (char)((int)uVar2 / 0x100);
        }
        return 0;
      }
    }
    uVar1 = 2;
  }
  else if (local_28 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}


