/* 1885:1673 */

void __cdecl16far FUN_1885_1673(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_DI;
  undefined2 ***pppuVar8;
  undefined2 ***pppuVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar10;
  char local_6c;
  int local_68;
  char acStack_62 [16];
  int local_52;
  int local_50;
  int local_30;
  undefined2 ***local_2e [2];
  int local_2a;
  undefined2 *local_28;
  undefined2 local_26;
  undefined2 local_24;
  int local_22;
  byte local_1e;
  char local_1a;
  char acStack_18 [6];
  undefined2 uStack_12;
  undefined2 ***pppuStack_10;
  undefined2 ***pppuStack_e;
  undefined1 *puStack_c;
  undefined2 **ppuStack_a;
  undefined2 ***local_8;
  undefined2 ****ppppuVar11;
  
  pppuVar8 = (undefined2 ***)0x32b2;
  FUN_32b2_02bc();
  local_26 = *(undefined2 *)0xb26;
  local_24 = *(undefined2 *)0xb28;
  local_30 = 0;
  do {
    iVar3 = local_30;
    acStack_62[local_30] = *(char *)(local_30 + 0xb7c);
    acStack_18[iVar3] = *(char *)(iVar3 + 0xb6c);
    local_30 = local_30 + 1;
  } while (local_30 < 0x10);
LAB_1885_16ad:
  local_8 = (undefined2 ***)(*(int *)0xa5c + -1);
  ppuStack_a = (undefined2 **)0x151;
  puStack_c = (undefined1 *)0x1;
  pppuStack_10 = (undefined2 ***)0x9f12;
  pppuStack_e = pppuVar8;
  FUN_1885_1f1b();
  local_8 = (undefined2 ***)0x7;
  ppuStack_a = (undefined2 **)0x16;
  puStack_c = (undefined1 *)0x2;
  pppuStack_e = (undefined2 ***)0x1941;
  uStack_12 = 0x9f2d;
  pppuStack_10 = pppuVar8;
  FUN_1def_23c5();
  local_68 = 0;
  local_22 = 0;
  local_8 = (undefined2 ****)0x1def;
  ppuStack_a = (undefined2 **)0x9f3d;
  FUN_1885_2988();
LAB_1885_16ee:
  if (param_1 != 0) {
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)();
  }
LAB_1885_16fe:
  local_8 = (undefined2 ***)0x9f52;
  FUN_1885_3af0();
  local_8 = (undefined2 ***)0x9f57;
  FUN_1def_2636();
  local_8 = (undefined2 ***)0x14;
  ppuStack_a = (undefined2 **)0x1def;
  puStack_c = (undefined1 *)0x9f64;
  FUN_1def_26a9();
  local_8 = (undefined2 ***)0x600;
  ppuStack_a = (undefined2 **)0x60a;
  puStack_c = (undefined1 *)0x1950;
  pppuStack_e = (undefined2 ***)0x1def;
  pppuStack_10 = (undefined2 ***)0x9f7b;
  FUN_21f2_0356();
  pppuVar9 = (undefined2 ***)0x21f2;
