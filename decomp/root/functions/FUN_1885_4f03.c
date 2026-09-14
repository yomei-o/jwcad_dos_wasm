/* 1885:4f03 */

void __cdecl16far FUN_1885_4f03(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined1 uVar3;
  int local_10;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined2 uVar9;
  
  FUN_32b2_02bc();
  local_10 = *(int *)0xc3ba;
  uVar8 = *(uint *)0xc3bc;
  *(byte *)0xc3be = *(byte *)0xc3be | 1;
  if ((*(byte *)0xc3be & 8) == 0) {
    if (local_10 <= *(int *)0x1b3e) {
      if ((*(byte *)0xc3be & 4) != 0) {
        if ((((*(int *)0xa5c < local_10) && (*(int *)0xa5e <= (int)uVar8)) &&
            ((int)uVar8 <= *(int *)0xa60)) ||
           (((*(byte *)0xb782 < 4 && (local_10 < *(int *)0xa5c)) &&
            ((400 < (int)uVar8 && ((int)uVar8 < *(int *)0xa60)))))) {
          if (*(int *)0xa5c <= local_10) {
            uVar2 = 0;
            uVar3 = *(int *)0xcb6 == 0;
            if (!(bool)uVar3) {
              FUN_32b2_6d14();
              FUN_32b2_6cc6();
              FUN_32b2_6fc7();
              FUN_32b2_7258();
              FUN_32b2_7191(0x32b2);
              if (!(bool)uVar2 && !(bool)uVar3) {
                FUN_32b2_6d14();
                FUN_32b2_6cc6();
                FUN_32b2_6fc7();
                FUN_32b2_7258();
                FUN_32b2_7191(0x32b2);
                if (!(bool)uVar2 && !(bool)uVar3) {
                  FUN_32b2_6cc6();
                  FUN_32b2_6fd6();
                  uVar9 = 0xd858;
                  FUN_32b2_7258();
                  FUN_32b2_6eb1();
                  FUN_32b2_6cc6();
                  uVar7 = 0x32b2;
                  FUN_32b2_7258();
                  FUN_32b2_6eb1();
                  FUN_1885_43a6(uVar9,uVar7);
                  FUN_32b2_6cc6();
                  FUN_32b2_6fd6();
                  uVar9 = 0xd89a;
                  FUN_32b2_7258();
                  FUN_32b2_6eb1();
                  FUN_32b2_6cc6();
                  FUN_32b2_6fd6();
                  uVar7 = 0x32b2;
                  FUN_32b2_7258();
                  FUN_32b2_6eb1();
                  FUN_1885_43a6(uVar9,uVar7);
                  return;
                }
              }
            }
          }
          uVar7 = *(undefined2 *)0xc3c0;
          uVar9 = *(undefined2 *)0xa60;
          FUN_1885_3c2b(uVar7,uVar9,uVar7,uVar9,uVar7,*(undefined2 *)0xc3c2);
          FUN_1885_3c2b(*(undefined2 *)0xa5c,uVar9,*(undefined2 *)0xc3c2,uVar9,*(undefined2 *)0xc3c0
                       );
          FUN_1885_4bcb(uVar9,uVar9,*(undefined2 *)0xc3c0);
          return;
        }
        if (*(byte *)0x123 < 4) {
          local_10 = local_10 + -4;
          if (local_10 < 4) {
            local_10 = 0;
          }
          if (*(int *)0x1b3e + -8 < local_10) {
            local_10 = *(int *)0x1b3e + -8;
          }
          local_10 = local_10 + 7;
          uVar1 = (int)uVar8 >> 0xf;
          iVar5 = (((int)((uVar8 ^ uVar1) - uVar1) >> 4 ^ uVar1) - uVar1) * 0x10;
          iVar6 = iVar5 + 0xf;
          while (iVar4 = local_10, iVar5 <= iVar6) {
            local_10 = 0x32b2;
            FUN_1885_3c2b(iVar4,iVar5,iVar4,iVar5,*(undefined2 *)0xc3c0,0xffff);
            iVar5 = iVar4 + 1;
          }
          return;
        }
      }
      if ((int)(*(int *)0xa60 + 10U) < (int)uVar8) {
        uVar8 = *(int *)0xa60 + 10U;
      }
      iVar5 = 0;
      iVar6 = local_10;
      while (iVar4 = local_10, iVar5 < 0xb) {
        local_10 = 0x32b2;
        iVar6 = iVar4;
        FUN_1885_3c2b();
        if (0x32b2 < *(int *)0x1b3e) {
          local_10 = 0x32b3;
        }
        uVar8 = uVar8 + 1;
        if (*(int *)0x1b40 < (int)uVar8) {
          return;
        }
        iVar5 = iVar4 + 1;
      }
      iVar5 = iVar6 + 4;
      local_10 = iVar6 + 6;
      iVar6 = 0;
      do {
        if (iVar5 < *(int *)0x1b3e) {
          if (*(int *)0x1b3e < local_10) {
            local_10 = *(int *)0x1b3e;
          }
          FUN_1885_3c2b(local_10,uVar8,local_10,uVar8,*(undefined2 *)0xc3c0,0xffff);
          iVar4 = uVar8 + 1;
          iVar5 = 0x32b2;
          iVar6 = 0x32b2;
          local_10 = 0x32b2;
          FUN_1885_3c2b();
          uVar8 = iVar4 + 1;
          if (*(int *)0x1b40 < (int)uVar8) {
            return;
          }
        }
        iVar5 = iVar5 + 1;
        local_10 = local_10 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 5);
    }
  }
  else {
    *(undefined2 *)0xc3ba = 9999;
  }
  return;
}


