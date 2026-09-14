/* 10ad:158b */

int __cdecl16far FUN_10ad_158b(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_2c [20];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  int iStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined2 uStack_6;
  int iVar3;
  
  uVar2 = 0x32b2;
  uStack_6 = 0x2066;
  FUN_32b2_02bc();
  iVar3 = 2;
  do {
    uStack_6 = 0;
    puStack_8 = (undefined1 *)0x7;
    uStack_a = 2;
    puStack_e = (undefined1 *)0x12e1;
    uStack_12 = 0x2083;
    uStack_10 = uVar2;
    iStack_c = iVar3;
    FUN_1def_23c5();
    uStack_6 = 0;
    puStack_8 = (undefined1 *)0x7;
    uStack_a = 3;
    puStack_e = (undefined1 *)0x12e3;
    uStack_10 = 0x1def;
    uVar2 = 0x1def;
    uStack_12 = 0x209d;
    iStack_c = iVar3;
    FUN_1def_23c5();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  uStack_6 = 0;
  puStack_8 = (undefined1 *)0x1def;
  uStack_a = 0x20b1;
  FUN_1885_5256();
  uStack_6 = 0x2f;
  puStack_8 = (undefined1 *)0x78;
  uStack_a = 0x11;
  iStack_c = 1;
  puStack_e = (undefined1 *)0x1885;
  uStack_10 = 0x20c7;
  FUN_1885_1f1b();
  if (*(byte *)0xcc6 < 2) {
    uStack_6 = 0x12e5;
    puStack_8 = local_2c;
    uStack_a = 0x1885;
    iStack_c = 0x20de;
    FUN_32b2_2854();
    iVar3 = 4;
  }
  else {
    uStack_6 = 0x12e8;
    puStack_8 = local_2c;
    uStack_a = 0x1885;
    iStack_c = 0x20f4;
    FUN_32b2_2854();
    iVar3 = 7;
  }
  uStack_6 = 0x12eb;
  puStack_8 = local_2c;
  uStack_a = 0x32b2;
  iStack_c = 0x2108;
  FUN_32b2_2126();
  if (*(char *)0xcc6 == '\x01') {
    uStack_6 = 0x12f2;
    puStack_8 = local_2c;
    uStack_a = 0x32b2;
    iStack_c = 0x211e;
    FUN_32b2_2126();
    iVar3 = 5;
  }
  else {
    uStack_6 = 0x12f6;
    puStack_8 = local_2c;
    uStack_a = 0x32b2;
    iStack_c = 0x2134;
    FUN_32b2_2126();
  }
  uVar2 = 0x32b2;
  if (iVar3 != 7) {
    uStack_6 = 0;
    puStack_8 = (undefined1 *)0x0;
    uStack_a = 2;
    puStack_e = (undefined1 *)0x2f;
    uStack_10 = 0x78;
    uStack_12 = 0x11;
    uStack_14 = 1;
    uStack_16 = 0x32b2;
    uVar2 = 0x1def;
    uStack_18 = 0x215c;
    iStack_c = iVar3;
    FUN_1def_1460();
  }
  uVar1 = 0;
  uStack_6 = 0;
  if (iVar3 == 7) {
    uVar1 = 7;
  }
  uStack_a = 2;
  iStack_c = 3;
  puStack_e = (undefined1 *)0x12fa;
  uStack_12 = 0x217f;
  uStack_10 = uVar2;
  puStack_8 = (undefined1 *)uVar1;
  FUN_1def_23c5();
  uStack_6 = 0;
  uStack_a = 3;
  iStack_c = 3;
  puStack_e = local_2c;
  uStack_10 = 0x1def;
  uStack_12 = 0x2194;
  puStack_8 = (undefined1 *)uVar1;
  FUN_1def_23c5();
  uStack_6 = 0x1def;
  puStack_8 = (undefined1 *)0x219c;
  FUN_1885_1f49();
  return iVar3;
}