LAB_1885_172e:
  do {
    local_8 = (undefined2 ***)0x6;
    ppuStack_a = (undefined2 **)0x19;
    puStack_c = (undefined1 *)0x2;
    pppuStack_e = (undefined2 ***)0x195f;
    pppuVar8 = (undefined2 ***)0x1def;
    uStack_12 = 0x9f96;
    pppuStack_10 = pppuVar9;
    FUN_1def_23c5();
    local_8 = (undefined2 ***)0x9f9d;
    FUN_1885_2d35();
    uVar6 = (int)*(uint *)0xb310 >> 0xf;
    iVar5 = ((int)((*(uint *)0xb310 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6;
    *(undefined1 *)(iVar5 + 0xb7c) = 1;
    *(undefined1 *)(iVar5 + 0xb6c) = 1;
    local_8 = (undefined2 ***)0x9fc1;
    iVar7 = iVar5;
    FUN_1885_1243();
LAB_1885_1771:
    do {
      ppppuVar11 = local_2e;
      local_8 = local_2e + 1;
      ppuStack_a = &local_28;
      puStack_c = &stack0xfffa;
      pppuStack_e = (undefined2 ***)0x1def;
      pppuStack_10 = (undefined2 ***)0x9fd5;
      FUN_1885_546d();
      if ((*(int *)0x158 != 0) || (*(int *)0xa5c + 10 <= (int)local_2e[1])) {
LAB_1885_17ee:
        *(undefined2 *)0xb26 = local_26;
        *(undefined2 *)0xb28 = local_24;
        for (local_30 = 0; local_30 < 0x10; local_30 = local_30 + 1) {
          if (acStack_62[local_30] != *(char *)(local_30 + 0xb7c)) {
            local_22 = 1;
          }
          if (acStack_18[local_30] != *(char *)(local_30 + 0xb6c)) {
            local_22 = 1;
          }
        }
        local_8 = (undefined2 ***)0xa375;
        FUN_1885_2414();
        local_8 = (undefined2 ***)0xa379;
        FUN_1885_1f49();
        *(undefined2 *)0xbc0 = 1;
        *(undefined1 *)0xd14 = 2;
        if (((local_22 != 0) && (param_1 == 0)) || (*(int *)0xbc2 != 0)) {
          ppuStack_a = (undefined2 **)0xa39f;
          local_8 = pppuVar8;
          FUN_21f2_27eb();
        }
        return;
      }
      local_2a = (int)ppppuVar11 + (int)local_28;
    } while (local_2a == 0);
    while ((ppppuVar11 != (undefined2 ****)0x0 || (local_28 != (undefined2 *)0x0))) {
      ppppuVar11 = &local_8;
      local_8 = (undefined2 ***)&stack0xfffc;
      ppuStack_a = &local_28;
      puStack_c = &stack0xfffa;
      pppuStack_e = (undefined2 ***)0x1def;
      pppuStack_10 = (undefined2 ***)0xa017;
      FUN_1885_546d();
    }
    if (((int)local_2e[0] < 0x140) && (0x131 < (int)local_2e[0])) {
      pcVar2 = (code *)swi(0x3f);
      uVar10 = (*pcVar2)();
      bVar4 = (byte)uVar10;
      out((int)((ulong)uVar10 >> 0x10),bVar4);
      piVar1 = (int *)(iVar7 + iVar3);
      *piVar1 = *piVar1 + CONCAT11((char)((ulong)uVar10 >> 8),
                                   bVar4 + 0xd + CARRY1((byte)((ulong)uVar10 >> 0x18),bVar4) +
                                   (&stack0x583c)[unaff_DI]);
      if (*piVar1 != 0) goto LAB_1885_17ee;
      goto LAB_1885_16ee;
    }
    if (((int)local_2e[0] < 0x150) && (0x140 < (int)local_2e[0])) {
      pcVar2 = (code *)swi(0x3f);
      (*pcVar2)();
      local_26 = *(undefined2 *)0xb26;
      local_24 = *(undefined2 *)0xb28;
      local_8 = (undefined2 ***)0xa07c;
      FUN_1885_1f49();
      local_8 = (undefined2 ***)0x1def;
      pppuVar8 = (undefined2 ***)0x21f2;
      ppuStack_a = (undefined2 **)0xa084;
      FUN_21f2_27eb();
      *(undefined2 *)0xbc0 = 1;
      if (*(int *)0x158 != 0) goto LAB_1885_17ee;
      goto LAB_1885_16ad;
    }
    pppuVar9 = pppuVar8;
    if (((*(int *)0xa5c <= (int)local_2e[1]) || ((int)local_2e[0] < 0x161)) ||
       (0x180 < (int)local_2e[0])) goto LAB_1885_1a8a;
    if (8 < (int)local_2e[1]) {
      if ((int)local_2e[0] < 0x171) {
        local_52 = 0;
      }
      else {
        local_52 = 8;
      }
      iVar7 = 0xe;
      local_52 = local_52 + ((int)local_2e[1] + -9) / 0xe;
      if (local_2a != 0) {
        local_8 = (undefined2 ***)0xa13f;
        uVar6 = FUN_1885_5307();
        if ((((uVar6 & 4) != 0) && (local_52 != iVar5)) && (*(char *)0x124 != '\0')) {
          local_8 = (undefined2 ***)0xa156;
          uVar6 = FUN_1885_5307();
          if ((uVar6 & 2) == 0) {
            if ((*(byte *)(local_52 + 0xb6c) & 4) != 0) goto LAB_1885_172e;
            if ((*(byte *)(local_52 + 0xb6c) & 2) == 0) {
              *(byte *)(local_52 + 0xb6c) = *(byte *)(local_52 + 0xb6c) | 2;
              goto LAB_1885_172e;
            }
          }
          else if ((*(byte *)(local_52 + 0xb6c) & 4) == 0) {
            *(byte *)(local_52 + 0xb6c) = *(byte *)(local_52 + 0xb6c) | 6;
            goto LAB_1885_172e;
          }
          *(byte *)(local_52 + 0xb6c) = *(byte *)(local_52 + 0xb6c) & 1;
          goto LAB_1885_172e;
        }
      }
      if (((local_52 != iVar5) && (local_2a == 1)) &&
         (iVar7 = local_52, (*(byte *)(local_52 + 0xb6c) & 4) == 0)) {
        local_1a = *(char *)(local_52 + 0xb7c);
        local_1e = *(byte *)(local_52 + 0xb6c);
        *(bool *)(local_52 + 0xb7c) = (local_1e & 1) == 0;
        if ((local_1a == '\0') || ((local_1e & 1) != 0)) {
          local_6c = '\0';
        }
        else {
          local_6c = '\x01';
        }
        *(char *)(local_52 + 0xb6c) = (local_1e & 6) + local_6c;
        goto LAB_1885_172e;
      }
      if (((local_52 == iVar5) && (local_2a != 0)) && (param_1 == 0)) {
        local_8 = (undefined2 ***)0xa1ff;
        FUN_1885_3b7a();
        if ((local_2a == 1) && (*(char *)0x124 != '\0')) {
          local_22 = 1;
          pcVar2 = (code *)swi(0x3f);
          (*pcVar2)();
        }
        if (local_2a == 2) {
          pcVar2 = (code *)swi(0x3f);
          (*pcVar2)();
          local_22 = 1;
          local_26 = *(undefined2 *)0xb26;
          local_24 = *(undefined2 *)0xb28;
          goto LAB_1885_17ee;
        }
        goto LAB_1885_16fe;
      }
      if ((local_2a == 2) && (local_52 != iVar5)) {
        if ((*(byte *)(local_52 + 0xb6c) & 6) == 0) {
          local_8 = (undefined2 ***)0xa268;
          FUN_32b2_6cc6();
          local_8 = (undefined2 ***)0xa271;
          FUN_32b2_6e4b();
          local_8 = (undefined2 ***)0xa279;
          FUN_32b2_6ef9();
          local_8 = (undefined2 ***)0xa282;
          FUN_32b2_6cc6();
          local_8 = (undefined2 ***)0xa28a;
          FUN_32b2_6e63();
          uVar6 = (uint)*(byte *)(local_52 + 0xb8e);
          *(uint *)0xb310 = uVar6;
          if (((int)uVar6 < local_52 << 4) || ((local_52 + 1) * 0x10 <= (int)uVar6)) {
            uVar6 = local_52 << 4;
            *(uint *)0xb310 = uVar6;
          }
          if (*(char *)(uVar6 + 0xc292) != '\0') {
            *(uint *)0xa6c = (uint)*(byte *)(uVar6 + 0xc292);
          }
          pppuVar9 = (undefined2 ***)0x32b2;
          if (*(char *)(uVar6 + 0xb66a) != '\0') {
            *(uint *)0xa6a = (uint)*(byte *)(uVar6 + 0xb66a);
          }
        }
        goto LAB_1885_172e;
      }
LAB_1885_1a8a:
      if (((int)local_2e[0] < 0x181) || (399 < (int)local_2e[0])) goto LAB_1885_1771;
      local_30 = 0;
      do {
        if ((*(byte *)(local_30 + 0xb6c) & 4) == 0) {
          *(undefined1 *)(local_30 + 0xb7c) = 1;
          *(char *)(local_30 + 0xb6c) = (*(byte *)(local_30 + 0xb6c) & 6) + 1;
        }
        local_30 = local_30 + 1;
      } while (local_30 < 0x10);
      for (local_50 = 0; local_50 < 0x100; local_50 = local_50 + 1) {
        if ((*(byte *)(local_50 + -0x3e90) & 4) == 0) {
          *(undefined1 *)(local_50 + -0x4c78) = 1;
          *(char *)(local_50 + -0x3e90) = (*(byte *)(local_50 + -0x3e90) & 6) + 1;
        }
      }
      goto LAB_1885_172e;
    }
    local_68 = local_68 + 1;
    if (2 < local_68) {
      local_68 = 0;
    }
    if (local_2a == 2) {
      local_68 = 2;
    }
    for (local_30 = 0; local_30 < 0x10; local_30 = local_30 + 1) {
      if ((*(byte *)(local_30 + 0xb6c) & 4) == 0) {
        *(char *)(local_30 + 0xb7c) = '\x01' - (local_68 == 0);
        *(char *)(local_30 + 0xb6c) = (local_68 == 2) + (*(byte *)(local_30 + 0xb6c) & 6);
      }
    }
  } while( true );
}


