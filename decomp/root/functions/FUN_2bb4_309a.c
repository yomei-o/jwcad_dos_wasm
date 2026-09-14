/* 2bb4:309a */

undefined2 __cdecl16far FUN_2bb4_309a(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 local_2c;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_32b2_02bc();
  if (param_1 == 0) {
    local_2c = 0;
  }
  else {
    local_2c = 7;
  }
  if (param_1 == 2) {
    iVar6 = 1;
  }
  else {
    iVar6 = 2;
  }
  if (*(int *)0xbc0 != 0) {
    iVar6 = 1;
  }
  if (*(int *)0x11c != 0) {
    iVar6 = 1;
  }
  FUN_1885_5256(0);
  iVar4 = 1;
  do {
    if (iVar6 < iVar4) {
      if (iVar6 != 1) {
        FUN_1def_13db(3,0,*(undefined2 *)0xcb2,*(undefined2 *)0xcb4);
        FUN_1885_1f49();
      }
      return 0;
    }
    if (iVar4 != 1) {
      FUN_1def_13db(3,0,1 - *(int *)0xcb2,*(undefined2 *)0xcb4);
      FUN_1885_1f49();
    }
    if (param_1 == 2) {
      iVar7 = *(int *)0x154;
    }
    else {
      iVar7 = 1;
    }
    for (iVar5 = 1; iVar5 <= iVar7; iVar5 = iVar5 + 1) {
      iVar1 = FUN_1885_532a();
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return 0x20;
        }
        break;
      }
      uVar2 = param_1 < 2;
      if (param_1 == 2) {
        iVar1 = FUN_21f2_06d1(*(undefined1 *)(iVar5 + -0x3f4c));
        uVar2 = false;
        if (iVar1 != 0) goto LAB_2bb4_31f9;
      }
      else {
LAB_2bb4_31f9:
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_6d9b();
        FUN_32b2_7178(0x32b2);
        FUN_32b2_6e4b();
        FUN_32b2_6ef9();
        uVar3 = *(int *)0xa5c == 2;
        FUN_32b2_6d9b();
        FUN_32b2_6cc6();
        FUN_32b2_701d();
        FUN_32b2_704d();
        FUN_32b2_6d9b();
        FUN_32b2_718c(0x32b2);
        FUN_32b2_6e4b();
        FUN_32b2_7191(0x32b2);
        if (!(bool)uVar2 && !(bool)uVar3) {
          FUN_32b2_6d9b();
          FUN_32b2_6cc6();
          FUN_32b2_7191(0x32b2);
          if ((bool)uVar2) {
            uVar3 = *(int *)0xa5e == 2;
            FUN_32b2_6d9b();
            FUN_32b2_6cc6();
            FUN_32b2_7191(0x32b2);
            if (!(bool)uVar2 && !(bool)uVar3) {
              FUN_32b2_6d9b();
              FUN_32b2_6cc6();
              FUN_32b2_7191(0x32b2);
              if ((bool)uVar2) {
                iVar7 = *(int *)0x93c2;
                iVar6 = *(int *)0x93c0;
                iVar5 = *(int *)0x93d6;
                iVar4 = *(int *)0x93d4;
                FUN_32b2_6cc6(*(undefined2 *)0x93d0,*(undefined2 *)0x93d2,iVar4,iVar5,local_2c,0,
                              *(undefined2 *)0x93c8,*(undefined2 *)0x93ca,*(undefined2 *)0x93cc,
                              *(undefined2 *)0x93ce,iVar6,iVar7,*(undefined2 *)0x93c4,
                              *(undefined2 *)0x93c6,*(undefined2 *)0x93c0,*(undefined2 *)0x93c2,
                              *(undefined2 *)0x93c4,*(undefined2 *)0x93c6,0,0);
                local_2c = 0x32b2;
                FUN_32b2_7258();
                FUN_32b2_6eb1();
                FUN_32b2_6cc6();
                FUN_32b2_7258();
                FUN_32b2_6eb1();
                FUN_1def_1eaf();
              }
            }
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


