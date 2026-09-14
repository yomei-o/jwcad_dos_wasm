/* 2bb4:09a2 */

void __cdecl16far FUN_2bb4_09a2(uint param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 local_18;
  undefined1 local_16 [2];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  int iStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  int iStack_6;
  
  iStack_6 = 0xc4ed;
  FUN_32b2_02bc();
  if ((-1 < (int)param_1) && ((int)param_1 < 5)) {
    iStack_6 = 0x32b2;
    puStack_8 = (undefined1 *)0xc506;
    FUN_32b2_6d14();
    uVar2 = (int)(param_1 << 1) < 0;
    uVar3 = (param_1 & 0x3fff) == 0;
    iStack_6 = 0x32b2;
    puStack_8 = (undefined1 *)0xc516;
    FUN_32b2_6cc6();
    iStack_6 = 0x32b2;
    puStack_8 = (undefined1 *)0xc51b;
    FUN_32b2_7258();
    iStack_6 = 0x32b2;
    puStack_8 = (undefined1 *)0xc520;
    FUN_32b2_7191();
    if ((bool)uVar2 || (bool)uVar3) {
      puStack_8 = (undefined1 *)0x1f9d;
    }
    else {
      puStack_8 = (undefined1 *)0x1f98;
    }
    iStack_6 = param_1 + 1;
    puStack_a = local_16;
    iStack_c = 0x32b2;
    puStack_e = (undefined1 *)0xc53e;
    FUN_32b2_2854();
    if (param_2 == 0) {
      iStack_6 = 0x1fa2;
      puStack_8 = local_16;
      puStack_a = (undefined1 *)0x32b2;
      iStack_c = 0xc554;
      FUN_32b2_2126();
    }
    if (*(byte *)0x125 < 2) {
      local_18 = 7;
    }
    else {
      if ((int)param_1 < 1) {
        iVar1 = 1;
      }
      else {
        iVar1 = param_1 + 2;
      }
      local_18 = *(undefined2 *)(iVar1 * 2 + 0xa70);
    }
    iStack_6 = param_2;
    puStack_8 = (undefined1 *)local_18;
    puStack_a = (undefined1 *)*(undefined2 *)0x1b42;
    iStack_c = param_1 * 4 + 9;
    puStack_e = local_16;
    uStack_10 = 0x32b2;
    uStack_12 = 0xc59f;
    FUN_1def_23c5();
    iStack_6 = param_2;
    puStack_8 = (undefined1 *)local_18;
    puStack_a = (undefined1 *)*(undefined2 *)0x1b42;
    iStack_c = param_1 * 4 + 0x3d;
    puStack_e = local_16;
    uStack_10 = 0x1def;
    uStack_12 = 0xc5b9;
    FUN_1def_23c5();
    iStack_6 = 0xffff;
    puStack_8 = (undefined1 *)0x7;
    puStack_a = (undefined1 *)*(undefined2 *)0x1b40;
    iStack_c = *(undefined2 *)0x1b3e;
    puStack_e = (undefined1 *)*(undefined2 *)0x1b40;
    uStack_10 = 0;
    uStack_12 = 0x1def;
    uStack_14 = 0xc5d8;
    FUN_1def_0000();
    iStack_6 = 0xffff;
    puStack_8 = (undefined1 *)0x7;
    puStack_a = (undefined1 *)*(undefined2 *)0x1b40;
    iStack_c = 0;
    puStack_e = (undefined1 *)*(undefined2 *)0xa5a;
    uStack_10 = 0;
    uStack_12 = 0x1def;
    uStack_14 = 0xc5f4;
    FUN_1def_0000();
    iStack_6 = 0xffff;
    puStack_8 = (undefined1 *)0x7;
    puStack_a = (undefined1 *)*(undefined2 *)0x1b40;
    iStack_c = *(undefined2 *)0x1b3e;
    puStack_e = (undefined1 *)*(undefined2 *)0xa5a;
    uStack_10 = *(undefined2 *)0x1b3e;
    uStack_12 = 0x1def;
    uStack_14 = 0xc614;
    FUN_1def_0000();
  }
  return;
}


