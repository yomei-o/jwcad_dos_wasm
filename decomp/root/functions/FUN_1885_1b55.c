/* 1885:1b55 */

void __cdecl16far FUN_1885_1b55(int param_1,int *param_2,int *param_3,int *param_4)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_SI;
  undefined1 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_44;
  undefined1 *local_3c;
  char acStack_3a [16];
  undefined1 local_2a [2];
  int local_28;
  int local_26;
  int local_24;
  int local_22;
  int local_20;
  undefined1 **local_1e;
  byte local_1c;
  char local_1a;
  char acStack_18 [8];
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 ***pppuStack_c;
  int *piStack_a;
  undefined1 *local_8;
  undefined1 **ppuVar9;
  
  FUN_32b2_02bc();
  uVar6 = (int)*(uint *)0xb310 >> 0xf;
  iVar3 = ((int)((*(uint *)0xb310 ^ uVar6) - uVar6) >> 4 ^ uVar6) - uVar6;
  iVar4 = iVar3 * 0x10;
  local_20 = 0;
  for (local_24 = 0; iVar5 = local_24, local_24 < 0x10; local_24 = local_24 + 1) {
    iVar7 = iVar4 + local_24;
    acStack_3a[local_24] = *(char *)(iVar7 + -0x4c78);
    acStack_18[iVar5] = *(char *)(iVar7 + -0x3e90);
  }
