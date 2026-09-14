/* 13bf:1c8c */

int * __cdecl16far FUN_13bf_1c8c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int **ppiVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined2 unaff_DS;
  int local_34 [4];
  int *local_2c;
  int *local_2a;
  undefined2 local_28;
  int *local_26;
  int *local_24;
  int local_22;
  int *local_20;
  uint local_1e;
  int local_1c;
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  int *local_e;
  int *local_c;
  int *local_a;
  int *local_8;
  int **local_6;
  int **local_4;
  
  local_4 = (int **)0x13bf;
  local_6 = (int **)0x5887;
  FUN_32b2_02bc();
  local_1c = 0;
  local_10 = 0;
  local_12 = 0;
  local_1a = 0;
  local_18 = 0;
  *(undefined2 *)0xc1e = 0;
  *(undefined2 *)0xc18 = 0;
  local_4 = (int **)&local_16;
  local_6 = (int **)&local_14;
  local_8 = param_3;
  local_a = param_2;
  local_c = (int *)0x32b2;
  local_e = (int *)0x58b6;
  FUN_1885_546d();
  piVar5 = (int *)0x1885;
LAB_13bf_1cc9:
  do {
    do {
      while( true ) {
        do {
          while( true ) {
            if (((*param_2 != 0) || (*param_3 == 0)) && ((*param_2 == 0 || (*param_3 != 0)))) {
              if ((0 < local_1c) && (local_1c < 0x1f)) {
                *(int *)0xa62 = local_1c;
                *(undefined2 *)0x158 = 1;
                return (int *)0xfba9;
              }
              piVar6 = piVar5;
              if (-1 < (int)local_a) {
                local_4 = (int **)0x2;
                local_6 = (int **)0x10;
                piVar6 = (int *)0x1885;
                local_a = (int *)0x5f97;
                local_8 = piVar5;
                FUN_1885_3b0c();
                *param_1 = 0;
                *(undefined1 *)0x15a = 1;
                if (local_a == (int *)0x0) {
                  return (int *)0xffff;
                }
                if (*(int *)0xa48 < 0) {
                  return (int *)((uint)(byte)((char)local_a + 0x61) << 8);
                }
                if ((int)local_a <= *(int *)0xa48) {
                  return local_a + 0x18;
                }
                if ((int)local_a <= *(int *)0xa48 + 1) {
                  return (int *)0x7f;
                }
              }
              if ((*(int *)0xc18 != 0) || (*(int *)0xc1e != 0)) {
                local_4 = (int **)0x0;
                local_8 = (int *)0x5ff3;
                local_6 = (int **)piVar6;
                FUN_13bf_17e7();
                if ((*param_2 == 0) && (*param_3 == 0)) {
                  if (*param_4 != 0) {
                    *param_1 = 2;
                  }
                  *param_4 = 0;
                  return (int *)0x64;
                }
              }
              if (*param_4 != 0) {
                local_4 = (int **)0x0;
                local_8 = (int *)0x602e;
                local_6 = (int **)piVar6;
                FUN_13bf_17e7();
              }
              return (int *)0x0;
            }
            local_4 = &local_e;
            local_6 = &local_c;
            local_8 = param_3;
            local_a = param_2;
            piVar6 = (int *)0x1885;
            local_e = (int *)0x58ef;
            local_c = piVar5;
            FUN_1885_546d();
            if ((local_10 != *(int *)0xc18) || (local_12 != *(int *)0xc1e)) {
              local_10 = *(int *)0xc18;
              local_12 = *(int *)0xc1e;
              local_4 = (int **)0x0;
              local_6 = (int **)0x1885;
              local_8 = (int *)0x5915;
              FUN_13bf_17e7();
            }
            piVar5 = piVar6;
            if ((((*param_1 != 1) || (*(int *)0xa5e <= local_16)) || (*(int *)0xc1a != -5)) ||
               (*param_4 = 0, (int)local_e < 0x33)) break;
            *(undefined2 *)0xc18 = 0xfffb;
          }
        } while (((*param_1 == 0) || (local_14 <= *(int *)0xa5c)) ||
                ((local_16 <= *(int *)0xa5e || (*(int *)0xa60 <= local_16))));
        local_1e = (int)*(uint *)0xc1c >> 0xf;
        local_1e = (*(uint *)0xc1c ^ local_1e) - local_1e;
        local_4 = (int **)((int)local_c - local_14);
        local_8 = (int *)(local_16 - (int)local_e);
        if (((*param_1 != 1) || (-1 < *(int *)0xc1c)) ||
           (((int)local_c < 8 ||
            (((int)local_e <= *(int *)0xa5e || (*(int *)0xa60 <= (int)local_e)))))) break;
        *(undefined2 *)0xc1e = 0;
        *(undefined2 *)0xc18 = 0;
        if (*(int *)0xa5c < (int)local_c) {
          iVar2 = ((uint)local_8 ^ (int)local_8 >> 0xf) - ((int)local_8 >> 0xf);
          uVar3 = (int)local_4 >> 0xf;
          if ((((int)((((uint)local_4 ^ uVar3) - uVar3) * 2) < iVar2) && ((int)local_1e < iVar2)) ||
             (((int)(((uint)local_4 ^ uVar3) - uVar3) <= (int)local_1e && (local_1c != 0)))) {
            if ((local_1c == 0) || (-1 < (int)local_a)) {
              local_4 = (int **)0x2;
              local_6 = (int **)0x10;
              local_8 = (int *)0x1885;
              local_a = (int *)0x5a23;
              FUN_1885_3b0c();
            }
            uVar3 = (int)local_1e >> 0xf;
            local_22 = ((int)((local_1e ^ uVar3) - uVar3) >> 2 ^ uVar3) - uVar3;
            if (local_22 < 6) {
              local_22 = 6;
            }
            if ((int)local_1e < (int)(((uint)local_8 ^ (int)local_8 >> 0xf) - ((int)local_8 >> 0xf))
               ) {
              if ((int)local_8 < 1) {
                local_20 = (int *)((int)(local_1e + (int)local_8) / local_22 + -1);
              }
              else {
                local_20 = (int *)((int)((int)local_8 - local_1e) / local_22 + 1);
              }
            }
            else {
              local_20 = (int *)0x0;
            }
            for (local_20 = (int *)(*(int *)0xa62 - (int)local_20); (int)local_20 < 1;
                local_20 = local_20 + 0xf) {
            }
            for (; 0x1e < (int)local_20; local_20 = local_20 + -0xf) {
            }
            local_4 = (int **)&local_1c;
            local_6 = (int **)local_20;
            local_8 = (int *)0x1;
            local_a = (int *)0x1885;
            local_c = (int *)0x5aad;
            FUN_13bf_1c1a();
            piVar5 = (int *)0x1885;
          }
          else {
            if (local_1c != 0) {
              local_4 = (int **)&local_1c;
              local_6 = (int **)local_20;
              local_8 = (int *)0x0;
              local_a = (int *)0x1885;
              local_c = (int *)0x5ac7;
              FUN_13bf_1c1a();
            }
            if ((-(int)local_4 == local_1e || (int)-local_1e < (int)local_4) ||
               (((*(int *)0xa48 == 0 && (*(int *)0xa4a == 0)) && (*(int *)0xc2c == 0)))) break;
            uVar3 = (int)*(uint *)0xa48 >> 0xf;
            local_2a = (int *)((*(uint *)0xa48 ^ uVar3) - uVar3);
            local_24 = (int *)(uint)(*(int *)0xa4a == 0);
            local_2c = local_2a;
            if (*(int *)0xc2c != 0) {
              local_2c = (int *)((int)local_2a + 1);
            }
            local_22 = (int)local_1e / 2;
            if (local_22 < 0xc) {
              local_22 = 0xc;
            }
            local_20 = (int *)((int)(local_1e + (int)local_4) / local_22 + (int)local_2c);
            if ((int)local_20 < (int)local_24) {
              local_20 = local_24;
            }
            if ((int)local_2c < (int)local_20) {
              local_20 = local_2c;
            }
            if (local_a != local_20) {
              if (*(int *)0xa4a != 0) {
                local_4 = (int **)0xffff;
                local_6 = (int **)0x7;
                local_8 = (int *)0x2;
                local_a = (int *)0x11;
                local_c = (int *)0x1764;
                local_e = (int *)0x1885;
                local_10 = 0x5b7c;
                FUN_1def_23c5();
                if (local_20 == (int *)0x0) {
                  local_28 = 0;
                }
                else {
                  local_28 = 0xffff;
                }
                local_4 = (int **)local_28;
                local_6 = (int **)0x7;
                local_8 = (int *)0x2;
                local_a = (int *)0x12;
                local_c = (int *)0x1766;
                local_e = (int *)0x1def;
                piVar6 = (int *)0x1def;
                local_10 = 0x5ba9;
                FUN_1def_23c5();
              }
              local_4 = (int **)0xffff;
              local_6 = (int **)0x7;
              local_8 = (int *)0x2;
              local_a = (int *)0x17;
              local_c = (int *)0x176c;
              local_10 = 0x5bc5;
              local_e = piVar6;
              FUN_1def_23c5();
              for (local_26 = (int *)0x1; (int)local_26 <= (int)local_2a;
                  local_26 = (int *)((int)local_26 + 1)) {
                if (local_26 == local_20) {
                  local_28 = 0;
                }
                else {
                  local_28 = 0xffff;
                }
                if (*(int *)0xa48 < 1) {
                  local_4 = (int **)local_26;
                  local_6 = (int **)0x176e;
                }
                else {
                  local_4 = (int **)((int)local_26 * 3 + 0xa2a);
                  local_6 = (int **)0x1de;
                }
                local_8 = local_34;
                local_a = (int *)0x1def;
                local_c = (int *)0x5bf8;
                FUN_32b2_2854();
                local_4 = (int **)local_28;
                local_6 = (int **)0x7;
                local_8 = (int *)0x2;
                local_a = (int *)(((int)local_26 + 7) * 3);
                local_c = local_34;
                local_e = (int *)0x32b2;
                local_10 = 0x5c19;
                FUN_1def_23c5();
                local_4 = (int **)0xffff;
                local_6 = (int **)0x7;
                local_8 = (int *)0x2;
                local_a = (int *)((int)local_26 * 3 + 0x17);
                local_c = (int *)0x1772;
                local_e = (int *)0x1def;
                local_10 = 0x5c3e;
                FUN_1def_23c5();
              }
              if (*(int *)0xc2c != 0) {
                if (local_2c == local_20) {
                  local_28 = 0;
                }
                else {
                  local_28 = 0xffff;
                }
                local_4 = (int **)local_28;
                local_6 = (int **)0x7;
                local_8 = (int *)0x2;
                local_a = (int *)(((int)local_2c + 7) * 3);
                local_c = (int *)0x1774;
                local_e = (int *)0x1def;
                local_10 = 0x5c95;
                FUN_1def_23c5();
                local_4 = (int **)0xffff;
                local_6 = (int **)0x7;
                local_8 = (int *)0x2;
                local_a = (int *)((int)local_2c * 3 + 0x19);
                local_c = (int *)0x1779;
                local_e = (int *)0x1def;
                local_10 = 0x5cba;
                FUN_1def_23c5();
              }
              local_a = local_20;
              piVar5 = (int *)0x1def;
            }
          }
        }
        else {
          local_4 = (int **)0x2;
          local_6 = (int **)0x10;
          local_8 = (int *)0x1885;
          local_a = (int *)0x59c9;
          FUN_1885_3b0c();
          local_1c = 0;
          local_a = (int *)0xffff;
          piVar5 = (int *)0x1885;
        }
      }
      if (local_1c != 0) {
        local_4 = (int **)&local_1c;
        local_6 = (int **)0x0;
        local_8 = (int *)0x0;
        local_a = (int *)0x1885;
        local_c = (int *)0x5cd8;
        FUN_13bf_1c1a();
      }
      if (-1 < (int)local_a) {
        local_4 = (int **)0x2;
        local_6 = (int **)0x10;
        local_8 = (int *)0x1885;
        local_a = (int *)0x5cee;
        FUN_1885_3b0c();
        local_a = (int *)0xffff;
      }
      piVar5 = (int *)0x1885;
    } while (((*(int *)0xca2 != 0) || (0 < *(int *)0xb6a)) ||
            ((0 < *(int *)0xc26 || (*(int *)0xc28 != 0))));
    if (*param_4 == 0) {
      if (((*(char *)0x124 != '\0') &&
          (uVar3 = (int)*(uint *)0xc18 >> 0xf, (*(uint *)0xc18 ^ uVar3) - uVar3 == 1)) &&
         (local_1a != *(int *)0xc18)) {
        local_18 = local_18 + 1;
        local_1a = *(int *)0xc18;
      }
      if (2 < local_18) {
        local_4 = (int **)0x1dc;
        local_6 = (int **)0x1885;
        piVar5 = (int *)0x21f2;
        local_8 = (int *)0x5d56;
        FUN_21f2_0356();
        local_18 = 1;
        *(char *)0xc13e = '\x01' - *(char *)0xc13e;
      }
      piVar6 = local_8;
      uVar3 = (int)local_4 >> 0xf;
      uVar4 = (int)local_8 >> 0xf;
      if ((((*param_1 == 1) && (0 < *(int *)0xc1a)) && (*(int *)0xc26 == 0)) && (*(int *)0xb6a == 0)
         ) {
        *(undefined2 *)0xc18 = 0;
        if ((int)((((uint)local_4 ^ uVar3) - uVar3) * 2) < (int)(((uint)local_8 ^ uVar4) - uVar4)) {
          local_4 = (int **)0x0;
        }
        else {
          local_8 = (int *)0x0;
        }
        if (-(int)local_4 != local_1e && (int)local_4 <= (int)-local_1e) {
          *(undefined2 *)0xc18 = 0xffff;
        }
        if ((int)local_1e < (int)local_4) {
          *(undefined2 *)0xc18 = 1;
        }
        if ((int)local_1e < (int)local_8) {
          *(undefined2 *)0xc18 = 2;
        }
        if (-(int)local_8 != local_1e && (int)local_8 <= (int)-local_1e) {
          *(undefined2 *)0xc18 = 0xfffe;
        }
        if (*(int *)0xc18 != 0) {
          if (((1 < *(byte *)0x136) && ((int)local_1e < (int)piVar6)) &&
             (-(int)local_4 != local_1e && (int)local_4 <= (int)-local_1e)) {
            *(undefined2 *)0xc18 = 0xffce;
          }
          if (((int)local_e < *(int *)0xa5e) || (*(int *)0xa60 < (int)local_e)) {
            if ((*(int *)0xa62 == 0x1e) || (*(int *)0xa62 == 0x1b)) {
              *(undefined2 *)0xc18 = 500;
            }
            else {
              *(undefined2 *)0xc18 = 5;
            }
          }
          if (((int)local_c < 8) && (*(char *)0x124 != '\0')) {
            if ((int)local_e < 0x10) {
              *(undefined2 *)0xc18 = 100;
            }
            else if ((int)local_e < 0x30) {
              *(undefined2 *)0xc18 = 0x1e;
            }
            else if ((int)local_e < 0xb0) {
              *(undefined2 *)0xc18 = 0xffe2;
            }
            else {
              *(undefined2 *)0xc18 = 0x14;
            }
            if (0x130 < (int)local_e) {
              *(undefined2 *)0xc18 = 0xffec;
            }
            if ((*(int *)0xce6 != 0) && (*(int *)0xa5a < (int)local_e)) {
              *(undefined2 *)0xc18 = 0xff9c;
            }
          }
        }
        local_4 = (int **)0x1;
        ppiVar1 = local_4;
      }
      else {
        if (((*param_1 != 2) || (*(int *)0xc20 < 1)) &&
           ((*(int *)0xc20 != 100 && ((*(char *)0x124 == '\0' || (*(int *)0xc1a != -5))))))
        goto LAB_13bf_1cc9;
        local_34[0] = *param_1;
        *(undefined2 *)0xc1e = 0;
        if ((int)((((uint)local_4 ^ uVar3) - uVar3) * 2) < (int)(((uint)local_8 ^ uVar4) - uVar4)) {
          local_4 = (int **)0x0;
        }
        else {
          local_8 = (int *)0x0;
        }
        if (-(int)local_4 != local_1e && (int)local_4 <= (int)-local_1e) {
          *(undefined2 *)0xc1e = 0xffff;
        }
        if ((int)local_1e < (int)local_4) {
          *(undefined2 *)0xc1e = 1;
        }
        if ((int)local_1e < (int)local_8) {
          *(undefined2 *)0xc1e = 2;
        }
        if (-(int)local_8 != local_1e && (int)local_8 <= (int)-local_1e) {
          *(undefined2 *)0xc1e = 0xfffe;
        }
        ppiVar1 = (int **)local_34[0];
        if (((*(int *)0xc1e == 1) && (ppiVar1 = (int **)local_34[0], *(int *)0xc20 == 100)) &&
           (ppiVar1 = (int **)local_34[0], (int)local_4 <= (int)piVar6)) {
          *(undefined2 *)0xc1e = 10;
          ppiVar1 = (int **)local_34[0];
        }
      }
      local_4 = ppiVar1;
      local_8 = (int *)0x5eab;
      local_6 = (int **)piVar5;
      FUN_13bf_17e7();
      goto LAB_13bf_1cc9;
    }
    *(int *)0xc1e = *param_4;
  } while( true );
}


