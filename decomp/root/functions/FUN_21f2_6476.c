/* 21f2:6476 */

void __cdecl16far FUN_21f2_6476(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  uint in_stack_00000014;
  byte in_stack_00000018;
  int in_stack_0000001a;
  undefined2 local_2a;
  undefined1 local_28 [4];
  undefined2 local_24;
  undefined2 local_22;
  undefined1 local_20;
  undefined1 local_1e [4];
  undefined1 local_1a [4];
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 *puStack_10;
  undefined1 *local_e;
  undefined1 *puStack_c;
  undefined1 *local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0x21f2;
  local_6 = 0x83a1;
  FUN_32b2_02bc();
  if (in_stack_00000014._1_1_ < 0x5a) {
    local_20 = 0;
    uVar2 = 0;
    if ((in_stack_00000018 & 0x10) != 0) {
      local_4 = 0x32b2;
      local_6 = 0x83bd;
      FUN_32b2_6cc6();
      local_4 = 0x32b2;
      local_6 = 0x83c6;
      FUN_32b2_6cc6();
      local_4 = 0x32b2;
      local_6 = 0x83cb;
      FUN_32b2_7191();
      if ((bool)uVar2) {
        local_20 = 1;
      }
      else {
        local_20 = 0;
      }
    }
    if (in_stack_0000001a == 0) {
      local_16 = *(undefined2 *)0xc48;
      local_14 = *(undefined2 *)0xc4a;
      local_24 = *(undefined2 *)0xc4c;
      local_22 = *(undefined2 *)0xc4e;
    }
    else {
      local_16 = *(undefined2 *)0xcaa;
      local_14 = *(undefined2 *)0xcac;
      local_24 = *(undefined2 *)0xcae;
      local_22 = *(undefined2 *)0xcb0;
    }
    local_4 = 0x32b2;
    local_6 = 0x842f;
    FUN_32b2_6cc6();
    local_4 = 0x32b2;
    local_6 = 0x8437;
    FUN_32b2_704d();
    local_4 = 0x32b2;
    local_6 = 0x8440;
    FUN_32b2_6d9b();
    local_4 = 0x32b2;
    local_6 = 0x8445;
    FUN_32b2_718c();
    local_4 = 0x32b2;
    local_6 = 0x844d;
    FUN_32b2_6e4b();
    local_4 = 0x32b2;
    local_6 = 0x8455;
    FUN_32b2_6ef9();
    local_4 = 0x32b2;
    local_6 = 0x845d;
    FUN_32b2_6cc6();
    local_4 = 0x32b2;
    local_6 = 0x8465;
    FUN_32b2_704d();
    local_4 = 0x32b2;
    local_6 = 0x846e;
    FUN_32b2_6d9b();
    local_4 = 0x32b2;
    local_6 = 0x8473;
    FUN_32b2_7178();
    local_4 = 0x32b2;
    local_6 = 0x847b;
    FUN_32b2_6e4b();
    local_4 = 0x32b2;
    local_6 = 0x8483;
    FUN_32b2_6cc6();
    local_4 = 0x32b2;
    local_6 = 0x848b;
    FUN_32b2_704d();
    local_4 = 0x32b2;
    local_6 = 0x8490;
    FUN_32b2_718c();
    local_4 = 0x32b2;
    local_6 = 0x8498;
    FUN_32b2_6e63();
    local_4 = 0x32b2;
    local_6 = 0x84a0;
    FUN_32b2_6cc6();
    local_4 = 0x32b2;
    local_6 = 0x84a8;
    FUN_32b2_704d();
    local_4 = 0x32b2;
    local_6 = 0x84b0;
    FUN_32b2_7035();
    local_4 = 0x32b2;
    local_6 = 0x84b8;
    FUN_32b2_6e63();
    local_4 = 0x32b2;
    local_6 = 0x84c0;
    FUN_32b2_6cc6();
    local_4 = 0x32b2;
    local_6 = 0x84c8;
    FUN_32b2_704d();
    local_4 = 0x32b2;
    local_6 = 34000;
    FUN_32b2_7095();
    local_4 = 0x32b2;
    local_6 = 0x84d8;
    FUN_32b2_6e63();
    local_4 = 0x32b2;
    local_6 = 0x84e0;
    FUN_32b2_6cc6();
    local_4 = 0x32b2;
    local_6 = 0x84e8;
    FUN_32b2_704d();
    local_4 = 0x32b2;
    local_6 = 0x84f0;
    FUN_32b2_7035();
    local_4 = 0x32b2;
    local_6 = 0x84f8;
    FUN_32b2_6e63();
    uVar1 = *(undefined2 *)((uint)in_stack_00000014._1_1_ * 2 + 0xa70);
    local_2a = uVar1;
    if ((*(char *)0x121 != '\0') && ((in_stack_00000018 & 8) != 0)) {
      local_2a = 8;
    }
    local_4 = CONCAT11((char)((uint)uVar1 >> 8),local_20);
    local_6 = *(undefined2 *)((in_stack_00000014 & 0xff) * 2 + 0xa88);
    uStack_8 = local_2a;
    local_a = local_28;
    puStack_c = local_1a;
    local_e = local_1e;
    puStack_10 = &local_12;
    local_12 = 0x32b2;
    local_14 = 0x853f;
    FUN_1def_17bb();
  }
  return;
}


