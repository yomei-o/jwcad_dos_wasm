/* 1885:546d */

void __cdecl16far FUN_1885_546d(uint *param_1,uint *param_2,int *param_3,undefined2 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  uint local_2e;
  int local_2c;
  uint local_2a;
  undefined2 local_28;
  uint local_26;
  undefined2 local_24;
  int local_22;
  uint local_20;
  uint local_1e;
  int local_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  int local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 *puStack_8;
  uint *puStack_6;
  
  puStack_6 = (uint *)0xdcc8;
  FUN_32b2_02bc();
  if (*(int *)0x156 != 0) {
    puStack_6 = (uint *)0x1;
    puStack_8 = (undefined2 *)0x32b2;
    uStack_a = 0xdcd8;
    FUN_1885_5256();
  }
  if (*(int *)0xb780 != 0) {
    local_e = 0;
  }
  if ((*(byte *)0xc3be & 1) != 0) {
    puStack_6 = (uint *)0x32b2;
    puStack_8 = (undefined2 *)0xdcf0;
    FUN_1885_5439();
  }
  local_10 = 5;
  puStack_6 = &local_20;
  puStack_8 = &local_10;
  uStack_a = 0x33;
  uStack_c = 0x32b2;
  local_e = 0xdd06;
  FUN_32b2_247a();
  local_26 = local_1e;
  local_12 = local_1c;
  local_24 = local_1a;
  if (*(int *)0xb780 == 0) {
    local_10 = 7;
  }
  else {
    local_10 = 5;
  }
  puStack_6 = &local_20;
  puStack_8 = &local_10;
  uStack_a = 0x33;
  uStack_c = 0x32b2;
  local_e = 0xdd44;
  FUN_32b2_247a();
  local_2a = local_1e;
  local_22 = local_1c;
  local_28 = local_1a;
  if (local_26 == 0) {
    if (local_1e == 0) {
      local_10 = 3;
      puStack_6 = &local_20;
      puStack_8 = &local_10;
      uStack_a = 0x33;
      uStack_c = 0x32b2;
      local_e = 0xde05;
      FUN_32b2_247a();
      uVar1 = local_1e;
      if (*(int *)0xb780 != 0) {
        uVar1 = local_1e & 2;
      }
      *param_2 = uVar1;
      if (uVar1 != 0) {
        *param_2 = 2;
      }
      if (*(int *)0xb780 != 0) {
        local_20 = local_1e & 1;
      }
      *param_1 = local_20;
      if (local_20 != 0) {
        *param_1 = 1;
      }
      *param_3 = local_1c;
      *param_4 = local_1a;
      if (*(char *)0x128 == '\0') {
        return;
      }
      if (*(char *)0x118 != '\0') {
        return;
      }
      puStack_6 = &local_2e;
      puStack_8 = (undefined2 *)0x32b2;
      uStack_a = 0xde73;
      FUN_32b2_2ca0();
      if (*param_3 != *(int *)0x11a) {
        *(uint *)0xb5b6 = local_2e;
        *(int *)0xb5b8 = local_2c;
        *(int *)0x11a = *param_3;
      }
      if (*(char *)0xcf4 != '\0') {
        *(uint *)0xb5b6 = local_2e;
        *(int *)0xb5b8 = local_2c;
      }
      iVar2 = (local_2c - *(int *)0xb5b8) - (uint)(local_2e < *(uint *)0xb5b6);
      if (iVar2 < *(int *)0x116) {
        return;
      }
      if ((iVar2 <= *(int *)0x116) && (local_2e - *(uint *)0xb5b6 <= *(uint *)0x114)) {
        return;
      }
      *(undefined1 *)0x118 = 1;
      *(undefined2 *)0x158 = 10;
      *(undefined2 *)0xb6a = 0;
      return;
    }
    *param_3 = local_1c;
    *param_4 = local_1a;
    *param_1 = 0;
    if (local_1e == 1) {
      *param_2 = 2;
    }
    else {
      *param_2 = 0x16;
    }
  }
  else {
    *param_3 = local_12;
    *param_4 = local_24;
    *param_2 = 0;
    if (local_26 == 1) {
      *param_1 = 1;
    }
    else {
      *param_1 = 0xb;
    }
  }
  puStack_6 = (uint *)*(undefined2 *)0x914e;
  puStack_8 = (undefined2 *)*(undefined2 *)0x914c;
  uStack_a = *(undefined2 *)0x914a;
  uStack_c = *(undefined2 *)0x9148;
  local_e = *(undefined2 *)0x914e;
  local_10 = *(undefined2 *)0x914c;
  local_12 = *(undefined2 *)0x914a;
  uStack_14 = *(undefined2 *)0x9148;
  uStack_16 = 0;
  uStack_18 = 0x32b2;
  local_1a = 0xddb4;
  FUN_21f2_23a2();
  return;
}