LAB_1885_1ba6:
  local_8 = (undefined1 *)0xa3fa;
  FUN_1885_3af0();
  local_8 = (undefined1 *)0xa3ff;
  FUN_1def_2636();
  local_8 = (undefined1 *)0x7;
  piStack_a = (int *)0x1def;
  puVar8 = (undefined1 *)0x1def;
  pppuStack_c = (undefined1 ***)0xa40c;
  FUN_1def_26a9();
  if (param_1 == 0) {
    local_8 = (undefined1 *)0x60a;
    piStack_a = (int *)0x196d;
    pppuStack_c = (undefined1 ***)0x1def;
    puVar8 = (undefined1 *)0x21f2;
    puStack_e = (undefined1 *)0xa42b;
    FUN_21f2_0356();
  }
  else {
    local_8 = (undefined1 *)0xa418;
    FUN_1885_3b7a();
  }
  do {
    if (*param_2 < 9) {
      *(int *)0xeda = *(int *)0xeda + 1;
      if (2 < *(int *)0xeda) {
        *(undefined2 *)0xeda = 0;
      }
      local_24 = iVar4;
      if (*param_4 == 2) {
        *(undefined2 *)0xeda = 2;
      }
      for (; local_24 <= iVar4 + 0xf; local_24 = local_24 + 1) {
        if ((*(byte *)(local_24 + -0x3e90) & 4) == 0) {
          *(char *)(local_24 + -0x4c78) = '\x01' - (*(int *)0xeda == 0);
          *(char *)(local_24 + -0x3e90) = (*(int *)0xeda == 2) + (*(byte *)(local_24 + -0x3e90) & 6)
          ;
        }
      }
    }
    if (*param_2 < 9) goto LAB_1885_1dd6;
    if (*param_3 < 0x171) {
      iVar5 = 0;
    }
    else {
      iVar5 = 8;
    }
    local_28 = iVar5 + (*param_2 + -9) / 0xe + iVar4;
    if (*param_4 == 0) {
LAB_1885_1cdc:
      if (((local_28 != *(int *)0xb310) && (*param_4 == 1)) &&
         ((*(byte *)(local_28 + -0x3e90) & 4) == 0)) {
        local_1a = *(char *)(local_28 + -0x4c78);
        local_1c = *(byte *)(local_28 + -0x3e90);
        *(bool *)(local_28 + -0x4c78) = (local_1c & 1) == 0;
        if ((local_1a == '\0') || ((local_1c & 1) != 0)) {
          local_44 = '\0';
        }
        else {
          local_44 = '\x01';
        }
        *(char *)(local_28 + -0x3e90) = (local_1c & 6) + local_44;
      }
      if (((local_28 == *(int *)0xb310) && (*param_4 != 0)) && (param_1 == 0)) break;
      if (((local_28 != *(int *)0xb310) && (*param_4 == 2)) &&
         ((*(byte *)(local_28 + -0x3e90) & 6) == 0)) {
        *(int *)0xb310 = local_28;
        *(undefined1 *)(iVar3 + 0xb8e) = (char)local_28;
        if (*(char *)(*(int *)0xb310 + -0x3d6e) != '\0') {
          *(uint *)0xa6c = (uint)*(byte *)(*(int *)0xb310 + -0x3d6e);
        }
        if (*(char *)(local_28 + -0x4996) != '\0') {
          *(uint *)0xa6a = (uint)*(byte *)(local_28 + -0x4996);
        }
      }
    }
    else {
      local_8 = (undefined1 *)0xa4db;
      uVar6 = FUN_1885_5307();
      if ((((uVar6 & 4) == 0) || (local_28 == *(int *)0xb310)) || (*(char *)0x124 == '\0'))
      goto LAB_1885_1cdc;
      local_8 = (undefined1 *)0xa4f2;
      uVar6 = FUN_1885_5307();
      if ((uVar6 & 2) == 0) {
        if ((*(byte *)(local_28 + -0x3e90) & 4) == 0) {
          if ((*(byte *)(local_28 + -0x3e90) & 2) != 0) goto LAB_1885_1ccc;
          *(byte *)(local_28 + -0x3e90) = *(byte *)(local_28 + -0x3e90) | 2;
        }
      }
      else if ((*(byte *)(local_28 + -0x3e90) & 4) == 0) {
        *(byte *)(local_28 + -0x3e90) = *(byte *)(local_28 + -0x3e90) | 6;
      }
      else {
LAB_1885_1ccc:
        *(byte *)(local_28 + -0x3e90) = *(byte *)(local_28 + -0x3e90) & 1;
      }
    }
LAB_1885_1dd6:
    if (param_1 != 0) {
      local_8 = (undefined1 *)0xa630;
      FUN_1885_2e9a();
      return;
    }
    uVar1 = *(undefined2 *)0x11c;
    *(undefined2 *)0x11c = 1;
    local_8 = (undefined1 *)0xa643;
    FUN_1885_2e9a();
    *(undefined2 *)0x11c = uVar1;
    do {
      ppuVar9 = &local_8;
      local_8 = &stack0xfffc;
      piStack_a = &local_22;
      pppuStack_c = (undefined1 ***)&stack0xfffa;
      uStack_10 = 0xa65d;
      puStack_e = puVar8;
      FUN_1885_546d();
      if (((*(int *)0xa5c < unaff_SI) || ((int)local_8 < 0x161)) || (0x180 < (int)local_8))
      goto LAB_1885_1e5e;
      local_1e = ppuVar9;
      local_26 = local_22;
      while ((local_1e != (undefined1 **)0x0 || (local_26 != 0))) {
        ppuVar9 = &local_3c;
        local_8 = local_2a;
        piStack_a = &local_26;
        pppuStack_c = &local_1e;
        uStack_10 = 0xa6a2;
        puStack_e = puVar8;
        FUN_1885_546d();
      }
      if (*(int *)0x158 != 0) goto LAB_1885_1e5e;
    } while ((ppuVar9 == (undefined1 **)0x0) && (local_22 == 0));
    *param_2 = unaff_SI;
    *param_3 = (int)local_8;
    *param_4 = (uint)(ppuVar9 != (undefined1 **)0x0) + (-(uint)(local_22 != 0) & 2);
  } while( true );
  local_8 = (undefined1 *)0xa59f;
  FUN_1885_3b7a();
  if ((*param_4 == 1) && (*(char *)0x124 != '\0')) {
    local_20 = 1;
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)();
  }
  if (*param_4 == 2) {
    local_20 = 1;
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)();
LAB_1885_1e5e:
    for (local_24 = 0; local_24 < 0x10; local_24 = local_24 + 1) {
      if (*(char *)(iVar4 + local_24 + -0x4c78) != acStack_3a[local_24]) {
        local_20 = 1;
      }
      if (*(char *)(iVar4 + local_24 + -0x3e90) != acStack_18[local_24]) {
        local_20 = 1;
      }
    }
    local_8 = (undefined1 *)0xa71d;
    FUN_1885_2414();
    local_8 = (undefined1 *)0xa721;
    FUN_1885_1f49();
    *(undefined2 *)0xbc0 = 1;
    *(undefined1 *)0xd14 = 2;
    if ((local_20 != 0) || (*(int *)0xbc2 != 0)) {
      piStack_a = (int *)0xa741;
      local_8 = puVar8;
      FUN_21f2_27eb();
    }
    return;
  }
  *param_4 = 0;
  goto LAB_1885_1ba6;
}


