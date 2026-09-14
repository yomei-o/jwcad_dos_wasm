/* Ghidra decompilation of jw34.exe - machine output, not the original source. */

/* 3ab8:0000  FUN_3ab8_0000  70 bytes, 2 callers */

void __cdecl16far FUN_3ab8_0000(void)

{
  undefined1 local_3e [52];
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xab8b;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)0x6b0;
  puStack_6 = local_3e;
  uStack_8 = 0x22b2;
  uStack_a = 0xab98;
  FUN_21f2_3454();
  puStack_4 = (undefined1 *)0x954;
  puStack_6 = local_3e;
  uStack_8 = 0x22b2;
  uStack_a = 0xaba7;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0x402;
  puStack_6 = local_3e;
  uStack_8 = 0x22b2;
  uStack_a = 0xabb6;
  FUN_21f2_2d26();
  puStack_4 = local_3e;
  puStack_6 = (undefined1 *)0x22b2;
  uStack_8 = 0xabc1;
  FUN_13bf_0a03();
  return;
}



/* 3ab8:0046  FUN_3ab8_0046  198 bytes, 2 callers */

int __cdecl16far FUN_3ab8_0046(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_DS;
  uint uVar11;
  
  FUN_21f2_0ebc();
  uVar9 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
  iVar5 = (int)*(undefined4 *)0xc13a;
  uVar2 = *(uint *)(param_3 * 4 + iVar5);
  param_1 = param_1 * 4;
  uVar10 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
  iVar8 = (int)*(undefined4 *)0xc130;
  uVar11 = *(uint *)(param_1 + iVar8);
  param_2 = param_2 * 4;
  uVar3 = *(uint *)(param_2 + *(int *)0xc130);
  iVar4 = uVar3 - uVar11;
  iVar8 = (*(int *)(param_2 + *(int *)0xc130 + 2) - *(int *)(param_1 + iVar8 + 2)) -
          (uint)(uVar3 < uVar11);
  uVar11 = 0x22b2;
  func_0x00027932(0x22b2,iVar4,iVar8,uVar2 - *(uint *)(param_1 + iVar5),
                  (*(int *)(param_3 * 4 + iVar5 + 2) - *(int *)(param_1 + iVar5 + 2)) -
                  (uint)(uVar2 < *(uint *)(param_1 + iVar5)));
  uVar9 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
  iVar6 = (int)*(undefined4 *)0xc130;
  uVar2 = *(uint *)(iVar8 + iVar6);
  uVar10 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
  iVar7 = (int)*(undefined4 *)0xc13a;
  puVar1 = (uint *)(param_1 + iVar7);
  iVar5 = (*(int *)(param_2 + iVar7 + 2) - ((uint *)(param_1 + iVar7))[1]) -
          (uint)(*(uint *)(param_2 + iVar7) < *puVar1);
  iVar4 = func_0x00027932(0x22b2,*(uint *)(param_2 + iVar7) - *puVar1,iVar5,uVar2 - uVar11,
                          (*(int *)(iVar8 + iVar6 + 2) - iVar4) - (uint)(uVar2 < uVar11));
  return iVar5 - iVar4;
}



/* 3ab8:010c  FUN_3ab8_010c  136 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_010c(void)

{
  FUN_21f2_0ebc();
  func_0x00029834(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x00029834(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1163(0x22b2);
  FUN_28b3_1172(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x00029c9d(0x22b2);
  func_0x00029c2c(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029983(0x22b2);
  return 0x7a2a;
}



/* 3ab8:0194  FUN_3ab8_0194  136 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_0194(void)

{
  FUN_21f2_0ebc();
  func_0x00029834(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x00029834(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  FUN_28b3_1163(0x22b2);
  FUN_28b3_1172(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x00029c9d(0x22b2);
  func_0x00029c2c(0x22b2);
  FUN_28b3_0d8b(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029bb5(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_117c(0x22b2);
  func_0x00029983(0x22b2);
  return 0x7a2a;
}



/* 3ab8:021c  FUN_3ab8_021c  43 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_021c(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  return *(undefined2 *)
          ((*(int *)(param_2 * 2 + (int)*(undefined4 *)0xbef2) + param_1) * 2 +
          (int)*(undefined4 *)0xb48c);
}



/* 3ab8:0247  FUN_3ab8_0247  59 bytes, 1 callers */

uint __cdecl16far FUN_3ab8_0247(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  iVar2 = (*(int *)(param_2 * 2 + (int)*(undefined4 *)0xbef2) + param_1) * 2;
  uVar4 = (undefined2)((ulong)*(undefined4 *)0xb48c >> 0x10);
  iVar3 = (int)*(undefined4 *)0xb48c;
  uVar1 = *(uint *)(iVar2 + iVar3);
  *(int *)(iVar2 + iVar3) = -((uVar1 ^ (int)uVar1 >> 0xf) - ((int)uVar1 >> 0xf));
  return uVar1;
}



/* 3ab8:0282  FUN_3ab8_0282  3793 bytes, 0 callers */

undefined2 __cdecl16far
FUN_3ab8_0282(undefined2 param_1,undefined2 param_2,uint param_3,undefined2 param_4,int param_5,
             int param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined2 *puVar13;
  int aiStack_c2 [6];
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  int local_b0;
  int local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  int local_a0;
  int local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  uint local_94;
  int local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_88;
  uint local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_7c;
  int local_7a;
  int local_74;
  undefined2 local_72;
  undefined2 local_70;
  int local_6e;
  int *local_6c;
  int local_66;
  int local_64;
  int *local_62;
  int aiStack_60 [4];
  int local_58;
  int *local_56;
  int local_54;
  int aiStack_52 [6];
  undefined2 local_46;
  int local_44;
  int local_42;
  int local_40;
  int *local_3e;
  int local_3c;
  int aiStack_3a [4];
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  int *local_2c;
  int local_2a;
  undefined2 local_28;
  int local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  int local_16;
  int *piStack_14;
  undefined2 uStack_12;
  uint uStack_10;
  int *local_e;
  uint uStack_c;
  
  FUN_21f2_0ebc();
  uStack_c = 0xae17;
  func_0x0000daa6();
  uStack_c = 0;
  local_e = (int *)0x3;
  uStack_10 = 0x885;
  uStack_12 = 0xae30;
  func_0x0000f2cb();
  local_64 = *(int *)0xc396;
  local_66 = *(int *)0xc3b8;
  local_7c = *(undefined2 *)0xc11c;
  FUN_28b3_0d8b();
  FUN_28b3_112c();
  func_0x00029c2c();
  func_0x00029bfc();
  uVar10 = 0x22b2;
  func_0x00029983();
  local_6e = 10000;
  *(undefined2 *)0xbe9e = 0xffff;
  *(undefined2 *)0xbea0 = 0xffff;
  local_88 = 0xfc19;
  aiStack_60[1] = *(int *)0xc3b8;
  aiStack_52[2] = aiStack_60[1];
  aiStack_60[2] = aiStack_60[1];
  aiStack_52[1] = 2;
  aiStack_3a[2] = 2;
  local_44 = *(int *)0xc396;
  aiStack_c2[2] = 0xffff;
  aiStack_60[3] = aiStack_60[1] + -1;
  aiStack_3a[3] = local_44;
  local_42 = local_44;
  local_58 = aiStack_60[3];
  local_9e = 0;
  aiStack_c2[1] = 0;
  aiStack_c2[3] = 0;
  local_40 = local_44 + -1;
  local_b6 = 800;
  local_b4 = 700;
  local_b2 = 600;
  local_b0 = aiStack_60[3];
  aiStack_3a[1] = 1;
  local_46 = 1;
  aiStack_52[3] = 1;
  aiStack_52[4] = 1;
  local_32 = 1;
  aiStack_c2[4] = 1;
  for (local_7a = 1; local_7a < 5; local_7a = local_7a + 1) {
    for (local_2c = (int *)aiStack_52[local_7a]; iVar5 = local_7a,
        (int)local_2c <= aiStack_60[local_7a]; local_2c = (int *)((int)local_2c + 1)) {
      local_3e = (int *)((int)local_2c + (&uStack_c)[local_7a]);
      local_e = (int *)0xbc54;
      uStack_c = uVar10;
      FUN_1000_0599();
      uStack_c = 0xdef;
      uVar10 = 0x11f2;
      local_e = (int *)0xbc67;
      func_0x00012276();
      for (local_26 = aiStack_3a[iVar5]; iVar5 = local_7a, local_26 <= aiStack_52[local_7a + 5];
          local_26 = local_26 + 1) {
        local_e = (int *)0xb9ef;
        uStack_c = uVar10;
        local_94 = FUN_3ab8_021c();
        func_0x000297e6();
        local_2a = aiStack_c2[iVar5] + local_26;
        uStack_c = 0x22b2;
        local_e = (int *)0xba10;
        local_a0 = FUN_3ab8_021c();
        FUN_28b3_0d8b();
        FUN_28b3_100d();
        uVar12 = (local_94 ^ (int)local_94 >> 0xf) < (uint)((int)local_94 >> 0xf);
        FUN_28b3_0d8b();
        FUN_28b3_100d();
        func_0x00029c9d();
        uVar10 = 0x22b2;
        FUN_28b3_1181();
        if (((bool)uVar12) && ((0 < (int)local_94 || (0 < local_a0)))) {
          local_56 = local_2c;
          local_54 = local_2a;
          local_62 = local_3e;
          local_3c = local_26;
          uStack_c = 0x22b2;
          local_e = (int *)0xba8c;
          uVar10 = FUN_3ab8_021c();
          local_94 = (uVar10 ^ (int)uVar10 >> 0xf) - ((int)uVar10 >> 0xf);
          local_86 = local_2a - local_3c;
          local_92 = (int)local_3e - (int)local_2c;
          uStack_c = 0x22b2;
          local_e = (int *)0xbac2;
          func_0x000297e6();
          piStack_14 = (int *)0x22b2;
          local_16 = 0xbacc;
          func_0x000299d1();
          piStack_14 = local_3e;
          local_16 = local_2a;
          local_18 = 0x22b2;
          local_1a = 0xbad6;
          uVar10 = FUN_3ab8_021c();
          local_a0 = (uVar10 ^ (int)uVar10 >> 0xf) - ((int)uVar10 >> 0xf);
          piStack_14 = (int *)0x22b2;
          local_16 = 0xbaee;
          FUN_28b3_0d8b();
          piStack_14 = (int *)0x22b2;
          local_16 = 0xbaf3;
          func_0x00029d78();
          local_1c = 0x22b2;
          local_1e = 0xbafd;
          func_0x000299d1();
          local_1c = 0x22b2;
          local_1e = 0xbb0a;
          FUN_28b3_0d8b();
          local_1c = 0x22b2;
          local_1e = 0xbb0f;
          func_0x00029d78();
          local_24 = 0x22b2;
          local_26 = 0xbb19;
          func_0x000299d1();
          local_24 = 0x22b2;
          local_26 = 0xbb1d;
          puVar6 = (undefined2 *)FUN_3ab8_010c();
          local_84 = *puVar6;
          local_82 = puVar6[1];
          FUN_28b3_0d8b();
          func_0x0002996b();
          func_0x00029983();
          FUN_28b3_0d8b();
          func_0x00029983();
          uStack_c = 0x22b2;
          local_e = (int *)0xbb6c;
          func_0x000297e6();
          piStack_14 = (int *)0x22b2;
          local_16 = 0xbb76;
          func_0x000299d1();
          piStack_14 = (int *)0x22b2;
          local_16 = 47999;
          FUN_28b3_0d8b();
          local_1c = 0x22b2;
          local_1e = 0xbb89;
          func_0x000299d1();
          local_1c = 0x22b2;
          local_1e = 0xbb92;
          func_0x000297e6();
          local_1c = 0x22b2;
          local_1e = 0xbb97;
          func_0x00029d78();
          local_24 = 0x22b2;
          local_26 = 0xbba1;
          func_0x000299d1();
          local_24 = 0x22b2;
          local_26 = -0x445b;
          puVar6 = (undefined2 *)FUN_3ab8_0194();
          local_90 = *puVar6;
          local_8e = puVar6[1];
          do {
            uStack_c = 0x22b2;
            local_e = (int *)0xbbd7;
            uVar10 = FUN_3ab8_021c();
            local_aa = (uVar10 ^ (int)uVar10 >> 0xf) - ((int)uVar10 >> 0xf);
            uStack_c = 0x22b2;
            local_e = (int *)0xbbf3;
            uVar10 = FUN_3ab8_021c();
            if (((((int)local_94 < local_6e) && (local_a0 < local_6e)) && (local_aa < local_6e)) &&
               ((int)((uVar10 ^ (int)uVar10 >> 0xf) - ((int)uVar10 >> 0xf)) < local_6e)) {
              local_28 = 1;
            }
            else {
              local_28 = 0;
              if (0x14 < local_9e) {
                uStack_c = 0x22b2;
                local_e = (int *)0xaf2c;
                puVar13 = (undefined2 *)func_0x0000013f();
                puVar8 = (undefined2 *)puVar13;
                puVar6 = &local_24;
                for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                  puVar2 = puVar6;
                  puVar6 = puVar6 + 1;
                  puVar1 = puVar8;
                  puVar8 = puVar8 + 1;
                  *puVar2 = *puVar1;
                }
                uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
                iVar5 = (int)*(undefined4 *)0xc392;
                *(undefined2 *)(iVar5 + 0x98c) = local_24;
                *(undefined2 *)(iVar5 + 0x98e) = local_22;
                uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
                iVar5 = (int)*(undefined4 *)0xc398;
                *(undefined2 *)(iVar5 + 0x98c) = local_20;
                *(undefined2 *)(iVar5 + 0x98e) = local_1e;
                uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
                iVar5 = (int)*(undefined4 *)0xc392;
                *(undefined2 *)(iVar5 + 0x990) = local_1c;
                *(undefined2 *)(iVar5 + 0x992) = local_1a;
                uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
                iVar5 = (int)*(undefined4 *)0xc398;
                *(undefined2 *)(iVar5 + 0x990) = local_18;
                *(undefined2 *)(iVar5 + 0x992) = local_16;
                uStack_c = param_3;
                local_e = (int *)param_2;
                uStack_10 = param_1;
                uStack_12 = 0;
                piStack_14 = (int *)0xafa1;
                FUN_3ab8_3afa();
              }
              local_9e = 0;
              *(undefined2 *)0xbe9e = 0xffff;
              *(undefined2 *)0xbea0 = 0xffff;
              local_88 = 0xfc19;
            }
            FUN_28b3_0d8b();
            func_0x00029c2c();
            func_0x00029983();
            iVar5 = local_3c;
            piVar4 = local_56;
            local_3c = local_54;
            local_54 = iVar5;
            local_6c = local_56;
            local_56 = local_62;
            local_62 = piVar4;
            uStack_c = 0x22b2;
            local_e = (int *)0xb02a;
            uVar10 = FUN_3ab8_021c();
            local_94 = (uVar10 ^ (int)uVar10 >> 0xf) - ((int)uVar10 >> 0xf);
            local_86 = local_54 - local_3c;
            local_92 = (int)local_62 - (int)local_56;
            func_0x000297e6();
            uStack_c = 0x22b2;
            local_e = (int *)0xb060;
            uVar10 = FUN_3ab8_021c();
            uVar7 = (int)uVar10 >> 0xf;
            uVar12 = (uVar10 ^ uVar7) < uVar7;
            local_a0 = (uVar10 ^ uVar7) - uVar7;
            FUN_28b3_0d8b();
            FUN_28b3_100d();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029c9d();
            FUN_28b3_1181();
            if ((bool)uVar12) {
              do {
                local_3c = local_54;
                local_56 = local_62;
                uStack_c = 0x22b2;
                local_e = (int *)0xb0b3;
                uVar10 = FUN_3ab8_021c();
                local_94 = (uVar10 ^ (int)uVar10 >> 0xf) - ((int)uVar10 >> 0xf);
                local_62 = (int *)((int)local_62 - local_86);
                local_54 = local_54 + local_92;
                uStack_c = 0x22b2;
                local_e = (int *)0xb0dc;
                uVar10 = FUN_3ab8_021c();
                local_a0 = (uVar10 ^ (int)uVar10 >> 0xf) - ((int)uVar10 >> 0xf);
                local_86 = local_54 - local_3c;
                local_92 = (int)local_62 - (int)local_56;
                uStack_c = 0x22b2;
                local_e = (int *)0xb112;
                func_0x000297e6();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb11c;
                func_0x000299d1();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb124;
                func_0x000297e6();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb129;
                func_0x00029d78();
                local_1c = 0x22b2;
                local_1e = 0xb133;
                func_0x000299d1();
                local_1c = 0x22b2;
                local_1e = 0xb146;
                FUN_28b3_0d8b();
                local_1c = 0x22b2;
                local_1e = 0xb14f;
                func_0x00029c2c();
                local_1c = 0x22b2;
                local_1e = 0xb154;
                func_0x00029d78();
                local_24 = 0x22b2;
                local_26 = 0xb15e;
                func_0x000299d1();
                local_24 = 0x22b2;
                local_26 = 0xb162;
                puVar6 = (undefined2 *)FUN_3ab8_010c();
                local_9c = *puVar6;
                local_9a = puVar6[1];
                FUN_28b3_0d8b();
                func_0x00029c2c();
                func_0x0002996b();
                FUN_28b3_0ee9();
                local_72 = local_30;
                local_70 = local_2e;
                uStack_c = local_94;
                local_e = local_56;
                uStack_10 = 0x22b2;
                uStack_12 = 0xb1bd;
                func_0x000297e6();
                local_18 = 0x22b2;
                local_1a = 0xb1c7;
                func_0x000299d1();
                local_18 = 0x22b2;
                local_1a = 0xb1cf;
                func_0x000297e6();
                local_18 = 0x22b2;
                local_1a = 0xb1d4;
                func_0x00029d78();
                local_20 = 0x22b2;
                local_22 = 0xb1de;
                func_0x000299d1();
                local_20 = 0x22b2;
                local_22 = 0xb1e6;
                func_0x000297e6();
                local_20 = 0x22b2;
                local_22 = 0xb1eb;
                func_0x00029d78();
                local_28 = 0x22b2;
                local_2a = 0xb1f5;
                func_0x000299d1();
                local_28 = 0x22b2;
                local_2a = -0x4e07;
                FUN_3ab8_0194();
                uStack_c = 0x22b2;
                local_e = (int *)0xb203;
                func_0x000297e6();
                uStack_c = 0x22b2;
                local_e = (int *)0xb20c;
                func_0x0002996b();
                uStack_c = 0x22b2;
                local_e = (int *)0xb211;
                func_0x00029d78();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb21b;
                func_0x000299d1();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb224;
                func_0x000297e6();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb229;
                func_0x00029d78();
                local_1c = 0x22b2;
                local_1e = 0xb233;
                func_0x000299d1();
                local_1c = 0x22b2;
                local_1e = 0xb23c;
                func_0x000297e6();
                local_1c = 0x22b2;
                local_1e = 0xb241;
                func_0x00029d78();
                local_24 = 0x22b2;
                local_26 = 0xb24b;
                func_0x000299d1();
                local_24 = 0x22b2;
                local_26 = 0xb254;
                func_0x000297e6();
                local_24 = 0x22b2;
                local_26 = -0x4da7;
                func_0x00029d78();
                local_2c = (int *)0x22b2;
                local_2e = 0xb263;
                func_0x000299d1();
                local_2c = &local_9e;
                local_2e = local_28;
                local_30 = 0x22b2;
                local_32 = 0xb26f;
                iVar5 = FUN_3ab8_325f();
                uVar12 = false;
                if (iVar5 != 0) {
                  FUN_28b3_0d8b();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  uVar11 = 0;
                  if (param_6 != 0 || param_5 != 0) {
                    FUN_28b3_0c98();
                    func_0x0002996b();
                    func_0x00029b55();
                    FUN_28b3_1036();
                    FUN_28b3_0d8b();
                    FUN_28b3_100d();
                    FUN_28b3_1036();
                    FUN_28b3_1163();
                    func_0x00029983();
                  }
                  func_0x000297e6();
                  FUN_28b3_0d8b();
                  FUN_28b3_1181();
                  uVar12 = false;
                  if ((bool)uVar11) {
                    func_0x000297e6();
                    func_0x00029d78();
                    local_88 = FUN_28b3_0f51();
                    iVar5 = *(int *)0x14a + (uint)(*(int *)0x148 != 0);
                    uVar12 = iVar5 != 0;
                    *(int *)0xbe9e = -*(int *)0x148;
                    *(int *)0xbea0 = -iVar5;
                  }
                }
                local_84 = local_9c;
                local_82 = local_9a;
                local_90 = local_a8;
                local_8e = local_a6;
                func_0x000297e6();
                FUN_28b3_0d8b();
                FUN_28b3_100d();
                FUN_28b3_0d8b();
                FUN_28b3_100d();
                func_0x00029c9d();
                FUN_28b3_1181();
              } while (!(bool)uVar12);
            }
            else {
              do {
                uStack_c = 0x22b2;
                local_e = (int *)0xb617;
                func_0x000297e6();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb621;
                func_0x000299d1();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb629;
                func_0x000297e6();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb62e;
                func_0x00029d78();
                local_1c = 0x22b2;
                local_1e = 0xb638;
                func_0x000299d1();
                local_1c = 0x22b2;
                local_1e = 0xb64d;
                FUN_28b3_0d8b();
                local_1c = 0x22b2;
                local_1e = 0xb656;
                func_0x00029c2c();
                local_1c = 0x22b2;
                local_1e = 0xb65b;
                func_0x00029d78();
                local_24 = 0x22b2;
                local_26 = 0xb665;
                func_0x000299d1();
                local_24 = 0x22b2;
                local_26 = 0xb669;
                puVar6 = (undefined2 *)FUN_3ab8_010c();
                local_9c = *puVar6;
                local_9a = puVar6[1];
                FUN_28b3_0d8b();
                func_0x00029c2c();
                func_0x0002996b();
                FUN_28b3_0ee9();
                local_72 = local_30;
                local_70 = local_2e;
                uStack_c = local_94;
                local_e = local_56;
                uStack_10 = 0x22b2;
                uStack_12 = 0xb6ca;
                func_0x000297e6();
                local_18 = 0x22b2;
                local_1a = 0xb6d4;
                func_0x000299d1();
                local_18 = 0x22b2;
                local_1a = 0xb6dc;
                func_0x000297e6();
                local_18 = 0x22b2;
                local_1a = 0xb6e1;
                func_0x00029d78();
                local_20 = 0x22b2;
                local_22 = 0xb6eb;
                func_0x000299d1();
                local_20 = 0x22b2;
                local_22 = 0xb6f3;
                func_0x000297e6();
                local_20 = 0x22b2;
                local_22 = 0xb6f8;
                func_0x00029d78();
                local_28 = 0x22b2;
                local_2a = 0xb702;
                func_0x000299d1();
                local_28 = 0x22b2;
                local_2a = -0x48fa;
                FUN_3ab8_0194();
                uStack_c = 0x22b2;
                local_e = (int *)0xb710;
                func_0x000297e6();
                uStack_c = 0x22b2;
                local_e = (int *)0xb719;
                func_0x0002996b();
                uStack_c = 0x22b2;
                local_e = (int *)0xb71e;
                func_0x00029d78();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb728;
                func_0x000299d1();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb731;
                func_0x000297e6();
                piStack_14 = (int *)0x22b2;
                local_16 = 0xb736;
                func_0x00029d78();
                local_1c = 0x22b2;
                local_1e = 0xb740;
                func_0x000299d1();
                local_1c = 0x22b2;
                local_1e = 0xb749;
                func_0x000297e6();
                local_1c = 0x22b2;
                local_1e = 0xb74e;
                func_0x00029d78();
                local_24 = 0x22b2;
                local_26 = 0xb758;
                func_0x000299d1();
                local_24 = 0x22b2;
                local_26 = 0xb761;
                func_0x000297e6();
                local_24 = 0x22b2;
                local_26 = -0x489a;
                func_0x00029d78();
                local_2c = (int *)0x22b2;
                local_2e = 0xb770;
                func_0x000299d1();
                local_2c = &local_9e;
                local_2e = local_28;
                local_30 = 0x22b2;
                local_32 = 0xb77c;
                iVar5 = FUN_3ab8_325f();
                if (iVar5 != 0) {
                  FUN_28b3_0d8b();
                  func_0x0002996b();
                  FUN_28b3_0ee9();
                  uVar12 = 0;
                  if (param_6 != 0 || param_5 != 0) {
                    FUN_28b3_0c98();
                    func_0x0002996b();
                    func_0x00029b55();
                    FUN_28b3_1036();
                    FUN_28b3_0d8b();
                    FUN_28b3_100d();
                    FUN_28b3_1036();
                    FUN_28b3_1163();
                    func_0x00029983();
                  }
                  func_0x000297e6();
                  FUN_28b3_0d8b();
                  FUN_28b3_1181();
                  if ((bool)uVar12) {
                    func_0x000297e6();
                    func_0x00029d78();
                    local_88 = FUN_28b3_0f51();
                    iVar5 = *(int *)0x148;
                    iVar3 = *(int *)0x14a;
                    *(int *)0xbe9e = -iVar5;
                    *(int *)0xbea0 = -(iVar3 + (uint)(iVar5 != 0));
                  }
                }
                local_84 = local_9c;
                local_82 = local_9a;
                local_90 = local_a8;
                local_8e = local_a6;
                local_54 = local_3c;
                local_62 = local_56;
                local_56 = (int *)((int)local_56 - local_86);
                local_3c = local_3c + local_92;
                uStack_c = 0x22b2;
                local_e = (int *)0xb889;
                uVar10 = FUN_3ab8_021c();
                local_94 = (uVar10 ^ (int)uVar10 >> 0xf) - ((int)uVar10 >> 0xf);
                local_86 = local_54 - local_3c;
                local_92 = (int)local_62 - (int)local_56;
                func_0x000297e6();
                uStack_c = 0x22b2;
                local_e = (int *)0xb8bf;
                uVar10 = FUN_3ab8_021c();
                uVar7 = (int)uVar10 >> 0xf;
                uVar12 = (uVar10 ^ uVar7) < uVar7;
                local_a0 = (uVar10 ^ uVar7) - uVar7;
                FUN_28b3_0d8b();
                FUN_28b3_100d();
                FUN_28b3_0d8b();
                FUN_28b3_100d();
                func_0x00029c9d();
                FUN_28b3_1181();
              } while (!(bool)uVar12);
            }
            uStack_c = 0x22b2;
            local_e = (int *)0xb39a;
            FUN_3ab8_0247();
            uStack_c = 0x22b2;
            local_e = (int *)0xb3a6;
            FUN_3ab8_0247();
            uStack_c = 0x22b2;
            local_e = (int *)0xb3b7;
            func_0x000297e6();
            piStack_14 = (int *)0x22b2;
            local_16 = 0xb3c1;
            func_0x000299d1();
            piStack_14 = (int *)0x22b2;
            local_16 = 0xb3ca;
            FUN_28b3_0d8b();
            local_1c = 0x22b2;
            local_1e = 0xb3d4;
            func_0x000299d1();
            local_1c = 0x22b2;
            local_1e = 0xb3dd;
            FUN_28b3_0d8b();
            local_1c = 0x22b2;
            local_1e = 0xb3e2;
            func_0x00029d78();
            local_24 = 0x22b2;
            local_26 = 0xb3ec;
            func_0x000299d1();
            local_24 = 0x22b2;
            local_26 = 0xb3f0;
            puVar6 = (undefined2 *)FUN_3ab8_010c();
            local_9c = *puVar6;
            local_9a = puVar6[1];
            FUN_28b3_0d8b();
            func_0x0002996b();
            FUN_28b3_0ee9();
            FUN_28b3_0d8b();
            func_0x00029983();
            uStack_c = local_94;
            local_e = local_56;
            uStack_10 = 0x22b2;
            uStack_12 = 0xb441;
            func_0x000297e6();
            local_18 = 0x22b2;
            local_1a = 0xb44b;
            func_0x000299d1();
            local_18 = 0x22b2;
            local_1a = 0xb454;
            FUN_28b3_0d8b();
            local_20 = 0x22b2;
            local_22 = 0xb45e;
            func_0x000299d1();
            local_20 = 0x22b2;
            local_22 = 0xb466;
            func_0x000297e6();
            local_20 = 0x22b2;
            local_22 = 0xb46b;
            func_0x00029d78();
            local_28 = 0x22b2;
            local_2a = 0xb475;
            func_0x000299d1();
            local_28 = 0x22b2;
            local_2a = -0x4b87;
            FUN_3ab8_0194();
            uStack_c = 0x22b2;
            local_e = (int *)0xb483;
            func_0x000297e6();
            uStack_c = 0x22b2;
            local_e = (int *)0xb48c;
            func_0x0002996b();
            uStack_c = 0x22b2;
            local_e = (int *)0xb491;
            func_0x00029d78();
            piStack_14 = (int *)0x22b2;
            local_16 = 0xb49b;
            func_0x000299d1();
            piStack_14 = (int *)0x22b2;
            local_16 = 0xb4a4;
            func_0x000297e6();
            piStack_14 = (int *)0x22b2;
            local_16 = 0xb4a9;
            func_0x00029d78();
            local_1c = 0x22b2;
            local_1e = 0xb4b3;
            func_0x000299d1();
            local_1c = 0x22b2;
            local_1e = 0xb4bc;
            func_0x000297e6();
            local_1c = 0x22b2;
            local_1e = 0xb4c1;
            func_0x00029d78();
            local_24 = 0x22b2;
            local_26 = 0xb4cb;
            func_0x000299d1();
            local_24 = 0x22b2;
            local_26 = 0xb4d4;
            func_0x000297e6();
            local_24 = 0x22b2;
            local_26 = -0x4b27;
            func_0x00029d78();
            local_2c = (int *)0x22b2;
            local_2e = 0xb4e3;
            func_0x000299d1();
            local_2c = &local_9e;
            local_2e = local_28;
            local_30 = 0x22b2;
            local_32 = 0xb4ef;
            iVar5 = FUN_3ab8_325f();
            if (iVar5 != 0) {
              FUN_28b3_0d8b();
              func_0x0002996b();
              FUN_28b3_0ee9();
              uVar12 = 0;
              if (param_6 != 0 || param_5 != 0) {
                FUN_28b3_0c98();
                func_0x0002996b();
                func_0x00029b55();
                FUN_28b3_1036();
                FUN_28b3_0d8b();
                FUN_28b3_100d();
                FUN_28b3_1036();
                FUN_28b3_1163();
                func_0x00029983();
              }
              func_0x000297e6();
              FUN_28b3_0d8b();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                func_0x000297e6();
                func_0x00029d78();
                local_88 = FUN_28b3_0f51();
                iVar5 = *(int *)0x148;
                iVar3 = *(int *)0x14a;
                *(int *)0xbe9e = -iVar5;
                *(int *)0xbea0 = -(iVar3 + (uint)(iVar5 != 0));
              }
            }
            uVar10 = 0x22b2;
            local_e = (int *)(local_86 + (int)local_56);
            local_84 = local_9c;
            local_82 = local_9a;
            local_90 = local_a8;
            local_8e = local_a6;
          } while ((((0 < local_3c - local_92) && (local_3c - local_92 <= local_64)) &&
                   ((0 < (int)local_e && ((int)local_e <= local_66)))) &&
                  (((local_3c != local_26 || (local_2c != local_56)) ||
                   ((local_2a != local_54 || (local_3e != local_62))))));
          if (10 < local_9e) {
            uStack_c = 0x22b2;
            uVar10 = 0;
            local_e = (int *)0xb944;
            puVar13 = (undefined2 *)func_0x0000013f();
            puVar8 = (undefined2 *)puVar13;
            puVar6 = &local_24;
            for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar2 = puVar6;
              puVar6 = puVar6 + 1;
              puVar1 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar2 = *puVar1;
            }
            uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
            iVar5 = (int)*(undefined4 *)0xc392;
            *(undefined2 *)(iVar5 + 0x98c) = local_24;
            *(undefined2 *)(iVar5 + 0x98e) = local_22;
            uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
            iVar5 = (int)*(undefined4 *)0xc398;
            *(undefined2 *)(iVar5 + 0x98c) = local_20;
            *(undefined2 *)(iVar5 + 0x98e) = local_1e;
            uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
            iVar5 = (int)*(undefined4 *)0xc392;
            *(undefined2 *)(iVar5 + 0x990) = local_1c;
            *(undefined2 *)(iVar5 + 0x992) = local_1a;
            uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
            iVar5 = (int)*(undefined4 *)0xc398;
            *(undefined2 *)(iVar5 + 0x990) = local_18;
            *(undefined2 *)(iVar5 + 0x992) = local_16;
            uStack_c = param_3;
            local_e = (int *)param_2;
            uStack_10 = param_1;
            uStack_12 = 0;
            piStack_14 = (int *)0xb9b9;
            FUN_3ab8_3afa();
            local_9e = 0;
            *(undefined2 *)0xbe9e = 0xffff;
            *(undefined2 *)0xbea0 = 0xffff;
            local_88 = 0xfc19;
          }
        }
      }
    }
  }
  local_74 = 1;
  uVar9 = *(undefined2 *)0xb48e;
  do {
    local_86 = *(uint *)(local_74 * 2 + *(int *)0xb48c);
    *(int *)(local_74 * 2 + *(int *)0xb48c) =
         (local_86 ^ (int)local_86 >> 0xf) - ((int)local_86 >> 0xf);
    local_74 = local_74 + 1;
  } while (local_74 < 0x7919);
  uStack_c = 0;
  local_e = (int *)0x3;
  uStack_12 = 0xbcc7;
  uStack_10 = uVar10;
  func_0x0000f2cb();
  return 1;
}



/* 3ab8:1153  FUN_3ab8_1153  390 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_1153(void)

{
  undefined2 unaff_DS;
  undefined2 *in_stack_00000018;
  undefined2 *in_stack_0000001a;
  undefined2 *in_stack_0000001c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0x3ab8;
  local_6 = 0xbcde;
  FUN_21f2_0ebc();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbcf3;
  func_0x00029834();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbcfc;
  func_0x00029c2c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd04;
  func_0x000299b9();
  func_0x000299d1(0x22b2);
  func_0x0002a11e(0x22b2);
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd1d;
  func_0x00029834();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd25;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd2d;
  func_0x00029834();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd36;
  func_0x00029c2c();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd3e;
  func_0x000299b9();
  func_0x000299d1(0x22b2);
  func_0x0002a11e(0x22b2);
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd57;
  func_0x00029834();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd5f;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd67;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd6f;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd77;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd7f;
  func_0x00029834();
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbd98;
  func_0x00029834();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbda0;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbda8;
  func_0x00029834();
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbdc1;
  func_0x00029834();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbdc9;
  func_0x0002996b();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbdd1;
  func_0x00029b6d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbdd9;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbde1;
  func_0x000297e6();
  local_4 = &local_a;
  local_6 = 0x22b2;
  local_8 = 0xbdea;
  func_0x00029b9d();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbdf0;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbdf8;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbe00;
  func_0x00029b85();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbe08;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbe10;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbe18;
  func_0x00029983();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbe20;
  func_0x000297e6();
  local_4 = (undefined2 *)0x22b2;
  local_6 = 0xbe28;
  func_0x00029983();
  *in_stack_00000018 = local_a;
  in_stack_00000018[1] = local_8;
  *in_stack_0000001a = local_12;
  in_stack_0000001a[1] = local_10;
  *in_stack_0000001c = local_1a;
  in_stack_0000001c[1] = local_18;
  return 1;
}



/* 3ab8:12d9  FUN_3ab8_12d9  237 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_12d9(void)

{
  undefined2 unaff_DS;
  undefined2 *in_stack_0000002e;
  undefined2 *in_stack_00000030;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 uVar1;
  
  FUN_21f2_0ebc();
  FUN_28b3_0d8b(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299b9(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x0002a11e(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x00029c74(0x22b2);
  FUN_28b3_1c08(0x22b2);
  FUN_28b3_1177(0x22b2);
  func_0x00029983(0x22b2);
  func_0x00029834(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x0002a10c(0x22b2);
  func_0x00029834(0x22b2);
  func_0x00029b6d(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x00029983(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029c2c(0x22b2);
  FUN_28b3_10e4(0x22b2);
  uVar1 = 0x22b2;
  func_0x00029983();
  *in_stack_0000002e = local_a;
  in_stack_0000002e[1] = local_8;
  *in_stack_00000030 = 0xbf23;
  in_stack_00000030[1] = uVar1;
  return 1;
}



/* 3ab8:13c6  FUN_3ab8_13c6  291 bytes, 1 callers */

void __cdecl16far FUN_3ab8_13c6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint auStack_330 [400];
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  uint local_8;
  uint uVar5;
  int iVar6;
  
  FUN_21f2_0ebc();
  for (local_a = 1; iVar6 = local_a, local_a <= param_1; local_a = local_a + 1) {
    auStack_330[local_a * 2] = 0x9400;
    auStack_330[iVar6 * 2 + 1] = 0x7735;
  }
  for (local_e = 1; local_e <= param_2; local_e = local_e + 1) {
    iVar6 = *(int *)(local_e * 2 + (int)*(undefined4 *)0xbece);
    local_10 = iVar6;
    if (0 < iVar6) {
      iVar2 = local_e * 4;
      uVar4 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
      iVar3 = (int)*(undefined4 *)0xc13a;
      iVar1 = *(int *)(iVar2 + iVar3 + 2);
      if ((iVar1 <= (int)auStack_330[iVar6 * 2 + 1]) &&
         ((iVar1 < (int)auStack_330[iVar6 * 2 + 1] ||
          (*(uint *)(iVar2 + iVar3) < auStack_330[iVar6 * 2])))) {
        uVar5 = *(uint *)(iVar2 + iVar3 + 2);
        auStack_330[iVar6 * 2] = *(uint *)(iVar2 + iVar3);
        auStack_330[iVar6 * 2 + 1] = uVar5;
        *(int *)(local_10 * 2 + (int)*(undefined4 *)0xc278) = local_e;
      }
    }
  }
  for (local_c = 1; local_c <= param_1; local_c = local_c + 1) {
    local_8 = 0xca00;
    uVar5 = 0x3b9a;
    iVar6 = 1;
    for (local_e = 1; local_e <= param_1; local_e = local_e + 1) {
      if (((int)auStack_330[local_e * 2 + 1] <= (int)uVar5) &&
         (((int)auStack_330[local_e * 2 + 1] < (int)uVar5 || (auStack_330[local_e * 2] < local_8))))
      {
        uVar5 = auStack_330[local_e * 2 + 1];
        local_8 = auStack_330[local_e * 2];
        iVar6 = local_e;
      }
    }
    *(int *)(local_c * 2 + (int)*(undefined4 *)0xb77c) = iVar6;
    auStack_330[iVar6 * 2] = 0x9400;
    auStack_330[iVar6 * 2 + 1] = 0x7735;
  }
  return;
}



/* 3ab8:14e9  FUN_3ab8_14e9  479 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_14e9(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6,
             int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_276;
  int local_26e;
  int local_268;
  int local_266;
  char acStack_264 [598];
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  iStack_6 = 0xc074;
  FUN_21f2_0ebc();
  *param_3 = param_2;
  *param_4 = param_1;
  *param_5 = param_8 + 1;
  *param_6 = -1;
  iVar3 = param_2 * 4;
  uVar8 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
  iVar5 = (int)*(undefined4 *)0xc130;
  iVar2 = *(int *)(iVar3 + iVar5);
  iVar5 = *(int *)(iVar3 + iVar5 + 2);
  uVar8 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
  iVar6 = (int)*(undefined4 *)0xc13a;
  iVar1 = *(int *)(iVar3 + iVar6);
  iVar3 = *(int *)(iVar3 + iVar6 + 2);
  iVar6 = iVar3;
  for (local_268 = 1; local_268 <= param_7; local_268 = local_268 + 1) {
    iVar4 = local_268 * 4;
    uVar8 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
    iVar7 = (int)*(undefined4 *)0xc130;
    iVar6 = iVar5;
    if ((*(int *)(iVar4 + iVar7) == iVar2) && (*(int *)(iVar4 + iVar7 + 2) == iVar5)) {
      uVar8 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
      iVar7 = (int)*(undefined4 *)0xc13a;
      iVar6 = iVar3;
      if ((*(int *)(iVar4 + iVar7) != iVar1) || (*(int *)(iVar4 + iVar7 + 2) != iVar3))
      goto LAB_3ab8_1549;
      acStack_264[local_268] = '\x01';
    }
    else {
LAB_3ab8_1549:
      acStack_264[local_268] = '\0';
    }
  }
  local_276 = 1;
  do {
    if (param_8 < local_276) {
      *param_6 = -1;
      return 1;
    }
    local_266 = *(int *)(local_276 * 2 + (int)*(undefined4 *)0xc08a);
    iVar2 = *(int *)(local_276 * 2 + (int)*(undefined4 *)0xc096);
    if (((acStack_264[local_266] != '\0') || (acStack_264[iVar2] != '\0')) &&
       ((acStack_264[local_266] == '\0' || (acStack_264[iVar2] == '\0')))) {
      local_26e = iVar2;
      if (acStack_264[iVar2] != '\0') {
        local_26e = local_266;
        local_266 = iVar2;
      }
      iStack_6 = local_26e;
      iStack_8 = param_2;
      iStack_a = param_1;
      uStack_c = 0x22b2;
      uStack_e = 0xc208;
      iVar2 = FUN_3ab8_0046();
      if (*param_6 < 0) {
LAB_3ab8_15b9:
        if (iVar6 < 0) {
LAB_3ab8_15ec:
          iStack_a = *param_3;
          iStack_8 = *param_4;
          iStack_6 = local_26e;
          uStack_c = 0x22b2;
          uStack_e = 0xc188;
          iVar2 = FUN_3ab8_0046();
          if ((iVar6 < 1) && ((iVar6 < 0 || (iVar2 == 0)))) goto LAB_3ab8_1615;
        }
        else {
          if (iVar6 != 0 || iVar2 != 0) goto LAB_3ab8_15e6;
          *param_6 = 0;
        }
      }
      else {
        if (*param_6 != 0) {
          if (*param_6 < 1) goto LAB_3ab8_15b9;
          if ((iVar6 < 1) && ((iVar6 < 0 || (iVar2 == 0)))) goto LAB_3ab8_1615;
          goto LAB_3ab8_15ec;
        }
        if ((iVar6 < 1) && ((iVar6 < 0 || (iVar2 == 0)))) goto LAB_3ab8_1615;
LAB_3ab8_15e6:
        *param_6 = 1;
      }
      *param_3 = local_266;
      *param_4 = local_26e;
      *param_5 = local_276;
    }
LAB_3ab8_1615:
    local_276 = local_276 + 1;
  } while( true );
}



/* 3ab8:16c8  FUN_3ab8_16c8  757 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_16c8(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar7;
  undefined1 in_ZF;
  undefined1 uVar8;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 *in_stack_0000002a;
  undefined2 *in_stack_0000002c;
  undefined2 auStack_36 [10];
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 *local_a;
  undefined1 **ppuStack_8;
  
  FUN_21f2_0ebc();
  *in_stack_0000002a = in_stack_0000001a;
  in_stack_0000002a[1] = in_stack_0000001c;
  *in_stack_0000002c = in_stack_0000001e;
  in_stack_0000002c[1] = in_stack_00000020;
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc27a;
  func_0x00029834();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc287;
  FUN_28b3_0c98();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc28f;
  func_0x00029b55();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc29c;
  FUN_28b3_1036();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc2a9;
  FUN_28b3_0c98();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc2b1;
  func_0x00029b55();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc2be;
  FUN_28b3_1036();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc2c3;
  FUN_28b3_1163();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc2cb;
  func_0x0002996b();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc2d0;
  func_0x00029d78();
  ppuStack_8 = (undefined1 **)0x22b2;
  local_a = (undefined1 *)0xc2d5;
  FUN_28b3_1181();
  if ((bool)in_CF || (bool)in_ZF) {
LAB_3ab8_19b5:
    uVar3 = 0;
  }
  else {
    local_20 = in_stack_0000001a;
    local_1e = in_stack_0000001c;
    local_1c = in_stack_0000001e;
    local_1a = in_stack_00000020;
    ppuStack_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 *)0xc2fa;
    func_0x000297e6();
    ppuStack_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 *)0xc303;
    func_0x00029b6d();
    ppuStack_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 *)0xc30b;
    func_0x00029bb5();
    ppuStack_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 *)0xc313;
    func_0x00029983();
    ppuStack_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 *)0xc31b;
    func_0x000297e6();
    ppuStack_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 *)0xc324;
    func_0x00029b6d();
    ppuStack_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 *)0xc32c;
    func_0x00029bb5();
    ppuStack_8 = (undefined1 **)0x22b2;
    local_a = (undefined1 *)0xc334;
    func_0x00029983();
    ppuStack_8 = &local_a;
    local_a = &stack0xfffa;
    puVar6 = &local_20;
    puVar5 = &local_20;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    puVar6 = auStack_36;
    puVar5 = (undefined2 *)&stack0x0004;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    iVar4 = FUN_1def_1921();
    uVar7 = 0;
    uVar8 = iVar4 == 0;
    if (!(bool)uVar8) {
      ppuStack_8 = (undefined1 **)0x1bb4;
      local_a = (undefined1 *)0xc36c;
      func_0x000297e6();
      ppuStack_8 = (undefined1 **)0x22b2;
      local_a = (undefined1 *)0xc375;
      func_0x000297e6();
      ppuStack_8 = (undefined1 **)0x22b2;
      local_a = (undefined1 *)0xc37a;
      FUN_28b3_1181();
      if (!(bool)uVar7) {
        ppuStack_8 = (undefined1 **)0x22b2;
        local_a = (undefined1 *)0xc384;
        func_0x000297e6();
        ppuStack_8 = (undefined1 **)0x22b2;
        local_a = (undefined1 *)0xc38d;
        func_0x000297e6();
        ppuStack_8 = (undefined1 **)0x22b2;
        local_a = (undefined1 *)0xc392;
        FUN_28b3_1181();
        if ((bool)uVar7 || (bool)uVar8) {
          ppuStack_8 = (undefined1 **)0x22b2;
          local_a = (undefined1 *)0xc39c;
          func_0x000297e6();
          ppuStack_8 = (undefined1 **)0x22b2;
          local_a = (undefined1 *)0xc3a5;
          func_0x000297e6();
          ppuStack_8 = (undefined1 **)0x22b2;
          local_a = (undefined1 *)0xc3aa;
          FUN_28b3_1181();
          if (!(bool)uVar7) {
            ppuStack_8 = (undefined1 **)0x22b2;
            local_a = (undefined1 *)0xc3b4;
            func_0x000297e6();
            ppuStack_8 = (undefined1 **)0x22b2;
            local_a = (undefined1 *)0xc3bd;
            func_0x000297e6();
            ppuStack_8 = (undefined1 **)0x22b2;
            local_a = (undefined1 *)0xc3c2;
            FUN_28b3_1181();
            if ((bool)uVar7 || (bool)uVar8) {
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc3d2;
              func_0x000297e6();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc3d7;
              func_0x00029ae7();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc3df;
              func_0x0002996b();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc3e7;
              func_0x000297e6();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc3ec;
              func_0x00029ae7();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc3f1;
              FUN_28b3_1181();
              if ((bool)uVar7) {
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc3fb;
                func_0x000297e6();
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc403;
                FUN_28b3_100d();
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc408;
                func_0x00029ae7();
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc410;
                func_0x00029b85();
              }
              else {
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc41a;
                func_0x000297e6();
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc422;
                FUN_28b3_100d();
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc427;
                func_0x00029ae7();
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc42f;
                func_0x000297e6();
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc434;
                func_0x00029ae7();
                ppuStack_8 = (undefined1 **)0x22b2;
                local_a = (undefined1 *)0xc439;
                FUN_28b3_1172();
              }
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc441;
              func_0x00029983();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc44e;
              FUN_28b3_0c98();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc456;
              func_0x00029b55();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc463;
              FUN_28b3_0c98();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc46b;
              func_0x0002996b();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc470;
              func_0x00029c9d();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc47d;
              FUN_28b3_0c98();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc485;
              func_0x0002996b();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc48d;
              func_0x00029b55();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc49a;
              FUN_28b3_0c98();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4a2;
              func_0x0002996b();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4a7;
              func_0x00029c9d();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4ac;
              FUN_28b3_117c();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4b4;
              func_0x0002996b();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4bc;
              func_0x00029983();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4c4;
              func_0x000297e6();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4cc;
              func_0x00029b6d();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4d4;
              func_0x000297e6();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4dc;
              func_0x00029b6d();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4e1;
              FUN_28b3_1163();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4e9;
              func_0x00029bb5();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4f1;
              func_0x00029983();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc4fe;
              FUN_28b3_0c98();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc506;
              func_0x00029b6d();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc513;
              FUN_28b3_0c98();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc51b;
              func_0x00029b6d();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc520;
              FUN_28b3_117c();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc52d;
              FUN_28b3_107e();
              ppuStack_8 = (undefined1 **)0x22b2;
              local_a = (undefined1 *)0xc535;
              func_0x00029983();
              goto LAB_3ab8_19b5;
            }
          }
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* 3ab8:19bd  FUN_3ab8_19bd  3180 bytes, 2 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far FUN_3ab8_19bd(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *******pppppppuVar3;
  undefined2 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 *******pppppppuVar10;
  undefined2 *******unaff_SI;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *******unaff_DI;
  undefined2 *******pppppppuVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 *******pppppppuVar16;
  undefined2 *******unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  int in_stack_00000016;
  undefined2 *******in_stack_00000018;
  undefined2 ******in_stack_0000001a;
  undefined2 *******in_stack_00000024;
  undefined2 *******in_stack_00000026;
  undefined2 *******local_d6;
  undefined2 *******local_d4;
  undefined2 *******local_ca;
  int local_c8;
  undefined2 *******local_c6;
  undefined2 *******local_c4;
  undefined2 *******local_c2;
  undefined2 ******local_bc;
  undefined2 *******local_ba;
  undefined2 *******local_b4;
  undefined2 *******local_b2;
  undefined2 *******local_b0;
  int local_ae;
  undefined2 *******local_a8;
  undefined2 *******local_a6;
  undefined2 ******local_a4;
  undefined2 local_a2;
  int local_9e;
  undefined2 *******local_9c;
  undefined2 *******local_9a;
  int local_98;
  int local_94;
  undefined2 *******local_92;
  undefined2 ******local_90;
  undefined2 local_8e;
  uint local_8c;
  int local_86;
  undefined2 *******local_80;
  undefined2 *******local_78;
  undefined4 local_76;
  undefined2 *******local_72;
  uint local_70;
  int local_6e;
  undefined2 *******local_6c;
  undefined2 *******local_6a;
  undefined2 *******local_68;
  undefined2 *******local_66;
  undefined2 *******local_64;
  undefined2 *******local_62;
  undefined2 *******local_60;
  undefined2 *******local_5e;
  int local_56;
  uint local_50;
  int local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 *******local_36;
  undefined2 *******in_stack_0000ffcc;
  undefined2 *******local_32;
  undefined2 uStack_30;
  int iStack_2e;
  undefined2 *******local_2c;
  undefined2 *******local_2a;
  int local_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 *******pppppppuVar20;
  undefined2 *******local_20;
  undefined2 *******local_1e;
  undefined2 *******local_1c;
  undefined2 *******local_1a;
  undefined2 *******local_18;
  undefined2 *******pppppppuStack_16;
  undefined2 *******pppppppuStack_14;
  undefined2 *******local_12;
  undefined2 *******local_10;
  undefined2 *******local_e;
  undefined2 *******local_c;
  undefined2 *******local_a;
  undefined2 *******local_8;
  
  FUN_21f2_0ebc();
  local_8 = (undefined2 *******)0x22b2;
  local_a = (undefined2 *******)0xc552;
  func_0x00029834();
  local_8 = (undefined2 *******)0x22b2;
  local_a = (undefined2 *******)0xc557;
  FUN_28b3_1c08();
  local_8 = (undefined2 *******)0x22b2;
  local_a = (undefined2 *******)0xc55c;
  FUN_28b3_1177();
  local_8 = (undefined2 *******)0x22b2;
  local_a = (undefined2 *******)0xc564;
  func_0x00029983();
  local_c8 = 0x25a;
  if (in_stack_00000026 != (undefined2 *******)0x0 || in_stack_00000024 != (undefined2 *******)0x0)
  {
    uVar17 = *(byte *)0x11d6 < 4;
    uVar18 = *(byte *)0x11d6 == 4;
    if ((bool)uVar17) {
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc58a;
      func_0x00029834();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc592;
      func_0x00029834();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc597;
      FUN_28b3_1181();
      if ((bool)uVar18) {
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xc5a2;
        func_0x00029834();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xc5aa;
        func_0x00029834();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xc5af;
        FUN_28b3_1181();
        if ((bool)uVar18) goto LAB_3ab8_1b31;
      }
      uVar18 = 0;
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc5bc;
      func_0x00029834();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc5c5;
      func_0x00029c2c();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc5ce;
      func_0x0002996b();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc5d6;
      FUN_28b3_0ee9();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc5e3;
      FUN_28b3_0c98();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc5ec;
      func_0x00029b6d();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc5f4;
      func_0x00029834();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc5fd;
      func_0x00029c2c();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc606;
      func_0x0002996b();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc613;
      FUN_28b3_1036();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc618;
      FUN_28b3_1163();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc621;
      func_0x0002996b();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc629;
      func_0x00029983();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc632;
      func_0x00029834();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc63b;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc640;
      func_0x00029d78();
      local_8 = (undefined2 *******)0x22b2;
      pppppppuVar16 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc645;
      FUN_28b3_1181();
      if ((bool)uVar17 || (bool)uVar18) {
        if (param_1 < 0) {
          for (local_8c = 1; (int)local_8c <= *(int *)*(undefined4 *)0xb37a; local_8c = local_8c + 1
              ) {
            *(undefined2 *)(local_8c * 2 + (int)*(undefined4 *)0xb48c) = 11000;
          }
        }
        local_76 = CONCAT22(local_76._2_2_,(undefined2)local_76);
        if (param_1 == 0) {
          local_8c = 1;
          uVar14 = *(undefined2 *)0xb48e;
          do {
            piVar1 = (int *)(local_8c * 2 + *(int *)0xb48c);
            *piVar1 = *piVar1 + 1;
            local_8c = local_8c + 1;
            local_76 = CONCAT22(local_76._2_2_,(undefined2)local_76);
          } while ((int)local_8c < 0x7919);
        }
LAB_3ab8_1b1c:
        local_a = (undefined2 *******)0xc6a1;
        local_8 = pppppppuVar16;
        cVar5 = FUN_1000_0632();
        if (cVar5 == '\x1b') {
          uVar14 = 0xffff;
        }
        else {
          uVar14 = 1;
        }
        return uVar14;
      }
    }
  }
LAB_3ab8_1b31:
  for (local_8c = 1; pppppppuVar16 = (undefined2 *******)0x22b2,
      (int)local_8c <= (int)in_stack_00000018; local_8c = local_8c + 1) {
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc74e;
    func_0x000297e6();
    uVar17 = (int)(local_8c << 1) < 0;
    uVar18 = (local_8c & 0x3fff) == 0;
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc761;
    FUN_28b3_0c98();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc76a;
    func_0x0002996b();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc76f;
    FUN_28b3_1181();
    if ((bool)uVar17 || (bool)uVar18) {
      uVar19 = 0;
    }
    else {
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc77d;
      func_0x000297e6();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc782;
      func_0x00029d78();
      local_8 = (undefined2 *******)0x22b2;
      local_a = (undefined2 *******)0xc787;
      uVar19 = FUN_28b3_0f51();
    }
    iVar8 = local_8c * 4;
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc6d9;
    local_76 = uVar19;
    FUN_28b3_0c98();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc6de;
    func_0x00029d78();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc6e6;
    func_0x000298b4();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc6ee;
    func_0x00029c2c();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc6f3;
    FUN_28b3_117c();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc6f8;
    uVar19 = FUN_28b3_0f51();
    uVar14 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
    iVar9 = (int)*(undefined4 *)0xc130;
    *(undefined2 *)(iVar9 + iVar8) = (int)uVar19;
    *(undefined2 *)(iVar9 + iVar8 + 2) = (int)((ulong)uVar19 >> 0x10);
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc70e;
    FUN_28b3_0c98();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc713;
    func_0x00029d78();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc71b;
    func_0x000298b4();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc723;
    func_0x00029c2c();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc728;
    FUN_28b3_117c();
    local_8 = (undefined2 *******)0x22b2;
    local_a = (undefined2 *******)0xc72d;
    uVar19 = FUN_28b3_0f51();
    uVar14 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
    iVar9 = (int)*(undefined4 *)0xc13a;
    *(undefined2 *)(iVar9 + iVar8) = (int)uVar19;
    *(undefined2 *)(iVar9 + iVar8 + 2) = (int)((ulong)uVar19 >> 0x10);
  }
  local_8 = in_stack_00000018;
  local_a = (undefined2 *******)in_stack_0000001a;
  local_c = (undefined2 *******)0x22b2;
  local_e = (undefined2 *******)0xc798;
  FUN_3ab8_13c6();
  local_28 = *(int *)(*(int *)((int)*(undefined4 *)0xb77c + 2) * 2 + (int)*(undefined4 *)0xc278);
  local_ca = (undefined2 *******)((int)in_stack_00000018 + 1);
  uVar15 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
  iVar8 = (int)*(undefined4 *)0xc130;
  uVar14 = *(undefined2 *)(local_28 * 4 + iVar8 + 2);
  iVar9 = (int)local_ca * 4;
  *(undefined2 *)(iVar9 + iVar8) = *(undefined2 *)(local_28 * 4 + iVar8);
  *(undefined2 *)(iVar9 + iVar8 + 2) = uVar14;
  uVar14 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
  iVar11 = (int)*(undefined4 *)0xc13a;
  uVar6 = *(uint *)(local_28 * 4 + iVar11);
  iVar8 = *(int *)(local_28 * 4 + iVar11 + 2);
  *(int *)(iVar9 + iVar11) = uVar6 - 100;
  *(int *)(iVar9 + iVar11 + 2) = iVar8 - (uint)(uVar6 < 100);
  *(int *)((int)*(undefined4 *)0xc08a + in_stack_00000016 * 2 + 2) = (int)local_ca;
  local_bc = (undefined2 ******)0x0;
  local_9e = 0;
  local_94 = 1;
LAB_3ab8_22a5:
  if (local_94 <= (int)in_stack_0000001a) {
    local_28 = *(int *)(local_94 * 2 + (int)*(undefined4 *)0xb77c);
    uVar14 = (undefined2)((ulong)*(undefined4 *)0xc278 >> 0x10);
    iVar8 = (int)*(undefined4 *)0xc278;
    if (0 < *(int *)(local_28 * 2 + iVar8)) {
      *(undefined2 *)((int)*(undefined4 *)0xc096 + in_stack_00000016 * 2 + 2) =
           *(undefined2 *)(local_28 * 2 + iVar8);
      local_ba = (undefined2 *******)*(int *)(local_28 * 2 + (int)*(undefined4 *)0xc278);
      local_32 = (undefined2 *******)0x1;
      local_8 = (undefined2 *******)in_stack_00000016;
      local_a = in_stack_00000018;
      local_c = &local_78;
      local_e = &local_92;
      local_10 = &local_a;
      local_12 = &local_d6;
      local_b0 = local_ca;
      pppppppuStack_16 = local_ca;
      local_1a = (undefined2 *******)0xce9d;
      local_18 = pppppppuVar16;
      pppppppuStack_14 = local_ba;
      FUN_3ab8_14e9();
      if (local_b0 != local_a) {
        iVar8 = (int)local_ba * 4;
        uVar15 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
        iVar11 = (int)*(undefined4 *)0xc130;
        uVar14 = *(undefined2 *)(iVar8 + iVar11 + 2);
        iVar9 = (int)local_8 * 4;
        *(undefined2 *)(iVar9 + iVar11) = *(undefined2 *)(iVar8 + iVar11);
        *(undefined2 *)(iVar9 + iVar11 + 2) = uVar14;
        uVar15 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
        iVar11 = (int)*(undefined4 *)0xc13a;
        uVar14 = *(undefined2 *)(iVar8 + iVar11 + 2);
        *(undefined2 *)(iVar9 + iVar11) = *(undefined2 *)(iVar8 + iVar11);
        *(undefined2 *)(iVar9 + iVar11 + 2) = uVar14;
        local_a = (undefined2 *******)0xcef4;
        local_8 = pppppppuVar16;
        FUN_28b3_0d71();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcefc;
        func_0x00029b6d();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf05;
        func_0x0002996b();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf0e;
        func_0x00029983();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf19;
        FUN_28b3_0d71();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf21;
        func_0x00029b6d();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf2a;
        func_0x00029983();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf33;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf3b;
        func_0x00029983();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf44;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf4c;
        func_0x0002996b();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xcf54;
        FUN_28b3_0ee9();
        pppppppuVar10 = (undefined2 *******)0x22b2;
        if (in_stack_00000026 != (undefined2 *******)0x0 ||
            in_stack_00000024 != (undefined2 *******)0x0) {
          uVar14 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
          iVar8 = (int)*(undefined4 *)0xc392;
          local_4c = *(undefined2 *)(iVar8 + 0x970);
          local_4a = *(undefined2 *)(iVar8 + 0x972);
          uVar14 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
          iVar9 = (int)*(undefined4 *)0xc398;
          local_48 = *(undefined2 *)(iVar9 + 0x970);
          local_46 = *(undefined2 *)(iVar9 + 0x972);
          local_44 = *(undefined2 *)(iVar8 + 0x974);
          local_42 = *(undefined2 *)(iVar8 + 0x976);
          uVar14 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
          iVar8 = (int)*(undefined4 *)0xc398;
          local_40 = *(undefined2 *)(iVar8 + 0x974);
          local_3e = *(undefined2 *)(iVar8 + 0x976);
          local_8 = &local_a4;
          local_a = &local_36;
          local_c = (undefined2 *******)&stack0xffde;
          local_e = (undefined2 *******)0x22b2;
          local_10 = (undefined2 *******)0xcfc4;
          func_0x00029834();
          local_12 = (undefined2 *******)0x22b2;
          pppppppuStack_14 = (undefined2 *******)0xcfce;
          func_0x00029983();
          local_12 = (undefined2 *******)0x22b2;
          pppppppuStack_14 = (undefined2 *******)0xcfd6;
          func_0x00029834();
          pppppppuStack_16 = (undefined2 *******)0x22b2;
          local_18 = (undefined2 *******)0xcfe0;
          func_0x00029983();
          pppppppuStack_16 = (undefined2 *******)0x22b2;
          local_18 = (undefined2 *******)0xcfe8;
          func_0x000297e6();
          local_1a = (undefined2 *******)0x22b2;
          local_1c = (undefined2 *******)0xcff2;
          func_0x00029983();
          local_1a = local_b2;
          local_1c = local_b4;
          pppppppuVar16 = &local_32;
          puVar12 = &local_4c;
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar4 = pppppppuVar16;
            pppppppuVar16 = pppppppuVar16 + 1;
            puVar2 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar4 = *puVar2;
          }
          in_stack_0000ffcc = (undefined2 *******)0x22b2;
          local_36 = (undefined2 *******)0xd00d;
          FUN_3ab8_16c8();
          pppppppuVar10 = (undefined2 *******)0x22b2;
        }
LAB_3ab8_2490:
        local_18 = local_a;
        local_1c = local_32;
        local_20 = local_b0;
        local_1e = local_ba;
        if (399 < local_9e) {
          return 0xfffe;
        }
        local_9e = local_9e + 1;
        iVar8 = (int)local_8 * 4;
        uVar15 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
        iVar11 = (int)*(undefined4 *)0xc130;
        uVar14 = *(undefined2 *)(iVar8 + iVar11 + 2);
        iVar9 = local_c8 * 4;
        *(undefined2 *)(iVar9 + iVar11) = *(undefined2 *)(iVar8 + iVar11);
        *(undefined2 *)(iVar9 + iVar11 + 2) = uVar14;
        uVar15 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
        iVar11 = (int)*(undefined4 *)0xc13a;
        uVar14 = *(undefined2 *)(iVar8 + iVar11 + 2);
        *(undefined2 *)(iVar9 + iVar11) = *(undefined2 *)(iVar8 + iVar11);
        *(undefined2 *)(iVar9 + iVar11 + 2) = uVar14;
        local_9c = local_b4;
        local_9a = local_b2;
        local_a8 = local_c4;
        local_a6 = local_c2;
        local_c6 = local_b0;
        local_d4 = local_ba;
        local_72 = local_32;
        local_b0 = local_d6;
        local_ba = local_a;
        local_80 = local_92;
        local_32 = local_78;
        local_8 = (undefined2 *******)(in_stack_00000016 + 1);
        local_a = local_ca;
        local_c = &local_78;
        local_e = &local_92;
        local_10 = &local_a;
        local_12 = &local_d6;
        pppppppuStack_14 = local_78;
        pppppppuStack_16 = local_92;
        local_1a = local_d6;
        uStack_24 = 0xd0df;
        FUN_3ab8_2629();
        local_a = (undefined2 *******)0xd0ed;
        local_8 = pppppppuVar10;
        FUN_28b3_0d71();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xd0f5;
        func_0x00029b6d();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xd0fe;
        func_0x00029983();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xd109;
        FUN_28b3_0d71();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xd111;
        func_0x00029b6d();
        local_8 = (undefined2 *******)0x22b2;
        pppppppuVar16 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xd11a;
        func_0x00029983();
        if (in_stack_00000026 == (undefined2 *******)0x0 &&
            in_stack_00000024 == (undefined2 *******)0x0) {
          local_86 = 0;
          local_12 = local_9c;
          local_10 = local_9a;
          local_2c = local_a8;
          local_2a = local_a6;
          local_20 = local_b2;
          local_36 = local_c4;
          pppppppuVar10 = local_c2;
          pppppppuVar13 = local_b4;
          goto LAB_3ab8_1e2a;
        }
        local_86 = 0;
        local_2c = local_36;
        local_90 = local_a4;
        local_8e = local_a2;
        local_8 = &local_a4;
        local_a = &local_1a;
        local_c = &local_e;
        local_e = (undefined2 *******)0x22b2;
        local_10 = (undefined2 *******)0xc860;
        local_2a = in_stack_0000ffcc;
        local_12 = pppppppuVar10;
        func_0x00029834();
        local_12 = (undefined2 *******)0x22b2;
        pppppppuStack_14 = (undefined2 *******)0xc86a;
        func_0x00029983();
        local_12 = (undefined2 *******)0x22b2;
        pppppppuStack_14 = (undefined2 *******)0xc872;
        func_0x00029834();
        pppppppuStack_16 = (undefined2 *******)0x22b2;
        local_18 = (undefined2 *******)0xc87c;
        func_0x00029983();
        pppppppuStack_16 = local_c2;
        local_18 = local_c4;
        local_1a = local_b2;
        local_1c = local_b4;
        pppppppuVar16 = &local_32;
        puVar12 = &local_4c;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar4 = pppppppuVar16;
          pppppppuVar16 = pppppppuVar16 + 1;
          puVar2 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar4 = *puVar2;
        }
        local_36 = (undefined2 *******)0xc89f;
        FUN_3ab8_16c8();
        pppppppuVar13 = local_e;
        pppppppuVar10 = local_18;
        uVar17 = (undefined1 *)0xffd3 < &local_32;
        uVar18 = &stack0x0000 == (undefined1 *)0x6;
        local_20 = local_c;
        local_36 = local_1a;
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xc8c3;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xc8cc;
        func_0x000297e6();
        local_8 = (undefined2 *******)0x22b2;
        local_a = (undefined2 *******)0xc8d1;
        FUN_28b3_1181();
        if ((bool)uVar17) {
          local_8 = (undefined2 *******)0x22b2;
          local_a = (undefined2 *******)0xc8dc;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          local_a = (undefined2 *******)0xc8e5;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          local_a = (undefined2 *******)0xc8ea;
          FUN_28b3_1181();
          if ((bool)uVar17 || (bool)uVar18) goto LAB_3ab8_1d6c;
        }
        else {
LAB_3ab8_1d6c:
          local_8 = (undefined2 *******)0x22b2;
          local_a = (undefined2 *******)0xc8f5;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          local_a = (undefined2 *******)0xc8fe;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          pppppppuVar16 = (undefined2 *******)0x22b2;
          local_a = (undefined2 *******)0xc903;
          FUN_28b3_1181();
          if ((bool)uVar17 || (bool)uVar18) goto LAB_3ab8_1e2a;
          local_8 = (undefined2 *******)0x22b2;
          local_a = (undefined2 *******)0xc911;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          local_a = (undefined2 *******)0xc91a;
          func_0x000297e6();
          local_8 = (undefined2 *******)0x22b2;
          pppppppuVar16 = (undefined2 *******)0x22b2;
          local_a = (undefined2 *******)0xc91f;
          FUN_28b3_1181();
          if (!(bool)uVar17) goto LAB_3ab8_1e2a;
        }
        local_6c = local_9c;
        local_6a = local_9a;
        local_68 = local_a8;
        local_66 = local_a6;
        local_64 = local_b4;
        local_62 = local_b2;
        local_60 = local_c4;
        local_5e = local_c2;
        local_8 = &local_1e;
        local_a = (undefined2 *******)&stack0xfffa;
        pppppppuVar13 = &local_20;
        pppppppuVar16 = &local_6c;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar2 = pppppppuVar13;
          pppppppuVar13 = pppppppuVar13 + 1;
          pppppppuVar3 = pppppppuVar16;
          pppppppuVar16 = pppppppuVar16 + 1;
          *puVar2 = *pppppppuVar3;
        }
        pppppppuVar16 = &local_36;
        puVar12 = &local_4c;
        for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar4 = pppppppuVar16;
          pppppppuVar16 = pppppppuVar16 + 1;
          puVar2 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar4 = *puVar2;
        }
        uStack_38 = 0x22b2;
        pppppppuVar16 = (undefined2 *******)0x1bb4;
        uStack_3a = 0xc985;
        iVar8 = FUN_1def_1921();
        pppppppuVar13 = unaff_SS;
        if (iVar8 != 0) {
          local_86 = 1;
          local_36 = local_1e;
          pppppppuVar10 = local_1c;
          pppppppuVar13 = unaff_SI;
          local_20 = unaff_DI;
        }
LAB_3ab8_1e2a:
        do {
          pppppppuVar20 = pppppppuVar13;
          in_stack_0000ffcc = pppppppuVar10;
          if (param_1 == 0) {
            local_8 = &local_36;
            local_a = (undefined2 *******)&stack0xffde;
            local_c = &local_2c;
            local_e = &local_12;
            local_12 = (undefined2 *******)0xcab9;
            local_10 = pppppppuVar16;
            FUN_3ab8_367b();
          }
          else {
            if (0 < param_1) {
              local_a = (undefined2 *******)0xc9c1;
              local_8 = pppppppuVar16;
              func_0x00029834();
              uVar17 = (int)local_b0 << 1 < 0;
              uVar18 = ((uint)local_b0 & 0x3fff) == 0;
              local_8 = (undefined2 *******)0x22b2;
              local_a = (undefined2 *******)0xc9d4;
              FUN_28b3_0c98();
              local_8 = (undefined2 *******)0x22b2;
              local_a = (undefined2 *******)0xc9d9;
              func_0x00029d78();
              local_8 = (undefined2 *******)0x22b2;
              local_a = (undefined2 *******)0xc9de;
              FUN_28b3_1181();
              if ((bool)uVar17 || (bool)uVar18) {
                local_8 = (undefined2 *******)0x22b2;
                local_a = (undefined2 *******)0xc9e9;
                func_0x00029834();
                uVar17 = (int)local_ba << 1 < 0;
                uVar18 = ((uint)local_ba & 0x3fff) == 0;
                local_8 = (undefined2 *******)0x22b2;
                local_a = (undefined2 *******)0xc9fc;
                FUN_28b3_0c98();
                local_8 = (undefined2 *******)0x22b2;
                local_a = (undefined2 *******)0xca01;
                func_0x00029d78();
                local_8 = (undefined2 *******)0x22b2;
                pppppppuVar16 = (undefined2 *******)0x22b2;
                local_a = (undefined2 *******)0xca06;
                FUN_28b3_1181();
                if ((bool)uVar17 || (bool)uVar18) {
                  local_bc = (undefined2 ******)0x0;
                  goto LAB_3ab8_1f09;
                }
              }
              local_8 = in_stack_00000026;
              local_a = in_stack_00000024;
              local_c = (undefined2 *******)0x22b2;
              local_e = (undefined2 *******)0xca16;
              func_0x000297e6();
              local_c = (undefined2 *******)0x22b2;
              local_e = (undefined2 *******)0xca1b;
              func_0x00029d78();
              pppppppuStack_14 = (undefined2 *******)0x22b2;
              pppppppuStack_16 = (undefined2 *******)0xca25;
              func_0x000299d1();
              pppppppuStack_14 = (undefined2 *******)0x22b2;
              pppppppuStack_16 = (undefined2 *******)0xca2d;
              func_0x000297e6();
              pppppppuStack_14 = (undefined2 *******)0x22b2;
              pppppppuStack_16 = (undefined2 *******)0xca32;
              func_0x00029d78();
              local_1c = (undefined2 *******)0x22b2;
              local_1e = (undefined2 *******)0xca3c;
              func_0x000299d1();
              local_1c = (undefined2 *******)0x22b2;
              local_1e = (undefined2 *******)0xca44;
              func_0x000297e6();
              local_1c = (undefined2 *******)0x22b2;
              local_1e = (undefined2 *******)0xca49;
              func_0x00029d78();
              uStack_24 = 0x22b2;
              uStack_26 = 0xca53;
              func_0x000299d1();
              uStack_24 = 0x22b2;
              uStack_26 = 0xca5b;
              func_0x000297e6();
              uStack_24 = 0x22b2;
              uStack_26 = 0xca60;
              func_0x00029d78();
              local_2c = (undefined2 *******)0x22b2;
              pppppppuVar16 = (undefined2 *******)0x22b2;
              iStack_2e = 0xca6a;
              func_0x000299d1();
              local_2c = &local_bc;
              iStack_2e = param_1;
              uStack_30 = 0x22b2;
              local_32 = (undefined2 *******)0xca76;
              iVar8 = FUN_3ab8_325f();
              if (iVar8 == 0) {
                local_bc = (undefined2 ******)0x0;
              }
            }
LAB_3ab8_1f09:
            if (param_1 < 0) {
              local_8 = &local_36;
              local_a = (undefined2 *******)&stack0xffde;
              local_c = &local_2c;
              local_e = &local_12;
              local_12 = (undefined2 *******)0xcaa3;
              local_10 = pppppppuVar16;
              FUN_3ab8_3954();
            }
          }
          if ((in_stack_00000026 == (undefined2 *******)0x0 &&
               in_stack_00000024 == (undefined2 *******)0x0) || (local_86 == 0)) goto LAB_3ab8_1f7e;
          local_86 = 0;
          local_10 = local_20;
          local_2c = local_36;
          local_20 = local_c;
          local_36 = local_1a;
          pppppppuVar10 = local_18;
          local_2a = in_stack_0000ffcc;
          pppppppuVar13 = local_e;
          local_12 = pppppppuVar20;
        } while( true );
      }
    }
    goto LAB_3ab8_22a1;
  }
  goto LAB_3ab8_1b1c;
LAB_3ab8_1f7e:
  if (local_94 < (int)in_stack_0000001a) {
    local_28 = *(int *)((int)local_b0 * 2 + (int)*(undefined4 *)0xbece);
    *(undefined2 *)(local_28 * 2 + (int)*(undefined4 *)0xc278) = 0;
    local_ae = local_94;
LAB_3ab8_1ff8:
    local_ae = local_ae + 1;
    if (local_ae <= (int)in_stack_0000001a) {
      local_28 = *(int *)(local_ae * 2 + (int)*(undefined4 *)0xb77c);
      uVar14 = (undefined2)((ulong)*(undefined4 *)0xc278 >> 0x10);
      iVar8 = (int)*(undefined4 *)0xc278;
      if (*(int *)(local_28 * 2 + iVar8) != 0) {
        uVar6 = *(uint *)(local_28 * 2 + iVar8);
        uVar7 = (int)uVar6 >> 0xf;
        local_56 = (uVar6 ^ uVar7) - uVar7;
        uVar14 = (undefined2)((ulong)*(undefined4 *)0xbef6 >> 0x10);
        iVar8 = (int)*(undefined4 *)0xbef6;
        if (*(int *)(local_56 * 4 + iVar8 + 2) == 0 && *(int *)(local_56 * 4 + iVar8) == 0) {
          iVar8 = (int)local_ba * 4;
          uVar14 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
          iVar11 = (int)*(undefined4 *)0xc130;
          iVar9 = (int)local_b0 * 4;
          local_50 = *(uint *)(iVar8 + iVar11) - *(uint *)(iVar9 + iVar11);
          local_4e = (*(int *)(iVar8 + iVar11 + 2) - *(int *)(iVar9 + iVar11 + 2)) -
                     (uint)(*(uint *)(iVar8 + iVar11) < *(uint *)(iVar9 + iVar11));
          uVar14 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
          iVar11 = (int)*(undefined4 *)0xc13a;
          local_70 = *(uint *)(iVar8 + iVar11) - *(uint *)(iVar9 + iVar11);
          local_6e = (*(int *)(iVar8 + iVar11 + 2) - *(int *)(iVar9 + iVar11 + 2)) -
                     (uint)(*(uint *)(iVar8 + iVar11) < *(uint *)(iVar9 + iVar11));
          if ((local_4e != 0 || local_50 != 0) || (local_6e != 0 || local_70 != 0)) {
            uVar6 = local_50;
            iVar8 = local_4e;
            if (local_4e < 0) {
              uVar6 = -local_50;
              iVar8 = -(local_4e + (uint)(local_50 != 0));
            }
            uVar7 = local_70;
            iVar9 = local_6e;
            if (local_6e < 0) {
              uVar7 = -local_70;
              iVar9 = -(local_6e + (uint)(local_70 != 0));
            }
            if ((iVar8 < iVar9) || ((iVar8 <= iVar9 && (uVar6 <= uVar7)))) {
              if ((local_6e < 0) || ((local_6e < 1 && (local_70 == 0)))) goto LAB_3ab8_1fbd;
              uVar6 = *(uint *)(local_56 * 4 + iVar11);
              iVar8 = *(int *)(local_56 * 4 + iVar11 + 2);
              iVar9 = *(int *)((int)local_b0 * 4 + iVar11 + 2);
              if ((iVar8 < iVar9) ||
                 ((pppppppuVar10 = local_ba, iVar8 <= iVar9 &&
                  (uVar6 < *(uint *)((int)local_b0 * 4 + iVar11))))) goto LAB_3ab8_1ff8;
LAB_3ab8_1fdd:
              iVar9 = *(int *)((int)pppppppuVar10 * 4 + iVar11 + 2);
              if ((iVar9 <= iVar8) &&
                 ((iVar9 < iVar8 || (*(uint *)((int)pppppppuVar10 * 4 + iVar11) < uVar6))))
              goto LAB_3ab8_1ff8;
            }
            else {
              if ((local_4e < 0) || ((local_4e < 1 && (local_50 == 0)))) {
                uVar14 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
                iVar11 = (int)*(undefined4 *)0xc130;
LAB_3ab8_1fbd:
                uVar6 = *(uint *)(local_56 * 4 + iVar11);
                iVar8 = *(int *)(local_56 * 4 + iVar11 + 2);
                iVar9 = *(int *)((int)local_ba * 4 + iVar11 + 2);
                if ((iVar9 <= iVar8) &&
                   ((pppppppuVar10 = local_b0, iVar9 < iVar8 ||
                    (*(uint *)((int)local_ba * 4 + iVar11) <= uVar6)))) goto LAB_3ab8_1fdd;
                goto LAB_3ab8_1ff8;
              }
              uVar14 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
              iVar11 = (int)*(undefined4 *)0xc130;
              uVar6 = *(uint *)(local_56 * 4 + iVar11);
              iVar8 = *(int *)(local_56 * 4 + iVar11 + 2);
              iVar9 = *(int *)((int)local_b0 * 4 + iVar11 + 2);
              if ((iVar8 < iVar9) ||
                 ((iVar8 <= iVar9 && (uVar6 < *(uint *)((int)local_b0 * 4 + iVar11)))))
              goto LAB_3ab8_1ff8;
              iVar9 = *(int *)((int)local_ba * 4 + iVar11 + 2);
              if ((iVar9 <= iVar8) &&
                 ((iVar9 < iVar8 || (*(uint *)((int)local_ba * 4 + iVar11) < uVar6))))
              goto LAB_3ab8_1ff8;
            }
            *(undefined2 *)(local_28 * 2 + (int)*(undefined4 *)0xc278) = 0;
          }
          goto LAB_3ab8_1ff8;
        }
        uVar14 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
        iVar11 = (int)*(undefined4 *)0xc13a;
        uVar6 = *(uint *)(local_56 * 4 + iVar11);
        iVar8 = *(int *)(local_56 * 4 + iVar11 + 2);
        iVar9 = *(int *)(local_c8 * 4 + iVar11 + 2);
        if ((iVar8 <= iVar9) && ((iVar8 < iVar9 || (uVar6 <= *(uint *)(local_c8 * 4 + iVar11))))) {
          iVar9 = *(int *)((int)local_8 * 4 + iVar11 + 2);
          if ((iVar8 <= iVar9) &&
             ((iVar8 < iVar9 || (uVar6 <= *(uint *)((int)local_8 * 4 + iVar11)))))
          goto LAB_3ab8_1ff8;
        }
        uVar14 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
        iVar11 = (int)*(undefined4 *)0xc13a;
        uVar6 = *(uint *)(local_56 * 4 + iVar11);
        iVar8 = *(int *)(local_56 * 4 + iVar11 + 2);
        iVar9 = *(int *)(local_c8 * 4 + iVar11 + 2);
        if ((iVar9 <= iVar8) && ((iVar9 < iVar8 || (*(uint *)(local_c8 * 4 + iVar11) < uVar6)))) {
          iVar9 = *(int *)((int)local_8 * 4 + iVar11 + 2);
          if ((iVar9 <= iVar8) &&
             ((iVar9 < iVar8 || (*(uint *)((int)local_8 * 4 + iVar11) < uVar6))))
          goto LAB_3ab8_1ff8;
        }
        uVar14 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
        iVar11 = (int)*(undefined4 *)0xc13a;
        iVar8 = *(int *)(local_c8 * 4 + iVar11 + 2);
        iVar9 = *(int *)((int)local_8 * 4 + iVar11 + 2);
        if ((iVar9 < iVar8) ||
           ((iVar9 <= iVar8 &&
            (*(uint *)((int)local_8 * 4 + iVar11) <= *(uint *)(local_c8 * 4 + iVar11))))) {
          uVar14 = (undefined2)((ulong)*(undefined4 *)0xbef6 >> 0x10);
          iVar9 = (int)*(undefined4 *)0xbef6;
          iVar8 = *(int *)(local_56 * 4 + iVar9 + 2);
          if ((iVar8 < 0) || ((iVar8 < 1 && (*(int *)(local_56 * 4 + iVar9) == 0))))
          goto LAB_3ab8_1ff8;
        }
        else {
          uVar14 = (undefined2)((ulong)*(undefined4 *)0xbef6 >> 0x10);
          iVar9 = (int)*(undefined4 *)0xbef6;
          iVar8 = *(int *)(local_56 * 4 + iVar9 + 2);
          if ((0 < iVar8) || ((-1 < iVar8 && (*(int *)(local_56 * 4 + iVar9) != 0))))
          goto LAB_3ab8_1ff8;
        }
        piVar1 = (int *)(local_28 * 2 + (int)*(undefined4 *)0xc278);
        *piVar1 = -*piVar1;
      }
      goto LAB_3ab8_1ff8;
    }
  }
  pppppppuVar10 = pppppppuVar16;
  if ((int)local_ca <= (int)local_a) goto LAB_3ab8_2295;
  goto LAB_3ab8_2490;
LAB_3ab8_2295:
  iVar8 = local_94;
  if (local_94 < (int)in_stack_0000001a) {
    while (local_98 = iVar8 + 1, local_98 <= (int)in_stack_0000001a) {
      local_28 = *(int *)(local_98 * 2 + (int)*(undefined4 *)0xb77c);
      uVar14 = (undefined2)((ulong)*(undefined4 *)0xc278 >> 0x10);
      iVar9 = (int)*(undefined4 *)0xc278;
      iVar8 = local_98;
      if (*(int *)(local_28 * 2 + iVar9) < 1) {
        *(undefined2 *)(local_28 * 2 + iVar9) = 0;
      }
    }
  }
LAB_3ab8_22a1:
  local_94 = local_94 + 1;
  goto LAB_3ab8_22a5;
}



/* 3ab8:2629  FUN_3ab8_2629  2306 bytes, 1 callers */

undefined2 __cdecl16far
FUN_3ab8_2629(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5,
             int param_6,int param_7,int *param_8,int *param_9,int *param_10,int *param_11,
             int param_12,int param_13)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_DX;
  uint extraout_DX_00;
  uint extraout_DX_01;
  uint extraout_DX_02;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_DS;
  bool bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  int local_46;
  int local_40;
  int local_3e;
  int local_3c;
  int local_3a;
  int local_38;
  int local_36;
  uint local_34;
  
  FUN_21f2_0ebc();
  *param_8 = param_5;
  *param_9 = param_4;
  *param_10 = param_6;
  *param_11 = -1;
  if (param_7 < 0) {
    for (local_46 = 1; local_46 <= param_13; local_46 = local_46 + 1) {
      *(undefined1 *)((int)*(undefined4 *)0xbc7a + local_46) = 0;
    }
  }
  iVar7 = param_5 * 4;
  uVar12 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
  iVar10 = (int)*(undefined4 *)0xc130;
  iVar8 = param_4 * 4;
  uVar13 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
  iVar11 = (int)*(undefined4 *)0xc13a;
  uVar1 = *(uint *)(iVar8 + iVar11);
  iVar9 = *(int *)(iVar8 + iVar11 + 2);
  uVar2 = *(uint *)(iVar7 + iVar11) - uVar1;
  iVar11 = (*(int *)(iVar7 + iVar11 + 2) - iVar9) - (uint)(*(uint *)(iVar7 + iVar11) < uVar1);
  lVar17 = func_0x00027932(0x22b2,*(uint *)(iVar7 + iVar10) - *(uint *)(iVar8 + iVar10),
                           (*(int *)(iVar7 + iVar10 + 2) - *(int *)(iVar8 + iVar10 + 2)) -
                           (uint)(*(uint *)(iVar7 + iVar10) < *(uint *)(iVar8 + iVar10)),uVar1);
  uVar12 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
  iVar10 = (int)*(undefined4 *)0xc130;
  iVar7 = *(int *)(iVar10 + iVar8 + 2);
  uVar1 = *(uint *)(iVar10 + iVar8);
  lVar18 = func_0x00027932(0x22b2);
  local_34 = (uint)((ulong)(lVar18 - lVar17) >> 0x10);
  for (local_40 = 1; local_40 <= param_12; local_40 = local_40 + 1) {
    iVar8 = local_40 * 4;
    uVar12 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
    iVar10 = (int)*(undefined4 *)0xc130;
    lVar19 = func_0x00027932(0x22b2,*(undefined2 *)(iVar8 + iVar10),
                             *(undefined2 *)(iVar8 + iVar10 + 2),uVar2,iVar11);
    uVar12 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
    iVar10 = (int)*(undefined4 *)0xc13a;
    lVar20 = func_0x00027932(0x22b2,*(undefined2 *)(iVar10 + iVar8),
                             *(undefined2 *)(iVar10 + iVar8 + 2),uVar1,iVar7);
    lVar19 = (lVar18 - lVar17) + (lVar20 - lVar19);
    local_34 = (uint)((ulong)lVar19 >> 0x10);
    uVar12 = (undefined2)((ulong)*(undefined4 *)0xbef6 >> 0x10);
    iVar10 = (int)*(undefined4 *)0xbef6;
    *(undefined2 *)(iVar10 + iVar8) = (int)lVar19;
    *(uint *)(iVar10 + iVar8 + 2) = local_34;
  }
  local_46 = 1;
  do {
    if (param_13 < local_46) {
      *(undefined1 *)((int)*(undefined4 *)0xbc7a + *param_10) = 1;
      func_0x000298b4(0x22b2);
      func_0x00029c2c(0x22b2);
      FUN_28b3_0d71(0x22b2);
      FUN_28b3_117c(0x22b2);
      uVar21 = FUN_28b3_0f51(0x22b2);
      iVar9 = iVar9 * 4;
      uVar12 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
      iVar7 = (int)*(undefined4 *)0xc130;
      *(undefined2 *)(iVar9 + iVar7) = (int)uVar21;
      *(undefined2 *)(iVar9 + iVar7 + 2) = (int)((ulong)uVar21 >> 0x10);
      func_0x000298b4(0x22b2);
      func_0x00029c2c(0x22b2);
      FUN_28b3_0d71(0x22b2);
      FUN_28b3_117c(0x22b2);
      uVar21 = FUN_28b3_0f51(0x22b2);
      uVar12 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
      iVar7 = (int)*(undefined4 *)0xc13a;
      *(undefined2 *)(iVar7 + iVar9) = (int)uVar21;
      *(undefined2 *)(iVar7 + iVar9 + 2) = (int)((ulong)uVar21 >> 0x10);
      return 1;
    }
    local_38 = *(int *)(local_46 * 2 + (int)*(undefined4 *)0xc08a);
    iVar8 = *(int *)(local_46 * 2 + (int)*(undefined4 *)0xc096);
    uVar12 = (undefined2)((ulong)*(undefined4 *)0xbef6 >> 0x10);
    iVar10 = (int)*(undefined4 *)0xbef6;
    local_3e = iVar8;
    if (*(int *)(local_38 * 4 + iVar10 + 2) < 0) {
      if (-1 < *(int *)(iVar8 * 4 + iVar10 + 2)) {
        iVar6 = *(int *)(iVar8 * 4 + iVar10 + 2);
        if ((iVar6 < 0) || ((iVar6 < 1 && (*(int *)(iVar8 * 4 + iVar10) == 0)))) goto LAB_3ab8_278e;
LAB_3ab8_285a:
        iVar10 = FUN_3ab8_0046(local_38,iVar8,param_4);
        if ((int)local_34 < 0) {
          iVar10 = FUN_3ab8_0046(local_38,iVar8,param_5);
          if (-1 < (int)local_34) {
            if (((int)local_34 < 0) || (((int)local_34 < 1 && (iVar10 == 0)))) goto LAB_3ab8_2903;
            goto LAB_3ab8_28b0;
          }
        }
        else {
          if ((-1 < (int)local_34) && ((0 < (int)local_34 || (iVar10 != 0)))) {
            iVar10 = FUN_3ab8_0046(local_38,iVar8,param_5);
            if ((-1 < (int)local_34) && ((0 < (int)local_34 || (iVar10 != 0)))) goto LAB_3ab8_27fa;
            if ((int)local_34 < 0) goto LAB_3ab8_28b0;
          }
LAB_3ab8_2903:
          uVar3 = FUN_3ab8_0046(local_38,iVar8,param_4);
          local_34 = local_34 | uVar3;
          if (local_34 != 0) {
LAB_3ab8_28b0:
            if (*(char *)((int)*(undefined4 *)0xbc7a + local_46) == '\0') {
              uVar12 = (undefined2)((ulong)*(undefined4 *)0xbef6 >> 0x10);
              iVar6 = (int)*(undefined4 *)0xbef6;
              iVar10 = *(int *)(local_38 * 4 + iVar6 + 2);
              if ((-1 < iVar10) && ((0 < iVar10 || (*(int *)(local_38 * 4 + iVar6) != 0)))) {
                local_3e = local_38;
                local_38 = iVar8;
              }
              goto LAB_3ab8_28ec;
            }
          }
        }
      }
    }
    else {
      iVar6 = *(int *)(local_38 * 4 + iVar10 + 2);
      if ((-1 < iVar6) && ((0 < iVar6 || (*(int *)(local_38 * 4 + iVar10) != 0)))) {
        iVar6 = *(int *)(iVar8 * 4 + iVar10 + 2);
        if ((-1 < iVar6) && ((0 < iVar6 || (*(int *)(iVar8 * 4 + iVar10) != 0))))
        goto LAB_3ab8_27fa;
        if (*(int *)(iVar8 * 4 + iVar10 + 2) < 0) goto LAB_3ab8_285a;
      }
LAB_3ab8_278e:
      iVar10 = FUN_3ab8_0046(local_38,iVar8,param_4);
      if ((int)local_34 < 0) {
        iVar10 = FUN_3ab8_0046(local_38,iVar8,param_5);
        if (-1 < (int)local_34) {
          if (((int)local_34 < 0) || (((int)local_34 < 1 && (iVar10 == 0)))) goto LAB_3ab8_299c;
LAB_3ab8_2958:
          if (*(char *)((int)*(undefined4 *)0xbc7a + local_46) == '\0') {
            uVar12 = (undefined2)((ulong)*(undefined4 *)0xbef6 >> 0x10);
            iVar10 = (int)*(undefined4 *)0xbef6;
            if (*(int *)(iVar8 * 4 + iVar10 + 2) == 0 && *(int *)(iVar8 * 4 + iVar10) == 0) {
              local_3e = local_38;
              local_38 = iVar8;
            }
            if (-1 < *(int *)(local_3e * 4 + iVar10 + 2)) goto LAB_3ab8_28ec;
          }
        }
      }
      else {
        if ((-1 < (int)local_34) && ((0 < (int)local_34 || (iVar10 != 0)))) {
          iVar10 = FUN_3ab8_0046(local_38,iVar8,param_5);
          if ((-1 < (int)local_34) && ((0 < (int)local_34 || (iVar10 != 0)))) goto LAB_3ab8_27fa;
          if ((int)local_34 < 0) goto LAB_3ab8_2958;
        }
LAB_3ab8_299c:
        uVar12 = (undefined2)((ulong)*(undefined4 *)0xbef6 >> 0x10);
        iVar10 = (int)*(undefined4 *)0xbef6;
        if ((*(int *)(local_38 * 4 + iVar10 + 2) == 0 && *(int *)(local_38 * 4 + iVar10) == 0) &&
           (*(int *)(iVar8 * 4 + iVar10 + 2) == 0 && *(int *)(iVar8 * 4 + iVar10) == 0)) {
          if (param_6 != local_46) {
            if (local_46 != param_13) {
              *(undefined1 *)((int)*(undefined4 *)0xbc7a + local_46) = 1;
            }
            if (*param_11 < 0) {
              uVar3 = uVar1;
              iVar10 = iVar7;
              if (iVar7 < 0) {
                uVar3 = -uVar1;
                iVar10 = -(iVar7 + (uint)(uVar1 != 0));
              }
              uVar4 = uVar2;
              iVar6 = iVar11;
              if (iVar11 < 0) {
                uVar4 = -uVar2;
                iVar6 = -(iVar11 + (uint)(uVar2 != 0));
              }
              if ((iVar10 < iVar6) || ((iVar10 <= iVar6 && (uVar3 <= uVar4)))) {
                uVar12 = (undefined2)((ulong)*(undefined4 *)0xc13a >> 0x10);
                iVar6 = (int)*(undefined4 *)0xc13a;
                uVar3 = *(uint *)(local_38 * 4 + iVar6);
                iVar10 = param_5 * 4;
                local_36 = uVar3 - *(uint *)(iVar10 + iVar6);
                local_34 = (*(int *)(local_38 * 4 + iVar6 + 2) - *(int *)(iVar10 + iVar6 + 2)) -
                           (uint)(uVar3 < *(uint *)(iVar10 + iVar6));
                uVar3 = *(uint *)(iVar8 * 4 + iVar6);
                local_3c = uVar3 - *(uint *)(iVar10 + iVar6);
                local_3a = (*(int *)(iVar8 * 4 + iVar6 + 2) - *(int *)(iVar10 + iVar6 + 2)) -
                           (uint)(uVar3 < *(uint *)(iVar10 + iVar6));
                iVar8 = iVar11;
              }
              else {
                uVar12 = (undefined2)((ulong)*(undefined4 *)0xc130 >> 0x10);
                iVar6 = (int)*(undefined4 *)0xc130;
                uVar3 = *(uint *)(local_38 * 4 + iVar6);
                iVar10 = param_5 * 4;
                local_36 = uVar3 - *(uint *)(iVar10 + iVar6);
                local_34 = (*(int *)(local_38 * 4 + iVar6 + 2) - *(int *)(iVar10 + iVar6 + 2)) -
                           (uint)(uVar3 < *(uint *)(iVar10 + iVar6));
                uVar3 = *(uint *)(iVar8 * 4 + iVar6);
                local_3c = uVar3 - *(uint *)(iVar10 + iVar6);
                local_3a = (*(int *)(iVar8 * 4 + iVar6 + 2) - *(int *)(iVar10 + iVar6 + 2)) -
                           (uint)(uVar3 < *(uint *)(iVar10 + iVar6));
                iVar8 = iVar7;
              }
              if (iVar8 < 0) {
                bVar14 = local_36 != 0;
                local_36 = -local_36;
                local_34 = -(local_34 + bVar14);
                bVar14 = local_3c != 0;
                local_3c = -local_3c;
                local_3a = -(local_3a + (uint)bVar14);
              }
              if ((((0 < (int)local_34) ||
                   (((-1 < (int)local_34 && (local_36 != 0)) || (0 < local_3a)))) ||
                  ((-1 < local_3a && (local_3c != 0)))) &&
                 (((int)local_34 < 0 ||
                  ((((int)local_34 < 1 && (local_36 == 0)) ||
                   ((local_3a < 0 || ((local_3a < 1 && (local_3c == 0)))))))))) {
                if ((-1 < (int)local_34) && ((0 < (int)local_34 || (local_36 != 0)))) {
                  local_3e = local_38;
                }
                *param_11 = 0;
                local_38 = param_5;
LAB_3ab8_2e33:
                *param_8 = local_38;
                *param_9 = local_3e;
                *param_10 = local_46;
              }
            }
          }
        }
        else if (*(char *)((int)*(undefined4 *)0xbc7a + local_46) == '\0') {
          uVar3 = FUN_3ab8_0046(local_38,iVar8,param_4);
          local_34 = local_34 | uVar3;
          if (local_34 != 0) {
            uVar12 = (undefined2)((ulong)*(undefined4 *)0xbef6 >> 0x10);
            iVar10 = (int)*(undefined4 *)0xbef6;
            if (*(int *)(iVar8 * 4 + iVar10 + 2) == 0 && *(int *)(iVar8 * 4 + iVar10) == 0) {
              local_3e = local_38;
              local_38 = iVar8;
            }
            iVar8 = *(int *)(local_3e * 4 + iVar10 + 2);
            if ((iVar8 < 0) || ((iVar8 < 1 && (*(int *)(local_3e * 4 + iVar10) == 0)))) {
              if (*param_11 < 0) {
                iVar8 = FUN_3ab8_0046(*param_8,*param_9,local_3e);
                if ((0 < (int)local_34) || ((-1 < (int)local_34 && (iVar8 != 0))))
                goto LAB_3ab8_2e33;
              }
            }
            else {
LAB_3ab8_28ec:
              if (0 < param_7) {
                iVar8 = FUN_3ab8_0046(param_1,param_2,local_3e);
                if ((-1 < (int)local_34) && ((0 < (int)local_34 || (iVar8 != 0)))) {
                  iVar8 = FUN_3ab8_0046(local_38,local_3e,param_1);
                  if ((0 < (int)local_34) ||
                     (((-1 < (int)local_34 && (iVar8 != 0)) ||
                      ((iVar8 = FUN_3ab8_0046(local_38,local_3e,param_2), -1 < (int)local_34 &&
                       ((0 < (int)local_34 || (iVar8 != 0)))))))) goto LAB_3ab8_28f5;
                }
                iVar8 = FUN_3ab8_0046(local_38,local_3e,param_1);
                if (((int)local_34 < 0) ||
                   (((((int)local_34 < 1 && (iVar8 == 0)) ||
                     (iVar8 = FUN_3ab8_0046(local_38,local_3e,param_2), (int)local_34 < 0)) ||
                    (((int)local_34 < 1 && (iVar8 == 0)))))) {
                  *(undefined1 *)((int)*(undefined4 *)0xbc7a + local_46) = 1;
                  goto LAB_3ab8_27fa;
                }
              }
LAB_3ab8_28f5:
              if (*param_11 < 1) {
LAB_3ab8_2dc8:
                FUN_28b3_0d71(0x22b2);
                func_0x000299b9(0x22b2);
                func_0x000299d1(0x22b2);
                FUN_28b3_0d71(0x22b2);
                func_0x000299b9(0x22b2);
                func_0x000299d1(0x22b2);
                func_0x00029834(0x22b2);
                func_0x00029bfc(0x22b2);
                FUN_28b3_112c(0x22b2);
                func_0x000299d1(0x22b2);
                *param_11 = 1;
                local_34 = extraout_DX_02;
                goto LAB_3ab8_2e33;
              }
              iVar8 = *param_9;
              uVar4 = FUN_3ab8_0046(local_38,local_3e,*param_8);
              func_0x000298b4(0x22b2);
              func_0x000299d1(0x22b2);
              uVar3 = extraout_DX;
              uVar5 = FUN_3ab8_0046(local_38,local_3e,iVar8);
              func_0x000298b4(0x22b2);
              func_0x000299d1(0x22b2);
              uVar15 = uVar3 - local_34 == (uint)(uVar5 < uVar4);
              if ((int)((uVar3 - local_34) - (uint)(uVar5 < uVar4)) < 0) {
LAB_3ab8_2d9e:
                uVar16 = 0;
                func_0x00029834(0x22b2);
                func_0x00029834(0x22b2);
                func_0x00029bfc(0x22b2);
                FUN_28b3_112c(0x22b2);
                FUN_28b3_1181(0x22b2);
                local_34 = extraout_DX_01;
                if ((bool)uVar16 || (bool)uVar15) goto LAB_3ab8_2dc8;
              }
              else {
                if (uVar5 == uVar4) {
                  uVar15 = uVar3 < local_34;
                  uVar16 = uVar3 == local_34;
                  if (!(bool)uVar16) goto LAB_3ab8_2d5e;
                  func_0x00029834(0x22b2);
                  func_0x00029834(0x22b2);
                }
                else {
LAB_3ab8_2d5e:
                  uVar15 = uVar3 - local_34 == (uint)(uVar5 < uVar4);
                  if (((int)((uVar3 - local_34) - (uint)(uVar5 < uVar4)) < 0) ||
                     (((bool)uVar15 && (uVar15 = true, uVar5 == uVar4)))) goto LAB_3ab8_2d9e;
                  uVar16 = 0;
                  uVar15 = 0;
                  func_0x00029834(0x22b2);
                  func_0x00029834(0x22b2);
                  func_0x00029bfc(0x22b2);
                  FUN_28b3_112c(0x22b2);
                }
                FUN_28b3_1181(0x22b2);
                local_34 = extraout_DX_00;
                if (!(bool)uVar15 && !(bool)uVar16) goto LAB_3ab8_2dc8;
              }
            }
          }
        }
      }
    }
LAB_3ab8_27fa:
    local_46 = local_46 + 1;
  } while( true );
}



/* 3ab8:2f2b  FUN_3ab8_2f2b  820 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_2f2b(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  undefined1 uVar3;
  
  FUN_21f2_0ebc();
  if ((*(char *)0x11d5 != '\0') && (uVar2 = 0, 0 < param_1)) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar2) {
      func_0x000297e6(0x22b2);
    }
    else {
      func_0x000297e6(0x22b2);
    }
    func_0x00029b6d(0x22b2);
    func_0x00029983(0x22b2);
  }
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299b9(0x22b2);
  func_0x00029c9d(0x22b2);
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299b9(0x22b2);
  func_0x00029c9d(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x0002996b(0x22b2);
  func_0x00029983(0x22b2);
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x00029c2c(0x22b2);
  func_0x00029834(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x00029c2c(0x22b2);
  FUN_28b3_1163(0x22b2);
  func_0x0002996b(0x22b2);
  FUN_28b3_0ee9(0x22b2);
  uVar2 = 0;
  uVar3 = param_1 == 0;
  if (param_1 < 0) {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar2 || (bool)uVar3) {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar2 || (bool)uVar3) goto LAB_3ab8_30ac;
    }
LAB_3ab8_30e0:
    uVar1 = 0;
  }
  else {
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar2) {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar2) goto LAB_3ab8_30e0;
    }
    func_0x000297e6(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar2) {
      func_0x000297e6(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar2) goto LAB_3ab8_30ac;
    }
    uVar2 = 0;
    func_0x00029834(0x22b2);
    func_0x000297e6(0x22b2);
    FUN_28b3_100d(0x22b2);
    func_0x00029b9d(0x22b2);
    func_0x0002996b(0x22b2);
    func_0x00029d78(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar2) {
      func_0x00029834(0x22b2);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar2 || (bool)uVar3) {
        func_0x00029834(0x22b2);
        func_0x00029bfc(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029c74(0x22b2);
        func_0x0002996b(0x22b2);
        func_0x00029983(0x22b2);
        func_0x00029834(0x22b2);
        func_0x00029bfc(0x22b2);
        func_0x00029b6d(0x22b2);
        func_0x00029c74(0x22b2);
        func_0x00029983(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar2) {
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
        }
        else {
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          func_0x000299d1(0x22b2);
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
        }
        func_0x000299d1(0x22b2);
        func_0x00029834(0x22b2);
        func_0x00029834(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar3) {
          func_0x00029834(0x22b2);
          func_0x00029834(0x22b2);
          FUN_28b3_1181(0x22b2);
          if ((bool)uVar3) goto LAB_3ab8_30e0;
        }
      }
    }
LAB_3ab8_30ac:
    uVar1 = 1;
  }
  return uVar1;
}



/* 3ab8:325f  FUN_3ab8_325f  1052 bytes, 2 callers */

undefined2 __cdecl16far
FUN_3ab8_325f(int param_1,int *param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,
             undefined2 param_10,undefined2 param_11,undefined2 param_12,undefined2 param_13,
             undefined2 param_14,undefined2 param_15,undefined2 param_16,undefined2 param_17,
             undefined2 param_18,int param_19,int param_20)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar10;
  undefined4 uVar11;
  uint local_24 [2];
  undefined2 uStack_1e;
  int local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 *local_e;
  undefined2 *local_c;
  undefined2 *local_a;
  uint *local_8;
  
  FUN_21f2_0ebc();
  local_1a = 1;
  uVar10 = param_1 == 0;
  if ((bool)uVar10) {
    return 0;
  }
  local_8 = (uint *)0x22b2;
  local_a = (undefined2 *)0xddff;
  func_0x00029834();
  local_8 = (uint *)0x22b2;
  local_a = (undefined2 *)0xde07;
  func_0x00029834();
  local_8 = (uint *)0x22b2;
  local_a = (undefined2 *)0xde0c;
  FUN_28b3_1181();
  if ((bool)uVar10) {
    local_8 = (uint *)0x22b2;
    local_a = (undefined2 *)0xde16;
    func_0x00029834();
    local_8 = (uint *)0x22b2;
    local_a = (undefined2 *)0xde1e;
    func_0x00029834();
    local_8 = (uint *)0x22b2;
    local_a = (undefined2 *)0xde23;
    FUN_28b3_1181();
    if ((bool)uVar10) {
      return 0;
    }
  }
  if (param_20 != 0 || param_19 != 0) {
    if (*(byte *)0x11d6 < 4) {
      local_8 = &param_15;
      local_a = &param_11;
      local_c = &param_7;
      local_e = &param_3;
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xc398;
      local_10 = *(undefined2 *)(iVar6 + 0x976);
      local_12 = *(undefined2 *)(iVar6 + 0x974);
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar7 = (int)*(undefined4 *)0xc392;
      local_14 = *(undefined2 *)(iVar7 + 0x976);
      local_16 = *(undefined2 *)(iVar7 + 0x974);
      local_18 = *(undefined2 *)(iVar6 + 0x972);
      local_1a = *(undefined2 *)(iVar6 + 0x970);
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xc392;
      local_1c = *(undefined2 *)(iVar6 + 0x972);
      uStack_1e = *(undefined2 *)(iVar6 + 0x970);
      local_24[1] = 0x22b2;
      local_24[0] = 0xde90;
      iVar6 = FUN_3ab8_2f2b();
      if (iVar6 == 0) {
        return 0;
      }
    }
    else {
      local_8 = &param_15;
      local_a = &param_11;
      local_c = &param_7;
      local_e = &param_3;
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xc398;
      local_10 = *(undefined2 *)(iVar6 + 0x976);
      local_12 = *(undefined2 *)(iVar6 + 0x974);
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar7 = (int)*(undefined4 *)0xc392;
      local_14 = *(undefined2 *)(iVar7 + 0x976);
      local_16 = *(undefined2 *)(iVar7 + 0x974);
      local_18 = *(undefined2 *)(iVar6 + 0x972);
      local_1a = *(undefined2 *)(iVar6 + 0x970);
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xc392;
      local_1c = *(undefined2 *)(iVar6 + 0x972);
      uStack_1e = *(undefined2 *)(iVar6 + 0x970);
      local_24[1] = 0x22b2;
      local_24[0] = 0xdee9;
      local_1c = FUN_3ab8_2f2b();
    }
    if (*(byte *)0x11d6 < 6) {
      local_8 = &param_15;
      local_a = &param_11;
      local_c = &param_7;
      local_e = &param_3;
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xc398;
      local_10 = *(undefined2 *)(iVar6 + 0x972);
      local_12 = *(undefined2 *)(iVar6 + 0x970);
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar7 = (int)*(undefined4 *)0xc392;
      local_14 = *(undefined2 *)(iVar7 + 0x972);
      local_16 = *(undefined2 *)(iVar7 + 0x970);
      local_18 = *(undefined2 *)(iVar6 + 0x982);
      local_1a = *(undefined2 *)(iVar6 + 0x980);
      uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
      iVar6 = (int)*(undefined4 *)0xc392;
      local_1c = *(undefined2 *)(iVar6 + 0x982);
      uStack_1e = *(undefined2 *)(iVar6 + 0x980);
      local_24[1] = 0x22b2;
      local_24[0] = 0xdf49;
      iVar6 = FUN_3ab8_2f2b();
      if (iVar6 != 0) {
        local_8 = &param_15;
        local_a = &param_11;
        local_c = &param_7;
        local_e = &param_3;
        uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
        iVar6 = (int)*(undefined4 *)0xc398;
        local_10 = *(undefined2 *)(iVar6 + 0x986);
        local_12 = *(undefined2 *)(iVar6 + 0x984);
        uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
        iVar7 = (int)*(undefined4 *)0xc392;
        local_14 = *(undefined2 *)(iVar7 + 0x986);
        local_16 = *(undefined2 *)(iVar7 + 0x984);
        local_18 = *(undefined2 *)(iVar6 + 0x976);
        local_1a = *(undefined2 *)(iVar6 + 0x974);
        uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
        iVar6 = (int)*(undefined4 *)0xc392;
        local_1c = *(undefined2 *)(iVar6 + 0x976);
        uStack_1e = *(undefined2 *)(iVar6 + 0x974);
        local_24[1] = 0x22b2;
        local_24[0] = 0xdfa3;
        iVar6 = FUN_3ab8_2f2b();
        if (iVar6 != 0) goto LAB_3ab8_342d;
      }
      return 0;
    }
  }
LAB_3ab8_342d:
  local_8 = (uint *)*(undefined2 *)0xcb4;
  local_a = (undefined2 *)*(undefined2 *)0xcb2;
  local_c = (undefined2 *)0x0;
  local_e = (undefined2 *)0x3;
  local_10 = 0x22b2;
  local_12 = 0xdfc1;
  func_0x0000f2cb();
  local_8 = (uint *)0xdef;
  local_a = (undefined2 *)0xdfc9;
  func_0x0000a799();
  local_8 = (uint *)param_10;
  local_a = (undefined2 *)param_9;
  local_c = (undefined2 *)param_8;
  local_e = (undefined2 *)param_7;
  local_10 = param_6;
  local_12 = param_5;
  local_14 = param_4;
  local_16 = param_3;
  local_18 = 0;
  local_1a = 0x885;
  local_1c = 0xdfe9;
  FUN_1def_05d1();
  local_8 = (uint *)param_10;
  local_a = (undefined2 *)param_9;
  local_c = (undefined2 *)param_8;
  local_e = (undefined2 *)param_7;
  local_10 = param_6;
  local_12 = param_5;
  local_14 = param_4;
  local_16 = param_3;
  local_18 = 0;
  local_1a = 0x1bb4;
  local_1c = 0xe019;
  func_0x0001e558();
  local_8 = (uint *)param_18;
  local_a = (undefined2 *)param_17;
  local_c = (undefined2 *)param_16;
  local_e = (undefined2 *)param_15;
  local_10 = param_14;
  local_12 = param_13;
  local_14 = param_12;
  local_16 = param_11;
  local_18 = 0;
  local_1a = 0x1bb4;
  local_1c = 0xe049;
  FUN_1def_05d1();
  local_8 = (uint *)param_18;
  local_a = (undefined2 *)param_17;
  local_c = (undefined2 *)param_16;
  local_e = (undefined2 *)param_15;
  local_10 = param_14;
  local_12 = param_13;
  local_14 = param_12;
  local_16 = param_11;
  local_18 = 0;
  local_1a = 0x1bb4;
  local_1c = -0x1f87;
  puVar5 = (undefined2 *)func_0x0001e558();
  local_c = (undefined2 *)*puVar5;
  if (*(char *)0x11d7 != '\0') {
    local_8 = (uint *)0x1bb4;
    local_a = (undefined2 *)0xe094;
    FUN_3ab8_0000();
  }
  bVar2 = *(byte *)0xb310;
  local_8 = &local_18;
  local_a = (undefined2 *)0x0;
  local_c = (undefined2 *)0x1bb4;
  local_e = (undefined2 *)0xe0b2;
  func_0x000185d3();
  local_8 = (uint *)0x0;
  puVar8 = &uStack_1e;
  puVar5 = &local_18;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar4 = puVar8;
    puVar8 = puVar8 + 1;
    puVar3 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar4 = *puVar3;
  }
  uVar9 = 0x11f2;
  local_24[1] = 0xe0cb;
  func_0x00018396();
  if (*(char *)(bVar2 + 0xb4a6) == '\0') {
    *(undefined1 *)(bVar2 + 0xb4a6) = 1;
    local_8 = (uint *)0xffff;
    local_a = (undefined2 *)0x11f2;
    local_c = (undefined2 *)0xe0e7;
    func_0x0000b1d8();
    local_8 = (uint *)0x0;
    local_a = (undefined2 *)0x885;
    uVar9 = 0x885;
    local_c = (undefined2 *)0xe0f0;
    func_0x0000daa6();
  }
  local_8 = (uint *)*(undefined2 *)0x14a;
  local_a = (undefined2 *)*(undefined2 *)0x148;
  local_e = (undefined2 *)0xe0fe;
  local_c = (undefined2 *)uVar9;
  uVar11 = func_0x0000013f();
  pbVar1 = (byte *)((int)uVar11 + 0x14);
  *pbVar1 = *pbVar1 | 0x80;
  if ((param_20 == 0 && param_19 == 0) || (local_1c != 0)) {
    local_8 = (uint *)*(undefined2 *)0x14a;
    local_a = (undefined2 *)*(undefined2 *)0x148;
    local_c = (undefined2 *)0x0;
    local_e = (undefined2 *)0xe11e;
    uVar11 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar11 + 0x15);
    *pbVar1 = *pbVar1 | 0x40;
  }
  else {
    local_8 = (uint *)*(undefined2 *)0x14a;
    local_a = (undefined2 *)*(undefined2 *)0x148;
    local_c = (undefined2 *)0x0;
    local_e = (undefined2 *)0xe13e;
    uVar11 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar11 + 0x15);
    *pbVar1 = *pbVar1 & 0xbf;
  }
  *param_2 = *param_2 + 1;
  local_8 = (uint *)*(undefined2 *)0xcb4;
  local_a = (undefined2 *)(1 - *(int *)0xcb2);
  local_c = (undefined2 *)0x0;
  local_e = (undefined2 *)0x3;
  local_10 = 0;
  local_12 = 0xe166;
  func_0x0000f2cb();
  if ((*param_2 == *(int *)0xbe9e) && (*param_2 >> 0xf == *(int *)0xbea0)) {
    local_24[0] = local_24[0] & 0xff00;
    uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
    iVar6 = (int)*(undefined4 *)0xc392;
    *(undefined2 *)(iVar6 + 0x98c) = local_18;
    *(undefined2 *)(iVar6 + 0x98e) = local_16;
    uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
    iVar6 = (int)*(undefined4 *)0xc398;
    *(undefined2 *)(iVar6 + 0x98c) = local_14;
    *(undefined2 *)(iVar6 + 0x98e) = local_12;
    uVar9 = (undefined2)((ulong)*(undefined4 *)0xc392 >> 0x10);
    iVar6 = (int)*(undefined4 *)0xc392;
    *(undefined2 *)(iVar6 + 0x990) = local_10;
    *(undefined2 *)(iVar6 + 0x992) = local_e;
    uVar9 = (undefined2)((ulong)*(undefined4 *)0xc398 >> 0x10);
    iVar6 = (int)*(undefined4 *)0xc398;
    *(undefined2 *)(iVar6 + 0x990) = local_c;
    *(int *)(iVar6 + 0x992) = (int)local_a;
    local_8 = local_24;
    local_a = (undefined2 *)0xdef;
    local_c = (undefined2 *)0xe1dc;
    func_0x000297e6();
    local_a = (undefined2 *)0x22b2;
    local_c = (undefined2 *)0xe1e1;
    func_0x00029d78();
    local_12 = 0x22b2;
    local_14 = 0xe1eb;
    func_0x000299d1();
    local_12 = 0x22b2;
    local_14 = 0xe1ef;
    FUN_3ab8_3afa();
  }
  return 1;
}



/* 3ab8:367b  FUN_3ab8_367b  729 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_367b(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 in_ZF;
  int local_1e;
  int local_1c;
  int local_1a;
  int local_16;
  undefined1 local_12 [6];
  undefined2 uStack_c;
  int local_a;
  undefined1 *local_8;
  
  FUN_21f2_0ebc();
  local_8 = (undefined1 *)0x22b2;
  local_a = 0xe210;
  func_0x000297e6();
  local_8 = (undefined1 *)0x22b2;
  local_a = 0xe218;
  func_0x000297e6();
  local_8 = (undefined1 *)0x22b2;
  local_a = 0xe21d;
  FUN_28b3_1181();
  if ((bool)in_CF || (bool)in_ZF) {
    local_16 = -1;
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe270;
    func_0x000297e6();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe279;
    FUN_28b3_100d();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe282;
    func_0x00029b85();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe28b;
    func_0x00029bb5();
    local_8 = (undefined1 *)0x22b2;
    local_a = 58000;
    func_0x00029d78();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe295;
    local_1c = FUN_28b3_0f51();
    if (local_1c < 1) {
      local_1c = 1;
    }
  }
  else {
    local_16 = 0;
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe22c;
    func_0x000297e6();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe235;
    FUN_28b3_100d();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe23e;
    func_0x00029b85();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe247;
    func_0x00029bb5();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe24c;
    func_0x00029d78();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe251;
    local_1c = FUN_28b3_0f51();
    if (local_1c < 1) {
      local_1c = 1;
    }
  }
  local_8 = (undefined1 *)0x22b2;
  local_a = 0xe2aa;
  func_0x000297e6();
  local_8 = (undefined1 *)0x22b2;
  local_a = 0xe2b3;
  FUN_28b3_100d();
  local_8 = (undefined1 *)0x22b2;
  local_a = 0xe2bc;
  func_0x00029b85();
  local_8 = (undefined1 *)0x22b2;
  local_a = 0xe2c1;
  func_0x00029d78();
  local_8 = (undefined1 *)0x22b2;
  local_a = 0xe2c6;
  local_a = FUN_28b3_0f51();
  if (*(int *)0xc3b8 < local_a) {
    local_a = *(int *)0xc3b8;
  }
  if (local_a < local_1c) {
    uVar3 = 0;
  }
  else {
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe2ea;
    func_0x000297e6();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe2f2;
    FUN_28b3_100d();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe2fa;
    func_0x000297e6();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe302;
    FUN_28b3_100d();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe307;
    FUN_28b3_1172();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe30f;
    func_0x0002996b();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe318;
    func_0x000297e6();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe320;
    FUN_28b3_100d();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe325;
    func_0x00029c9d();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe32e;
    FUN_28b3_100d();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe336;
    func_0x00029bb5();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe33f;
    func_0x00029b85();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe347;
    func_0x0002996b();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe34f;
    func_0x00029983();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe357;
    func_0x000297e6();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe360;
    func_0x00029b85();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe369;
    func_0x00029b6d();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe371;
    func_0x0002996b();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe379;
    func_0x00029983();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe388;
    FUN_28b3_0d8b();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe390;
    func_0x00029b6d();
    local_8 = (undefined1 *)0x22b2;
    local_a = 0xe398;
    func_0x00029bb5();
    local_8 = (undefined1 *)0x22b2;
    local_a = -0x1c60;
    func_0x00029983();
    for (; local_1c <= local_a; local_1c = local_1c + 1) {
      local_8 = (undefined1 *)0x22b2;
      local_a = 0xe3d0;
      func_0x000297e6();
      local_8 = local_12;
      local_a = 0x22b2;
      uStack_c = 0xe3d9;
      func_0x00029bb5();
      local_8 = (undefined1 *)0x22b2;
      local_a = 0xe3df;
      func_0x0002996b();
      local_8 = (undefined1 *)0x22b2;
      local_a = 0xe3e4;
      func_0x00029d78();
      local_8 = (undefined1 *)0x22b2;
      local_a = -0x1c17;
      local_1e = FUN_28b3_0f51();
      if (local_1e < 0) {
        local_1e = 0;
      }
      if (*(int *)0xc396 < local_1e) {
        local_1e = *(int *)0xc396;
      }
      uVar3 = (undefined2)((ulong)*(undefined4 *)0xb37a >> 0x10);
      iVar5 = (int)*(undefined4 *)0xb37a;
      if (*(int *)(local_1c * 2 + iVar5) < 0) {
        *(int *)(local_1c * 2 + iVar5) = local_1e;
      }
      else {
        iVar4 = local_1c * 2;
        if (*(int *)(iVar4 + iVar5) != local_1e) {
          iVar4 = local_1c * 2;
          if (*(int *)(iVar4 + iVar5) < local_1e) {
            uVar7 = (undefined2)((ulong)*(undefined4 *)0xbef2 >> 0x10);
            iVar6 = (int)*(undefined4 *)0xbef2;
            iVar2 = *(int *)(iVar4 + iVar6);
            local_1a = *(int *)(iVar4 + iVar6) + *(int *)(iVar4 + iVar5);
            while (local_1a = local_1a + 1, local_1a <= local_1e + iVar2) {
              piVar1 = (int *)(local_1a * 2 + (int)*(undefined4 *)0xb48c);
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            local_1a = *(int *)(local_1c * 2 + (int)*(undefined4 *)0xbef2);
            iVar5 = local_1a + *(int *)(local_1c * 2 + (int)*(undefined4 *)0xb37a);
            if (local_16 == 0) {
              for (local_1a = *(int *)(local_1c * 2 + (int)*(undefined4 *)0xbef2) + local_1e;
                  local_1a <= iVar5; local_1a = local_1a + 1) {
                piVar1 = (int *)(local_1a * 2 + (int)*(undefined4 *)0xb48c);
                *piVar1 = *piVar1 + 1;
              }
            }
            else {
              for (local_1a = local_1a + local_1e; local_1a <= iVar5; local_1a = local_1a + 1) {
                piVar1 = (int *)(local_1a * 2 + (int)*(undefined4 *)0xb48c);
                *piVar1 = *piVar1 + -1;
              }
            }
          }
          iVar4 = local_1c << 1;
          uVar3 = (undefined2)((ulong)*(undefined4 *)0xb37a >> 0x10);
          iVar5 = (int)*(undefined4 *)0xb37a;
        }
        *(undefined2 *)(iVar4 + iVar5) = 0xfff7;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* 3ab8:3954  FUN_3ab8_3954  422 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_3954(void)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 in_ZF;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  
  FUN_21f2_0ebc();
  func_0x000297e6(0x22b2);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)in_ZF) {
    uVar2 = 0;
  }
  else {
    iVar5 = 1;
    while (iVar5 <= *(int *)*(undefined4 *)0xb37a) {
      uVar6 = 0x22b2;
      func_0x000297e6();
      uVar3 = (int)(uVar6 << 1) < 0;
      uVar4 = (uVar6 & 0x3fff) == 0;
      FUN_28b3_0c98(0x22b2);
      func_0x0002996b(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar3 || (bool)uVar4) {
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        uVar6 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar3 && !(bool)uVar4) goto LAB_3ab8_39fa;
      }
      else {
LAB_3ab8_39fa:
        uVar6 = 0x22b2;
        func_0x000297e6();
        uVar3 = (int)(uVar6 << 1) < 0;
        uVar4 = (uVar6 & 0x3fff) == 0;
        FUN_28b3_0c98(0x22b2);
        func_0x0002996b(0x22b2);
        uVar6 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar3 && !(bool)uVar4) {
          func_0x000297e6(0x22b2);
          func_0x000297e6(0x22b2);
          uVar6 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar3 && !(bool)uVar4) goto LAB_3ab8_39a8;
        }
        uVar3 = (int)(uVar6 << 1) < 0;
        uVar4 = (uVar6 & 0x3fff) == 0;
        FUN_28b3_0c98(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x00029c9d(0x22b2);
        FUN_28b3_0c98(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_100d(0x22b2);
        func_0x00029c9d(0x22b2);
        FUN_28b3_1163(0x22b2);
        func_0x0002996b(0x22b2);
        func_0x00029983(0x22b2);
        func_0x000297e6(0x22b2);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar3) {
          func_0x000297e6(0x22b2);
          func_0x000297e6(0x22b2);
          uVar6 = 0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar3 || (bool)uVar4) {
            piVar1 = (int *)(uVar6 * 2 + (int)*(undefined4 *)0xb48c);
            *piVar1 = *piVar1 + 1;
          }
        }
        else {
          func_0x000297e6(0x22b2);
          func_0x000297e6(0x22b2);
          uVar6 = 0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar3) {
            piVar1 = (int *)(uVar6 * 2 + (int)*(undefined4 *)0xb48c);
            *piVar1 = *piVar1 + -1;
          }
        }
      }
LAB_3ab8_39a8:
      iVar5 = uVar6 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* 3ab8:3afa  FUN_3ab8_3afa  1005 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_3afa(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_0000000c;
  undefined1 local_5e [4];
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined1 local_54 [50];
  undefined2 uStack_22;
  undefined2 auStack_1e [3];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined1 *puStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  
  FUN_21f2_0ebc();
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0xe68f;
  func_0x0000daa6();
  puStack_8 = (undefined1 *)*(undefined2 *)0xcb4;
  puStack_a = (undefined1 *)(1 - *(int *)0xcb2);
  puStack_c = (undefined1 *)0x0;
  uStack_e = 3;
  uStack_10 = 0x885;
  uStack_12 = 0xe6a8;
  func_0x0000f2cb();
  local_5a = *(undefined2 *)0x112c;
  puStack_8 = (undefined1 *)0xdef;
  puStack_a = (undefined1 *)0xe6b9;
  func_0x00029834();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xe6c1;
  func_0x000299b9();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xe6c9;
  FUN_28b3_0ee9();
  puStack_8 = (undefined1 *)0x0;
  *(undefined2 *)0x112c = 1;
  puStack_a = (undefined1 *)0x1;
  puStack_c = (undefined1 *)0x22b2;
  uStack_e = 0xe6dc;
  func_0x00029834();
  puStack_14 = (undefined1 *)0x22b2;
  uStack_16 = 0xe6e6;
  func_0x000299d1();
  puStack_14 = local_54;
  uStack_16 = 0x22b2;
  uStack_18 = 0xe6ef;
  iVar4 = func_0x0002267f();
  if (iVar4 == 0) {
    *(undefined2 *)0x112c = local_5a;
  }
  else {
    *(undefined2 *)0x112c = local_5a;
    puStack_8 = local_54;
    puStack_a = (undefined1 *)0x1bb4;
    puStack_c = (undefined1 *)0xe710;
    iVar4 = func_0x00024ce4();
    if (iVar4 != 0) {
      puStack_8 = (undefined1 *)0x3;
      puStack_a = (undefined1 *)0x0;
      puStack_c = local_54;
      uStack_e = 0x22b2;
      uStack_10 = 0xe729;
      puVar5 = (undefined2 *)func_0x00018eff();
      local_58 = *puVar5;
      local_56 = puVar5[1];
      puStack_8 = (undefined1 *)0x18b3;
      puStack_a = (undefined1 *)0xe746;
      FUN_28b3_0c98();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe74f;
      func_0x0002996b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe757;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe764;
      FUN_28b3_0c98();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe76d;
      func_0x0002996b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe775;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe782;
      FUN_28b3_0c98();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe78b;
      func_0x0002996b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe793;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7a0;
      FUN_28b3_0c98();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7a9;
      func_0x0002996b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7b1;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7ba;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7c3;
      FUN_28b3_100d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7cc;
      func_0x0002996b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7d4;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7dd;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7e6;
      FUN_28b3_100d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7ef;
      func_0x0002996b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe7f7;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe800;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe809;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe812;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe81b;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe820;
      FUN_28b3_117c();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe825;
      func_0x00029d78();
      uStack_10 = 0x22b2;
      uStack_12 = 0xe82f;
      func_0x000299d1();
      uStack_10 = 0x22b2;
      uStack_12 = 0xe834;
      FUN_28b3_1582();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe83e;
      func_0x00029834();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe846;
      func_0x000299b9();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe84e;
      func_0x00029b9d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe856;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe85e;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe863;
      func_0x00029d78();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe86b;
      func_0x00029c44();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe873;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe87b;
      func_0x00029834();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe883;
      FUN_28b3_100d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe88c;
      func_0x00029c2c();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe895;
      func_0x0002996b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe89d;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8a6;
      func_0x00029834();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8af;
      func_0x00029b85();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8b8;
      func_0x0002996b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8c0;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8c9;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8d1;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8da;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8e2;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8e7;
      FUN_28b3_1163();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8ef;
      func_0x00029bb5();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe8f8;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe901;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe909;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe912;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe91a;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe91f;
      FUN_28b3_117c();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe927;
      func_0x00029bb5();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe930;
      func_0x00029983();
      *(undefined1 *)0xc3b4 = 3;
      *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
      puStack_8 = (undefined1 *)in_stack_0000000c;
      puStack_a = local_54;
      puStack_c = (undefined1 *)0x22b2;
      uStack_e = 0xe947;
      FUN_21f2_2d26();
      puStack_8 = (undefined1 *)0x3;
      puStack_a = (undefined1 *)0x0;
      puStack_c = local_54;
      uStack_e = 0x22b2;
      uStack_10 = 0xe959;
      func_0x00018eff();
      puStack_8 = (undefined1 *)0x18b3;
      puStack_a = (undefined1 *)0xe963;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe96b;
      func_0x0002996b();
      puStack_8 = local_5e;
      puStack_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0xe974;
      func_0x00029bb5();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe97a;
      func_0x0002996b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe982;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe98a;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe992;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe997;
      FUN_28b3_1163();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe99f;
      func_0x00029bb5();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe9a8;
      func_0x00029983();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe9b0;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe9b8;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe9c0;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe9c8;
      func_0x00029b6d();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe9cd;
      FUN_28b3_117c();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe9d5;
      func_0x00029bb5();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xe9de;
      func_0x00029983();
      uVar1 = *(undefined2 *)0xbc78;
      *(int *)0xc3b0 = (int)local_54;
      *(undefined2 *)0xc3b2 = uVar1;
      puStack_8 = (undefined1 *)*(undefined2 *)0xcb4;
      puStack_a = (undefined1 *)*(undefined2 *)0xcb2;
      puStack_c = (undefined1 *)0x0;
      uStack_e = 3;
      uStack_10 = 0x22b2;
      uStack_12 = 0xe9ff;
      func_0x0000f2cb();
      puStack_8 = (undefined1 *)0xdef;
      puStack_a = (undefined1 *)0xea07;
      func_0x0000a799();
      *(undefined2 *)0x11c = 10;
      *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
      puStack_8 = (undefined1 *)0x0;
      puStack_a = (undefined1 *)0x885;
      puStack_c = (undefined1 *)0xea1a;
      func_0x0000daa6();
      puVar6 = auStack_1e;
      puVar5 = (undefined2 *)0xc3a0;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar3 = *puVar2;
      }
      uStack_22 = 0xea2f;
      func_0x0001b198();
      *(undefined2 *)0xbc0 = 1;
      if (*(char *)0x11d7 != '\0') {
        puStack_8 = (undefined1 *)0x18b3;
        puStack_a = (undefined1 *)0xea43;
        FUN_3ab8_0000();
      }
      puStack_8 = (undefined1 *)*(undefined2 *)0xcb4;
      puStack_a = (undefined1 *)(1 - *(int *)0xcb2);
      puStack_c = (undefined1 *)0x0;
      uStack_e = 3;
      uStack_10 = 0x18b3;
      uStack_12 = 0xea5b;
      func_0x0000f2cb();
      return 1;
    }
  }
  return 0;
}



/* 3ab8:3ee7  FUN_3ab8_3ee7  930 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003ec46) */

undefined2 __cdecl16far FUN_3ab8_3ee7(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined2 in_stack_0000000c;
  uint in_stack_0000000e;
  uint in_stack_00000010;
  undefined2 in_stack_00000012;
  undefined2 in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  undefined2 *in_stack_00000024;
  undefined2 in_stack_00000026;
  undefined2 ****in_stack_00000028;
  int in_stack_0000002a;
  int in_stack_0000002c;
  int in_stack_0000002e;
  uint local_36;
  uint uVar10;
  undefined1 local_26 [2];
  undefined2 uStack_24;
  undefined2 local_22;
  undefined2 uStack_20;
  uint local_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  uint local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 *local_e;
  undefined1 *puStack_c;
  undefined2 ****local_a;
  undefined2 **ppuStack_8;
  undefined2 *local_6;
  
  local_6 = (undefined2 *)0xea72;
  FUN_21f2_0ebc();
  uVar6 = *(undefined2 *)0xa964;
  uVar2 = *(undefined2 *)0xa966;
  *(undefined2 *)0x7586 = uVar6;
  *(undefined2 *)0x7588 = uVar2;
  *(undefined2 *)0x7582 = uVar6;
  *(undefined2 *)0x7584 = uVar2;
  local_6 = (undefined2 *)0x1;
  ppuStack_8 = (undefined2 **)0x14;
  local_a = (undefined2 ****)0x22b2;
  puStack_c = (undefined1 *)0xea95;
  FUN_1000_0599();
  local_6 = (undefined2 *)0x7590;
  ppuStack_8 = (undefined2 **)0xdef;
  local_a = (undefined2 ****)0xeaa0;
  func_0x00012276();
  local_6 = (undefined2 *)0x11f2;
  ppuStack_8 = (undefined2 **)0xeaaf;
  func_0x00029834();
  local_6 = (undefined2 *)0x22b2;
  ppuStack_8 = (undefined2 **)0xeab7;
  func_0x00029834();
  local_6 = (undefined2 *)0x22b2;
  ppuStack_8 = (undefined2 **)0xeabc;
  FUN_28b3_1181();
  if ((bool)in_CF) {
    if (in_stack_0000002a == 0) {
      local_14 = 0xc7c0;
      local_1e = 0x3840;
    }
    else {
      local_14 = 0xd5d0;
      local_1e = 0x2a30;
    }
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xeae3;
    func_0x00029834();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xeaeb;
    func_0x00029834();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xeaf0;
    FUN_28b3_1181();
  }
  else {
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xeb01;
    func_0x00029834();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xeb0a;
    func_0x00029bfc();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xeb13;
    func_0x00029c2c();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xeb1c;
    func_0x00029c74();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xeb21;
    iVar3 = FUN_28b3_0f51();
    local_1e = iVar3 + 0xc7c0;
    local_14 = local_1e;
  }
  uVar6 = 0x22b2;
  local_36 = local_14;
  while( true ) {
    uVar7 = local_1e < local_36;
    if ((int)local_1e < (int)local_36) {
      return 1;
    }
    ppuStack_8 = (undefined2 **)0xedcd;
    local_6 = (undefined2 *)uVar6;
    func_0x00029834();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xedd5;
    func_0x00029834();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xedda;
    FUN_28b3_1181();
    if ((bool)uVar7) {
      local_6 = (undefined2 *)0x22b2;
      ppuStack_8 = (undefined2 **)0xede7;
      FUN_28b3_0d8b();
      local_6 = (undefined2 *)0x22b2;
      ppuStack_8 = (undefined2 **)0xedec;
      func_0x00029d78();
      local_6 = (undefined2 *)0x22b2;
      ppuStack_8 = (undefined2 **)0xedf5;
      func_0x00029c2c();
      local_6 = (undefined2 *)0x22b2;
      ppuStack_8 = (undefined2 **)0xedfe;
      func_0x00029c74();
    }
    else {
      local_6 = (undefined2 *)0x22b2;
      ppuStack_8 = (undefined2 **)0xeb3b;
      func_0x00029834();
    }
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xeb44;
    func_0x00029983();
    local_6 = (undefined2 *)0x0;
    ppuStack_8 = (undefined2 **)0x22b2;
    local_a = (undefined2 ****)0xeb5f;
    func_0x0000daa6();
    local_6 = (undefined2 *)*(undefined2 *)0xcb4;
    ppuStack_8 = (undefined2 **)(1 - *(int *)0xcb2);
    local_a = (undefined2 ****)0x0;
    puStack_c = (undefined1 *)0x3;
    local_e = (undefined2 *)0x885;
    uStack_10 = 0xeb78;
    func_0x0000f2cb();
    local_6 = &local_22;
    ppuStack_8 = &local_e;
    local_a = &local_a;
    puStack_c = local_26;
    local_e = &local_12;
    uStack_10 = in_stack_0000001e;
    local_12 = in_stack_0000001c;
    local_14 = in_stack_0000001a;
    uStack_16 = in_stack_00000018;
    local_18 = in_stack_00000016;
    uStack_1a = in_stack_00000014;
    local_1c = in_stack_00000012;
    local_1e = in_stack_00000010;
    uStack_20 = 0xdef;
    local_22 = 0xebab;
    FUN_3ab8_1153();
    local_6 = &local_18;
    ppuStack_8 = (undefined2 **)&local_1c;
    local_a = (undefined2 ****)0xdef;
    puStack_c = (undefined1 *)0xebbe;
    func_0x000297e6();
    local_a = (undefined2 ****)0x22b2;
    puStack_c = (undefined1 *)0xebc3;
    func_0x00029d78();
    local_12 = 0x22b2;
    local_14 = 0xebcd;
    func_0x000299d1();
    local_12 = 0x22b2;
    local_14 = 0xebd5;
    func_0x000297e6();
    local_12 = 0x22b2;
    local_14 = 0xebda;
    func_0x00029d78();
    uStack_1a = 0x22b2;
    local_1c = 0xebe4;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    local_1c = 0xebec;
    func_0x000297e6();
    uStack_1a = 0x22b2;
    local_1c = 0xebf1;
    func_0x00029d78();
    local_22 = 0x22b2;
    uStack_24 = 0xebfb;
    func_0x000299d1();
    local_22 = 0x22b2;
    uStack_24 = 0xec03;
    func_0x000297e6();
    local_22 = 0x22b2;
    uStack_24 = 0xec08;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    FUN_3ab8_12d9(local_36);
    uVar7 = 0;
    uVar8 = 0;
    iVar3 = 2;
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xec5b;
    func_0x000297e6();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xec64;
    func_0x000297e6();
    local_6 = (undefined2 *)0x22b2;
    ppuStack_8 = (undefined2 **)0xec69;
    FUN_28b3_1181();
    if ((bool)uVar7 || (bool)uVar8) {
      *(undefined2 *)0xbe9e = 2;
    }
    else {
      *(undefined2 *)0xbe9e = 3;
    }
    *(undefined2 *)0xbea0 = 0;
    if (in_stack_0000002e != 0 || in_stack_0000002c != 0) {
      *(undefined2 *)0xbe9e = 1;
      *(undefined2 *)0xbea0 = 0;
    }
    local_6 = (undefined2 *)0x0;
    ppuStack_8 = (undefined2 **)0x22b2;
    local_a = (undefined2 ****)0xec9b;
    func_0x0000daa6();
    local_6 = (undefined2 *)*(undefined2 *)0xcb4;
    ppuStack_8 = (undefined2 **)(1 - *(int *)0xcb2);
    local_a = (undefined2 ****)0x0;
    puStack_c = (undefined1 *)0x3;
    local_e = (undefined2 *)0x885;
    uStack_10 = 0xecb4;
    func_0x0000f2cb();
    local_6 = (undefined2 *)in_stack_0000002e;
    ppuStack_8 = (undefined2 **)in_stack_0000002c;
    local_a = in_stack_00000028;
    puStack_c = (undefined1 *)in_stack_00000026;
    local_e = in_stack_00000024;
    uStack_10 = in_stack_00000022;
    local_12 = in_stack_00000020;
    local_14 = in_stack_0000000e;
    uStack_16 = in_stack_0000000c;
    local_18 = 0xdef;
    uStack_1a = 0xecda;
    func_0x000297e6();
    local_18 = 0x22b2;
    uStack_1a = 0xecdf;
    func_0x00029d78();
    uStack_20 = 0x22b2;
    local_22 = 0xece9;
    func_0x000299d1();
    uStack_20 = 0x22b2;
    local_22 = 0xecf1;
    func_0x000297e6();
    uStack_20 = 0x22b2;
    local_22 = 0xecf6;
    func_0x00029d78();
    puVar5 = (undefined2 *)0x22b2;
    func_0x000299d1(0x22b2);
    uVar10 = 0x22b2;
    iVar4 = FUN_3ab8_19bd();
    if ((iVar3 <= *(int *)0x14a) && ((iVar3 < *(int *)0x14a || (uVar10 < *(uint *)0x148)))) {
      local_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined1 *)0xed28;
      ppuStack_8 = (undefined2 **)uVar10;
      local_6 = (undefined2 *)iVar3;
      uVar9 = func_0x0000013f();
      uVar6 = (undefined2)((ulong)uVar9 >> 0x10);
      pbVar1 = (byte *)((int)uVar9 + 0x14);
      *pbVar1 = *pbVar1 | 0x40;
      pbVar1 = (byte *)((int)uVar9 + 0x14);
      *pbVar1 = *pbVar1 & 0x7f;
      local_6 = (undefined2 *)*(undefined2 *)0x14a;
      ppuStack_8 = (undefined2 **)*(undefined2 *)0x148;
      local_a = (undefined2 ****)0x0;
      puVar5 = (undefined2 *)0x0;
      puStack_c = (undefined1 *)0xed4b;
      uVar9 = func_0x0000013f();
      pbVar1 = (byte *)((int)uVar9 + 0x14);
      *pbVar1 = *pbVar1 | 0x40;
    }
    local_6 = (undefined2 *)*(undefined2 *)0xcb4;
    ppuStack_8 = (undefined2 **)*(undefined2 *)0xcb2;
    local_a = (undefined2 ****)0x0;
    puStack_c = (undefined1 *)0x3;
    uStack_10 = 0xed6a;
    local_e = puVar5;
    func_0x0000f2cb();
    local_6 = (undefined2 *)0xdef;
    ppuStack_8 = (undefined2 **)0xed72;
    func_0x0000a799();
    local_6 = (undefined2 *)0x885;
    uVar6 = 0x885;
    ppuStack_8 = (undefined2 **)0xed77;
    func_0x0000abfa();
    if (iVar4 < 0) break;
    local_36 = 0xee2;
  }
  if (iVar4 == -2) {
    local_6 = (undefined2 *)0x1dc;
    ppuStack_8 = (undefined2 **)0x885;
    local_a = (undefined2 ****)0xed8c;
    func_0x00012276();
    *(undefined2 *)0xc22 = 2;
    local_6 = (undefined2 *)0x3;
    ppuStack_8 = (undefined2 **)0x14;
    local_a = (undefined2 ****)0x11f2;
    puStack_c = (undefined1 *)0xeda0;
    FUN_1000_0599();
    local_6 = (undefined2 *)0x396;
    ppuStack_8 = (undefined2 **)0x1de;
    local_a = (undefined2 ****)0xdef;
    puStack_c = (undefined1 *)0xedaf;
    func_0x00012276();
  }
  return 0xffff;
}



/* 3ab8:4289  FUN_3ab8_4289  184 bytes, 2 callers */

void __cdecl16far FUN_3ab8_4289(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = 0x22b2;
  FUN_21f2_0ebc();
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    if (3 < iVar1) {
      iVar1 = 0;
    }
    func_0x000297e6(uVar2,2,iVar1);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    uVar2 = 0x1bb4;
    func_0x0001e18f(0x22b2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}



/* 3ab8:4341  FUN_3ab8_4341  272 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_4341(void)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_6;
  int iVar6;
  
  FUN_21f2_0ebc();
  for (iVar6 = 1; iVar6 <= *(int *)0xc3b8; iVar6 = iVar6 + 1) {
    for (local_6 = 1; local_6 <= *(int *)0xc396; local_6 = local_6 + 1) {
      iVar1 = local_6 + *(int *)(iVar6 * 2 + (int)*(undefined4 *)0xbef2);
      uVar5 = (undefined2)((ulong)*(undefined4 *)0xb48c >> 0x10);
      iVar3 = (int)*(undefined4 *)0xb48c;
      if (*(int *)(iVar1 * 2 + iVar3) == 0) {
        if ((local_6 < *(int *)0xc396) &&
           (puVar2 = (undefined2 *)(iVar1 * 2 + iVar3), puVar2[1] == 1)) {
          *puVar2 = 2;
        }
        if (1 < local_6) {
          puVar2 = (undefined2 *)(iVar1 * 2 + *(int *)0xb48c);
          if (puVar2[-1] == 1) {
            *puVar2 = 2;
          }
        }
        if (1 < iVar6) {
          iVar3 = (iVar1 - *(int *)0xc396) * 2;
          uVar5 = (undefined2)((ulong)*(undefined4 *)0xb48c >> 0x10);
          iVar4 = (int)*(undefined4 *)0xb48c;
          if ((*(int *)(iVar3 + iVar4) == 1) || (*(int *)(iVar3 + iVar4) == 2)) {
            *(undefined2 *)(iVar1 * 2 + iVar4) = 3;
          }
        }
      }
    }
  }
  for (iVar6 = 1; iVar6 <= *(int *)0xc3b8; iVar6 = iVar6 + 1) {
    for (local_6 = 1; local_6 <= *(int *)0xc396; local_6 = local_6 + 1) {
      iVar1 = (local_6 + *(int *)(iVar6 * 2 + (int)*(undefined4 *)0xbef2)) * 2;
      uVar5 = (undefined2)((ulong)*(undefined4 *)0xb48c >> 0x10);
      iVar3 = (int)*(undefined4 *)0xb48c;
      if (*(int *)(iVar1 + iVar3) != 0) {
        *(undefined2 *)(iVar1 + iVar3) = 0x2711;
      }
    }
  }
  return 1;
}



/* 3ab8:4451  FUN_3ab8_4451  2115 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

int __cdecl16far
FUN_3ab8_4451(uint param_1,undefined2 param_2,int ***param_3,int param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,undefined2 param_8,int ***param_9,
             undefined1 *param_10,undefined2 ****param_11,undefined1 *param_12,
             undefined2 ****param_13,undefined2 ****param_14,undefined2 *param_15,
             undefined2 param_16,int param_17,int param_18,int param_19,int ***param_20)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined2 *puVar10;
  int ***pppiVar11;
  int ***pppiVar12;
  undefined2 ****ppppuVar13;
  undefined2 ****ppppuVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  uint *in_stack_0000003a;
  int *in_stack_0000003c;
  uint *in_stack_0000003e;
  int *in_stack_00000040;
  undefined2 local_1d4;
  undefined2 local_1d2;
  int iStack_1d0;
  int iStack_1ce;
  uint local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  int ***pppiStack_1c6;
  int ***pppiStack_1c4;
  int **local_1c2 [10];
  undefined2 local_1ae;
  undefined2 local_1ac;
  undefined2 local_1aa;
  undefined2 local_1a8;
  uint uStack_1a6;
  int iStack_1a4;
  int iStack_1a2;
  int iStack_1a0;
  undefined2 local_19e;
  undefined2 local_19c;
  int local_19a;
  undefined2 local_198 [2];
  undefined1 local_194;
  int ***pppiStack_134;
  int iStack_132;
  undefined2 local_130;
  undefined2 local_12e;
  int local_12c;
  int local_12a;
  undefined2 uStack_128;
  undefined2 uStack_126;
  int local_124;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_116;
  undefined2 uStack_114;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  int local_10a;
  uint uStack_108;
  int iStack_106;
  undefined1 auStack_104 [30];
  undefined1 auStack_e6 [20];
  undefined1 auStack_d2 [20];
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  int ***pppiStack_b8;
  undefined1 auStack_b6 [4];
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 uStack_ae;
  undefined2 uStack_ac;
  int ***pppiStack_aa;
  int iStack_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  int ***pppiStack_a0;
  int local_9e;
  int local_9c;
  undefined2 local_9a;
  undefined2 uStack_98;
  int iStack_96;
  undefined2 auStack_94 [2];
  undefined1 auStack_90 [4];
  int ***pppiStack_8c;
  int iStack_8a;
  uint uStack_88;
  uint uStack_86;
  undefined2 uStack_84;
  int ***pppiStack_82;
  int ***pppiStack_80;
  undefined2 uStack_7e;
  undefined2 ****ppppuStack_7c;
  undefined2 uStack_7a;
  undefined2 ***apppuStack_78 [2];
  undefined1 auStack_74 [4];
  int iStack_70;
  int **local_6e;
  int iStack_6c;
  int iStack_6a;
  int ***pppiStack_68;
  int ***pppiStack_66;
  uint uStack_64;
  uint uStack_62;
  undefined4 uStack_60;
  undefined2 local_5c;
  uint uStack_5a;
  uint uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  int **local_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined1 *puStack_48;
  undefined2 ****ppppuStack_46;
  undefined2 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int aiStack_38 [8];
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  int iStack_20;
  int iStack_1e;
  int ***pppiStack_1c;
  int ***pppiStack_1a;
  int ***pppiStack_18;
  undefined2 uStack_16;
  int ***pppiStack_14;
  undefined2 *puStack_12;
  undefined2 ****ppppuStack_10;
  undefined2 ****local_e;
  undefined2 *puStack_c;
  undefined2 ****ppppuStack_a;
  int ****ppppiStack_8;
  int ****ppppiStack_6;
  
  ppppiStack_6 = (int ****)0xefdc;
  FUN_21f2_0ebc();
  ppppiStack_6 = (int ****)0x75a2;
  ppppiStack_8 = (int ****)&local_e;
  ppppuStack_a = (undefined2 ****)0x22b2;
  puStack_c = (undefined2 *)0xefea;
  func_0x00024c86();
  ppppiStack_6 = (int ****)0x75ab;
  ppppiStack_8 = (int ****)&local_6e;
  ppppuStack_a = (undefined2 ****)0x22b2;
  puStack_c = (undefined2 *)0xeff9;
  func_0x00024c86();
  *(undefined2 *)0x11c = 10;
  ppppiStack_6 = (int ****)0x0;
  ppppiStack_8 = (int ****)0x22b2;
  ppppuStack_a = (undefined2 ****)0xf009;
  func_0x0000daa6();
  ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
  ppppiStack_8 = (int ****)*(undefined2 *)0xcb2;
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined2 *)0x3;
  local_e = (undefined2 ****)0x885;
  ppppuStack_10 = (undefined2 ****)0xf01e;
  func_0x0000f2cb();
  ppppiStack_6 = (int ****)0xdef;
  pppiVar11 = (int ***)0x885;
  ppppiStack_8 = (int ****)0xf026;
  func_0x0000a799();
  if ((param_1 == 1) || (param_1 == 2)) {
    local_a6 = *(undefined2 *)0xa8fc;
    local_a4 = *(undefined2 *)0xa8fe;
    ppppiStack_6 = (int ****)0x885;
    ppppiStack_8 = (int ****)0xf057;
    FUN_28b3_0d8b();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf060;
    func_0x0002996b();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf068;
    FUN_28b3_0ee9();
    uVar15 = *(uint *)0x1b3e < *(uint *)0xa5c;
    uVar16 = *(uint *)0x1b3e == *(uint *)0xa5c;
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf07c;
    FUN_28b3_0d8b();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf085;
    func_0x0002996b();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf08d;
    FUN_28b3_0ee9();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf096;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf09f;
    func_0x00029983();
    local_9e = *(int *)0xa8fc;
    local_9c = *(int *)0xa8fe;
    local_112 = *(undefined2 *)0xa98c;
    local_110 = *(undefined2 *)0xa98e;
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf0c6;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf0cf;
    func_0x00029983();
    local_10e = *(undefined2 *)0xa98c;
    local_10c = *(undefined2 *)0xa98e;
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf0e7;
    func_0x00029834();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf0ef;
    func_0x00029834();
    ppppiStack_6 = (int ****)0x22b2;
    pppiVar11 = (int ***)0x22b2;
    ppppiStack_8 = (int ****)0xf0f4;
    FUN_28b3_1181();
    if (!(bool)uVar15 && !(bool)uVar16) {
      local_112 = *(undefined2 *)0xa8fc;
      local_110 = *(undefined2 *)0xa8fe;
      local_10e = local_112;
      local_10c = local_110;
    }
  }
  local_1cc = 1;
  pppiVar12 = pppiVar11;
  if (param_1 == 3) {
LAB_3ab8_459c:
    while( true ) {
      ppppiStack_6 = (int ****)0x804;
      ppppiStack_8 = (int ****)local_198;
      puStack_c = (undefined2 *)0xf12a;
      ppppuStack_a = (undefined2 ****)pppiVar12;
      func_0x00024c86();
      ppppiStack_6 = (int ****)0x75b0;
      ppppiStack_8 = (int ****)local_198;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0xf13a;
      FUN_21f2_2d26();
      ppppiStack_6 = (int ****)0x2dc;
      ppppiStack_8 = (int ****)local_198;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0xf14a;
      FUN_21f2_2d26();
      ppppiStack_6 = (int ****)&local_10a;
      ppppiStack_8 = (int ****)&local_130;
      ppppuStack_a = (undefined2 ****)&local_11e;
      puStack_c = local_198;
      local_e = (undefined2 ****)0x1;
      ppppuStack_10 = (undefined2 ****)0x22b2;
      pppiVar11 = (int ***)0x1bb4;
      puStack_12 = (undefined2 *)0xf169;
      iVar5 = FUN_1def_0904();
      if ((iVar5 == -1) || (*(int *)0x158 != 0)) break;
      pppiVar12 = pppiVar11;
      if (local_10a != 0) {
        do {
          ppppiStack_8 = (int ****)0xf18d;
          ppppiStack_6 = (int ****)pppiVar11;
          func_0x0001bb4e();
          ppppiStack_6 = (int ****)0x2e6;
          ppppiStack_8 = (int ****)0x1bb4;
          pppiVar12 = (int ***)0x11f2;
          ppppuStack_a = (undefined2 ****)0xf196;
          func_0x00012276();
          local_1aa = *(undefined2 *)0xa998;
          local_1a8 = *(undefined2 *)0xa99a;
          local_1ae = *(undefined2 *)0xa8fc;
          local_1ac = *(undefined2 *)0xa8fe;
LAB_3ab8_4635:
          *(undefined2 *)0xa4a = 1;
          ppppiStack_6 = (int ****)&local_10a;
          ppppiStack_8 = (int ****)&local_1d4;
          ppppuStack_a = (undefined2 ****)&local_1ca;
          puStack_c = &local_5c;
          local_e = (undefined2 ****)&local_52;
          pppiVar11 = (int ***)0x3bf;
          puStack_12 = (undefined2 *)0xf1d7;
          ppppuStack_10 = (undefined2 ****)pppiVar12;
          local_19a = func_0x00006608();
          *(undefined2 *)0xa4a = 0;
          if (*(int *)0x158 != 0) goto LAB_2bb4_4e31;
          if (local_19a == -1) goto LAB_3ab8_4670;
          if (local_19a != 99) {
            if (local_10a == 0) {
              uVar15 = 1;
            }
            else {
              uVar15 = 0;
              if (local_19a == 100) {
                local_1cc = 1;
                local_19a = 100;
                goto LAB_3ab8_46a4;
              }
            }
            ppppiStack_6 = (int ****)0x3bf;
            ppppiStack_8 = (int ****)0xf2a2;
            func_0x000297e6();
            ppppiStack_6 = (int ****)0x22b2;
            ppppiStack_8 = (int ****)0xf2ab;
            func_0x000297e6();
            ppppiStack_6 = (int ****)0x22b2;
            ppppiStack_8 = (int ****)0xf2b0;
            FUN_28b3_1181();
            if ((bool)uVar15) goto code_r0x0003f2b2;
            goto LAB_3ab8_474e;
          }
          local_1aa = *(undefined2 *)0xa99c;
          local_1a8 = *(undefined2 *)0xa99e;
        } while( true );
      }
    }
    goto LAB_2bb4_4e31;
  }
LAB_3ab8_4a70:
  uVar6 = *(undefined2 *)0xa9a2;
  *(undefined2 *)0xb494 = *(undefined2 *)0xa9a0;
  *(undefined2 *)0xb496 = uVar6;
  uVar6 = *(undefined2 *)0xa99a;
  *(undefined2 *)0xb5a6 = *(undefined2 *)0xa998;
  *(undefined2 *)0xb5a8 = uVar6;
  uVar6 = *(undefined2 *)0xa9a2;
  *(undefined2 *)0xb49e = *(undefined2 *)0xa9a0;
  *(undefined2 *)0xb4a0 = uVar6;
  uVar6 = *(undefined2 *)0xa99a;
  *(undefined2 *)0xb5ae = *(undefined2 *)0xa998;
  *(undefined2 *)0xb5b0 = uVar6;
  for (local_124 = 0; ppppiStack_6 = (int ****)pppiVar11, local_124 < 4; local_124 = local_124 + 1)
  {
    ppppiStack_8 = (int ****)0xf667;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf66c;
    func_0x00029d78();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf675;
    func_0x000299b9();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf67f;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf688;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf68d;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf696;
    func_0x000299b9();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xf6a0;
    func_0x000299d1();
    uStack_16 = 1;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xf6a9;
    puVar7 = (undefined2 *)FUN_1def_05d1();
    local_b2 = *puVar7;
    local_b0 = puVar7[1];
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xf6c4;
    func_0x00029834();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf6ce;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf6d7;
    func_0x00029834();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xf6e1;
    func_0x000299d1();
    uStack_16 = 1;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xf6ea;
    puVar7 = (undefined2 *)func_0x0001e558();
    uVar15 = (undefined1 *)0xffed < &uStack_16;
    uVar16 = &stack0x0000 == (undefined1 *)0x4;
    local_122 = *puVar7;
    local_120 = puVar7[1];
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xf705;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf70e;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf713;
    FUN_28b3_1181();
    if ((bool)uVar15) {
      *(undefined2 *)0xb494 = local_b2;
      *(undefined2 *)0xb496 = local_b0;
    }
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf72d;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf736;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf73b;
    FUN_28b3_1181();
    if (!(bool)uVar15 && !(bool)uVar16) {
      *(undefined2 *)0xb5a6 = local_b2;
      *(undefined2 *)0xb5a8 = local_b0;
    }
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf755;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf75e;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf763;
    FUN_28b3_1181();
    if ((bool)uVar15) {
      *(undefined2 *)0xb49e = local_122;
      *(undefined2 *)0xb4a0 = local_120;
    }
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf77d;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf786;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    pppiVar11 = (int ***)0x22b2;
    ppppiStack_8 = (int ****)0xf78b;
    FUN_28b3_1181();
    if (!(bool)uVar15 && !(bool)uVar16) {
      *(undefined2 *)0xb5ae = local_122;
      *(undefined2 *)0xb5b0 = local_120;
    }
  }
  uVar15 = param_1 == 0;
  if ((param_1 == 1) || (uVar15 = param_1 < 2, param_1 == 2)) {
    uVar16 = 1;
    ppppiStack_8 = (int ****)0xf7b7;
    func_0x00029834();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf7bf;
    func_0x00029834();
    ppppiStack_6 = (int ****)0x22b2;
    pppiVar11 = (int ***)0x22b2;
    ppppiStack_8 = (int ****)0xf7c4;
    FUN_28b3_1181();
    if ((bool)uVar15 || (bool)uVar16) {
      uVar6 = *(undefined2 *)0xa9ac;
      uVar9 = *(undefined2 *)0xa9ae;
    }
    else {
      uVar6 = *(undefined2 *)0xa9b0;
      uVar9 = *(undefined2 *)0xa9b2;
    }
    *(undefined2 *)0xb49e = uVar6;
    *(undefined2 *)0xb4a0 = uVar9;
  }
  ppppiStack_8 = (int ****)0xf7e6;
  ppppiStack_6 = (int ****)pppiVar11;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf7ef;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf7f8;
  FUN_28b3_100d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf7fd;
  FUN_28b3_1181();
  if ((bool)uVar15) {
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf808;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf811;
    func_0x00029bb5();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf81a;
    func_0x00029983();
  }
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf823;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf82c;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf835;
  FUN_28b3_100d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf83a;
  FUN_28b3_1181();
  if ((bool)uVar15) {
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf845;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf84e;
    func_0x00029bb5();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf857;
    func_0x00029983();
  }
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf860;
  func_0x00029834();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf869;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf872;
  FUN_28b3_100d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf87b;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf884;
  FUN_28b3_100d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf889;
  FUN_28b3_1172();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf891;
  func_0x0002996b();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf896;
  func_0x00029d78();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf89b;
  FUN_28b3_1181();
  if ((bool)uVar15) {
    uStack_56 = *(undefined2 *)0xa964;
    uStack_54 = *(undefined2 *)0xa966;
  }
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf8b2;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf8bb;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf8c0;
  FUN_28b3_1181();
  if ((bool)uVar15) {
    uStack_56 = *(undefined2 *)0xa9b8;
    uStack_54 = *(undefined2 *)0xa9ba;
  }
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf8d8;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf8e0;
  func_0x00029b85();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf8e5;
  func_0x00029d78();
  local_e = (undefined2 ****)0x22b2;
  ppppuStack_10 = (undefined2 ****)0xf8ef;
  func_0x000299d1();
  local_e = (undefined2 ****)0x22b2;
  ppppuStack_10 = (undefined2 ****)0xf8f4;
  FUN_28b3_1582();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf8fe;
  func_0x00029834();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf903;
  uVar6 = FUN_28b3_0f51();
  *(undefined2 *)0xc396 = uVar6;
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf90f;
  FUN_28b3_0d8b();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf917;
  func_0x00029b6d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf91c;
  func_0x00029d78();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf921;
  uVar6 = FUN_28b3_0f51();
  *(undefined2 *)0xc3b8 = uVar6;
  while (30000 < (*(int *)0xc396 + 1) * *(int *)0xc3b8) {
    *(int *)0xc396 = *(int *)0xc396 + -1;
    *(int *)0xc3b8 = *(int *)0xc3b8 + -1;
  }
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf944;
  FUN_28b3_0d8b();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf94d;
  func_0x0002996b();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf955;
  FUN_28b3_0ee9();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf95e;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf967;
  FUN_28b3_100d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf970;
  FUN_28b3_0d8b();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf979;
  func_0x0002996b();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf97e;
  FUN_28b3_1172();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf987;
  func_0x00029983();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf990;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf999;
  FUN_28b3_100d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf9a2;
  func_0x00029b85();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf9ab;
  func_0x00029983();
  uStack_ae = *(undefined2 *)0xa98c;
  uStack_ac = *(undefined2 *)0xa98e;
  if (param_1 == 1) {
    uStack_ae = *(undefined2 *)0xa9c0;
    uStack_ac = *(undefined2 *)0xa9c2;
  }
  if (param_1 == 2) {
    uStack_ae = *(undefined2 *)0xa9c4;
    uStack_ac = *(undefined2 *)0xa9c6;
  }
  uVar16 = param_1 < 3;
  uVar15 = false;
  if (param_1 == 3) {
    uStack_ae = *(undefined2 *)0xa94c;
    uStack_ac = *(undefined2 *)0xa94e;
    if (local_1cc == 2) {
      uStack_ae = *(undefined2 *)0xa9c8;
      uStack_ac = *(undefined2 *)0xa9ca;
    }
    if (local_1cc == 3) {
      uStack_ae = *(undefined2 *)0xa964;
      uStack_ac = *(undefined2 *)0xa966;
    }
    uVar16 = local_1cc < 4;
    uVar15 = local_1cc == 4;
    if ((bool)uVar15) {
      uStack_ae = *(undefined2 *)0xa9cc;
      uStack_ac = *(undefined2 *)0xa9ce;
    }
  }
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfa44;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfa4d;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfa52;
  FUN_28b3_1181();
  if (!(bool)uVar16 && !(bool)uVar15) {
    *(undefined2 *)0x7582 = uStack_ae;
    *(undefined2 *)0x7584 = uStack_ac;
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfa6c;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfa75;
    FUN_28b3_100d();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfa7e;
    func_0x00029b85();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfa83;
    func_0x00029d78();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfa88;
    uVar6 = FUN_28b3_0f51();
    *(undefined2 *)0xc396 = uVar6;
  }
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfa94;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfa9d;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfaa2;
  FUN_28b3_1181();
  if (!(bool)uVar16 && !(bool)uVar15) {
    *(undefined2 *)0x7586 = uStack_ae;
    *(undefined2 *)0x7588 = uStack_ac;
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfabc;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfac5;
    FUN_28b3_100d();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xface;
    func_0x00029b85();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfad3;
    func_0x00029d78();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfad8;
    uVar6 = FUN_28b3_0f51();
    *(undefined2 *)0xc3b8 = uVar6;
  }
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfae4;
  FUN_28b3_0d8b();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfaed;
  func_0x00029b6d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfaf6;
  func_0x00029bb5();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfaff;
  func_0x00029983();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfb08;
  FUN_28b3_0d8b();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfb11;
  func_0x00029b6d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfb1a;
  func_0x00029bb5();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xfb23;
  func_0x00029983();
  ppppiStack_6 = (int ****)0x0;
  ppppiStack_8 = (int ****)0x22b2;
  ppppuStack_a = (undefined2 ****)0xfb2b;
  func_0x0000daa6();
  ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
  ppppiStack_8 = (int ****)*(undefined2 *)0xcb2;
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined2 *)0x3;
  local_e = (undefined2 ****)0x885;
  ppppuStack_10 = (undefined2 ****)0xfb40;
  func_0x0000f2cb();
  ppppiStack_6 = (int ****)0xdef;
  uVar6 = 0x885;
  ppppiStack_8 = (int ****)0xfb48;
  func_0x0000a799();
  if (param_1 == 3) {
    ppppiStack_6 = (int ****)0x885;
    ppppiStack_8 = (int ****)0xfb5a;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfb5f;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfb69;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfb72;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfb77;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xfb81;
    func_0x000299d1();
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xfb89;
    puVar7 = (undefined2 *)FUN_1def_05d1();
    local_a6 = *puVar7;
    local_a4 = puVar7[1];
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xfba4;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfba9;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfbb3;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfbbc;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfbc1;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xfbcb;
    func_0x000299d1();
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xfbd3;
    puVar7 = (undefined2 *)func_0x0001e558();
    local_11a = *puVar7;
    local_118 = puVar7[1];
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xfbee;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfbf3;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfbfd;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfc06;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfc0b;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xfc15;
    func_0x000299d1();
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xfc1d;
    puVar7 = (undefined2 *)FUN_1def_05d1();
    local_a2 = *puVar7;
    pppiStack_a0 = (int ***)puVar7[1];
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xfc38;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfc3d;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfc47;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfc50;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfc55;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xfc5f;
    func_0x000299d1();
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xfc67;
    puVar7 = (undefined2 *)func_0x0001e558();
    local_116 = *puVar7;
    uStack_114 = puVar7[1];
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xfc82;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfc87;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfc91;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfc9a;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfc9f;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xfca9;
    func_0x000299d1();
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xfcb1;
    piVar8 = (int *)FUN_1def_05d1();
    local_9e = *piVar8;
    local_9c = piVar8[1];
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xfccc;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfcd1;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfcdb;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfce4;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfce9;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xfcf3;
    func_0x000299d1();
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xfcfb;
    puVar7 = (undefined2 *)func_0x0001e558();
    local_112 = *puVar7;
    local_110 = puVar7[1];
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xfd16;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfd1b;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfd25;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfd2e;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfd33;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xfd3d;
    func_0x000299d1();
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xfd45;
    puVar7 = (undefined2 *)FUN_1def_05d1();
    local_9a = *puVar7;
    uStack_98 = puVar7[1];
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xfd60;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xfd65;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfd6f;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfd78;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xfd7d;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xfd87;
    func_0x000299d1();
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xfd8f;
    puVar7 = (undefined2 *)func_0x0001e558();
    local_10e = *puVar7;
    local_10c = puVar7[1];
    ppppiStack_6 = (int ****)0x1bb4;
    uVar6 = 0x1b6e;
    ppppiStack_8 = (int ****)0xfda6;
    FUN_1885_2ec3();
    ppppiStack_6 = (int ****)&local_11a;
    ppppiStack_8 = (int ****)&local_a6;
    ppppuStack_a = (undefined2 ****)0x1b6e;
    puStack_c = (undefined2 *)0xfdb4;
    FUN_3ab8_4289();
  }
  ppppiStack_8 = (int ****)0xfdbb;
  ppppiStack_6 = (int ****)uVar6;
  func_0x0000c3ca();
  ppppiStack_6 = (int ****)0x1;
  ppppiStack_8 = (int ****)0x1c;
  ppppuStack_a = (undefined2 ****)0x885;
  puStack_c = (undefined2 *)0xfdc8;
  FUN_1000_0599();
  ppppiStack_6 = (int ****)0x8a6;
  ppppiStack_8 = (int ****)0xdef;
  ppppuStack_a = (undefined2 ****)0xfdd3;
  func_0x00012276();
  ppppiStack_6 = (int ****)0x0;
  ppppiStack_8 = (int ****)0x11f2;
  ppppuStack_a = (undefined2 ****)0xfddc;
  func_0x0000daa6();
  ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
  ppppiStack_8 = (int ****)(1 - *(int *)0xcb2);
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined2 *)0x3;
  local_e = (undefined2 ****)0x885;
  uVar6 = 0xdef;
  ppppuStack_10 = (undefined2 ****)0xfdf5;
  func_0x0000f2cb();
  for (local_124 = 1; local_124 <= *(int *)0xc3b8; local_124 = local_124 + 1) {
    *(undefined2 *)(local_124 * 2 + (int)*(undefined4 *)0xb37a) = 0xfff7;
  }
  for (local_124 = 1; local_124 <= *(int *)0xc3b8; local_124 = local_124 + 1) {
    *(int *)(local_124 * 2 + (int)*(undefined4 *)0xbef2) = (local_124 + -1) * (*(int *)0xc396 + 1);
  }
  local_124 = 1;
  uVar9 = *(undefined2 *)0xb48e;
  do {
    *(undefined2 *)(local_124 * 2 + *(int *)0xb48c) = 0;
    local_124 = local_124 + 1;
  } while (local_124 < 0x7919);
  ppppiStack_6 = (int ****)param_19;
  ppppiStack_8 = (int ****)param_18;
  ppppuStack_a = (undefined2 ****)param_16;
  puStack_c = param_15;
  local_e = param_14;
  ppppuStack_10 = param_13;
  puStack_12 = (undefined2 *)param_12;
  pppiStack_14 = param_3;
  uStack_16 = param_2;
  pppiStack_18 = (int ***)*(undefined2 *)0xa93a;
  pppiStack_1a = (int ***)*(undefined2 *)0xa938;
  pppiStack_1c = (int ***)*(undefined2 *)0xa936;
  iStack_1e = *(int *)0xa934;
  iStack_20 = *(undefined2 *)0xa93a;
  uStack_22 = *(undefined2 *)0xa938;
  uStack_24 = *(undefined2 *)0xa936;
  uStack_26 = *(undefined2 *)0xa934;
  aiStack_38[7] = 0xdef;
  aiStack_38[6] = 0xfeab;
  iStack_1a2 = FUN_3ab8_19bd();
  if (iStack_1a2 < 0) {
    while( true ) {
      ppppiStack_8 = (int ****)0x13b;
      ppppiStack_6 = (int ****)uVar6;
      FUN_32b2_6eb1();
      ppppiStack_6 = (int ****)pppiStack_b8;
      ppppiStack_8 = (int ****)uStack_ba;
      ppppuStack_a = (undefined2 ****)uStack_bc;
      puStack_c = (undefined2 *)uStack_be;
      local_e = (undefined2 ****)0x32b2;
      ppppuStack_10 = (undefined2 ****)0x150;
      FUN_32b2_75ec();
      uVar15 = &stack0x0000 == (undefined1 *)0x6;
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x15a;
      FUN_32b2_6d14();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x162;
      FUN_32b2_704d();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x16a;
      FUN_32b2_7095();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x173;
      FUN_32b2_6eb1();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x17b;
      FUN_32b2_6cc6();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x183;
      FUN_32b2_6cc6();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x188;
      FUN_32b2_7191();
      if ((bool)uVar15) {
        ppppiStack_8 = (int ****)0x32b2;
        ppppuStack_a = (undefined2 ****)0x192;
        FUN_32b2_6cc6();
        ppppiStack_8 = (int ****)0x32b2;
        ppppuStack_a = (undefined2 ****)0x19a;
        FUN_32b2_6cc6();
        ppppiStack_8 = (int ****)0x32b2;
        ppppuStack_a = (undefined2 ****)0x19f;
        FUN_32b2_7191();
        if ((bool)uVar15) {
          return 0;
        }
      }
      ppppiStack_8 = &pppiStack_aa;
      ppppuStack_a = (undefined2 ****)&iStack_1e;
      puStack_c = (undefined2 *)uStack_7e;
      local_e = (undefined2 ****)pppiStack_80;
      ppppuStack_10 = (undefined2 ****)pppiStack_82;
      puStack_12 = (undefined2 *)uStack_84;
      pppiStack_14 = (int ***)uStack_5a;
      uStack_16 = local_5c;
      pppiStack_18 = (int ***)uStack_60._2_2_;
      pppiStack_1a = (int ***)(undefined2)uStack_60;
      pppiStack_1c = (int ***)0x32b2;
      iStack_1e = 0x1d0;
      FUN_32b2_6cc6();
      pppiStack_1c = (int ***)0x32b2;
      iStack_1e = 0x1d5;
      FUN_32b2_7258();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1df;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1e7;
      FUN_32b2_6cc6();
      uStack_24 = 0x32b2;
      uStack_26 = 0x1ec;
      FUN_32b2_7258();
      aiStack_38[6] = 0x32b2;
      aiStack_38[5] = 0x1f6;
      FUN_32b2_6eb1();
      aiStack_38[6] = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      aiStack_38[5] = 0x1fa;
      iVar5 = func_0x0003fb3d();
      if (iVar5 == 0) {
        return 0;
      }
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x209;
      FUN_32b2_6cc6();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x20e;
      FUN_32b2_7258();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x216;
      FUN_32b2_6e99();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x21e;
      FUN_32b2_6ef9();
      ppppiStack_8 = (int ****)auStack_b6;
      ppppuStack_a = (undefined2 ****)&local_a6;
      puStack_c = (undefined2 *)0x32b2;
      local_e = (undefined2 ****)0x231;
      FUN_32b2_6cc6();
      puStack_c = (undefined2 *)0x32b2;
      local_e = (undefined2 ****)0x236;
      FUN_32b2_7258();
      pppiStack_14 = (int ***)0x32b2;
      uStack_16 = 0x240;
      FUN_32b2_6eb1();
      pppiStack_14 = (int ***)0x32b2;
      uStack_16 = 0x248;
      FUN_32b2_6cc6();
      pppiStack_14 = (int ***)0x32b2;
      uStack_16 = 0x24d;
      FUN_32b2_7258();
      pppiStack_1c = (int ***)0x32b2;
      iStack_1e = 599;
      FUN_32b2_6eb1();
      pppiStack_1c = (int ***)0x32b2;
      iStack_1e = 0x25f;
      FUN_32b2_6d14();
      uStack_24 = 0x32b2;
      uStack_26 = 0x269;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x271;
      FUN_32b2_6cc6();
      uStack_24 = 0x32b2;
      uStack_26 = 0x276;
      FUN_32b2_7258();
      uStack_24 = 0x32b2;
      uStack_26 = 0x27e;
      FUN_32b2_6e99();
      aiStack_38[6] = 0x32b2;
      aiStack_38[5] = 0x288;
      FUN_32b2_6eb1();
      aiStack_38[6] = 0x32b2;
      aiStack_38[5] = 0x290;
      FUN_32b2_6cc6();
      aiStack_38[6] = 0x32b2;
      aiStack_38[5] = 0x295;
      FUN_32b2_7258();
      aiStack_38[2] = 0x32b2;
      aiStack_38[1] = 0x29f;
      FUN_32b2_6eb1();
      aiStack_38[2] = 0x32b2;
      aiStack_38[1] = 0x2a7;
      FUN_32b2_6cc6();
      aiStack_38[2] = 0x32b2;
      aiStack_38[1] = 0x2ac;
      FUN_32b2_7258();
      uStack_3c = 0x32b2;
      uStack_3e = 0x2b6;
      FUN_32b2_6eb1();
      uStack_3c = 1;
      uStack_3e = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      uStack_40 = 0x2be;
      func_0x0003fc09();
      ppppiStack_8 = (int ****)auStack_e6;
      ppppuStack_a = (undefined2 ****)auStack_d2;
      puStack_c = (undefined2 *)0x32b2;
      local_e = (undefined2 ****)0x2d4;
      FUN_32b2_6cc6();
      puStack_c = (undefined2 *)0x32b2;
      local_e = (undefined2 ****)0x2d9;
      FUN_32b2_7258();
      pppiStack_14 = (int ***)0x32b2;
      uStack_16 = 0x2e3;
      FUN_32b2_6eb1();
      pppiStack_14 = (int ***)0x32b2;
      uStack_16 = 0x2eb;
      FUN_32b2_6cc6();
      pppiStack_14 = (int ***)0x32b2;
      uStack_16 = 0x2f0;
      FUN_32b2_7258();
      pppiStack_1c = (int ***)0x32b2;
      iStack_1e = 0x2fa;
      FUN_32b2_6eb1();
      pppiStack_1c = (int ***)0x32b2;
      iStack_1e = 0x302;
      FUN_32b2_6d14();
      uStack_24 = 0x32b2;
      uStack_26 = 0x30c;
      FUN_32b2_6eb1();
      uStack_24 = 0x32b2;
      uStack_26 = 0x314;
      FUN_32b2_6d14();
      aiStack_38[6] = 0x32b2;
      aiStack_38[5] = 0x31e;
      FUN_32b2_6eb1();
      aiStack_38[6] = 0x32b2;
      aiStack_38[5] = 0x326;
      FUN_32b2_6cc6();
      aiStack_38[6] = 0x32b2;
      aiStack_38[5] = 0x32b;
      FUN_32b2_7258();
      aiStack_38[2] = 0x32b2;
      aiStack_38[1] = 0x335;
      FUN_32b2_6eb1();
      aiStack_38[2] = 0x32b2;
      aiStack_38[1] = 0x33d;
      FUN_32b2_6cc6();
      aiStack_38[2] = 0x32b2;
      aiStack_38[1] = 0x342;
      FUN_32b2_7258();
      uStack_3c = 0x32b2;
      uStack_3e = 0x34c;
      FUN_32b2_6eb1();
      uStack_3c = 1;
      uStack_3e = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      uStack_40 = 0x354;
      func_0x0003fc09();
      uVar15 = (undefined1 *)0xffc9 < aiStack_38;
      uVar16 = &stack0x0000 == (undefined1 *)0x2;
      ppppiStack_6 = (int ****)0x360;
      FUN_32b2_6cc6();
      ppppiStack_6 = (int ****)0x369;
      FUN_32b2_701d();
      ppppiStack_6 = (int ****)0x36e;
      FUN_32b2_7258();
      ppppiStack_6 = (int ****)0x376;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x37e;
      FUN_32b2_6ef9();
      ppppiStack_6 = (int ****)0x387;
      FUN_32b2_6cc6();
      ppppiStack_6 = (int ****)0x390;
      FUN_32b2_701d();
      ppppiStack_6 = (int ****)0x395;
      FUN_32b2_7258();
      ppppiStack_6 = (int ****)0x39e;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x3a6;
      FUN_32b2_6ef9();
      ppppiStack_6 = (int ****)0x3af;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x3b4;
      FUN_32b2_6fc7();
      ppppiStack_6 = (int ****)0x3bc;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x3c1;
      FUN_32b2_6fc7();
      ppppiStack_6 = (int ****)0x3ca;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x3cf;
      FUN_32b2_7191();
      if (!(bool)uVar15 && !(bool)uVar16) break;
      ppppiStack_6 = (int ****)0x3f5;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x32b2;
      ppppiStack_8 = (undefined2 ****)0x3ff;
      FUN_32b2_7154();
      ppppiStack_6 = (int ****)0x405;
      FUN_32b2_6eb1();
      puStack_48 = (undefined1 *)ppppuStack_a;
      ppppuStack_46 = ppppiStack_8;
      uStack_44 = ppppiStack_6;
      puStack_12 = ppppuStack_a;
      ppppuStack_10 = ppppiStack_8;
      ppppiStack_6 = (int ****)uStack_ba;
      ppppiStack_8 = (int ****)uStack_bc;
      ppppuStack_a = (undefined2 ****)uStack_be;
      puStack_c = (undefined2 *)0x32b2;
      local_e = (undefined2 ****)0x119;
      FUN_32b2_75fe();
      ppppiStack_6 = (int ****)0x32b2;
      ppppiStack_8 = (int ****)0x123;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x32b2;
      ppppiStack_8 = (int ****)0x12b;
      FUN_32b2_704d();
      ppppiStack_6 = (int ****)0x32b2;
      uVar6 = 0x32b2;
      ppppiStack_8 = (int ****)0x133;
      FUN_32b2_7095();
    }
    ppppiStack_6 = (int ****)0x3da;
    FUN_32b2_6d14();
    ppppiStack_6 = (int ****)0x3e2;
    FUN_32b2_6d14();
    ppppiStack_6 = (int ****)0x3e7;
    FUN_32b2_7191();
    if (!(bool)uVar16) {
      ppppiStack_6 = (int ****)0x431;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x439;
      FUN_32b2_7124();
      ppppiStack_6 = (int ****)0x441;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x44a;
      FUN_32b2_704d();
      ppppiStack_6 = (int ****)0x453;
      FUN_32b2_7035();
      ppppiStack_6 = (int ****)0x45c;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x464;
      FUN_32b2_6eb1();
      ppppiStack_6 = (int ****)0x46c;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x474;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x47c;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x484;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x48c;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x494;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x49d;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x4a2;
      FUN_32b2_718c();
      ppppiStack_6 = (int ****)0x4ab;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x4b3;
      FUN_32b2_6eb1();
      ppppiStack_6 = (int ****)0x4bc;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x4c4;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x4cd;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x4d5;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x4dd;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x4e6;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x4ee;
      FUN_32b2_6eb1();
      ppppiStack_6 = (int ****)0x4f7;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x500;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x509;
      FUN_32b2_70dc();
      ppppiStack_6 = (int ****)0x511;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x519;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x522;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x52b;
      FUN_32b2_6eb1();
      ppppiStack_6 = (int ****)0x534;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x53d;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x546;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x54f;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x558;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x55d;
      FUN_32b2_718c();
      ppppiStack_6 = (int ****)0x566;
      FUN_32b2_6eb1();
      ppppiStack_6 = (int ****)0x56f;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x574;
      FUN_32b2_6fd6();
      ppppiStack_6 = (int ****)0x57d;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x586;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x58b;
      FUN_32b2_7182();
      ppppiStack_6 = (int ****)0x594;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x59c;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x5a5;
      FUN_32b2_7154();
      ppppiStack_6 = (int ****)0x5ae;
      FUN_32b2_6e99();
      ppppiStack_6 = (int ****)0x5b7;
      FUN_32b2_6eb1();
      ppppiStack_6 = (int ****)0x5c0;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x5c9;
      FUN_32b2_6eb1();
      ppppiStack_6 = (int ****)&uStack_64;
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x5db;
      FUN_32b2_6cc6();
      ppppiStack_8 = (int ****)0x32b2;
      ppppuStack_a = (undefined2 ****)0x5e0;
      FUN_32b2_7258();
      ppppuStack_10 = (undefined2 ****)0x32b2;
      puStack_12 = (undefined2 *)0x5ea;
      FUN_32b2_6eb1();
      ppppuStack_10 = (undefined2 ****)0x32b2;
      puStack_12 = (undefined2 *)0x5f2;
      FUN_32b2_6cc6();
      ppppuStack_10 = (undefined2 ****)0x32b2;
      puStack_12 = (undefined2 *)0x5f7;
      FUN_32b2_7258();
      pppiStack_18 = (int ***)0x32b2;
      pppiStack_1a = (int ***)0x601;
      FUN_32b2_6eb1();
      pppiStack_18 = pppiStack_66;
      pppiStack_1a = pppiStack_68;
      pppiStack_1c = (int ***)iStack_6a;
      iStack_1e = iStack_6c;
      iStack_20 = uStack_4a;
      uStack_22 = uStack_4c;
      uStack_24 = uStack_4e;
      uStack_26 = uStack_50;
      aiStack_38[7] = 0x622;
      FUN_32b2_6d14();
      aiStack_38[4] = 0x32b2;
      aiStack_38[3] = 0x62c;
      FUN_32b2_6eb1();
      aiStack_38[4] = 0x32b2;
      aiStack_38[3] = 0x635;
      FUN_32b2_6d14();
      aiStack_38[0] = 0x32b2;
      uStack_3a = 0x63f;
      FUN_32b2_6eb1();
      aiStack_38[0] = 0;
      uStack_3a = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      uStack_3c = 0x646;
      func_0x0003fc09();
      uStack_88 = uStack_64;
      uStack_86 = uStack_62;
      pppiStack_a0 = pppiStack_8c;
      local_9e = iStack_8a;
      ppppiStack_6 = (int ****)&uStack_88;
      puVar10 = &uStack_26;
      puVar7 = &param_12;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar3 = puVar10;
        puVar10 = puVar10 + 1;
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar2;
      }
      aiStack_38[7] = 0x684;
      iVar5 = FUN_3ab8_522f();
      uVar15 = 0;
      uVar16 = iVar5 == 0;
      if (!(bool)uVar16) {
        ppppiStack_6 = (int ****)0x694;
        FUN_32b2_6d14();
        ppppiStack_6 = (int ****)0x69d;
        FUN_32b2_6cc6();
        ppppiStack_6 = (int ****)0x6a5;
        FUN_32b2_701d();
        ppppiStack_6 = (int ****)0x6aa;
        FUN_32b2_6fc7();
        ppppiStack_6 = (int ****)0x6af;
        FUN_32b2_7258();
        ppppiStack_6 = (int ****)0x6b4;
        FUN_32b2_7191();
        if ((bool)uVar15 || (bool)uVar16) {
          ppppiStack_6 = (int ****)0x6bf;
          FUN_32b2_6d14();
          ppppiStack_6 = (int ****)0x6c8;
          FUN_32b2_6cc6();
          ppppiStack_6 = (int ****)0x6d1;
          FUN_32b2_701d();
          ppppiStack_6 = (int ****)0x6d6;
          FUN_32b2_6fc7();
          ppppiStack_6 = (int ****)0x6db;
          FUN_32b2_7258();
          ppppiStack_6 = (int ****)0x6e0;
          FUN_32b2_7191();
          if ((bool)uVar15 || (bool)uVar16) {
            uStack_be = *(undefined2 *)0x93c0;
            uStack_bc = *(undefined2 *)0x93c2;
            uStack_ba = *(undefined2 *)0x93c4;
            pppiStack_b8 = (int ***)*(int *)0x93c6;
          }
        }
      }
      ppppiStack_6 = (int ****)0x6f8;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x700;
      FUN_32b2_6d14();
      ppppiStack_6 = (int ****)0x708;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x711;
      FUN_32b2_710c();
      ppppiStack_6 = (int ****)0x71a;
      FUN_32b2_7154();
      ppppiStack_6 = (int ****)0x71f;
      FUN_32b2_7191();
      if (!(bool)uVar15) {
        ppppiStack_6 = (int ****)0x72d;
        FUN_32b2_6d14();
        ppppiStack_6 = (int ****)0x732;
        FUN_32b2_6fc7();
        ppppiStack_6 = (int ****)0x73a;
        FUN_32b2_6d14();
        ppppiStack_6 = (int ****)0x742;
        FUN_32b2_710c();
        ppppiStack_6 = (int ****)0x74b;
        FUN_32b2_710c();
        ppppiStack_6 = (int ****)0x750;
        FUN_32b2_7191();
        if (!(bool)uVar15) {
          uStack_be = *(undefined2 *)0x93c0;
          uStack_bc = *(undefined2 *)0x93c2;
          uStack_ba = *(undefined2 *)0x93c4;
          pppiStack_b8 = (int ***)*(int *)0x93c6;
        }
        ppppiStack_6 = (int ****)uStack_ba;
        ppppiStack_8 = (int ****)uStack_bc;
        ppppuStack_a = (undefined2 ****)uStack_be;
        puStack_c = (undefined2 *)0x32b2;
        local_e = (undefined2 ****)0x774;
        FUN_32b2_7592();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x77e;
        FUN_32b2_6d14();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x786;
        FUN_32b2_70dc();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x78e;
        FUN_32b2_6d14();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x797;
        FUN_32b2_710c();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x79c;
        FUN_32b2_7182();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x7a5;
        FUN_32b2_6e99();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x7ad;
        FUN_32b2_710c();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x7b5;
        FUN_32b2_7154();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x7be;
        FUN_32b2_6e99();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x7c7;
        FUN_32b2_6eb1();
        ppppiStack_6 = &pppiStack_8c;
        ppppiStack_8 = (int ****)&uStack_64;
        ppppuStack_a = (undefined2 ****)0x32b2;
        puStack_c = (undefined2 *)0x7d9;
        FUN_32b2_6cc6();
        ppppuStack_a = (undefined2 ****)0x32b2;
        puStack_c = (undefined2 *)0x7de;
        FUN_32b2_7258();
        puStack_12 = (undefined2 *)0x32b2;
        pppiStack_14 = (int ***)0x7e8;
        FUN_32b2_6eb1();
        puStack_12 = (undefined2 *)0x32b2;
        pppiStack_14 = (int ***)0x7f0;
        FUN_32b2_6cc6();
        puStack_12 = (undefined2 *)0x32b2;
        pppiStack_14 = (int ***)0x7f5;
        FUN_32b2_7258();
        pppiStack_1a = (int ***)0x32b2;
        pppiStack_1c = (int ***)0x7ff;
        FUN_32b2_6eb1();
        pppiStack_1a = pppiStack_66;
        pppiStack_1c = pppiStack_68;
        iStack_1e = iStack_6a;
        iStack_20 = iStack_6c;
        uStack_22 = uStack_4a;
        uStack_24 = uStack_4c;
        uStack_26 = uStack_4e;
        aiStack_38[7] = 0x32b2;
        aiStack_38[6] = 0x820;
        FUN_32b2_6d14();
        aiStack_38[3] = 0x32b2;
        aiStack_38[2] = 0x82a;
        FUN_32b2_6eb1();
        aiStack_38[3] = 0x32b2;
        aiStack_38[2] = 0x833;
        FUN_32b2_6d14();
        uStack_3a = 0x32b2;
        uStack_3c = 0x83d;
        FUN_32b2_6eb1();
        uStack_3a = 0;
        uStack_3c = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
        uStack_3e = 0x844;
        func_0x0003fc09();
        uVar15 = (undefined1 *)0xffc9 < aiStack_38 + 6;
        uVar16 = &stack0x0000 == (undefined1 *)0xfff6;
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar16) {
          uStack_64 = param_1;
          uStack_62 = 0x85c;
        }
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar16) {
          pppiStack_8c = (int ***)0x32b2;
          iStack_8a = param_4;
        }
        *in_stack_0000003a = uStack_64;
        in_stack_0000003a[1] = uStack_62;
        *in_stack_0000003c = (int)pppiStack_8c;
        in_stack_0000003c[1] = iStack_8a;
        *in_stack_0000003e = uStack_64;
        in_stack_0000003e[1] = uStack_62;
        *in_stack_00000040 = (int)pppiStack_8c;
        in_stack_00000040[1] = iStack_8a;
        aiStack_38[0] = aiStack_38[0] + 1;
        uVar16 = aiStack_38[0] == 0;
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_7191();
        if ((bool)uVar15 || (bool)uVar16) {
          return aiStack_38[0];
        }
        param_3 = pppiStack_b8;
        FUN_32b2_7592();
        FUN_32b2_6d14();
        FUN_32b2_7154();
        FUN_32b2_6fd6();
        FUN_32b2_6d14();
        FUN_32b2_710c();
        FUN_32b2_7182();
        FUN_32b2_6e99();
        FUN_32b2_710c();
        FUN_32b2_7154();
        FUN_32b2_6e99();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        pppiVar11 = (int ***)0x32b2;
        FUN_32b2_7258();
LAB_2bb4_4e31:
        ppppiStack_8 = (int ****)0x978;
        ppppiStack_6 = (int ****)pppiVar11;
        FUN_32b2_6eb1();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x980;
        FUN_32b2_6cc6();
        ppppiStack_6 = (int ****)0x32b2;
        ppppiStack_8 = (int ****)0x985;
        FUN_32b2_7258();
        local_e = (undefined2 ****)0x32b2;
        ppppuStack_10 = (undefined2 ****)0x98f;
        FUN_32b2_6eb1();
        local_e = (undefined2 ****)pppiStack_66;
        ppppuStack_10 = (undefined2 ****)pppiStack_68;
        puStack_12 = (undefined2 *)iStack_6a;
        pppiStack_14 = (int ***)iStack_6c;
        uStack_16 = uStack_4a;
        pppiStack_18 = (int ***)uStack_4c;
        pppiStack_1a = (int ***)uStack_4e;
        pppiStack_1c = (int ***)uStack_50;
        iStack_1e = 0x32b2;
        iStack_20 = 0x9b0;
        FUN_32b2_6d14();
        uStack_26 = 0x32b2;
        FUN_32b2_6eb1();
        uStack_26 = 0x32b2;
        FUN_32b2_6d14();
        aiStack_38[5] = 0x32b2;
        aiStack_38[4] = 0x9cd;
        FUN_32b2_6eb1();
        aiStack_38[5] = 0;
        aiStack_38[4] = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
        aiStack_38[3] = 0x9d4;
        func_0x0003fc09();
        uVar15 = &stack0x0000 == (undefined1 *)0xfff8;
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar15) {
          uStack_64 = 0x9ec;
          uStack_62 = 0x32b2;
        }
        FUN_32b2_6cc6();
        FUN_32b2_6cc6();
        FUN_32b2_7191();
        if ((bool)uVar15) {
          pppiStack_8c = param_3;
          iStack_8a = param_4;
        }
        *in_stack_0000003e = uStack_64;
        in_stack_0000003e[1] = uStack_62;
        *in_stack_00000040 = (int)pppiStack_8c;
        in_stack_00000040[1] = iStack_8a;
        return aiStack_38[0] + 1;
      }
    }
    return 0;
  }
  ppppiStack_6 = (int ****)0xdef;
  ppppiStack_8 = (int ****)0xfebd;
  FUN_3ab8_4341();
  *(undefined2 *)0xc11c = 0xb4;
  if (param_1 == 2) {
    *(undefined2 *)0xc11c = 0x3c;
  }
  if (param_1 == 3) {
    *(undefined2 *)0xc11c = 0x14;
    if (local_1cc == 2) {
      *(undefined2 *)0xc11c = 10;
    }
    if (local_1cc == 3) {
      *(undefined2 *)0xc11c = 4;
    }
    if (local_1cc == 4) {
      *(undefined2 *)0xc11c = 2;
    }
  }
  if (param_17 == 0) {
    uStack_1a6 = 0x3840;
  }
  else {
    uStack_1a6 = 0x2a30;
  }
  uVar15 = (uint)(*(int *)0xc11c / 2) < uStack_1a6;
  iStack_70 = *(int *)0xc11c / 2 - uStack_1a6;
  ppppiStack_6 = (int ****)0xdef;
  ppppiStack_8 = (int ****)0xff2e;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xff37;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xff3c;
  FUN_28b3_1181();
  if ((bool)uVar15) {
    uStack_128 = *(undefined2 *)0x7582;
    uStack_126 = *(undefined2 *)0x7584;
  }
  else {
    uStack_128 = *(undefined2 *)0x7586;
    uStack_126 = *(undefined2 *)0x7588;
  }
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xff5f;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xff68;
  func_0x00029b6d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xff71;
  func_0x00029b6d();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xff76;
  func_0x00029d78();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xff7f;
  func_0x00029c2c();
  local_e = (undefined2 ****)0x22b2;
  ppppuStack_10 = (undefined2 ****)0xff89;
  func_0x000299d1();
  local_e = (undefined2 ****)&local_6e;
  ppppuStack_10 = (undefined2 ****)0x75c2;
  puStack_12 = &uStack_50;
  pppiStack_14 = (int ***)0x22b2;
  uStack_16 = 0xff9a;
  FUN_21f2_3454();
  ppppiStack_6 = (int ****)0x1;
  ppppiStack_8 = (int ****)0x3c;
  ppppuStack_a = (undefined2 ****)0x22b2;
  puStack_c = (undefined2 *)0xffaa;
  FUN_1000_0599();
  ppppiStack_6 = (int ****)&uStack_50;
  ppppiStack_8 = (int ****)0xdef;
  ppppuStack_a = (undefined2 ****)0xffb5;
  func_0x00012276();
  ppppiStack_6 = (int ****)param_17;
  ppppiStack_8 = (int ****)uStack_1a6;
  ppppuStack_a = (undefined2 ****)0x11f2;
  puStack_c = (undefined2 *)0xffc1;
  func_0x00031410();
  ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
  ppppiStack_8 = (int ****)(1 - *(int *)0xcb2);
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined2 *)0x3;
  local_e = (undefined2 ****)0x11f2;
  ppppuVar13 = (undefined2 ****)0xdef;
  ppppuStack_10 = (undefined2 ****)0xffdb;
  func_0x0000f2cb();
  ppppiStack_6 = (int ****)auStack_90;
  ppppiStack_8 = (int ****)auStack_74;
  ppppuStack_a = (undefined2 ****)&uStack_64;
  puStack_c = auStack_94;
  local_e = apppuStack_78;
  ppppuStack_10 = param_11;
  puStack_12 = (undefined2 *)param_10;
  pppiStack_14 = param_9;
  uStack_16 = param_8;
  pppiStack_18 = (int ***)param_7;
  pppiStack_1a = (int ***)param_6;
  pppiStack_1c = (int ***)param_5;
  iStack_1e = param_4;
  iStack_20 = 0xdef;
  uStack_22 = 0x10;
  FUN_4375_8583();
  pppiStack_1c4 = (int ***)((int)uStack_1a6 / -0x3c + 0x17c);
  for (iStack_1d0 = iStack_70; iStack_1d0 <= (int)uStack_1a6;
      iStack_1d0 = iStack_1d0 + *(int *)0xc11c) {
    pppiStack_1c6 = (int ***)(iStack_1d0 / 0x3c + 0x17c);
    if (pppiStack_1c6 != pppiStack_1c4) {
      ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
      ppppiStack_8 = (int ****)*(undefined2 *)0xcb2;
      ppppuStack_a = (undefined2 ****)0x0;
      puStack_c = (undefined2 *)0x3;
      ppppuStack_10 = (undefined2 ****)0x1f0;
      local_e = ppppuVar13;
      func_0x0000f2cb();
      ppppiStack_6 = (int ****)0x0;
      ppppiStack_8 = (int ****)0x0;
      ppppuStack_a = (undefined2 ****)0x2;
      puStack_c = (undefined2 *)0x6;
      local_e = (undefined2 ****)0x3c;
      ppppuStack_10 = (undefined2 ****)pppiStack_1c6;
      puStack_12 = (undefined2 *)0x28;
      pppiStack_14 = pppiStack_1c4;
      uStack_16 = 0xdef;
      pppiStack_18 = (int ***)0x214;
      func_0x0000f350();
      ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
      ppppiStack_8 = (int ****)(1 - *(int *)0xcb2);
      ppppuStack_a = (undefined2 ****)0x0;
      puStack_c = (undefined2 *)0x3;
      local_e = (undefined2 ****)0xdef;
      ppppuVar13 = (undefined2 ****)0xdef;
      ppppuStack_10 = (undefined2 ****)0x22f;
      func_0x0000f2cb();
      pppiStack_1c4 = pppiStack_1c6;
    }
    for (local_124 = 1; local_124 <= *(int *)0xc3b8; local_124 = local_124 + 1) {
      *(undefined2 *)(local_124 * 2 + (int)*(undefined4 *)0xb37a) = 0xfff7;
    }
    ppppiStack_6 = &pppiStack_80;
    ppppiStack_8 = (int ****)&uStack_84;
    puStack_c = (undefined2 *)0x5b;
    ppppuStack_a = ppppuVar13;
    func_0x000297e6();
    ppppuStack_a = (undefined2 ****)0x22b2;
    puStack_c = (undefined2 *)0x60;
    func_0x00029d78();
    puStack_12 = (undefined2 *)0x22b2;
    pppiStack_14 = (int ***)0x6a;
    func_0x000299d1();
    puStack_12 = (undefined2 *)0x22b2;
    pppiStack_14 = (int ***)0x72;
    func_0x000297e6();
    puStack_12 = (undefined2 *)0x22b2;
    pppiStack_14 = (int ***)0x77;
    func_0x00029d78();
    pppiStack_1a = (int ***)0x22b2;
    pppiStack_1c = (int ***)0x81;
    func_0x000299d1();
    pppiStack_1a = (int ***)0x22b2;
    pppiStack_1c = (int ***)0x89;
    func_0x000297e6();
    pppiStack_1a = (int ***)0x22b2;
    pppiStack_1c = (int ***)0x8e;
    func_0x00029d78();
    uStack_22 = 0x22b2;
    uStack_24 = 0x98;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xa1;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xa6;
    func_0x00029d78();
    aiStack_38[7] = 0x22b2;
    aiStack_38[6] = 0xb0;
    func_0x000299d1();
    aiStack_38[7] = 0x22b2;
    aiStack_38[6] = 0xb8;
    func_0x000297e6();
    aiStack_38[7] = 0x22b2;
    aiStack_38[6] = 0xbd;
    func_0x00029d78();
    aiStack_38[3] = 0x22b2;
    aiStack_38[2] = 199;
    func_0x000299d1();
    aiStack_38[3] = iStack_1d0;
    aiStack_38[2] = 0x22b2;
    aiStack_38[1] = 0xcf;
    FUN_4375_8709();
    ppppiStack_6 = (int ****)param_19;
    ppppiStack_8 = (int ****)param_18;
    ppppuStack_a = (undefined2 ****)param_16;
    puStack_c = param_15;
    local_e = param_14;
    ppppuStack_10 = param_13;
    puStack_12 = (undefined2 *)param_12;
    pppiStack_14 = param_3;
    uStack_16 = param_2;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xf5;
    func_0x000297e6();
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xfa;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    uStack_22 = 0x104;
    func_0x000299d1();
    iStack_20 = 0x22b2;
    uStack_22 = 0x10d;
    func_0x000297e6();
    iStack_20 = 0x22b2;
    uStack_22 = 0x112;
    func_0x00029d78();
    ppppuVar13 = (undefined2 ****)0x22b2;
    aiStack_38[7] = 0x11c;
    func_0x000299d1();
    aiStack_38[7] = 0x22b2;
    aiStack_38[6] = 0x123;
    iStack_1a2 = FUN_4375_8ded();
    if (iStack_1a2 < 0) {
LAB_3ab8_55b1:
      ppppiStack_6 = (int ****)0x0;
      ppppuStack_a = (undefined2 ****)0x139;
      ppppiStack_8 = ppppuVar13;
      func_0x0000daa6();
      ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
      ppppiStack_8 = (int ****)(1 - *(int *)0xcb2);
      ppppuStack_a = (undefined2 ****)0x0;
      puStack_c = (undefined2 *)0x3;
      local_e = (undefined2 ****)0x885;
      ppppuStack_10 = (undefined2 ****)0x152;
      func_0x0000f2cb();
      ppppiStack_6 = (int ****)0x0;
      ppppiStack_8 = (int ****)0x0;
      ppppuStack_a = (undefined2 ****)0x2;
      puStack_c = (undefined2 *)0x0;
      local_e = (undefined2 ****)*(undefined2 *)0x1b40;
      ppppuStack_10 = (undefined2 ****)*(undefined2 *)0x1b3e;
      puStack_12 = (undefined2 *)0x0;
      pppiStack_14 = (int ***)0x0;
      uStack_16 = 0xdef;
      pppiStack_18 = (int ***)0x16f;
      func_0x0000f350();
      *(undefined2 *)0x11c = 1;
      ppppiStack_6 = (int ****)0xdef;
      ppppiStack_8 = (int ****)0x17d;
      FUN_1885_2ec3();
      ppppiStack_6 = (int ****)0x5;
      ppppiStack_8 = (int ****)0x12;
      ppppuStack_a = (undefined2 ****)0x1b6e;
      puStack_c = (undefined2 *)0x18a;
      FUN_1000_0599();
      ppppiStack_6 = (int ****)0xdef;
      ppppiStack_8 = (int ****)0x191;
      func_0x00010526();
      ppppiStack_6 = (int ****)0xdef;
      uVar6 = 0x885;
      ppppiStack_8 = (int ****)0x196;
      func_0x0000a7c5();
      *(undefined2 *)0xc08 = 0;
      *(undefined2 *)0xbc0 = 1;
      if (iStack_1a2 != -1) {
        if (iStack_1a2 != -2) {
          ppppiStack_6 = (int ****)0x0;
          ppppiStack_8 = (int ****)0x885;
          ppppuStack_a = (undefined2 ****)0x96d;
          func_0x0001470b();
          return 1;
        }
        ppppiStack_6 = (int ****)0x1dc;
        ppppiStack_8 = (int ****)0x885;
        ppppuStack_a = (undefined2 ****)0x93d;
        func_0x00012276();
        *(undefined2 *)0xc22 = 2;
        ppppiStack_6 = (int ****)0x3;
        ppppiStack_8 = (int ****)0x14;
        ppppuStack_a = (undefined2 ****)0x11f2;
        puStack_c = (undefined2 *)0x951;
        FUN_1000_0599();
        ppppiStack_6 = (int ****)0x402;
        ppppiStack_8 = (int ****)0x1de;
        ppppuStack_a = (undefined2 ****)0xdef;
        uVar6 = 0x11f2;
        puStack_c = (undefined2 *)0x960;
        func_0x00012276();
      }
      ppppiStack_6 = (int ****)0x0;
      ppppuStack_a = (undefined2 ****)0x1b4;
      ppppiStack_8 = (int ****)uVar6;
      func_0x0001470b();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  ppppiStack_6 = (int ****)0x0;
  ppppuStack_a = (undefined2 ****)0x24b;
  ppppiStack_8 = ppppuVar13;
  func_0x0000daa6();
  ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
  ppppiStack_8 = (int ****)*(undefined2 *)0xcb2;
  ppppuStack_a = (undefined2 ****)0x0;
  puStack_c = (undefined2 *)0x3;
  local_e = (undefined2 ****)0x885;
  ppppuStack_10 = (undefined2 ****)0x260;
  func_0x0000f2cb();
  ppppiStack_6 = (int ****)0xdef;
  ppppiStack_8 = (int ****)0x268;
  func_0x0000a799();
  ppppiStack_6 = (int ****)0x0;
  ppppiStack_8 = (int ****)0x0;
  ppppuStack_a = (undefined2 ****)0x2;
  puStack_c = (undefined2 *)0x6;
  local_e = (undefined2 ****)0x3c;
  ppppuStack_10 = (undefined2 ****)0x26c;
  puStack_12 = (undefined2 *)0x28;
  pppiStack_14 = (int ***)0x8c;
  uStack_16 = 0x885;
  pppiStack_18 = (int ***)0x289;
  func_0x0000f350();
  local_124 = 2;
  do {
    ppppiStack_6 = (int ****)local_124;
    ppppiStack_8 = (int ****)0x12;
    ppppuStack_a = (undefined2 ****)0xdef;
    puStack_c = (undefined2 *)0x29f;
    FUN_1000_0599();
    ppppiStack_6 = (int ****)0xdef;
    ppppiStack_8 = (int ****)0x2a6;
    func_0x00010526();
    local_124 = local_124 + 1;
  } while (local_124 < 0x18);
  ppppiStack_6 = (int ****)0x1;
  ppppiStack_8 = (int ****)0x1;
  ppppuStack_a = (undefined2 ****)0xdef;
  puStack_c = (undefined2 *)0x2bb;
  FUN_1000_0599();
  ppppiStack_6 = (int ****)0xdef;
  ppppiStack_8 = (int ****)0x2c2;
  FUN_1885_2ec3();
  ppppiStack_6 = (int ****)0x0;
  ppppiStack_8 = (int ****)0x1b6e;
  ppppuStack_a = (undefined2 ****)0x2ca;
  func_0x0001470b();
  uStack_5a = *(uint *)0x148;
  uStack_58 = *(uint *)0x14a;
  iStack_1a0 = *(int *)0x150;
  ppppuVar13 = (undefined2 ****)0x11f2;
LAB_3ab8_575f:
  do {
    while( true ) {
      ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
      ppppiStack_8 = (int ****)*(undefined2 *)0xcb2;
      ppppuStack_a = (undefined2 ****)0x0;
      puStack_c = (undefined2 *)0x3;
      ppppuStack_10 = (undefined2 ****)0x2f3;
      local_e = ppppuVar13;
      func_0x0000f2cb();
      ppppiStack_6 = (int ****)0xdef;
      uVar6 = 0x885;
      ppppiStack_8 = (int ****)0x2fb;
      func_0x0000a799();
      if (param_1 == 3) {
        ppppiStack_6 = (int ****)0x885;
        uVar6 = 0x1b6e;
        ppppiStack_8 = (int ****)0x306;
        FUN_1885_2ec3();
        ppppiStack_6 = (int ****)&local_11a;
        ppppiStack_8 = (int ****)&local_a6;
        ppppuStack_a = (undefined2 ****)0x1b6e;
        puStack_c = (undefined2 *)0x314;
        FUN_4375_b6b9();
      }
      *(undefined2 *)0x11c = 10;
      *(undefined2 *)0xc08 = 1;
      *(undefined2 *)0xc22 = 1;
      ppppiStack_6 = (int ****)0x2;
      ppppiStack_8 = (int ****)0x30;
      puStack_c = (undefined2 *)0x332;
      ppppuStack_a = (undefined2 ****)uVar6;
      FUN_1000_0599();
      ppppiStack_6 = (int ****)&uStack_50;
      ppppiStack_8 = (int ****)0xdef;
      pppiVar11 = (int ***)0x11f2;
      ppppuStack_a = (undefined2 ****)0x33d;
      func_0x00012276();
      if (*(char *)0x7638 == '\0') {
        ppppiStack_6 = (int ****)0xffff;
        ppppiStack_8 = (int ****)0x7;
        ppppuStack_a = (undefined2 ****)0x2;
        puStack_c = (undefined2 *)0x43;
        local_e = (undefined2 ****)0x75ce;
        ppppuStack_10 = (undefined2 ****)0x11f2;
        pppiVar11 = (int ***)0xdef;
        puStack_12 = (undefined2 *)0x35e;
        FUN_1000_02b5();
      }
      ppppiStack_6 = (int ****)0xffff;
      ppppiStack_8 = (int ****)0x7;
      ppppuStack_a = (undefined2 ****)0x2;
      puStack_c = (undefined2 *)0x45;
      local_e = (undefined2 ****)0x658;
      puStack_12 = (undefined2 *)0x37a;
      ppppuStack_10 = (undefined2 ****)pppiVar11;
      FUN_1000_02b5();
      if (param_19 != 0 || param_18 != 0) {
        ppppiStack_6 = (int ****)0xffff;
        *(undefined2 *)0xc22 = 2;
        ppppiStack_8 = (int ****)0x2;
        ppppuStack_a = (undefined2 ****)0x3;
        puStack_c = (undefined2 *)0x41;
        local_e = (undefined2 ****)0x11cc;
        ppppuStack_10 = (undefined2 ****)0xdef;
        puStack_12 = (undefined2 *)0x3a2;
        FUN_1000_02b5();
        if (*(char *)param_20 != '\0') {
          ppppiStack_6 = (int ****)0xffff;
          ppppiStack_8 = (int ****)0x6;
          ppppuStack_a = (undefined2 ****)0x3;
          puStack_c = (undefined2 *)0x1e;
          local_e = (undefined2 ****)param_20;
          ppppuStack_10 = (undefined2 ****)0xdef;
          puStack_12 = (undefined2 *)0x3c3;
          FUN_1000_02b5();
        }
      }
      ppppuStack_7c = (undefined2 ****)0x2710;
      uVar4 = *(uint *)0x14a;
      uVar15 = uVar4 < uStack_58;
      if (((int)uStack_58 <= (int)uVar4) &&
         (((int)uStack_58 < (int)uVar4 ||
          (uVar15 = *(uint *)0x148 < uStack_5a, uStack_5a < *(uint *)0x148)))) {
        ppppuStack_7c = (undefined2 ****)0x270f;
      }
      ppppiStack_6 = (int ****)0xb5b6;
      ppppiStack_8 = (int ****)0xdef;
      ppppuStack_a = (undefined2 ****)0x3ed;
      func_0x000257c0();
      uStack_88 = *(uint *)0xa9d0;
      uStack_86 = *(uint *)0xa9d2;
      ppppiStack_6 = (int ****)0x75d1;
      ppppiStack_8 = (int ****)local_198;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0x40b;
      FUN_21f2_3454();
      while( true ) {
        ppppiStack_6 = (int ****)0x22b2;
        ppppiStack_8 = (int ****)0x4a2;
        func_0x000297e6();
        ppppiStack_6 = (int ****)0x22b2;
        ppppiStack_8 = (int ****)0x4ab;
        func_0x000297e6();
        ppppiStack_6 = (int ****)0x22b2;
        ppppiStack_8 = (int ****)0x4b0;
        FUN_28b3_1181();
        if ((bool)uVar15) break;
        ppppiStack_6 = (int ****)0x22b2;
        ppppiStack_8 = (int ****)0x419;
        func_0x000297e6();
        ppppiStack_6 = (int ****)0x22b2;
        ppppiStack_8 = (int ****)0x41e;
        func_0x00029d78();
        local_e = (undefined2 ****)0x22b2;
        ppppuStack_10 = (undefined2 ****)0x428;
        func_0x000299d1();
        local_e = (undefined2 ****)0x75dc;
        ppppuStack_10 = (undefined2 ****)local_1c2;
        puStack_12 = (undefined2 *)0x22b2;
        pppiStack_14 = (int ***)0x436;
        FUN_21f2_3454();
        uVar15 = (undefined1 *)0xfff3 < &ppppuStack_10;
        ppppiStack_6 = (int ****)local_1c2;
        ppppiStack_8 = (int ****)local_198;
        ppppuStack_a = (undefined2 ****)0x22b2;
        puStack_c = (undefined2 *)0x448;
        FUN_21f2_2d26();
        ppppiStack_6 = (int ****)0x22b2;
        ppppiStack_8 = (int ****)0x453;
        func_0x000297e6();
        ppppiStack_6 = (int ****)0x22b2;
        ppppiStack_8 = (int ****)0x45c;
        func_0x000297e6();
        ppppiStack_6 = (int ****)0x22b2;
        ppppiStack_8 = (int ****)0x461;
        FUN_28b3_1181();
        if ((bool)uVar15) {
          ppppiStack_6 = (int ****)0x22b2;
          ppppiStack_8 = (int ****)0x46c;
          func_0x000297e6();
          ppppiStack_6 = (int ****)0x22b2;
          ppppiStack_8 = (int ****)0x471;
          func_0x00029d78();
          ppppiStack_6 = (int ****)0x22b2;
          ppppiStack_8 = (int ****)0x47a;
          func_0x00029c74();
        }
        else {
          ppppiStack_6 = (int ****)0x22b2;
          ppppiStack_8 = (int ****)0x489;
          func_0x000297e6();
          ppppiStack_6 = (int ****)&uStack_88;
          ppppiStack_8 = (int ****)0x22b2;
          ppppuStack_a = (undefined2 ****)0x493;
          func_0x00029bb5();
        }
        ppppiStack_6 = (int ****)0x22b2;
        ppppiStack_8 = (int ****)0x499;
        func_0x00029983();
      }
      ppppiStack_6 = (int ****)0x75e4;
      ppppiStack_8 = (int ****)local_198;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0x4c3;
      FUN_21f2_2d26();
      ppppiStack_6 = (int ****)0x98a;
      ppppiStack_8 = (int ****)local_198;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0x4d3;
      FUN_21f2_2d26();
      ppppiStack_6 = (int ****)&local_6e;
      ppppiStack_8 = (int ****)local_198;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0x4e3;
      FUN_21f2_2d26();
      ppppiStack_6 = (int ****)0x98a;
      ppppiStack_8 = (int ****)local_198;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0x4f3;
      FUN_21f2_2d26();
      ppppiStack_6 = (int ****)0x7e0;
      ppppiStack_8 = (int ****)local_198;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0x503;
      FUN_21f2_2d26();
      ppppiStack_6 = (int ****)local_198;
      ppppiStack_8 = (int ****)0x9;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0x513;
      FUN_1def_07a4();
      ppppiStack_6 = (int ****)&local_10a;
      ppppiStack_8 = (int ****)&local_1d4;
      ppppuStack_a = (undefined2 ****)&local_1ca;
      puStack_c = local_198;
      local_e = ppppuStack_7c;
      ppppuStack_10 = (undefined2 ****)0x1bb4;
      puStack_12 = (undefined2 *)0x531;
      iStack_1ce = FUN_1def_0904();
      if (*(char *)0x118 == '\0') break;
LAB_3ab8_59bf:
      *(undefined2 *)0x158 = 0;
      *(undefined1 *)0x118 = 0;
      ppppiStack_6 = (int ****)0xb5b6;
      ppppiStack_8 = (int ****)0x1bb4;
      ppppuStack_a = (undefined2 ****)0x553;
      func_0x000257c0();
      ppppuVar13 = (undefined2 ****)0x22b2;
    }
    ppppiStack_6 = (int ****)0x0;
    ppppiStack_8 = (int ****)0x1bb4;
    ppppuVar13 = (undefined2 ****)0x885;
    ppppuStack_a = (undefined2 ****)0x55f;
    func_0x0000daa6();
    iStack_96 = *(int *)0x158;
    if (iStack_1ce != 8) {
      while ((iStack_96 != 0 || (iStack_1ce == 9))) {
        ppppiStack_6 = (int ****)0x75e9;
        ppppiStack_8 = (int ****)local_198;
        puStack_c = (undefined2 *)0x5a4;
        ppppuStack_a = ppppuVar13;
        FUN_21f2_3454();
        ppppiStack_6 = (int ****)0x954;
        ppppiStack_8 = (int ****)local_198;
        ppppuStack_a = (undefined2 ****)0x22b2;
        puStack_c = (undefined2 *)0x5b4;
        FUN_21f2_2d26();
        ppppiStack_6 = (int ****)0x522;
        ppppiStack_8 = (int ****)local_198;
        ppppuStack_a = (undefined2 ****)0x22b2;
        puStack_c = (undefined2 *)0x5c4;
        FUN_21f2_2d26();
        uStack_7a = *(undefined2 *)0xa62;
        *(undefined2 *)0xa62 = 0x1d;
        *(undefined2 *)0x158 = 0;
        *(undefined2 *)0xc22 = 1;
        ppppiStack_6 = (int ****)&local_10a;
        ppppiStack_8 = (int ****)&local_1d4;
        ppppuStack_a = (undefined2 ****)&local_1ca;
        puStack_c = local_198;
        local_e = (undefined2 ****)0x2710;
        ppppuStack_10 = (undefined2 ****)0x22b2;
        ppppuVar13 = (undefined2 ****)0x1bb4;
        puStack_12 = (undefined2 *)0x5fb;
        iStack_1a4 = FUN_1def_0904();
        if (*(char *)0x118 != '\0') goto LAB_3ab8_59bf;
        if (*(int *)0x158 != 0) goto LAB_3ab8_55b1;
        if ((iStack_1a4 == 1) || (local_10a == 1)) {
          *(int *)0x158 = iStack_96;
          *(undefined2 *)0xa62 = uStack_7a;
          goto LAB_3ab8_55b1;
        }
        if ((iStack_1a4 == 2) || (local_10a == 2)) break;
      }
      if (iStack_1ce == -1) {
        ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
        ppppiStack_8 = (int ****)*(undefined2 *)0xcb2;
        ppppuStack_a = (undefined2 ****)0x0;
        puStack_c = (undefined2 *)0x3;
        ppppuStack_10 = (undefined2 ****)0x65c;
        local_e = ppppuVar13;
        func_0x0000f2cb();
        ppppiStack_6 = (int ****)0xdef;
        ppppiStack_8 = (int ****)0x664;
        func_0x0000a799();
        ppppiStack_6 = (int ****)0x885;
        ppppiStack_8 = (int ****)0x669;
        FUN_1885_2ec3();
        uVar6 = 0x1b6e;
        while (ppppiStack_6 = (int ****)*(int *)0x150, iStack_1a0 < (int)ppppiStack_6) {
          ppppuStack_a = (undefined2 ****)0x675;
          iStack_1a4 = (int)ppppiStack_6;
          ppppiStack_8 = (int ****)uVar6;
          func_0x000190c7();
          uVar6 = 0x18b3;
        }
        *(uint *)0x148 = uStack_5a;
        *(uint *)0x14a = uStack_58;
        ppppiStack_8 = (int ****)0x691;
        ppppiStack_6 = (int ****)uVar6;
        func_0x0000abfa();
        ppppiStack_6 = (int ****)0x1;
        ppppiStack_8 = (int ****)0x885;
        ppppuStack_a = (undefined2 ****)0x69a;
        func_0x0000b1d8();
        ppppiStack_6 = (int ****)0x0;
        ppppiStack_8 = (int ****)0x885;
        ppppuVar13 = (undefined2 ****)0x11f2;
        ppppuStack_a = (undefined2 ****)0x6a3;
        func_0x0001470b();
      }
      if ((0 < iStack_1ce) && (iStack_1ce < 8)) {
        ppppuVar14 = (undefined2 ****)0x885;
        ppppiStack_8 = (int ****)0x6bd;
        ppppiStack_6 = ppppuVar13;
        func_0x0000c3ca();
        uStack_5a = *(uint *)0x148;
        uStack_58 = *(uint *)0x14a;
        iStack_1a0 = *(int *)0x150;
        while (iStack_1ce == 7) {
          pppiStack_aa = (int ***)*(int *)0xa8fc;
          iStack_a8 = *(int *)0xa8fe;
          ppppiStack_8 = (int ****)0x6f7;
          pppiStack_8c = pppiStack_aa;
          iStack_8a = iStack_a8;
          ppppiStack_6 = ppppuVar14;
          func_0x0001bb4e();
          ppppiStack_6 = (int ****)0x760e;
          ppppiStack_8 = (int ****)0x1bb4;
          ppppuStack_a = (undefined2 ****)0x700;
          func_0x00012276();
          ppppiStack_6 = (int ****)0x2711;
          ppppiStack_8 = (int ****)0x17;
          ppppuStack_a = (undefined2 ****)&local_1d4;
          puStack_c = &local_1ca;
          local_e = &pppiStack_aa;
          ppppuStack_10 = &pppiStack_8c;
          puStack_12 = (undefined2 *)0x11f2;
          ppppuVar14 = (undefined2 ****)0xad;
          pppiStack_14 = (int ***)0x722;
          local_124 = func_0x000021a4();
          ppppuVar13 = ppppuVar14;
          if ((local_124 == -1) || (*(int *)0x158 != 0)) goto LAB_3ab8_575f;
          uVar15 = 0;
          uVar16 = local_124 == 0;
          if ((bool)uVar16) {
            ppppiStack_6 = (int ****)0xad;
            ppppiStack_8 = (int ****)0x746;
            func_0x000297e6();
            ppppiStack_6 = (int ****)0x22b2;
            ppppiStack_8 = (int ****)0x74f;
            func_0x000297e6();
            ppppiStack_6 = (int ****)0x22b2;
            ppppiStack_8 = (int ****)0x754;
            FUN_28b3_1181();
            if ((bool)uVar15 || (bool)uVar16) {
              ppppiStack_6 = (int ****)0x22b2;
              ppppiStack_8 = (int ****)0x75f;
              func_0x000297e6();
              ppppiStack_6 = (int ****)0x22b2;
              ppppiStack_8 = (int ****)0x768;
              func_0x000297e6();
              ppppiStack_6 = (int ****)0x22b2;
              ppppuVar14 = (undefined2 ****)0x22b2;
              ppppiStack_8 = (int ****)0x76d;
              FUN_28b3_1181();
              if ((bool)uVar15 || (bool)uVar16) {
                pppiStack_134 = pppiStack_8c;
                iStack_132 = iStack_8a;
                break;
              }
            }
            ppppuVar14 = (undefined2 ****)0x22b2;
          }
        }
        if (iStack_1ce < 7) {
          ppppiStack_8 = (int ****)0x792;
          ppppiStack_6 = ppppuVar14;
          FUN_28b3_0d8b();
          ppppiStack_6 = (int ****)0x22b2;
          ppppiStack_8 = (int ****)0x79b;
          func_0x0002996b();
          ppppiStack_6 = (int ****)0x22b2;
          ppppiStack_8 = (int ****)0x7a3;
          FUN_28b3_0ee9();
          if (iStack_1ce < 4) {
            ppppiStack_6 = (int ****)0x22b2;
            ppppiStack_8 = (int ****)0x7b3;
            func_0x000297e6();
            ppppiStack_6 = (int ****)0x22b2;
            ppppiStack_8 = (int ****)0x7bc;
            func_0x00029b6d();
            ppppiStack_6 = (int ****)0x22b2;
            ppppiStack_8 = (int ****)0x7c1;
            func_0x00029d78();
            ppppiStack_6 = (int ****)0x22b2;
            ppppiStack_8 = (int ****)0x7ca;
            func_0x00029c74();
          }
          else {
            ppppiStack_6 = (int ****)0x22b2;
            ppppiStack_8 = (int ****)0x7de;
            FUN_28b3_0d8b();
          }
          ppppiStack_6 = (int ****)0x22b2;
          ppppuVar14 = (undefined2 ****)0x22b2;
          ppppiStack_8 = (int ****)0x7e7;
          func_0x00029983();
        }
        ppppiStack_6 = (int ****)0x0;
        ppppuStack_a = (undefined2 ****)0x7ef;
        ppppiStack_8 = ppppuVar14;
        func_0x0000daa6();
        ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
        ppppiStack_8 = (int ****)(1 - *(int *)0xcb2);
        ppppuStack_a = (undefined2 ****)0x0;
        puStack_c = (undefined2 *)0x3;
        local_e = (undefined2 ****)0x885;
        ppppuStack_10 = (undefined2 ****)0x808;
        func_0x0000f2cb();
        ppppiStack_6 = (int ****)0x1;
        ppppiStack_8 = (int ****)0x23;
        ppppuStack_a = (undefined2 ****)0xdef;
        puStack_c = (undefined2 *)0x818;
        FUN_1000_0599();
        ppppiStack_6 = (int ****)0x761e;
        ppppiStack_8 = (int ****)0xdef;
        uVar6 = 0x11f2;
        ppppuStack_a = (undefined2 ****)0x823;
        func_0x00012276();
        uStack_108 = *(uint *)0x148 + 1;
        iStack_106 = *(int *)0x14a + (uint)(0xfffe < *(uint *)0x148);
        auStack_104[0] = 0;
        if (*(char *)0x7638 != '\0') {
          ppppiStack_6 = (int ****)0x11b8;
          ppppiStack_8 = (int ****)auStack_104;
          ppppuStack_a = (undefined2 ****)0x11f2;
          puStack_c = (undefined2 *)0x853;
          func_0x00024c86();
          ppppiStack_6 = (int ****)&uStack_50;
          ppppiStack_8 = (int ****)auStack_104;
          ppppuStack_a = (undefined2 ****)0x22b2;
          uVar6 = 0x22b2;
          puStack_c = (undefined2 *)0x863;
          FUN_21f2_2d26();
          if ((param_19 != 0 || param_18 != 0) && (*(char *)param_20 != '\0')) {
            ppppiStack_6 = (int ****)0x954;
            ppppiStack_8 = (int ****)auStack_104;
            ppppuStack_a = (undefined2 ****)0x22b2;
            puStack_c = (undefined2 *)0x883;
            FUN_21f2_2d26();
            ppppiStack_6 = (int ****)param_20;
            ppppiStack_8 = (int ****)auStack_104;
            ppppuStack_a = (undefined2 ****)0x22b2;
            uVar6 = 0x22b2;
            puStack_c = (undefined2 *)0x892;
            FUN_21f2_2d26();
          }
        }
        ppppiStack_6 = (int ****)auStack_104;
        ppppiStack_8 = (int ****)param_19;
        ppppuStack_a = (undefined2 ****)param_18;
        local_e = (undefined2 ****)0x8a8;
        puStack_c = (undefined2 *)uVar6;
        func_0x000297e6();
        puStack_c = (undefined2 *)0x22b2;
        local_e = (undefined2 ****)0x8ad;
        func_0x00029d78();
        pppiStack_14 = (int ***)0x22b2;
        pppiVar11 = (int ***)0x22b2;
        uStack_16 = 0x8b7;
        func_0x000299d1();
        pppiStack_14 = (int ***)0x22b2;
        uStack_16 = 0x8bb;
        FUN_4375_76b2();
        if ((iStack_106 <= *(int *)0x14a) &&
           ((iStack_106 < *(int *)0x14a || (uStack_108 < *(uint *)0x148)))) {
          ppppiStack_6 = (int ****)iStack_106;
          ppppiStack_8 = (int ****)uStack_108;
          ppppuStack_a = (undefined2 ****)0x22b2;
          puStack_c = (undefined2 *)0x8db;
          uVar17 = func_0x0000013f();
          uVar6 = (undefined2)((ulong)uVar17 >> 0x10);
          pbVar1 = (byte *)((int)uVar17 + 0x14);
          *pbVar1 = *pbVar1 | 0x40;
          pbVar1 = (byte *)((int)uVar17 + 0x14);
          *pbVar1 = *pbVar1 & 0x7f;
          ppppiStack_6 = (int ****)*(undefined2 *)0x14a;
          ppppiStack_8 = (int ****)*(undefined2 *)0x148;
          ppppuStack_a = (undefined2 ****)0x0;
          pppiVar11 = (int ***)0x0;
          puStack_c = (undefined2 *)0x8fe;
          uStack_60 = uVar17;
          uVar17 = func_0x0000013f();
          pbVar1 = (byte *)((int)uVar17 + 0x14);
          *pbVar1 = *pbVar1 | 0x40;
        }
        ppppiStack_6 = (int ****)*(undefined2 *)0xcb4;
        ppppiStack_8 = (int ****)*(undefined2 *)0xcb2;
        ppppuStack_a = (undefined2 ****)0x0;
        puStack_c = (undefined2 *)0x3;
        ppppuStack_10 = (undefined2 ****)0x91d;
        local_e = (undefined2 ****)pppiVar11;
        func_0x0000f2cb();
        ppppiStack_6 = (int ****)0xdef;
        ppppiStack_8 = (int ****)0x925;
        func_0x0000a799();
        ppppiStack_6 = (int ****)0x885;
        ppppiStack_8 = (int ****)0x92a;
        func_0x0000abfa();
        ppppuVar13 = (undefined2 ****)0x885;
      }
      goto LAB_3ab8_575f;
    }
    if (*(char *)0x7638 == '\0') {
      *(undefined1 *)0x7638 = 1;
    }
    else {
      *(undefined1 *)0x7638 = 0;
    }
  } while( true );
LAB_3ab8_46a4:
  pppiVar12 = pppiVar11;
  if (param_19 != 0 || param_18 != 0) {
    ppppiStack_6 = (int ****)0xffff;
    *(undefined2 *)0xc22 = 2;
    ppppiStack_8 = (int ****)0x2;
    ppppuStack_a = (undefined2 ****)0x3;
    puStack_c = (undefined2 *)0x47;
    local_e = (undefined2 ****)0x11cc;
    pppiVar12 = (int ***)0xdef;
    puStack_12 = (undefined2 *)0xf248;
    ppppuStack_10 = (undefined2 ****)pppiVar11;
    FUN_1000_02b5();
  }
  ppppiStack_6 = (int ****)0x8a6;
  ppppiStack_8 = (int ****)local_198;
  puStack_c = (undefined2 *)0xf259;
  ppppuStack_a = (undefined2 ****)pppiVar12;
  func_0x00024c86();
  local_194 = 0;
  ppppiStack_6 = (int ****)0x75b3;
  ppppiStack_8 = (int ****)local_198;
  ppppuStack_a = (undefined2 ****)0x22b2;
  puStack_c = (undefined2 *)0xf26e;
  FUN_21f2_2d26();
  ppppiStack_6 = (int ****)&local_e;
  ppppiStack_8 = (int ****)local_198;
  ppppuStack_a = (undefined2 ****)0x22b2;
  puStack_c = (undefined2 *)0xf27e;
  FUN_21f2_2d26();
  ppppiStack_6 = (int ****)0x98a;
  ppppiStack_8 = (int ****)local_198;
  ppppuStack_a = (undefined2 ****)0x22b2;
  puStack_c = (undefined2 *)0xf28e;
  FUN_21f2_2d26();
  for (local_19a = 1; local_19a < 5; local_19a = local_19a + 1) {
    local_1cc = 0x14;
    if (local_19a == 2) {
      local_1cc = 10;
    }
    if (local_19a == 3) {
      local_1cc = 4;
    }
    if (local_19a == 4) {
      local_1cc = 2;
    }
    ppppiStack_6 = (int ****)local_1cc;
    ppppiStack_8 = (int ****)0x75bb;
    ppppuStack_a = (undefined2 ****)local_1c2;
    puStack_c = (undefined2 *)0x22b2;
    local_e = (undefined2 ****)0xf52d;
    FUN_21f2_3454();
    if (local_19a == 1) {
      ppppiStack_6 = (int ****)0x30e;
      ppppiStack_8 = (int ****)local_1c2;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0xf545;
      FUN_21f2_2d26();
    }
    if (local_19a == 2) {
      ppppiStack_6 = (int ****)0x316;
      ppppiStack_8 = (int ****)local_1c2;
      ppppuStack_a = (undefined2 ****)0x22b2;
      puStack_c = (undefined2 *)0xf55c;
      FUN_21f2_2d26();
    }
    ppppiStack_6 = (int ****)0x98a;
    ppppiStack_8 = (int ****)local_1c2;
    ppppuStack_a = (undefined2 ****)0x22b2;
    puStack_c = (undefined2 *)0xf56c;
    FUN_21f2_2d26();
    ppppiStack_6 = (int ****)local_1c2;
    ppppiStack_8 = (int ****)local_198;
    ppppuStack_a = (undefined2 ****)0x22b2;
    puStack_c = (undefined2 *)0xf57d;
    FUN_21f2_2d26();
  }
  ppppiStack_6 = (int ****)local_198;
  ppppiStack_8 = (int ****)0x4;
  ppppuStack_a = (undefined2 ****)0x22b2;
  puStack_c = (undefined2 *)0xf590;
  FUN_1def_07a4();
  ppppiStack_6 = (int ****)&local_10a;
  ppppiStack_8 = (int ****)&local_130;
  ppppuStack_a = (undefined2 ****)&local_11e;
  puStack_c = local_198;
  local_e = (undefined2 ****)0x270f;
  ppppuStack_10 = (undefined2 ****)0x1bb4;
  pppiVar11 = (int ***)0x1bb4;
  puStack_12 = (undefined2 *)0xf5af;
  local_1cc = FUN_1def_0904();
  if (*(int *)0x158 != 0) goto LAB_2bb4_4e31;
  if (local_1cc == 0xffff) goto LAB_3ab8_4670;
  if (local_10a == 1) {
    local_1cc = 1;
  }
  if (local_10a == 2) {
    local_1cc = 2;
  }
  if ((0 < (int)local_1cc) && ((int)local_1cc < 5)) goto LAB_3ab8_4a70;
  ppppiStack_6 = (int ****)0x1bb4;
  pppiVar11 = (int ***)0x1b6e;
  ppppiStack_8 = (int ****)0xf635;
  FUN_1885_2ec3();
  ppppiStack_6 = (int ****)&local_11a;
  ppppiStack_8 = (int ****)&local_a6;
  ppppuStack_a = (undefined2 ****)0x1b6e;
  puStack_c = (undefined2 *)0xf643;
  FUN_3ab8_4289();
  goto LAB_3ab8_46a4;
LAB_3ab8_4670:
  pppiVar12 = (int ***)0x1b6e;
  ppppiStack_8 = (int ****)0xf1f5;
  ppppiStack_6 = (int ****)pppiVar11;
  FUN_1885_2ec3();
  goto LAB_3ab8_459c;
code_r0x0003f2b2:
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf2bb;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  ppppiStack_8 = (int ****)0xf2c4;
  func_0x000297e6();
  ppppiStack_6 = (int ****)0x22b2;
  pppiVar12 = (int ***)0x22b2;
  ppppiStack_8 = (int ****)0xf2c9;
  FUN_28b3_1181();
  if (!(bool)uVar15) {
LAB_3ab8_474e:
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf2d3;
    FUN_1885_2ec3();
    local_19e = local_1d4;
    local_19c = local_1d2;
    ppppiStack_6 = (int ****)0x1b6e;
    ppppiStack_8 = (int ****)0xf2ec;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf2f1;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf2fb;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf304;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf30d;
    func_0x0002996b();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf312;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xf31c;
    func_0x000299d1();
    uStack_16 = 1;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xf325;
    func_0x0001e558();
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xf32f;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf338;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf33d;
    func_0x00029d78();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf347;
    func_0x000299d1();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)&SUB_0000_f350;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf355;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    pppiStack_18 = (int ***)0xf35f;
    func_0x000299d1();
    uStack_16 = 1;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xf368;
    func_0x0001e558();
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xf372;
    FUN_28b3_100d();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf37b;
    func_0x00029983();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf384;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf38e;
    func_0x000299d1();
    local_e = (undefined2 ****)*(undefined2 *)0xa93a;
    ppppuStack_10 = (undefined2 ****)*(undefined2 *)0xa938;
    puStack_12 = (undefined2 *)*(undefined2 *)0xa936;
    pppiStack_14 = (int ***)*(undefined2 *)0xa934;
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xf3a6;
    FUN_1def_05d1();
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xf3b0;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf3b9;
    FUN_28b3_100d();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf3c2;
    func_0x00029983();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf3cb;
    func_0x000297e6();
    local_e = (undefined2 ****)0x22b2;
    ppppuStack_10 = (undefined2 ****)0xf3d5;
    func_0x000299d1();
    local_e = (undefined2 ****)*(undefined2 *)0xa93a;
    ppppuStack_10 = (undefined2 ****)*(undefined2 *)0xa938;
    puStack_12 = (undefined2 *)*(undefined2 *)0xa936;
    pppiStack_14 = (int ***)*(undefined2 *)0xa934;
    uStack_16 = 0;
    pppiStack_18 = (int ***)0x22b2;
    pppiStack_1a = (int ***)0xf3ed;
    func_0x0001e558();
    ppppiStack_6 = (int ****)0x1bb4;
    ppppiStack_8 = (int ****)0xf3f7;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf400;
    FUN_28b3_100d();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf409;
    func_0x00029983();
    local_a6 = local_11e;
    local_a4 = local_11c;
    local_11a = local_130;
    local_118 = local_12e;
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf432;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf43b;
    func_0x00029bb5();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf444;
    func_0x00029983();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf44d;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf456;
    func_0x00029bb5();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf45f;
    func_0x00029983();
    local_9e = local_12c;
    local_9c = local_12a;
    local_112 = local_19e;
    local_110 = local_19c;
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf488;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf491;
    FUN_28b3_100d();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf49a;
    func_0x00029983();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf4a3;
    func_0x000297e6();
    ppppiStack_6 = (int ****)0x22b2;
    ppppiStack_8 = (int ****)0xf4ac;
    FUN_28b3_100d();
    ppppiStack_6 = (int ****)0x22b2;
    pppiVar12 = (int ***)0x22b2;
    ppppiStack_8 = (int ****)0xf4b5;
    func_0x00029983();
    ppppiStack_6 = (int ****)&local_11a;
    ppppiStack_8 = (int ****)&local_a6;
    ppppuStack_a = (undefined2 ****)0x22b2;
    puStack_c = (undefined2 *)0xf4c3;
    FUN_3ab8_4289();
    local_1aa = local_1ca;
    local_1a8 = local_1c8;
    local_1ae = local_1d4;
    local_1ac = local_1d2;
  }
  goto LAB_3ab8_4635;
}



/* 3ab8:4c91  FUN_3ab8_4c91  1435 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_3ab8_4c91(void)

{
  int *piVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  int unaff_BP;
  undefined2 *puVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  char *pcStack_a;
  int iStack_8;
  int iStack_6;
  uint uStack_4;
  int iStack_2;
  
  iStack_2 = 0x3ab8;
  uStack_4 = 0xf81a;
  func_0x00029983();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf823;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf82c;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf835;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf83a;
  FUN_28b3_1181();
  if ((bool)in_CF) {
    iStack_2 = 0x22b2;
    uStack_4 = 0xf845;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xf84e;
    func_0x00029bb5();
    iStack_2 = 0x22b2;
    uStack_4 = 0xf857;
    func_0x00029983();
  }
  iStack_2 = 0x22b2;
  uStack_4 = 0xf860;
  func_0x00029834();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf869;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf872;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf87b;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf884;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf889;
  FUN_28b3_1172();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf891;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf896;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf89b;
  FUN_28b3_1181();
  if ((bool)in_CF) {
    uVar7 = *(undefined2 *)0xa966;
    *(undefined2 *)(unaff_BP + -0x54) = *(undefined2 *)0xa964;
    *(undefined2 *)(unaff_BP + -0x52) = uVar7;
  }
  iStack_2 = 0x22b2;
  uStack_4 = 0xf8b2;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf8bb;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf8c0;
  FUN_28b3_1181();
  if ((bool)in_CF) {
    uVar7 = *(undefined2 *)0xa9ba;
    *(undefined2 *)(unaff_BP + -0x54) = *(undefined2 *)0xa9b8;
    *(undefined2 *)(unaff_BP + -0x52) = uVar7;
  }
  iStack_2 = 0x22b2;
  uStack_4 = 0xf8d8;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf8e0;
  func_0x00029b85();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf8e5;
  func_0x00029d78();
  pcStack_a = (char *)0x22b2;
  iStack_c = -0x711;
  func_0x000299d1();
  pcStack_a = (char *)0x22b2;
  iStack_c = -0x70c;
  FUN_28b3_1582();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf8fe;
  func_0x00029834();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf903;
  uVar7 = FUN_28b3_0f51();
  *(undefined2 *)0xc396 = uVar7;
  iStack_2 = 0x22b2;
  uStack_4 = 0xf90f;
  FUN_28b3_0d8b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf917;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf91c;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf921;
  uVar7 = FUN_28b3_0f51();
  *(undefined2 *)0xc3b8 = uVar7;
  while (30000 < (*(int *)0xc396 + 1) * *(int *)0xc3b8) {
    *(int *)0xc396 = *(int *)0xc396 + -1;
    *(int *)0xc3b8 = *(int *)0xc3b8 + -1;
  }
  iStack_2 = 0x22b2;
  uStack_4 = 0xf944;
  FUN_28b3_0d8b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf94d;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf955;
  FUN_28b3_0ee9();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf95e;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf967;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf970;
  FUN_28b3_0d8b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf979;
  func_0x0002996b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf97e;
  FUN_28b3_1172();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf987;
  func_0x00029983();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf990;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf999;
  FUN_28b3_100d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf9a2;
  func_0x00029b85();
  iStack_2 = 0x22b2;
  uStack_4 = 0xf9ab;
  func_0x00029983();
  uVar7 = *(undefined2 *)0xa98e;
  *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)0xa98c;
  *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
  if (*(int *)(unaff_BP + 6) == 1) {
    uVar7 = *(undefined2 *)0xa9c2;
    *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)0xa9c0;
    *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
  }
  if (*(int *)(unaff_BP + 6) == 2) {
    uVar7 = *(undefined2 *)0xa9c6;
    *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)0xa9c4;
    *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
  }
  uVar14 = *(uint *)(unaff_BP + 6) < 3;
  uVar15 = false;
  if (*(uint *)(unaff_BP + 6) == 3) {
    uVar7 = *(undefined2 *)0xa94e;
    *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)0xa94c;
    *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
    if (*(int *)(unaff_BP + -0x1ca) == 2) {
      uVar7 = *(undefined2 *)0xa9ca;
      *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)0xa9c8;
      *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
    }
    if (*(int *)(unaff_BP + -0x1ca) == 3) {
      uVar7 = *(undefined2 *)0xa966;
      *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)0xa964;
      *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
    }
    uVar14 = *(uint *)(unaff_BP + -0x1ca) < 4;
    uVar15 = *(uint *)(unaff_BP + -0x1ca) == 4;
    if ((bool)uVar15) {
      uVar7 = *(undefined2 *)0xa9ce;
      *(undefined2 *)(unaff_BP + -0xac) = *(undefined2 *)0xa9cc;
      *(undefined2 *)(unaff_BP + -0xaa) = uVar7;
    }
  }
  iStack_2 = 0x22b2;
  uStack_4 = 0xfa44;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfa4d;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfa52;
  FUN_28b3_1181();
  if (!(bool)uVar14 && !(bool)uVar15) {
    uVar7 = *(undefined2 *)(unaff_BP + -0xaa);
    *(undefined2 *)0x7582 = *(undefined2 *)(unaff_BP + -0xac);
    *(undefined2 *)0x7584 = uVar7;
    iStack_2 = 0x22b2;
    uStack_4 = 0xfa6c;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfa75;
    FUN_28b3_100d();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfa7e;
    func_0x00029b85();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfa83;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfa88;
    uVar7 = FUN_28b3_0f51();
    *(undefined2 *)0xc396 = uVar7;
  }
  iStack_2 = 0x22b2;
  uStack_4 = 0xfa94;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfa9d;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfaa2;
  FUN_28b3_1181();
  if (!(bool)uVar14 && !(bool)uVar15) {
    uVar7 = *(undefined2 *)(unaff_BP + -0xaa);
    *(undefined2 *)0x7586 = *(undefined2 *)(unaff_BP + -0xac);
    *(undefined2 *)0x7588 = uVar7;
    iStack_2 = 0x22b2;
    uStack_4 = 0xfabc;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfac5;
    FUN_28b3_100d();
    iStack_2 = 0x22b2;
    uStack_4 = 0xface;
    func_0x00029b85();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfad3;
    func_0x00029d78();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfad8;
    uVar7 = FUN_28b3_0f51();
    *(undefined2 *)0xc3b8 = uVar7;
  }
  iStack_2 = 0x22b2;
  uStack_4 = 0xfae4;
  FUN_28b3_0d8b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfaed;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfaf6;
  func_0x00029bb5();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfaff;
  func_0x00029983();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb08;
  FUN_28b3_0d8b();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb11;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb1a;
  func_0x00029bb5();
  iStack_2 = 0x22b2;
  uStack_4 = 0xfb23;
  func_0x00029983();
  iStack_2 = 0;
  uStack_4 = 0x22b2;
  iStack_6 = 0xfb2b;
  func_0x0000daa6();
  iStack_2 = *(undefined2 *)0xcb4;
  uStack_4 = *(undefined2 *)0xcb2;
  iStack_6 = 0;
  iStack_8 = 3;
  pcStack_a = (char *)0x885;
  iStack_c = -0x4c0;
  func_0x0000f2cb();
  iStack_2 = 0xdef;
  uVar7 = 0x885;
  uStack_4 = 0xfb48;
  func_0x0000a799();
  if (*(int *)(unaff_BP + 6) == 3) {
    iStack_2 = 0x885;
    uStack_4 = 0xfb5a;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfb5f;
    func_0x00029d78();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x497;
    func_0x000299d1();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x48e;
    func_0x000297e6();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x489;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfb81;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfb89;
    puVar8 = (undefined2 *)FUN_1def_05d1();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0xa4) = *puVar8;
    *(undefined2 *)(unaff_BP + -0xa2) = uVar7;
    iStack_2 = 0x1bb4;
    uStack_4 = 0xfba4;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfba9;
    func_0x00029d78();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x44d;
    func_0x000299d1();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x444;
    func_0x000297e6();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x43f;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfbcb;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfbd3;
    puVar8 = (undefined2 *)func_0x0001e558();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0x118) = *puVar8;
    *(undefined2 *)(unaff_BP + -0x116) = uVar7;
    iStack_2 = 0x1bb4;
    uStack_4 = 0xfbee;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfbf3;
    func_0x00029d78();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x403;
    func_0x000299d1();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x3fa;
    func_0x000297e6();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x3f5;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfc15;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfc1d;
    puVar8 = (undefined2 *)FUN_1def_05d1();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0xa0) = *puVar8;
    *(undefined2 *)(unaff_BP + -0x9e) = uVar7;
    iStack_2 = 0x1bb4;
    uStack_4 = 0xfc38;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfc3d;
    func_0x00029d78();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x3b9;
    func_0x000299d1();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x3b0;
    func_0x000297e6();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x3ab;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfc5f;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfc67;
    puVar8 = (undefined2 *)func_0x0001e558();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0x114) = *puVar8;
    *(undefined2 *)(unaff_BP + -0x112) = uVar7;
    iStack_2 = 0x1bb4;
    uStack_4 = 0xfc82;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfc87;
    func_0x00029d78();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x36f;
    func_0x000299d1();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x366;
    func_0x000297e6();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x361;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfca9;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfcb1;
    puVar8 = (undefined2 *)FUN_1def_05d1();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0x9c) = *puVar8;
    *(undefined2 *)(unaff_BP + -0x9a) = uVar7;
    iStack_2 = 0x1bb4;
    uStack_4 = 0xfccc;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfcd1;
    func_0x00029d78();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x325;
    func_0x000299d1();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x31c;
    func_0x000297e6();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x317;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfcf3;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfcfb;
    puVar8 = (undefined2 *)func_0x0001e558();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0x110) = *puVar8;
    *(undefined2 *)(unaff_BP + -0x10e) = uVar7;
    iStack_2 = 0x1bb4;
    uStack_4 = 0xfd16;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfd1b;
    func_0x00029d78();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x2db;
    func_0x000299d1();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x2d2;
    func_0x000297e6();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x2cd;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfd3d;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfd45;
    puVar8 = (undefined2 *)FUN_1def_05d1();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0x98) = *puVar8;
    *(undefined2 *)(unaff_BP + -0x96) = uVar7;
    iStack_2 = 0x1bb4;
    uStack_4 = 0xfd60;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    uStack_4 = 0xfd65;
    func_0x00029d78();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x291;
    func_0x000299d1();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x288;
    func_0x000297e6();
    pcStack_a = (char *)0x22b2;
    iStack_c = -0x283;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfd87;
    func_0x000299d1();
    uStack_12 = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xfd8f;
    puVar8 = (undefined2 *)func_0x0001e558();
    uVar7 = puVar8[1];
    *(undefined2 *)(unaff_BP + -0x10c) = *puVar8;
    *(undefined2 *)(unaff_BP + -0x10a) = uVar7;
    iStack_2 = 0x1bb4;
    uVar7 = 0x1b6e;
    uStack_4 = 0xfda6;
    FUN_1885_2ec3();
    iStack_2 = unaff_BP + -0x118;
    uStack_4 = unaff_BP + -0xa4;
    iStack_6 = 0x1b6e;
    iStack_8 = 0xfdb4;
    FUN_3ab8_4289();
  }
  uStack_4 = 0xfdbb;
  iStack_2 = uVar7;
  func_0x0000c3ca();
  iStack_2 = 1;
  uStack_4 = 0x1c;
  iStack_6 = 0x885;
  iStack_8 = 0xfdc8;
  FUN_1000_0599();
  iStack_2 = 0x8a6;
  uStack_4 = 0xdef;
  iStack_6 = 0xfdd3;
  func_0x00012276();
  iStack_2 = 0;
  uStack_4 = 0x11f2;
  iStack_6 = 0xfddc;
  func_0x0000daa6();
  iStack_2 = *(undefined2 *)0xcb4;
  uStack_4 = 1 - *(int *)0xcb2;
  iStack_6 = 0;
  iStack_8 = 3;
  pcStack_a = (char *)0x885;
  uVar7 = 0xdef;
  iStack_c = -0x20b;
  func_0x0000f2cb();
  *(undefined2 *)(unaff_BP + -0x122) = 1;
  while (*(int *)(unaff_BP + -0x122) <= *(int *)0xc3b8) {
    *(undefined2 *)(*(int *)(unaff_BP + -0x122) * 2 + (int)*(undefined4 *)0xb37a) = 0xfff7;
    *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
  }
  *(undefined2 *)(unaff_BP + -0x122) = 1;
  while (iVar9 = *(int *)(unaff_BP + -0x122), iVar9 <= *(int *)0xc3b8) {
    *(int *)(iVar9 * 2 + (int)*(undefined4 *)0xbef2) = (iVar9 + -1) * (*(int *)0xc396 + 1);
    *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
  }
  *(undefined2 *)(unaff_BP + -0x122) = 1;
  uVar12 = *(undefined2 *)0xb48e;
  do {
    *(undefined2 *)(*(int *)(unaff_BP + -0x122) * 2 + *(int *)0xb48c) = 0;
    *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
  } while (*(int *)(unaff_BP + -0x122) < 0x7919);
  iStack_2 = *(undefined2 *)(unaff_BP + 0x2a);
  uStack_4 = *(undefined2 *)(unaff_BP + 0x28);
  iStack_6 = *(undefined2 *)(unaff_BP + 0x24);
  iStack_8 = *(undefined2 *)(unaff_BP + 0x22);
  pcStack_a = (char *)*(undefined2 *)(unaff_BP + 0x20);
  iStack_c = *(int *)(unaff_BP + 0x1e);
  iStack_e = *(undefined2 *)(unaff_BP + 0x1c);
  uStack_10 = *(undefined2 *)(unaff_BP + 10);
  uStack_12 = *(undefined2 *)(unaff_BP + 8);
  uStack_14 = *(undefined2 *)0xa93a;
  uStack_16 = *(undefined2 *)0xa938;
  uStack_18 = *(undefined2 *)0xa936;
  uStack_1a = *(undefined2 *)0xa934;
  uStack_1c = *(undefined2 *)0xa93a;
  uStack_1e = *(undefined2 *)0xa938;
  uStack_20 = *(undefined2 *)0xa936;
  uStack_22 = *(undefined2 *)0xa934;
  uStack_26 = 0xdef;
  uStack_28 = 0xfeab;
  iVar9 = FUN_3ab8_19bd();
  *(int *)(unaff_BP + -0x1a0) = iVar9;
  if (iVar9 < 0) {
    while( true ) {
      uStack_4 = 0x13b;
      iStack_2 = uVar7;
      FUN_32b2_6eb1();
      iStack_2 = *(undefined2 *)(unaff_BP + -0xb6);
      uStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
      pcStack_a = (char *)0x32b2;
      iStack_c = 0x150;
      FUN_32b2_75ec();
      uVar15 = &stack0x0000 == (undefined1 *)0x2;
      uStack_4 = 0x32b2;
      iStack_6 = 0x15a;
      FUN_32b2_6d14();
      uStack_4 = 0x32b2;
      iStack_6 = 0x162;
      FUN_32b2_704d();
      uStack_4 = 0x32b2;
      iStack_6 = 0x16a;
      FUN_32b2_7095();
      uStack_4 = 0x32b2;
      iStack_6 = 0x173;
      FUN_32b2_6eb1();
      uStack_4 = 0x32b2;
      iStack_6 = 0x17b;
      FUN_32b2_6cc6();
      uStack_4 = 0x32b2;
      iStack_6 = 0x183;
      FUN_32b2_6cc6();
      uStack_4 = 0x32b2;
      iStack_6 = 0x188;
      FUN_32b2_7191();
      if ((bool)uVar15) {
        uStack_4 = 0x32b2;
        iStack_6 = 0x192;
        FUN_32b2_6cc6();
        uStack_4 = 0x32b2;
        iStack_6 = 0x19a;
        FUN_32b2_6cc6();
        uStack_4 = 0x32b2;
        iStack_6 = 0x19f;
        FUN_32b2_7191();
        if ((bool)uVar15) {
          return 0;
        }
      }
      uStack_4 = unaff_BP + -0xa8;
      iStack_6 = unaff_BP + -0x1c;
      iStack_8 = *(undefined2 *)(unaff_BP + -0x7c);
      pcStack_a = (char *)*(undefined2 *)(unaff_BP + -0x7e);
      iStack_c = *(int *)(unaff_BP + -0x80);
      iStack_e = *(undefined2 *)(unaff_BP + -0x82);
      uStack_10 = *(undefined2 *)(unaff_BP + -0x58);
      uStack_12 = *(undefined2 *)(unaff_BP + -0x5a);
      uStack_14 = *(undefined2 *)(unaff_BP + -0x5c);
      uStack_16 = *(undefined2 *)(unaff_BP + -0x5e);
      uStack_18 = 0x32b2;
      uStack_1a = 0x1d0;
      FUN_32b2_6cc6();
      uStack_18 = 0x32b2;
      uStack_1a = 0x1d5;
      FUN_32b2_7258();
      uStack_20 = 0x32b2;
      uStack_22 = 0x1df;
      FUN_32b2_6eb1();
      uStack_20 = 0x32b2;
      uStack_22 = 0x1e7;
      FUN_32b2_6cc6();
      uStack_20 = 0x32b2;
      uStack_22 = 0x1ec;
      FUN_32b2_7258();
      uStack_28 = 0x32b2;
      uStack_2a = 0x1f6;
      FUN_32b2_6eb1();
      uStack_28 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
      uStack_2a = 0x1fa;
      iVar9 = func_0x0003fb3d();
      if (iVar9 == 0) break;
      uStack_4 = 0x32b2;
      iStack_6 = 0x209;
      FUN_32b2_6cc6();
      uStack_4 = 0x32b2;
      iStack_6 = 0x20e;
      FUN_32b2_7258();
      uStack_4 = 0x32b2;
      iStack_6 = 0x216;
      FUN_32b2_6e99();
      uStack_4 = 0x32b2;
      iStack_6 = 0x21e;
      FUN_32b2_6ef9();
      uStack_4 = unaff_BP + -0xb4;
      iStack_6 = unaff_BP + -0xa4;
      iStack_8 = 0x32b2;
      pcStack_a = (char *)0x231;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      pcStack_a = (char *)0x236;
      FUN_32b2_7258();
      uStack_10 = 0x32b2;
      uStack_12 = 0x240;
      FUN_32b2_6eb1();
      uStack_10 = 0x32b2;
      uStack_12 = 0x248;
      FUN_32b2_6cc6();
      uStack_10 = 0x32b2;
      uStack_12 = 0x24d;
      FUN_32b2_7258();
      uStack_18 = 0x32b2;
      uStack_1a = 599;
      FUN_32b2_6eb1();
      uStack_18 = 0x32b2;
      uStack_1a = 0x25f;
      FUN_32b2_6d14();
      uStack_20 = 0x32b2;
      uStack_22 = 0x269;
      FUN_32b2_6eb1();
      uStack_20 = 0x32b2;
      uStack_22 = 0x271;
      FUN_32b2_6cc6();
      uStack_20 = 0x32b2;
      uStack_22 = 0x276;
      FUN_32b2_7258();
      uStack_20 = 0x32b2;
      uStack_22 = 0x27e;
      FUN_32b2_6e99();
      uStack_28 = 0x32b2;
      uStack_2a = 0x288;
      FUN_32b2_6eb1();
      uStack_28 = 0x32b2;
      uStack_2a = 0x290;
      FUN_32b2_6cc6();
      uStack_28 = 0x32b2;
      uStack_2a = 0x295;
      FUN_32b2_7258();
      uStack_30 = 0x32b2;
      uStack_32 = 0x29f;
      FUN_32b2_6eb1();
      uStack_30 = 0x32b2;
      uStack_32 = 0x2a7;
      FUN_32b2_6cc6();
      uStack_30 = 0x32b2;
      uStack_32 = 0x2ac;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
      func_0x0003fc09(0x32b2,1);
      uStack_4 = unaff_BP + -0xe4;
      iStack_6 = unaff_BP + -0xd0;
      iStack_8 = 0x32b2;
      pcStack_a = (char *)0x2d4;
      FUN_32b2_6cc6();
      iStack_8 = 0x32b2;
      pcStack_a = (char *)0x2d9;
      FUN_32b2_7258();
      uStack_10 = 0x32b2;
      uStack_12 = 0x2e3;
      FUN_32b2_6eb1();
      uStack_10 = 0x32b2;
      uStack_12 = 0x2eb;
      FUN_32b2_6cc6();
      uStack_10 = 0x32b2;
      uStack_12 = 0x2f0;
      FUN_32b2_7258();
      uStack_18 = 0x32b2;
      uStack_1a = 0x2fa;
      FUN_32b2_6eb1();
      uStack_18 = 0x32b2;
      uStack_1a = 0x302;
      FUN_32b2_6d14();
      uStack_20 = 0x32b2;
      uStack_22 = 0x30c;
      FUN_32b2_6eb1();
      uStack_20 = 0x32b2;
      uStack_22 = 0x314;
      FUN_32b2_6d14();
      uStack_28 = 0x32b2;
      uStack_2a = 0x31e;
      FUN_32b2_6eb1();
      uStack_28 = 0x32b2;
      uStack_2a = 0x326;
      FUN_32b2_6cc6();
      uStack_28 = 0x32b2;
      uStack_2a = 0x32b;
      FUN_32b2_7258();
      uStack_30 = 0x32b2;
      uStack_32 = 0x335;
      FUN_32b2_6eb1();
      uStack_30 = 0x32b2;
      uStack_32 = 0x33d;
      FUN_32b2_6cc6();
      uStack_30 = 0x32b2;
      uStack_32 = 0x342;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
      func_0x0003fc09(0x32b2,1);
      uVar15 = (undefined1 *)0xffc9 < &uStack_34;
      uVar14 = &stack0x0000 == (undefined1 *)0xfffe;
      iStack_2 = 0x360;
      FUN_32b2_6cc6();
      iStack_2 = 0x369;
      FUN_32b2_701d();
      iStack_2 = 0x36e;
      FUN_32b2_7258();
      iStack_2 = 0x376;
      FUN_32b2_6e99();
      iStack_2 = 0x37e;
      FUN_32b2_6ef9();
      iStack_2 = 0x387;
      FUN_32b2_6cc6();
      iStack_2 = 0x390;
      FUN_32b2_701d();
      iStack_2 = 0x395;
      FUN_32b2_7258();
      iStack_2 = 0x39e;
      FUN_32b2_6e99();
      iStack_2 = 0x3a6;
      FUN_32b2_6ef9();
      iStack_2 = 0x3af;
      FUN_32b2_6d14();
      iStack_2 = 0x3b4;
      FUN_32b2_6fc7();
      iStack_2 = 0x3bc;
      FUN_32b2_6d14();
      iStack_2 = 0x3c1;
      FUN_32b2_6fc7();
      iStack_2 = 0x3ca;
      FUN_32b2_710c();
      iStack_2 = 0x3cf;
      FUN_32b2_7191();
      if (!(bool)uVar15 && !(bool)uVar14) {
        iStack_2 = 0x3da;
        FUN_32b2_6d14();
        iStack_2 = 0x3e2;
        FUN_32b2_6d14();
        iStack_2 = 999;
        FUN_32b2_7191();
        if (!(bool)uVar14) {
          iStack_2 = 0x431;
          FUN_32b2_6d14();
          iStack_2 = 0x439;
          FUN_32b2_7124();
          iStack_2 = 0x441;
          FUN_32b2_6e99();
          iStack_2 = 0x44a;
          FUN_32b2_704d();
          iStack_2 = 0x453;
          FUN_32b2_7035();
          iStack_2 = 0x45c;
          FUN_32b2_6e99();
          iStack_2 = 0x464;
          FUN_32b2_6eb1();
          iStack_2 = 0x46c;
          FUN_32b2_6d14();
          iStack_2 = 0x474;
          FUN_32b2_710c();
          iStack_2 = 0x47c;
          FUN_32b2_710c();
          iStack_2 = 0x484;
          FUN_32b2_710c();
          iStack_2 = 0x48c;
          FUN_32b2_6d14();
          iStack_2 = 0x494;
          FUN_32b2_710c();
          iStack_2 = 0x49d;
          FUN_32b2_6e99();
          iStack_2 = 0x4a2;
          FUN_32b2_718c();
          iStack_2 = 0x4ab;
          FUN_32b2_6e99();
          iStack_2 = 0x4b3;
          FUN_32b2_6eb1();
          iStack_2 = 0x4bc;
          FUN_32b2_6d14();
          iStack_2 = 0x4c4;
          FUN_32b2_710c();
          iStack_2 = 0x4cd;
          FUN_32b2_710c();
          iStack_2 = 0x4d5;
          FUN_32b2_710c();
          iStack_2 = 0x4dd;
          FUN_32b2_710c();
          iStack_2 = 0x4e6;
          FUN_32b2_6e99();
          iStack_2 = 0x4ee;
          FUN_32b2_6eb1();
          iStack_2 = 0x4f7;
          FUN_32b2_6d14();
          iStack_2 = 0x500;
          FUN_32b2_710c();
          iStack_2 = 0x509;
          FUN_32b2_70dc();
          iStack_2 = 0x511;
          FUN_32b2_710c();
          iStack_2 = 0x519;
          FUN_32b2_710c();
          iStack_2 = 0x522;
          FUN_32b2_6e99();
          iStack_2 = 0x52b;
          FUN_32b2_6eb1();
          iStack_2 = 0x534;
          FUN_32b2_6d14();
          iStack_2 = 0x53d;
          FUN_32b2_710c();
          iStack_2 = 0x546;
          FUN_32b2_710c();
          iStack_2 = 0x54f;
          FUN_32b2_6d14();
          iStack_2 = 0x558;
          FUN_32b2_710c();
          iStack_2 = 0x55d;
          FUN_32b2_718c();
          iStack_2 = 0x566;
          FUN_32b2_6eb1();
          iStack_2 = 0x56f;
          FUN_32b2_6d14();
          iStack_2 = 0x574;
          FUN_32b2_6fd6();
          iStack_2 = 0x57d;
          FUN_32b2_6d14();
          iStack_2 = 0x586;
          FUN_32b2_710c();
          iStack_2 = 0x58b;
          FUN_32b2_7182();
          iStack_2 = 0x594;
          FUN_32b2_6e99();
          iStack_2 = 0x59c;
          FUN_32b2_710c();
          iStack_2 = 0x5a5;
          FUN_32b2_7154();
          iStack_2 = 0x5ae;
          FUN_32b2_6e99();
          iStack_2 = 0x5b7;
          FUN_32b2_6eb1();
          iStack_2 = 0x5c0;
          FUN_32b2_6d14();
          iStack_2 = 0x5c9;
          FUN_32b2_6eb1();
          iStack_2 = unaff_BP + -0x62;
          uStack_4 = 0x32b2;
          iStack_6 = 0x5db;
          FUN_32b2_6cc6();
          uStack_4 = 0x32b2;
          iStack_6 = 0x5e0;
          FUN_32b2_7258();
          iStack_c = 0x32b2;
          iStack_e = 0x5ea;
          FUN_32b2_6eb1();
          iStack_c = 0x32b2;
          iStack_e = 0x5f2;
          FUN_32b2_6cc6();
          iStack_c = 0x32b2;
          iStack_e = 0x5f7;
          FUN_32b2_7258();
          uStack_14 = 0x32b2;
          uStack_16 = 0x601;
          FUN_32b2_6eb1();
          uStack_14 = *(undefined2 *)(unaff_BP + -100);
          uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
          uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
          uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4e);
          uStack_26 = 0x622;
          FUN_32b2_6d14();
          uStack_2c = 0x32b2;
          uStack_2e = 0x62c;
          FUN_32b2_6eb1();
          uStack_2c = 0x32b2;
          uStack_2e = 0x635;
          FUN_32b2_6d14();
          uStack_34 = 0x32b2;
          uStack_36 = 0x63f;
          FUN_32b2_6eb1();
          uStack_34 = 0;
          uStack_36 = 0x32b2;
                    /* WARNING: Call to offcut address within same function */
          func_0x0003fc09();
          uVar7 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar7;
          uVar7 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
          iStack_2 = unaff_BP + -0x86;
          puVar13 = &uStack_22;
          puVar8 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar4 = puVar13;
            puVar13 = puVar13 + 1;
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar4 = *puVar3;
          }
          uStack_26 = 0x684;
          iVar9 = FUN_3ab8_522f();
          uVar15 = 0;
          uVar14 = iVar9 == 0;
          if (!(bool)uVar14) {
            iStack_2 = 0x694;
            FUN_32b2_6d14();
            iStack_2 = 0x69d;
            FUN_32b2_6cc6();
            iStack_2 = 0x6a5;
            FUN_32b2_701d();
            iStack_2 = 0x6aa;
            FUN_32b2_6fc7();
            iStack_2 = 0x6af;
            FUN_32b2_7258();
            iStack_2 = 0x6b4;
            FUN_32b2_7191();
            if ((bool)uVar15 || (bool)uVar14) {
              iStack_2 = 0x6bf;
              FUN_32b2_6d14();
              iStack_2 = 0x6c8;
              FUN_32b2_6cc6();
              iStack_2 = 0x6d1;
              FUN_32b2_701d();
              iStack_2 = 0x6d6;
              FUN_32b2_6fc7();
              iStack_2 = 0x6db;
              FUN_32b2_7258();
              iStack_2 = 0x6e0;
              FUN_32b2_7191();
              if ((bool)uVar15 || (bool)uVar14) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
            }
          }
          iStack_2 = 0x6f8;
          FUN_32b2_6d14();
          iStack_2 = 0x700;
          FUN_32b2_6d14();
          iStack_2 = 0x708;
          FUN_32b2_710c();
          iStack_2 = 0x711;
          FUN_32b2_710c();
          iStack_2 = 0x71a;
          FUN_32b2_7154();
          iStack_2 = 0x71f;
          FUN_32b2_7191();
          if (!(bool)uVar15) {
            iStack_2 = 0x72d;
            FUN_32b2_6d14();
            iStack_2 = 0x732;
            FUN_32b2_6fc7();
            iStack_2 = 0x73a;
            FUN_32b2_6d14();
            iStack_2 = 0x742;
            FUN_32b2_710c();
            iStack_2 = 0x74b;
            FUN_32b2_710c();
            iStack_2 = 0x750;
            FUN_32b2_7191();
            if (!(bool)uVar15) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            iStack_2 = *(undefined2 *)(unaff_BP + -0xb8);
            uStack_4 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
            iStack_8 = 0x32b2;
            pcStack_a = (char *)0x774;
            FUN_32b2_7592();
            iStack_2 = 0x32b2;
            uStack_4 = 0x77e;
            FUN_32b2_6d14();
            iStack_2 = 0x32b2;
            uStack_4 = 0x786;
            FUN_32b2_70dc();
            iStack_2 = 0x32b2;
            uStack_4 = 0x78e;
            FUN_32b2_6d14();
            iStack_2 = 0x32b2;
            uStack_4 = 0x797;
            FUN_32b2_710c();
            iStack_2 = 0x32b2;
            uStack_4 = 0x79c;
            FUN_32b2_7182();
            iStack_2 = 0x32b2;
            uStack_4 = 0x7a5;
            FUN_32b2_6e99();
            iStack_2 = 0x32b2;
            uStack_4 = 0x7ad;
            FUN_32b2_710c();
            iStack_2 = 0x32b2;
            uStack_4 = 0x7b5;
            FUN_32b2_7154();
            iStack_2 = 0x32b2;
            uStack_4 = 0x7be;
            FUN_32b2_6e99();
            iStack_2 = 0x32b2;
            uStack_4 = 0x7c7;
            FUN_32b2_6eb1();
            iStack_2 = unaff_BP + -0x8a;
            uStack_4 = unaff_BP + -0x62;
            iStack_6 = 0x32b2;
            iStack_8 = 0x7d9;
            FUN_32b2_6cc6();
            iStack_6 = 0x32b2;
            iStack_8 = 0x7de;
            FUN_32b2_7258();
            iStack_e = 0x32b2;
            uStack_10 = 0x7e8;
            FUN_32b2_6eb1();
            iStack_e = 0x32b2;
            uStack_10 = 0x7f0;
            FUN_32b2_6cc6();
            iStack_e = 0x32b2;
            uStack_10 = 0x7f5;
            FUN_32b2_7258();
            uStack_16 = 0x32b2;
            uStack_18 = 0x7ff;
            FUN_32b2_6eb1();
            uStack_16 = *(undefined2 *)(unaff_BP + -100);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_26 = 0x32b2;
            uStack_28 = 0x820;
            FUN_32b2_6d14();
            uStack_2e = 0x32b2;
            uStack_30 = 0x82a;
            FUN_32b2_6eb1();
            uStack_2e = 0x32b2;
            uStack_30 = 0x833;
            FUN_32b2_6d14();
            uStack_36 = 0x32b2;
            FUN_32b2_6eb1();
            uStack_36 = 0;
                    /* WARNING: Call to offcut address within same function */
            func_0x0003fc09(0x32b2);
            uVar15 = (undefined1 *)0xffc9 < &uStack_36;
            uVar14 = &stack0x0000 == (undefined1 *)0x0;
            iStack_2 = 0x32b2;
            uStack_4 = 0x84f;
            FUN_32b2_6cc6();
            iStack_2 = 0x32b2;
            uStack_4 = 0x857;
            FUN_32b2_6cc6();
            iStack_2 = 0x32b2;
            uStack_4 = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar14) {
              uVar7 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar7;
            }
            iStack_2 = 0x32b2;
            uStack_4 = 0x872;
            FUN_32b2_6cc6();
            iStack_2 = 0x32b2;
            uStack_4 = 0x87a;
            FUN_32b2_6cc6();
            iStack_2 = 0x32b2;
            uStack_4 = 0x87f;
            FUN_32b2_7191();
            if ((bool)uVar14) {
              uVar7 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar7;
            }
            uVar7 = *(undefined2 *)(unaff_BP + -0x60);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
            puVar8[1] = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -0x88);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar8[1] = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -0x60);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
            puVar8[1] = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -0x88);
            puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar8[1] = uVar7;
            piVar1 = (int *)(unaff_BP + -0x36);
            *piVar1 = *piVar1 + 1;
            uVar14 = *piVar1 == 0;
            iStack_2 = 0x32b2;
            uStack_4 = 0x8d7;
            FUN_32b2_6d14();
            iStack_2 = 0x32b2;
            uStack_4 = 0x8e0;
            FUN_32b2_6d14();
            iStack_2 = 0x32b2;
            uStack_4 = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar15 && !(bool)uVar14) {
              iStack_2 = *(undefined2 *)(unaff_BP + -0xb6);
              uStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_6 = *(undefined2 *)(unaff_BP + -0xba);
              iStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
              pcStack_a = (char *)0x32b2;
              iStack_c = 0x8ff;
              FUN_32b2_7592();
              uStack_4 = 0x32b2;
              iStack_6 = 0x909;
              FUN_32b2_6d14();
              uStack_4 = 0x32b2;
              iStack_6 = 0x911;
              FUN_32b2_7154();
              uStack_4 = 0x32b2;
              iStack_6 = 0x916;
              FUN_32b2_6fd6();
              uStack_4 = 0x32b2;
              iStack_6 = 0x91e;
              FUN_32b2_6d14();
              uStack_4 = 0x32b2;
              iStack_6 = 0x927;
              FUN_32b2_710c();
              uStack_4 = 0x32b2;
              iStack_6 = 0x92c;
              FUN_32b2_7182();
              uStack_4 = 0x32b2;
              iStack_6 = 0x935;
              FUN_32b2_6e99();
              uStack_4 = 0x32b2;
              iStack_6 = 0x93d;
              FUN_32b2_710c();
              uStack_4 = 0x32b2;
              iStack_6 = 0x945;
              FUN_32b2_7154();
              uStack_4 = 0x32b2;
              iStack_6 = 0x94e;
              FUN_32b2_6e99();
              uStack_4 = 0x32b2;
              iStack_6 = 0x957;
              FUN_32b2_6eb1();
              uStack_4 = unaff_BP + -0x8a;
              iStack_6 = unaff_BP + -0x62;
              iStack_8 = 0x32b2;
              pcStack_a = (char *)0x969;
              FUN_32b2_6cc6();
              iStack_8 = 0x32b2;
              pcStack_a = (char *)0x96e;
              FUN_32b2_7258();
              uStack_10 = 0x32b2;
              uStack_12 = 0x978;
              FUN_32b2_6eb1();
              uStack_10 = 0x32b2;
              uStack_12 = 0x980;
              FUN_32b2_6cc6();
              uStack_10 = 0x32b2;
              uStack_12 = 0x985;
              FUN_32b2_7258();
              uStack_18 = 0x32b2;
              uStack_1a = 0x98f;
              FUN_32b2_6eb1();
              uStack_18 = *(undefined2 *)(unaff_BP + -100);
              uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
              uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
              uStack_28 = 0x32b2;
              uStack_2a = 0x9b0;
              FUN_32b2_6d14();
              uStack_30 = 0x32b2;
              uStack_32 = 0x9ba;
              FUN_32b2_6eb1();
              uStack_30 = 0x32b2;
              uStack_32 = 0x9c3;
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
              func_0x0003fc09(0x32b2,0);
              uVar15 = &stack0x0000 == (undefined1 *)0x2;
              uStack_4 = 0x32b2;
              iStack_6 = 0x9df;
              FUN_32b2_6cc6();
              uStack_4 = 0x32b2;
              iStack_6 = 0x9e7;
              FUN_32b2_6cc6();
              uStack_4 = 0x32b2;
              iStack_6 = 0x9ec;
              FUN_32b2_7191();
              if ((bool)uVar15) {
                uVar7 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar7;
              }
              uStack_4 = 0x32b2;
              iStack_6 = 0xa02;
              FUN_32b2_6cc6();
              uStack_4 = 0x32b2;
              iStack_6 = 0xa0a;
              FUN_32b2_6cc6();
              uStack_4 = 0x32b2;
              iStack_6 = 0xa0f;
              FUN_32b2_7191();
              if ((bool)uVar15) {
                uVar7 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar7;
              }
              uVar7 = *(undefined2 *)(unaff_BP + -0x60);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x62);
              puVar8[1] = uVar7;
              uVar7 = *(undefined2 *)(unaff_BP + -0x88);
              puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar8 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar8[1] = uVar7;
              *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
            }
            return *(undefined2 *)(unaff_BP + -0x36);
          }
        }
        return 0;
      }
      iStack_2 = 0x3f5;
      FUN_32b2_6d14();
      iStack_2 = 0x32b2;
      uStack_4 = 0x3ff;
      FUN_32b2_7154();
      iStack_2 = 0x405;
      FUN_32b2_6eb1();
      *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
      *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
      *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
      *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
      *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
      *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
      *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
      *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
      *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
      *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
      *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
      iStack_2 = *(undefined2 *)(unaff_BP + -0xb8);
      uStack_4 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
      iStack_8 = 0x32b2;
      pcStack_a = (char *)0x119;
      FUN_32b2_75fe();
      iStack_2 = 0x32b2;
      uStack_4 = 0x123;
      FUN_32b2_6d14();
      iStack_2 = 0x32b2;
      uStack_4 = 299;
      FUN_32b2_704d();
      iStack_2 = 0x32b2;
      uVar7 = 0x32b2;
      uStack_4 = 0x133;
      FUN_32b2_7095();
    }
    return 0;
  }
  iStack_2 = 0xdef;
  uStack_4 = 0xfebd;
  FUN_3ab8_4341();
  *(undefined2 *)0xc11c = 0xb4;
  if (*(int *)(unaff_BP + 6) == 2) {
    *(undefined2 *)0xc11c = 0x3c;
  }
  if (*(int *)(unaff_BP + 6) == 3) {
    *(undefined2 *)0xc11c = 0x14;
    if (*(int *)(unaff_BP + -0x1ca) == 2) {
      *(undefined2 *)0xc11c = 10;
    }
    if (*(int *)(unaff_BP + -0x1ca) == 3) {
      *(undefined2 *)0xc11c = 4;
    }
    if (*(int *)(unaff_BP + -0x1ca) == 4) {
      *(undefined2 *)0xc11c = 2;
    }
  }
  if (*(int *)(unaff_BP + 0x26) == 0) {
    *(undefined2 *)(unaff_BP + -0x1a4) = 0x3840;
  }
  else {
    *(undefined2 *)(unaff_BP + -0x1a4) = 0x2a30;
  }
  uVar15 = (uint)(*(int *)0xc11c / 2) < *(uint *)(unaff_BP + -0x1a4);
  *(int *)(unaff_BP + -0x6e) = *(int *)0xc11c / 2 - *(uint *)(unaff_BP + -0x1a4);
  iStack_2 = 0xdef;
  uStack_4 = 0xff2e;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xff37;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xff3c;
  FUN_28b3_1181();
  if ((bool)uVar15) {
    uVar7 = *(undefined2 *)0x7582;
    uVar12 = *(undefined2 *)0x7584;
  }
  else {
    uVar7 = *(undefined2 *)0x7586;
    uVar12 = *(undefined2 *)0x7588;
  }
  *(undefined2 *)(unaff_BP + -0x126) = uVar7;
  *(undefined2 *)(unaff_BP + -0x124) = uVar12;
  iStack_2 = 0x22b2;
  uStack_4 = 0xff5f;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  uStack_4 = 0xff68;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xff71;
  func_0x00029b6d();
  iStack_2 = 0x22b2;
  uStack_4 = 0xff76;
  func_0x00029d78();
  iStack_2 = 0x22b2;
  uStack_4 = 0xff7f;
  func_0x00029c2c();
  pcStack_a = (char *)0x22b2;
  iStack_c = -0x77;
  func_0x000299d1();
  pcStack_a = (char *)(unaff_BP + -0x6c);
  iStack_c = 0x75c2;
  iStack_e = unaff_BP + -0x4e;
  uStack_10 = 0x22b2;
  uStack_12 = 0xff9a;
  FUN_21f2_3454();
  iStack_2 = 1;
  uStack_4 = 0x3c;
  iStack_6 = 0x22b2;
  iStack_8 = 0xffaa;
  FUN_1000_0599();
  iStack_2 = unaff_BP + -0x4e;
  uStack_4 = 0xdef;
  iStack_6 = 0xffb5;
  func_0x00012276();
  iStack_2 = *(undefined2 *)(unaff_BP + 0x26);
  uStack_4 = *(undefined2 *)(unaff_BP + -0x1a4);
  iStack_6 = 0x11f2;
  iStack_8 = 0xffc1;
  func_0x00031410();
  iStack_2 = *(undefined2 *)0xcb4;
  uStack_4 = 1 - *(int *)0xcb2;
  iStack_6 = 0;
  iStack_8 = 3;
  pcStack_a = (char *)0x11f2;
  iVar9 = 0xdef;
  iStack_c = -0x25;
  func_0x0000f2cb();
  iStack_2 = unaff_BP + -0x8e;
  uStack_4 = unaff_BP + -0x72;
  iStack_6 = unaff_BP + -0x62;
  iStack_8 = unaff_BP + -0x92;
  pcStack_a = (char *)(unaff_BP + -0x76);
  iStack_c = *(int *)(unaff_BP + 0x1a);
  iStack_e = *(undefined2 *)(unaff_BP + 0x18);
  uStack_10 = *(undefined2 *)(unaff_BP + 0x16);
  uStack_12 = *(undefined2 *)(unaff_BP + 0x14);
  uStack_14 = *(undefined2 *)(unaff_BP + 0x12);
  uStack_16 = *(undefined2 *)(unaff_BP + 0x10);
  uStack_18 = *(undefined2 *)(unaff_BP + 0xe);
  uStack_1a = *(undefined2 *)(unaff_BP + 0xc);
  uStack_1c = 0xdef;
  uStack_1e = 0x10;
  FUN_4375_8583();
  *(int *)(unaff_BP + -0x1c2) = *(int *)(unaff_BP + -0x1a4) / -0x3c + 0x17c;
  *(undefined2 *)(unaff_BP + -0x1ce) = *(undefined2 *)(unaff_BP + -0x6e);
  while (*(int *)(unaff_BP + -0x1ce) <= *(int *)(unaff_BP + -0x1a4)) {
    iVar10 = *(int *)(unaff_BP + -0x1ce) / 0x3c + 0x17c;
    *(int *)(unaff_BP + -0x1c4) = iVar10;
    if (iVar10 != *(int *)(unaff_BP + -0x1c2)) {
      iStack_2 = *(undefined2 *)0xcb4;
      uStack_4 = *(undefined2 *)0xcb2;
      iStack_6 = 0;
      iStack_8 = 3;
      iStack_c = 0x1f0;
      pcStack_a = (char *)iVar9;
      func_0x0000f2cb();
      iStack_2 = 0;
      uStack_4 = 0;
      iStack_6 = 2;
      iStack_8 = 6;
      pcStack_a = (char *)0x3c;
      iStack_c = *(int *)(unaff_BP + -0x1c4);
      iStack_e = 0x28;
      uStack_10 = *(undefined2 *)(unaff_BP + -0x1c2);
      uStack_12 = 0xdef;
      uStack_14 = 0x214;
      func_0x0000f350();
      iStack_2 = *(undefined2 *)0xcb4;
      uStack_4 = 1 - *(int *)0xcb2;
      iStack_6 = 0;
      iStack_8 = 3;
      pcStack_a = (char *)0xdef;
      iVar9 = 0xdef;
      iStack_c = 0x22f;
      func_0x0000f2cb();
      *(undefined2 *)(unaff_BP + -0x1c2) = *(undefined2 *)(unaff_BP + -0x1c4);
    }
    *(undefined2 *)(unaff_BP + -0x122) = 1;
    while (*(int *)(unaff_BP + -0x122) <= *(int *)0xc3b8) {
      *(undefined2 *)(*(int *)(unaff_BP + -0x122) * 2 + (int)*(undefined4 *)0xb37a) = 0xfff7;
      *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
    }
    iStack_2 = unaff_BP + -0x7e;
    uStack_4 = unaff_BP + -0x82;
    iStack_8 = 0x5b;
    iStack_6 = iVar9;
    func_0x000297e6();
    iStack_6 = 0x22b2;
    iStack_8 = 0x60;
    func_0x00029d78();
    iStack_e = 0x22b2;
    uStack_10 = 0x6a;
    func_0x000299d1();
    iStack_e = 0x22b2;
    uStack_10 = 0x72;
    func_0x000297e6();
    iStack_e = 0x22b2;
    uStack_10 = 0x77;
    func_0x00029d78();
    uStack_16 = 0x22b2;
    uStack_18 = 0x81;
    func_0x000299d1();
    uStack_16 = 0x22b2;
    uStack_18 = 0x89;
    func_0x000297e6();
    uStack_16 = 0x22b2;
    uStack_18 = 0x8e;
    func_0x00029d78();
    uStack_1e = 0x22b2;
    uStack_20 = 0x98;
    func_0x000299d1();
    uStack_1e = 0x22b2;
    uStack_20 = 0xa1;
    func_0x000297e6();
    uStack_1e = 0x22b2;
    uStack_20 = 0xa6;
    func_0x00029d78();
    uStack_26 = 0x22b2;
    uStack_28 = 0xb0;
    func_0x000299d1();
    uStack_26 = 0x22b2;
    uStack_28 = 0xb8;
    func_0x000297e6();
    uStack_26 = 0x22b2;
    uStack_28 = 0xbd;
    func_0x00029d78();
    uStack_2e = 0x22b2;
    uStack_30 = 199;
    func_0x000299d1();
    uStack_2e = *(undefined2 *)(unaff_BP + -0x1ce);
    uStack_30 = 0x22b2;
    uStack_32 = 0xcf;
    FUN_4375_8709();
    iStack_2 = *(undefined2 *)(unaff_BP + 0x2a);
    uStack_4 = *(undefined2 *)(unaff_BP + 0x28);
    iStack_6 = *(undefined2 *)(unaff_BP + 0x24);
    iStack_8 = *(int *)(unaff_BP + 0x22);
    pcStack_a = (char *)*(int *)(unaff_BP + 0x20);
    iStack_c = *(int *)(unaff_BP + 0x1e);
    iStack_e = *(undefined2 *)(unaff_BP + 0x1c);
    uStack_10 = *(undefined2 *)(unaff_BP + 10);
    uStack_12 = *(undefined2 *)(unaff_BP + 8);
    uStack_14 = 0x22b2;
    uStack_16 = 0xf5;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    uStack_16 = 0xfa;
    func_0x00029d78();
    uStack_1c = 0x22b2;
    uStack_1e = 0x104;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 0x10d;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0x112;
    func_0x00029d78();
    iVar9 = 0x22b2;
    uStack_26 = 0x11c;
    func_0x000299d1();
    uStack_26 = 0x22b2;
    uStack_28 = 0x123;
    iVar10 = FUN_4375_8ded();
    *(int *)(unaff_BP + -0x1a0) = iVar10;
    if (iVar10 < 0) {
LAB_3ab8_55b1:
      iStack_2 = 0;
      iStack_6 = 0x139;
      uStack_4 = iVar9;
      func_0x0000daa6();
      iStack_2 = *(undefined2 *)0xcb4;
      uStack_4 = 1 - *(int *)0xcb2;
      iStack_6 = 0;
      iStack_8 = 3;
      pcStack_a = (char *)0x885;
      iStack_c = 0x152;
      func_0x0000f2cb();
      iStack_2 = 0;
      uStack_4 = 0;
      iStack_6 = 2;
      iStack_8 = 0;
      pcStack_a = (char *)*(undefined2 *)0x1b40;
      iStack_c = *(int *)0x1b3e;
      iStack_e = 0;
      uStack_10 = 0;
      uStack_12 = 0xdef;
      uStack_14 = 0x16f;
      func_0x0000f350();
      *(undefined2 *)0x11c = 1;
      iStack_2 = 0xdef;
      uStack_4 = 0x17d;
      FUN_1885_2ec3();
      iStack_2 = 5;
      uStack_4 = 0x12;
      iStack_6 = 0x1b6e;
      iStack_8 = 0x18a;
      FUN_1000_0599();
      iStack_2 = 0xdef;
      uStack_4 = 0x191;
      func_0x00010526();
      iStack_2 = 0xdef;
      uVar7 = 0x885;
      uStack_4 = 0x196;
      func_0x0000a7c5();
      *(undefined2 *)0xc08 = 0;
      *(undefined2 *)0xbc0 = 1;
      if (*(int *)(unaff_BP + -0x1a0) != -1) {
        if (*(int *)(unaff_BP + -0x1a0) != -2) {
          iStack_2 = 0;
          uStack_4 = 0x885;
          iStack_6 = 0x96d;
          func_0x0001470b();
          return 1;
        }
        iStack_2 = 0x1dc;
        uStack_4 = 0x885;
        iStack_6 = 0x93d;
        func_0x00012276();
        *(undefined2 *)0xc22 = 2;
        iStack_2 = 3;
        uStack_4 = 0x14;
        iStack_6 = 0x11f2;
        iStack_8 = 0x951;
        FUN_1000_0599();
        iStack_2 = 0x402;
        uStack_4 = 0x1de;
        iStack_6 = 0xdef;
        uVar7 = 0x11f2;
        iStack_8 = 0x960;
        func_0x00012276();
      }
      iStack_2 = 0;
      iStack_6 = 0x1b4;
      uStack_4 = uVar7;
      func_0x0001470b();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(unaff_BP + -0x1ce) = *(int *)(unaff_BP + -0x1ce) + *(int *)0xc11c;
  }
  iStack_2 = 0;
  iStack_6 = 0x24b;
  uStack_4 = iVar9;
  func_0x0000daa6();
  iStack_2 = *(undefined2 *)0xcb4;
  uStack_4 = *(undefined2 *)0xcb2;
  iStack_6 = 0;
  iStack_8 = 3;
  pcStack_a = (char *)0x885;
  iStack_c = 0x260;
  func_0x0000f2cb();
  iStack_2 = 0xdef;
  uStack_4 = 0x268;
  func_0x0000a799();
  iStack_2 = 0;
  uStack_4 = 0;
  iStack_6 = 2;
  iStack_8 = 6;
  pcStack_a = (char *)0x3c;
  iStack_c = 0x26c;
  iStack_e = 0x28;
  uStack_10 = 0x8c;
  uStack_12 = 0x885;
  uStack_14 = 0x289;
  func_0x0000f350();
  *(undefined2 *)(unaff_BP + -0x122) = 2;
  do {
    iStack_2 = *(undefined2 *)(unaff_BP + -0x122);
    uStack_4 = 0x12;
    iStack_6 = 0xdef;
    iStack_8 = 0x29f;
    FUN_1000_0599();
    iStack_2 = 0xdef;
    uStack_4 = 0x2a6;
    func_0x00010526();
    *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
  } while (*(int *)(unaff_BP + -0x122) < 0x18);
  iStack_2 = 1;
  uStack_4 = 1;
  iStack_6 = 0xdef;
  iStack_8 = 699;
  FUN_1000_0599();
  iStack_2 = 0xdef;
  uStack_4 = 0x2c2;
  FUN_1885_2ec3();
  iStack_2 = 0;
  uStack_4 = 0x1b6e;
  iStack_6 = 0x2ca;
  func_0x0001470b();
  uVar7 = *(undefined2 *)0x14a;
  *(undefined2 *)(unaff_BP + -0x58) = *(undefined2 *)0x148;
  *(undefined2 *)(unaff_BP + -0x56) = uVar7;
  *(undefined2 *)(unaff_BP + -0x19e) = *(undefined2 *)0x150;
  iVar9 = 0x11f2;
LAB_3ab8_575f:
  do {
    while( true ) {
      iStack_2 = *(undefined2 *)0xcb4;
      uStack_4 = *(undefined2 *)0xcb2;
      iStack_6 = 0;
      iStack_8 = 3;
      iStack_c = 0x2f3;
      pcStack_a = (char *)iVar9;
      func_0x0000f2cb();
      iStack_2 = 0xdef;
      uVar7 = 0x885;
      uStack_4 = 0x2fb;
      func_0x0000a799();
      if (*(int *)(unaff_BP + 6) == 3) {
        iStack_2 = 0x885;
        uVar7 = 0x1b6e;
        uStack_4 = 0x306;
        FUN_1885_2ec3();
        iStack_2 = unaff_BP + -0x118;
        uStack_4 = unaff_BP + -0xa4;
        iStack_6 = 0x1b6e;
        iStack_8 = 0x314;
        FUN_4375_b6b9();
      }
      *(undefined2 *)0x11c = 10;
      *(undefined2 *)0xc08 = 1;
      *(undefined2 *)0xc22 = 1;
      iStack_2 = 2;
      uStack_4 = 0x30;
      iStack_8 = 0x332;
      iStack_6 = uVar7;
      FUN_1000_0599();
      iStack_2 = unaff_BP + -0x4e;
      uStack_4 = 0xdef;
      iVar9 = 0x11f2;
      iStack_6 = 0x33d;
      func_0x00012276();
      if (*(char *)0x7638 == '\0') {
        iStack_2 = 0xffff;
        uStack_4 = 7;
        iStack_6 = 2;
        iStack_8 = 0x43;
        pcStack_a = (char *)0x75ce;
        iStack_c = 0x11f2;
        iVar9 = 0xdef;
        iStack_e = 0x35e;
        FUN_1000_02b5();
      }
      iStack_2 = 0xffff;
      uStack_4 = 7;
      iStack_6 = 2;
      iStack_8 = 0x45;
      pcStack_a = (char *)0x658;
      iStack_e = 0x37a;
      iStack_c = iVar9;
      FUN_1000_02b5();
      if (*(int *)(unaff_BP + 0x2a) != 0 || *(int *)(unaff_BP + 0x28) != 0) {
        iStack_2 = 0xffff;
        *(undefined2 *)0xc22 = 2;
        uStack_4 = 2;
        iStack_6 = 3;
        iStack_8 = 0x41;
        pcStack_a = (char *)0x11cc;
        iStack_c = 0xdef;
        iStack_e = 0x3a2;
        FUN_1000_02b5();
        if (*(char *)*(undefined2 *)(unaff_BP + 0x2c) != '\0') {
          iStack_2 = 0xffff;
          uStack_4 = 6;
          iStack_6 = 3;
          iStack_8 = 0x1e;
          iStack_c = 0xdef;
          iStack_e = 0x3c3;
          pcStack_a = (char *)*(undefined2 *)(unaff_BP + 0x2c);
          FUN_1000_02b5();
        }
      }
      *(undefined2 *)(unaff_BP + -0x7a) = 10000;
      uVar5 = *(uint *)(unaff_BP + -0x56);
      uVar6 = *(uint *)0x14a;
      uVar15 = uVar6 < uVar5;
      if (((int)uVar5 <= (int)uVar6) &&
         (((int)uVar5 < (int)uVar6 ||
          (uVar15 = *(uint *)0x148 < *(uint *)(unaff_BP + -0x58),
          *(uint *)(unaff_BP + -0x58) < *(uint *)0x148)))) {
        *(undefined2 *)(unaff_BP + -0x7a) = 9999;
      }
      iStack_2 = 0xb5b6;
      uStack_4 = 0xdef;
      iStack_6 = 0x3ed;
      func_0x000257c0();
      uVar7 = *(undefined2 *)0xa9d2;
      *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)0xa9d0;
      *(undefined2 *)(unaff_BP + -0x84) = uVar7;
      iStack_2 = 0x75d1;
      uStack_4 = unaff_BP + -0x196;
      iStack_6 = 0x22b2;
      iStack_8 = 0x40b;
      FUN_21f2_3454();
      while( true ) {
        iStack_2 = 0x22b2;
        uStack_4 = 0x4a2;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        uStack_4 = 0x4ab;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        uStack_4 = 0x4b0;
        FUN_28b3_1181();
        if ((bool)uVar15) break;
        iStack_2 = 0x22b2;
        uStack_4 = 0x419;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        uStack_4 = 0x41e;
        func_0x00029d78();
        pcStack_a = (char *)0x22b2;
        iStack_c = 0x428;
        func_0x000299d1();
        pcStack_a = (char *)0x75dc;
        iStack_c = unaff_BP + -0x1c0;
        iStack_e = 0x22b2;
        uStack_10 = 0x436;
        FUN_21f2_3454();
        uVar15 = (undefined1 *)0xfff3 < &iStack_c;
        iStack_2 = unaff_BP + -0x1c0;
        uStack_4 = unaff_BP + -0x196;
        iStack_6 = 0x22b2;
        iStack_8 = 0x448;
        FUN_21f2_2d26();
        iStack_2 = 0x22b2;
        uStack_4 = 0x453;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        uStack_4 = 0x45c;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        uStack_4 = 0x461;
        FUN_28b3_1181();
        if ((bool)uVar15) {
          iStack_2 = 0x22b2;
          uStack_4 = 0x46c;
          func_0x000297e6();
          iStack_2 = 0x22b2;
          uStack_4 = 0x471;
          func_0x00029d78();
          iStack_2 = 0x22b2;
          uStack_4 = 0x47a;
          func_0x00029c74();
        }
        else {
          iStack_2 = 0x22b2;
          uStack_4 = 0x489;
          func_0x000297e6();
          iStack_2 = unaff_BP + -0x86;
          uStack_4 = 0x22b2;
          iStack_6 = 0x493;
          func_0x00029bb5();
        }
        iStack_2 = 0x22b2;
        uStack_4 = 0x499;
        func_0x00029983();
      }
      iStack_2 = 0x75e4;
      uStack_4 = unaff_BP + -0x196;
      iStack_6 = 0x22b2;
      iStack_8 = 0x4c3;
      FUN_21f2_2d26();
      iStack_2 = 0x98a;
      uStack_4 = unaff_BP + -0x196;
      iStack_6 = 0x22b2;
      iStack_8 = 0x4d3;
      FUN_21f2_2d26();
      iStack_2 = unaff_BP + -0x6c;
      uStack_4 = unaff_BP + -0x196;
      iStack_6 = 0x22b2;
      iStack_8 = 0x4e3;
      FUN_21f2_2d26();
      iStack_2 = 0x98a;
      uStack_4 = unaff_BP + -0x196;
      iStack_6 = 0x22b2;
      iStack_8 = 0x4f3;
      FUN_21f2_2d26();
      iStack_2 = 0x7e0;
      uStack_4 = unaff_BP + -0x196;
      iStack_6 = 0x22b2;
      iStack_8 = 0x503;
      FUN_21f2_2d26();
      iStack_2 = unaff_BP + -0x196;
      uStack_4 = 9;
      iStack_6 = 0x22b2;
      iStack_8 = 0x513;
      FUN_1def_07a4();
      iStack_2 = unaff_BP + -0x108;
      uStack_4 = unaff_BP + -0x1d2;
      iStack_6 = unaff_BP + -0x1c8;
      iStack_8 = unaff_BP + -0x196;
      pcStack_a = (char *)*(int *)(unaff_BP + -0x7a);
      iStack_c = 0x1bb4;
      iStack_e = 0x531;
      uVar7 = FUN_1def_0904();
      *(undefined2 *)(unaff_BP + -0x1cc) = uVar7;
      if (*(char *)0x118 == '\0') break;
LAB_3ab8_59bf:
      *(undefined2 *)0x158 = 0;
      *(undefined1 *)0x118 = 0;
      iStack_2 = 0xb5b6;
      uStack_4 = 0x1bb4;
      iStack_6 = 0x553;
      func_0x000257c0();
      iVar9 = 0x22b2;
    }
    iStack_2 = 0;
    uStack_4 = 0x1bb4;
    iVar9 = 0x885;
    iStack_6 = 0x55f;
    func_0x0000daa6();
    *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)0x158;
    if (*(int *)(unaff_BP + -0x1cc) != 8) {
      while ((*(int *)(unaff_BP + -0x94) != 0 || (*(int *)(unaff_BP + -0x1cc) == 9))) {
        iStack_2 = 0x75e9;
        uStack_4 = unaff_BP + -0x196;
        iStack_8 = 0x5a4;
        iStack_6 = iVar9;
        FUN_21f2_3454();
        iStack_2 = 0x954;
        uStack_4 = unaff_BP + -0x196;
        iStack_6 = 0x22b2;
        iStack_8 = 0x5b4;
        FUN_21f2_2d26();
        iStack_2 = 0x522;
        uStack_4 = unaff_BP + -0x196;
        iStack_6 = 0x22b2;
        iStack_8 = 0x5c4;
        FUN_21f2_2d26();
        *(undefined2 *)(unaff_BP + -0x78) = *(undefined2 *)0xa62;
        *(undefined2 *)0xa62 = 0x1d;
        *(undefined2 *)0x158 = 0;
        *(undefined2 *)0xc22 = 1;
        iStack_2 = unaff_BP + -0x108;
        uStack_4 = unaff_BP + -0x1d2;
        iStack_6 = unaff_BP + -0x1c8;
        iStack_8 = unaff_BP + -0x196;
        pcStack_a = (char *)0x2710;
        iStack_c = 0x22b2;
        iVar9 = 0x1bb4;
        iStack_e = 0x5fb;
        iVar10 = FUN_1def_0904();
        *(int *)(unaff_BP + -0x1a2) = iVar10;
        if (*(char *)0x118 != '\0') goto LAB_3ab8_59bf;
        if (*(int *)0x158 != 0) goto LAB_3ab8_55b1;
        if ((iVar10 == 1) || (*(int *)(unaff_BP + -0x108) == 1)) {
          *(undefined2 *)0x158 = *(undefined2 *)(unaff_BP + -0x94);
          *(undefined2 *)0xa62 = *(undefined2 *)(unaff_BP + -0x78);
          goto LAB_3ab8_55b1;
        }
        if ((iVar10 == 2) || (*(int *)(unaff_BP + -0x108) == 2)) break;
      }
      if (*(int *)(unaff_BP + -0x1cc) == -1) {
        iStack_2 = *(undefined2 *)0xcb4;
        uStack_4 = *(undefined2 *)0xcb2;
        iStack_6 = 0;
        iStack_8 = 3;
        iStack_c = 0x65c;
        pcStack_a = (char *)iVar9;
        func_0x0000f2cb();
        iStack_2 = 0xdef;
        uStack_4 = 0x664;
        func_0x0000a799();
        iStack_2 = 0x885;
        uStack_4 = 0x669;
        FUN_1885_2ec3();
        uVar7 = 0x1b6e;
        while (iStack_2 = *(int *)0x150, *(int *)(unaff_BP + -0x19e) < iStack_2) {
          *(int *)(unaff_BP + -0x1a2) = iStack_2;
          iStack_6 = 0x675;
          uStack_4 = uVar7;
          func_0x000190c7();
          uVar7 = 0x18b3;
        }
        uVar12 = *(undefined2 *)(unaff_BP + -0x56);
        *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x58);
        *(undefined2 *)0x14a = uVar12;
        uStack_4 = 0x691;
        iStack_2 = uVar7;
        func_0x0000abfa();
        iStack_2 = 1;
        uStack_4 = 0x885;
        iStack_6 = 0x69a;
        func_0x0000b1d8();
        iStack_2 = 0;
        uStack_4 = 0x885;
        iVar9 = 0x11f2;
        iStack_6 = 0x6a3;
        func_0x0001470b();
      }
      if ((0 < *(int *)(unaff_BP + -0x1cc)) && (*(int *)(unaff_BP + -0x1cc) < 8)) {
        iVar10 = 0x885;
        uStack_4 = 0x6bd;
        iStack_2 = iVar9;
        func_0x0000c3ca();
        uVar7 = *(undefined2 *)0x14a;
        *(undefined2 *)(unaff_BP + -0x58) = *(undefined2 *)0x148;
        *(undefined2 *)(unaff_BP + -0x56) = uVar7;
        *(undefined2 *)(unaff_BP + -0x19e) = *(undefined2 *)0x150;
        while (*(int *)(unaff_BP + -0x1cc) == 7) {
          uVar7 = *(undefined2 *)0xa8fc;
          uVar12 = *(undefined2 *)0xa8fe;
          *(undefined2 *)(unaff_BP + -0x8a) = uVar7;
          *(undefined2 *)(unaff_BP + -0x88) = uVar12;
          *(undefined2 *)(unaff_BP + -0xa8) = uVar7;
          *(undefined2 *)(unaff_BP + -0xa6) = uVar12;
          uStack_4 = 0x6f7;
          iStack_2 = iVar10;
          func_0x0001bb4e();
          iStack_2 = 0x760e;
          uStack_4 = 0x1bb4;
          iStack_6 = 0x700;
          func_0x00012276();
          iStack_2 = 0x2711;
          uStack_4 = 0x17;
          iStack_6 = unaff_BP + -0x1d2;
          iStack_8 = unaff_BP + -0x1c8;
          pcStack_a = (char *)(unaff_BP + -0xa8);
          iStack_c = unaff_BP + -0x8a;
          iStack_e = 0x11f2;
          iVar10 = 0xad;
          uStack_10 = 0x722;
          iVar11 = func_0x000021a4();
          *(int *)(unaff_BP + -0x122) = iVar11;
          iVar9 = iVar10;
          if ((iVar11 == -1) || (*(int *)0x158 != 0)) goto LAB_3ab8_575f;
          uVar15 = 0;
          uVar14 = *(int *)(unaff_BP + -0x122) == 0;
          if ((bool)uVar14) {
            iStack_2 = 0xad;
            uStack_4 = 0x746;
            func_0x000297e6();
            iStack_2 = 0x22b2;
            uStack_4 = 0x74f;
            func_0x000297e6();
            iStack_2 = 0x22b2;
            uStack_4 = 0x754;
            FUN_28b3_1181();
            if ((bool)uVar15 || (bool)uVar14) {
              iStack_2 = 0x22b2;
              uStack_4 = 0x75f;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              uStack_4 = 0x768;
              func_0x000297e6();
              iStack_2 = 0x22b2;
              iVar10 = 0x22b2;
              uStack_4 = 0x76d;
              FUN_28b3_1181();
              if ((bool)uVar15 || (bool)uVar14) {
                uVar7 = *(undefined2 *)(unaff_BP + -0x88);
                *(undefined2 *)(unaff_BP + -0x132) = *(undefined2 *)(unaff_BP + -0x8a);
                *(undefined2 *)(unaff_BP + -0x130) = uVar7;
                break;
              }
            }
            iVar10 = 0x22b2;
          }
        }
        if (*(int *)(unaff_BP + -0x1cc) < 7) {
          uStack_4 = 0x792;
          iStack_2 = iVar10;
          FUN_28b3_0d8b();
          iStack_2 = 0x22b2;
          uStack_4 = 0x79b;
          func_0x0002996b();
          iStack_2 = 0x22b2;
          uStack_4 = 0x7a3;
          FUN_28b3_0ee9();
          if (*(int *)(unaff_BP + -0x1cc) < 4) {
            iStack_2 = 0x22b2;
            uStack_4 = 0x7b3;
            func_0x000297e6();
            iStack_2 = 0x22b2;
            uStack_4 = 0x7bc;
            func_0x00029b6d();
            iStack_2 = 0x22b2;
            uStack_4 = 0x7c1;
            func_0x00029d78();
            iStack_2 = 0x22b2;
            uStack_4 = 0x7ca;
            func_0x00029c74();
          }
          else {
            *(int *)(unaff_BP + -0x1e4) = *(int *)(unaff_BP + -0x1cc) + -1;
            iStack_2 = 0x22b2;
            uStack_4 = 0x7de;
            FUN_28b3_0d8b();
          }
          iStack_2 = 0x22b2;
          iVar10 = 0x22b2;
          uStack_4 = 0x7e7;
          func_0x00029983();
        }
        iStack_2 = 0;
        iStack_6 = 0x7ef;
        uStack_4 = iVar10;
        func_0x0000daa6();
        iStack_2 = *(undefined2 *)0xcb4;
        uStack_4 = 1 - *(int *)0xcb2;
        iStack_6 = 0;
        iStack_8 = 3;
        pcStack_a = (char *)0x885;
        iStack_c = 0x808;
        func_0x0000f2cb();
        iStack_2 = 1;
        uStack_4 = 0x23;
        iStack_6 = 0xdef;
        iStack_8 = 0x818;
        FUN_1000_0599();
        iStack_2 = 0x761e;
        uStack_4 = 0xdef;
        uVar7 = 0x11f2;
        iStack_6 = 0x823;
        func_0x00012276();
        uVar5 = *(uint *)0x148;
        iVar9 = *(int *)0x14a;
        *(int *)(unaff_BP + -0x106) = uVar5 + 1;
        *(int *)(unaff_BP + -0x104) = iVar9 + (uint)(0xfffe < uVar5);
        *(undefined1 *)(unaff_BP + -0x102) = 0;
        if (*(char *)0x7638 != '\0') {
          iStack_2 = 0x11b8;
          uStack_4 = unaff_BP + -0x102;
          iStack_6 = 0x11f2;
          iStack_8 = 0x853;
          func_0x00024c86();
          iStack_2 = unaff_BP + -0x4e;
          uStack_4 = unaff_BP + -0x102;
          iStack_6 = 0x22b2;
          uVar7 = 0x22b2;
          iStack_8 = 0x863;
          FUN_21f2_2d26();
          if ((*(int *)(unaff_BP + 0x2a) != 0 || *(int *)(unaff_BP + 0x28) != 0) &&
             (*(char *)*(undefined2 *)(unaff_BP + 0x2c) != '\0')) {
            iStack_2 = 0x954;
            uStack_4 = unaff_BP + -0x102;
            iStack_6 = 0x22b2;
            iStack_8 = 0x883;
            FUN_21f2_2d26();
            iStack_2 = *(undefined2 *)(unaff_BP + 0x2c);
            uStack_4 = unaff_BP + -0x102;
            iStack_6 = 0x22b2;
            uVar7 = 0x22b2;
            iStack_8 = 0x892;
            FUN_21f2_2d26();
          }
        }
        iStack_2 = unaff_BP + -0x102;
        uStack_4 = *(undefined2 *)(unaff_BP + 0x2a);
        iStack_6 = *(undefined2 *)(unaff_BP + 0x28);
        pcStack_a = (char *)0x8a8;
        iStack_8 = uVar7;
        func_0x000297e6();
        iStack_8 = 0x22b2;
        pcStack_a = (char *)0x8ad;
        func_0x00029d78();
        uStack_10 = 0x22b2;
        uVar7 = 0x22b2;
        uStack_12 = 0x8b7;
        func_0x000299d1();
        uStack_10 = 0x22b2;
        uStack_12 = 0x8bb;
        FUN_4375_76b2();
        uStack_4 = *(uint *)(unaff_BP + -0x106);
        iStack_2 = *(int *)(unaff_BP + -0x104);
        if ((iStack_2 <= *(int *)0x14a) &&
           ((iStack_2 < *(int *)0x14a || (uStack_4 < *(uint *)0x148)))) {
          iStack_6 = 0x22b2;
          iStack_8 = 0x8db;
          uVar16 = func_0x0000013f();
          uVar7 = (undefined2)((ulong)uVar16 >> 0x10);
          iVar9 = (int)uVar16;
          *(int *)(unaff_BP + -0x5e) = iVar9;
          *(undefined2 *)(unaff_BP + -0x5c) = uVar7;
          *(byte *)(iVar9 + 0x14) = *(byte *)(iVar9 + 0x14) | 0x40;
          *(byte *)(iVar9 + 0x14) = *(byte *)(iVar9 + 0x14) & 0x7f;
          iStack_2 = *(undefined2 *)0x14a;
          uStack_4 = *(undefined2 *)0x148;
          iStack_6 = 0;
          uVar7 = 0;
          iStack_8 = 0x8fe;
          uVar16 = func_0x0000013f();
          pbVar2 = (byte *)((int)uVar16 + 0x14);
          *pbVar2 = *pbVar2 | 0x40;
        }
        iStack_2 = *(undefined2 *)0xcb4;
        uStack_4 = *(undefined2 *)0xcb2;
        iStack_6 = 0;
        iStack_8 = 3;
        iStack_c = 0x91d;
        pcStack_a = (char *)uVar7;
        func_0x0000f2cb();
        iStack_2 = 0xdef;
        uStack_4 = 0x925;
        func_0x0000a799();
        iStack_2 = 0x885;
        uStack_4 = 0x92a;
        func_0x0000abfa();
        iVar9 = 0x885;
      }
      goto LAB_3ab8_575f;
    }
    if (*(char *)0x7638 == '\0') {
      *(undefined1 *)0x7638 = 1;
    }
    else {
      *(undefined1 *)0x7638 = 0;
    }
  } while( true );
}



/* 3ab8:522f  FUN_3ab8_522f  3015 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */

undefined2 __cdecl16far FUN_3ab8_522f(void)

{
  int *piVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  char *pcStack_8;
  int iStack_6;
  int iStack_4;
  uint uStack_2;
  
  iStack_4 = 0x3ab8;
  iStack_6 = 0xfdb4;
  FUN_3ab8_4289();
  uStack_2 = 0xfdbb;
  func_0x0000c3ca();
  uStack_2 = 0x1c;
  iStack_4 = 0x885;
  iStack_6 = 0xfdc8;
  FUN_1000_0599();
  uStack_2 = 0xdef;
  iStack_4 = 0xfdd3;
  func_0x00012276();
  uStack_2 = 0x11f2;
  iStack_4 = 0xfddc;
  func_0x0000daa6();
  uStack_2 = 1 - *(int *)0xcb2;
  iStack_4 = 0;
  iStack_6 = 3;
  pcStack_8 = (char *)0x885;
  iStack_a = -0x20b;
  func_0x0000f2cb();
  *(undefined2 *)(unaff_BP + -0x122) = 1;
  while (*(int *)(unaff_BP + -0x122) <= *(int *)0xc3b8) {
    *(undefined2 *)(*(int *)(unaff_BP + -0x122) * 2 + (int)*(undefined4 *)0xb37a) = 0xfff7;
    *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
  }
  *(undefined2 *)(unaff_BP + -0x122) = 1;
  while (iVar7 = *(int *)(unaff_BP + -0x122), iVar7 <= *(int *)0xc3b8) {
    *(int *)(iVar7 * 2 + (int)*(undefined4 *)0xbef2) = (iVar7 + -1) * (*(int *)0xc396 + 1);
    *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
  }
  *(undefined2 *)(unaff_BP + -0x122) = 1;
  uVar12 = *(undefined2 *)0xb48e;
  do {
    *(undefined2 *)(*(int *)(unaff_BP + -0x122) * 2 + *(int *)0xb48c) = 0;
    *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
  } while (*(int *)(unaff_BP + -0x122) < 0x7919);
  uStack_2 = *(undefined2 *)(unaff_BP + 0x28);
  iStack_4 = *(undefined2 *)(unaff_BP + 0x24);
  iStack_6 = *(undefined2 *)(unaff_BP + 0x22);
  pcStack_8 = (char *)*(undefined2 *)(unaff_BP + 0x20);
  iStack_a = *(int *)(unaff_BP + 0x1e);
  iStack_c = *(undefined2 *)(unaff_BP + 0x1c);
  uStack_e = *(undefined2 *)(unaff_BP + 10);
  uStack_10 = *(undefined2 *)(unaff_BP + 8);
  uStack_12 = *(undefined2 *)0xa93a;
  uStack_14 = *(undefined2 *)0xa938;
  uStack_16 = *(undefined2 *)0xa936;
  uStack_18 = *(undefined2 *)0xa934;
  uStack_1a = *(undefined2 *)0xa93a;
  uStack_1c = *(undefined2 *)0xa938;
  uStack_1e = *(undefined2 *)0xa936;
  uStack_20 = *(undefined2 *)0xa934;
  uStack_24 = 0xdef;
  uStack_26 = 0xfeab;
  iVar7 = FUN_3ab8_19bd();
  *(int *)(unaff_BP + -0x1a0) = iVar7;
  if (iVar7 < 0) {
    while( true ) {
      uStack_2 = 0x13b;
      FUN_32b2_6eb1();
      uStack_2 = *(undefined2 *)(unaff_BP + -0xb8);
      iStack_4 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
      pcStack_8 = (char *)0x32b2;
      iStack_a = 0x150;
      FUN_32b2_75ec();
      uVar13 = &stack0x0000 == (undefined1 *)0x0;
      uStack_2 = 0x32b2;
      iStack_4 = 0x15a;
      FUN_32b2_6d14();
      uStack_2 = 0x32b2;
      iStack_4 = 0x162;
      FUN_32b2_704d();
      uStack_2 = 0x32b2;
      iStack_4 = 0x16a;
      FUN_32b2_7095();
      uStack_2 = 0x32b2;
      iStack_4 = 0x173;
      FUN_32b2_6eb1();
      uStack_2 = 0x32b2;
      iStack_4 = 0x17b;
      FUN_32b2_6cc6();
      uStack_2 = 0x32b2;
      iStack_4 = 0x183;
      FUN_32b2_6cc6();
      uStack_2 = 0x32b2;
      iStack_4 = 0x188;
      FUN_32b2_7191();
      if ((bool)uVar13) {
        uStack_2 = 0x32b2;
        iStack_4 = 0x192;
        FUN_32b2_6cc6();
        uStack_2 = 0x32b2;
        iStack_4 = 0x19a;
        FUN_32b2_6cc6();
        uStack_2 = 0x32b2;
        iStack_4 = 0x19f;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          return 0;
        }
      }
      uStack_2 = unaff_BP + -0xa8;
      iStack_4 = unaff_BP + -0x1c;
      iStack_6 = *(undefined2 *)(unaff_BP + -0x7c);
      pcStack_8 = (char *)*(undefined2 *)(unaff_BP + -0x7e);
      iStack_a = *(int *)(unaff_BP + -0x80);
      iStack_c = *(undefined2 *)(unaff_BP + -0x82);
      uStack_e = *(undefined2 *)(unaff_BP + -0x58);
      uStack_10 = *(undefined2 *)(unaff_BP + -0x5a);
      uStack_12 = *(undefined2 *)(unaff_BP + -0x5c);
      uStack_14 = *(undefined2 *)(unaff_BP + -0x5e);
      uStack_16 = 0x32b2;
      uStack_18 = 0x1d0;
      FUN_32b2_6cc6();
      uStack_16 = 0x32b2;
      uStack_18 = 0x1d5;
      FUN_32b2_7258();
      uStack_1e = 0x32b2;
      uStack_20 = 0x1df;
      FUN_32b2_6eb1();
      uStack_1e = 0x32b2;
      uStack_20 = 0x1e7;
      FUN_32b2_6cc6();
      uStack_1e = 0x32b2;
      uStack_20 = 0x1ec;
      FUN_32b2_7258();
      uStack_26 = 0x32b2;
      uStack_28 = 0x1f6;
      FUN_32b2_6eb1();
      uStack_26 = 0x32b2;
      uStack_28 = 0x1fa;
      iVar7 = func_0x0003fb3d();
      if (iVar7 == 0) break;
      uStack_2 = 0x32b2;
      iStack_4 = 0x209;
      FUN_32b2_6cc6();
      uStack_2 = 0x32b2;
      iStack_4 = 0x20e;
      FUN_32b2_7258();
      uStack_2 = 0x32b2;
      iStack_4 = 0x216;
      FUN_32b2_6e99();
      uStack_2 = 0x32b2;
      iStack_4 = 0x21e;
      FUN_32b2_6ef9();
      uStack_2 = unaff_BP + -0xb4;
      iStack_4 = unaff_BP + -0xa4;
      iStack_6 = 0x32b2;
      pcStack_8 = (char *)0x231;
      FUN_32b2_6cc6();
      iStack_6 = 0x32b2;
      pcStack_8 = (char *)0x236;
      FUN_32b2_7258();
      uStack_e = 0x32b2;
      uStack_10 = 0x240;
      FUN_32b2_6eb1();
      uStack_e = 0x32b2;
      uStack_10 = 0x248;
      FUN_32b2_6cc6();
      uStack_e = 0x32b2;
      uStack_10 = 0x24d;
      FUN_32b2_7258();
      uStack_16 = 0x32b2;
      uStack_18 = 599;
      FUN_32b2_6eb1();
      uStack_16 = 0x32b2;
      uStack_18 = 0x25f;
      FUN_32b2_6d14();
      uStack_1e = 0x32b2;
      uStack_20 = 0x269;
      FUN_32b2_6eb1();
      uStack_1e = 0x32b2;
      uStack_20 = 0x271;
      FUN_32b2_6cc6();
      uStack_1e = 0x32b2;
      uStack_20 = 0x276;
      FUN_32b2_7258();
      uStack_1e = 0x32b2;
      uStack_20 = 0x27e;
      FUN_32b2_6e99();
      uStack_26 = 0x32b2;
      uStack_28 = 0x288;
      FUN_32b2_6eb1();
      uStack_26 = 0x32b2;
      uStack_28 = 0x290;
      FUN_32b2_6cc6();
      uStack_26 = 0x32b2;
      uStack_28 = 0x295;
      FUN_32b2_7258();
      uStack_2e = 0x32b2;
      uStack_30 = 0x29f;
      FUN_32b2_6eb1();
      uStack_2e = 0x32b2;
      uStack_30 = 0x2a7;
      FUN_32b2_6cc6();
      uStack_2e = 0x32b2;
      uStack_30 = 0x2ac;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      func_0x0003fc09(0x32b2,1);
      uStack_2 = unaff_BP + -0xe4;
      iStack_4 = unaff_BP + -0xd0;
      iStack_6 = 0x32b2;
      pcStack_8 = (char *)0x2d4;
      FUN_32b2_6cc6();
      iStack_6 = 0x32b2;
      pcStack_8 = (char *)0x2d9;
      FUN_32b2_7258();
      uStack_e = 0x32b2;
      uStack_10 = 0x2e3;
      FUN_32b2_6eb1();
      uStack_e = 0x32b2;
      uStack_10 = 0x2eb;
      FUN_32b2_6cc6();
      uStack_e = 0x32b2;
      uStack_10 = 0x2f0;
      FUN_32b2_7258();
      uStack_16 = 0x32b2;
      uStack_18 = 0x2fa;
      FUN_32b2_6eb1();
      uStack_16 = 0x32b2;
      uStack_18 = 0x302;
      FUN_32b2_6d14();
      uStack_1e = 0x32b2;
      uStack_20 = 0x30c;
      FUN_32b2_6eb1();
      uStack_1e = 0x32b2;
      uStack_20 = 0x314;
      FUN_32b2_6d14();
      uStack_26 = 0x32b2;
      uStack_28 = 0x31e;
      FUN_32b2_6eb1();
      uStack_26 = 0x32b2;
      uStack_28 = 0x326;
      FUN_32b2_6cc6();
      uStack_26 = 0x32b2;
      uStack_28 = 0x32b;
      FUN_32b2_7258();
      uStack_2e = 0x32b2;
      uStack_30 = 0x335;
      FUN_32b2_6eb1();
      uStack_2e = 0x32b2;
      uStack_30 = 0x33d;
      FUN_32b2_6cc6();
      uStack_2e = 0x32b2;
      uStack_30 = 0x342;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      func_0x0003fc09(0x32b2,1);
      uVar13 = (undefined1 *)0xffc9 < &uStack_32;
      uVar14 = &stack0x0000 == (undefined1 *)0xfffc;
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_7258();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      FUN_32b2_6cc6();
      FUN_32b2_701d();
      FUN_32b2_7258();
      FUN_32b2_6e99();
      FUN_32b2_6ef9();
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_710c();
      FUN_32b2_7191();
      if (!(bool)uVar13 && !(bool)uVar14) {
        FUN_32b2_6d14();
        FUN_32b2_6d14();
        FUN_32b2_7191();
        if (!(bool)uVar14) {
          FUN_32b2_6d14();
          FUN_32b2_7124();
          FUN_32b2_6e99();
          FUN_32b2_704d();
          FUN_32b2_7035();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_718c();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_70dc();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_718c();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_6fd6();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_7182();
          FUN_32b2_6e99();
          FUN_32b2_710c();
          FUN_32b2_7154();
          FUN_32b2_6e99();
          FUN_32b2_6eb1();
          FUN_32b2_6d14();
          FUN_32b2_6eb1();
          uStack_2 = 0x32b2;
          iStack_4 = 0x5db;
          FUN_32b2_6cc6();
          uStack_2 = 0x32b2;
          iStack_4 = 0x5e0;
          FUN_32b2_7258();
          iStack_a = 0x32b2;
          iStack_c = 0x5ea;
          FUN_32b2_6eb1();
          iStack_a = 0x32b2;
          iStack_c = 0x5f2;
          FUN_32b2_6cc6();
          iStack_a = 0x32b2;
          iStack_c = 0x5f7;
          FUN_32b2_7258();
          uStack_12 = 0x32b2;
          uStack_14 = 0x601;
          FUN_32b2_6eb1();
          uStack_12 = *(undefined2 *)(unaff_BP + -100);
          uStack_14 = *(undefined2 *)(unaff_BP + -0x66);
          uStack_16 = *(undefined2 *)(unaff_BP + -0x68);
          uStack_18 = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_1a = *(undefined2 *)(unaff_BP + -0x48);
          uStack_1c = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x4e);
          uStack_24 = 0x622;
          FUN_32b2_6d14();
          uStack_2a = 0x32b2;
          uStack_2c = 0x62c;
          FUN_32b2_6eb1();
          uStack_2a = 0x32b2;
          uStack_2c = 0x635;
          FUN_32b2_6d14();
          uStack_32 = 0x32b2;
          uStack_34 = 0x63f;
          FUN_32b2_6eb1();
          uStack_32 = 0;
          uStack_34 = 0x32b2;
          func_0x0003fc09();
          uVar12 = *(undefined2 *)(unaff_BP + -0x60);
          *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
          *(undefined2 *)(unaff_BP + -0x84) = uVar12;
          uVar12 = *(undefined2 *)(unaff_BP + -0x88);
          *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
          *(undefined2 *)(unaff_BP + -0x9c) = uVar12;
          puVar11 = &uStack_20;
          puVar10 = (undefined2 *)(unaff_BP + 0x1c);
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar4 = puVar11;
            puVar11 = puVar11 + 1;
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar4 = *puVar3;
          }
          uStack_24 = 0x684;
          iVar7 = FUN_3ab8_522f();
          uVar13 = 0;
          uVar14 = iVar7 == 0;
          if (!(bool)uVar14) {
            FUN_32b2_6d14();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6fc7();
            FUN_32b2_7258();
            FUN_32b2_7191();
            if ((bool)uVar13 || (bool)uVar14) {
              FUN_32b2_6d14();
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_6fc7();
              FUN_32b2_7258();
              FUN_32b2_7191();
              if ((bool)uVar13 || (bool)uVar14) {
                *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
                *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
                *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
                *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
              }
            }
          }
          FUN_32b2_6d14();
          FUN_32b2_6d14();
          FUN_32b2_710c();
          FUN_32b2_710c();
          FUN_32b2_7154();
          FUN_32b2_7191();
          if (!(bool)uVar13) {
            FUN_32b2_6d14();
            FUN_32b2_6fc7();
            FUN_32b2_6d14();
            FUN_32b2_710c();
            FUN_32b2_710c();
            FUN_32b2_7191();
            if (!(bool)uVar13) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
            uStack_2 = *(undefined2 *)(unaff_BP + -0xba);
            iStack_4 = *(undefined2 *)(unaff_BP + -0xbc);
            iStack_6 = 0x32b2;
            pcStack_8 = (char *)0x774;
            FUN_32b2_7592();
            uStack_2 = 0x77e;
            FUN_32b2_6d14();
            uStack_2 = 0x786;
            FUN_32b2_70dc();
            uStack_2 = 0x78e;
            FUN_32b2_6d14();
            uStack_2 = 0x797;
            FUN_32b2_710c();
            uStack_2 = 0x79c;
            FUN_32b2_7182();
            uStack_2 = 0x7a5;
            FUN_32b2_6e99();
            uStack_2 = 0x7ad;
            FUN_32b2_710c();
            uStack_2 = 0x7b5;
            FUN_32b2_7154();
            uStack_2 = 0x7be;
            FUN_32b2_6e99();
            uStack_2 = 0x7c7;
            FUN_32b2_6eb1();
            uStack_2 = unaff_BP + -0x62;
            iStack_4 = 0x32b2;
            iStack_6 = 0x7d9;
            FUN_32b2_6cc6();
            iStack_4 = 0x32b2;
            iStack_6 = 0x7de;
            FUN_32b2_7258();
            iStack_c = 0x32b2;
            uStack_e = 0x7e8;
            FUN_32b2_6eb1();
            iStack_c = 0x32b2;
            uStack_e = 0x7f0;
            FUN_32b2_6cc6();
            iStack_c = 0x32b2;
            uStack_e = 0x7f5;
            FUN_32b2_7258();
            uStack_14 = 0x32b2;
            uStack_16 = 0x7ff;
            FUN_32b2_6eb1();
            uStack_14 = *(undefined2 *)(unaff_BP + -100);
            uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
            uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
            uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
            uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
            uStack_24 = 0x32b2;
            uStack_26 = 0x820;
            FUN_32b2_6d14();
            uStack_2c = 0x32b2;
            uStack_2e = 0x82a;
            FUN_32b2_6eb1();
            uStack_2c = 0x32b2;
            uStack_2e = 0x833;
            FUN_32b2_6d14();
            uStack_34 = 0x32b2;
            FUN_32b2_6eb1();
            uStack_34 = 0;
            func_0x0003fc09(0x32b2);
            uVar13 = (undefined1 *)0xffc9 < &uStack_34;
            uVar14 = &stack0x0000 == (undefined1 *)0xfffe;
            uStack_2 = 0x84f;
            FUN_32b2_6cc6();
            uStack_2 = 0x857;
            FUN_32b2_6cc6();
            uStack_2 = 0x85c;
            FUN_32b2_7191();
            if ((bool)uVar14) {
              uVar12 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar12;
            }
            uStack_2 = 0x872;
            FUN_32b2_6cc6();
            uStack_2 = 0x87a;
            FUN_32b2_6cc6();
            uStack_2 = 0x87f;
            FUN_32b2_7191();
            if ((bool)uVar14) {
              uVar12 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar12;
            }
            uVar12 = *(undefined2 *)(unaff_BP + -0x60);
            puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
            *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
            puVar10[1] = uVar12;
            uVar12 = *(undefined2 *)(unaff_BP + -0x88);
            puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
            *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar10[1] = uVar12;
            uVar12 = *(undefined2 *)(unaff_BP + -0x60);
            puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
            puVar10[1] = uVar12;
            uVar12 = *(undefined2 *)(unaff_BP + -0x88);
            puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar10[1] = uVar12;
            piVar1 = (int *)(unaff_BP + -0x36);
            *piVar1 = *piVar1 + 1;
            uVar14 = *piVar1 == 0;
            uStack_2 = 0x8d7;
            FUN_32b2_6d14();
            uStack_2 = 0x8e0;
            FUN_32b2_6d14();
            uStack_2 = 0x8e5;
            FUN_32b2_7191();
            if (!(bool)uVar13 && !(bool)uVar14) {
              uStack_2 = *(undefined2 *)(unaff_BP + -0xb8);
              iStack_4 = *(undefined2 *)(unaff_BP + -0xba);
              iStack_6 = *(undefined2 *)(unaff_BP + -0xbc);
              pcStack_8 = (char *)0x32b2;
              iStack_a = 0x8ff;
              FUN_32b2_7592();
              uStack_2 = 0x32b2;
              iStack_4 = 0x909;
              FUN_32b2_6d14();
              uStack_2 = 0x32b2;
              iStack_4 = 0x911;
              FUN_32b2_7154();
              uStack_2 = 0x32b2;
              iStack_4 = 0x916;
              FUN_32b2_6fd6();
              uStack_2 = 0x32b2;
              iStack_4 = 0x91e;
              FUN_32b2_6d14();
              uStack_2 = 0x32b2;
              iStack_4 = 0x927;
              FUN_32b2_710c();
              uStack_2 = 0x32b2;
              iStack_4 = 0x92c;
              FUN_32b2_7182();
              uStack_2 = 0x32b2;
              iStack_4 = 0x935;
              FUN_32b2_6e99();
              uStack_2 = 0x32b2;
              iStack_4 = 0x93d;
              FUN_32b2_710c();
              uStack_2 = 0x32b2;
              iStack_4 = 0x945;
              FUN_32b2_7154();
              uStack_2 = 0x32b2;
              iStack_4 = 0x94e;
              FUN_32b2_6e99();
              uStack_2 = 0x32b2;
              iStack_4 = 0x957;
              FUN_32b2_6eb1();
              uStack_2 = unaff_BP + -0x8a;
              iStack_4 = unaff_BP + -0x62;
              iStack_6 = 0x32b2;
              pcStack_8 = (char *)0x969;
              FUN_32b2_6cc6();
              iStack_6 = 0x32b2;
              pcStack_8 = (char *)0x96e;
              FUN_32b2_7258();
              uStack_e = 0x32b2;
              uStack_10 = 0x978;
              FUN_32b2_6eb1();
              uStack_e = 0x32b2;
              uStack_10 = 0x980;
              FUN_32b2_6cc6();
              uStack_e = 0x32b2;
              uStack_10 = 0x985;
              FUN_32b2_7258();
              uStack_16 = 0x32b2;
              uStack_18 = 0x98f;
              FUN_32b2_6eb1();
              uStack_16 = *(undefined2 *)(unaff_BP + -100);
              uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
              uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
              uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
              uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
              uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
              uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
              uStack_26 = 0x32b2;
              uStack_28 = 0x9b0;
              FUN_32b2_6d14();
              uStack_2e = 0x32b2;
              uStack_30 = 0x9ba;
              FUN_32b2_6eb1();
              uStack_2e = 0x32b2;
              uStack_30 = 0x9c3;
              FUN_32b2_6d14();
              FUN_32b2_6eb1();
              func_0x0003fc09(0x32b2,0);
              uVar13 = &stack0x0000 == (undefined1 *)0x0;
              uStack_2 = 0x32b2;
              iStack_4 = 0x9df;
              FUN_32b2_6cc6();
              uStack_2 = 0x32b2;
              iStack_4 = 0x9e7;
              FUN_32b2_6cc6();
              uStack_2 = 0x32b2;
              iStack_4 = 0x9ec;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uVar12 = *(undefined2 *)(unaff_BP + 8);
                *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
                *(undefined2 *)(unaff_BP + -0x60) = uVar12;
              }
              uStack_2 = 0x32b2;
              iStack_4 = 0xa02;
              FUN_32b2_6cc6();
              uStack_2 = 0x32b2;
              iStack_4 = 0xa0a;
              FUN_32b2_6cc6();
              uStack_2 = 0x32b2;
              iStack_4 = 0xa0f;
              FUN_32b2_7191();
              if ((bool)uVar13) {
                uVar12 = *(undefined2 *)(unaff_BP + 0xc);
                *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
                *(undefined2 *)(unaff_BP + -0x88) = uVar12;
              }
              uVar12 = *(undefined2 *)(unaff_BP + -0x60);
              puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
              *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
              puVar10[1] = uVar12;
              uVar12 = *(undefined2 *)(unaff_BP + -0x88);
              puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
              *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
              puVar10[1] = uVar12;
              *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
            }
            return *(undefined2 *)(unaff_BP + -0x36);
          }
        }
        return 0;
      }
      FUN_32b2_6d14();
      uStack_2 = 0x3ff;
      FUN_32b2_7154();
      FUN_32b2_6eb1();
      *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
      *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
      *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
      *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
      *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
      *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
      *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
      *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
      *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
      *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
      *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
      uStack_2 = *(undefined2 *)(unaff_BP + -0xba);
      iStack_4 = *(undefined2 *)(unaff_BP + -0xbc);
      iStack_6 = 0x32b2;
      pcStack_8 = (char *)0x119;
      FUN_32b2_75fe();
      uStack_2 = 0x123;
      FUN_32b2_6d14();
      uStack_2 = 299;
      FUN_32b2_704d();
      uStack_2 = 0x133;
      FUN_32b2_7095();
    }
    return 0;
  }
  uStack_2 = 0xfebd;
  FUN_3ab8_4341();
  *(undefined2 *)0xc11c = 0xb4;
  if (*(int *)(unaff_BP + 6) == 2) {
    *(undefined2 *)0xc11c = 0x3c;
  }
  if (*(int *)(unaff_BP + 6) == 3) {
    *(undefined2 *)0xc11c = 0x14;
    if (*(int *)(unaff_BP + -0x1ca) == 2) {
      *(undefined2 *)0xc11c = 10;
    }
    if (*(int *)(unaff_BP + -0x1ca) == 3) {
      *(undefined2 *)0xc11c = 4;
    }
    if (*(int *)(unaff_BP + -0x1ca) == 4) {
      *(undefined2 *)0xc11c = 2;
    }
  }
  if (*(int *)(unaff_BP + 0x26) == 0) {
    *(undefined2 *)(unaff_BP + -0x1a4) = 0x3840;
  }
  else {
    *(undefined2 *)(unaff_BP + -0x1a4) = 0x2a30;
  }
  uVar13 = (uint)(*(int *)0xc11c / 2) < *(uint *)(unaff_BP + -0x1a4);
  *(int *)(unaff_BP + -0x6e) = *(int *)0xc11c / 2 - *(uint *)(unaff_BP + -0x1a4);
  uStack_2 = 0xff2e;
  func_0x000297e6();
  uStack_2 = 0xff37;
  func_0x000297e6();
  uStack_2 = 0xff3c;
  FUN_28b3_1181();
  if ((bool)uVar13) {
    uVar12 = *(undefined2 *)0x7582;
    uVar9 = *(undefined2 *)0x7584;
  }
  else {
    uVar12 = *(undefined2 *)0x7586;
    uVar9 = *(undefined2 *)0x7588;
  }
  *(undefined2 *)(unaff_BP + -0x126) = uVar12;
  *(undefined2 *)(unaff_BP + -0x124) = uVar9;
  uStack_2 = 0xff5f;
  func_0x000297e6();
  uStack_2 = 0xff68;
  func_0x00029b6d();
  uStack_2 = 0xff71;
  func_0x00029b6d();
  uStack_2 = 0xff76;
  func_0x00029d78();
  uStack_2 = 0xff7f;
  func_0x00029c2c();
  pcStack_8 = (char *)0x22b2;
  iStack_a = -0x77;
  func_0x000299d1();
  pcStack_8 = (char *)(unaff_BP + -0x6c);
  iStack_a = 0x75c2;
  iStack_c = unaff_BP + -0x4e;
  uStack_e = 0x22b2;
  uStack_10 = 0xff9a;
  FUN_21f2_3454();
  uStack_2 = 0x3c;
  iStack_4 = 0x22b2;
  iStack_6 = 0xffaa;
  FUN_1000_0599();
  uStack_2 = 0xdef;
  iStack_4 = 0xffb5;
  func_0x00012276();
  uStack_2 = *(undefined2 *)(unaff_BP + -0x1a4);
  iStack_4 = 0x11f2;
  iStack_6 = 0xffc1;
  func_0x00031410();
  uStack_2 = 1 - *(int *)0xcb2;
  iStack_4 = 0;
  iStack_6 = 3;
  pcStack_8 = (char *)0x11f2;
  iVar7 = 0xdef;
  iStack_a = -0x25;
  func_0x0000f2cb();
  uStack_2 = unaff_BP + -0x72;
  iStack_4 = unaff_BP + -0x62;
  iStack_6 = unaff_BP + -0x92;
  pcStack_8 = (char *)(unaff_BP + -0x76);
  iStack_a = *(int *)(unaff_BP + 0x1a);
  iStack_c = *(undefined2 *)(unaff_BP + 0x18);
  uStack_e = *(undefined2 *)(unaff_BP + 0x16);
  uStack_10 = *(undefined2 *)(unaff_BP + 0x14);
  uStack_12 = *(undefined2 *)(unaff_BP + 0x12);
  uStack_14 = *(undefined2 *)(unaff_BP + 0x10);
  uStack_16 = *(undefined2 *)(unaff_BP + 0xe);
  uStack_18 = *(undefined2 *)(unaff_BP + 0xc);
  uStack_1a = 0xdef;
  uStack_1c = 0x10;
  FUN_4375_8583();
  *(int *)(unaff_BP + -0x1c2) = *(int *)(unaff_BP + -0x1a4) / -0x3c + 0x17c;
  *(undefined2 *)(unaff_BP + -0x1ce) = *(undefined2 *)(unaff_BP + -0x6e);
  while (*(int *)(unaff_BP + -0x1ce) <= *(int *)(unaff_BP + -0x1a4)) {
    iVar8 = *(int *)(unaff_BP + -0x1ce) / 0x3c + 0x17c;
    *(int *)(unaff_BP + -0x1c4) = iVar8;
    if (iVar8 != *(int *)(unaff_BP + -0x1c2)) {
      uStack_2 = *(undefined2 *)0xcb2;
      iStack_4 = 0;
      iStack_6 = 3;
      iStack_a = 0x1f0;
      pcStack_8 = (char *)iVar7;
      func_0x0000f2cb();
      uStack_2 = 0;
      iStack_4 = 2;
      iStack_6 = 6;
      pcStack_8 = (char *)0x3c;
      iStack_a = *(int *)(unaff_BP + -0x1c4);
      iStack_c = 0x28;
      uStack_e = *(undefined2 *)(unaff_BP + -0x1c2);
      uStack_10 = 0xdef;
      uStack_12 = 0x214;
      func_0x0000f350();
      uStack_2 = 1 - *(int *)0xcb2;
      iStack_4 = 0;
      iStack_6 = 3;
      pcStack_8 = (char *)0xdef;
      iVar7 = 0xdef;
      iStack_a = 0x22f;
      func_0x0000f2cb();
      *(undefined2 *)(unaff_BP + -0x1c2) = *(undefined2 *)(unaff_BP + -0x1c4);
    }
    *(undefined2 *)(unaff_BP + -0x122) = 1;
    while (*(int *)(unaff_BP + -0x122) <= *(int *)0xc3b8) {
      *(undefined2 *)(*(int *)(unaff_BP + -0x122) * 2 + (int)*(undefined4 *)0xb37a) = 0xfff7;
      *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
    }
    uStack_2 = unaff_BP + -0x82;
    iStack_6 = 0x5b;
    iStack_4 = iVar7;
    func_0x000297e6();
    iStack_4 = 0x22b2;
    iStack_6 = 0x60;
    func_0x00029d78();
    iStack_c = 0x22b2;
    uStack_e = 0x6a;
    func_0x000299d1();
    iStack_c = 0x22b2;
    uStack_e = 0x72;
    func_0x000297e6();
    iStack_c = 0x22b2;
    uStack_e = 0x77;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    uStack_16 = 0x81;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    uStack_16 = 0x89;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    uStack_16 = 0x8e;
    func_0x00029d78();
    uStack_1c = 0x22b2;
    uStack_1e = 0x98;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 0xa1;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0xa6;
    func_0x00029d78();
    uStack_24 = 0x22b2;
    uStack_26 = 0xb0;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xb8;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xbd;
    func_0x00029d78();
    uStack_2c = 0x22b2;
    uStack_2e = 199;
    func_0x000299d1();
    uStack_2c = *(undefined2 *)(unaff_BP + -0x1ce);
    uStack_2e = 0x22b2;
    uStack_30 = 0xcf;
    FUN_4375_8709();
    uStack_2 = *(undefined2 *)(unaff_BP + 0x28);
    iStack_4 = *(undefined2 *)(unaff_BP + 0x24);
    iStack_6 = *(int *)(unaff_BP + 0x22);
    pcStack_8 = (char *)*(int *)(unaff_BP + 0x20);
    iStack_a = *(int *)(unaff_BP + 0x1e);
    iStack_c = *(undefined2 *)(unaff_BP + 0x1c);
    uStack_e = *(undefined2 *)(unaff_BP + 10);
    uStack_10 = *(undefined2 *)(unaff_BP + 8);
    uStack_12 = 0x22b2;
    uStack_14 = 0xf5;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xfa;
    func_0x00029d78();
    uStack_1a = 0x22b2;
    uStack_1c = 0x104;
    func_0x000299d1();
    uStack_1a = 0x22b2;
    uStack_1c = 0x10d;
    func_0x000297e6();
    uStack_1a = 0x22b2;
    uStack_1c = 0x112;
    func_0x00029d78();
    iVar7 = 0x22b2;
    uStack_24 = 0x11c;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0x123;
    iVar8 = FUN_4375_8ded();
    *(int *)(unaff_BP + -0x1a0) = iVar8;
    if (iVar8 < 0) {
LAB_3ab8_55b1:
      iStack_4 = 0x139;
      uStack_2 = iVar7;
      func_0x0000daa6();
      uStack_2 = 1 - *(int *)0xcb2;
      iStack_4 = 0;
      iStack_6 = 3;
      pcStack_8 = (char *)0x885;
      iStack_a = 0x152;
      func_0x0000f2cb();
      uStack_2 = 0;
      iStack_4 = 2;
      iStack_6 = 0;
      pcStack_8 = (char *)*(undefined2 *)0x1b40;
      iStack_a = *(int *)0x1b3e;
      iStack_c = 0;
      uStack_e = 0;
      uStack_10 = 0xdef;
      uStack_12 = 0x16f;
      func_0x0000f350();
      *(undefined2 *)0x11c = 1;
      uStack_2 = 0x17d;
      FUN_1885_2ec3();
      uStack_2 = 0x12;
      iStack_4 = 0x1b6e;
      iStack_6 = 0x18a;
      FUN_1000_0599();
      uStack_2 = 0x191;
      func_0x00010526();
      uVar12 = 0x885;
      uStack_2 = 0x196;
      func_0x0000a7c5();
      *(undefined2 *)0xc08 = 0;
      *(undefined2 *)0xbc0 = 1;
      if (*(int *)(unaff_BP + -0x1a0) != -1) {
        if (*(int *)(unaff_BP + -0x1a0) != -2) {
          uStack_2 = 0x885;
          iStack_4 = 0x96d;
          func_0x0001470b();
          return 1;
        }
        uStack_2 = 0x885;
        iStack_4 = 0x93d;
        func_0x00012276();
        *(undefined2 *)0xc22 = 2;
        uStack_2 = 0x14;
        iStack_4 = 0x11f2;
        iStack_6 = 0x951;
        FUN_1000_0599();
        uStack_2 = 0x1de;
        iStack_4 = 0xdef;
        uVar12 = 0x11f2;
        iStack_6 = 0x960;
        func_0x00012276();
      }
      iStack_4 = 0x1b4;
      uStack_2 = uVar12;
      func_0x0001470b();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(unaff_BP + -0x1ce) = *(int *)(unaff_BP + -0x1ce) + *(int *)0xc11c;
  }
  iStack_4 = 0x24b;
  uStack_2 = iVar7;
  func_0x0000daa6();
  uStack_2 = *(undefined2 *)0xcb2;
  iStack_4 = 0;
  iStack_6 = 3;
  pcStack_8 = (char *)0x885;
  iStack_a = 0x260;
  func_0x0000f2cb();
  uStack_2 = 0x268;
  func_0x0000a799();
  uStack_2 = 0;
  iStack_4 = 2;
  iStack_6 = 6;
  pcStack_8 = (char *)0x3c;
  iStack_a = 0x26c;
  iStack_c = 0x28;
  uStack_e = 0x8c;
  uStack_10 = 0x885;
  uStack_12 = 0x289;
  func_0x0000f350();
  *(undefined2 *)(unaff_BP + -0x122) = 2;
  do {
    uStack_2 = 0x12;
    iStack_4 = 0xdef;
    iStack_6 = 0x29f;
    FUN_1000_0599();
    uStack_2 = 0x2a6;
    func_0x00010526();
    *(int *)(unaff_BP + -0x122) = *(int *)(unaff_BP + -0x122) + 1;
  } while (*(int *)(unaff_BP + -0x122) < 0x18);
  uStack_2 = 1;
  iStack_4 = 0xdef;
  iStack_6 = 699;
  FUN_1000_0599();
  uStack_2 = 0x2c2;
  FUN_1885_2ec3();
  uStack_2 = 0x1b6e;
  iVar7 = 0x11f2;
  iStack_4 = 0x2ca;
  func_0x0001470b();
  uVar12 = *(undefined2 *)0x14a;
  *(undefined2 *)(unaff_BP + -0x58) = *(undefined2 *)0x148;
  *(undefined2 *)(unaff_BP + -0x56) = uVar12;
  *(undefined2 *)(unaff_BP + -0x19e) = *(undefined2 *)0x150;
LAB_3ab8_575f:
  do {
    while( true ) {
      uStack_2 = *(undefined2 *)0xcb2;
      iStack_4 = 0;
      iStack_6 = 3;
      iStack_a = 0x2f3;
      pcStack_8 = (char *)iVar7;
      func_0x0000f2cb();
      uVar12 = 0x885;
      uStack_2 = 0x2fb;
      func_0x0000a799();
      if (*(int *)(unaff_BP + 6) == 3) {
        uVar12 = 0x1b6e;
        uStack_2 = 0x306;
        FUN_1885_2ec3();
        uStack_2 = unaff_BP + -0xa4;
        iStack_4 = 0x1b6e;
        iStack_6 = 0x314;
        FUN_4375_b6b9();
      }
      *(undefined2 *)0x11c = 10;
      *(undefined2 *)0xc08 = 1;
      *(undefined2 *)0xc22 = 1;
      uStack_2 = 0x30;
      iStack_6 = 0x332;
      iStack_4 = uVar12;
      FUN_1000_0599();
      uStack_2 = 0xdef;
      iVar7 = 0x11f2;
      iStack_4 = 0x33d;
      func_0x00012276();
      if (*(char *)0x7638 == '\0') {
        uStack_2 = 7;
        iStack_4 = 2;
        iStack_6 = 0x43;
        pcStack_8 = (char *)0x75ce;
        iStack_a = 0x11f2;
        iVar7 = 0xdef;
        iStack_c = 0x35e;
        FUN_1000_02b5();
      }
      uStack_2 = 7;
      iStack_4 = 2;
      iStack_6 = 0x45;
      pcStack_8 = (char *)0x658;
      iStack_c = 0x37a;
      iStack_a = iVar7;
      FUN_1000_02b5();
      if (*(int *)(unaff_BP + 0x2a) != 0 || *(int *)(unaff_BP + 0x28) != 0) {
        *(undefined2 *)0xc22 = 2;
        uStack_2 = 2;
        iStack_4 = 3;
        iStack_6 = 0x41;
        pcStack_8 = (char *)0x11cc;
        iStack_a = 0xdef;
        iStack_c = 0x3a2;
        FUN_1000_02b5();
        if (*(char *)*(undefined2 *)(unaff_BP + 0x2c) != '\0') {
          uStack_2 = 6;
          iStack_4 = 3;
          iStack_6 = 0x1e;
          iStack_a = 0xdef;
          iStack_c = 0x3c3;
          pcStack_8 = (char *)*(undefined2 *)(unaff_BP + 0x2c);
          FUN_1000_02b5();
        }
      }
      *(undefined2 *)(unaff_BP + -0x7a) = 10000;
      uVar5 = *(uint *)(unaff_BP + -0x56);
      uVar6 = *(uint *)0x14a;
      uVar13 = uVar6 < uVar5;
      if (((int)uVar5 <= (int)uVar6) &&
         (((int)uVar5 < (int)uVar6 ||
          (uVar13 = *(uint *)0x148 < *(uint *)(unaff_BP + -0x58),
          *(uint *)(unaff_BP + -0x58) < *(uint *)0x148)))) {
        *(undefined2 *)(unaff_BP + -0x7a) = 9999;
      }
      uStack_2 = 0xdef;
      iStack_4 = 0x3ed;
      func_0x000257c0();
      uVar12 = *(undefined2 *)0xa9d2;
      *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)0xa9d0;
      *(undefined2 *)(unaff_BP + -0x84) = uVar12;
      uStack_2 = unaff_BP + -0x196;
      iStack_4 = 0x22b2;
      iStack_6 = 0x40b;
      FUN_21f2_3454();
      while( true ) {
        uStack_2 = 0x4a2;
        func_0x000297e6();
        uStack_2 = 0x4ab;
        func_0x000297e6();
        uStack_2 = 0x4b0;
        FUN_28b3_1181();
        if ((bool)uVar13) break;
        uStack_2 = 0x419;
        func_0x000297e6();
        uStack_2 = 0x41e;
        func_0x00029d78();
        pcStack_8 = (char *)0x22b2;
        iStack_a = 0x428;
        func_0x000299d1();
        pcStack_8 = (char *)0x75dc;
        iStack_a = unaff_BP + -0x1c0;
        iStack_c = 0x22b2;
        uStack_e = 0x436;
        FUN_21f2_3454();
        uVar13 = (undefined1 *)0xfff3 < &iStack_a;
        uStack_2 = unaff_BP + -0x196;
        iStack_4 = 0x22b2;
        iStack_6 = 0x448;
        FUN_21f2_2d26();
        uStack_2 = 0x453;
        func_0x000297e6();
        uStack_2 = 0x45c;
        func_0x000297e6();
        uStack_2 = 0x461;
        FUN_28b3_1181();
        if ((bool)uVar13) {
          uStack_2 = 0x46c;
          func_0x000297e6();
          uStack_2 = 0x471;
          func_0x00029d78();
          uStack_2 = 0x47a;
          func_0x00029c74();
        }
        else {
          uStack_2 = 0x489;
          func_0x000297e6();
          uStack_2 = 0x22b2;
          iStack_4 = 0x493;
          func_0x00029bb5();
        }
        uStack_2 = 0x499;
        func_0x00029983();
      }
      uStack_2 = unaff_BP + -0x196;
      iStack_4 = 0x22b2;
      iStack_6 = 0x4c3;
      FUN_21f2_2d26();
      uStack_2 = unaff_BP + -0x196;
      iStack_4 = 0x22b2;
      iStack_6 = 0x4d3;
      FUN_21f2_2d26();
      uStack_2 = unaff_BP + -0x196;
      iStack_4 = 0x22b2;
      iStack_6 = 0x4e3;
      FUN_21f2_2d26();
      uStack_2 = unaff_BP + -0x196;
      iStack_4 = 0x22b2;
      iStack_6 = 0x4f3;
      FUN_21f2_2d26();
      uStack_2 = unaff_BP + -0x196;
      iStack_4 = 0x22b2;
      iStack_6 = 0x503;
      FUN_21f2_2d26();
      uStack_2 = 9;
      iStack_4 = 0x22b2;
      iStack_6 = 0x513;
      FUN_1def_07a4();
      uStack_2 = unaff_BP + -0x1d2;
      iStack_4 = unaff_BP + -0x1c8;
      iStack_6 = unaff_BP + -0x196;
      pcStack_8 = (char *)*(int *)(unaff_BP + -0x7a);
      iStack_a = 0x1bb4;
      iStack_c = 0x531;
      uVar12 = FUN_1def_0904();
      *(undefined2 *)(unaff_BP + -0x1cc) = uVar12;
      if (*(char *)0x118 == '\0') break;
LAB_3ab8_59bf:
      *(undefined2 *)0x158 = 0;
      *(undefined1 *)0x118 = 0;
      uStack_2 = 0x1bb4;
      iVar7 = 0x22b2;
      iStack_4 = 0x553;
      func_0x000257c0();
    }
    uStack_2 = 0x1bb4;
    iVar7 = 0x885;
    iStack_4 = 0x55f;
    func_0x0000daa6();
    *(undefined2 *)(unaff_BP + -0x94) = *(undefined2 *)0x158;
    if (*(int *)(unaff_BP + -0x1cc) != 8) {
      while ((*(int *)(unaff_BP + -0x94) != 0 || (*(int *)(unaff_BP + -0x1cc) == 9))) {
        uStack_2 = unaff_BP + -0x196;
        iStack_6 = 0x5a4;
        iStack_4 = iVar7;
        FUN_21f2_3454();
        uStack_2 = unaff_BP + -0x196;
        iStack_4 = 0x22b2;
        iStack_6 = 0x5b4;
        FUN_21f2_2d26();
        uStack_2 = unaff_BP + -0x196;
        iStack_4 = 0x22b2;
        iStack_6 = 0x5c4;
        FUN_21f2_2d26();
        *(undefined2 *)(unaff_BP + -0x78) = *(undefined2 *)0xa62;
        *(undefined2 *)0xa62 = 0x1d;
        *(undefined2 *)0x158 = 0;
        *(undefined2 *)0xc22 = 1;
        uStack_2 = unaff_BP + -0x1d2;
        iStack_4 = unaff_BP + -0x1c8;
        iStack_6 = unaff_BP + -0x196;
        pcStack_8 = (char *)0x2710;
        iStack_a = 0x22b2;
        iVar7 = 0x1bb4;
        iStack_c = 0x5fb;
        iVar8 = FUN_1def_0904();
        *(int *)(unaff_BP + -0x1a2) = iVar8;
        if (*(char *)0x118 != '\0') goto LAB_3ab8_59bf;
        if (*(int *)0x158 != 0) goto LAB_3ab8_55b1;
        if ((iVar8 == 1) || (*(int *)(unaff_BP + -0x108) == 1)) {
          *(undefined2 *)0x158 = *(undefined2 *)(unaff_BP + -0x94);
          *(undefined2 *)0xa62 = *(undefined2 *)(unaff_BP + -0x78);
          goto LAB_3ab8_55b1;
        }
        if ((iVar8 == 2) || (*(int *)(unaff_BP + -0x108) == 2)) break;
      }
      if (*(int *)(unaff_BP + -0x1cc) == -1) {
        uStack_2 = *(undefined2 *)0xcb2;
        iStack_4 = 0;
        iStack_6 = 3;
        iStack_a = 0x65c;
        pcStack_8 = (char *)iVar7;
        func_0x0000f2cb();
        uStack_2 = 0x664;
        func_0x0000a799();
        uStack_2 = 0x669;
        FUN_1885_2ec3();
        uStack_2 = 0x1b6e;
        while (*(int *)(unaff_BP + -0x19e) < *(int *)0x150) {
          *(int *)(unaff_BP + -0x1a2) = *(int *)0x150;
          iStack_4 = 0x675;
          func_0x000190c7();
          uStack_2 = 0x18b3;
        }
        uVar12 = *(undefined2 *)(unaff_BP + -0x56);
        *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x58);
        *(undefined2 *)0x14a = uVar12;
        uStack_2 = 0x691;
        func_0x0000abfa();
        uStack_2 = 0x885;
        iStack_4 = 0x69a;
        func_0x0000b1d8();
        uStack_2 = 0x885;
        iVar7 = 0x11f2;
        iStack_4 = 0x6a3;
        func_0x0001470b();
      }
      if ((0 < *(int *)(unaff_BP + -0x1cc)) && (*(int *)(unaff_BP + -0x1cc) < 8)) {
        iVar7 = 0x885;
        uStack_2 = 0x6bd;
        func_0x0000c3ca();
        uVar12 = *(undefined2 *)0x14a;
        *(undefined2 *)(unaff_BP + -0x58) = *(undefined2 *)0x148;
        *(undefined2 *)(unaff_BP + -0x56) = uVar12;
        *(undefined2 *)(unaff_BP + -0x19e) = *(undefined2 *)0x150;
        while (*(int *)(unaff_BP + -0x1cc) == 7) {
          uVar12 = *(undefined2 *)0xa8fc;
          uVar9 = *(undefined2 *)0xa8fe;
          *(undefined2 *)(unaff_BP + -0x8a) = uVar12;
          *(undefined2 *)(unaff_BP + -0x88) = uVar9;
          *(undefined2 *)(unaff_BP + -0xa8) = uVar12;
          *(undefined2 *)(unaff_BP + -0xa6) = uVar9;
          uStack_2 = 0x6f7;
          func_0x0001bb4e();
          uStack_2 = 0x1bb4;
          iStack_4 = 0x700;
          func_0x00012276();
          uStack_2 = 0x17;
          iStack_4 = unaff_BP + -0x1d2;
          iStack_6 = unaff_BP + -0x1c8;
          pcStack_8 = (char *)(unaff_BP + -0xa8);
          iStack_a = unaff_BP + -0x8a;
          iStack_c = 0x11f2;
          iVar7 = 0xad;
          uStack_e = 0x722;
          iVar8 = func_0x000021a4();
          *(int *)(unaff_BP + -0x122) = iVar8;
          if ((iVar8 == -1) || (*(int *)0x158 != 0)) goto LAB_3ab8_575f;
          uVar13 = 0;
          uVar14 = *(int *)(unaff_BP + -0x122) == 0;
          if ((bool)uVar14) {
            uStack_2 = 0x746;
            func_0x000297e6();
            uStack_2 = 0x74f;
            func_0x000297e6();
            uStack_2 = 0x754;
            FUN_28b3_1181();
            if ((bool)uVar13 || (bool)uVar14) {
              uStack_2 = 0x75f;
              func_0x000297e6();
              uStack_2 = 0x768;
              func_0x000297e6();
              iVar7 = 0x22b2;
              uStack_2 = 0x76d;
              FUN_28b3_1181();
              if ((bool)uVar13 || (bool)uVar14) {
                uVar12 = *(undefined2 *)(unaff_BP + -0x88);
                *(undefined2 *)(unaff_BP + -0x132) = *(undefined2 *)(unaff_BP + -0x8a);
                *(undefined2 *)(unaff_BP + -0x130) = uVar12;
                break;
              }
            }
            iVar7 = 0x22b2;
          }
        }
        if (*(int *)(unaff_BP + -0x1cc) < 7) {
          uStack_2 = 0x792;
          FUN_28b3_0d8b();
          uStack_2 = 0x79b;
          func_0x0002996b();
          uStack_2 = 0x7a3;
          FUN_28b3_0ee9();
          if (*(int *)(unaff_BP + -0x1cc) < 4) {
            uStack_2 = 0x7b3;
            func_0x000297e6();
            uStack_2 = 0x7bc;
            func_0x00029b6d();
            uStack_2 = 0x7c1;
            func_0x00029d78();
            uStack_2 = 0x7ca;
            func_0x00029c74();
          }
          else {
            *(int *)(unaff_BP + -0x1e4) = *(int *)(unaff_BP + -0x1cc) + -1;
            uStack_2 = 0x7de;
            FUN_28b3_0d8b();
          }
          iVar7 = 0x22b2;
          uStack_2 = 0x7e7;
          func_0x00029983();
        }
        iStack_4 = 0x7ef;
        uStack_2 = iVar7;
        func_0x0000daa6();
        uStack_2 = 1 - *(int *)0xcb2;
        iStack_4 = 0;
        iStack_6 = 3;
        pcStack_8 = (char *)0x885;
        iStack_a = 0x808;
        func_0x0000f2cb();
        uStack_2 = 0x23;
        iStack_4 = 0xdef;
        iStack_6 = 0x818;
        FUN_1000_0599();
        uStack_2 = 0xdef;
        uVar12 = 0x11f2;
        iStack_4 = 0x823;
        func_0x00012276();
        uVar5 = *(uint *)0x148;
        iVar7 = *(int *)0x14a;
        *(int *)(unaff_BP + -0x106) = uVar5 + 1;
        *(int *)(unaff_BP + -0x104) = iVar7 + (uint)(0xfffe < uVar5);
        *(undefined1 *)(unaff_BP + -0x102) = 0;
        if (*(char *)0x7638 != '\0') {
          uStack_2 = unaff_BP + -0x102;
          iStack_4 = 0x11f2;
          iStack_6 = 0x853;
          func_0x00024c86();
          uStack_2 = unaff_BP + -0x102;
          iStack_4 = 0x22b2;
          uVar12 = 0x22b2;
          iStack_6 = 0x863;
          FUN_21f2_2d26();
          if ((*(int *)(unaff_BP + 0x2a) != 0 || *(int *)(unaff_BP + 0x28) != 0) &&
             (*(char *)*(undefined2 *)(unaff_BP + 0x2c) != '\0')) {
            uStack_2 = unaff_BP + -0x102;
            iStack_4 = 0x22b2;
            iStack_6 = 0x883;
            FUN_21f2_2d26();
            uStack_2 = unaff_BP + -0x102;
            iStack_4 = 0x22b2;
            uVar12 = 0x22b2;
            iStack_6 = 0x892;
            FUN_21f2_2d26();
          }
        }
        uStack_2 = *(undefined2 *)(unaff_BP + 0x2a);
        iStack_4 = *(undefined2 *)(unaff_BP + 0x28);
        pcStack_8 = (char *)0x8a8;
        iStack_6 = uVar12;
        func_0x000297e6();
        iStack_6 = 0x22b2;
        pcStack_8 = (char *)0x8ad;
        func_0x00029d78();
        uStack_e = 0x22b2;
        uVar12 = 0x22b2;
        uStack_10 = 0x8b7;
        func_0x000299d1();
        uStack_e = 0x22b2;
        uStack_10 = 0x8bb;
        FUN_4375_76b2();
        uStack_2 = *(uint *)(unaff_BP + -0x106);
        if ((*(int *)(unaff_BP + -0x104) <= *(int *)0x14a) &&
           ((*(int *)(unaff_BP + -0x104) < *(int *)0x14a || (uStack_2 < *(uint *)0x148)))) {
          iStack_4 = 0x22b2;
          iStack_6 = 0x8db;
          uVar15 = func_0x0000013f();
          uVar12 = (undefined2)((ulong)uVar15 >> 0x10);
          iVar7 = (int)uVar15;
          *(int *)(unaff_BP + -0x5e) = iVar7;
          *(undefined2 *)(unaff_BP + -0x5c) = uVar12;
          *(byte *)(iVar7 + 0x14) = *(byte *)(iVar7 + 0x14) | 0x40;
          *(byte *)(iVar7 + 0x14) = *(byte *)(iVar7 + 0x14) & 0x7f;
          uStack_2 = *(undefined2 *)0x148;
          iStack_4 = 0;
          uVar12 = 0;
          iStack_6 = 0x8fe;
          uVar15 = func_0x0000013f();
          pbVar2 = (byte *)((int)uVar15 + 0x14);
          *pbVar2 = *pbVar2 | 0x40;
        }
        uStack_2 = *(undefined2 *)0xcb2;
        iStack_4 = 0;
        iStack_6 = 3;
        iStack_a = 0x91d;
        pcStack_8 = (char *)uVar12;
        func_0x0000f2cb();
        uStack_2 = 0x925;
        func_0x0000a799();
        iVar7 = 0x885;
        uStack_2 = 0x92a;
        func_0x0000abfa();
      }
      goto LAB_3ab8_575f;
    }
    if (*(char *)0x7638 == '\0') {
      *(undefined1 *)0x7638 = 1;
    }
    else {
      *(undefined1 *)0x7638 = 0;
    }
  } while( true );
}



/* 3ab8:5df6  FUN_3ab8_5df6  2503 bytes, 0 callers */

int __cdecl16far
FUN_3ab8_5df6(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,
             undefined2 param_10,undefined1 *param_11,int param_12,undefined2 param_13,
             undefined2 param_14,undefined2 param_15,undefined2 param_16,undefined2 param_17,
             undefined2 param_18,undefined2 param_19,int param_20,int param_21,int param_22,
             char *param_23)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int aiStack_1730 [55];
  int aiStack_16c2 [1210];
  int aiStack_d4e [1209];
  char acStack_3db [487];
  int aiStack_1f4 [55];
  int aiStack_186 [55];
  int local_118;
  int local_10e;
  int local_106;
  int local_102;
  int local_fe;
  int local_fa;
  int local_f8;
  int local_f6;
  undefined1 local_f4 [104];
  int local_8c;
  int local_86;
  int local_84;
  undefined1 local_72 [4];
  undefined1 local_6e [8];
  int local_66;
  undefined2 local_64;
  int local_62;
  undefined1 local_60 [4];
  undefined1 local_5c [6];
  undefined1 local_56 [4];
  undefined1 local_52 [4];
  int local_4e;
  undefined1 local_48 [12];
  int local_3c;
  int local_3a;
  undefined2 local_38;
  undefined2 uStack_36;
  int iStack_34;
  int local_30;
  undefined2 local_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  int iStack_16;
  undefined2 uStack_14;
  undefined1 *puStack_12;
  undefined2 *puStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  char *pcStack_8;
  
  FUN_21f2_0ebc();
  *(undefined2 *)0x11c = 10;
  pcStack_8 = (char *)0x0;
  puStack_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x991;
  func_0x0000daa6();
  pcStack_8 = (char *)*(undefined2 *)0xcb4;
  puStack_a = (undefined1 *)*(undefined2 *)0xcb2;
  puStack_c = (undefined1 *)0x0;
  puStack_e = (undefined1 *)0x3;
  puStack_10 = (undefined2 *)0x885;
  puStack_12 = (undefined1 *)0x9a6;
  func_0x0000f2cb();
  pcStack_8 = (char *)0xdef;
  puStack_a = (undefined1 *)0x9ae;
  func_0x0000a799();
  pcStack_8 = (char *)0x885;
  puStack_a = (undefined1 *)0x9b3;
  func_0x0000c3ca();
  pcStack_8 = (char *)0x1;
  puStack_a = (undefined1 *)0x1c;
  puStack_c = (undefined1 *)0x885;
  puStack_e = (undefined1 *)0x9c0;
  FUN_1000_0599();
  pcStack_8 = (char *)0x8a6;
  puStack_a = (undefined1 *)0xdef;
  puStack_c = (undefined1 *)0x9cb;
  func_0x00012276();
  pcStack_8 = (char *)0x0;
  puStack_a = (undefined1 *)0x11f2;
  puStack_c = (undefined1 *)0x9d4;
  func_0x0000daa6();
  pcStack_8 = (char *)*(undefined2 *)0xcb4;
  puStack_a = (undefined1 *)(1 - *(int *)0xcb2);
  puStack_c = (undefined1 *)0x0;
  puStack_e = (undefined1 *)0x3;
  puStack_10 = (undefined2 *)0x885;
  uVar7 = 0xdef;
  puStack_12 = (undefined1 *)0x9ed;
  func_0x0000f2cb();
  for (local_8c = 1; local_8c <= param_2; local_8c = local_8c + 1) {
    iVar4 = local_8c << 2;
    puStack_a = (undefined1 *)0xa0f;
    pcStack_8 = (char *)uVar7;
    func_0x000297e6();
    pcStack_8 = (char *)0x22b2;
    puStack_a = (undefined1 *)0xa14;
    func_0x00029d78();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined1 *)0xa1e;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined1 *)0xa2e;
    local_118 = iVar4;
    func_0x000297e6();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined1 *)0xa33;
    func_0x00029d78();
    puStack_18 = (undefined1 *)0x22b2;
    uStack_1a = 0xa3d;
    func_0x000299d1();
    puStack_18 = (undefined1 *)0x1;
    uStack_1a = 0x22b2;
    uStack_1c = 0xa46;
    puVar3 = (undefined2 *)FUN_1def_05d1();
    uVar7 = puVar3[1];
    uVar5 = (undefined2)((ulong)*(undefined4 *)0xc086 >> 0x10);
    iVar4 = (int)*(undefined4 *)0xc086;
    *(undefined2 *)(local_118 + iVar4) = *puVar3;
    *(undefined2 *)(local_118 + iVar4 + 2) = uVar7;
    pcStack_8 = (char *)0x1bb4;
    puStack_a = (undefined1 *)0xa6a;
    func_0x000297e6();
    pcStack_8 = (char *)0x22b2;
    puStack_a = (undefined1 *)0xa6f;
    func_0x00029d78();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined1 *)0xa79;
    func_0x000299d1();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined1 *)0xa80;
    func_0x000297e6();
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined1 *)0xa85;
    func_0x00029d78();
    puStack_18 = (undefined1 *)0x22b2;
    uStack_1a = 0xa8f;
    func_0x000299d1();
    puStack_18 = (undefined1 *)0x1;
    uStack_1a = 0x22b2;
    uVar7 = 0x1bb4;
    uStack_1c = 0xa98;
    puVar3 = (undefined2 *)func_0x0001e558();
    uVar5 = puVar3[1];
    uVar6 = (undefined2)((ulong)*(undefined4 *)0xc09a >> 0x10);
    iVar4 = (int)*(undefined4 *)0xc09a;
    *(undefined2 *)(local_118 + iVar4) = *puVar3;
    *(undefined2 *)(local_118 + iVar4 + 2) = uVar5;
  }
  local_8c = 1;
  uVar5 = *(undefined2 *)0xb48e;
  do {
    *(undefined2 *)(local_8c * 2 + *(int *)0xb48c) = 0;
    local_8c = local_8c + 1;
  } while (local_8c < 0x7919);
  pcStack_8 = (char *)*(undefined2 *)0xcb4;
  puStack_a = (undefined1 *)*(undefined2 *)0xcb2;
  puStack_c = (undefined1 *)0x0;
  puStack_e = (undefined1 *)0x3;
  puStack_12 = (undefined1 *)0xafa;
  puStack_10 = (undefined2 *)uVar7;
  func_0x0000f2cb();
  pcStack_8 = (char *)0xdef;
  puStack_a = (undefined1 *)0xb02;
  func_0x0000a799();
  *(undefined2 *)0xc11c = 0x3c;
  if (param_20 == 0) {
    local_102 = 0x3840;
  }
  else {
    local_102 = 0x2a30;
  }
  pcStack_8 = (char *)0x1;
  puStack_a = (undefined1 *)0x3c;
  puStack_c = (undefined1 *)0x885;
  puStack_e = (undefined1 *)0xb29;
  FUN_1000_0599();
  pcStack_8 = (char *)0x7639;
  puStack_a = (undefined1 *)0xdef;
  puStack_c = (undefined1 *)0xb34;
  func_0x00012276();
  pcStack_8 = (char *)param_20;
  puStack_a = (undefined1 *)local_102;
  puStack_c = (undefined1 *)0x11f2;
  puStack_e = (undefined1 *)0xb40;
  FUN_3ab8_6890();
  pcStack_8 = (char *)*(undefined2 *)0xcb4;
  puStack_a = (undefined1 *)(1 - *(int *)0xcb2);
  puStack_c = (undefined1 *)0x0;
  puStack_e = (undefined1 *)0x3;
  puStack_10 = (undefined2 *)0x11f2;
  puStack_12 = (undefined1 *)0xb5a;
  func_0x0000f2cb();
  pcStack_8 = local_6e;
  puStack_a = local_52;
  puStack_c = local_48;
  puStack_e = local_72;
  puStack_10 = (undefined2 *)local_56;
  puStack_12 = (undefined1 *)param_14;
  uStack_14 = param_13;
  iStack_16 = param_12;
  puStack_18 = param_11;
  uStack_1a = param_10;
  uStack_1c = param_9;
  uStack_1e = param_8;
  uStack_20 = param_7;
  uStack_22 = 0xdef;
  uStack_24 = 0xb8d;
  FUN_4375_8583();
  local_30 = 0;
  *(int *)*(undefined4 *)0xb37a = param_2;
  local_10e = -local_102;
  while( true ) {
    if (local_102 < local_10e) {
      pcStack_8 = (char *)0x0;
      puStack_a = (undefined1 *)0xdef;
      puStack_c = (undefined1 *)0xd64;
      func_0x0000daa6();
      pcStack_8 = (char *)*(undefined2 *)0xcb4;
      puStack_a = (undefined1 *)*(undefined2 *)0xcb2;
      puStack_c = (undefined1 *)0x0;
      puStack_e = (undefined1 *)0x3;
      puStack_10 = (undefined2 *)0x885;
      puStack_12 = (undefined1 *)0xd79;
      func_0x0000f2cb();
      pcStack_8 = (char *)0x5;
      puStack_a = (undefined1 *)0x12;
      puStack_c = (undefined1 *)0xdef;
      puStack_e = (undefined1 *)0xd89;
      FUN_1000_0599();
      pcStack_8 = (char *)0xdef;
      puStack_a = (undefined1 *)0xd90;
      func_0x00010526();
      pcStack_8 = (char *)0x0;
      puStack_a = (undefined1 *)0xdef;
      puStack_c = (undefined1 *)0xd98;
      func_0x0001470b();
      pcStack_8 = (char *)0x11f2;
      puStack_a = (undefined1 *)0xd9e;
      func_0x0000c3ca();
      if (param_20 == 0) {
        local_102 = 0x1e0;
        local_fa = 8;
      }
      else {
        local_102 = 0x168;
        local_fa = 9;
      }
      if (0 < param_2) {
        local_118 = 0x14;
        pcStack_8 = (char *)0x0;
        puStack_a = (undefined1 *)0x885;
        puStack_c = (undefined1 *)0xdd5;
        func_0x0000daa6();
        pcStack_8 = (char *)*(undefined2 *)0xcb4;
        puStack_a = (undefined1 *)(1 - *(int *)0xcb2);
        puStack_c = (undefined1 *)0x0;
        puStack_e = (undefined1 *)0x3;
        puStack_10 = (undefined2 *)0x885;
        uVar7 = 0xdef;
        puStack_12 = (undefined1 *)0xdee;
        func_0x0000f2cb();
        for (local_8c = 1; local_8c <= param_2; local_8c = local_8c + 1) {
          for (local_f6 = 0; local_f6 <= local_102; local_f6 = local_f6 + 1) {
            acStack_3db[local_f6 + 1] = '\0';
          }
          for (local_f6 = 0; iVar4 = local_f6, local_f6 <= local_102; local_f6 = local_f6 + 1) {
            uVar5 = (undefined2)((ulong)*(undefined4 *)0xb48c >> 0x10);
            if ((*(int *)((local_8c * 500 + local_f6) * 2 + (int)*(undefined4 *)0xb48c) != 0) &&
               (((acStack_3db[local_f6 + 1] = '\x01', iVar2 = local_f6,
                 param_22 == 0 && param_21 == 0 ||
                 (*(int *)((local_8c * 500 + iVar4) * 2 + *(int *)0xb48c) < 10000)) &&
                (acStack_3db[local_f6 + 2] = '\x01', 0 < iVar2)))) {
              acStack_3db[iVar2] = '\x01';
            }
          }
          acStack_3db[local_102 + 2] = '\0';
          iVar4 = local_8c;
          bVar1 = false;
          local_86 = 0;
          aiStack_1f4[local_8c] = 0;
          aiStack_1730[iVar4] = 0;
          for (local_f6 = 0; local_f6 <= local_102; local_f6 = local_f6 + 1) {
            if (acStack_3db[local_f6 + 1] != '\0') {
              if (acStack_3db[local_f6 + 2] != '\0') {
                aiStack_1f4[local_8c] = aiStack_1f4[local_8c] + 1;
              }
              if (!bVar1) {
                bVar1 = true;
                local_86 = local_86 + 1;
                if (local_118 < local_86) {
                  pcStack_8 = (char *)0x0;
                  puStack_c = (undefined1 *)0xee1;
                  puStack_a = (undefined1 *)uVar7;
                  func_0x0000daa6();
                  pcStack_8 = (char *)*(undefined2 *)0xcb4;
                  puStack_a = (undefined1 *)*(undefined2 *)0xcb2;
                  puStack_c = (undefined1 *)0x0;
                  puStack_e = (undefined1 *)0x3;
                  puStack_10 = (undefined2 *)0x885;
                  puStack_12 = (undefined1 *)0xef6;
                  func_0x0000f2cb();
                  pcStack_8 = (char *)0xdef;
                  puStack_a = (undefined1 *)0xefe;
                  func_0x0000a799();
                  pcStack_8 = (char *)0x402;
                  puStack_a = local_f4;
                  puStack_c = (undefined1 *)0x885;
                  puStack_e = (undefined1 *)0xf0c;
                  FUN_21f2_3454();
                  pcStack_8 = (char *)0x7642;
                  puStack_a = local_f4;
                  puStack_c = (undefined1 *)0x22b2;
                  puStack_e = (undefined1 *)0xf1c;
                  FUN_21f2_2d26();
                  pcStack_8 = (char *)0x764;
                  puStack_a = local_f4;
                  puStack_c = (undefined1 *)0x22b2;
                  puStack_e = (undefined1 *)0xf2c;
                  FUN_21f2_2d26();
                  pcStack_8 = local_f4;
                  puStack_a = (undefined1 *)0x22b2;
                  uVar7 = 0x11f2;
                  puStack_c = (undefined1 *)0xf38;
                  FUN_13bf_0a03();
                }
                aiStack_1730[local_8c] = aiStack_1730[local_8c] + 1;
                iVar4 = local_8c * 0x16 + local_86;
                aiStack_d4e[iVar4] = local_f6;
                aiStack_16c2[iVar4] = -1;
              }
              if ((bVar1) && (acStack_3db[local_f6 + 2] == '\0')) {
                bVar1 = false;
                aiStack_16c2[local_8c * 0x16 + local_86] = local_f6;
              }
            }
          }
          if ((0 < local_86) && (iVar4 = local_8c * 0x16 + local_86, aiStack_16c2[iVar4] < 0)) {
            aiStack_16c2[iVar4] = local_102;
          }
          aiStack_186[local_8c] = local_86;
        }
        pcStack_8 = (char *)0x0;
        puStack_c = (undefined1 *)0xfeb;
        puStack_a = (undefined1 *)uVar7;
        func_0x0000daa6();
        pcStack_8 = (char *)*(undefined2 *)0xcb4;
        puStack_a = (undefined1 *)*(undefined2 *)0xcb2;
        puStack_c = (undefined1 *)0x0;
        puStack_e = (undefined1 *)0x3;
        puStack_10 = (undefined2 *)0x885;
        puStack_12 = (undefined1 *)0x1000;
        func_0x0000f2cb();
        pcStack_8 = (char *)0xdef;
        puStack_a = (undefined1 *)0x1008;
        func_0x0000a799();
        pcStack_8 = (char *)0x1;
        puStack_a = (undefined1 *)0x1;
        puStack_c = (undefined1 *)0x885;
        puStack_e = (undefined1 *)0x1012;
        FUN_1000_0599();
        pcStack_8 = (char *)0xdef;
        puStack_a = (undefined1 *)0x1019;
        func_0x00010526();
        pcStack_8 = (char *)0x1;
        puStack_a = (undefined1 *)0x14;
        puStack_c = (undefined1 *)0xdef;
        puStack_e = (undefined1 *)0x1026;
        FUN_1000_0599();
        pcStack_8 = (char *)0x7644;
        puStack_a = (undefined1 *)0xdef;
        uVar7 = 0x11f2;
        puStack_c = (undefined1 *)0x1031;
        func_0x00012276();
        for (local_8c = 1; local_8c <= param_2; local_8c = local_8c + 1) {
          local_64 = 3;
          puStack_a = (undefined1 *)0x11b4;
          pcStack_8 = (char *)uVar7;
          FUN_28b3_0d8b();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x11bd;
          func_0x00029b85();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x11c6;
          func_0x00029c2c();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x11cf;
          func_0x00029983();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x11e5;
          FUN_28b3_0d8b();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x11ee;
          func_0x00029b85();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x11f7;
          func_0x00029c2c();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x11ff;
          func_0x00029bb5();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x1207;
          func_0x00029983();
          local_66 = aiStack_1f4[local_8c] / 0x3c;
          local_3c = aiStack_1f4[local_8c] % 0x3c;
          local_3a = aiStack_1730[local_8c] * 2;
          local_86 = aiStack_186[local_8c];
          if (aiStack_d4e[local_8c * 0x16 + 1] == 0) {
            local_3a = aiStack_1730[local_8c] * 2 + -1;
          }
          if (aiStack_16c2[local_8c * 0x16 + aiStack_186[local_8c]] == local_102) {
            local_3a = local_3a + -1;
          }
          if (local_3a < 1) {
            local_3a = 1;
          }
          iVar4 = param_1 + local_8c;
          puStack_a = (undefined1 *)0x7649;
          puStack_c = local_f4;
          puStack_e = (undefined1 *)0x22b2;
          puStack_10 = (undefined2 *)0x128b;
          pcStack_8 = (char *)iVar4;
          FUN_21f2_3454();
          if (iVar4 < 10) {
            pcStack_8 = (char *)0x764e;
            puStack_a = local_f4;
            puStack_c = (undefined1 *)0x22b2;
            puStack_e = (undefined1 *)0x12a1;
            FUN_21f2_2d26();
          }
          pcStack_8 = (char *)local_3a;
          puStack_a = (undefined1 *)local_3c;
          puStack_c = (undefined1 *)local_66;
          puStack_e = (undefined1 *)0x7650;
          puStack_10 = &local_2e;
          puStack_12 = (undefined1 *)0x22b2;
          uStack_14 = 0x12b9;
          FUN_21f2_3454();
          pcStack_8 = (char *)&local_2e;
          puStack_a = local_f4;
          puStack_c = (undefined1 *)0x22b2;
          puStack_e = (undefined1 *)0x12ca;
          FUN_21f2_2d26();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x12d4;
          func_0x000297e6();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x12d9;
          func_0x00029d78();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined1 *)0x12e3;
          func_0x000299d1();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined1 *)0x12eb;
          func_0x000297e6();
          puStack_10 = (undefined2 *)0x22b2;
          puStack_12 = (undefined1 *)0x12f0;
          func_0x00029d78();
          puStack_18 = (undefined1 *)0x22b2;
          uStack_1a = 0x12fa;
          func_0x000299d1();
          puStack_18 = local_f4;
          uStack_1a = local_64;
          uStack_1c = 0x22b2;
          uStack_1e = 0x1306;
          FUN_3ab8_67bd();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x1312;
          func_0x000297e6();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x131b;
          func_0x00029b6d();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x1323;
          func_0x00029bb5();
          pcStack_8 = (char *)0x22b2;
          puStack_a = (undefined1 *)0x132b;
          func_0x00029983();
          for (local_f6 = 1; local_f6 <= local_86; local_f6 = local_f6 + 1) {
            iVar4 = local_8c * 0x16 + local_f6;
            local_84 = aiStack_d4e[iVar4] / 0x3c;
            puStack_c = (undefined1 *)(aiStack_d4e[iVar4] % 0x3c);
            local_4e = (int)puStack_c;
            local_f8 = aiStack_16c2[iVar4] / 0x3c;
            local_62 = aiStack_16c2[iVar4] % 0x3c;
            puStack_a = (undefined1 *)(local_f8 + local_fa);
            puStack_e = (undefined1 *)(local_84 + local_fa);
            puStack_10 = (undefined2 *)0x218;
            puStack_12 = local_f4;
            uStack_14 = 0x22b2;
            iStack_16 = 0x1098;
            pcStack_8 = (char *)local_62;
            FUN_21f2_3454();
            pcStack_8 = (char *)0x22b2;
            puStack_a = (undefined1 *)0x10a3;
            func_0x000297e6();
            pcStack_8 = (char *)0x22b2;
            puStack_a = (undefined1 *)0x10a8;
            func_0x00029d78();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined1 *)0x10b2;
            func_0x000299d1();
            puStack_10 = (undefined2 *)0x22b2;
            puStack_12 = (undefined1 *)0x10ba;
            func_0x000297e6();
            puStack_18 = (undefined1 *)0x22b2;
            uStack_1a = 0x10c4;
            func_0x000299d1();
            puStack_18 = local_f4;
            uStack_1a = local_64;
            uStack_1c = 0x22b2;
            uStack_1e = 0x10d0;
            FUN_3ab8_67bd();
            pcStack_8 = (char *)0x22b2;
            puStack_a = (undefined1 *)0x10dc;
            func_0x000297e6();
            pcStack_8 = (char *)0x22b2;
            puStack_a = (undefined1 *)0x10e1;
            func_0x00029d78();
            pcStack_8 = (char *)0x22b2;
            puStack_a = (undefined1 *)0x10ea;
            func_0x00029c2c();
            pcStack_8 = (char *)0x22b2;
            puStack_a = (undefined1 *)0x10f2;
            func_0x00029bb5();
            pcStack_8 = (char *)0x22b2;
            puStack_a = (undefined1 *)0x10fa;
            func_0x00029983();
          }
          if (param_22 != 0 || param_21 != 0) {
            pcStack_8 = (char *)0x22b2;
            puStack_a = (undefined1 *)0x111c;
            func_0x000297e6();
            pcStack_8 = (char *)&local_38;
            puStack_a = (undefined1 *)0x22b2;
            puStack_c = (undefined1 *)0x1125;
            func_0x00029bb5();
            pcStack_8 = (char *)0x22b2;
            puStack_a = (undefined1 *)0x112b;
            func_0x00029983();
            if (local_8c == 1) {
              if (*param_23 == '\0') {
                pcStack_8 = (char *)0x11cc;
              }
              else {
                pcStack_8 = param_23;
              }
              puStack_a = local_f4;
              puStack_c = (undefined1 *)0x22b2;
              puStack_e = (undefined1 *)0x114b;
              func_0x00024c86();
              pcStack_8 = (char *)0x22b2;
              puStack_a = (undefined1 *)0x1155;
              func_0x000297e6();
              pcStack_8 = (char *)0x22b2;
              puStack_a = (undefined1 *)0x115a;
              func_0x00029d78();
              puStack_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined1 *)0x1164;
              func_0x000299d1();
              puStack_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined1 *)0x116c;
              func_0x000297e6();
              puStack_10 = (undefined2 *)0x22b2;
              puStack_12 = (undefined1 *)0x1171;
              func_0x00029d78();
              puStack_18 = (undefined1 *)0x22b2;
              uStack_1a = 0x117b;
              func_0x000299d1();
              puStack_18 = local_f4;
              uStack_1a = local_64;
              uStack_1c = 0x22b2;
              uStack_1e = 0x1187;
              FUN_3ab8_67bd();
            }
          }
          uVar7 = 0x22b2;
        }
      }
      return 1;
    }
    for (local_8c = 1; local_8c <= param_2; local_8c = local_8c + 1) {
      *(undefined2 *)(local_8c * 2 + (int)*(undefined4 *)0xb48c) = 0;
    }
    pcStack_8 = local_5c;
    puStack_a = local_60;
    puStack_c = (undefined1 *)0xdef;
    puStack_e = (undefined1 *)0xbd6;
    func_0x000297e6();
    puStack_c = (undefined1 *)0x22b2;
    puStack_e = (undefined1 *)0xbdb;
    func_0x00029d78();
    uStack_14 = 0x22b2;
    iStack_16 = 0xbe5;
    func_0x000299d1();
    uStack_14 = 0x22b2;
    iStack_16 = 0xbed;
    func_0x000297e6();
    uStack_14 = 0x22b2;
    iStack_16 = 0xbf2;
    func_0x00029d78();
    uStack_1c = 0x22b2;
    uStack_1e = 0xbfc;
    func_0x000299d1();
    uStack_1c = 0x22b2;
    uStack_1e = 0xc04;
    func_0x000297e6();
    uStack_1c = 0x22b2;
    uStack_1e = 0xc09;
    func_0x00029d78();
    uStack_24 = 0x22b2;
    uStack_26 = 0xc13;
    func_0x000299d1();
    uStack_24 = 0x22b2;
    uStack_26 = 0xc1b;
    func_0x000297e6();
    uStack_24 = 0x22b2;
    uStack_26 = 0xc20;
    func_0x00029d78();
    uStack_2c = 0x22b2;
    local_2e = 0xc2a;
    func_0x000299d1();
    uStack_2c = 0x22b2;
    local_2e = 0xc32;
    func_0x000297e6();
    uStack_2c = 0x22b2;
    local_2e = 0xc37;
    func_0x00029d78();
    iStack_34 = 0x22b2;
    uStack_36 = 0xc41;
    func_0x000299d1();
    iStack_34 = local_10e;
    uStack_36 = 0x22b2;
    local_38 = 0xc49;
    FUN_4375_8709();
    pcStack_8 = (char *)param_22;
    puStack_a = (undefined1 *)param_21;
    puStack_c = (undefined1 *)param_19;
    puStack_e = (undefined1 *)param_18;
    puStack_10 = (undefined2 *)param_17;
    puStack_12 = (undefined1 *)param_16;
    uStack_14 = param_15;
    iStack_16 = param_6;
    puStack_18 = (undefined1 *)param_5;
    uStack_1a = 0x22b2;
    uStack_1c = 0xc6f;
    func_0x000297e6();
    uStack_1a = 0x22b2;
    uStack_1c = 0xc74;
    func_0x00029d78();
    uStack_22 = 0x22b2;
    uStack_24 = 0xc7e;
    func_0x000299d1();
    uStack_22 = 0x22b2;
    uStack_24 = 0xc86;
    func_0x000297e6();
    uStack_22 = 0x22b2;
    uStack_24 = 0xc8b;
    func_0x00029d78();
    uStack_2a = 0x22b2;
    uStack_2c = 0xc95;
    func_0x000299d1();
    uStack_2a = 0xffff;
    uStack_2c = 0x22b2;
    local_2e = 0xc9d;
    local_fe = FUN_4375_8ded();
    for (local_8c = 1; local_8c <= param_2; local_8c = local_8c + 1) {
      uVar7 = (undefined2)((ulong)*(undefined4 *)0xb48c >> 0x10);
      iVar4 = (int)*(undefined4 *)0xb48c;
      *(undefined2 *)((local_8c * 500 + local_30) * 2 + iVar4) =
           *(undefined2 *)(local_8c * 2 + iVar4);
    }
    pcStack_8 = (char *)*(undefined2 *)0xcb4;
    puStack_a = (undefined1 *)*(undefined2 *)0xcb2;
    puStack_c = (undefined1 *)0x0;
    puStack_e = (undefined1 *)0x3;
    puStack_10 = (undefined2 *)0x22b2;
    puStack_12 = (undefined1 *)0xce7;
    func_0x0000f2cb();
    pcStack_8 = (char *)0x0;
    puStack_a = (undefined1 *)0x0;
    puStack_c = (undefined1 *)0x1;
    puStack_e = (undefined1 *)0x6;
    puStack_10 = (undefined2 *)0x3c;
    local_106 = local_10e / 0x3c + 0x17c;
    uStack_14 = 0x28;
    puStack_18 = (undefined1 *)0xdef;
    uStack_1a = 0xd13;
    iStack_16 = local_106;
    puStack_12 = (undefined1 *)local_106;
    func_0x0000f350();
    pcStack_8 = (char *)*(undefined2 *)0xcb4;
    puStack_a = (undefined1 *)(1 - *(int *)0xcb2);
    puStack_c = (undefined1 *)0x0;
    puStack_e = (undefined1 *)0x3;
    puStack_10 = (undefined2 *)0xdef;
    puStack_12 = (undefined1 *)0xd2e;
    func_0x0000f2cb();
    local_30 = local_30 + 1;
    if (local_fe < 0) break;
    local_10e = local_10e + *(int *)0xc11c;
  }
  return local_fe;
}



/* 3ab8:67bd  FUN_3ab8_67bd  211 bytes, 1 callers */

void __cdecl16far FUN_3ab8_67bd(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 auStack_1e [7];
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  FUN_21f2_0ebc();
  uStack_8 = param_2;
  uStack_a = 0x22b2;
  uStack_c = 0x1352;
  iVar4 = func_0x00024ce4();
  if (iVar4 != 0) {
    uStack_8 = param_1;
    uStack_a = 0;
    uStack_c = param_2;
    uStack_e = 0x22b2;
    local_10 = 0x136b;
    func_0x00018eff();
    uStack_8 = 0x18b3;
    uStack_a = 0x1383;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0x138c;
    func_0x00029983();
    uStack_8 = 0x22b2;
    uStack_a = 0x1394;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0x139d;
    func_0x00029983();
    *(undefined1 *)0xc3b4 = (undefined1)param_1;
    *(undefined1 *)0xc3b5 = *(undefined1 *)0xb310;
    uStack_8 = 0x22b2;
    uStack_a = 0x13b1;
    func_0x000297e6();
    uStack_8 = 0x22b2;
    uStack_a = 0x13b9;
    func_0x00029c74();
    uStack_8 = 0x22b2;
    uStack_a = 0x13c2;
    func_0x00029983();
    uStack_8 = 0x22b2;
    uStack_a = 0x13ca;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0x13d3;
    func_0x00029983();
    uVar1 = *(undefined2 *)0xbc78;
    *(undefined2 *)0xc3b0 = param_2;
    *(undefined2 *)0xc3b2 = uVar1;
    *(byte *)0xc3b6 = *(byte *)0xc3b6 & 0xdf;
    uStack_8 = 0;
    uStack_a = 0x22b2;
    uStack_c = 0x13ed;
    func_0x0000daa6();
    puVar6 = auStack_1e;
    puVar5 = (undefined2 *)0xc3a0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = *puVar2;
    }
    func_0x0001b198(0x885);
    uStack_8 = 0x18b3;
    uStack_a = 0x140a;
    func_0x0000abfa();
  }
  return;
}



/* 3ab8:6890  FUN_3ab8_6890  384 bytes, 1 callers */

void __cdecl16far FUN_3ab8_6890(int param_1,int param_2)

{
  undefined2 unaff_DS;
  undefined1 local_7e [100];
  undefined1 local_1a [4];
  undefined2 uStack_16;
  undefined2 uStack_14;
  int iStack_12;
  int local_10;
  int local_e;
  undefined1 *local_c;
  int iStack_a;
  undefined1 *puStack_8;
  undefined1 **ppuStack_6;
  undefined1 **ppuStack_4;
  
  ppuStack_4 = (undefined1 **)0x3ab8;
  ppuStack_6 = (undefined1 **)0x141b;
  FUN_21f2_0ebc();
  ppuStack_4 = (undefined1 **)*(undefined2 *)0xcb4;
  ppuStack_6 = (undefined1 **)*(undefined2 *)0xcb2;
  puStack_8 = (undefined1 *)0x0;
  iStack_a = 3;
  local_c = (undefined1 *)0x22b2;
  local_e = 0x1432;
  func_0x0000f2cb();
  ppuStack_4 = (undefined1 **)0x0;
  ppuStack_6 = (undefined1 **)0x0;
  puStack_8 = (undefined1 *)0x2;
  iStack_a = 0;
  local_c = (undefined1 *)0x50;
  local_e = 0x27e;
  local_10 = *(int *)0xa5e + 1;
  iStack_12 = *(int *)0xa5c + 1;
  uStack_14 = 0xdef;
  uStack_16 = 0x145b;
  func_0x0000f350();
  ppuStack_4 = (undefined1 **)0x0;
  ppuStack_6 = (undefined1 **)0x0;
  puStack_8 = (undefined1 *)0x1;
  iStack_a = 6;
  local_c = (undefined1 *)0x3c;
  local_e = param_1 / 0x3c + 0x17c;
  local_10 = 0x28;
  iStack_12 = param_1 / -0x3c + 0x17c;
  uStack_14 = 0xdef;
  uStack_16 = 0x1491;
  func_0x0000f350();
  ppuStack_4 = (undefined1 **)0x7660;
  ppuStack_6 = &local_c;
  puStack_8 = (undefined1 *)0xdef;
  iStack_a = 0x14a1;
  func_0x00024c86();
  if (param_2 == 0) {
    ppuStack_4 = (undefined1 **)0x766a;
    ppuStack_6 = (undefined1 **)local_7e;
    puStack_8 = (undefined1 *)0x22b2;
    iStack_a = 0x14ca;
    func_0x00024c86();
    ppuStack_4 = &local_c;
    ppuStack_6 = (undefined1 **)local_7e;
    puStack_8 = (undefined1 *)0x22b2;
    iStack_a = 0x14d9;
    FUN_21f2_2d26();
    ppuStack_4 = (undefined1 **)0x766e;
    ppuStack_6 = (undefined1 **)local_7e;
    puStack_8 = (undefined1 *)0x22b2;
    iStack_a = 0x14e8;
    FUN_21f2_2d26();
  }
  else {
    local_e = 7;
    ppuStack_4 = (undefined1 **)0x7666;
    ppuStack_6 = (undefined1 **)local_7e;
    puStack_8 = (undefined1 *)0x22b2;
    iStack_a = 0x14bb;
    func_0x00024c86();
  }
  local_10 = 10;
  do {
    ppuStack_4 = (undefined1 **)local_10;
    ppuStack_6 = (undefined1 **)0x7671;
    puStack_8 = local_1a;
    iStack_a = 0x22b2;
    local_c = (undefined1 *)0x14ff;
    FUN_21f2_3454();
    ppuStack_4 = &local_c;
    ppuStack_6 = (undefined1 **)local_7e;
    puStack_8 = (undefined1 *)0x22b2;
    iStack_a = 0x150f;
    FUN_21f2_2d26();
    ppuStack_4 = (undefined1 **)local_1a;
    ppuStack_6 = (undefined1 **)local_7e;
    puStack_8 = (undefined1 *)0x22b2;
    iStack_a = 0x151e;
    FUN_21f2_2d26();
    if (local_10 == 0xc) {
      ppuStack_4 = (undefined1 **)0x7675;
      ppuStack_6 = (undefined1 **)local_7e;
      puStack_8 = (undefined1 *)0x22b2;
      iStack_a = 0x1533;
      FUN_21f2_2d26();
    }
    local_10 = local_10 + 1;
  } while (local_10 < 0x10);
  if (param_2 == 0) {
    ppuStack_4 = &local_c;
    ppuStack_6 = (undefined1 **)local_7e;
    puStack_8 = (undefined1 *)0x22b2;
    iStack_a = 0x1551;
    FUN_21f2_2d26();
    ppuStack_4 = (undefined1 **)0x7677;
    ppuStack_6 = (undefined1 **)local_7e;
    puStack_8 = (undefined1 *)0x22b2;
    iStack_a = 0x1560;
    FUN_21f2_2d26();
  }
  ppuStack_4 = (undefined1 **)0x767a;
  ppuStack_6 = (undefined1 **)local_7e;
  puStack_8 = (undefined1 *)0x22b2;
  iStack_a = 0x156f;
  FUN_21f2_2d26();
  ppuStack_4 = (undefined1 **)0x0;
  ppuStack_6 = (undefined1 **)0x6;
  puStack_8 = (undefined1 *)0x5;
  iStack_a = local_e + 0x12;
  local_c = local_7e;
  local_e = 0x22b2;
  local_10 = 0x158c;
  FUN_1000_02b5();
  return;
}


