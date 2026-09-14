/* 2bb4:0b88 */

undefined2 __cdecl16far
FUN_2bb4_0b88(int param_1,int param_2,undefined2 param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_SI;
  undefined2 ****ppppuVar5;
  undefined2 ****ppppuVar6;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  int local_26;
  int local_24;
  undefined2 ***local_22;
  undefined2 ***local_20;
  undefined2 **local_1e [6];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 ***pppuStack_e;
  undefined2 ***pppuStack_c;
  undefined2 ****local_a;
  undefined2 ****local_8;
  undefined2 ****local_6;
  
  ppppuVar5 = (undefined2 ****)0x32b2;
  local_6 = (undefined2 ****)0xc6d3;
  FUN_32b2_02bc();
  local_22 = (undefined2 ****)0xffff;
  if (((*(char *)0xb782 == '\0') && (*(int *)0x16c == 0)) && (*(char *)0x125 != '\0')) {
    if ((param_5 < 0x6200) || (0x6600 < param_5)) {
      local_26 = 0;
      local_24 = 0;
      if ((param_2 != 0) && (*(int *)0xa60 < param_4)) {
        local_6 = (undefined2 ****)0x32b2;
        local_8 = (undefined2 ****)0xc722;
        FUN_2b6e_0033();
        ppppuVar6 = (undefined2 ****)0x2b6e;
LAB_2bb4_0be2:
        local_6 = &local_8;
        local_8 = &local_6;
        local_a = &local_a;
        pppuStack_c = (undefined2 ***)&stack0xfffc;
        ppppuVar5 = (undefined2 ****)0x1885;
        uStack_10 = 50999;
        pppuStack_e = ppppuVar6;
        FUN_1885_546d();
        if ((unaff_SI == 0) && ((undefined2 *****)local_a == (undefined2 *****)0x0))
        goto LAB_2bb4_0cbc;
        if (((int)local_6 < 0x1dd) || ((int)local_8 <= *(int *)0xa60)) {
          if ((0x3c < (int)local_6) && (*(int *)0xa60 < (int)local_8)) {
            local_6 = local_6 + -0x1e;
            goto LAB_2bb4_0c1e;
          }
          local_20 = (undefined2 ****)0xffff;
        }
        else {
          local_6 = local_6 + -0xee;
LAB_2bb4_0c1e:
          uVar3 = (int)local_6 >> 0xf;
          local_20 = (undefined2 ***)(((int)(((uint)local_6 ^ uVar3) - uVar3) >> 5 ^ uVar3) - uVar3)
          ;
        }
        iVar4 = (int)local_a + unaff_SI;
        if ((iVar4 != local_24) && (local_26 = local_26 + 1, local_24 = iVar4, 4 < local_26)) {
          local_22 = (undefined2 ****)0xffff;
          param_1 = 1;
          local_6 = (undefined2 ****)0x1;
          local_8 = (undefined2 *****)0x1885;
          local_a = (undefined2 ****)0xc7b3;
          FUN_2bb4_0adc();
        }
        if (*(int *)0xa60 < (int)local_8) {
          ppppuVar6 = ppppuVar5;
          if (local_22 != local_20) {
            local_6 = (undefined2 ****)0x0;
            local_8 = (undefined2 ****)local_22;
            local_a = (undefined2 ****)0x1885;
            pppuStack_c = (undefined2 ***)0xc7e6;
            FUN_2bb4_09a2();
            local_6 = (undefined2 ****)0xffff;
            local_22 = local_20;
            local_8 = (undefined2 ****)local_20;
            local_a = (undefined2 ****)0x1885;
            pppuStack_c = (undefined2 ***)0xc7f7;
            FUN_2bb4_09a2();
          }
          goto LAB_2bb4_0be2;
        }
        local_6 = (undefined2 ****)0x0;
        local_8 = (undefined2 ****)local_22;
        local_a = (undefined2 ****)0x1885;
        pppuStack_c = (undefined2 ***)0xc7cc;
        FUN_2bb4_09a2();
      }
    }
    else {
LAB_2bb4_0cbc:
      if (param_2 == 0) {
        uVar3 = (int)(param_5 + 0x9e00U) >> 0xf;
        local_20 = (undefined2 ***)
                   (((int)((param_5 + 0x9e00U ^ uVar3) - uVar3) >> 8 ^ uVar3) - uVar3);
      }
      if ((-1 < (int)local_20) && ((int)local_20 < 5)) {
        if (param_1 == 0) {
          local_8 = (undefined2 ****)0xc902;
          local_6 = ppppuVar5;
          FUN_32b2_6d14();
          uVar7 = (int)local_20 << 1 < 0;
          uVar8 = ((uint)local_20 & 0x3fff) == 0;
          local_6 = (undefined2 ****)0x32b2;
          local_8 = (undefined2 ****)0xc912;
          FUN_32b2_6cc6();
          local_6 = (undefined2 ****)0x32b2;
          local_8 = (undefined2 ****)0xc91a;
          FUN_32b2_6e4b();
          local_6 = (undefined2 ****)0x32b2;
          local_8 = (undefined2 ****)0xc91f;
          FUN_32b2_7258();
          local_6 = (undefined2 ****)0x32b2;
          local_8 = (undefined2 ****)0xc924;
          FUN_32b2_7191();
          if ((bool)uVar7 || (bool)uVar8) {
            uVar2 = *(undefined2 *)0x9386;
            *(undefined2 *)0xc30 = *(undefined2 *)0x9384;
            *(undefined2 *)0xc32 = uVar2;
          }
          else {
            local_6 = (undefined2 ****)0x32b2;
            local_8 = (undefined2 ****)0xc92e;
            FUN_32b2_6cc6();
            local_6 = (undefined2 ****)0x32b2;
            local_8 = (undefined2 ****)0xc937;
            FUN_32b2_6e63();
          }
          iVar4 = (int)local_20 * 4;
          uVar2 = *(undefined2 *)(iVar4 + 0xc7a);
          *(undefined2 *)0xc48 = *(undefined2 *)(iVar4 + 0xc78);
          *(undefined2 *)0xc4a = uVar2;
          uVar2 = *(undefined2 *)(iVar4 + 0xc8e);
          *(undefined2 *)0xc4c = *(undefined2 *)(iVar4 + 0xc8c);
          *(undefined2 *)0xc4e = uVar2;
          local_6 = (undefined2 ****)0x0;
          local_8 = (undefined2 ****)0x32b2;
          local_a = (undefined2 ****)0xc974;
          FUN_21f2_27eb();
        }
        else {
          uVar2 = *(undefined2 *)0xc32;
          iVar4 = (int)local_20 * 4;
          *(undefined2 *)(iVar4 + 0xc64) = *(undefined2 *)0xc30;
          *(undefined2 *)(iVar4 + 0xc66) = uVar2;
          uVar2 = *(undefined2 *)0xc4a;
          *(undefined2 *)(iVar4 + 0xc78) = *(undefined2 *)0xc48;
          *(undefined2 *)(iVar4 + 0xc7a) = uVar2;
          uVar2 = *(undefined2 *)0xc4e;
          *(undefined2 *)(iVar4 + 0xc8c) = *(undefined2 *)0xc4c;
          *(undefined2 *)(iVar4 + 0xc8e) = uVar2;
          local_6 = (undefined2 ****)((int)local_20 + 1);
          local_8 = (undefined2 ****)0x1fb4;
          local_a = (undefined2 ****)local_1e;
          pppuStack_e = (undefined2 ***)0xc879;
          pppuStack_c = ppppuVar5;
          FUN_32b2_2854();
          if ((7 < *(byte *)0x125) && (10 < param_2)) {
            uVar2 = *(undefined2 *)0x9380;
            uVar1 = *(undefined2 *)0x9382;
            *(undefined2 *)(iVar4 + 0xc64) = uVar2;
            *(undefined2 *)(iVar4 + 0xc66) = uVar1;
            *(undefined2 *)(iVar4 + 0xc78) = uVar2;
            *(undefined2 *)(iVar4 + 0xc7a) = uVar1;
            *(undefined2 *)(iVar4 + 0xc8c) = uVar2;
            *(undefined2 *)(iVar4 + 0xc8e) = uVar1;
            local_6 = (undefined2 ****)0x1fbd;
            local_8 = (undefined2 ****)local_1e;
            local_a = (undefined2 ****)0x32b2;
            pppuStack_c = (undefined2 ***)0xc8b5;
            FUN_32b2_2126();
          }
          local_6 = (undefined2 ****)0xffff;
          local_8 = (undefined2 ****)0x7;
          local_a = (undefined2 ****)0x2;
          pppuStack_c = (undefined2 ***)0x14;
          pppuStack_e = local_1e;
          uStack_10 = 0x32b2;
          uStack_12 = 0xc8d0;
          FUN_1def_23c5();
          local_6 = (undefined2 ****)0x1def;
          local_8 = (undefined2 ****)0xc8d8;
          FUN_1885_2414();
          *(undefined2 *)0xc22 = 1;
          if ((*(int *)0xc62 != 0) && (1 < *(byte *)0x125)) {
            local_6 = (undefined2 ****)0x1885;
            local_8 = (undefined2 ****)0xc8f7;
            FUN_13bf_0a34();
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


