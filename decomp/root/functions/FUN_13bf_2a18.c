/* 13bf:2a18 */

/* WARNING: Instruction at (ram,0x0001665e) overlaps instruction at (ram,0x0001665c)
    */
/* WARNING: Removing unreachable block (ram,0x00017464) */
/* WARNING: Type propagation algorithm not settling */

uint ******* __cdecl16far
FUN_13bf_2a18(uint *******param_1,uint ******param_2,undefined2 param_3,undefined2 param_4,
             uint *******param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 uVar10;
  uint uVar11;
  uint ******unaff_SI;
  uint ******ppppppuVar12;
  uint *******pppppppuVar13;
  uint *******pppppppuVar14;
  undefined2 uVar15;
  undefined2 unaff_DS;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 local_30 [4];
  int local_2c;
  uint *****local_2a [2];
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  uint *******local_1c;
  uint ******local_1a;
  uint *******local_18;
  undefined2 local_16;
  undefined2 uStack_14;
  uint *******local_12;
  undefined2 local_10;
  uint *******local_e;
  uint *******local_c;
  uint *******local_a;
  uint *******local_8;
  uint *******local_6;
  
  pppppppuVar13 = (uint *******)0x32b2;
  local_6 = (uint *******)0x6613;
  FUN_32b2_02bc();
  local_1c = (uint *******)0x0;
  local_2c = 0;
  local_26 = 0;
  do {
    *param_5 = (uint ******)0x0;
    local_6 = (uint *******)&local_10;
    local_8 = (uint *******)&local_e;
    local_a = (uint *******)&local_18;
    local_c = (uint *******)&local_12;
    local_e = &local_1a;
    local_10 = (uint *******)&local_8;
    uStack_14 = 0x6642;
    local_12 = pppppppuVar13;
    local_c = (uint *******)FUN_13bf_27e0();
    if (3 < *(byte *)0x74) {
      if (local_e == (uint *******)0x5f) goto LAB_13bf_2a65;
      if ((((local_e == (uint *******)0x75) || (local_e == (uint *******)0x69)) ||
          (local_e == (uint *******)0x6f)) && (0 < *(int *)0xc20)) {
        local_6 = (uint *******)0x17ba;
        local_8 = local_e;
        local_c = (uint *******)0x6688;
        local_a = pppppppuVar13;
        FUN_13bf_2445();
        return (uint *******)0x0;
      }
    }
    if (((local_c != (uint *******)0x0) || (local_8 != (uint *******)0x0)) ||
       (local_1a != (uint ******)0x0)) {
      if (*(int *)0xc22 != 0) {
        local_8 = (uint *******)0x66af;
        local_6 = pppppppuVar13;
        FUN_2b6e_0033();
        local_6 = (uint *******)0x2b6e;
        local_8 = (uint *******)0x66b4;
        FUN_21f2_1ef9();
        local_6 = (uint *******)0x0;
        local_8 = (uint *******)0x21f2;
        local_a = (uint *******)0x66bc;
        FUN_1885_5256();
        local_6 = (uint *******)0xffff;
        local_8 = (uint *******)0x7;
        local_a = (uint *******)*(undefined2 *)0xa5e;
        local_c = (uint *******)*(undefined2 *)0x1b3e;
        local_e = (uint *******)*(undefined2 *)0xa5e;
        local_10 = (uint *******)0x0;
        local_12 = (uint *******)0x1885;
        uStack_14 = 0x66d9;
        FUN_1def_0000();
        iVar9 = *(int *)0xc22;
        if (*(byte *)0xb782 < 4) {
          iVar7 = *(int *)0xa58;
        }
        else {
          iVar7 = *(int *)0xa5c;
        }
        local_1c = (uint *******)*(undefined2 *)0xa5e;
        while (local_1c = (uint *******)((int)local_1c + 1), (int)local_1c <= iVar9 * 0x10 + 0xf) {
          local_6 = (uint *******)0xffff;
          local_8 = (uint *******)0x0;
          local_a = local_1c;
          local_c = (uint *******)(*(int *)0x1b3e + -1);
          local_e = local_1c;
          local_12 = (uint *******)0x1def;
          uStack_14 = 0x671e;
          local_10 = (uint *******)(iVar7 + 1);
          FUN_1def_0000();
        }
        *(undefined2 *)0xc22 = 0;
        local_6 = (uint *******)0x1def;
        pppppppuVar13 = (uint *******)0x1885;
        local_8 = (uint *******)0x6737;
        FUN_1885_23aa();
      }
      if (*(int *)0xc24 != 0) {
        local_6 = (uint *******)0x0;
        local_a = (uint *******)0x6746;
        local_8 = pppppppuVar13;
        FUN_1885_5256();
        local_6 = (uint *******)(*(int *)0xa5e + -1);
        local_8 = (uint *******)*(undefined2 *)0x1b3e;
        local_a = (uint *******)0x0;
        local_c = (uint *******)0x0;
        local_e = (uint *******)0x1885;
        local_10 = (uint *******)0x6759;
        FUN_1885_1f1b();
        local_6 = (uint *******)0x1885;
        pppppppuVar13 = (uint *******)0x1885;
        local_8 = (uint *******)0x6761;
        FUN_1885_1f49();
        *(undefined2 *)0xc24 = 0;
      }
    }
    if (*(int *)0x158 != 0) {
      pppppppuVar14 = pppppppuVar13;
      if (5 < local_2c) {
        local_6 = (uint *******)0x0;
        local_a = (uint *******)0x677c;
        local_8 = pppppppuVar13;
        FUN_21f2_27eb();
        *(undefined2 *)0xbc0 = 1;
        local_6 = (uint *******)0x21f2;
        pppppppuVar14 = (uint *******)0x1885;
        local_8 = (uint *******)0x6788;
        FUN_1885_2414();
      }
      pppppppuVar13 = pppppppuVar14;
      if (local_2c != 0) {
        pppppppuVar13 = (uint *******)0x1885;
        local_8 = (uint *******)0x6793;
        local_6 = pppppppuVar14;
        FUN_1885_23aa();
      }
      *(undefined2 *)0x17ba = 0;
      if (*(int *)0xb6a < 1) {
        return (uint *******)0xfba9;
      }
      *(undefined2 *)0x158 = 0;
    }
    if (local_c == (uint *******)0xffff) {
      if (5 < local_2c) {
        local_6 = (uint *******)0x0;
        local_a = (uint *******)0x67c0;
        local_8 = pppppppuVar13;
        FUN_21f2_27eb();
        *(undefined2 *)0xbc0 = 1;
        local_6 = (uint *******)0x21f2;
        pppppppuVar13 = (uint *******)0x1885;
        local_8 = (uint *******)0x67cc;
        FUN_1885_2414();
      }
      if (local_2c != 0) {
        local_8 = (uint *******)0x67d7;
        local_6 = pppppppuVar13;
        FUN_1885_23aa();
      }
      return (uint *******)0xffff;
    }
    *param_5 = (uint ******)((int)local_8 + (int)local_1a);
    *param_1 = (uint ******)local_12;
    *param_2 = (uint *****)local_18;
    local_8 = (uint *******)0x680a;
    local_6 = pppppppuVar13;
    FUN_32b2_6d9b();
    local_6 = (uint *******)0x32b2;
    local_8 = (uint *******)0x6813;
    FUN_32b2_7065();
    local_6 = (uint *******)0x32b2;
    local_8 = (uint *******)0x681c;
    FUN_32b2_7095();
    local_6 = (uint *******)0x32b2;
    local_8 = (uint *******)0x6824;
    FUN_32b2_6e63();
    local_6 = (uint *******)0x32b2;
    local_8 = (uint *******)0x6835;
    FUN_32b2_6d9b();
    local_6 = (uint *******)0x32b2;
    local_8 = (uint *******)0x683e;
    FUN_32b2_7065();
    local_6 = (uint *******)0x32b2;
    local_8 = (uint *******)0x6847;
    FUN_32b2_7095();
    local_6 = (uint *******)0x32b2;
    local_8 = (uint *******)0x684f;
    FUN_32b2_6e63();
    uVar10 = *(undefined2 *)0xc32;
    *(undefined2 *)0xc3c = *(undefined2 *)0xc30;
    *(undefined2 *)0xc3e = uVar10;
    if (((*(int *)0xc62 != 0) && ((int)local_12 < *(int *)0xa5c)) &&
       ((400 < (int)local_18 && (((int)local_18 < *(int *)0xa60 && (*(char *)0xb782 == '\0')))))) {
      if ((*(int *)0xb6a != 0) || ((*(int *)0xc26 != 0 || (*(int *)0xc28 != 0))))
      goto LAB_13bf_2cad;
      if ((3 < *(byte *)0x125) && (*(byte *)0x125 < 7)) {
        uVar10 = *(undefined2 *)0xc48;
        uVar1 = *(undefined2 *)0xc4a;
        uVar15 = *(undefined2 *)0xc4c;
        uVar2 = *(undefined2 *)0xc4e;
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x68d6;
        puVar8 = (undefined2 *)FUN_13bf_000c();
        uVar3 = *puVar8;
        uVar4 = puVar8[1];
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x68eb;
        FUN_32b2_6d9b();
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x68f3;
        FUN_32b2_7065();
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x68fc;
        FUN_32b2_7095();
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x6904;
        FUN_32b2_6e63();
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x6915;
        FUN_32b2_6d9b();
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x691d;
        FUN_32b2_7065();
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x6926;
        FUN_32b2_7095();
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x692e;
        FUN_32b2_6e63();
        *(undefined2 *)0xc48 = uVar10;
        *(undefined2 *)0xc4a = uVar1;
        *(undefined2 *)0xc4c = uVar15;
        *(undefined2 *)0xc4e = uVar2;
        *(undefined2 *)0xc3c = uVar3;
        *(undefined2 *)0xc3e = uVar4;
      }
      if ((7 < *(byte *)0x125) && (*param_5 != (uint ******)0x0)) {
        local_6 = local_18;
        local_8 = local_12;
        local_a = param_5;
        local_c = (uint *******)0x32b2;
        local_e = (uint *******)0x696f;
        iVar9 = FUN_13bf_04f7();
        if (iVar9 != 0) goto LAB_13bf_2d86;
      }
    }
    pppppppuVar13 = (uint *******)0x32b2;
    if ((((*(int *)0xca2 == 0) && (*(int *)0xb6a == 0)) && (*(int *)0xc26 < 1)) &&
       (((*(int *)0xc28 == 0 && (*(int *)0xa5c <= (int)*param_1)) &&
        ((*(int *)0xa5e <= (int)*param_2 &&
         (((int)*param_2 <= *(int *)0xa60 && (0 < *(int *)0xc20)))))))) {
      local_6 = (uint *******)0x17ba;
      local_8 = (uint *******)0x0;
      local_a = (uint *******)0x32b2;
      local_c = (uint *******)0x69cc;
      iVar9 = FUN_13bf_2445();
      if (iVar9 != 0) {
        return (uint *******)0x0;
      }
    }
    if (*(int *)0xca0 == 0) {
      if (local_e == (uint *******)0x5f) {
LAB_13bf_2a65:
        local_6 = (uint *******)0x1;
        pcVar5 = (code *)swi(0x3f);
        (*pcVar5)();
        return (uint *******)0x0;
      }
      if (local_e == (uint *******)0x7c) {
        if (3 < *(byte *)0xb782) {
          *(undefined2 *)0x158 = 20000;
          return (uint *******)0xff91;
        }
        goto LAB_13bf_2e0e;
      }
      if (local_e == (uint *******)0x7d) {
        return (uint *******)0x63;
      }
    }
    if ((((*(char *)0xb782 != '\0') || (*(int *)0xcb8 != 0)) || (local_c != (uint *******)0x0)) ||
       (((*(int *)0xa5c <= (int)*param_1 || ((int)*param_2 <= *(int *)0xa5e)) ||
        (0x30 < (int)*param_2)))) {
      if (5 < local_2c) {
        local_2c = 0;
        local_6 = (uint *******)0x0;
        local_8 = (uint *******)0x32b2;
        local_a = (uint *******)0x6ad4;
        FUN_21f2_27eb();
        *(undefined2 *)0xbc0 = 1;
        local_6 = (uint *******)0x21f2;
        local_8 = (uint *******)0x6ae0;
        FUN_1885_23aa();
        uVar10 = 0x1885;
        goto LAB_13bf_2ef0;
      }
      if (local_2c != 0) {
        local_2c = 0;
        local_6 = (uint *******)0x32b2;
        pppppppuVar13 = (uint *******)0x1885;
        local_8 = (uint *******)0x6af8;
        FUN_1885_23aa();
      }
      if (((local_c == (uint *******)0x0) && (local_8 == (uint *******)0x0)) &&
         (local_1a == (uint ******)0x0)) goto LAB_13bf_2cad;
      if (*param_5 != (uint ******)0x0) {
        local_6 = (uint *******)0x17ba;
        local_8 = &local_1a;
        local_a = (uint *******)&local_8;
        local_c = param_5;
        local_10 = (uint *******)0x6b26;
        local_e = pppppppuVar13;
        local_10 = (uint *******)FUN_13bf_1c8c();
        if (local_10 != (uint *******)0x0) {
          return local_10;
        }
      }
      *(undefined2 *)0x17ba = 0;
      if ((((*param_5 == (uint ******)0x0) || (*(byte *)0xb782 < 4)) ||
          (*(int *)0xa5c <= (int)*param_1)) || ((int)*param_2 <= *(int *)0xa5e)) goto LAB_13bf_2fcb;
      pppppppuVar14 = pppppppuVar13;
      if ((local_8 != (uint *******)0x0) || (local_1a != (uint ******)0x0)) break;
      uVar11 = (int)*param_2 >> 0xf;
      local_6 = (uint *******)(((int)(((uint)*param_2 ^ uVar11) - uVar11) >> 4 ^ uVar11) - uVar11);
      if (5 < (int)local_6) {
        *(int *)0xa62 = (int)local_6 + 10000;
        *(undefined2 *)0x158 = 1;
        if (*param_5 != (uint ******)0x2) {
          return (uint *******)0xfba9;
        }
        local_6 = (uint *******)&local_18;
        local_8 = (uint *******)&local_12;
        local_a = &local_1a;
        local_c = (uint *******)&local_8;
        local_10 = (uint *******)0x6c86;
        local_e = pppppppuVar13;
        FUN_1885_546d();
        if (*(int *)0xa58 <= (int)local_12) {
          return (uint *******)0xfba9;
        }
        *(undefined2 *)0x158 = 10000;
        return (uint *******)0xfba9;
      }
      if (*(int *)0xc26 != 0) {
        return (uint *******)0x0;
      }
      if (*(int *)0xb6a != 0) {
        return (uint *******)0x0;
      }
      if (*(int *)0xc28 != 0) {
        return (uint *******)0x0;
      }
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
      goto LAB_13bf_2e0e;
    }
    if (*(int *)0xb6a != 0) {
      return (uint *******)0x0;
    }
    if (*(int *)0xc26 != 0) {
      return (uint *******)0x0;
    }
    if (*(int *)0xc28 != 0) {
      return (uint *******)0x0;
    }
    local_6 = (uint *******)&local_2c;
    local_8 = (uint *******)0x32b2;
    local_a = (uint *******)0x6a68;
    FUN_13bf_1074();
    *param_5 = (uint ******)0x0;
    if ((local_8 != (uint *******)0x0) || (local_1a != (uint ******)0x0)) {
      local_6 = (uint *******)*param_2;
      local_8 = (uint *******)*param_1;
      local_a = (uint *******)&local_2c;
      local_c = (uint *******)0x32b2;
      local_e = (uint *******)0x6a8e;
      iVar9 = FUN_13bf_2528();
      if (iVar9 != 0) {
        local_6 = (uint *******)0x32b2;
        local_8 = (uint *******)0x6a9d;
        FUN_1885_3af0();
        local_6 = (uint *******)0x1885;
        local_8 = (uint *******)0x6aa2;
        FUN_1def_2636();
        local_6 = (uint *******)0x1;
        local_8 = (uint *******)0x14;
        local_a = (uint *******)0x1def;
        local_c = (uint *******)0x6aaf;
        FUN_1def_26a9();
        local_6 = (uint *******)0x33c;
        local_8 = (uint *******)0x1de;
        local_a = (uint *******)0x1def;
        pppppppuVar13 = (uint *******)0x21f2;
        local_c = (uint *******)0x6abe;
        FUN_21f2_0356();
      }
    }
  } while( true );
  while( true ) {
    local_6 = (uint *******)&local_18;
    local_8 = (uint *******)&local_12;
    local_a = &local_1a;
    local_c = (uint *******)&local_8;
    pppppppuVar13 = (uint *******)0x1885;
    local_10 = (uint *******)0x6b83;
    local_e = pppppppuVar14;
    FUN_1885_546d();
    if ((local_8 == (uint *******)0x0) && (local_1a == (uint ******)0x0)) break;
    *param_5 = (uint ******)0x0;
    pppppppuVar14 = pppppppuVar13;
  }
  if (*(int *)0xc26 != 0) {
    return (uint *******)0x0;
  }
  if (*(int *)0xb6a != 0) {
    return (uint *******)0x0;
  }
  if (*(int *)0xc28 != 0) {
    return (uint *******)0x0;
  }
  local_10 = (uint *******)0x3700;
LAB_13bf_2fcb:
  ppppppuVar12 = unaff_SI;
  pppppppuVar14 = pppppppuVar13;
  if (((local_8 == (uint *******)0x0) && (ppppppuVar12 = unaff_SI, local_1a == (uint ******)0x0)) &&
     ((ppppppuVar12 = unaff_SI, *(int *)0xa5c < (int)*param_1 &&
      (ppppppuVar12 = param_2, *(int *)0xa60 <= (int)*param_2)))) {
    local_6 = (uint *******)&local_18;
    local_8 = (uint *******)&local_12;
    local_a = &local_1a;
    local_c = (uint *******)&local_8;
    pppppppuVar14 = (uint *******)0x1885;
    local_10 = (uint *******)0x6bf3;
    local_e = pppppppuVar13;
    FUN_1885_546d();
    if ((int)local_18 < *(int *)0xa5a) {
      if ((*(char *)0x124 != '\0') && ((int)*param_1 < 0x227)) {
        *param_5 = (uint ******)0x0;
        *(undefined2 *)0xa62 = 0x20;
        goto LAB_13bf_3e0e;
      }
      if (((*(byte *)0xc3be & 1) != 0) && (0x25e < (int)*param_1)) {
        local_6 = (uint *******)0x1885;
        local_8 = (uint *******)0x6cb6;
        FUN_2b6e_0033();
        local_6 = (uint *******)0x2b6e;
        local_8 = (uint *******)0x6cbb;
        FUN_21f2_1ef9();
        local_6 = (uint *******)0x0;
        local_8 = (uint *******)0x21f2;
        local_a = (uint *******)0x6cc3;
        FUN_1885_5256();
        if ((*(byte *)0xc3be & 4) == 0) {
          *(byte *)0xc3be = *(byte *)0xc3be | 4;
        }
        else {
          *(byte *)0xc3be = *(byte *)0xc3be & 0xfb;
        }
        *(undefined1 *)0x4a = 0;
        if ((*param_5 == (uint ******)0x2) && ((*(byte *)0xc3be & 4) != 0)) {
          *(undefined1 *)0x4a = 1;
          if ((int)local_18 < *(int *)0xa60 / 2) {
            *(undefined1 *)0x4a = 0xb;
          }
          if (*(char *)0x4b != '\0') {
            *(char *)0x4a = '\f' - *(char *)0x4a;
          }
        }
        *param_5 = (uint ******)0x0;
        if (*(char *)0x4a != '\0') {
          local_6 = (uint *******)0x1885;
          local_8 = (uint *******)0x6d25;
          FUN_1885_3c74();
        }
        local_6 = (uint *******)0x1885;
        local_8 = (uint *******)0x6d2a;
        FUN_1885_23aa();
        return (uint *******)0x63;
      }
    }
  }
  local_6 = pppppppuVar14;
  if ((local_10 == (uint *******)0x0) && (local_e == (uint *******)0x0)) {
    if (((int)*param_1 <= *(int *)0xa5c) &&
       (((7 < (int)*param_1 && (0x30 < (int)*param_2)) && ((int)*param_2 < 0x40)))) {
      local_10 = (uint *******)0xf00;
    }
    if (((*(int *)0xca2 == 0) && ((int)*param_1 <= *(int *)0xa5c)) &&
       ((0x180 < (int)*param_2 && ((int)*param_2 < 0x191)))) {
      if (((*(int *)0xb6a == 0) && (*(int *)0xc26 == 0)) && (*(int *)0xc28 == 0)) {
        *(undefined2 *)0xc62 = 1;
        local_8 = (uint *******)0x6d9f;
        FUN_13bf_0a34();
        return (uint *******)0x63;
      }
      goto LAB_13bf_2cad;
    }
    if ((*(int *)0xa60 < (int)*param_2) ||
       ((*(int *)0xa60 <= (int)*param_2 && (3 < *(byte *)0xb782)))) {
      local_e = (uint *******)0x0;
      if ((int)*param_1 < 0x35) {
        local_e = (uint *******)(uint)*(byte *)0xefc;
      }
      if ((((0x34 < (int)*param_1) && ((int)*param_1 <= *(int *)0xa5c)) && (*(int *)0xb6a == 0)) &&
         (((*(int *)0xc26 == 0 && (*(int *)0xc28 == 0)) && (*(int *)0xc08 == 0)))) {
        local_6 = (uint *******)&local_18;
        local_8 = (uint *******)&local_12;
        local_a = &local_1a;
        local_c = (uint *******)&local_8;
        local_10 = (uint *******)0x6e0d;
        local_e = pppppppuVar14;
        FUN_1885_546d();
        local_6 = (uint *******)0x1885;
        local_8 = (uint *******)0x6e15;
        FUN_2b6e_0033();
        local_6 = (uint *******)0x2b6e;
        uVar10 = 0x21f2;
        local_8 = (uint *******)0x6e1a;
        FUN_21f2_1ef9();
        iVar9 = *(int *)0xa60;
        if ((int)local_18 < iVar9) {
          if ((int)local_18 < 0x10) {
            if ((int)local_12 < 8) {
              *(undefined1 *)0x118 = 2;
              *(undefined2 *)0x158 = 10;
              *(undefined2 *)0xb6a = 0;
              return (uint *******)0xfba9;
            }
            *(int *)0xca0 = 7 - *(int *)0xca0;
          }
          else if (*(char *)0x125 != '\0') {
            if (*(int *)0xc62 == 0) {
              if ((int)local_12 < *(int *)0xa5c) {
                *(undefined2 *)0xc62 = 0xffff;
              }
              else {
                *(undefined2 *)0xc62 = 1;
              }
            }
            else {
              *(undefined2 *)0xc62 = 0;
              local_6 = (uint *******)(iVar9 + -1);
              local_8 = (uint *******)(*(int *)0xa5c + -1);
              local_a = (uint *******)0x191;
              local_c = (uint *******)0x1;
              local_e = (uint *******)0x21f2;
              uVar10 = 0x1885;
              local_10 = (uint *******)0x6e7a;
              FUN_1885_1f1b();
            }
          }
        }
        else {
          local_6 = (uint *******)0xffff;
          local_8 = (uint *******)0x7;
          local_a = (uint *******)0x2;
          local_c = (uint *******)0x12;
          local_e = (uint *******)0x177d;
          local_10 = (uint *******)0x21f2;
          local_12 = (uint *******)0x6eb3;
          FUN_1def_23c5();
          *(undefined2 *)0xc22 = 1;
          if (*(int *)0xc60 == 0) {
            *(undefined2 *)0xc60 = 1;
            uVar10 = *(undefined2 *)0xc4a;
            *(undefined2 *)0xc50 = *(undefined2 *)0xc48;
            *(undefined2 *)0xc52 = uVar10;
            uVar10 = *(undefined2 *)0xc4e;
            *(undefined2 *)0xc54 = *(undefined2 *)0xc4c;
            *(undefined2 *)0xc56 = uVar10;
            uVar10 = *(undefined2 *)0xc32;
            *(undefined2 *)0xc58 = *(undefined2 *)0xc30;
            *(undefined2 *)0xc5a = uVar10;
            local_8 = (uint *******)0x5;
            local_e = (uint *******)0x1786;
          }
          else {
            *(undefined2 *)0xc60 = 0;
            local_8 = (uint *******)0x4;
            local_e = (uint *******)0x92e;
          }
          local_6 = (uint *******)0xffff;
          local_a = (uint *******)0x2;
          local_c = (uint *******)0x1a;
          local_10 = (uint *******)0x1def;
          uVar10 = 0x1def;
          local_12 = (uint *******)0x6f27;
          FUN_1def_23c5();
        }
        local_6 = (uint *******)uVar10;
        if (*(int *)0xc62 == 0) {
          uVar10 = 0x1885;
          local_8 = (uint *******)0x6f3d;
          FUN_1885_2e9a();
        }
        else {
          local_8 = (uint *******)0x6f35;
          FUN_13bf_0a34();
        }
        goto LAB_13bf_2ef0;
      }
      if ((*(int *)0xa5c < (int)*param_1) && ((int)*param_1 < 0xe1)) {
        local_10 = (uint *******)0x5100;
      }
      if ((0xe0 < (int)*param_1) && ((int)*param_1 < 0x1b7)) {
        local_10 = (uint *******)0x3400;
        local_e = (uint *******)0x20;
      }
      if ((0x1b6 < (int)*param_1) && ((int)*param_1 < 0x227)) {
        local_10 = (uint *******)0x3500;
      }
      if ((0x226 < (int)*param_1) && ((int)*param_1 < 0x25f)) {
        local_10 = (uint *******)0x3e00;
      }
      if (0x25e < (int)*param_1) {
        local_10 = (uint *******)0x3f00;
      }
    }
  }
  if (*(int *)0xca2 == 0) {
    if (((*(int *)0xb6a == 0) && (*(char *)0xb782 == '\0')) &&
       (((uint *******)(uint)*(byte *)0xefc == local_e ||
        ((uint *******)(uint)*(byte *)0xefd == local_e)))) {
      if (0 < *(int *)0xc26) {
        return (uint *******)0x0;
      }
      if (*(int *)0xc28 != 0) {
        return (uint *******)0x0;
      }
      local_8 = (uint *******)0x6ff9;
      FUN_2b6e_0033();
      local_6 = (uint *******)0x2b6e;
      local_8 = (uint *******)0x6ffe;
      FUN_21f2_1ef9();
      if (*(int *)0xca4 == 0) {
        *(undefined2 *)0xca2 = 1;
        local_6 = (uint *******)0x0;
        pcVar5 = (code *)swi(0x3f);
        (*pcVar5)();
        *(undefined2 *)0xca2 = 0;
        return (uint *******)0x63;
      }
      *param_5 = (uint ******)0x0;
      if (*(int *)0xc08 != 0) {
        return (uint *******)0x0;
      }
      return (uint *******)0xff9d;
    }
  }
  else if (((*param_5 != (uint ******)0x0) && ((int)*param_1 < *(int *)0xa5c)) &&
          (0x12e < (int)*param_2)) {
    return (uint *******)0x0;
  }
  if ((0x61ff < (int)local_10) && ((int)local_10 < 0x6b01)) goto LAB_13bf_3452;
  if ((local_e == (uint *******)0x8) || (local_10 == (uint *******)0x3900)) {
    local_e = (uint *******)0x7f;
  }
  if (local_10 == (uint *******)0x3800) {
    if (*(int *)0xc26 != 0) {
      return (uint *******)0x3800;
    }
    if (*(int *)0xc28 != 0) {
      return (uint *******)0x3800;
    }
    *(int *)0xc0c = -*(int *)0xc0c;
    *(undefined2 *)0xc22 = 2;
    local_6 = (uint *******)0xffff;
    local_8 = (uint *******)0x7;
    local_a = (uint *******)0x3;
    local_c = (uint *******)0x11;
    local_e = (uint *******)0x178b;
    local_12 = (uint *******)0x7099;
    local_10 = pppppppuVar14;
    FUN_1def_23c5();
    if (*(int *)0xc0c < 0) {
      local_6 = (uint *******)0xffff;
      local_8 = (uint *******)0x6;
      local_a = (uint *******)0x3;
      local_c = (uint *******)0x15;
      local_e = (uint *******)0x1794;
      local_10 = (uint *******)0x1def;
      local_12 = (uint *******)0x70bf;
      FUN_1def_23c5();
    }
    goto LAB_13bf_2d86;
  }
  if ((((((local_e == (uint *******)0x7f) || (local_e == (uint *******)0xd)) ||
        ((0x29 < (int)local_e && ((int)local_e < 0x3b)))) ||
       (((((local_e == (uint *******)0x3d || ((uint *******)(uint)*(byte *)0xefb == local_e)) ||
          (local_e == (uint *******)0x40)) ||
         ((local_e == (uint *******)0x5e || (local_e == (uint *******)0x5b)))) ||
        (local_e == (uint *******)0x5d)))) ||
      ((local_e == (uint *******)0x70 || (local_e == (uint *******)0x50)))) ||
     ((local_e == (uint *******)0x5c ||
      (((local_e == (uint *******)0xdf || (local_e == (uint *******)0x27)) ||
       (local_e == (uint *******)0x22)))))) {
    *param_5 = (uint ******)0x0;
    return local_e;
  }
  if (local_10 == (uint *******)0x3f00) {
    *param_5 = (uint ******)0x0;
    local_8 = (uint *******)0x714c;
    FUN_2b6e_0033();
    local_6 = (uint *******)0x2b6e;
    local_8 = (uint *******)0x7151;
    FUN_21f2_1ef9();
    local_6 = (uint *******)0x21f2;
    local_8 = (uint *******)0x7156;
    uVar11 = FUN_1885_5307();
    if (((uVar11 & 4) != 0) && (*(int *)0xca0 == 0)) {
      pcVar5 = (code *)swi(0x3f);
      (*pcVar5)();
    }
    if (*(int *)0xc26 < 1) {
      if (*(int *)0xc28 == 0) {
        pcVar5 = (code *)swi(0x3f);
        (*pcVar5)();
        return (uint *******)0x63;
      }
      return local_10;
    }
    return local_10;
  }
  if (local_10._1_1_ != '>') {
    if (local_10 == (uint *******)0x3500) {
      local_e = (uint *******)0x1f;
    }
    if (*(int *)0xb6a == 0) {
      if (((0 < *(int *)0xc26) || (*(int *)0xc28 != 0)) &&
         ((local_10 == (uint *******)0x3600 || (local_10 == (uint *******)0x3700))))
      goto LAB_13bf_3452;
      if ((local_10 == (uint *******)0xf00) && (*(int *)0xca2 == 0)) {
        *param_5 = (uint ******)0x0;
        if (0 < *(int *)0xc26) {
          return (uint *******)0xf00;
        }
        if (*(int *)0xc28 == 0) {
          *(undefined2 *)0xb6a = 0xffff;
          local_6 = (uint *******)*(undefined2 *)0x90ce;
          local_8 = (uint *******)*(undefined2 *)0x90cc;
          local_a = (uint *******)*(undefined2 *)0x90ca;
          local_c = (uint *******)*(undefined2 *)0x90c8;
          local_e = (uint *******)*(undefined2 *)0x90ce;
          local_10 = (uint *******)*(undefined2 *)0x90cc;
          local_12 = (uint *******)*(undefined2 *)0x90ca;
          uStack_14 = *(undefined2 *)0x90c8;
          local_16 = 0;
          local_1a = (uint ******)0x7362;
          local_18 = pppppppuVar14;
          local_1c = (uint *******)FUN_1885_027d();
          *(undefined2 *)0xb6a = 0;
          if (*(char *)0xb782 == '\0') {
            local_6 = (uint *******)0x0;
            local_8 = (uint *******)0x7;
            local_a = (uint *******)0x4;
            local_c = (uint *******)0x2;
            local_e = (uint *******)0xa0e;
            local_10 = (uint *******)0x1885;
            local_12 = (uint *******)0x738d;
            FUN_1def_23c5();
            local_6 = (uint *******)0x1def;
            local_8 = (uint *******)0x7395;
            FUN_1885_3803();
          }
          if (*(int *)0x158 == 0) {
            return (uint *******)0x63;
          }
          return (uint *******)0xff91;
        }
        return (uint *******)0xf00;
      }
    }
    else if (local_10 == (uint *******)0xf00) {
LAB_13bf_3452:
      *param_5 = (uint ******)0x0;
      return local_10;
    }
    if (*(int *)0xb6a < 1) {
      if (local_10 == (uint *******)0x3600) {
        *param_5 = (uint ******)0x1;
        *param_1 = (uint ******)0xffff;
        *param_2 = (uint *****)0x75;
        local_e = (uint *******)0x0;
      }
      if (local_10 == (uint *******)0x3700) {
        *param_5 = (uint ******)0x1;
        *param_1 = (uint ******)0xffff;
        *param_2 = (uint *****)0xeb;
        local_e = (uint *******)0x0;
      }
    }
    if (local_10 == (uint *******)0x5100) {
      *param_5 = (uint ******)0x0;
      if (0 < *(int *)0xc26) {
        return (uint *******)0x5100;
      }
      if (*(int *)0xc28 != 0) {
        return (uint *******)0x5100;
      }
      local_6 = (uint *******)0x0;
      local_a = (uint *******)0x0;
      local_e = (uint *******)0xffff;
    }
    else {
      if (((int)local_10 < 0x3a00) || (0x3d00 < (int)local_10)) {
        if ((3 < *(byte *)0x124) &&
           (((*param_5 == (uint ******)0x0 && (local_e == (uint *******)0x20)) ||
            (((local_8 != (uint *******)0x0 &&
              (((local_1a != (uint ******)0x0 && (0xe0 < (int)*param_1)) && ((int)*param_1 < 0x1b6))
              )) && (*(int *)0xa60 <= (int)*param_2)))))) {
          if (0 < *(int *)0xc26) {
            return local_e;
          }
          if (*(int *)0xc28 != 0) {
            return local_e;
          }
          do {
            do {
              local_6 = (uint *******)&local_18;
              local_8 = (uint *******)&local_12;
              local_a = &local_1a;
              local_c = (uint *******)&local_8;
              local_10 = (uint *******)0x763e;
              local_e = pppppppuVar14;
              FUN_1885_546d();
              pppppppuVar14 = (uint *******)0x1885;
            } while (local_8 != (uint *******)0x0);
          } while (local_1a != (uint ******)0x0);
          *(undefined1 *)0xa2a = *(undefined1 *)0xa62;
          *(undefined2 *)0xa62 = 0x22;
LAB_13bf_3e0e:
          *(undefined2 *)0x158 = 1;
          return (uint *******)0xfba9;
        }
        if (((local_e == (uint *******)0x1f) || (local_e == (uint *******)0x20)) ||
           (((local_8 != (uint *******)0x0 &&
             ((local_1a != (uint ******)0x0 && (*(int *)0xa5c < (int)*param_1)))) &&
            (*(int *)0xa5e < (int)*param_2)))) {
          if (0 < *(int *)0xc26) {
            return local_e;
          }
          if (*(int *)0xc28 != 0) {
            return local_e;
          }
          local_8 = (uint *******)0x76a1;
          FUN_1def_2730();
          local_6 = local_18;
          local_8 = local_12;
          local_a = local_e;
          local_c = (uint *******)0x1def;
          local_e = (uint *******)0x76af;
          FUN_2bb4_0ea2();
        }
        else {
          if (*param_5 == (uint ******)0x0) {
            return (uint *******)0x0;
          }
          if ((local_8 == (uint *******)0x0) && (local_1a == (uint ******)0x0)) {
            if ((*(int *)0xa5c <= (int)*param_1) &&
               ((*(int *)0xa5e <= (int)*param_2 && ((int)*param_2 <= *(int *)0xa60)))) {
              return (uint *******)0x64;
            }
            if (((((*(int *)0xc62 != 0) && ((int)*param_1 < *(int *)0xa5c)) && (400 < (int)*param_2)
                 ) && (((int)*param_2 < *(int *)0xa60 && (*(char *)0xb782 == '\0')))) &&
               (3 < *(byte *)0x125)) {
              if (((*(int *)0xb6a == 0) && (*(int *)0xc26 == 0)) && (*(int *)0xc28 == 0)) {
                if ((3 < *(byte *)0x125) && (*(byte *)0x125 < 7)) {
                  return (uint *******)0x64;
                }
                if (*(byte *)0x125 < 8) {
                  return (uint *******)0x64;
                }
                return (uint *******)0x63;
              }
LAB_13bf_2cad:
              *param_5 = (uint ******)0x0;
              return (uint *******)0x0;
            }
          }
          if ((((*(int *)0xb6a < 1) && ((int)*param_1 < 8)) && (0x30 < (int)*param_2)) &&
             ((int)*param_2 < 0x12f)) {
            *param_5 = (uint ******)0x0;
            if (0 < *(int *)0xc26) {
              return (uint *******)0x0;
            }
            if (*(int *)0xc28 != 0) {
              return (uint *******)0x0;
            }
            if ((int)*param_2 < 0xb0) {
              uVar16 = (uint *****)0xb0 < *param_2;
              uVar17 = *param_2 == (uint *****)0xb0;
              local_8 = (uint *******)0x77a6;
              FUN_32b2_6d9b();
            }
            else {
              uVar16 = *param_2 < (uint *****)0xb0;
              uVar17 = *param_2 == (uint *****)0xb0;
              local_8 = (uint *******)0x77bc;
              FUN_32b2_6d9b();
            }
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x77c5;
            FUN_32b2_710c();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x77ce;
            FUN_32b2_7154();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x77d6;
            FUN_32b2_6e63();
            local_24 = *(undefined2 *)0xc30;
            local_22 = *(undefined2 *)0xc32;
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x77ec;
            FUN_32b2_6d14();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x77f4;
            FUN_32b2_6cc6();
            local_6 = (uint *******)0xc30;
            local_8 = (uint *******)0x32b2;
            local_a = (uint *******)0x77fe;
            FUN_32b2_704d();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x7804;
            FUN_32b2_6e4b();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x7809;
            FUN_32b2_7258();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x780e;
            FUN_32b2_7191();
            if ((bool)uVar16) {
              uVar10 = *(undefined2 *)0x9096;
              *(undefined2 *)0xc30 = *(undefined2 *)0x9094;
              *(undefined2 *)0xc32 = uVar10;
            }
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x7827;
            FUN_32b2_6cc6();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x7830;
            FUN_32b2_6cc6();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x7839;
            FUN_32b2_704d();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x783e;
            FUN_32b2_7191();
            if (!(bool)uVar16 && !(bool)uVar17) {
              local_6 = (uint *******)0x32b2;
              local_8 = (uint *******)0x7849;
              FUN_32b2_6cc6();
              local_6 = (uint *******)0x32b2;
              local_8 = (uint *******)0x7852;
              FUN_32b2_7065();
              local_6 = (uint *******)0x32b2;
              local_8 = (uint *******)0x785b;
              FUN_32b2_6e63();
            }
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x7872;
            FUN_32b2_6d9b();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x787a;
            FUN_32b2_6e4b();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x7882;
            FUN_32b2_6e63();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x7899;
            FUN_32b2_6d9b();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78a1;
            FUN_32b2_6e4b();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78a9;
            FUN_32b2_6cc6();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78ae;
            FUN_32b2_7c18();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78b3;
            FUN_32b2_7187();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78bc;
            FUN_32b2_6cc6();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78c1;
            FUN_32b2_7c18();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78c6;
            FUN_32b2_7187();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78cb;
            FUN_32b2_7173();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78d3;
            FUN_32b2_6e4b();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78d8;
            FUN_32b2_717d();
            local_6 = (uint *******)0xc48;
            local_8 = (uint *******)0x32b2;
            local_a = (uint *******)0x78e2;
            FUN_32b2_7095();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78e8;
            FUN_32b2_6e63();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78f0;
            FUN_32b2_6cc6();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x78f8;
            FUN_32b2_704d();
            local_6 = (uint *******)0xc4c;
            local_8 = (uint *******)0x32b2;
            local_a = (uint *******)0x7902;
            FUN_32b2_7095();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x7908;
            FUN_32b2_6e63();
            local_6 = (uint *******)0x32b2;
            local_8 = (uint *******)0x790d;
            FUN_2b6e_0033();
            local_6 = (uint *******)0x2b6e;
            local_8 = (uint *******)0x7912;
            FUN_21f2_1ef9();
            local_6 = (uint *******)0x21f2;
            local_8 = (uint *******)0x7917;
            FUN_1885_3b7a();
            local_6 = (uint *******)0x1885;
            local_8 = (uint *******)0x791c;
            FUN_2bb4_07d8();
            if (*(int *)0x11c == 0x1e) {
              return (uint *******)0x63;
            }
            local_6 = (uint *******)0x0;
            local_8 = (uint *******)0x2bb4;
            local_a = (uint *******)0x792e;
            FUN_21f2_27eb();
LAB_13bf_2e0e:
            local_6 = (uint *******)0x0;
            pcVar5 = (code *)swi(0x3f);
            (*pcVar5)();
            return (uint *******)0x63;
          }
          if (*(int *)0xb6a != 0) {
            return (uint *******)0x0;
          }
          if ((int)*param_2 < 0x12f) {
            return (uint *******)0x0;
          }
          if (*(int *)0xa60 < (int)*param_2) {
            return (uint *******)0x0;
          }
          if (*(int *)0xc26 != 0) {
            return (uint *******)0x0;
          }
          if (*(int *)0xc28 != 0) {
            return (uint *******)0x0;
          }
          local_8 = (uint *******)0x7961;
          FUN_1def_2730();
          local_6 = (uint *******)0x1def;
          local_8 = (uint *******)0x7966;
          FUN_2b6e_0033();
          local_6 = (uint *******)0x2b6e;
          pppppppuVar13 = (uint *******)0x21f2;
          local_8 = (uint *******)0x796b;
          FUN_21f2_1ef9();
          if ((((int)*param_1 < *(int *)0xa5c) && (400 < (int)*param_2)) &&
             (((int)*param_2 <= *(int *)0xa60 && (*(int *)0xc62 != 0)))) {
            local_6 = local_18;
            local_8 = local_12;
            local_a = (uint *******)0x21f2;
            local_c = (uint *******)0x7996;
            FUN_13bf_0cce();
          }
          else {
            *(undefined2 *)0xb6a = 1;
            *(undefined2 *)0xc26 = 1;
            if ((int)*param_2 < 0x141) {
              local_6 = (uint *******)0x0;
              local_8 = (uint *******)0x21f2;
              local_a = (uint *******)0x79b5;
              FUN_1885_0ab4();
              local_6 = (uint *******)0x1885;
              local_8 = (uint *******)0x79bb;
              FUN_1885_3543();
              local_6 = (uint *******)0x1885;
              pppppppuVar13 = (uint *******)0x1885;
              local_8 = (uint *******)0x79c0;
              FUN_1885_3803();
            }
            if (((*(int *)0x11c < 10) && (0x140 < (int)*param_2)) && ((int)*param_2 < 0x151)) {
              *(undefined2 *)0xb6a = 1;
              local_6 = param_1;
              pcVar5 = (code *)swi(0x3f);
              (*pcVar5)();
              local_6 = (uint *******)0x79ea;
              FUN_1885_2e9a();
              local_6 = (uint *******)0x79ef;
              FUN_1885_2414();
              *(undefined2 *)0xb6a = 0;
              *(undefined2 *)0xc26 = 0;
              local_6 = (uint *******)0x1885;
              local_8 = (uint *******)0x79fd;
              FUN_21f2_27eb();
              goto LAB_13bf_3e0e;
            }
            if ((0x150 < (int)*param_2) && ((int)*param_2 < 0x161)) {
              if ((int)*param_1 < 0x42) {
                pcVar5 = (code *)swi(0x3f);
                pppppppuVar14 = param_1;
                cVar6 = (*pcVar5)();
                *(char *)((int)pppppppuVar14 + (int)ppppppuVar12) =
                     *(char *)((int)pppppppuVar14 + (int)ppppppuVar12) + cVar6;
              }
              else {
                local_6 = (uint *******)0x0;
                local_a = (uint *******)0x7a26;
                local_8 = pppppppuVar13;
                FUN_1885_1673();
                pppppppuVar13 = (uint *******)0x1885;
              }
            }
            pppppppuVar14 = pppppppuVar13;
            if ((0x160 < (int)*param_2) && ((int)*param_2 < 0x181)) {
              local_6 = param_5;
              local_8 = (uint *******)param_2;
              local_a = param_1;
              local_c = (uint *******)0x0;
              pppppppuVar14 = (uint *******)0x1885;
              local_10 = (uint *******)0x7a4c;
              local_e = pppppppuVar13;
              FUN_1885_1b55();
            }
            local_8 = (uint *******)0x7a54;
            local_6 = pppppppuVar14;
            FUN_1885_3b7a();
            *(undefined2 *)0xb6a = 0;
            *(undefined2 *)0xc26 = 0;
            local_6 = (uint *******)0x1885;
            local_8 = (uint *******)0x7a61;
            FUN_1885_2e9a();
          }
        }
LAB_13bf_2d86:
        *param_5 = (uint ******)0x0;
        return (uint *******)0x63;
      }
      *param_5 = (uint ******)0x0;
      if (*(int *)0xc26 != 0) {
        return local_10;
      }
      if (*(int *)0xc28 != 0) {
        return local_10;
      }
      local_8 = (uint *******)0x7454;
      FUN_1885_5307();
      local_6 = (uint *******)0x1885;
      local_8 = (uint *******)0x7482;
      FUN_32b2_7285();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x748a;
      FUN_32b2_6e63();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x749f;
      FUN_32b2_6cc6();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x74a7;
      FUN_32b2_6e4b();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x74af;
      FUN_32b2_6e63();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x74dc;
      FUN_32b2_6d9b();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x74e4;
      FUN_32b2_704d();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x74ec;
      FUN_32b2_6e63();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x7519;
      FUN_32b2_6d9b();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x7521;
      FUN_32b2_704d();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x7529;
      FUN_32b2_6e63();
      local_6 = (uint *******)local_30;
      local_8 = (uint *******)local_2a;
      local_a = (uint *******)0x1;
      local_c = (uint *******)0x32b2;
      local_e = (uint *******)0x753a;
      FUN_2bb4_26e8();
      local_6 = (uint *******)0x2bb4;
      local_8 = (uint *******)0x7554;
      FUN_32b2_6d9b();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x755c;
      FUN_32b2_6cc6();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x7561;
      FUN_32b2_7258();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x756a;
      FUN_32b2_7154();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x756f;
      FUN_32b2_718c();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x7578;
      FUN_32b2_6d9b();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x757d;
      FUN_32b2_718c();
      local_6 = (uint *******)0x32b2;
      local_8 = (uint *******)0x7582;
      uVar10 = FUN_32b2_6f61();
      local_8 = (uint *******)0x32b2;
      local_a = (uint *******)0x75a1;
      local_6 = (uint *******)uVar10;
      FUN_32b2_6d9b();
      local_8 = (uint *******)0x32b2;
      local_a = (uint *******)0x75a9;
      FUN_32b2_6cc6();
      local_8 = (uint *******)0x32b2;
      local_a = (uint *******)0x75ae;
      FUN_32b2_7258();
      local_8 = (uint *******)0x32b2;
      local_a = (uint *******)0x75b7;
      FUN_32b2_7154();
      local_8 = (uint *******)0x32b2;
      local_a = (uint *******)0x75bc;
      FUN_32b2_718c();
      local_8 = (uint *******)0x32b2;
      local_a = (uint *******)0x75c5;
      FUN_32b2_6d9b();
      local_8 = (uint *******)0x32b2;
      local_a = (uint *******)0x75ca;
      FUN_32b2_718c();
      local_8 = (uint *******)0x32b2;
      pppppppuVar14 = (uint *******)0x32b2;
      local_a = (uint *******)0x75cf;
      local_6 = (uint *******)FUN_32b2_6f61();
      local_e = (uint *******)0x1;
      local_a = (uint *******)uVar10;
    }
    local_12 = (uint *******)0x7423;
    local_10 = pppppppuVar14;
    local_c = local_6;
    local_8 = local_6;
    FUN_2bb4_0730();
    return (uint *******)0x63;
  }
  *param_5 = (uint ******)0x0;
  if (0 < *(int *)0xb6a) {
    return local_10;
  }
  if (0 < *(int *)0xc26) {
    return local_10;
  }
  if (*(int *)0xc28 != 0) {
    return local_10;
  }
  local_8 = (uint *******)0x71b2;
  FUN_2b6e_0033();
  local_6 = (uint *******)0x2b6e;
  pppppppuVar13 = (uint *******)0x21f2;
  local_8 = (uint *******)0x71b7;
  FUN_21f2_1ef9();
  if (*(char *)0x126 != '\0') {
    local_6 = (uint *******)0x21f2;
    local_8 = (uint *******)0x71c6;
    uVar11 = FUN_1885_5307();
    if ((uVar11 & 4) != 0) {
LAB_13bf_35e6:
      uVar10 = 0x1885;
      *(undefined2 *)0xc22 = 1;
      *(char *)0x126 = *(char *)0x126 + '\x01';
      if (3 < *(byte *)0x126) {
        *(undefined1 *)0x126 = 1;
      }
      if (*(char *)0x126 == '\x01') {
        local_6 = (uint *******)0xffff;
        local_8 = (uint *******)0x4;
        local_a = (uint *******)0x2;
        local_c = (uint *******)0x14;
        local_e = (uint *******)0x1797;
        local_10 = (uint *******)0x1885;
        uVar10 = 0x1def;
        local_12 = (uint *******)0x720c;
        FUN_1def_23c5();
      }
      uVar15 = uVar10;
      if (*(char *)0x126 == '\x02') {
        local_6 = (uint *******)0xffff;
        local_8 = (uint *******)0x6;
        local_a = (uint *******)0x2;
        local_c = (uint *******)0x14;
        local_e = (uint *******)0x179b;
        uVar15 = 0x1def;
        local_12 = (uint *******)0x722f;
        local_10 = (uint *******)uVar10;
        FUN_1def_23c5();
      }
      if (*(byte *)0x126 < 3) {
        return (uint *******)0x63;
      }
      local_6 = (uint *******)0xffff;
      local_8 = (uint *******)0x2;
      local_a = (uint *******)0x2;
      local_c = (uint *******)0x14;
      local_e = (uint *******)0x179f;
      local_12 = (uint *******)0x7252;
      local_10 = (uint *******)uVar15;
      FUN_1def_23c5();
      return (uint *******)0x63;
    }
    local_6 = (uint *******)0x1885;
    pppppppuVar13 = (uint *******)0x1885;
    local_8 = (uint *******)0x71cf;
    uVar11 = FUN_1885_5307();
    if ((uVar11 & 2) != 0) goto LAB_13bf_35e6;
  }
  *(undefined2 *)0xc22 = 2;
  *(char *)0x15d = *(char *)0x15d + '\x01';
  if (2 < *(byte *)0x15d) {
    *(undefined1 *)0x15d = 0;
  }
  local_6 = (uint *******)0xffff;
  local_8 = (uint *******)0x7;
  local_a = (uint *******)0x3;
  local_c = (uint *******)0x11;
  local_e = (uint *******)0x17a3;
  local_12 = (uint *******)0x7287;
  local_10 = pppppppuVar13;
  FUN_1def_23c5();
  if (*(char *)0x15d == '\x02') {
    local_6 = (uint *******)0xffff;
    local_8 = (uint *******)0x5;
    local_a = (uint *******)0x3;
    local_c = (uint *******)0x21;
    local_e = (uint *******)0x17b4;
    local_10 = (uint *******)0x1def;
    local_12 = (uint *******)0x72aa;
    FUN_1def_23c5();
  }
  uVar10 = 0x1def;
  if (*(char *)0x15d == '\0') {
    local_6 = (uint *******)0xffff;
    local_8 = (uint *******)0x4;
    local_a = (uint *******)0x3;
    local_c = (uint *******)0x21;
    local_e = (uint *******)0x92e;
    local_10 = (uint *******)0x1def;
    local_12 = (uint *******)0x72d0;
    FUN_1def_23c5();
    uVar10 = 0x1def;
  }
LAB_13bf_2ef0:
  local_8 = (uint *******)0x6ae5;
  local_6 = (uint *******)uVar10;
  FUN_1885_2414();
  return (uint *******)0x63;
}


