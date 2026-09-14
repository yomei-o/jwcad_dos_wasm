/* 2bb4:0adc */

void __cdecl16far FUN_2bb4_0adc(int param_1)

{
  undefined2 unaff_DS;
  undefined1 local_18 [8];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  int local_4;
  
  local_4 = 0x2bb4;
  puStack_6 = (undefined1 *)0xc627;
  FUN_32b2_02bc();
  if (((*(char *)0xb782 == '\0') && (*(int *)0x16c == 0)) && (*(char *)0x125 != '\0')) {
    if (param_1 == 0) {
      local_4 = 0x1faa;
    }
    else {
      local_4 = 0x1fa4;
    }
    puStack_6 = local_18;
    uStack_8 = 0x32b2;
    uStack_a = 0xc657;
    FUN_32b2_2854();
    local_4 = 0;
    puStack_6 = (undefined1 *)0x7;
    uStack_8 = *(undefined2 *)0x1b42;
    uStack_a = 1;
    puStack_c = (undefined1 *)0x1fb0;
    uStack_e = 0x32b2;
    uStack_10 = 0xc671;
    FUN_1def_23c5();
    local_4 = 0;
    puStack_6 = (undefined1 *)0x7;
    uStack_8 = *(undefined2 *)0x1b42;
    uStack_a = 4;
    puStack_c = local_18;
    uStack_e = 0x1def;
    uStack_10 = 0xc68c;
    FUN_1def_23c5();
    local_4 = 0;
    puStack_6 = (undefined1 *)0x7;
    uStack_8 = *(undefined2 *)0x1b42;
    uStack_a = 0x38;
    puStack_c = local_18;
    uStack_e = 0x1def;
    uStack_10 = 0xc6a7;
    FUN_1def_23c5();
    do {
      local_4 = 0;
      puStack_6 = (undefined1 *)0x0;
      uStack_8 = 0x1def;
      uStack_a = 0xc6b9;
      FUN_2bb4_09a2();
    } while (local_4 + 1 < 5);
  }
  return;
}


