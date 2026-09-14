/* 13bf:17e7 */

void __cdecl16far FUN_13bf_17e7(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  
  FUN_32b2_02bc();
  if ((param_1 == 0) || ((*(int *)0xc18 == 0 && (*(int *)0xc1e == 0)))) {
    FUN_1def_23c5(0x1623,0x11,2,7,0);
  }
  if ((*(int *)0xc20 != 100) && ((*(int *)0xc1a != -5 || (param_1 != 1)))) {
    if ((*(int *)0xc1a == -5) && ((param_1 == 1 && (*(int *)0xa62 == 5)))) {
      *(undefined2 *)0xc1e = 0;
      *(undefined2 *)0xc18 = 0;
      return;
    }
    if (*(int *)0xc1a == 0x1e) {
      if (param_1 == 0) {
        return;
      }
      if ((*(int *)0xc18 == 1) || (*(int *)0xc1e == 1)) {
        FUN_13bf_178a(0x704);
      }
      if (*(int *)0xc18 == -1) {
        FUN_13bf_17c2(0x70e);
      }
      if (*(int *)0xc18 == 2) {
        FUN_13bf_178a(0x1684);
      }
      if (*(int *)0xc18 != -2) {
        return;
      }
      uVar1 = 0x168f;
    }
    else {
      if ((*(int *)0xc20 == 0x1f) && (param_1 == 2)) {
        if (*(int *)0xc1e != -2) {
          return;
        }
        FUN_13bf_17c2(0x70e);
        return;
      }
      if (param_1 != 1) {
LAB_13bf_1b66:
        if (param_1 == 2) {
          if (*(int *)0xc1e == -1) {
            FUN_13bf_17c2(0x172f);
          }
          if (*(int *)0xc1e == 1) {
            FUN_13bf_17c2(0x173a);
          }
          if (*(int *)0xc1e == 2) {
            if (*(int *)0xc20 == 2) {
              FUN_13bf_17c2(0x1747);
            }
            if (((*(int *)0xa62 == 3) || (*(int *)0xce6 == 3)) || (*(int *)0xc20 == 0x14)) {
              uVar1 = 0x174d;
            }
            else {
              uVar1 = 0x1754;
            }
            FUN_1def_23c5(uVar1,0x16,2,7,0);
          }
          if (*(int *)0xc1e == -2) {
            FUN_13bf_17c2(0x175e);
          }
        }
        FUN_1def_0000(0,*(undefined2 *)0xa5e,*(undefined2 *)0x1b3e,*(undefined2 *)0xa5e,7,0xffff);
        return;
      }
      if ((*(int *)0xc1a == 10) || (*(int *)0xc1a == 0xb)) {
        if (*(int *)0xc18 == 2) {
          FUN_13bf_178a(0x169a);
        }
        if (*(int *)0xc1a == 0xb) {
          return;
        }
        if (*(int *)0xc18 == 1) {
          FUN_13bf_178a(0x730);
        }
        if (*(int *)0xc18 != -2) {
          return;
        }
        uVar1 = 0x73a;
      }
      else {
        if (*(int *)0xc1a != 0xc) {
          if (*(int *)0xc18 == 1) {
            if (*(char *)0xc13e == '\0') {
              uVar1 = 0x16bc;
            }
            else {
              uVar1 = 0x16b5;
            }
            FUN_13bf_178a(uVar1);
          }
          if (*(int *)0xc18 == 5) {
            FUN_13bf_178a(0x16c3);
            if (*(char *)0xc13e == '\0') {
              uVar2 = 6;
              uVar1 = 0x16d3;
            }
            else {
              uVar2 = 4;
              uVar1 = 0x16ce;
            }
            FUN_1def_23c5(uVar1,0x1b,2,uVar2,0);
          }
          if (*(int *)0xc18 == 500) {
            FUN_13bf_178a(0x16d8);
          }
          if (*(int *)0xc18 == -1) {
            FUN_13bf_178a(0x872);
          }
          if (*(int *)0xc18 == -0x32) {
            FUN_13bf_178a(0x866);
          }
          if (*(int *)0xc18 == 2) {
            if (*(char *)0xc13e == '\0') {
              uVar1 = 0x16eb;
            }
            else {
              uVar1 = 0x16e2;
            }
            FUN_13bf_178a(uVar1);
          }
          if (*(int *)0xc18 == -2) {
            if (*(char *)0xc13e == '\0') {
              uVar1 = 0x16f7;
            }
            else {
              uVar1 = 0x16f4;
            }
            FUN_13bf_178a(uVar1);
            FUN_1def_23c5(0x16fa,0x13,2,(-(*(char *)0xc13e == '\0') & 2U) + 4,0);
          }
          if (*(int *)0xc18 == 100) {
            FUN_13bf_178a(0x1701);
          }
          if (*(int *)0xc18 == 0x1e) {
            FUN_13bf_178a(0x170a);
          }
          if (*(int *)0xc18 == -0x1e) {
            FUN_13bf_178a(0x1711);
          }
          if (*(int *)0xc18 == 0x14) {
            FUN_13bf_178a(0x171a);
          }
          if (*(int *)0xc18 == -0x14) {
            FUN_13bf_178a(0x1721);
          }
          if (*(int *)0xc18 == -100) {
            FUN_13bf_178a(0x1728);
          }
          goto LAB_13bf_1b66;
        }
        if (*(int *)0xc18 == 2) {
          FUN_13bf_178a(0x16a1);
        }
        if (*(int *)0xc18 != -2) {
          return;
        }
        uVar1 = 0x16aa;
      }
    }
    FUN_13bf_178a(uVar1);
    return;
  }
  if (*(int *)0xc20 == 100) {
    if (*(int *)0xc1e == -1) {
      if (param_1 == 1) {
        FUN_13bf_17c2(0x1632);
      }
      if (param_1 == 2) {
        FUN_13bf_17c2(0x163b);
      }
    }
    if ((*(int *)0xc1e == 1) && (param_1 != 0)) {
      FUN_13bf_17c2(0x1644);
    }
    if ((*(int *)0xc1e == 10) && (param_1 != 0)) {
      FUN_13bf_17c2(0x164d);
    }
    if ((*(int *)0xc1e == -2) && (param_1 == 1)) {
      FUN_13bf_17c2(0x1656);
    }
    if ((*(int *)0xc1e != -2) || (param_1 != 2)) goto LAB_13bf_18d3;
    uVar1 = 0x1664;
  }
  else {
    if (((*(int *)0xc1e != -1) || (param_1 == 0)) || (*(int *)0xa62 == 5)) goto LAB_13bf_18d3;
    uVar1 = 0x1672;
  }
  FUN_13bf_17c2(uVar1);
LAB_13bf_18d3:
  if ((*(int *)0xc1e == 2) && (param_1 != 0)) {
    FUN_13bf_17c2(0x167b);
  }
  if (*(int *)0xc20 != 100) {
    *(undefined2 *)0xc18 = *(undefined2 *)0xc1e;
    *(undefined2 *)0xc1e = 0;
  }
  return;
}


