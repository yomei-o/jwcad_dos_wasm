/* 1885:3c74 */

undefined2 __cdecl16far FUN_1885_3c74(void)

{
  char *pcVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x1885;
  local_6 = 0xc4cf;
  FUN_32b2_02bc();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc4d8;
  FUN_32b2_6cc6();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc4dd;
  FUN_32b2_7258();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc4e6;
  FUN_32b2_7065();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc4ef;
  FUN_32b2_710c();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc4f7;
  FUN_32b2_6e63();
  uVar2 = *(byte *)0x4a < 10;
  uVar3 = *(byte *)0x4a == 10;
  if ((bool)uVar2) {
    *(undefined1 *)0x4a = 1;
  }
  else {
    *(undefined1 *)0x4a = 0xb;
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc513;
    FUN_32b2_6cc6();
    local_4 = &local_6;
    local_6 = 0x32b2;
    FUN_32b2_707d();
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc522;
    FUN_32b2_6e63();
  }
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc52a;
  FUN_32b2_6cc6();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc533;
  FUN_32b2_6cc6();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc538;
  FUN_32b2_7191();
  if (!(bool)uVar2 && !(bool)uVar3) {
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc543;
    FUN_32b2_6cc6();
    local_4 = &local_6;
    local_6 = 0x32b2;
    FUN_32b2_704d();
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc552;
    FUN_32b2_6e63();
    pcVar1 = (char *)0x4a;
    *pcVar1 = *pcVar1 + '\x01';
    uVar3 = *pcVar1 == '\0';
  }
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc55e;
  FUN_32b2_6cc6();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc567;
  FUN_32b2_6cc6();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc56c;
  FUN_32b2_7191();
  if (!(bool)uVar2 && !(bool)uVar3) {
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc577;
    FUN_32b2_6cc6();
    local_4 = &local_6;
    local_6 = 0x32b2;
    FUN_32b2_704d();
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc586;
    FUN_32b2_6e63();
    pcVar1 = (char *)0x4a;
    *pcVar1 = *pcVar1 + '\x01';
    uVar3 = *pcVar1 == '\0';
  }
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc592;
  FUN_32b2_6cc6();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc59b;
  FUN_32b2_6cc6();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc5a0;
  FUN_32b2_7191();
  if (!(bool)uVar2 && !(bool)uVar3) {
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc5ab;
    FUN_32b2_6cc6();
    local_4 = &local_6;
    local_6 = 0x32b2;
    FUN_32b2_704d();
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc5ba;
    FUN_32b2_6e63();
    pcVar1 = (char *)0x4a;
    *pcVar1 = *pcVar1 + '\x01';
    uVar3 = *pcVar1 == '\0';
  }
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc5c6;
  FUN_32b2_6cc6();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc5cf;
  FUN_32b2_6cc6();
  local_4 = (undefined2 *)0x32b2;
  local_6 = 0xc5d4;
  FUN_32b2_7191();
  if (!(bool)uVar2 && !(bool)uVar3) {
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc5df;
    FUN_32b2_6cc6();
    local_4 = &local_6;
    local_6 = 0x32b2;
    FUN_32b2_704d();
    local_4 = (undefined2 *)0x32b2;
    local_6 = 0xc5ee;
    FUN_32b2_6e63();
    *(char *)0x4a = *(char *)0x4a + '\x01';
  }
  *(undefined2 *)0x7a2a = local_6;
  *(undefined2 *)0x7a2c = local_4;
  return 0x7a2a;
}


