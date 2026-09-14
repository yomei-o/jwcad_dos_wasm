/* 10ad:0f45 */

void __cdecl16far FUN_10ad_0f45(int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined1 uVar5;
  int local_c;
  
  iVar4 = 0x32b2;
  FUN_32b2_02bc();
  if (param_1 == 0) {
    iVar4 = 0x1885;
    FUN_1885_3b7a();
    *(undefined2 *)0xce6 = 0;
    *(undefined1 *)0xb782 = 0;
    *(undefined2 *)0xa5c = *(undefined2 *)0xa58;
    *(undefined2 *)0xa60 = *(undefined2 *)0xa5a;
  }
  bVar2 = false;
  if ((*(int *)0xb310 < 0) || (0xff < *(int *)0xb310)) {
    *(undefined2 *)0xb310 = 0;
    bVar2 = true;
  }
  uVar3 = (int)*(uint *)0xb310 >> 0xf;
  uVar5 = (((int)((*(uint *)0xb310 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3 & 0x3fff) == 0;
  FUN_32b2_6cc6();
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_6cc6();
  FUN_32b2_7191();
  if (!(bool)uVar5) {
    FUN_32b2_6cc6();
    FUN_32b2_6e63();
    bVar2 = true;
  }
  if (bVar2) {
    FUN_1885_2e9a();
  }
  if (*(char *)0xcf4 != '\0') {
    if ((*(char *)0xcf4 == '\x01') || (*(char *)0xcf4 == '\x03')) {
      FUN_32b2_2854();
      FUN_32b2_2126();
      FUN_32b2_2126();
      FUN_1def_23c5();
      *(undefined2 *)0xc22 = 1;
    }
    if (*(char *)0xcf4 == '\x02') {
      *(undefined1 *)0xcf4 = 3;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    FUN_21f2_0118();
    FUN_21f2_0118();
    *(undefined1 *)0xcf4 = 0;
  }
  *(undefined2 *)0x158 = 0;
  *(undefined2 *)0x16c = 0;
  uVar3 = (int)*(uint *)0x16a >> 0xf;
  *(int *)0x16a = (*(uint *)0x16a ^ uVar3) - uVar3;
  *(byte *)0xbe98 = *(byte *)0xbe98 & 0xfd;
  FUN_12c1_00b6();
  *(byte *)0xc3be = *(byte *)0xc3be & 0xf7;
  if (*(int *)0xd12 != 0) {
    FUN_32b2_4b9e();
    *(undefined2 *)0xd12 = 0;
  }
  FUN_32b2_252e();
  *(undefined2 *)0xd70 = 0;
  if (*(char *)0x116a != '\0') {
    *(undefined1 *)0x116a = 1;
  }
  *(undefined2 *)0xc2c = 0;
  *(undefined2 *)0xc20 = 0;
  *(undefined2 *)0xc1a = 0;
  *(undefined2 *)0xd76 = 0;
  *(undefined1 *)0xd15 = 0;
  *(undefined1 *)0x1062 = 0;
  *(undefined1 *)0xc17 = 0;
  *(undefined1 *)0xc16 = 0;
  *(undefined1 *)0xed8 = 0;
  *(undefined1 *)0xc0f = 0;
  *(undefined1 *)0xb8c = 0;
  *(undefined1 *)0xc2e = 0;
  *(undefined1 *)0xd74 = 0;
  *(undefined1 *)0x121 = 0;
  FUN_2b6e_0033();
  FUN_21f2_1ef9();
  if (*(int *)0xa62 != 0) {
    *(undefined2 *)0x11c = 1;
    *(undefined1 *)0x11d6 = 0;
    *(undefined1 *)0xb9e = 0;
    *(undefined2 *)0xc26 = 0;
    *(undefined2 *)0x1150 = 0;
    *(undefined2 *)0xb6a = 0;
    *(undefined2 *)0xc28 = 0;
    *(undefined2 *)0xca2 = 0;
    *(undefined2 *)0xcb8 = 0;
    if ((*(char *)0x118 != '\n') && (iVar4 == 0)) {
      FUN_1885_3803();
    }
    if (*(int *)0xbc2 != 0) {
      FUN_17a6_0635();
      *(undefined2 *)0xbc2 = 0;
    }
    if (*(int *)0xc04 != 0) {
      *(undefined2 *)0xc04 = 0;
      FUN_21f2_27eb();
      *(undefined2 *)0xbc0 = 1;
    }
    if (*(int *)0xc06 != 0) {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    if (*(int *)0xc08 != 0) {
      if (iVar4 == 0) {
        FUN_1def_13e3();
        FUN_1885_1f75();
      }
      else {
        FUN_1def_26a9();
        FUN_1def_2636();
        FUN_1def_0000();
        local_c = 3;
        do {
          FUN_1def_26a9();
          FUN_1def_2636();
          local_c = local_c + 1;
        } while (local_c < 0x19);
      }
      FUN_21f2_27eb();
      *(undefined2 *)0xc08 = 0;
      *(undefined2 *)0xbc0 = 1;
    }
    if (*(int *)0xc0a != 0) {
      *(undefined2 *)0xc0a = 0;
      FUN_21f2_27eb();
      *(undefined2 *)0xbc0 = 1;
    }
    *(undefined2 *)0xb6a = 0;
    FUN_1def_2730();
    if ((iVar4 == 0) && (*(int *)0xa62 != 0x20)) {
      *(undefined2 *)0xa64 = *(undefined2 *)0xa62;
    }
  }
  return;
}


