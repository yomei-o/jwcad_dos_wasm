/* 2bb4:2cb4 */

uint __cdecl16far
FUN_2bb4_2cb4(int *param_1,int param_2,uint *param_3,undefined2 param_4,int *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  int iVar4;
  byte extraout_DH;
  uint uVar5;
  int *unaff_SI;
  int *piVar6;
  int unaff_DI;
  uint *puVar7;
  uint *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_48;
  int local_42;
  uint local_40;
  uint local_3e;
  int local_3c;
  uint local_3a;
  undefined2 local_38;
  int local_36 [17];
  undefined2 uStack_14;
  uint *puStack_12;
  uint *puStack_10;
  int *piVar9;
  uint *local_c;
  
  FUN_32b2_02bc();
  local_42 = 0;
  local_40 = 0;
  if (0x4e1e < (int)param_1) {
    param_1 = param_1 + -5000;
  }
  FUN_32b2_2ca0();
  *(undefined2 *)0xb5b6 = unaff_SI;
  *(int *)0xb5b8 = unaff_DI;
  piVar6 = unaff_SI;
  while( true ) {
    puVar7 = (uint *)0x32b2;
    iVar4 = FUN_32b2_2f7a();
    if (iVar4 == 0) break;
    piVar6 = (int *)(iVar4 - param_2);
    iVar4 = FUN_3a75_02e8();
    if (iVar4 == 0) {
      local_42 = local_42 + 1;
      local_36[local_42] = (int)piVar6;
    }
  }
  local_42 = local_42 + -1;
  if (local_42 < 0) {
    local_42 = 0;
  }
  do {
    puStack_12 = (uint *)0xe895;
    puStack_10 = puVar7;
    FUN_2bb4_2c00();
    piVar9 = param_1;
    do {
      puVar8 = (uint *)0x32b2;
      local_c = (uint *)0xe8a1;
      FUN_32b2_2ca0();
      *(int *)0xa48 = local_42;
      if (*(char *)0xc2e != '\0') {
        *(int *)0xa48 = local_42 + -1;
      }
      if ((param_1 == (int *)0x0) || (param_1 == (int *)0x2710)) {
        *(undefined2 *)0xa4a = 0;
      }
      else {
        *(undefined2 *)0xa4a = 1;
      }
      local_38 = 0;
      if ((3 < *(byte *)0xb782) && (*(char *)0xa2b != '\0')) {
        local_38 = *(byte *)0xa2b & 0xf;
        local_48 = -((char)local_38 - *(char *)0xa2b);
        if ((*(byte *)0xa2b & 0xf) == 0) {
          local_38 = (uint)(local_48 >> 4);
          local_48 = 0;
        }
        local_38 = local_38 + 0x30;
        if ((local_38 < 0x31) || (0x39 < local_38)) {
          local_38 = 0;
        }
        *(byte *)0xa2b = local_48;
        if (local_38 != 0) {
          *param_5 = 0;
          *(undefined1 *)0x15a = 2;
          if (*(int *)0xc22 != 0) {
            puVar7 = puVar8;
            for (local_3e = 1; puVar8 = puVar7, (int)local_3e <= *(int *)0xc22;
                local_3e = local_3e + 1) {
              piVar9 = (int *)0xe951;
              FUN_1def_26a9();
              FUN_1def_2636();
              puVar7 = (uint *)0x1def;
              local_c = puVar8;
            }
          }
        }
      }
      puVar7 = puVar8;
      if (local_38 == 0) {
        local_c = param_3;
        piVar9 = &local_3c;
        puStack_10 = &local_3a;
        puVar7 = (uint *)0x13bf;
        uStack_14 = 0xe97f;
        puStack_12 = puVar8;
        local_38 = FUN_13bf_2a18();
      }
      *(undefined2 *)0xa48 = 0;
      *(undefined2 *)0xa4a = 0;
      if (*(int *)0x158 != 0) {
        return 0xfba9;
      }
      if (local_38 == 100) {
        return 0;
      }
      if ((((*(char *)0xcf4 == '\0') && (*(char *)0xd14 == '\x02')) && (-1 < *(int *)0x78)) &&
         ((0 < *(int *)0x78 || (10 < *(uint *)0x76)))) {
        iVar4 = (int)local_c + (-(uint)(piVar9 < unaff_SI) - unaff_DI);
        if ((*(int *)0x7c <= iVar4) &&
           ((*(int *)0x7c < iVar4 || (*(uint *)0x7a < (uint)((int)piVar9 - (int)unaff_SI))))) {
          iVar4 = (int)local_c + (-(uint)(piVar9 < (int *)*(uint *)0xc0b0) - *(int *)0xc0b2);
          if ((*(int *)0x78 <= iVar4) &&
             ((*(int *)0x78 < iVar4 || (*(uint *)0x76 < (int)piVar9 - *(uint *)0xc0b0)))) {
            uVar1 = *(undefined2 *)0x76;
            uVar2 = *(undefined2 *)0x78;
            *(undefined2 *)0x78 = 0;
            *(undefined2 *)0x76 = 0;
            puStack_10 = (uint *)0xea28;
            FUN_32b2_2854();
            puVar7 = (uint *)0x21f2;
            puStack_10 = (uint *)0xea3d;
            FUN_21f2_071c();
            pcVar3 = (code *)swi(0x3f);
            (*pcVar3)();
            (&stack0xfffe)[(int)piVar6] = (&stack0xfffe)[(int)piVar6] ^ extraout_DH;
            *(undefined2 *)0x76 = uVar1;
            *(undefined2 *)0x78 = uVar2;
            *(undefined1 *)0xd14 = 4;
            break;
          }
        }
      }
      if ((0x30 < (int)local_38) && ((int)local_38 < 0x3a)) {
        local_40 = local_38 - 0x30;
      }
      if (local_38 == 0x30) {
        local_40 = 10;
      }
      if ((*param_5 != 0) && (local_3c < *(int *)0xa5e)) {
        local_40 = 0;
        for (local_3e = 1; (int)local_3e <= local_42; local_3e = local_3e + 1) {
          piVar6 = (int *)(local_3e * 2);
          uVar5 = (int)local_3a >> 0xf;
          iVar4 = ((int)((local_3a ^ uVar5) - uVar5) >> 3 ^ uVar5) - uVar5;
          if ((local_36[local_3e] + 7 < iVar4) && (iVar4 < (local_36 + 1)[local_3e] + 7)) {
            local_40 = local_3e;
          }
        }
        if ((*(int *)0xc2c != 0) && (0x244 < (int)local_3a)) {
          local_38 = 0x7f;
        }
      }
      *param_5 = 0;
      if ((0 < (int)local_40) && ((int)local_40 <= local_42)) {
        return local_40;
      }
      if (((local_38 == 0xffff) && (param_1 != (int *)0x0)) && (param_1 != (int *)0x2710)) {
        return 0xffff;
      }
      if ((param_1 == (int *)0x270f) || (param_1 == (int *)0x2710)) {
        if ((0x61ff < (int)local_38) && ((int)local_38 < 0x6b01)) {
          return local_38;
        }
        if (local_38 == 99) {
          return 99;
        }
      }
      if (local_38 == 0xd) {
        return 0xd;
      }
      if ((*(int *)0xc26 != 0) || (*(int *)0xc28 != 0)) {
        if (local_38 == 0x3600) {
          return 0x3600;
        }
        if (local_38 == 0x3700) {
          return 0x3700;
        }
        if ((0x39ff < (int)local_38) && ((int)local_38 < 0x3f01)) {
          return local_38;
        }
        if (*(int *)0xc26 == 0x20) {
          if (local_38 == 0x20) {
            return 0x20;
          }
          if (local_38._1_1_ == '>') {
            return local_38;
          }
        }
      }
      if ((*(int *)0xc2c != 0) &&
         ((local_38 == 0x7f || ((*(char *)0xefb != '|' && (*(byte *)0xefb == local_38)))))) {
        return 0x14;
      }
    } while (local_38 != 99);
  } while( true );
}


