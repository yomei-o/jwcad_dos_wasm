/* Ghidra decompilation of jw05.exe - machine output, not the original source. */

/* 3ab8:0000  OVL_0000  138 bytes, 0 callers */

void __cdecl16far
OVL_0000(uint param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  uVar1 = 0x22b2;
  while ((param_2 <= *(int *)0x14a && ((param_2 < *(int *)0x14a || (param_1 < *(uint *)0x148))))) {
    func_0x00018779(uVar1,*(undefined2 *)0x148,*(undefined2 *)0x14a);
    uVar1 = 0x11f2;
  }
  while ((param_4 <= *(int *)0x14e && ((param_4 < *(int *)0x14e || (param_3 < *(uint *)0x14c))))) {
    uVar1 = 0x11f2;
    FUN_13bf_0327(*(undefined2 *)0x14c,*(undefined2 *)0x14e);
  }
  while (param_5 < *(int *)0x150) {
    func_0x000190c7(uVar1,*(int *)0x150);
    uVar1 = 0x18b3;
  }
  while (param_6 < *(int *)0x152) {
    uVar1 = 0x1bb4;
    FUN_1def_186d(*(int *)0x152);
  }
  func_0x0000abfa(uVar1);
  func_0x0000b1d8(0x885,1);
  return;
}



/* 3ab8:008a  FUN_3ab8_008a  2360 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003afe3) */
/* WARNING: Removing unreachable block (ram,0x0003af11) */
/* WARNING: Removing unreachable block (ram,0x0003af78) */
/* WARNING: Removing unreachable block (ram,0x0003b2d8) */

undefined2 __cdecl16far FUN_3ab8_008a(int param_1)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint *puVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char unaff_SI;
  undefined2 *puVar20;
  undefined2 *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar26;
  undefined1 uVar27;
  long lVar28;
  undefined2 *puVar29;
  undefined4 uVar30;
  uint *puVar31;
  uint local_76;
  int local_74;
  int local_6a;
  uint local_60;
  uint local_5e;
  uint local_5c;
  uint local_54;
  uint local_52;
  uint local_32;
  uint local_30;
  uint local_2e;
  uint local_2c;
  uint local_2a;
  uint local_28;
  uint local_26;
  uint local_24;
  undefined4 local_1c;
  undefined2 local_18 [3];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  uint local_c;
  char cVar32;
  char cVar33;
  
  FUN_21f2_0ebc();
  *(undefined2 *)0x1150 = 1;
  local_c = 0xac28;
  func_0x0000daa6();
  func_0x000297e6();
  func_0x00029d78();
  local_10 = 0x22b2;
  uStack_12 = 0xac40;
  func_0x000299d1();
  local_10 = 0x22b2;
  uStack_12 = 0xac48;
  func_0x000297e6();
  local_10 = 0x22b2;
  uStack_12 = 0xac4d;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  local_1c._2_2_ = 0xac57;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  local_1c._2_2_ = 0xac5c;
  lVar28 = FUN_13bf_39a0();
  *(undefined2 *)0x1150 = 0;
  local_c = 0xac70;
  func_0x0000daa6();
  if (lVar28 != 0) {
    local_c = 0xac86;
    func_0x0000daa6();
    uVar24 = 0x885;
    func_0x0000c3ca();
    if (param_1 == 0) {
      local_c = 0xac9d;
      func_0x0000daa6();
      func_0x0000c3ca();
      local_c = 0xacab;
      func_0x00008095();
      uVar24 = *(undefined2 *)0x972c;
      uVar25 = *(undefined2 *)0x972e;
      *(undefined2 *)0xbd0 = uVar24;
      *(undefined2 *)0xbd2 = uVar25;
      *(undefined2 *)0xbcc = uVar24;
      *(undefined2 *)0xbce = uVar25;
      *(undefined2 *)0xbc8 = uVar24;
      *(undefined2 *)0xbca = uVar25;
      *(undefined2 *)0xbc4 = uVar24;
      *(undefined2 *)0xbc6 = uVar25;
      *(undefined2 *)0xbe0 = uVar24;
      *(undefined2 *)0xbe2 = uVar25;
      *(undefined2 *)0xbdc = uVar24;
      *(undefined2 *)0xbde = uVar25;
      *(undefined2 *)0xbd8 = uVar24;
      *(undefined2 *)0xbda = uVar25;
      *(undefined2 *)0xbd4 = uVar24;
      *(undefined2 *)0xbd6 = uVar25;
      local_74 = 0;
      local_c = 0x7a6;
      for (local_76 = 1;
          (local_74 <= *(int *)0x14a && ((local_74 < *(int *)0x14a || (local_76 <= *(uint *)0x148)))
          ); local_76 = local_76 + 1) {
        uStack_e = 0xad1a;
        uVar30 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar30 + 0x14);
        *pbVar1 = *pbVar1 & 0xfd;
        local_74 = local_74 + (uint)(0xfffe < local_76);
        local_c = 0;
      }
      local_74 = 0;
      uVar24 = local_c;
      for (local_76 = 1;
          (local_74 <= *(int *)0x14e && ((local_74 < *(int *)0x14e || (local_76 <= *(uint *)0x14c)))
          ); local_76 = local_76 + 1) {
        uStack_e = 0xad56;
        local_c = uVar24;
        uVar30 = func_0x00000271();
        pbVar1 = (byte *)((int)uVar30 + 0x1e);
        *pbVar1 = *pbVar1 & 0xfd;
        local_74 = local_74 + (uint)(0xfffe < local_76);
        uVar24 = 0;
      }
      for (local_6a = 1; local_6a <= *(int *)0x152; local_6a = local_6a + 1) {
        uVar24 = 0;
        local_c = 0xad72;
        uVar30 = func_0x000003ef();
        pbVar1 = (byte *)((int)uVar30 + 10);
        *pbVar1 = *pbVar1 & 0xfd;
      }
      for (local_6a = 1; local_6a <= *(int *)0x150; local_6a = local_6a + 1) {
        uVar24 = 0;
        local_c = 0xad96;
        uVar30 = func_0x00000398();
        pbVar1 = (byte *)((int)uVar30 + 0x16);
        *pbVar1 = *pbVar1 & 0xfd;
      }
    }
    local_c = uVar24;
    if (lVar28 < 0) {
      uStack_e = 0xadc8;
      func_0x00000271();
      local_c = 0xaddd;
      iVar13 = func_0x00008854();
      if (iVar13 == 0) {
        if (param_1 == 2) {
          local_c = 0x885;
          uStack_e = 0xadff;
          FUN_13bf_0327();
          return 0xfffe;
        }
        local_c = 0x885;
        uStack_e = 0xae1f;
        uVar30 = func_0x00000271();
        bVar26 = (*(byte *)((int)uVar30 + 0x1e) & 2) != 0;
        if (bVar26) {
          local_c = 0;
          uStack_e = 0xae5e;
          uVar30 = func_0x00000271();
          pbVar1 = (byte *)((int)uVar30 + 0x1e);
          *pbVar1 = *pbVar1 & 0xfd;
        }
        else {
          local_c = 0;
          uStack_e = 0xae38;
          uVar30 = func_0x00000271();
          pbVar1 = (byte *)((int)uVar30 + 0x1e);
          *pbVar1 = *pbVar1 | 2;
        }
        local_60 = (uint)!bVar26;
        local_c = local_60;
        uStack_e = 0;
        local_10 = 0xae77;
        func_0x00007d9b();
        goto LAB_3ab8_02fa;
      }
    }
    else {
      uStack_e = 0xae91;
      puVar29 = (undefined2 *)func_0x0000013f();
      puVar20 = (undefined2 *)puVar29;
      puVar21 = local_18;
      for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
        puVar3 = puVar21;
        puVar21 = puVar21 + 1;
        puVar2 = puVar20;
        puVar20 = puVar20 + 1;
        *puVar3 = *puVar2;
      }
      cVar33 = (char)((uint)unaff_DS >> 8);
      cVar32 = (char)unaff_DS;
      local_c = 0xaebd;
      iVar13 = func_0x00008854();
      if (iVar13 == 0) {
        if (param_1 == 2) {
          local_c = 0x885;
          uStack_e = 0xaed6;
          func_0x00018779();
          return 0xffff;
        }
        local_76 = 1;
        local_c = 0x885;
        local_1c = lVar28;
        for (local_74 = 0; uVar24 = local_c, CONCAT22(local_74,local_76) < lVar28;
            local_74 = local_74 + (uint)bVar26) {
          uVar24 = 0;
          uStack_e = 0xaf21;
          uVar30 = func_0x0000013f();
          uVar25 = (undefined2)((ulong)uVar30 >> 0x10);
          iVar13 = (int)uVar30;
          if (((*(char *)(iVar13 + 0x12) == unaff_SI) && (*(char *)(iVar13 + 0x11) == cVar33)) &&
             (*(char *)(iVar13 + 0x10) == cVar32)) {
            local_1c = CONCAT22(local_74,local_76);
            break;
          }
          bVar26 = 0xfffe < local_76;
          local_76 = local_76 + 1;
          local_c = uVar24;
        }
        local_76 = *(int *)0x148;
        local_c = uVar24;
        for (local_74 = *(int *)0x14a; uVar24 = local_c, lVar5 = local_1c,
            lVar28 < CONCAT22(local_74,local_76); local_74 = local_74 - (uint)bVar26) {
          uVar24 = 0;
          uStack_e = 0xaf88;
          uVar30 = func_0x0000013f();
          uVar25 = (undefined2)((ulong)uVar30 >> 0x10);
          iVar13 = (int)uVar30;
          if (((*(char *)(iVar13 + 0x12) == unaff_SI) && (*(char *)(iVar13 + 0x11) == cVar33)) &&
             (*(char *)(iVar13 + 0x10) == cVar32)) {
            lVar28 = CONCAT22(local_74,local_76);
            lVar5 = local_1c;
            break;
          }
          bVar26 = local_76 == 0;
          local_76 = local_76 + -1;
          local_c = uVar24;
        }
        for (; local_c = uVar24, lVar5 <= lVar28; lVar5 = lVar5 + 1) {
          uStack_e = 0xafef;
          uVar30 = func_0x0000013f();
          uVar24 = (undefined2)((ulong)uVar30 >> 0x10);
          iVar13 = (int)uVar30;
          if (((*(char *)(iVar13 + 0x12) == unaff_SI) && (*(char *)(iVar13 + 0x11) == cVar33)) &&
             (*(char *)(iVar13 + 0x10) == cVar32)) {
            *(byte *)(iVar13 + 0x14) = *(byte *)(iVar13 + 0x14) & 0xfe;
          }
          else {
            *(byte *)(iVar13 + 0x14) = *(byte *)(iVar13 + 0x14) | 1;
          }
          uVar24 = 0;
        }
        uStack_e = 0xb02a;
        FUN_1000_0599();
        local_c = 0xb035;
        func_0x00012276();
        *(undefined2 *)0xbc2 = 1;
        *(undefined2 *)0xbc0 = 1;
        local_c = 0x11f2;
        uVar24 = 0;
        uStack_e = 0xb04a;
        uVar30 = func_0x0000013f();
        local_60 = (uint)((*(byte *)((int)uVar30 + 0x14) & 2) == 0);
        bVar26 = false;
LAB_3ab8_04f3:
        uStack_e = 0xb07e;
        local_c = uVar24;
        puVar29 = (undefined2 *)func_0x0000013f();
        uVar24 = (undefined2)((ulong)puVar29 >> 0x10);
        puVar21 = (undefined2 *)puVar29;
        *(byte *)(puVar21 + 10) = *(byte *)(puVar21 + 10) | 1;
        if (local_60 == 0) {
          *(byte *)(puVar21 + 10) = *(byte *)(puVar21 + 10) & 0xfd;
        }
        else {
          *(byte *)(puVar21 + 10) = *(byte *)(puVar21 + 10) | 2;
        }
        *(byte *)((int)puVar21 + 0x15) = *(byte *)((int)puVar21 + 0x15) & 0xfc;
        puVar20 = local_18;
        for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
          puVar2 = puVar20;
          puVar20 = puVar20 + 1;
          puVar29 = puVar21;
          puVar21 = puVar21 + 1;
          *puVar2 = *puVar29;
        }
        local_c = local_60;
        uStack_e = 0;
        local_10 = 0xb0cc;
        func_0x00007d9b();
        bVar6 = FUN_12c1_009c();
        uVar27 = bVar6 < 0x1b;
        if (bVar6 == 0x1b) {
          return 1;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar27) {
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x00029983();
        }
        else {
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        func_0x00029983();
        uVar7 = local_54;
        uVar14 = local_52;
        if ((int)local_52 < 0) {
          uVar7 = -local_54;
          uVar14 = -((local_52 & 0x7fff) + (uint)(local_54 != 0));
        }
        uVar27 = false;
        uVar8 = local_5e;
        uVar15 = local_5c;
        if ((int)local_5c < 0) {
          iVar13 = (local_5c & 0x7fff) + (uint)(local_5e != 0);
          uVar27 = iVar13 != 0;
          uVar8 = -local_5e;
          uVar15 = -iVar13;
        }
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar27) {
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x00029983();
        }
        else {
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x00029983();
        }
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        uVar24 = 0x22b2;
        func_0x00029983();
        uVar9 = local_54;
        uVar16 = local_52;
        if ((int)local_52 < 0) {
          uVar9 = -local_54;
          uVar16 = -((local_52 & 0x7fff) + (uint)(local_54 != 0));
        }
        lVar5 = local_1c;
        uVar17 = local_5c;
        uVar10 = local_5e;
        if ((int)local_5c < 0) {
          uVar17 = -((local_5c & 0x7fff) + (uint)(local_5e != 0));
          uVar10 = -local_5e;
        }
        for (; lVar5 <= lVar28; lVar5 = lVar5 + 1) {
          uVar25 = 0;
          uStack_e = 0xb2e7;
          local_c = uVar24;
          puVar31 = (uint *)func_0x0000013f();
          uVar24 = (undefined2)((ulong)puVar31 >> 0x10);
          puVar22 = (uint *)puVar31;
          if ((puVar22[10] & 1) == 0) {
            puVar23 = &local_32;
            for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar4 = puVar23;
              puVar23 = puVar23 + 1;
              puVar31 = puVar22;
              puVar22 = puVar22 + 1;
              *puVar4 = *puVar31;
            }
            uVar11 = local_32;
            uVar18 = local_30;
            if ((int)local_30 < 0) {
              uVar11 = -local_32;
              uVar18 = -((local_30 & 0x7fff) + (uint)(local_32 != 0));
            }
            uVar12 = local_2a;
            uVar19 = local_28;
            if ((int)local_28 < 0) {
              uVar12 = -local_2a;
              uVar19 = -((local_28 & 0x7fff) + (uint)(local_2a != 0));
            }
            if ((((int)uVar14 < (int)uVar18) ||
                (((((int)uVar14 <= (int)uVar18 && (uVar7 <= uVar11)) || ((int)uVar14 < (int)uVar19))
                 || (((int)uVar14 <= (int)uVar19 && (uVar7 <= uVar12)))))) &&
               ((((int)uVar18 < (int)uVar15 || (((int)uVar18 <= (int)uVar15 && (uVar11 <= uVar8))))
                || (((int)uVar19 < (int)uVar15 ||
                    (((int)uVar19 <= (int)uVar15 && (uVar12 <= uVar8)))))))) {
              uVar11 = local_2e;
              uVar18 = local_2c;
              if ((int)local_2c < 0) {
                uVar11 = -local_2e;
                uVar18 = -((local_2c & 0x7fff) + (uint)(local_2e != 0));
              }
              uVar12 = local_26;
              uVar19 = local_24;
              if ((int)local_24 < 0) {
                uVar12 = -local_26;
                uVar19 = -((local_24 & 0x7fff) + (uint)(local_26 != 0));
              }
              if (((((int)uVar16 < (int)uVar18) ||
                   ((((int)uVar16 <= (int)uVar18 && (uVar9 <= uVar11)) ||
                    ((int)uVar16 < (int)uVar19)))) ||
                  (((int)uVar16 <= (int)uVar19 && (uVar9 <= uVar12)))) &&
                 ((uVar27 = uVar18 < uVar17, (int)uVar18 < (int)uVar17 ||
                  ((((int)uVar18 <= (int)uVar17 && (uVar27 = uVar11 < uVar10, uVar11 <= uVar10)) ||
                   ((uVar27 = uVar19 < uVar17, (int)uVar19 < (int)uVar17 ||
                    (((int)uVar19 <= (int)uVar17 && (uVar27 = uVar12 < uVar10, uVar12 <= uVar10)))))
                   ))))) {
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                FUN_28b3_1181();
                if ((bool)uVar27) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar24 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar27) goto LAB_3ab8_04f3;
                }
                uVar27 = 0;
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                FUN_28b3_1181();
                if ((bool)uVar27) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar24 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar27) goto LAB_3ab8_04f3;
                }
                uVar27 = 0;
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                FUN_28b3_1181();
                if ((bool)uVar27) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar24 = 0x22b2;
                  FUN_28b3_1181();
                  if ((bool)uVar27) goto LAB_3ab8_04f3;
                }
                uVar27 = 0;
                func_0x00029834();
                func_0x000297e6();
                FUN_28b3_100d();
                func_0x00029ae7();
                func_0x00029d78();
                uVar25 = 0x22b2;
                FUN_28b3_1181();
                if ((bool)uVar27) {
                  func_0x00029834();
                  func_0x000297e6();
                  FUN_28b3_100d();
                  func_0x00029ae7();
                  func_0x00029d78();
                  uVar24 = 0x22b2;
                  FUN_28b3_1181();
                  uVar25 = uVar24;
                  if ((bool)uVar27) goto LAB_3ab8_04f3;
                }
              }
            }
          }
          uVar24 = uVar25;
        }
        if (!bVar26) {
          bVar26 = true;
          goto LAB_3ab8_04f3;
        }
LAB_3ab8_02fa:
        *(undefined2 *)0xbc2 = 1;
        *(undefined2 *)0xbc0 = 1;
        return 1;
      }
    }
  }
  return 0;
}



/* 3ab8:09c2  FUN_3ab8_09c2  2097 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003b90e) */
/* WARNING: Removing unreachable block (ram,0x0003ba4f) */
/* WARNING: Removing unreachable block (ram,0x0003ba6d) */
/* WARNING: Removing unreachable block (ram,0x0003ba5a) */
/* WARNING: Removing unreachable block (ram,0x0003ba79) */

int __cdecl16far FUN_3ab8_09c2(void)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ulong uVar10;
  uint in_stack_00000012;
  uint in_stack_00000014;
  uint in_stack_00000016;
  uint in_stack_00000018;
  int in_stack_00000028;
  uint local_4c;
  int local_4a;
  int local_30;
  undefined1 auStack_e [4];
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  uVar2 = CONCAT22(in_stack_00000014,in_stack_00000012);
  FUN_21f2_0ebc();
  uStack_8 = 0x22b2;
  uStack_a = 0xb558;
  func_0x00029834();
  uVar7 = 0;
  uStack_8 = 0x22b2;
  uStack_a = 0xb576;
  func_0x00029da5();
  uStack_8 = 0x22b2;
  uStack_a = 0xb57b;
  func_0x00029d78();
  uStack_8 = 0x22b2;
  uStack_a = 0xb584;
  func_0x00029c2c();
  uStack_8 = 0x22b2;
  uStack_a = 0xb58c;
  func_0x0002996b();
  uStack_8 = 0x22b2;
  uStack_a = 0xb591;
  func_0x00029d78();
  uStack_8 = 0x22b2;
  uStack_a = 0xb596;
  FUN_28b3_1181();
  if ((bool)uVar7) {
LAB_3ab8_0a18:
    local_4a = 0;
  }
  else {
    uStack_8 = 0x22b2;
    uStack_a = 0xb5a6;
    func_0x000297e6();
    uStack_8 = 0x22b2;
    uStack_a = 0xb5ae;
    func_0x0002996b();
    uStack_8 = 0x22b2;
    uStack_a = 0xb5d1;
    func_0x00029da5();
    uStack_8 = 0x22b2;
    uStack_a = 0xb5d6;
    func_0x00029c9d();
    uStack_8 = 0x22b2;
    uStack_a = 0xb5de;
    func_0x00029983();
    uStack_8 = 0x22b2;
    uStack_a = 0xb601;
    func_0x00029da5();
    uStack_8 = 0x22b2;
    uStack_a = 0xb60a;
    func_0x00029b6d();
    uStack_8 = 0x22b2;
    uStack_a = 0xb612;
    func_0x00029983();
    uStack_8 = 0x22b2;
    uStack_a = 0xb635;
    func_0x00029da5();
    uStack_8 = 0x22b2;
    uStack_a = 0xb63e;
    func_0x00029b6d();
    uStack_8 = 0x22b2;
    uStack_a = 0xb646;
    func_0x00029983();
    bVar1 = false;
    if ((in_stack_00000012 == in_stack_00000016) && (in_stack_00000014 == in_stack_00000018)) {
      bVar1 = true;
    }
    if (((in_stack_00000014 == 0 && in_stack_00000012 == 0) && (in_stack_00000016 == 0)) &&
       (in_stack_00000018 == 0x168)) {
      bVar1 = true;
    }
    uStack_8 = 0x22b2;
    uStack_a = 0xb681;
    func_0x000297e6();
    func_0x000299d1(0x22b2);
    func_0x0002a11e(0x22b2);
    uStack_8 = 0x22b2;
    uStack_a = 0xb69a;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0xb6a2;
    func_0x00029983();
    uStack_8 = 0x22b2;
    uStack_a = 0xb6aa;
    func_0x000297e6();
    func_0x000299d1(0x22b2);
    func_0x0002a10c(0x22b2);
    uStack_8 = 0x22b2;
    uStack_a = 0xb6c3;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0xb6cb;
    func_0x00029983();
    local_4c = 0;
    do {
      uStack_8 = 0x22b2;
      uStack_a = 0xb6f5;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xb6fd;
      FUN_28b3_100d();
      uStack_8 = 0x22b2;
      uStack_a = 0xb706;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xb70e;
      func_0x00029983();
      uStack_8 = 0x22b2;
      uStack_a = 0xb718;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xb720;
      FUN_28b3_100d();
      uStack_8 = 0x22b2;
      uStack_a = 0xb729;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xb731;
      func_0x00029983();
      uStack_8 = 0x22b2;
      uStack_a = 0xb73a;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xb742;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xb74b;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xb753;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xb758;
      FUN_28b3_117c();
      uStack_8 = 0x22b2;
      uStack_a = 0xb768;
      func_0x00029983();
      uStack_8 = 0x22b2;
      uStack_a = 0xb771;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xb779;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xb782;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xb78a;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xb78f;
      FUN_28b3_1163();
      uStack_8 = 0x22b2;
      uStack_a = 46999;
      func_0x00029b85();
      uStack_8 = 0x22b2;
      uStack_a = 0xb79f;
      func_0x00029983();
      local_4c = local_4c + 1;
    } while ((int)local_4c < 5);
    uStack_8 = 0x22b2;
    uStack_a = 0xb7b3;
    func_0x000297e6();
    func_0x000299d1(0x22b2);
    func_0x0002a11e(0x22b2);
    uStack_8 = 0x22b2;
    uStack_a = 0xb7cc;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0xb7d4;
    func_0x00029b6d();
    uStack_8 = 0x22b2;
    uStack_a = 0xb7dc;
    func_0x00029983();
    uStack_8 = 0x22b2;
    uStack_a = 0xb7e4;
    func_0x000297e6();
    func_0x000299d1(0x22b2);
    func_0x0002a10c(0x22b2);
    uStack_8 = 0x22b2;
    uStack_a = 0xb7fd;
    func_0x00029834();
    uStack_8 = 0x22b2;
    uStack_a = 0xb805;
    func_0x00029b6d();
    uStack_8 = 0x22b2;
    uVar6 = 0x22b2;
    uStack_a = 0xb80d;
    func_0x00029983();
    local_30 = -1;
    local_4a = 0;
    for (local_4c = 0; (int)local_4c < 4; local_4c = local_4c + 1) {
      uVar7 = (int)(local_4c << 1) < 0;
      uStack_a = 0xbab1;
      uStack_8 = uVar6;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbab9;
      FUN_28b3_100d();
      uStack_8 = 0x22b2;
      uStack_a = 0xbac1;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xbac9;
      FUN_28b3_0ee9();
      uStack_8 = 0x22b2;
      uStack_a = 0xbad2;
      func_0x00029834();
      uStack_8 = 0x22b2;
      uStack_a = 0xbadb;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbae4;
      FUN_28b3_100d();
      uStack_8 = 0x22b2;
      uStack_a = 0xbaec;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xbaf4;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xbafc;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb04;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb09;
      FUN_28b3_117c();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb11;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb16;
      func_0x00029d78();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb1b;
      FUN_28b3_1181();
      if ((bool)uVar7) goto LAB_3ab8_0a18;
      uStack_8 = 0x22b2;
      uStack_a = 0xbb28;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb2d;
      func_0x00029d78();
      func_0x000299d1(0x22b2);
      FUN_28b3_1582(0x22b2);
      uStack_8 = 0x22b2;
      uStack_a = 0xbb46;
      func_0x00029834();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb4e;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb56;
      func_0x00029b9d();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb5f;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb67;
      func_0x00029983();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb6f;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb77;
      func_0x00029b85();
      uStack_8 = 0x22b2;
      uStack_a = 47999;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xbb87;
      FUN_28b3_0ee9();
      if (local_30 != 0) {
        uStack_8 = 0x22b2;
        uStack_a = 0xbb96;
        func_0x000297e6();
        uVar7 = (int)(local_4c << 1) < 0;
        uStack_8 = 0x22b2;
        uStack_a = 0xbba5;
        func_0x000297e6();
        uStack_8 = 0x22b2;
        uStack_a = 0xbbad;
        func_0x00029b55();
        uStack_8 = 0x22b2;
        uStack_a = 0xbbb6;
        func_0x00029b6d();
        uStack_8 = 0x22b2;
        uStack_a = 0xbbbf;
        func_0x000297e6();
        uStack_8 = 0x22b2;
        uStack_a = 0xbbc7;
        func_0x00029b55();
        uStack_8 = 0x22b2;
        uStack_a = 0xbbcf;
        func_0x00029b6d();
        uStack_8 = 0x22b2;
        uStack_a = 0xbbd4;
        FUN_28b3_1163();
        uStack_8 = 0x22b2;
        uStack_a = 0xbbdc;
        func_0x0002996b();
        uStack_8 = 0x22b2;
        uStack_a = 0xbbe1;
        FUN_28b3_1181();
        if ((bool)uVar7) {
          local_30 = 0;
        }
      }
      uVar7 = (int)(local_4c << 1) < 0;
      uVar8 = (local_4c & 0x3fff) == 0;
      uStack_8 = 0x22b2;
      uStack_a = 0xbbf7;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbbfc;
      func_0x00029af6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc04;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc0c;
      FUN_28b3_0ee9();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc14;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc1c;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc25;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc2a;
      func_0x00029af6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc32;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc3a;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc3f;
      FUN_28b3_117c();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc47;
      func_0x00029983();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc4f;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc57;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc5f;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc67;
      func_0x00029b6d();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc6c;
      FUN_28b3_1163();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc74;
      func_0x0002996b();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc7c;
      FUN_28b3_0ee9();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc84;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc8c;
      func_0x000297e6();
      uStack_8 = 0x22b2;
      uStack_a = 0xbc91;
      func_0x00029ae7();
      uStack_8 = 0x22b2;
      uVar6 = 0x22b2;
      uStack_a = 0xbc96;
      FUN_28b3_1181();
      if ((bool)uVar7) {
        uStack_8 = 0x22b2;
        uStack_a = 0xbca4;
        func_0x000297e6();
        uStack_8 = 0x22b2;
        uStack_a = 0xbcac;
        func_0x000297e6();
        uStack_8 = 0x22b2;
        uStack_a = 0xbcb4;
        func_0x00029b6d();
        uStack_8 = 0x22b2;
        uStack_a = 0xbcbc;
        func_0x000297e6();
        uStack_8 = 0x22b2;
        uStack_a = 0xbcc4;
        func_0x00029b6d();
        uStack_8 = 0x22b2;
        uStack_a = 0xbcc9;
        FUN_28b3_1163();
        uStack_8 = 0x22b2;
        uStack_a = 0xbcd1;
        func_0x0002996b();
        uStack_8 = 0x22b2;
        uVar6 = 0x22b2;
        uStack_a = 0xbcd6;
        FUN_28b3_1181();
        if (!(bool)uVar7 && !(bool)uVar8) {
          uStack_8 = 0x22b2;
          uStack_a = 0xbce3;
          func_0x000297e6();
          uStack_8 = 0x22b2;
          uStack_a = 0xbce8;
          func_0x00029d78();
          func_0x000299d1(0x22b2);
          FUN_28b3_1582(0x22b2);
          uVar8 = (undefined1 *)0xfff7 < auStack_e;
          uVar9 = &stack0x0000 == (undefined1 *)0x6;
          uStack_8 = 0x22b2;
          uStack_a = 0xbd01;
          func_0x00029834();
          uStack_8 = 0x22b2;
          uStack_a = 0xbd09;
          func_0x00029983();
          uStack_8 = 0x22b2;
          uStack_a = 0xbd12;
          func_0x000297e6();
          uStack_8 = 0x22b2;
          uStack_a = 0xbd1a;
          func_0x0002996b();
          uStack_8 = 0x22b2;
          uStack_a = 0xbd22;
          func_0x000297e6();
          uStack_8 = 0x22b2;
          uStack_a = 0xbd2a;
          FUN_28b3_100d();
          uStack_8 = 0x22b2;
          uStack_a = 0xbd32;
          func_0x0002996b();
          uStack_8 = 0x22b2;
          uVar6 = 0x22b2;
          uStack_a = 0xbd37;
          FUN_28b3_1181();
          uVar7 = uVar8;
          if (!(bool)uVar8 && !(bool)uVar9) {
            uStack_8 = 0x22b2;
            uStack_a = 0xbd44;
            func_0x000297e6();
            uStack_8 = 0x22b2;
            uStack_a = 0xbd4c;
            func_0x000297e6();
            uStack_8 = 0x22b2;
            uVar6 = 0x22b2;
            uStack_a = 0xbd51;
            FUN_28b3_1181();
            uVar7 = 0;
            if ((bool)uVar8) {
              uStack_8 = 0x22b2;
              uStack_a = 0xb82c;
              func_0x000297e6();
              uStack_8 = 0x22b2;
              uStack_a = 0xb834;
              func_0x000297e6();
              uStack_8 = 0x22b2;
              uStack_a = 0xb83c;
              func_0x00029b6d();
              uStack_8 = 0x22b2;
              uStack_a = 0xb841;
              FUN_28b3_117c();
              uStack_8 = 0x22b2;
              uStack_a = 0xb849;
              func_0x0002996b();
              uStack_8 = 0x22b2;
              uStack_a = 0xb851;
              FUN_28b3_0ee9();
              uStack_8 = 0x22b2;
              uStack_a = 0xb859;
              func_0x000297e6();
              uStack_8 = 0x22b2;
              uStack_a = 0xb85e;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              func_0x000297e6(0x22b2);
              func_0x000297e6(0x22b2);
              func_0x00029b6d(0x22b2);
              FUN_28b3_117c(0x22b2);
              func_0x0002996b(0x22b2);
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2);
              uVar6 = 0xdef;
              uVar10 = FUN_1000_0718(0x22b2,*(undefined2 *)0x974c,*(undefined2 *)0x974e,
                                     *(undefined2 *)0x9750,*(undefined2 *)0x9752,
                                     *(undefined2 *)0x974c,*(undefined2 *)0x974e,
                                     *(undefined2 *)0x9750,*(undefined2 *)0x9752);
              uVar4 = (uint)(uVar10 >> 0x10);
              uVar3 = (uint)uVar10;
              if (!bVar1) {
                if ((in_stack_00000014 <= in_stack_00000018) &&
                   ((in_stack_00000014 < in_stack_00000018 ||
                    (in_stack_00000012 < in_stack_00000016)))) {
                  uVar9 = in_stack_00000014 == uVar4;
                  uVar7 = in_stack_00000014 < uVar4;
                  if (in_stack_00000014 <= uVar4) {
                    if (in_stack_00000014 >= uVar4) {
                      uVar9 = in_stack_00000012 == uVar3;
                      uVar7 = in_stack_00000012 < uVar3;
                      if (in_stack_00000012 >= uVar3) goto LAB_3ab8_0db7;
                    }
                    uVar7 = in_stack_00000018 < uVar4;
                    uVar9 = in_stack_00000018 == uVar4;
                    if (!(bool)uVar7 && !(bool)uVar9) goto LAB_3ab8_0d9f;
                    if (!(bool)uVar7) {
                      uVar9 = in_stack_00000016 == uVar3;
                      uVar7 = in_stack_00000016 < uVar3;
                      if (in_stack_00000016 >= uVar3 && !(bool)uVar9) goto LAB_3ab8_0d9f;
                    }
                  }
                  goto LAB_3ab8_0db7;
                }
                if (uVar10 <= uVar2) {
                  uVar9 = in_stack_00000018 == uVar4;
                  if (in_stack_00000018 <= uVar4) {
                    uVar7 = in_stack_00000018 < uVar4;
                    if (in_stack_00000018 >= uVar4) {
                      uVar9 = in_stack_00000016 == uVar3;
                      uVar7 = in_stack_00000016 < uVar3;
                      if (uVar3 < in_stack_00000016) goto LAB_3ab8_0d9f;
                    }
                    goto LAB_3ab8_0db7;
                  }
                }
              }
LAB_3ab8_0d9f:
              local_4a = local_4a + 1;
              iVar5 = local_4a * 4;
              uVar9 = iVar5 == 0;
              *(uint *)(iVar5 + in_stack_00000028) = uVar3;
              *(uint *)(iVar5 + in_stack_00000028 + 2) = uVar4;
              uVar7 = local_4a * 2 < 0;
            }
          }
LAB_3ab8_0db7:
          uStack_a = 0xb940;
          uStack_8 = uVar6;
          func_0x000297e6();
          uStack_8 = 0x22b2;
          uStack_a = 0xb948;
          func_0x000297e6();
          uStack_8 = 0x22b2;
          uStack_a = 0xb950;
          func_0x00029bb5();
          uStack_8 = 0x22b2;
          uStack_a = 0xb958;
          func_0x0002996b();
          uStack_8 = 0x22b2;
          uVar6 = 0x22b2;
          uStack_a = 0xb95d;
          FUN_28b3_1181();
          if (!(bool)uVar7 && !(bool)uVar9) {
            uStack_8 = 0x22b2;
            uStack_a = 0xb96a;
            func_0x000297e6();
            uStack_8 = 0x22b2;
            uStack_a = 0xb972;
            func_0x000297e6();
            uStack_8 = 0x22b2;
            uVar6 = 0x22b2;
            uStack_a = 0xb977;
            FUN_28b3_1181();
            if ((bool)uVar7) {
              uStack_8 = 0x22b2;
              uStack_a = 0xb98b;
              func_0x000297e6();
              uStack_8 = 0x22b2;
              uStack_a = 0xb993;
              func_0x000297e6();
              uStack_8 = 0x22b2;
              uStack_a = 0xb99b;
              func_0x00029b6d();
              uStack_8 = 0x22b2;
              uStack_a = 0xb9a0;
              FUN_28b3_117c();
              uStack_8 = 0x22b2;
              uStack_a = 0xb9a8;
              func_0x0002996b();
              uStack_8 = 0x22b2;
              uStack_a = 0xb9b0;
              FUN_28b3_0ee9();
              uStack_8 = 0x22b2;
              uStack_a = 0xb9b8;
              func_0x000297e6();
              uStack_8 = 0x22b2;
              uStack_a = 0xb9bd;
              func_0x00029d78();
              func_0x000299d1(0x22b2);
              func_0x000297e6(0x22b2);
              func_0x000297e6(0x22b2);
              func_0x00029b6d(0x22b2);
              FUN_28b3_117c(0x22b2);
              func_0x0002996b(0x22b2);
              func_0x00029d78(0x22b2);
              func_0x000299d1(0x22b2);
              uVar6 = 0xdef;
              uVar10 = FUN_1000_0718(0x22b2,*(undefined2 *)0x974c,*(undefined2 *)0x974e,
                                     *(undefined2 *)0x9750,*(undefined2 *)0x9752,
                                     *(undefined2 *)0x974c,*(undefined2 *)0x974e,
                                     *(undefined2 *)0x9750,*(undefined2 *)0x9752);
              if (!bVar1) {
                if ((in_stack_00000018 < in_stack_00000014) ||
                   ((in_stack_00000018 <= in_stack_00000014 &&
                    (in_stack_00000016 <= in_stack_00000012)))) {
                  if (uVar2 < uVar10) goto LAB_3ab8_0efe;
                }
                else if (uVar10 <= uVar2) goto LAB_3ab8_0f16;
                if (CONCAT22(in_stack_00000018,in_stack_00000016) <= uVar10) goto LAB_3ab8_0f16;
              }
LAB_3ab8_0efe:
              local_4a = local_4a + 1;
              *(undefined2 *)(local_4a * 4 + in_stack_00000028) = (int)uVar10;
              *(undefined2 *)(local_4a * 4 + in_stack_00000028 + 2) = (int)(uVar10 >> 0x10);
            }
          }
        }
      }
LAB_3ab8_0f16:
    }
    if ((local_30 != 0) && (local_4a == 0)) {
      local_4a = -1;
    }
  }
  return local_4a;
}



/* 3ab8:11f3  FUN_3ab8_11f3  403 bytes, 1 callers */

void __cdecl16far FUN_3ab8_11f3(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  bool bVar7;
  undefined4 uVar8;
  undefined2 ***local_18;
  int local_16;
  char local_14;
  undefined2 ***local_12;
  undefined2 ***local_10;
  undefined2 ***local_a;
  int local_8;
  undefined2 ***local_6;
  undefined2 ***local_4;
  
  local_4 = (undefined2 ***)0x3ab8;
  local_6 = (undefined2 ***)0xbd7e;
  FUN_21f2_0ebc();
  local_18 = (undefined2 ****)0x1;
  local_16 = 0;
  iVar5 = 0x22b2;
  do {
    while( true ) {
      if ((*(int *)0x14a < local_16) ||
         ((*(int *)0x14a <= local_16 && ((undefined2 ****)*(uint *)0x148 < local_18)))) {
        return;
      }
      local_4 = (undefined2 ***)local_16;
      local_6 = local_18;
      local_a = (undefined2 ***)0xbda9;
      local_8 = iVar5;
      uVar8 = func_0x0000013f();
      uVar3 = *(uint *)((int)uVar8 + 0x14);
      if (((uVar3 & 2) != 0) && ((uVar3 & 0xc0) != 0)) break;
      bVar7 = (undefined2 ****)0xfffe < local_18;
      local_18 = (undefined2 ***)((int)local_18 + 1);
      local_16 = local_16 + (uint)bVar7;
      iVar5 = 0;
    }
    local_4 = &local_a;
    local_6 = &local_6;
    local_8 = local_16;
    local_a = local_18;
    func_0x00007be8(0);
    if (param_1 < -9) {
      local_10 = local_4;
      for (local_12 = local_6;
          (iVar5 = 0x7a6, (int)local_10 <= local_8 &&
          (((int)local_10 < local_8 || (local_12 <= local_a))));
          local_12 = (undefined2 ***)((int)local_12 + 1)) {
        local_4 = local_10;
        local_6 = local_12;
        local_8 = 0x7a6;
        local_a = (undefined2 ***)0xbece;
        uVar8 = func_0x0000013f();
        pbVar2 = (byte *)((int)uVar8 + 0x14);
        *pbVar2 = *pbVar2 | 2;
        local_4 = local_10;
        local_6 = local_12;
        local_8 = 1;
        local_a = (undefined2 ****)0x0;
        func_0x00007d9b();
        local_10 = (undefined2 ***)((int)local_10 + (uint)((undefined2 ****)0xfffe < local_12));
      }
    }
    else {
      local_14 = '\x01';
      local_12 = local_6;
      local_10 = local_4;
      iVar6 = 0x7a6;
      while( true ) {
        iVar5 = iVar6;
        if ((local_8 < (int)local_10) || ((local_8 <= (int)local_10 && (local_a < local_12))))
        goto LAB_3ab8_12b1;
        local_4 = local_10;
        local_6 = local_12;
        iVar5 = 0;
        local_a = (undefined2 ****)0xbe20;
        local_8 = iVar6;
        uVar8 = func_0x0000013f();
        if ((*(byte *)((int)uVar8 + 0x14) & 2) == 0) break;
        bVar7 = (undefined2 ****)0xfffe < local_12;
        local_12 = (undefined2 ***)((int)local_12 + 1);
        local_10 = (undefined2 ***)((int)local_10 + (uint)bVar7);
        iVar6 = iVar5;
      }
      local_14 = '\0';
LAB_3ab8_12b1:
      local_10 = local_4;
      for (local_12 = local_6;
          ((int)local_10 <= local_8 && (((int)local_10 < local_8 || (local_12 <= local_a))));
          local_12 = (undefined2 ***)((int)local_12 + 1)) {
        local_4 = local_10;
        local_6 = local_12;
        iVar6 = 0;
        local_a = (undefined2 ****)0xbe66;
        local_8 = iVar5;
        uVar8 = func_0x0000013f();
        uVar4 = (undefined2)((ulong)uVar8 >> 0x10);
        puVar1 = (uint *)((int)uVar8 + 0x14);
        *puVar1 = *puVar1 ^ (byte)(*(byte *)((int)uVar8 + 0x14) ^ local_14 << 1) & 2;
        if (local_14 != '\0') {
          local_4 = local_10;
          local_6 = local_12;
          local_8 = 1;
          local_a = (undefined2 ****)0x0;
          iVar6 = 0x7a6;
          func_0x00007d9b();
        }
        local_10 = (undefined2 ***)((int)local_10 + (uint)((undefined2 ****)0xfffe < local_12));
        iVar5 = iVar6;
      }
    }
    local_18 = (undefined2 ***)((int)local_a + 1);
    local_16 = local_8 + (uint)((undefined2 ****)0xfffe < local_a);
  } while( true );
}



/* 3ab8:1386  FUN_3ab8_1386  274 bytes, 0 callers */

void __cdecl16far
FUN_3ab8_1386(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
             undefined2 param_13,undefined2 param_14,undefined2 param_15,undefined2 param_16,
             undefined2 param_17)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_21f2_0ebc();
  FUN_1885_2ec3(0x22b2);
  uVar1 = 0x1b6e;
  func_0x00008211(0x1b6e,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  param_10,param_11,param_12,param_13,param_14,param_15,param_16);
  func_0x000297e6(0x7a6,param_17);
  uVar2 = 0xbf5d;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,param_12,param_13,uVar2);
  func_0x000297e6(0x22b2);
  uVar2 = 0xbf75;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,param_8,param_9,uVar2);
  func_0x000297e6(0x22b2);
  uVar2 = 0xbf8d;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,param_4,param_5,uVar2);
  func_0x000297e6(0x22b2);
  uVar2 = 0xbfa5;
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2,uVar1,param_1,uVar2);
  func_0x000297e6(0x22b2);
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
  FUN_1885_5194();
  return;
}



/* 3ab8:1498  FUN_3ab8_1498  798 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003c304) */
/* WARNING: Removing unreachable block (ram,0x0003c2bd) */

undefined2 __cdecl16far
FUN_3ab8_1498(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,
             undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar8;
  long lVar9;
  undefined1 local_54 [20];
  undefined1 local_40 [12];
  int local_34;
  undefined4 local_2e;
  undefined2 local_26 [6];
  uint local_1a;
  int local_18;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  undefined1 *local_e;
  undefined1 *puStack_c;
  
  FUN_21f2_0ebc();
  puStack_c = (undefined1 *)0x22b2;
  local_e = (undefined1 *)0xc030;
  puVar8 = (undefined2 *)func_0x00000271();
  puVar6 = (undefined2 *)puVar8;
  puVar7 = local_26;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  if (10000 < local_1a) {
    func_0x00029da5();
    func_0x00029b6d();
    func_0x00029d78();
    func_0x00029c2c();
    func_0x00029983();
  }
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x0002996b();
  func_0x00029bb5();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029bb5();
  func_0x00029983();
  *param_5 = 1;
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029bb5();
  func_0x00029983();
  param_5[1] = 1;
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029983();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029983();
  param_5[2] = 1;
  func_0x000297e6();
  func_0x00029bb5();
  func_0x00029983();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029983();
  param_5[3] = 1;
  if ((local_18 == local_14) && (local_16 == local_12)) {
    param_5[4] = 0;
    param_5[5] = 0;
    uVar3 = 3;
  }
  else {
    puStack_c = local_54;
    local_e = local_40;
    local_10 = param_2;
    local_12 = param_1;
    local_14 = 0x22b2;
    local_16 = 0xc1e2;
    FUN_20a9_0ca3();
    puStack_c = (undefined1 *)0xc1ed;
    func_0x00029834();
    puStack_c = (undefined1 *)0xc1f8;
    func_0x00029983();
    puStack_c = (undefined1 *)0xc200;
    func_0x00029834();
    puStack_c = (undefined1 *)0xc20b;
    func_0x00029983();
    param_5[4] = 1;
    puStack_c = (undefined1 *)0xc21b;
    func_0x00029834();
    puStack_c = (undefined1 *)0xc226;
    func_0x00029983();
    puStack_c = (undefined1 *)0xc22e;
    func_0x00029834();
    puStack_c = (undefined1 *)0xc239;
    func_0x00029983();
    param_5[5] = 1;
    puStack_c = (undefined1 *)0xc24a;
    func_0x000297e6();
    puStack_c = (undefined1 *)0xc24f;
    func_0x00029d78();
    puStack_c = (undefined1 *)0xc254;
    FUN_28b3_0f51();
    puStack_c = (undefined1 *)(local_10 + local_18);
    local_e = (undefined1 *)0x22b2;
    local_10 = -0x3d93;
    local_2e = func_0x00021eee();
    puStack_c = (undefined1 *)0xc27e;
    func_0x000297e6();
    puStack_c = (undefined1 *)0xc283;
    func_0x00029d78();
    puStack_c = (undefined1 *)0xc288;
    FUN_28b3_0f51();
    puStack_c = (undefined1 *)(local_10 + local_14);
    local_e = (undefined1 *)0x22b2;
    local_10 = 0xc2a1;
    lVar9 = func_0x00021eee();
    iVar5 = (int)((ulong)lVar9 >> 0x10);
    for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
      iVar4 = local_34 * 0x5a;
      if (((local_2e < lVar9) &&
          (((iVar4 < local_2e._2_2_ ||
            ((iVar4 - local_2e._2_2_ == 0 || iVar4 < local_2e._2_2_ && ((int)local_2e != 0)))) ||
           ((iVar5 <= iVar4 && (iVar4 - iVar5 != 0 && iVar5 <= iVar4)))))) ||
         ((((lVar9 < local_2e && (iVar4 <= local_2e._2_2_)) &&
           ((iVar4 < local_2e._2_2_ || ((int)local_2e != 0)))) &&
          ((iVar5 <= iVar4 && (iVar5 < iVar4)))))) {
        param_5[local_34] = 0;
      }
    }
    uVar3 = 5;
  }
  return uVar3;
}



/* 3ab8:17b6  FUN_3ab8_17b6  3935 bytes, 0 callers */

void __cdecl16far
FUN_3ab8_17b6(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
             undefined2 param_8,uint param_9,uint param_10,uint param_11,uint param_12,uint param_13
             ,uint param_14,uint param_15,uint param_16,undefined2 param_17,undefined2 param_18,
             undefined2 param_19,uint param_20,uint param_21)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint *puVar10;
  undefined2 uVar11;
  uint uVar12;
  uint uVar13;
  uint unaff_SS;
  undefined2 unaff_DS;
  bool bVar14;
  uint *puVar15;
  undefined2 local_132;
  undefined2 local_130;
  uint local_12a;
  uint local_128;
  uint local_122;
  uint local_120;
  uint local_11e;
  uint local_11c;
  uint local_116;
  uint local_114;
  uint local_112;
  uint local_110;
  uint local_10e;
  uint local_108;
  uint local_106;
  uint local_104;
  uint local_102;
  uint local_100;
  uint local_fe;
  uint local_fc;
  uint local_fa;
  uint local_f0;
  int local_ee;
  uint local_b0;
  uint local_ae;
  uint local_ac;
  uint local_aa;
  uint local_a8;
  uint local_a6;
  int local_a4;
  uint local_a2;
  uint local_a0;
  uint local_9e;
  uint local_9c;
  uint local_9a;
  int local_98;
  uint local_96;
  uint local_94;
  uint local_92;
  uint local_90;
  uint local_8e;
  uint local_8c;
  uint local_8a;
  uint local_88;
  uint local_86;
  uint local_84;
  undefined4 local_82;
  undefined2 local_7e [2];
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_60 [20];
  uint local_38;
  uint local_36;
  uint local_34;
  uint local_32 [2];
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  uint local_24;
  uint local_22;
  uint local_20;
  uint local_1c;
  uint local_1a;
  uint local_18;
  uint local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  uint uStack_e;
  uint uStack_c;
  
  FUN_21f2_0ebc();
  uStack_c = param_21;
  uStack_e = param_20;
  uStack_10 = param_19;
  uStack_12 = param_18;
  uStack_14 = param_17;
  local_16 = param_16;
  local_18 = param_15;
  local_1a = param_14;
  local_1c = param_13;
  local_20 = param_11;
  local_22 = param_10;
  local_24 = param_9;
  local_26 = param_8;
  local_28 = 0x22b2;
  local_2a = 0xc378;
  func_0x00008211();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x000297e6();
  func_0x0002a714();
  func_0x000297e6();
  func_0x000297e6();
  func_0x0002996b();
  func_0x0002a714();
  func_0x0002a714();
  func_0x00029983();
  func_0x000297e6();
  func_0x000297e6();
  func_0x0002a714();
  func_0x000297e6();
  func_0x000297e6();
  func_0x0002a714();
  func_0x0002a714();
  func_0x00029983();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1bc0();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1bc0();
  FUN_28b3_1bc0();
  func_0x00029983();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1bc0();
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1bc0();
  FUN_28b3_1bc0();
  uVar12 = 0x22b2;
  func_0x00029983();
  if ((int)local_114 < 0) {
    bVar14 = local_116 != 0;
    local_116 = -local_116;
    local_114 = -((local_114 & 0x7fff) + (uint)bVar14);
  }
  if ((int)local_11c < 0) {
    bVar14 = local_11e != 0;
    local_11e = -local_11e;
    local_11c = -((local_11c & 0x7fff) + (uint)bVar14);
  }
  if ((int)local_120 < 0) {
    bVar14 = local_122 != 0;
    local_122 = -local_122;
    local_120 = -((local_120 & 0x7fff) + (uint)bVar14);
  }
  if ((int)local_128 < 0) {
    bVar14 = local_12a != 0;
    local_12a = -local_12a;
    local_128 = -((local_128 & 0x7fff) + (uint)bVar14);
  }
  local_a8 = local_122;
  local_a6 = local_120;
  local_9e = local_11e;
  local_9c = local_11c;
  local_96 = local_116;
  local_94 = local_114;
  for (local_112 = 1; (int)local_112 <= *(int *)0x152; local_112 = local_112 + 1) {
    if (((local_112 & 0xf) == 0) && (iVar5 = func_0x0000db7a(), iVar5 != 0)) {
      return;
    }
    uVar12 = 0;
    uStack_c = 0xc613;
    puVar15 = (uint *)func_0x000003ef();
    uVar11 = (undefined2)((ulong)puVar15 >> 0x10);
    puVar4 = (uint *)puVar15;
    if (param_5 == 0) {
      *(byte *)(puVar4 + 5) = (byte)puVar4[5] & 0xfd;
LAB_3ab8_1a57:
      if (((param_6 != 2) || ((puVar4[5] & 8) != 0)) && ((-2 < param_3 && (param_4 != 4)))) {
        uStack_c = *(uint *)0xa6c;
        uStack_e = (uint)(byte)puVar4[4];
        uStack_10 = 0;
        uVar12 = 0x7a6;
        uStack_12 = 0xc659;
        iVar5 = func_0x00007ba4();
        if (iVar5 != 0) {
          puVar6 = &local_38;
          puVar7 = puVar4;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            puVar15 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar15;
          }
          local_86 = local_38;
          local_84 = local_36;
          if ((int)local_36 < 0) {
            local_86 = -local_38;
            local_84 = -((local_36 & 0x7fff) + (uint)(local_38 != 0));
          }
          if ((((int)local_94 <= (int)local_84) &&
              (((int)local_94 < (int)local_84 || (local_96 <= local_86)))) &&
             (((int)local_84 < (int)local_a6 ||
              (((int)local_84 <= (int)local_a6 && (local_86 <= local_a8)))))) {
            local_8e = local_34;
            local_8c = local_32[0];
            if ((int)local_32[0] < 0) {
              local_8e = -local_34;
              local_8c = -((local_32[0] & 0x7fff) + (uint)(local_34 != 0));
            }
            if ((((int)local_9c <= (int)local_8c) &&
                (((int)local_9c < (int)local_8c || (local_9e <= local_8e)))) &&
               (((int)local_8c < (int)local_128 ||
                (((int)local_8c <= (int)local_128 && (local_8e <= local_12a)))))) {
              func_0x000297e6();
              func_0x00029d78();
              uStack_10 = 0x22b2;
              uStack_12 = 0xc74b;
              func_0x000299d1();
              uStack_10 = 0x22b2;
              uStack_12 = 0xc753;
              func_0x000297e6();
              uStack_10 = 0x22b2;
              uStack_12 = 0xc758;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = 0xc762;
              func_0x000299d1();
              local_18 = 0x22b2;
              local_1a = 0xc767;
              iVar5 = func_0x00008745();
              if (0 < iVar5) {
                if (param_5 == -1) {
                  *(byte *)(puVar4 + 5) = (byte)puVar4[5] & 0xfd;
                  uStack_c = 0x7a6;
                  uStack_e = 0xc78b;
                  func_0x00007f92();
                }
                else {
                  *(byte *)(puVar4 + 5) = (byte)puVar4[5] | 2;
                }
              }
            }
          }
          uVar12 = 0x7a6;
          if (0 < param_3) {
            *(byte *)(puVar4 + 5) = (byte)puVar4[5] ^ 2;
          }
          if ((puVar4[5] & 2) != 0) {
            uVar12 = 0x885;
            uStack_c = 0xc6df;
            iVar5 = func_0x00008854();
            if (iVar5 == 0) {
              uStack_c = 0x885;
              uVar12 = 0x7a6;
              uStack_e = 0xc7a8;
              func_0x00007f92();
            }
            else {
              *(byte *)(puVar4 + 5) = (byte)puVar4[5] & 0xfd;
            }
          }
        }
      }
    }
    else if ((param_5 != 1) || ((puVar4[5] & 2) == 0)) goto LAB_3ab8_1a57;
  }
  bVar14 = false;
  local_98 = 0;
  for (local_9a = 1;
      (local_98 <= *(int *)0x14a && ((local_98 < *(int *)0x14a || (local_9a <= *(uint *)0x148))));
      local_9a = local_9a + 1) {
    uVar13 = uVar12;
    if ((local_9a & 0xf) == 0) {
      uVar13 = 0x885;
      iVar5 = func_0x0000db7a();
      if (iVar5 != 0) {
        return;
      }
    }
    uVar12 = 0;
    uStack_e = 0xc81d;
    uStack_c = uVar13;
    puVar15 = (uint *)func_0x0000013f();
    uVar11 = (undefined2)((ulong)puVar15 >> 0x10);
    puVar4 = (uint *)puVar15;
    if (param_5 == 0) {
      puVar4[10] = puVar4[10] & 0xfcfd;
LAB_3ab8_1c4a:
      if (((param_6 != 2) || ((puVar4[10] & 8) != 0)) && ((-2 < param_3 && (param_4 != 4)))) {
        uStack_c = (uint)(byte)puVar4[8];
        uStack_e = (uint)(byte)puVar4[9];
        uStack_10 = 0;
        uVar12 = 0x7a6;
        uStack_12 = 0xc865;
        iVar5 = func_0x00007ba4();
        if (iVar5 != 0) {
          puVar6 = &local_24;
          puVar7 = puVar4;
          for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            puVar15 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar15;
          }
          local_86 = local_24;
          local_84 = local_22;
          if ((int)local_22 < 0) {
            local_86 = -local_24;
            local_84 = -((local_22 & 0x7fff) + (uint)(local_24 != 0));
          }
          local_8e = local_20;
          local_8c = param_12;
          if ((int)param_12 < 0) {
            local_8e = -local_20;
            local_8c = -((param_12 & 0x7fff) + (uint)(local_20 != 0));
          }
          local_8a = local_1c;
          local_88 = local_1a;
          if ((int)local_1a < 0) {
            local_8a = -local_1c;
            local_88 = -((local_1a & 0x7fff) + (uint)(local_1c != 0));
          }
          local_92 = local_18;
          local_90 = local_16;
          if ((int)local_16 < 0) {
            local_92 = -local_18;
            local_90 = -((local_16 & 0x7fff) + (uint)(local_18 != 0));
          }
          if (((((int)local_94 < (int)local_84) ||
               (((((int)local_94 <= (int)local_84 && (local_96 < local_86)) ||
                 ((int)local_94 < (int)local_88)) ||
                (((int)local_94 <= (int)local_88 && (local_96 < local_8a)))))) &&
              (((int)local_84 < (int)local_a6 ||
               ((((int)local_84 <= (int)local_a6 && (local_86 < local_a8)) ||
                (((int)local_88 < (int)local_a6 ||
                 (((int)local_88 <= (int)local_a6 && (local_8a < local_a8)))))))))) &&
             (((((int)local_9c < (int)local_8c ||
                ((((int)local_9c <= (int)local_8c && (local_9e < local_8e)) ||
                 ((int)local_9c < (int)local_90)))) ||
               (((int)local_9c <= (int)local_90 && (local_9e < local_92)))) &&
              ((((int)local_8c < (int)local_128 ||
                (((int)local_8c <= (int)local_128 && (local_8e < local_12a)))) ||
               (((int)local_90 < (int)local_128 ||
                (((int)local_90 <= (int)local_128 && (local_92 < local_12a)))))))))) {
            func_0x000297e6();
            func_0x00029d78();
            uStack_10 = 0x22b2;
            uStack_12 = 0xca11;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            uStack_12 = 0xca19;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            uStack_12 = 0xca1e;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xca28;
            func_0x000299d1();
            local_18 = 0x22b2;
            local_1a = 0xca2d;
            local_a4 = func_0x00008745();
            func_0x000297e6();
            func_0x00029d78();
            uStack_10 = 0x22b2;
            uStack_12 = 0xca4b;
            func_0x000299d1();
            uStack_10 = 0x22b2;
            uStack_12 = 0xca53;
            func_0x000297e6();
            uStack_10 = 0x22b2;
            uStack_12 = 0xca58;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xca62;
            func_0x000299d1();
            local_18 = 0x22b2;
            local_1a = 0xca67;
            local_ee = func_0x00008745();
            if ((local_a4 < 1) || (local_ee < 1)) {
              if ((param_1 != 0) && (param_5 != -1)) {
                if (-1 < local_a4) goto LAB_3ab8_1f15;
                if (local_ee < 0) {
                  if (param_1 != 1) {
                    local_7a = local_132;
                    local_78 = local_130;
                    puVar7 = &local_1c;
                    puVar6 = &local_24;
                    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                      puVar3 = puVar7;
                      puVar7 = puVar7 + 1;
                      puVar15 = puVar6;
                      puVar6 = puVar6 + 1;
                      *puVar3 = *puVar15;
                    }
                    puVar6 = local_32;
                    puVar8 = local_7e;
                    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                      puVar2 = puVar6;
                      puVar6 = puVar6 + 1;
                      puVar1 = puVar8;
                      puVar8 = puVar8 + 1;
                      *puVar2 = *puVar1;
                    }
                    local_34 = 0x7a6;
                    local_36 = 0xcb24;
                    puVar6 = local_32;
                    iVar5 = func_0x000084eb();
                    param_12 = unaff_SS;
                    if (iVar5 < 1) {
                      local_7a = 0xca41;
                      local_78 = 0x22b2;
                      puVar10 = &local_1c;
                      puVar7 = &local_24;
                      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                        puVar3 = puVar10;
                        puVar10 = puVar10 + 1;
                        puVar15 = puVar7;
                        puVar7 = puVar7 + 1;
                        *puVar3 = *puVar15;
                      }
                      puVar8 = local_7e;
                      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
                        puVar2 = puVar6;
                        puVar6 = puVar6 + 1;
                        puVar1 = puVar8;
                        puVar8 = puVar8 + 1;
                        *puVar2 = *puVar1;
                      }
                      local_34 = 0x7a6;
                      local_36 = 0xcb81;
                      iVar5 = func_0x000084eb();
                      if (iVar5 < 1) goto LAB_3ab8_1dc1;
                    }
LAB_3ab8_1f15:
                    puVar4[10] = puVar4[10] | 0x102;
                  }
                }
                else {
                  *(byte *)(puVar4 + 10) = (byte)puVar4[10] | 2;
                  if (param_1 == 1) {
                    *(byte *)((int)puVar4 + 0x15) = *(byte *)((int)puVar4 + 0x15) | 2;
                  }
                  else {
                    *(byte *)((int)puVar4 + 0x15) = *(byte *)((int)puVar4 + 0x15) | 1;
                  }
                }
              }
            }
            else {
              if (param_5 == -1) {
                if (((puVar4[10] & 0x40) != 0) || ((puVar4[10] & 0x80) != 0)) goto LAB_3ab8_1dc1;
                *(byte *)(puVar4 + 10) = (byte)puVar4[10] & 0xfd;
                uStack_c = 0;
                uStack_e = 0x7a6;
                uStack_10 = 0xcbbe;
                func_0x00007d9b();
              }
              else {
                *(byte *)(puVar4 + 10) = (byte)puVar4[10] | 2;
              }
              if (((puVar4[10] & 0x40) != 0) || ((puVar4[10] & 0x80) != 0)) {
                bVar14 = true;
              }
            }
          }
LAB_3ab8_1dc1:
          uVar12 = 0x7a6;
          if ((0 < param_3) && ((*(byte *)((int)puVar4 + 0x15) & 1) == 0)) {
            *(byte *)(puVar4 + 10) = (byte)puVar4[10] ^ 2;
          }
          if ((puVar4[10] & 2) != 0) {
            uVar12 = 0x885;
            uStack_c = 0xc96f;
            iVar5 = func_0x00008854();
            if (iVar5 == 0) {
              if ((param_1 != 0) || (((puVar4[10] & 0x40) == 0 && ((puVar4[10] & 0x80) == 0)))) {
                uStack_c = 1;
                uStack_e = 0x885;
                uVar12 = 0x7a6;
                uStack_10 = 0xcc15;
                func_0x00007d9b();
              }
            }
            else {
              *(byte *)(puVar4 + 10) = (byte)puVar4[10] & 0xfd;
            }
          }
        }
      }
    }
    else if ((param_5 != 1) || ((puVar4[10] & 2) == 0)) goto LAB_3ab8_1c4a;
    local_98 = local_98 + (uint)(0xfffe < local_9a);
  }
  if (((param_1 == 0) && (bVar14)) || (param_2 < -9)) {
    uStack_c = 0xcc35;
    FUN_3ab8_11f3();
  }
  local_98 = 0;
  for (local_9a = 1;
      (local_98 <= *(int *)0x14e && ((local_98 < *(int *)0x14e || (local_9a <= *(uint *)0x14c))));
      local_9a = local_9a + 1) {
    uVar13 = uVar12;
    if ((local_9a & 0xf) == 0) {
      uVar13 = 0x885;
      iVar5 = func_0x0000db7a();
      if (iVar5 != 0) {
        return;
      }
    }
    uVar12 = 0;
    uStack_e = 0xcca4;
    uStack_c = uVar13;
    local_82 = (undefined2 *)func_0x00000271();
    uVar11 = (undefined2)((ulong)local_82 >> 0x10);
    puVar8 = (undefined2 *)local_82;
    if (param_5 == 0) {
      *(byte *)(puVar8 + 0xf) = *(byte *)(puVar8 + 0xf) & 0xfd;
      *(undefined1 *)((int)puVar8 + 0x1d) = 0;
LAB_3ab8_20d1:
      if (((param_6 != 2) || ((*(byte *)(puVar8 + 0xf) & 8) != 0)) &&
         ((-2 < param_3 && (param_4 != 4)))) {
        local_f0 = (uint)*(byte *)(puVar8 + 0xe);
        uStack_c = (uint)*(byte *)(puVar8 + 0xd);
        uStack_10 = 0;
        uVar12 = 0x7a6;
        uStack_12 = 0xccf2;
        uStack_e = local_f0;
        iVar5 = func_0x00007ba4();
        if (iVar5 != 0) {
          puVar8 = local_60;
          puVar9 = (undefined2 *)local_82;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar2 = *puVar1;
          }
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          uVar12 = 0x22b2;
          func_0x00029983();
          local_86 = local_a2;
          local_84 = local_a0;
          if ((int)local_a0 < 0) {
            local_86 = -local_a2;
            local_84 = -((local_a0 & 0x7fff) + (uint)(local_a2 != 0));
          }
          local_8a = local_ac;
          local_88 = local_aa;
          if ((int)local_aa < 0) {
            local_8a = -local_ac;
            local_88 = -((local_aa & 0x7fff) + (uint)(local_ac != 0));
          }
          if ((((int)local_94 <= (int)local_84) &&
              (((int)local_94 < (int)local_84 || (local_96 <= local_86)))) &&
             (((int)local_88 < (int)local_a6 ||
              (((int)local_88 <= (int)local_a6 && (local_8a <= local_a8)))))) {
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            uVar12 = 0x22b2;
            func_0x00029983();
            local_8e = local_b0;
            local_8c = local_ae;
            if ((int)local_ae < 0) {
              local_8e = -local_b0;
              local_8c = -((local_ae & 0x7fff) + (uint)(local_b0 != 0));
            }
            local_92 = local_110;
            local_90 = local_10e;
            if ((int)local_10e < 0) {
              local_92 = -local_110;
              local_90 = -((local_10e & 0x7fff) + (uint)(local_110 != 0));
            }
            if ((((int)local_9c <= (int)local_8c) &&
                (((int)local_9c < (int)local_8c || (local_9e <= local_8e)))) &&
               (((int)local_90 < (int)local_128 ||
                (((int)local_90 <= (int)local_128 && (local_92 <= local_12a)))))) {
              uStack_c = 0xbc4;
              puVar9 = &local_2c;
              puVar8 = local_60;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar2 = puVar9;
                puVar9 = puVar9 + 1;
                puVar1 = puVar8;
                puVar8 = puVar8 + 1;
                *puVar2 = *puVar1;
              }
              local_32[1] = 0xcefd;
              iVar5 = FUN_3ab8_09c2();
              if (iVar5 != 0) {
                puVar8 = (undefined2 *)local_82;
                uVar11 = (undefined2)((ulong)local_82 >> 0x10);
                if (param_1 == 2) {
                  if (0 < iVar5) {
                    *(byte *)((int)puVar8 + 0x1d) = *(byte *)((int)puVar8 + 0x1d) | 1;
                  }
                }
                else if (0 < iVar5) goto LAB_3ab8_2246;
                if (param_5 == -1) {
                  *(byte *)(puVar8 + 0xf) = *(byte *)(puVar8 + 0xf) & 0xfd;
                  uStack_c = 0;
                  uStack_e = 0x22b2;
                  uVar12 = 0x7a6;
                  uStack_10 = 0xcf4d;
                  func_0x00007d9b();
                }
                else {
                  *(byte *)(puVar8 + 0xf) = *(byte *)(puVar8 + 0xf) | 2;
                }
              }
            }
          }
LAB_3ab8_2246:
          puVar8 = (undefined2 *)local_82;
          uVar11 = (undefined2)((ulong)local_82 >> 0x10);
          if ((0 < param_3) && (*(char *)((int)puVar8 + 0x1d) == '\0')) {
            *(byte *)(puVar8 + 0xf) = *(byte *)(puVar8 + 0xf) ^ 2;
          }
          if (param_6 == 2) {
            puVar8[0xf] = puVar8[0xf] ^
                          (byte)((byte)((uint)puVar8[0xf] >> 2) ^ (byte)puVar8[0xf]) & 2;
          }
          if ((*(byte *)(puVar8 + 0xf) & 2) != 0) {
            uVar12 = 0x885;
            uStack_c = 0xce10;
            iVar5 = func_0x00008854();
            if (iVar5 == 0) {
              uStack_c = 1;
              uStack_e = 0x885;
              uVar12 = 0x7a6;
              uStack_10 = 0xcf78;
              func_0x00007d9b();
            }
            else {
              *(byte *)((undefined2 *)local_82 + 0xf) =
                   *(byte *)((undefined2 *)local_82 + 0xf) & 0xfd;
            }
          }
        }
      }
    }
    else if ((param_5 != 1) || ((*(byte *)(puVar8 + 0xf) & 2) == 0)) goto LAB_3ab8_20d1;
    local_98 = local_98 + (uint)(0xfffe < local_9a);
  }
  local_112 = 1;
  do {
    if ((*(int *)0x150 < (int)local_112) ||
       (((local_112 & 7) == 0 && (iVar5 = func_0x0000db7a(), iVar5 != 0)))) {
      return;
    }
    uStack_c = 0xcfcc;
    puVar15 = (uint *)func_0x00000398();
    uVar11 = (undefined2)((ulong)puVar15 >> 0x10);
    puVar4 = (uint *)puVar15;
    if (param_5 == 0) {
      *(byte *)(puVar4 + 0xb) = (byte)puVar4[0xb] & 0xfd;
LAB_3ab8_240f:
      if ((((param_6 != 2) || ((puVar4[0xb] & 8) != 0)) && ((param_3 == -2 || (param_7 == 1)))) &&
         ((param_4 != 4 || ((uint)(byte)puVar4[10] == *(uint *)0x168)))) {
        uStack_c = *(uint *)0xa6c;
        uStack_e = (uint)*(byte *)((int)puVar4 + 0x15);
        uStack_10 = 0;
        uStack_12 = 0xd02b;
        iVar5 = func_0x00007ba4();
        if (iVar5 != 0) {
          puVar6 = &local_108;
          puVar7 = puVar4;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = puVar6;
            puVar6 = puVar6 + 1;
            puVar15 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar15;
          }
          local_86 = local_108;
          local_84 = local_106;
          if ((int)local_106 < 0) {
            local_86 = -local_108;
            local_84 = -((local_106 & 0x7fff) + (uint)(local_108 != 0));
          }
          local_8a = local_100;
          local_88 = local_fe;
          if ((int)local_fe < 0) {
            local_8a = -local_100;
            local_88 = -((local_fe & 0x7fff) + (uint)(local_100 != 0));
          }
          if ((((int)local_94 <= (int)local_84) &&
              ((((((int)local_94 < (int)local_84 || (local_96 <= local_86)) &&
                 ((int)local_94 <= (int)local_88)) &&
                (((int)local_94 < (int)local_88 || (local_96 <= local_8a)))) &&
               ((int)local_84 <= (int)local_a6)))) &&
             ((((int)local_84 < (int)local_a6 || (local_86 <= local_a8)) &&
              (((int)local_88 < (int)local_a6 ||
               (((int)local_88 <= (int)local_a6 && (local_8a <= local_a8)))))))) {
            local_8e = local_104;
            local_8c = local_102;
            if ((int)local_102 < 0) {
              local_8e = -local_104;
              local_8c = -((local_102 & 0x7fff) + (uint)(local_104 != 0));
            }
            local_92 = local_fc;
            local_90 = local_fa;
            if ((int)local_fa < 0) {
              local_92 = -local_fc;
              local_90 = -((local_fa & 0x7fff) + (uint)(local_fc != 0));
            }
            if ((((int)local_9c <= (int)local_8c) &&
                ((((int)local_9c < (int)local_8c || (local_9e <= local_8e)) &&
                 ((int)local_9c <= (int)local_90)))) &&
               ((((((int)local_9c < (int)local_90 || (local_9e <= local_92)) &&
                  ((int)local_8c <= (int)local_128)) &&
                 (((int)local_8c < (int)local_128 || (local_8e <= local_12a)))) &&
                (((int)local_90 < (int)local_128 ||
                 (((int)local_90 <= (int)local_128 && (local_92 <= local_12a)))))))) {
              func_0x000297e6();
              func_0x00029d78();
              uStack_10 = 0x22b2;
              uStack_12 = 0xd1ee;
              func_0x000299d1();
              uStack_10 = 0x22b2;
              uStack_12 = 0xd1f7;
              func_0x000297e6();
              uStack_10 = 0x22b2;
              uStack_12 = 0xd1fc;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = 0xd206;
              func_0x000299d1();
              local_18 = 0x22b2;
              local_1a = 0xd20b;
              iVar5 = func_0x00008745();
              if (0 < iVar5) {
                func_0x000297e6();
                func_0x00029d78();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd22a;
                func_0x000299d1();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd233;
                func_0x000297e6();
                uStack_10 = 0x22b2;
                uStack_12 = 0xd238;
                func_0x00029d78();
                local_18 = 0x22b2;
                local_1a = 0xd242;
                func_0x000299d1();
                local_18 = 0x22b2;
                local_1a = 0xd247;
                iVar5 = func_0x00008745();
                if (0 < iVar5) {
                  if (param_5 == -1) {
                    *(byte *)(puVar4 + 0xb) = (byte)puVar4[0xb] & 0xfd;
                    uStack_c = 0x7a6;
                    uStack_e = 0xd26c;
                    func_0x00008009();
                  }
                  else {
                    *(byte *)(puVar4 + 0xb) = (byte)puVar4[0xb] | 2;
                  }
                }
              }
            }
          }
          if (0 < param_3) {
            *(byte *)(puVar4 + 0xb) = (byte)puVar4[0xb] ^ 2;
          }
          if ((puVar4[0xb] & 2) != 0) {
            uStack_c = 0xd115;
            iVar5 = func_0x00008854();
            if (iVar5 == 0) {
              uStack_c = 0x885;
              uStack_e = 0xd28a;
              func_0x00008009();
            }
            else {
              *(byte *)(puVar4 + 0xb) = (byte)puVar4[0xb] & 0xfd;
            }
          }
        }
      }
    }
    else if ((param_5 != 1) || ((puVar4[0xb] & 2) == 0)) goto LAB_3ab8_240f;
    local_112 = local_112 + 1;
  } while( true );
}



/* 3ab8:2715  FUN_3ab8_2715  363 bytes, 0 callers */

void __cdecl16far FUN_3ab8_2715(void)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_10;
  long lVar7;
  
  FUN_21f2_0ebc();
  func_0x0000daa6(0x22b2);
  uVar4 = 0x885;
  func_0x0000c3ca();
  local_12 = 1;
  local_10 = 0;
  while( true ) {
    if ((*(int *)0x14a < local_10) || ((*(int *)0x14a <= local_10 && (*(uint *)0x148 < local_12))))
    break;
    uVar4 = 0;
    uVar6 = func_0x0000013f();
    uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
    if ((*(byte *)((int)uVar6 + 0x14) & 2) != 0) {
      lVar7 = (ulong)*(byte *)((int)uVar6 + 0x12) << 0x10;
      uVar4 = 0x885;
      iVar2 = func_0x00008854();
      if (iVar2 != 0) {
        uVar3 = (undefined2)((ulong)lVar7 >> 0x10);
        iVar2 = (int)lVar7;
        *(byte *)(iVar2 + 0x15) = *(byte *)(iVar2 + 0x15) & 0xfd;
        *(byte *)(iVar2 + 0x15) = *(byte *)(iVar2 + 0x15) & 0xfe;
        *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) & 0xfd;
      }
    }
    bVar5 = 0xfffe < local_12;
    local_12 = local_12 + 1;
    local_10 = local_10 + (uint)bVar5;
  }
  local_12 = 1;
  local_10 = 0;
  while( true ) {
    if ((*(int *)0x14e < local_10) || ((*(int *)0x14e <= local_10 && (*(uint *)0x14c < local_12))))
    break;
    uVar4 = 0;
    uVar6 = func_0x00000271();
    uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
    if ((*(byte *)((int)uVar6 + 0x1e) & 2) != 0) {
      uVar4 = 0x885;
      iVar2 = func_0x00008854();
      if (iVar2 != 0) {
        pbVar1 = (byte *)((int)uVar6 + 0x1e);
        *pbVar1 = *pbVar1 & 0xfd;
      }
    }
    bVar5 = 0xfffe < local_12;
    local_12 = local_12 + 1;
    local_10 = local_10 + (uint)bVar5;
  }
  for (local_16 = 1; local_16 <= *(int *)0x152; local_16 = local_16 + 1) {
    uVar3 = 0;
    uVar6 = func_0x000003ef(uVar4,local_16);
    if ((*(byte *)((int)uVar6 + 10) & 2) != 0) {
      uVar3 = 0x885;
      iVar2 = func_0x00008854();
      if (iVar2 != 0) {
        pbVar1 = (byte *)((int)uVar6 + 10);
        *pbVar1 = *pbVar1 & 0xfd;
      }
    }
    uVar4 = uVar3;
  }
  for (local_16 = 1; local_16 <= *(int *)0x150; local_16 = local_16 + 1) {
    uVar3 = 0;
    uVar6 = func_0x00000398(uVar4,local_16);
    uVar4 = (undefined2)((ulong)uVar6 >> 0x10);
    if ((*(byte *)((int)uVar6 + 0x16) & 2) != 0) {
      uVar3 = 0x885;
      iVar2 = func_0x00008854();
      if (iVar2 != 0) {
        pbVar1 = (byte *)((int)uVar6 + 0x16);
        *pbVar1 = *pbVar1 & 0xfd;
      }
    }
    uVar4 = uVar3;
  }
  return;
}



/* 3ab8:2880  FUN_3ab8_2880  445 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_2880(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  undefined4 uVar5;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  
  FUN_21f2_0ebc();
  local_56 = 1;
  local_54 = 0;
  uVar3 = 0x22b2;
  while( true ) {
    if ((*(int *)0x14a < local_54) || ((*(int *)0x14a <= local_54 && (*(uint *)0x148 < local_56))))
    break;
    uVar5 = func_0x0000013f(uVar3,local_56,local_54);
    uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
    uVar2 = *(uint *)((int)uVar5 + 0x14);
    if (param_1 < (int)(((uVar2 & 0x20) >> 5) +
                       ((uVar2 & 0x2000) >> 0xd) + ((uVar2 & 0x1000) >> 0xc) +
                       ((uVar2 & 0x800) >> 0xb))) {
      pbVar1 = (byte *)((int)uVar5 + 0x14);
      *pbVar1 = *pbVar1 & 0xfd;
    }
    bVar4 = 0xfffe < local_56;
    local_56 = local_56 + 1;
    local_54 = local_54 + (uint)bVar4;
    uVar3 = 0;
  }
  local_56 = 1;
  local_54 = 0;
  while( true ) {
    if ((*(int *)0x14e < local_54) || ((*(int *)0x14e <= local_54 && (*(uint *)0x14c < local_56))))
    break;
    uVar5 = func_0x00000271(uVar3,local_56,local_54);
    uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
    uVar2 = *(uint *)((int)uVar5 + 0x1e);
    if (param_1 < (int)(((uVar2 & 0x80) >> 7) +
                       ((uVar2 & 0x40) >> 6) + ((uVar2 & 0x10) >> 4) + ((uVar2 & 0x20) >> 5))) {
      pbVar1 = (byte *)((int)uVar5 + 0x1e);
      *pbVar1 = *pbVar1 & 0xfd;
    }
    bVar4 = 0xfffe < local_56;
    local_56 = local_56 + 1;
    local_54 = local_54 + (uint)bVar4;
    uVar3 = 0;
  }
  for (local_58 = 1; local_58 <= *(int *)0x152; local_58 = local_58 + 1) {
    uVar5 = func_0x000003ef(uVar3,local_58);
    uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
    uVar2 = *(uint *)((int)uVar5 + 10);
    if (param_1 < (int)(((uVar2 & 0x40) >> 6) +
                       ((uVar2 & 0x80) >> 7) + ((uVar2 & 0x20) >> 5) + ((uVar2 & 0x10) >> 4))) {
      pbVar1 = (byte *)((int)uVar5 + 10);
      *pbVar1 = *pbVar1 & 0xfd;
    }
    uVar3 = 0;
  }
  for (local_58 = 1; local_58 <= *(int *)0x150; local_58 = local_58 + 1) {
    uVar5 = func_0x00000398(uVar3,local_58);
    uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
    uVar2 = *(uint *)((int)uVar5 + 0x16);
    if (param_1 < (int)(((uVar2 & 0x4000) >> 0xe) +
                       ((uVar2 & 0x800) >> 0xb) + ((uVar2 & 0x2000) >> 0xd))) {
      pbVar1 = (byte *)((int)uVar5 + 0x16);
      *pbVar1 = *pbVar1 & 0xfd;
    }
    uVar3 = 0;
  }
  return 0;
}



/* 3ab8:2a3d  FUN_3ab8_2a3d  8775 bytes, 0 callers */

/* WARNING: Instruction at (ram,0x00031395) overlaps instruction at (ram,0x00031393)
    */

undefined2
FUN_3ab8_2a3d(undefined2 param_1,int *param_2,int param_3,int param_4,undefined2 param_5,
             int **param_6)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  int **ppiVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar8;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  int iVar9;
  undefined1 *unaff_SI;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int **ppiVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int **ppiVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  int local_156;
  int *local_140;
  uint local_13e;
  int *local_13a;
  uint local_138;
  int *local_136;
  int **local_134;
  int local_132;
  int local_130;
  int local_12e;
  int *local_12c;
  int **local_12a;
  int *local_128;
  uint local_126;
  undefined4 local_124;
  int *local_120;
  uint local_11e;
  int *local_11c;
  int **local_11a;
  int local_118;
  int *local_10a;
  int **local_108;
  int *local_106;
  uint local_104;
  uint local_102;
  int *local_e8;
  uint local_e6;
  int *local_e4;
  uint local_e2;
  int *local_e0;
  int *local_de;
  uint local_dc;
  int *local_da;
  uint local_d8;
  int *local_d6;
  int **local_d4;
  uint local_ca;
  int local_c8;
  int local_c6;
  int *local_c4;
  int **local_c2;
  int *local_c0;
  int **local_be;
  int local_b4;
  int **local_b2;
  int local_b0;
  int *local_ae;
  uint local_ac;
  int local_aa;
  int *local_a8;
  int **local_a6;
  int *local_a4;
  int *local_a2;
  undefined2 local_a0;
  int *local_9a;
  uint local_98;
  int *local_96;
  uint local_94;
  int local_8a;
  int **local_88;
  int *local_86;
  int **local_84;
  undefined4 local_82;
  undefined4 local_7e;
  int *local_7a;
  uint local_78;
  undefined4 local_76;
  undefined2 local_72 [23];
  undefined1 auStack_44 [4];
  int *local_40;
  uint local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  int local_38;
  int local_36;
  int *local_34;
  int **local_32;
  int *local_30;
  uint in_stack_0000ffd2;
  int iStack_2c;
  int iStack_2a;
  uint local_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  int *local_22;
  int **local_20;
  int **local_1e;
  int *local_1c;
  int *local_1a;
  int *local_18;
  uint local_16;
  int *local_14;
  uint local_12;
  int *local_10;
  int *local_e;
  int **ppiStack_c;
  undefined2 uVar22;
  
  FUN_21f2_0ebc();
  local_10a = (int *)*(uint *)0x972c;
  local_108 = (int **)*(uint *)0x972e;
  local_120 = (int *)*(uint *)0x972c;
  local_11e = *(uint *)0x972e;
  local_12c = (int *)*(uint *)0x972c;
  local_12a = (int **)*(uint *)0x972e;
  piVar13 = (int *)*(uint *)0x972c;
  uVar6 = *(uint *)0x972e;
  ppiStack_c = (int **)0x22b2;
  local_e = (int *)0xd614;
  FUN_21f2_3454();
  ppiStack_c = (int **)0x22b2;
  local_e = (int *)0xd623;
  FUN_21f2_3454();
  local_38 = param_4;
  local_7a = (int *)*(uint *)0x972c;
  local_78 = *(uint *)0x972e;
  local_3c = *(undefined2 *)0x972c;
  local_3a = *(undefined2 *)0x972e;
  local_40 = (int *)*(uint *)0x972c;
  local_3e = *(uint *)0x972e;
  local_22 = (int *)*(uint *)0x972c;
  local_20 = (int **)*(uint *)0x972e;
  local_aa = 0;
  local_a0 = 0;
  local_28 = 0;
  local_132 = 0;
  local_130 = 0;
  local_b0 = 0;
  local_12e = 0;
  ppiStack_c = (int **)0xd686;
  func_0x0000daa6();
  *(uint *)0xc3be = *(uint *)0xc3be ^ (byte)(*(char *)0xc3be << 2 ^ *(byte *)0xc3be) & 0x10;
  if (*(char *)0x12a == '\x02') {
    *(uint *)0xc3be = *(uint *)0xc3be | 4;
  }
  local_8a = param_3;
  if (param_3 == 500) {
    local_8a = 0;
  }
  if (param_3 == 0x1f5) {
    param_3 = 500;
    local_8a = 1;
  }
  if (local_8a == -9999) {
    local_22 = (int *)*(undefined2 *)0xbc4;
    local_20 = (int **)*(undefined2 *)0xbc6;
    local_40 = (int *)*(undefined2 *)0xbd4;
    local_3e = *(undefined2 *)0xbd6;
    local_3c = *(undefined2 *)0xbcc;
    local_3a = *(undefined2 *)0xbce;
    local_7a = (int *)*(undefined2 *)0xbdc;
    local_78 = *(undefined2 *)0xbde;
    uVar22 = FUN_3ab8_51bd();
    return uVar22;
  }
LAB_3ab8_2b94:
  local_38 = param_4;
  local_132 = 0;
  local_130 = 0;
  local_b0 = 0;
  local_88 = (int **)0x0;
  if (param_6 != (int **)0x0) {
    if (-10 < (int)param_6) {
      local_88 = param_6;
      func_0x00029834();
      func_0x00029983();
      func_0x00029834();
      piVar14 = (int *)0x22b2;
      func_0x00029983();
      local_b2 = param_6;
      goto LAB_3ab8_369b;
    }
    local_88 = (int **)0x0;
    local_b2 = (int **)0x0;
  }
LAB_3ab8_2c00:
  do {
    local_a0 = 0;
    func_0x0000c340();
    if (local_8a == 0) {
      ppiStack_c = (int **)0xd7ab;
      func_0x00012276();
    }
    else {
      ppiStack_c = (int **)0xd79e;
      func_0x00012276();
    }
    ppiStack_c = (int **)0x2b14;
    local_e = (int *)0x11f2;
    local_10 = (int *)0xd7bc;
    func_0x00012276();
    uVar22 = 0;
    local_aa = 0;
    if (local_132 == 0) {
      if (param_2 == (int *)0x2) {
        ppiStack_c = (int **)0xd7e5;
        func_0x00012276();
        ppiStack_c = (int **)0xd7ef;
        func_0x00012276();
        ppiStack_c = (int **)0xd7f9;
        func_0x00012276();
        ppiStack_c = (int **)0xd803;
        func_0x00012276();
      }
      else {
        if (local_38 == -2) {
          ppiStack_c = (int **)0xd827;
          func_0x00012276();
        }
        else {
          ppiStack_c = (int **)0xd819;
          func_0x00012276();
        }
        if (-1 < local_38) {
          ppiStack_c = (int **)0xd83a;
          func_0x00012276();
          ppiStack_c = (int **)0xd844;
          func_0x00012276();
        }
        if (param_2 == (int *)0x0) {
          if (local_38 == 0) {
            ppiStack_c = (int **)0xd860;
            func_0x00012276();
          }
          ppiStack_c = (int **)0x11f2;
          local_e = (int *)0xd86f;
          func_0x00024c86();
          ppiStack_c = (int **)0x22b2;
          local_e = (int *)0xd87f;
          FUN_21f2_2d26();
          if (param_3 != 500) {
            ppiStack_c = (int **)0x22b2;
            local_e = (int *)0xd899;
            FUN_21f2_2d26();
          }
          ppiStack_c = (int **)0x22b2;
          local_e = (int *)0xd8a9;
          FUN_21f2_2d26();
          if (param_3 != 500) {
            ppiStack_c = (int **)0x22b2;
            local_e = (int *)0xd8c3;
            FUN_21f2_2d26();
          }
          ppiStack_c = (int **)0x22b2;
          local_e = (int *)0xd8d3;
          FUN_21f2_2d26();
          if (param_3 != 500) {
            ppiStack_c = (int **)0x22b2;
            local_e = (int *)0xd8ed;
            FUN_21f2_2d26();
          }
          ppiStack_c = (int **)0x22b2;
          local_e = (int *)0xd8fd;
          FUN_21f2_2d26();
          ppiStack_c = (int **)0x22b2;
          local_e = (int *)0xd90d;
          FUN_21f2_2d26();
          if (param_3 == 500) {
            ppiStack_c = (int **)0x22b2;
            local_e = (int *)0xd927;
            FUN_21f2_2d26();
          }
          func_0x00010526();
          ppiStack_c = (int **)0xdef;
          local_e = (int *)0xd93b;
          FUN_1000_0599();
          ppiStack_c = (int **)0xd947;
          func_0x00012276();
          uVar22 = 0xc;
        }
      }
      piVar14 = (int *)0xdef;
      func_0x00010526();
    }
    else {
      if (local_132 == 2) {
        ppiStack_c = (int **)0xd968;
        func_0x00012276();
      }
      if (local_130 == 0) {
        ppiStack_c = (int **)0xd97c;
        func_0x00012276();
      }
      if (local_b0 == 0) {
        ppiStack_c = (int **)0xd991;
        func_0x00012276();
      }
      func_0x00010526();
      ppiStack_c = (int **)0xdef;
      local_e = (int *)0xd9a4;
      FUN_1000_0599();
      piVar14 = (int *)0x11f2;
      ppiStack_c = (int **)0xd9af;
      func_0x00012276();
    }
    local_36 = 0;
LAB_3ab8_2e35:
    while (local_36 != 100) {
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xa48 = 1;
      *(undefined2 *)0xc1a = uVar22;
      ppiStack_c = (int **)0xd9d9;
      func_0x0000daa6();
      uVar15 = 0x885;
      if (*(char *)0x12a == '\x01') {
        *(uint *)0xc3be = *(uint *)0xc3be | 4;
      }
      while (*(int *)0x158 == 0) {
        ppiStack_c = &local_136;
        local_e = &local_c6;
        local_10 = &local_b4;
        local_14 = (int *)0xda11;
        local_12 = uVar15;
        local_36 = func_0x00006608();
        if ((local_b2 != (int **)0x0) || (uVar15 = 0x3bf, local_36 != 0)) break;
      }
      piVar14 = (int *)0x885;
      ppiStack_c = (int **)0xda39;
      func_0x0000daa6();
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(char *)0x12a == '\x01') {
        *(uint *)0xc3be =
             *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
      }
      uVar8 = extraout_DX;
      if ((local_b2 != (int **)0x0) && (0xb < *(byte *)0x123)) {
        piVar14 = (int *)0x7a6;
        uVar21 = func_0x00007a6a();
        uVar8 = (undefined2)((ulong)uVar21 >> 0x10);
        if ((int)uVar21 != 0) {
          ppiStack_c = local_134;
          local_e = local_136;
          local_10 = (int *)0x0;
          local_12 = 0x7a6;
          local_14 = (int *)0xda9c;
          iVar7 = func_0x0002ac0a();
          if (iVar7 == 0) goto LAB_3ab8_2c00;
          if (local_b2 != (int **)0x2) {
            if (*(char *)0x12a == '\x01') {
              *(uint *)0xc3be =
                   *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
            }
            uVar22 = FUN_3ab8_51bd();
            return uVar22;
          }
          FUN_1885_2ec3();
          uVar21 = CONCAT22(extraout_DX_00,local_36);
          goto LAB_2bb4_5853_2;
        }
      }
      if (*(int *)0xc1a != 0) {
        if (*(int *)0xc18 == 2) {
          local_36 = 0x31;
        }
        if (*(int *)0xc18 == -2) {
          local_aa = 1;
        }
      }
      *(undefined2 *)0xc18 = 0;
      *(undefined2 *)0xc1a = 0;
      uVar21 = CONCAT22(uVar8,local_36);
      if ((*(int *)0x158 != 0) ||
         ((local_36 == -1 && (uVar21 = CONCAT22(uVar8,local_36), local_8a != 0))))
      goto LAB_2bb4_5853_2;
      if (local_36 == 99) goto LAB_3ab8_2c00;
      if ((param_2 == (int *)0x0) && (local_38 == 0)) {
        if (local_36 == 0x6300) {
          local_132 = 1;
          local_130 = 1;
          local_b0 = 0;
          local_38 = -2;
          goto LAB_3ab8_2c00;
        }
        if (local_36 == 0x6700) {
          local_132 = 2;
          local_130 = 0;
          local_b0 = 1;
          local_38 = -1;
          goto LAB_3ab8_2c00;
        }
        if (local_36 == 0x6800) {
          local_132 = 2;
          local_130 = 1;
          local_b0 = 0;
          local_38 = -2;
          goto LAB_3ab8_2c00;
        }
      }
      if (((local_132 == 0) && (param_3 == 500)) &&
         ((uVar21 = CONCAT22(uVar8,local_36), local_36 == 0x7f ||
          (((local_b2 != (int **)0x0 && (0x264 < local_b4)) &&
           (uVar21 = CONCAT22(uVar8,local_36), local_c6 <= *(int *)0xa5e)))))) goto LAB_2bb4_5853_2;
      if (((local_132 == 0) && ((local_36 == 0x31 || (local_36 == 0xd)))) ||
         ((((local_132 != 0 && (local_36 == 0x7f)) || (local_aa == 1)) ||
          (((local_b2 != (int **)0x0 && (0x21c < local_b4)) && (local_c6 <= *(int *)0xa5e)))))) {
        if (local_132 == 0) goto LAB_3ab8_30f0;
        goto LAB_3ab8_2b94;
      }
      if ((((local_132 == 0) && (param_2 == (int *)0x0)) && (local_38 == 0)) &&
         ((((local_36 == 0x6200 || (local_36 == 0x6400)) ||
           (((local_36 == 0x6500 || ((local_36 == 0x6600 || (local_36 == 0x6900)))) ||
            (local_36 == 0x6a00)))) || (local_36 == 0x6b00)))) {
        if (local_36 == 0x6200) {
          local_1e = (int **)0x1;
        }
        if ((local_36 == 0x6400) || (local_36 == 0x6600)) {
          local_1e = (int **)0x2;
        }
        if ((local_36 == 0x6900) || (local_36 == 0x6b00)) {
          local_1e = (int **)0x3;
        }
        ppiStack_c = (int **)0xde47;
        func_0x0000daa6();
        func_0x0000c3ca();
        func_0x00007ac6();
        uVar22 = 0x7a6;
        func_0x00007b71();
        local_c8 = 0;
        for (local_ca = 1;
            (local_c8 <= *(int *)0x14a &&
            ((local_c8 < *(int *)0x14a || (local_ca <= *(uint *)0x148)))); local_ca = local_ca + 1)
        {
          local_e = (int *)0xde96;
          ppiStack_c = (int **)uVar22;
          local_76 = (undefined2 *)func_0x0000013f();
          uVar22 = (undefined2)((ulong)local_76 >> 0x10);
          puVar11 = (undefined2 *)local_76;
          puVar11[10] = puVar11[10] & 0xfffd;
          puVar11[10] = puVar11[10] & 0xfeff;
          puVar11[10] = puVar11[10] & 0xfdff;
          local_e0 = (int *)(uint)*(byte *)(puVar11 + 9);
          uVar22 = 0x11f2;
          ppiStack_c = (int **)0xdec3;
          iVar7 = func_0x000125f1();
          puVar11 = (undefined2 *)local_76;
          uVar8 = (undefined2)((ulong)local_76 >> 0x10);
          if (iVar7 != 0) {
            if (local_1e == (int **)0x1) {
              puVar11[10] = puVar11[10] ^
                            (byte)((byte)((uint)puVar11[10] >> 1) ^ (byte)puVar11[10]) & 2;
            }
            if (local_e0 == (int *)*(uint *)0xb310) {
              if (local_1e == (int **)0x2) {
                puVar11[10] = puVar11[10] | 2;
              }
              if (local_1e == (int **)0x3) {
                puVar11[10] = puVar11[10] ^
                              (byte)((byte)((uint)puVar11[10] >> 2) ^ (byte)puVar11[10]) & 2;
              }
            }
          }
          if ((*(byte *)(puVar11 + 10) & 2) != 0) {
            uVar22 = 0x885;
            ppiStack_c = (int **)0xdf3b;
            iVar7 = func_0x00008854();
            if (iVar7 != 0) {
              ((undefined2 *)local_76)[10] = ((undefined2 *)local_76)[10] & 0xfffd;
            }
          }
          local_c8 = local_c8 + (uint)(0xfffe < local_ca);
        }
        local_c8 = 0;
        for (local_ca = 1;
            (local_c8 <= *(int *)0x14e &&
            ((local_c8 < *(int *)0x14e || (local_ca <= *(uint *)0x14c)))); local_ca = local_ca + 1)
        {
          local_e = (int *)0xdf8e;
          ppiStack_c = (int **)uVar22;
          local_82 = (undefined2 *)func_0x00000271();
          uVar22 = (undefined2)((ulong)local_82 >> 0x10);
          puVar11 = (undefined2 *)local_82;
          puVar11[0xf] = puVar11[0xf] & 0xfffd;
          *(undefined1 *)((int)puVar11 + 0x1d) = 0;
          local_e0 = (int *)(uint)*(byte *)(puVar11 + 0xe);
          uVar22 = 0x11f2;
          ppiStack_c = (int **)0xdfb4;
          iVar7 = func_0x000125f1();
          puVar11 = (undefined2 *)local_82;
          uVar8 = (undefined2)((ulong)local_82 >> 0x10);
          if (iVar7 != 0) {
            if (local_1e == (int **)0x1) {
              puVar11[0xf] = puVar11[0xf] ^
                             (byte)((byte)((uint)puVar11[0xf] >> 1) ^ (byte)puVar11[0xf]) & 2;
            }
            if (local_e0 == (int *)*(uint *)0xb310) {
              if (local_1e == (int **)0x2) {
                puVar11[0xf] = puVar11[0xf] | 2;
              }
              if (local_1e == (int **)0x3) {
                puVar11[0xf] = puVar11[0xf] ^
                               (byte)((byte)((uint)puVar11[0xf] >> 2) ^ (byte)puVar11[0xf]) & 2;
              }
            }
          }
          if ((*(byte *)(puVar11 + 0xf) & 2) != 0) {
            uVar22 = 0x885;
            ppiStack_c = (int **)0xe02c;
            iVar7 = func_0x00008854();
            if (iVar7 != 0) {
              ((undefined2 *)local_82)[0xf] = ((undefined2 *)local_82)[0xf] & 0xfffd;
            }
          }
          local_c8 = local_c8 + (uint)(0xfffe < local_ca);
        }
        for (local_102 = 1; (int)local_102 <= *(int *)0x152; local_102 = local_102 + 1) {
          ppiStack_c = (int **)0xe062;
          local_7e = (undefined2 *)func_0x000003ef();
          uVar22 = (undefined2)((ulong)local_7e >> 0x10);
          puVar1 = (undefined2 *)local_7e + 5;
          *puVar1 = *puVar1 & 0xfffd;
          local_e0 = (int *)(uint)*(byte *)((undefined2 *)local_7e + 4);
          ppiStack_c = (int **)0xe082;
          iVar7 = func_0x000125f1();
          puVar11 = (undefined2 *)local_7e;
          uVar22 = (undefined2)((ulong)local_7e >> 0x10);
          if (iVar7 != 0) {
            if (local_1e == (int **)0x1) {
              puVar11[5] = puVar11[5] ^ (byte)((byte)((uint)puVar11[5] >> 1) ^ (byte)puVar11[5]) & 2
              ;
            }
            if (local_e0 == (int *)*(uint *)0xb310) {
              if (local_1e == (int **)0x2) {
                puVar11[5] = puVar11[5] | 2;
              }
              if (local_1e == (int **)0x3) {
                puVar11[5] = puVar11[5] ^
                             (byte)((byte)((uint)puVar11[5] >> 2) ^ (byte)puVar11[5]) & 2;
              }
            }
          }
          if ((*(byte *)(puVar11 + 5) & 2) != 0) {
            ppiStack_c = (int **)0xe0fa;
            iVar7 = func_0x00008854();
            if (iVar7 != 0) {
              ((undefined2 *)local_7e)[5] = ((undefined2 *)local_7e)[5] & 0xfffd;
            }
          }
        }
        for (local_102 = 1; (int)local_102 <= *(int *)0x150; local_102 = local_102 + 1) {
          ppiStack_c = (int **)0xe130;
          local_124 = func_0x00000398();
          uVar22 = (undefined2)((ulong)local_124 >> 0x10);
          puVar1 = (uint *)((int)local_124 + 0x16);
          *puVar1 = *puVar1 & 0xfffd;
          local_e0 = (int *)(uint)*(byte *)((int)local_124 + 0x15);
          ppiStack_c = (int **)0xe152;
          iVar7 = func_0x000125f1();
          iVar9 = (int)local_124;
          uVar22 = (undefined2)((ulong)local_124 >> 0x10);
          if (iVar7 != 0) {
            if (local_1e == (int **)0x1) {
              *(uint *)(iVar9 + 0x16) =
                   *(uint *)(iVar9 + 0x16) ^
                   (byte)((byte)(*(uint *)(iVar9 + 0x16) >> 1) ^ (byte)*(uint *)(iVar9 + 0x16)) & 2;
            }
            if (local_e0 == (int *)*(uint *)0xb310) {
              if ((local_36 == 0x6500) || (local_36 == 0x6600)) {
                *(uint *)(iVar9 + 0x16) = *(uint *)(iVar9 + 0x16) | 2;
              }
              if ((local_36 == 0x6a00) || (local_36 == 0x6b00)) {
                *(uint *)(iVar9 + 0x16) =
                     *(uint *)(iVar9 + 0x16) ^
                     (byte)((byte)(*(uint *)(iVar9 + 0x16) >> 2) ^ (byte)*(uint *)(iVar9 + 0x16)) &
                     2;
              }
            }
          }
          if ((*(byte *)(iVar9 + 0x16) & 2) != 0) {
            ppiStack_c = (int **)0xe1e4;
            iVar7 = func_0x00008854();
            if (iVar7 != 0) {
              puVar1 = (uint *)((int)local_124 + 0x16);
              *puVar1 = *puVar1 & 0xfffd;
            }
          }
        }
        ppiStack_c = (int **)0xe202;
        func_0x00008095();
        uVar21 = CONCAT22(extraout_DX_02,local_36);
        if (local_36 == 0x6200) {
          uVar22 = FUN_3ab8_51bd();
          return uVar22;
        }
        goto LAB_2bb4_5853_2;
      }
    }
LAB_3ab8_369b:
    *(undefined1 *)0x2c2e = 0;
    if ((-1 < local_38) && (local_b2 == (int **)0x2)) {
      *(undefined1 *)0x2c2e = 1;
    }
    if ((param_2 != (int *)0x2) || (*(undefined1 *)0x2c2e = 1, local_b2 == (int **)0x0)) break;
    ppiStack_c = local_b2;
    local_10 = (int *)0xe263;
    local_e = piVar14;
    iVar7 = func_0x00015409();
  } while (iVar7 == 0);
  local_c0 = local_136;
  local_be = local_134;
  local_da = local_140;
  local_d8 = local_13e;
  local_12e = 0;
  local_118 = 0;
LAB_3ab8_371c:
  local_10a = local_c0;
  local_108 = local_be;
  local_120 = local_da;
  local_11e = local_d8;
  func_0x0000c340();
  ppiStack_c = (int **)0xe2ca;
  func_0x00012276();
  if (param_2 == (int *)0x2) {
    ppiStack_c = (int **)0xe2dd;
    func_0x00012276();
    ppiStack_c = (int **)0xe2e7;
    func_0x00012276();
  }
  else {
    if (local_132 == 0) {
      if ((*(char *)0x2c2e == '\0') && (local_38 != -2)) {
        ppiStack_c = (int **)0xe311;
        func_0x00012276();
      }
      if ((*(char *)0x2c2e == '\x01') && (local_38 != -2)) {
        ppiStack_c = (int **)0xe32e;
        func_0x00012276();
      }
      if (local_38 == -2) {
        ppiStack_c = (int **)0xe342;
        func_0x00012276();
      }
    }
    ppiStack_c = (int **)0xe34c;
    func_0x00012276();
    ppiStack_c = (int **)0xe356;
    func_0x00012276();
    ppiStack_c = (int **)0xe360;
    func_0x00012276();
    ppiStack_c = (int **)0xe36a;
    func_0x00012276();
    ppiStack_c = (int **)0xe374;
    func_0x00012276();
  }
  func_0x00010526();
  ppiStack_c = (int **)0xdef;
  local_e = (int *)0xe387;
  FUN_1000_0599();
  ppiStack_c = (int **)0xe392;
  func_0x00012276();
  ppiStack_c = (int **)0xe39c;
  func_0x00012276();
  ppiStack_c = (int **)0xe3a6;
  func_0x00012276();
  ppiStack_c = (int **)0xe3b0;
  func_0x00012276();
  ppiStack_c = (int **)0xe3ba;
  func_0x00012276();
  if (local_38 != -2) {
    ppiStack_c = (int **)0xe3cd;
    func_0x00012276();
    ppiStack_c = (int **)0xe3d7;
    func_0x00012276();
  }
  if ((local_38 == -2) || (*(char *)0x2c2e == '\x01')) {
    if (local_38 != -2) {
      ppiStack_c = (int **)0xe3fd;
      func_0x00012276();
    }
    ppiStack_c = (int **)0xe407;
    func_0x00012276();
    ppiStack_c = (int **)0xe411;
    func_0x00012276();
  }
  ppiStack_c = (int **)0x11f2;
  local_e = (int *)0xe41f;
  FUN_21f2_3454();
  ppiStack_c = (int **)0x22b2;
  local_e = (int *)0xe42e;
  FUN_21f2_2d26();
  if (local_118 == 8) {
    *(undefined2 *)0xc22 = 1;
    ppiStack_c = (int **)0x22b2;
    local_e = (int *)0xe44d;
    FUN_21f2_2d26();
  }
  if (local_118 == 2) {
    *(undefined2 *)0xc22 = 1;
    ppiStack_c = (int **)0x22b2;
    local_e = (int *)0xe46c;
    FUN_21f2_2d26();
  }
  if (local_118 == 4) {
    *(undefined2 *)0xc22 = 1;
    ppiStack_c = (int **)0x22b2;
    local_e = (int *)0xe48b;
    FUN_21f2_2d26();
  }
  uVar15 = 0x22b2;
  if (*(int *)0xc22 != 0) {
    ppiStack_c = (int **)0x22b2;
    local_e = (int *)0xe4a4;
    FUN_1000_0599();
    func_0x00010526();
    ppiStack_c = (int **)0xdef;
    local_e = (int *)0xe4b8;
    FUN_21f2_2d26();
    ppiStack_c = (int **)0x2;
    local_e = (int *)0x3c;
    local_10 = (int *)0xbf48;
    local_12 = 0x22b2;
    uVar15 = 0xdef;
    local_14 = (int *)0xe4d3;
    FUN_1000_02b5();
  }
  local_d6 = local_10a;
  local_d4 = local_108;
  local_e8 = local_120;
  local_e6 = local_11e;
  local_11c = (int *)*(uint *)0x9754;
  local_11a = (int **)*(uint *)0x9756;
  local_128 = local_120;
  local_126 = local_11e;
LAB_3ab8_3995:
  *(undefined2 *)0xa4a = 1;
  ppiStack_c = &local_136;
  local_e = &local_c6;
  local_10 = &local_b4;
  local_14 = (int *)0xe539;
  local_12 = uVar15;
  uVar21 = func_0x00006608();
  local_36 = (int)uVar21;
  *(undefined2 *)0xa4a = 0;
  if (*(int *)0x158 == 0) {
    if (local_36 != -1) {
      if (local_36 == 99) {
        FUN_1885_2ec3();
      }
      else {
        if (((local_b2 == (int **)0x0) || (0xf < local_c6)) &&
           ((local_36 < 0x31 || (0x33 < local_36)))) {
          if ((param_2 == (int *)0x2) && (local_b2 != (int **)0x0)) goto LAB_3ab8_3b69;
          goto LAB_3ab8_3b90;
        }
        if (local_b4 < 0x1a5) {
          local_156 = 0;
        }
        else {
          local_156 = (local_b4 + -0x1a4) / 0x48 + 1;
        }
        if ((0x30 < local_36) && (local_36 < 0x34)) {
          local_156 = local_36 + -0x30;
        }
        if (local_156 == 1) {
          if (local_118 == 8) {
            local_118 = 0;
          }
          else {
            local_118 = 8;
          }
        }
        if ((local_156 == 2) && (local_38 != -2)) {
          if (local_118 == 2) {
            local_118 = 0;
          }
          else {
            local_118 = 2;
          }
        }
        if (((local_156 == 2) && (local_38 == -2)) ||
           ((local_156 == 3 && (*(char *)0x2c2e == '\x01')))) {
          if (local_118 == 4) {
            local_118 = 0;
          }
          else {
            local_118 = 4;
          }
        }
        FUN_1885_2ec3();
      }
      goto LAB_3ab8_371c;
    }
    FUN_1885_2ec3();
    uVar21 = CONCAT22(extraout_DX_03,local_36);
    if (local_12e != 0) {
      local_10a = (int *)*(undefined2 *)0x972c;
      local_108 = (int **)*(undefined2 *)0x972e;
      local_120 = (int *)*(undefined2 *)0x972c;
      local_11e = *(undefined2 *)0x972e;
      local_12c = (int *)*(undefined2 *)0x972c;
      local_12a = (int **)*(undefined2 *)0x972e;
      uVar22 = FUN_3ab8_51bd();
      return uVar22;
    }
    if (local_88 != (int **)0x0) goto LAB_2bb4_5853_2;
    goto LAB_3ab8_2c00;
  }
  goto LAB_2bb4_5853_2;
LAB_3ab8_3b69:
  ppiStack_c = local_b2;
  local_e = (int *)0x3bf;
  uVar15 = 0x11f2;
  local_10 = (int *)0xe6fc;
  iVar7 = func_0x00015409();
  if (iVar7 == 0) goto LAB_3ab8_3995;
  local_b2 = (int **)0x1;
LAB_3ab8_3b90:
  uVar17 = 0;
  uVar20 = local_b2 == (int **)0x0;
  if (!(bool)uVar20) {
    FUN_1885_2ec3();
    local_22 = local_d6;
    local_20 = local_d4;
    local_40 = local_e8;
    local_3e = local_e6;
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_0ee9();
    local_7a = local_140;
    local_78 = local_13e;
    func_0x000297e6();
    func_0x00029983();
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    ppiVar16 = local_108;
    piVar14 = local_10a;
    if ((bool)uVar17) {
      local_136 = local_10a;
      local_134 = local_108;
      local_10a = local_12c;
      local_108 = local_12a;
      local_12c = piVar14;
      local_12a = ppiVar16;
    }
    func_0x000297e6();
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_1181();
    local_13a = piVar13;
    local_138 = uVar6;
    if ((bool)uVar17) {
      local_13a = local_120;
      local_138 = local_11e;
      local_120 = piVar13;
      local_11e = uVar6;
    }
    *(uint *)0xbd4 = (uint)local_120;
    *(uint *)0xbd6 = local_11e;
    *(uint *)0xbcc = (uint)local_12c;
    *(uint *)0xbce = (uint)local_12a;
    *(uint *)0xbdc = (uint)local_13a;
    *(uint *)0xbde = local_138;
    *(uint *)0xbc8 = (uint)local_12c;
    *(uint *)0xbca = (uint)local_12a;
    *(uint *)0xbd8 = (uint)local_120;
    *(uint *)0xbda = local_11e;
    func_0x000297e6();
    func_0x0002996b();
    func_0x00029983();
    *(uint *)0xbe0 = (uint)local_13a;
    *(uint *)0xbe2 = local_138;
    bVar19 = false;
    ppiStack_c = (int **)0xe95f;
    func_0x0000daa6();
    ppiVar16 = (int **)0x885;
    func_0x0000c3ca();
    if (*(char *)0xb782 == '\0') {
      func_0x0000ac14();
      func_0x0000a799();
      ppiStack_c = (int **)*(uint *)0x1b42;
      local_e = (int *)0x1d;
      local_10 = (int *)0x2bbe;
      local_12 = 0x885;
      ppiVar16 = (int **)0xdef;
      local_14 = (int *)0xe992;
      FUN_1000_02b5();
    }
    uVar17 = 0;
    uVar20 = *(int *)0xcb6 == 0;
    if (!(bool)uVar20) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x00029d78();
      ppiVar16 = (int **)0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar17 && !(bool)uVar20) {
        *(uint *)0xbd4 = (uint)local_40;
        *(uint *)0xbd6 = local_3e;
        *(undefined2 *)0xbcc = local_3c;
        *(undefined2 *)0xbce = local_3a;
        *(uint *)0xbdc = (uint)local_7a;
        *(uint *)0xbde = local_78;
        func_0x000297e6();
        func_0x00029d78();
        local_10 = (int *)0x22b2;
        local_12 = 0xea03;
        func_0x000299d1();
        local_10 = (int *)0x22b2;
        local_12 = 0xea0b;
        func_0x000297e6();
        local_10 = (int *)0x22b2;
        local_12 = 0xea10;
        func_0x00029d78();
        local_18 = (int *)0x22b2;
        local_1a = (int *)0xea1a;
        func_0x000299d1();
        local_18 = (int *)0x22b2;
        local_1a = (int *)0xea22;
        func_0x000297e6();
        local_18 = (int *)0x22b2;
        local_1a = (int *)0xea27;
        func_0x00029d78();
        local_20 = (int **)0x22b2;
        local_22 = (int *)0xea31;
        func_0x000299d1();
        local_20 = (int **)0x22b2;
        local_22 = (int *)0xea39;
        func_0x000297e6();
        local_20 = (int **)0x22b2;
        local_22 = (int *)0xea42;
        func_0x0002996b();
        local_20 = (int **)0x22b2;
        local_22 = (int *)0xea47;
        func_0x00029d78();
        local_28 = 0x22b2;
        iStack_2a = 0xea51;
        func_0x000299d1();
        local_28 = (uint)*(byte *)0x2c2e;
        iStack_2a = local_132;
        iStack_2c = local_12e;
        local_30 = (int *)local_38;
        local_32 = param_6;
        local_34 = param_2;
        local_36 = 0x22b2;
        local_38 = 0xea71;
        func_0x0002c336();
        uVar22 = FUN_3ab8_51a2();
        return uVar22;
      }
    }
    local_a8 = local_10a;
    local_a6 = local_108;
    if ((int)local_108 < 0) {
      local_a8 = (int *)-(int)local_10a;
      local_a6 = (int **)-(((uint)local_108 & 0x7fff) + (uint)(local_10a != (int *)0x0));
    }
    local_ae = local_120;
    local_ac = local_11e;
    if ((int)local_11e < 0) {
      local_ae = (int *)-(int)local_120;
      local_ac = -((local_11e & 0x7fff) + (uint)(local_120 != (int *)0x0));
    }
    local_c4 = local_12c;
    local_c2 = local_12a;
    if ((int)local_12a < 0) {
      local_c4 = (int *)-(int)local_12c;
      local_c2 = (int **)-(((uint)local_12a & 0x7fff) + (uint)(local_12c != (int *)0x0));
    }
    if ((int)local_138 < 0) {
      bVar18 = local_13a != (int *)0x0;
      local_13a = (int *)-(int)local_13a;
      local_138 = -((local_138 & 0x7fff) + (uint)bVar18);
    }
    local_102 = 1;
    local_de = local_13a;
    local_dc = local_138;
    goto LAB_3ab8_3fd0;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar20) {
    func_0x000297e6();
    func_0x000297e6();
    uVar15 = 0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar20) goto LAB_3ab8_3c41;
  }
  ppiStack_c = (int **)0xe762;
  func_0x000297e6();
  ppiStack_c = (int **)0xe767;
  func_0x00029d78();
  local_12 = 0x22b2;
  local_14 = (int *)0xe771;
  func_0x000299d1();
  local_12 = 0x22b2;
  local_14 = (int *)0xe77a;
  func_0x000297e6();
  local_12 = 0x22b2;
  local_14 = (int *)0xe77f;
  func_0x00029d78();
  local_1a = (int *)0x22b2;
  local_1c = (int *)0xe789;
  func_0x000299d1();
  local_1a = (int *)0x22b2;
  local_1c = (int *)0xe792;
  func_0x000297e6();
  local_1a = (int *)0x22b2;
  local_1c = (int *)0xe797;
  func_0x00029d78();
  local_22 = (int *)0x22b2;
  uStack_24 = 0xe7a1;
  func_0x000299d1();
  local_22 = (int *)0x22b2;
  uStack_24 = 0xe7aa;
  func_0x000297e6();
  local_22 = (int *)0x22b2;
  uStack_24 = 0xe7af;
  func_0x00029d78();
  iStack_2a = 0x22b2;
  iStack_2c = -0x1847;
  func_0x000299d1();
  iStack_2a = 0x22b2;
  uVar15 = 0x2ab8;
  iStack_2c = -0x1842;
  func_0x0002bf06();
LAB_3ab8_3c41:
  local_11c = local_136;
  local_11a = local_134;
  local_128 = local_140;
  local_126 = local_13e;
  goto LAB_3ab8_3995;
LAB_3ab8_3fd0:
  if (*(int *)0x152 < (int)local_102) goto LAB_3ab8_41e4;
  if (((local_102 & 0xf) == 0) && (iVar7 = func_0x0000db7a(), iVar7 != 0)) goto LAB_2bb4_582a_1;
  ppiVar16 = (int **)0x0;
  ppiStack_c = (int **)0xeb7f;
  local_7e = (undefined2 *)func_0x000003ef();
  uVar22 = (undefined2)((ulong)local_7e >> 0x10);
  puVar11 = (undefined2 *)local_7e;
  if (local_12e == 0) {
    puVar11[5] = puVar11[5] & 0xfffd;
LAB_3ab8_4035:
    if ((((local_132 != 2) || ((*(byte *)(puVar11 + 5) & 8) != 0)) && (-2 < local_38)) &&
       (local_118 != 4)) {
      ppiStack_c = (int **)*(uint *)0xa6c;
      local_e = (int *)(uint)*(byte *)(puVar11 + 4);
      local_10 = (int *)0x0;
      ppiVar16 = (int **)0x7a6;
      local_12 = 0xec03;
      iVar7 = func_0x00007ba4();
      if (iVar7 != 0) {
        ppiVar16 = &local_34;
        puVar11 = (undefined2 *)local_7e;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          ppiVar4 = ppiVar16;
          ppiVar16 = ppiVar16 + 1;
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          *ppiVar4 = (int *)*puVar3;
        }
        local_86 = local_34;
        local_84 = local_32;
        if ((int)local_32 < 0) {
          local_86 = (int *)-(int)local_34;
          local_84 = (int **)-(((uint)local_32 & 0x7fff) + (uint)(local_34 != (int *)0x0));
        }
        if ((((int)local_a6 <= (int)local_84) &&
            (((int)local_a6 < (int)local_84 || (local_a8 <= local_86)))) &&
           (((int)local_84 < (int)local_c2 ||
            (((int)local_84 <= (int)local_c2 && (local_86 <= local_c4)))))) {
          local_9a = local_30;
          local_98 = in_stack_0000ffd2;
          if ((int)in_stack_0000ffd2 < 0) {
            local_9a = (int *)-(int)local_30;
            local_98 = -((in_stack_0000ffd2 & 0x7fff) + (uint)(local_30 != (int *)0x0));
          }
          if ((((int)local_ac <= (int)local_98) &&
              (((int)local_ac < (int)local_98 || (local_ae <= local_9a)))) &&
             (((int)local_98 < (int)local_dc ||
              (((int)local_98 <= (int)local_dc && (local_9a <= local_de)))))) {
            if (local_12e == -1) {
              ((undefined2 *)local_7e)[5] = ((undefined2 *)local_7e)[5] & 0xfffd;
              ppiStack_c = (int **)0x7a6;
              local_e = (int *)0xed01;
              func_0x00007f92();
            }
            else {
              ((undefined2 *)local_7e)[5] = ((undefined2 *)local_7e)[5] | 2;
            }
          }
        }
        ppiVar16 = (int **)0x7a6;
        uVar22 = (undefined2)((ulong)local_7e >> 0x10);
        if (0 < local_38) {
          puVar1 = (undefined2 *)local_7e + 5;
          *puVar1 = *puVar1 ^ 2;
        }
        if ((*(byte *)((undefined2 *)local_7e + 5) & 2) != 0) {
          ppiVar16 = (int **)0x885;
          ppiStack_c = (int **)0xed3e;
          iVar7 = func_0x00008854();
          if (iVar7 == 0) {
            ppiStack_c = (int **)0x885;
            ppiVar16 = (int **)0x7a6;
            local_e = (int *)0xed5f;
            func_0x00007f92();
          }
          else {
            ((undefined2 *)local_7e)[5] = ((undefined2 *)local_7e)[5] & 0xfffd;
          }
        }
      }
    }
  }
  else if ((local_12e != 1) || ((*(byte *)(puVar11 + 5) & 2) == 0)) goto LAB_3ab8_4035;
  local_102 = local_102 + 1;
  goto LAB_3ab8_3fd0;
LAB_3ab8_41e4:
  local_c8 = 0;
  for (local_ca = 1;
      (local_c8 <= *(int *)0x14a && ((local_c8 < *(int *)0x14a || (local_ca <= *(uint *)0x148))));
      local_ca = local_ca + 1) {
    ppiVar12 = ppiVar16;
    if ((local_ca & 0xf) == 0) {
      iVar7 = func_0x0000db7a();
      ppiVar12 = (int **)0x885;
      if (iVar7 != 0) goto LAB_2bb4_582a_1;
    }
    ppiVar16 = (int **)0x0;
    local_e = (int *)0xedc0;
    ppiStack_c = ppiVar12;
    local_76 = (undefined2 *)func_0x0000013f();
    uVar22 = (undefined2)((ulong)local_76 >> 0x10);
    puVar11 = (undefined2 *)local_76;
    if (local_12e == 0) {
      puVar11[10] = puVar11[10] & 0xfcfd;
LAB_3ab8_4278:
      if ((((local_132 != 2) || ((*(byte *)(puVar11 + 10) & 8) != 0)) && (-2 < local_38)) &&
         (local_118 != 4)) {
        ppiStack_c = (int **)(uint)*(byte *)(puVar11 + 8);
        local_e = (int *)(uint)*(byte *)(puVar11 + 9);
        local_10 = (int *)0x0;
        ppiVar16 = (int **)0x7a6;
        local_12 = 0xee49;
        iVar7 = func_0x00007ba4();
        if (iVar7 != 0) {
          ppiVar12 = &local_1c;
          puVar11 = (undefined2 *)local_76;
          for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
            ppiVar4 = ppiVar12;
            ppiVar12 = ppiVar12 + 1;
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            *ppiVar4 = (int *)*puVar3;
          }
          local_86 = local_1c;
          local_84 = (int **)local_1a;
          if ((int)local_1a < 0) {
            local_86 = (int *)-(int)local_1c;
            local_84 = (int **)-(((uint)local_1a & 0x7fff) + (uint)(local_1c != (int *)0x0));
          }
          local_9a = local_18;
          local_98 = local_16;
          if ((int)local_16 < 0) {
            local_9a = (int *)-(int)local_18;
            local_98 = -((local_16 & 0x7fff) + (uint)(local_18 != (int *)0x0));
          }
          local_96 = local_14;
          local_94 = local_12;
          if ((int)local_12 < 0) {
            local_96 = (int *)-(int)local_14;
            local_94 = -((local_12 & 0x7fff) + (uint)(local_14 != (int *)0x0));
          }
          local_a4 = local_10;
          local_a2 = local_e;
          if ((int)local_e < 0) {
            local_a4 = (int *)-(int)local_10;
            local_a2 = (int *)-(((uint)local_e & 0x7fff) + (uint)(local_10 != (int *)0x0));
          }
          if (((((((int)local_84 < (int)local_a6) ||
                 (((int)local_84 <= (int)local_a6 && (local_86 < local_a8)))) ||
                ((int)local_94 < (int)local_a6)) ||
               (((((int)local_94 <= (int)local_a6 && (local_96 < local_a8)) ||
                 (((int)local_c2 < (int)local_84 ||
                  ((((int)local_c2 <= (int)local_84 && (local_c4 < local_86)) ||
                   ((int)local_c2 < (int)local_94)))))) ||
                (((int)local_c2 <= (int)local_94 && (local_c4 < local_96)))))) ||
              (((int)local_98 < (int)local_ac ||
               ((((int)local_98 <= (int)local_ac && (local_9a < local_ae)) ||
                (((int)local_a2 < (int)local_ac ||
                 (((((int)local_a2 <= (int)local_ac && (local_a4 < local_ae)) ||
                   ((int)local_dc < (int)local_98)) ||
                  (((int)local_dc <= (int)local_98 && (local_de < local_9a)))))))))))) ||
             (((int)local_dc <= (int)local_a2 &&
              (((int)local_dc < (int)local_a2 || (local_de < local_a4)))))) {
            if (((((param_2 != (int *)0x0) && (local_12e != -1)) &&
                 (((((int)local_a6 < (int)local_84 ||
                    ((((int)local_a6 <= (int)local_84 && (local_a8 < local_86)) ||
                     ((int)local_a6 < (int)local_94)))) ||
                   (((int)local_a6 <= (int)local_94 && (local_a8 < local_96)))) &&
                  (((int)local_84 < (int)local_c2 ||
                   ((((int)local_84 <= (int)local_c2 && (local_86 < local_c4)) ||
                    (((int)local_94 < (int)local_c2 ||
                     (((int)local_94 <= (int)local_c2 && (local_96 < local_c4)))))))))))) &&
                (((int)local_ac < (int)local_98 ||
                 (((((int)local_ac <= (int)local_98 && (local_ae < local_9a)) ||
                   ((int)local_ac < (int)local_a2)) ||
                  (((int)local_ac <= (int)local_a2 && (local_ae < local_a4)))))))) &&
               ((((int)local_98 < (int)local_dc ||
                 (((int)local_98 <= (int)local_dc && (local_9a < local_de)))) ||
                (((int)local_a2 < (int)local_dc ||
                 (((int)local_a2 <= (int)local_dc && (local_a4 < local_de)))))))) {
              if (((((int)local_84 < (int)local_a6) ||
                   ((((((int)local_84 <= (int)local_a6 && (local_86 < local_a8)) ||
                      ((int)local_c2 < (int)local_84)) ||
                     (((int)local_c2 <= (int)local_84 && (local_c4 < local_86)))) ||
                    ((int)local_98 < (int)local_ac)))) ||
                  ((((int)local_98 <= (int)local_ac && (local_9a < local_ae)) ||
                   ((int)local_dc < (int)local_98)))) ||
                 (((int)local_dc <= (int)local_98 && (local_de < local_9a)))) {
                if ((((int)local_94 < (int)local_a6) ||
                    ((((int)local_94 <= (int)local_a6 && (local_96 < local_a8)) ||
                     ((int)local_c2 < (int)local_94)))) ||
                   ((((int)local_c2 <= (int)local_94 && (local_c4 < local_96)) ||
                    (((int)local_a2 < (int)local_ac ||
                     ((((int)local_a2 <= (int)local_ac && (local_a4 < local_ae)) ||
                      (((int)local_dc < (int)local_a2 ||
                       (((int)local_dc <= (int)local_a2 && (local_de < local_a4)))))))))))) {
                  if (param_2 != (int *)0x1) {
                    func_0x000297e6();
                    func_0x00029d78();
                    local_10 = (int *)0x22b2;
                    local_12 = 0xf241;
                    func_0x000299d1();
                    local_10 = (int *)0x22b2;
                    local_12 = 0xf249;
                    func_0x000297e6();
                    local_10 = (int *)0x22b2;
                    local_12 = 0xf24e;
                    func_0x00029d78();
                    local_18 = (int *)0x22b2;
                    local_1a = (int *)0xf258;
                    func_0x000299d1();
                    local_18 = (int *)0x22b2;
                    local_1a = (int *)0xf260;
                    func_0x000297e6();
                    local_18 = (int *)0x22b2;
                    local_1a = (int *)0xf265;
                    func_0x00029d78();
                    local_20 = (int **)0x22b2;
                    local_22 = (int *)0xf26f;
                    func_0x000299d1();
                    local_20 = (int **)0x22b2;
                    local_22 = (int *)0xf277;
                    func_0x000297e6();
                    local_20 = (int **)0x22b2;
                    local_22 = (int *)0xf27c;
                    func_0x00029d78();
                    local_28 = 0x22b2;
                    iStack_2a = 0xf286;
                    func_0x000299d1();
                    local_28 = 0x22b2;
                    iStack_2a = 0xf28b;
                    FUN_1def_043a();
                    func_0x000297e6();
                    func_0x000297e6();
                    func_0x00029d78();
                    local_10 = (int *)0x22b2;
                    local_12 = 0xf2af;
                    func_0x000299d1();
                    local_10 = (int *)0x22b2;
                    local_12 = 0xf2b8;
                    func_0x000297e6();
                    local_10 = (int *)0x22b2;
                    local_12 = 0xf2bd;
                    func_0x00029d78();
                    local_18 = (int *)0x22b2;
                    local_1a = (int *)0xf2c7;
                    func_0x000299d1();
                    local_18 = (int *)0x1;
                    local_1a = (int *)0x22b2;
                    local_1c = (int *)0xf2d0;
                    func_0x0001e558();
                    func_0x000297e6();
                    func_0x000297e6();
                    func_0x00029d78();
                    local_10 = (int *)0x22b2;
                    local_12 = 0xf2f4;
                    func_0x000299d1();
                    local_10 = (int *)0x22b2;
                    local_12 = 0xf2fd;
                    func_0x000297e6();
                    local_10 = (int *)0x22b2;
                    local_12 = 0xf302;
                    func_0x00029d78();
                    local_18 = (int *)0x22b2;
                    local_1a = (int *)0xf30c;
                    func_0x000299d1();
                    local_18 = (int *)0x1;
                    local_1a = (int *)0x22b2;
                    local_1c = (int *)0xf315;
                    func_0x0001e558();
                    uVar17 = (undefined1 *)0xffed < &local_18;
                    func_0x00029b6d();
                    ppiVar16 = (int **)0x22b2;
                    FUN_28b3_1181();
                    if ((bool)uVar17) {
                      ((undefined2 *)local_76)[10] = ((undefined2 *)local_76)[10] | 0x102;
                    }
                    else {
                      func_0x000297e6();
                      func_0x000297e6();
                      func_0x00029d78();
                      local_10 = (int *)0x22b2;
                      local_12 = 0xf358;
                      func_0x000299d1();
                      local_10 = (int *)0x22b2;
                      local_12 = 0xf361;
                      func_0x000297e6();
                      local_10 = (int *)0x22b2;
                      local_12 = 0xf366;
                      func_0x00029d78();
                      local_18 = (int *)0x22b2;
                      local_1a = (int *)0xf370;
                      func_0x000299d1();
                      local_18 = (int *)0x1;
                      local_1a = (int *)0x22b2;
                      local_1c = (int *)0xf379;
                      func_0x0001e558();
                      func_0x000297e6();
                      func_0x000297e6();
                      func_0x00029d78();
                      local_10 = (int *)0x22b2;
                      local_12 = 0xf39d;
                      func_0x000299d1();
                      local_10 = (int *)0x22b2;
                      local_12 = 0xf3a6;
                      func_0x000297e6();
                      local_10 = (int *)0x22b2;
                      local_12 = 0xf3ab;
                      func_0x00029d78();
                      local_18 = (int *)0x22b2;
                      local_1a = (int *)0xf3b5;
                      func_0x000299d1();
                      local_18 = (int *)0x1;
                      local_1a = (int *)0x22b2;
                      local_1c = (int *)0xf3be;
                      func_0x0001e558();
                      uVar17 = (undefined1 *)0xffed < &local_18;
                      func_0x00029b6d();
                      ppiVar16 = (int **)0x22b2;
                      FUN_28b3_1181();
                      if ((bool)uVar17) {
                        ((undefined2 *)local_76)[10] = ((undefined2 *)local_76)[10] | 0x102;
                      }
                    }
                  }
                }
                else {
                  ((undefined2 *)local_76)[10] = ((undefined2 *)local_76)[10] | 2;
                  if (param_2 == (int *)0x1) {
                    ((undefined2 *)local_76)[10] = ((undefined2 *)local_76)[10] | 0x200;
                  }
                  else {
                    ((undefined2 *)local_76)[10] = ((undefined2 *)local_76)[10] | 0x100;
                  }
                }
              }
              else {
                ((undefined2 *)local_76)[10] = ((undefined2 *)local_76)[10] | 0x102;
              }
            }
          }
          else {
            if (local_12e == -1) {
              if (((((undefined2 *)local_76)[10] & 0x40) != 0) ||
                 ((((undefined2 *)local_76)[10] & 0x80) != 0)) goto LAB_3ab8_48d3;
              ((undefined2 *)local_76)[10] = ((undefined2 *)local_76)[10] & 0xfffd;
              ppiStack_c = (int **)0x0;
              local_e = (int *)0x7a6;
              local_10 = (int *)0xf421;
              func_0x00007d9b();
            }
            else {
              ((undefined2 *)local_76)[10] = ((undefined2 *)local_76)[10] | 2;
            }
            ppiVar16 = (int **)0x7a6;
            if (((((undefined2 *)local_76)[10] & 0x40) != 0) ||
               ((((undefined2 *)local_76)[10] & 0x80) != 0)) {
              bVar19 = true;
            }
          }
LAB_3ab8_48d3:
          puVar11 = (undefined2 *)local_76;
          uVar22 = (undefined2)((ulong)local_76 >> 0x10);
          if ((0 < local_38) && ((*(byte *)((int)puVar11 + 0x15) & 1) == 0)) {
            puVar11[10] = puVar11[10] ^ 2;
          }
          if ((*(byte *)(puVar11 + 10) & 2) != 0) {
            ppiVar16 = (int **)0x885;
            ppiStack_c = (int **)0xf487;
            iVar7 = func_0x00008854();
            uVar22 = (undefined2)((ulong)local_76 >> 0x10);
            if (iVar7 == 0) {
              if ((param_2 != (int *)0x0) ||
                 ((uVar6 = ((undefined2 *)local_76)[10], (uVar6 & 0x40) == 0 &&
                  ((uVar6 & 0x80) == 0)))) {
                ppiStack_c = (int **)0x1;
                local_e = (int *)0x885;
                ppiVar16 = (int **)0x7a6;
                local_10 = (int *)0xf4cd;
                func_0x00007d9b();
              }
            }
            else {
              puVar1 = (undefined2 *)local_76 + 10;
              *puVar1 = *puVar1 & 0xfffd;
            }
          }
        }
      }
    }
    else if ((local_12e != 1) || ((*(byte *)(puVar11 + 10) & 2) == 0)) goto LAB_3ab8_4278;
    local_c8 = local_c8 + (uint)(0xfffe < local_ca);
  }
  if (((param_2 == (int *)0x0) && (bVar19)) || ((int)param_6 < -9)) {
    ppiVar16 = (int **)0x2ab8;
    ppiStack_c = (int **)0xf4f7;
    FUN_2bb4_0233();
  }
  local_ca = 1;
  local_c8 = 0;
  do {
    if (*(int *)0x14e < local_c8) {
      uVar22 = FUN_3ab8_4e6d();
      return uVar22;
    }
    if ((*(int *)0x14e <= local_c8) && (*(uint *)0x14c < local_ca)) {
      uVar22 = FUN_3ab8_4e6d();
      return uVar22;
    }
    ppiVar12 = ppiVar16;
    if ((local_ca & 0xf) == 0) {
      iVar7 = func_0x0000db7a();
      ppiVar12 = (int **)0x885;
      if (iVar7 != 0) goto LAB_2bb4_582a_1;
    }
    ppiVar16 = (int **)0x0;
    local_e = (int *)0xf554;
    ppiStack_c = ppiVar12;
    local_82 = (undefined2 *)func_0x00000271();
    uVar22 = (undefined2)((ulong)local_82 >> 0x10);
    puVar11 = (undefined2 *)local_82;
    if (local_12e == 0) {
      puVar11[0xf] = puVar11[0xf] & 0xfffd;
      *(undefined1 *)((int)puVar11 + 0x1d) = 0;
LAB_3ab8_4a10:
      if ((((local_132 != 2) || ((*(byte *)(puVar11 + 0xf) & 8) != 0)) && (-2 < local_38)) &&
         (local_118 != 4)) {
        local_e0 = (int *)(uint)*(byte *)(puVar11 + 0xe);
        ppiStack_c = (int **)(uint)*(byte *)(puVar11 + 0xd);
        local_10 = (int *)0x0;
        ppiVar16 = (int **)0x7a6;
        local_12 = 0xf5e5;
        local_e = local_e0;
        iVar7 = func_0x00007ba4();
        if (iVar7 != 0) {
          puVar11 = local_72;
          puVar10 = (undefined2 *)local_82;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar5 = puVar11;
            puVar11 = puVar11 + 1;
            puVar3 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar5 = *puVar3;
          }
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029983();
          local_86 = local_d6;
          local_84 = local_d4;
          if ((int)local_d4 < 0) {
            local_86 = (int *)-(int)local_d6;
            local_84 = (int **)-(((uint)local_d4 & 0x7fff) + (uint)(local_d6 != (int *)0x0));
          }
          if ((int)local_e2 < 0) {
            bVar19 = local_e4 != (int *)0x0;
            local_e4 = (int *)-(int)local_e4;
            local_e2 = -((local_e2 & 0x7fff) + (uint)bVar19);
          }
          local_96 = local_e4;
          local_94 = local_e2;
          if ((((int)local_84 < (int)local_a6) ||
              (((int)local_84 <= (int)local_a6 && (local_86 < local_a8)))) ||
             (((int)local_c2 <= (int)local_e2 &&
              (((int)local_c2 < (int)local_e2 || (local_c4 < local_e4)))))) {
            uVar22 = FUN_3ab8_4de5();
            return uVar22;
          }
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029983();
          local_9a = local_e8;
          local_98 = local_e6;
          if ((int)local_e6 < 0) {
            local_9a = (int *)-(int)local_e8;
            local_98 = -((local_e6 & 0x7fff) + (uint)(local_e8 != (int *)0x0));
          }
          if ((int)local_104 < 0) {
            bVar19 = local_106 != (int *)0x0;
            local_106 = (int *)-(int)local_106;
            local_104 = -((local_104 & 0x7fff) + (uint)bVar19);
          }
          local_a4 = local_106;
          local_a2 = (int *)local_104;
          if ((((int)local_98 < (int)local_ac) ||
              (((int)local_98 <= (int)local_ac && (local_9a < local_ae)))) ||
             (((int)local_dc <= (int)local_104 &&
              (((int)local_dc < (int)local_104 || (local_de < local_106)))))) {
            uVar22 = FUN_3ab8_4de5();
            return uVar22;
          }
          if ((int)local_94 < (int)local_a6) {
            uVar22 = FUN_3ab8_4cb7();
            return uVar22;
          }
          if (((int)local_94 <= (int)local_a6) && (local_96 < local_a8)) {
            uVar22 = FUN_3ab8_4cb7();
            return uVar22;
          }
          if ((int)local_c2 < (int)local_84) {
            uVar22 = FUN_3ab8_4cb7();
            return uVar22;
          }
          if (((int)local_c2 <= (int)local_84) && (local_c4 < local_86)) {
            uVar22 = FUN_3ab8_4cb7();
            return uVar22;
          }
          if ((int)local_104 < (int)local_ac) {
            uVar22 = FUN_3ab8_4cb7();
            return uVar22;
          }
          if (((int)local_104 <= (int)local_ac) && (local_106 < local_ae)) {
            ppiStack_c = (int **)auStack_44;
            local_e = &uStack_26;
            local_10 = (int *)local_c8;
            local_12 = local_ca;
            local_14 = (int *)0x22b2;
            local_16 = 0xf856;
            func_0x00021a19();
            uVar17 = (undefined1 *)0xfff3 < &local_12;
            uVar20 = &stack0x0000 == (undefined1 *)0x6;
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar17 || (bool)uVar20) {
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar17 || (bool)uVar20) {
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if (!(bool)uVar17) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar17 || (bool)uVar20) {
                    uVar22 = FUN_3ab8_4da5();
                    return uVar22;
                  }
                }
              }
            }
            ppiStack_c = (int **)0xbc4;
            piVar13 = &iStack_2c;
            puVar11 = local_72;
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar5 = piVar13;
              piVar13 = piVar13 + 1;
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar5 = *puVar3;
            }
            local_30 = (int *)0xf8e8;
            iVar7 = func_0x0002b542();
            if (iVar7 == 0) {
              uVar22 = FUN_3ab8_4de5();
              return uVar22;
            }
            if (param_2 == (int *)0x2) {
              if (0 < iVar7) {
                pbVar2 = (byte *)((int)(undefined2 *)local_82 + 0x1d);
                *pbVar2 = *pbVar2 | 1;
              }
              uVar22 = FUN_3ab8_4da5();
              return uVar22;
            }
            if (0 < iVar7) {
              uVar22 = FUN_3ab8_4de5();
              return uVar22;
            }
            uVar22 = FUN_3ab8_4da5();
            return uVar22;
          }
          if ((int)local_dc < (int)local_98) {
            uVar22 = FUN_3ab8_4cb7();
            return uVar22;
          }
          if (((int)local_dc <= (int)local_98) && (local_de < local_9a)) {
            uVar22 = FUN_3ab8_4cb7();
            return uVar22;
          }
          uVar22 = FUN_3ab8_4da5();
          return uVar22;
        }
      }
    }
    else if ((local_12e != 1) || ((*(byte *)(puVar11 + 0xf) & 2) == 0)) goto LAB_3ab8_4a10;
    bVar19 = 0xfffe < local_ca;
    local_ca = local_ca + 1;
    local_c8 = local_c8 + (uint)bVar19;
  } while( true );
LAB_3ab8_30f0:
  if (local_38 == -1) {
    piVar14 = (int *)0x7a6;
    func_0x00007b71();
  }
  if (local_38 == -2) {
    piVar14 = (int *)0x7a6;
    func_0x00007ac6();
  }
  if (param_2 != (int *)0x0) goto LAB_3ab8_2e35;
  FUN_2bb4_1755();
  ppiStack_c = (int **)0xdca3;
  FUN_2bb4_0233();
  local_c8 = 0;
  ppiStack_c = (int **)0x2ab8;
  for (local_ca = 1;
      (local_c8 <= *(int *)0x14a && ((local_c8 < *(int *)0x14a || (local_ca <= *(uint *)0x148))));
      local_ca = local_ca + 1) {
    local_e = (int *)0xdce3;
    local_76 = (undefined2 *)func_0x0000013f();
    uVar22 = (undefined2)((ulong)local_76 >> 0x10);
    uVar6 = ((undefined2 *)local_76)[10];
    if (((uVar6 & 0x100) != 0) || ((uVar6 & 0x200) != 0)) {
      puVar1 = (undefined2 *)local_76 + 10;
      *puVar1 = *puVar1 & 0xfcfd;
    }
    local_c8 = local_c8 + (uint)(0xfffe < local_ca);
    ppiStack_c = (int **)0;
  }
  local_c8 = 0;
  for (local_ca = 1;
      (local_c8 <= *(int *)0x14e && ((local_c8 < *(int *)0x14e || (local_ca <= *(uint *)0x14c))));
      local_ca = local_ca + 1) {
    local_e = (int *)0xdd50;
    local_82 = (undefined2 *)func_0x00000271();
    uVar22 = (undefined2)((ulong)local_82 >> 0x10);
    puVar11 = (undefined2 *)local_82;
    if (*(char *)((int)puVar11 + 0x1d) != '\0') {
      puVar11[0xf] = puVar11[0xf] & 0xfffd;
      *(undefined1 *)((int)puVar11 + 0x1d) = 0;
    }
    local_c8 = local_c8 + (uint)(0xfffe < local_ca);
    ppiStack_c = (int **)0;
  }
  ppiStack_c = (int **)0xdd82;
  func_0x00008095();
  uVar21 = CONCAT22(extraout_DX_01,local_36);
  if (local_aa != 1) {
    uVar22 = FUN_3ab8_51bd();
    return uVar22;
  }
LAB_2bb4_5853_2:
  local_36 = (int)uVar21;
  out(*unaff_SI,(int)((ulong)uVar21 >> 0x10));
LAB_2bb4_582a_1:
  FUN_32b2_7258();
  local_e = (int *)0x32b2;
  local_10 = (int *)0x1381;
  FUN_32b2_6eb1();
  local_e = (int *)0x32b2;
  local_10 = (int *)0x1389;
  FUN_32b2_6cc6();
  local_e = (int *)0x32b2;
  local_10 = (int *)0x138e;
  FUN_32b2_7258();
  local_16 = 0x32b2;
  local_18 = (int *)0x1398;
  FUN_32b2_6eb1();
  local_16 = iStack_2c;
  local_1a = local_30;
  local_1c = (int *)local_32;
  local_1e = local_20;
  local_20 = (int **)local_22;
  local_22 = (int *)uStack_24;
  uStack_24 = uStack_26;
  uStack_26 = 0;
  local_28 = 0x32b2;
  iStack_2a = 0x13b7;
  func_0x0003fc09();
  return 1;
}



/* 3ab8:4c91  FUN_3ab8_4c91  38 bytes, 1 callers */

void FUN_3ab8_4c91(void)

{
  int in_CX;
  int unaff_BP;
  int iVar1;
  undefined2 unaff_SS;
  
  iVar1 = unaff_BP + in_CX;
  if (*(int *)(iVar1 + -0xda) < *(int *)(iVar1 + -0x96)) {
    FUN_3ab8_4cb7();
    return;
  }
  if ((*(int *)(iVar1 + -0xda) <= *(int *)(iVar1 + -0x96)) &&
     (*(uint *)(iVar1 + -0xdc) < *(uint *)(iVar1 + -0x98))) {
    FUN_3ab8_4cb7();
    return;
  }
  FUN_3ab8_4da5();
  return;
}



/* 3ab8:4cb7  FUN_3ab8_4cb7  238 bytes, 2 callers */

void FUN_3ab8_4cb7(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 auStack_26 [11];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + -0x9c;
  iStack_4 = unaff_BP + -0x8c;
  iStack_6 = unaff_BP + -0x42;
  iStack_8 = unaff_BP + -0x24;
  uStack_a = *(undefined2 *)(unaff_BP + -0xc6);
  uStack_c = *(undefined2 *)(unaff_BP + -200);
  uStack_e = 0x3ab8;
  uStack_10 = 0xf856;
  func_0x00021a19();
  uVar7 = (undefined1 *)0xfff3 < &uStack_c;
  uVar8 = &stack0x0000 == (undefined1 *)0x0;
  iStack_2 = 0x1bb4;
  iStack_4 = 0xf861;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf86a;
  func_0x000297e6();
  iStack_2 = 0x22b2;
  iStack_4 = 0xf86f;
  FUN_28b3_1181();
  if ((bool)uVar7 || (bool)uVar8) {
    iStack_2 = 0x22b2;
    iStack_4 = 0xf87d;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf886;
    func_0x000297e6();
    iStack_2 = 0x22b2;
    iStack_4 = 0xf88b;
    FUN_28b3_1181();
    if ((bool)uVar7 || (bool)uVar8) {
      iStack_2 = 0x22b2;
      iStack_4 = 0xf899;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf8a1;
      func_0x000297e6();
      iStack_2 = 0x22b2;
      iStack_4 = 0xf8a6;
      FUN_28b3_1181();
      if (!(bool)uVar7) {
        iStack_2 = 0x22b2;
        iStack_4 = 0xf8b4;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf8bd;
        func_0x000297e6();
        iStack_2 = 0x22b2;
        iStack_4 = 0xf8c2;
        FUN_28b3_1181();
        if ((bool)uVar7 || (bool)uVar8) {
          FUN_3ab8_4da5();
          return;
        }
      }
    }
  }
  iStack_2 = unaff_BP + -400;
  iStack_4 = 0xbd4;
  iStack_6 = 0xbc4;
  puVar6 = auStack_26;
  puVar5 = (undefined2 *)(unaff_BP + -0x70);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  iVar4 = func_0x0002b542(0x22b2);
  *(int *)(unaff_BP + -0x154) = iVar4;
  if (iVar4 == 0) {
    FUN_3ab8_4de5();
    return;
  }
  if (*(int *)(unaff_BP + 6) == 2) {
    if (0 < *(int *)(unaff_BP + -0x154)) {
      pbVar1 = (byte *)((int)*(undefined4 *)(unaff_BP + -0x80) + 0x1d);
      *pbVar1 = *pbVar1 | 1;
    }
    FUN_3ab8_4da5();
    return;
  }
  if (0 < *(int *)(unaff_BP + -0x154)) {
    FUN_3ab8_4de5();
    return;
  }
  FUN_3ab8_4da5();
  return;
}



/* 3ab8:4da5  FUN_3ab8_4da5  61 bytes, 2 callers */

void FUN_3ab8_4da5(void)

{
  uint *puVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + -300) == -1) {
    puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x80) + 0x1e);
    *puVar1 = *puVar1 & 0xfffd;
    func_0x00007d9b(0x3ab8,0,-*(int *)(unaff_BP + -200),
                    -(*(int *)(unaff_BP + -0xc6) + (uint)(*(int *)(unaff_BP + -200) != 0)));
  }
  else {
    puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x80) + 0x1e);
    *puVar1 = *puVar1 | 2;
  }
  FUN_3ab8_4de5();
  return;
}



/* 3ab8:4de5  FUN_3ab8_4de5  136 bytes, 3 callers */

undefined2 __cdecl16far FUN_3ab8_4de5(void)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int unaff_BP;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined2 uStack_26;
  undefined2 uStack_24;
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
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  uint uStack_8;
  uint uStack_6;
  
  uVar11 = 0x3ab8;
  if (0 < *(int *)(unaff_BP + -0x36)) {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x80) >> 0x10);
    iVar7 = (int)*(undefined4 *)(unaff_BP + -0x80);
    if (*(char *)(iVar7 + 0x1d) == '\0') {
      puVar1 = (uint *)(iVar7 + 0x1e);
      *puVar1 = *puVar1 ^ 2;
    }
  }
  if (*(int *)(unaff_BP + -0x130) == 2) {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x80) >> 0x10);
    iVar7 = (int)*(undefined4 *)(unaff_BP + -0x80);
    uVar10 = *(uint *)(iVar7 + 0x1e);
    puVar1 = (uint *)(iVar7 + 0x1e);
    *puVar1 = *puVar1 ^ (byte)((byte)(uVar10 >> 2) ^ (byte)uVar10) & 2;
  }
  if ((*(byte *)((int)*(undefined4 *)(unaff_BP + -0x80) + 0x1e) & 2) != 0) {
    uVar11 = 0x885;
    uStack_6 = 0xf9b9;
    iVar7 = func_0x00008854();
    if (iVar7 == 0) {
      uStack_6 = 1;
      uStack_8 = 0x885;
      uVar11 = 0x7a6;
      uStack_a = 0xf9e7;
      func_0x00007d9b();
    }
    else {
      puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x80) + 0x1e);
      *puVar1 = *puVar1 & 0xfffd;
    }
  }
LAB_3ab8_4987:
  do {
    puVar1 = (uint *)(unaff_BP + -200);
    uVar10 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0xc6) = *(int *)(unaff_BP + -0xc6) + (uint)(0xfffe < uVar10);
    if (*(int *)0x14e < *(int *)(unaff_BP + -0xc6)) {
      uVar5 = FUN_3ab8_4e6d();
      return uVar5;
    }
    if ((*(int *)0x14e <= *(int *)(unaff_BP + -0xc6)) &&
       (*(uint *)0x14c < *(uint *)(unaff_BP + -200))) {
      uVar5 = FUN_3ab8_4e6d();
      return uVar5;
    }
    uVar10 = uVar11;
    if ((*(uint *)(unaff_BP + -200) & 0xf) == 0) {
      iVar7 = func_0x0000db7a();
      uVar10 = 0x885;
      if (iVar7 != 0) {
        FUN_32b2_7258();
        uStack_8 = 0x32b2;
        uStack_a = 0x1381;
        FUN_32b2_6eb1();
        uStack_8 = 0x32b2;
        uStack_a = 0x1389;
        FUN_32b2_6cc6();
        uStack_8 = 0x32b2;
        uStack_a = 0x138e;
        FUN_32b2_7258();
        uStack_10 = 0x32b2;
        uStack_12 = 0x1398;
        FUN_32b2_6eb1();
        uStack_10 = *(undefined2 *)(unaff_BP + -0x2a);
        uStack_12 = *(undefined2 *)(unaff_BP + -0x2c);
        uStack_14 = *(undefined2 *)(unaff_BP + -0x2e);
        uStack_16 = *(undefined2 *)(unaff_BP + -0x30);
        uStack_18 = *(undefined2 *)(unaff_BP + -0x1e);
        uStack_1a = *(undefined2 *)(unaff_BP + -0x20);
        uStack_1c = *(undefined2 *)(unaff_BP + -0x22);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x24);
        uStack_20 = 0;
        uStack_22 = 0x32b2;
        uStack_24 = 0x13b7;
        func_0x0003fc09();
        return 1;
      }
    }
    uVar11 = 0;
    uStack_8 = 0xf554;
    uStack_6 = uVar10;
    uVar14 = func_0x00000271();
    *(undefined2 *)(unaff_BP + -0x80) = (int)uVar14;
    *(undefined2 *)(unaff_BP + -0x7e) = (int)((ulong)uVar14 >> 0x10);
    if (*(int *)(unaff_BP + -300) == 0) {
      uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x80) >> 0x10);
      iVar7 = (int)*(undefined4 *)(unaff_BP + -0x80);
      puVar1 = (uint *)(iVar7 + 0x1e);
      *puVar1 = *puVar1 & 0xfffd;
      *(undefined1 *)(iVar7 + 0x1d) = 0;
    }
    else if ((*(int *)(unaff_BP + -300) == 1) &&
            ((*(byte *)((int)*(undefined4 *)(unaff_BP + -0x80) + 0x1e) & 2) != 0))
    goto LAB_3ab8_4987;
    if (((*(int *)(unaff_BP + -0x130) != 2) ||
        ((*(byte *)((int)*(undefined4 *)(unaff_BP + -0x80) + 0x1e) & 8) != 0)) &&
       ((-2 < *(int *)(unaff_BP + -0x36) && (*(int *)(unaff_BP + -0x116) != 4)))) {
      uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x80) >> 0x10);
      iVar7 = (int)*(undefined4 *)(unaff_BP + -0x80);
      uStack_8 = (uint)*(byte *)(iVar7 + 0x1c);
      *(uint *)(unaff_BP + -0xde) = uStack_8;
      uStack_6 = (uint)*(byte *)(iVar7 + 0x1a);
      uStack_a = 0;
      uVar11 = 0x7a6;
      uStack_c = 0xf5e5;
      iVar7 = func_0x00007ba4();
      if (iVar7 != 0) {
        puVar8 = (undefined2 *)*(undefined2 *)(unaff_BP + -0x80);
        uVar5 = *(undefined2 *)(unaff_BP + -0x7e);
        puVar9 = (undefined2 *)(unaff_BP + -0x70);
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar4 = puVar9;
          puVar9 = puVar9 + 1;
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar3;
        }
        func_0x000297e6();
        func_0x00029bb5();
        func_0x00029983();
        func_0x000297e6();
        FUN_28b3_100d();
        func_0x00029983();
        if (*(int *)(unaff_BP + -0xd2) < 0) {
          iVar7 = -*(int *)(unaff_BP + -0xd4);
          iVar6 = -((*(uint *)(unaff_BP + -0xd2) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0xd4) != 0)
                   );
        }
        else {
          iVar7 = *(int *)(unaff_BP + -0xd4);
          iVar6 = *(int *)(unaff_BP + -0xd2);
        }
        *(int *)(unaff_BP + -0x84) = iVar7;
        *(int *)(unaff_BP + -0x82) = iVar6;
        if (*(int *)(unaff_BP + -0xe0) < 0) {
          iVar7 = -*(int *)(unaff_BP + -0xe2);
          iVar6 = -((*(uint *)(unaff_BP + -0xe0) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0xe2) != 0)
                   );
        }
        else {
          iVar7 = *(int *)(unaff_BP + -0xe2);
          iVar6 = *(int *)(unaff_BP + -0xe0);
        }
        *(int *)(unaff_BP + -0x94) = iVar7;
        *(int *)(unaff_BP + -0x92) = iVar6;
        if ((*(int *)(unaff_BP + -0xa4) <= *(int *)(unaff_BP + -0x82)) &&
           ((*(int *)(unaff_BP + -0xa4) < *(int *)(unaff_BP + -0x82) ||
            (*(uint *)(unaff_BP + -0xa6) <= *(uint *)(unaff_BP + -0x84))))) {
          if ((*(int *)(unaff_BP + -0x92) < *(int *)(unaff_BP + -0xc0)) ||
             ((*(int *)(unaff_BP + -0x92) <= *(int *)(unaff_BP + -0xc0) &&
              (*(uint *)(unaff_BP + -0x94) <= *(uint *)(unaff_BP + -0xc2))))) {
            func_0x000297e6();
            func_0x00029bb5();
            func_0x00029983();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029983();
            if (*(int *)(unaff_BP + -0xe4) < 0) {
              iVar7 = -*(int *)(unaff_BP + -0xe6);
              iVar6 = -((*(uint *)(unaff_BP + -0xe4) & 0x7fff) +
                       (uint)(*(int *)(unaff_BP + -0xe6) != 0));
            }
            else {
              iVar7 = *(int *)(unaff_BP + -0xe6);
              iVar6 = *(int *)(unaff_BP + -0xe4);
            }
            *(int *)(unaff_BP + -0x98) = iVar7;
            *(int *)(unaff_BP + -0x96) = iVar6;
            if (*(int *)(unaff_BP + -0x102) < 0) {
              iVar7 = -*(int *)(unaff_BP + -0x104);
              iVar6 = -((*(uint *)(unaff_BP + -0x102) & 0x7fff) +
                       (uint)(*(int *)(unaff_BP + -0x104) != 0));
            }
            else {
              iVar7 = *(int *)(unaff_BP + -0x104);
              iVar6 = *(int *)(unaff_BP + -0x102);
            }
            *(int *)(unaff_BP + -0xa2) = iVar7;
            *(int *)(unaff_BP + -0xa0) = iVar6;
            if ((*(int *)(unaff_BP + -0xaa) <= *(int *)(unaff_BP + -0x96)) &&
               ((*(int *)(unaff_BP + -0xaa) < *(int *)(unaff_BP + -0x96) ||
                (*(uint *)(unaff_BP + -0xac) <= *(uint *)(unaff_BP + -0x98))))) {
              if ((*(int *)(unaff_BP + -0xa0) < *(int *)(unaff_BP + -0xda)) ||
                 ((*(int *)(unaff_BP + -0xa0) <= *(int *)(unaff_BP + -0xda) &&
                  (*(uint *)(unaff_BP + -0xa2) <= *(uint *)(unaff_BP + -0xdc))))) {
                if (*(int *)(unaff_BP + -0x92) < *(int *)(unaff_BP + -0xa4)) {
                  uVar5 = FUN_3ab8_4cb7();
                  return uVar5;
                }
                if ((*(int *)(unaff_BP + -0x92) <= *(int *)(unaff_BP + -0xa4)) &&
                   (*(uint *)(unaff_BP + -0x94) < *(uint *)(unaff_BP + -0xa6))) {
                  uVar5 = FUN_3ab8_4cb7();
                  return uVar5;
                }
                if (*(int *)(unaff_BP + -0xc0) < *(int *)(unaff_BP + -0x82)) {
                  uVar5 = FUN_3ab8_4cb7();
                  return uVar5;
                }
                if ((*(int *)(unaff_BP + -0xc0) <= *(int *)(unaff_BP + -0x82)) &&
                   (*(uint *)(unaff_BP + -0xc2) < *(uint *)(unaff_BP + -0x84))) {
                  uVar5 = FUN_3ab8_4cb7();
                  return uVar5;
                }
                if (*(int *)(unaff_BP + -0xa0) < *(int *)(unaff_BP + -0xaa)) {
                  uVar5 = FUN_3ab8_4cb7();
                  return uVar5;
                }
                if ((*(int *)(unaff_BP + -0xaa) < *(int *)(unaff_BP + -0xa0)) ||
                   (*(uint *)(unaff_BP + -0xac) <= *(uint *)(unaff_BP + -0xa2))) {
                  if (*(int *)(unaff_BP + -0xda) < *(int *)(unaff_BP + -0x96)) {
                    uVar5 = FUN_3ab8_4cb7();
                    return uVar5;
                  }
                  if ((*(int *)(unaff_BP + -0xda) <= *(int *)(unaff_BP + -0x96)) &&
                     (*(uint *)(unaff_BP + -0xdc) < *(uint *)(unaff_BP + -0x98))) {
                    uVar5 = FUN_3ab8_4cb7();
                    return uVar5;
                  }
                  uVar5 = FUN_3ab8_4da5();
                  return uVar5;
                }
                uStack_6 = unaff_BP + -0x42;
                uStack_8 = unaff_BP + -0x24;
                uStack_a = *(undefined2 *)(unaff_BP + -0xc6);
                uStack_c = *(undefined2 *)(unaff_BP + -200);
                uStack_e = 0x22b2;
                uStack_10 = 0xf856;
                func_0x00021a19();
                uVar12 = (undefined1 *)0xfff3 < &uStack_c;
                uVar13 = &stack0x0000 == (undefined1 *)0x0;
                func_0x000297e6();
                func_0x000297e6();
                FUN_28b3_1181();
                if ((bool)uVar12 || (bool)uVar13) {
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar12 || (bool)uVar13) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if (!(bool)uVar12) {
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if ((bool)uVar12 || (bool)uVar13) {
                        uVar5 = FUN_3ab8_4da5();
                        return uVar5;
                      }
                    }
                  }
                }
                uStack_6 = 0xbc4;
                puVar8 = &uStack_26;
                puVar9 = (undefined2 *)(unaff_BP + -0x70);
                for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar4 = puVar8;
                  puVar8 = puVar8 + 1;
                  puVar3 = puVar9;
                  puVar9 = puVar9 + 1;
                  *puVar4 = *puVar3;
                }
                iVar7 = func_0x0002b542(0x22b2);
                *(int *)(unaff_BP + -0x154) = iVar7;
                if (iVar7 == 0) {
                  uVar5 = FUN_3ab8_4de5();
                  return uVar5;
                }
                if (*(int *)(unaff_BP + 6) == 2) {
                  if (0 < *(int *)(unaff_BP + -0x154)) {
                    pbVar2 = (byte *)((int)*(undefined4 *)(unaff_BP + -0x80) + 0x1d);
                    *pbVar2 = *pbVar2 | 1;
                  }
                  uVar5 = FUN_3ab8_4da5();
                  return uVar5;
                }
                if (0 < *(int *)(unaff_BP + -0x154)) {
                  uVar5 = FUN_3ab8_4de5();
                  return uVar5;
                }
                uVar5 = FUN_3ab8_4da5();
                return uVar5;
              }
            }
            uVar5 = FUN_3ab8_4de5();
            return uVar5;
          }
        }
        uVar5 = FUN_3ab8_4de5();
        return uVar5;
      }
    }
  } while( true );
}



/* 3ab8:4e6d  FUN_3ab8_4e6d  337 bytes, 1 callers */

undefined2 FUN_3ab8_4e6d(void)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar10;
  
  uVar4 = 0x3ab8;
  *(undefined2 *)(unaff_BP + -0x100) = 1;
  do {
    if (*(int *)0x150 < *(int *)(unaff_BP + -0x100)) {
      uVar4 = FUN_3ab8_51a2();
      return uVar4;
    }
    uVar9 = uVar4;
    if ((*(byte *)(unaff_BP + -0x100) & 7) == 0) {
      iVar5 = func_0x0000db7a(uVar4);
      uVar9 = 0x885;
      if (iVar5 != 0) {
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
        func_0x0003fc09(0x32b2,0,*(undefined2 *)(unaff_BP + -0x24),*(undefined2 *)(unaff_BP + -0x22)
                        ,*(undefined2 *)(unaff_BP + -0x20),*(undefined2 *)(unaff_BP + -0x1e),
                        *(undefined2 *)(unaff_BP + -0x30),*(undefined2 *)(unaff_BP + -0x2e),
                        *(undefined2 *)(unaff_BP + -0x2c),*(undefined2 *)(unaff_BP + -0x2a));
        return 1;
      }
    }
    uVar4 = 0;
    uVar10 = func_0x00000398(uVar9,*(undefined2 *)(unaff_BP + -0x100));
    *(undefined2 *)(unaff_BP + -0x122) = (int)uVar10;
    *(undefined2 *)(unaff_BP + -0x120) = (int)((ulong)uVar10 >> 0x10);
    if (*(int *)(unaff_BP + -300) == 0) {
      puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
      *puVar1 = *puVar1 & 0xfffd;
LAB_3ab8_4ee3:
      if ((((*(int *)(unaff_BP + -0x130) != 2) ||
           ((*(byte *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16) & 8) != 0)) &&
          ((*(int *)(unaff_BP + -0x36) == -2 || (*(char *)0x2c2e == '\x01')))) &&
         ((*(int *)(unaff_BP + -0x116) != 4 ||
          ((uint)*(byte *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x14) == *(uint *)0x168)))) {
        uVar4 = 0x7a6;
        iVar5 = func_0x00007ba4(0,*(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x15),
                                *(undefined2 *)0xa6c,*(undefined2 *)0xa6a,
                                *(undefined2 *)(unaff_BP + -0x116));
        if (iVar5 != 0) {
          puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + -0x122);
          uVar4 = *(undefined2 *)(unaff_BP + -0x120);
          puVar8 = (undefined2 *)(unaff_BP + -0xfe);
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar3 = *puVar2;
          }
          if (*(int *)(unaff_BP + -0xfc) < 0) {
            iVar5 = -*(int *)(unaff_BP + -0xfe);
            iVar6 = -((*(uint *)(unaff_BP + -0xfc) & 0x7fff) +
                     (uint)(*(int *)(unaff_BP + -0xfe) != 0));
          }
          else {
            iVar5 = *(int *)(unaff_BP + -0xfe);
            iVar6 = *(int *)(unaff_BP + -0xfc);
          }
          *(int *)(unaff_BP + -0x84) = iVar5;
          *(int *)(unaff_BP + -0x82) = iVar6;
          if (*(int *)(unaff_BP + -0xf4) < 0) {
            iVar5 = -*(int *)(unaff_BP + -0xf6);
            iVar6 = -((*(uint *)(unaff_BP + -0xf4) & 0x7fff) +
                     (uint)(*(int *)(unaff_BP + -0xf6) != 0));
          }
          else {
            iVar5 = *(int *)(unaff_BP + -0xf6);
            iVar6 = *(int *)(unaff_BP + -0xf4);
          }
          *(int *)(unaff_BP + -0x94) = iVar5;
          *(int *)(unaff_BP + -0x92) = iVar6;
          iVar5 = *(int *)(unaff_BP + -0xa4);
          if ((iVar5 <= *(int *)(unaff_BP + -0x82)) &&
             ((((iVar5 < *(int *)(unaff_BP + -0x82) ||
                (*(uint *)(unaff_BP + -0xa6) <= *(uint *)(unaff_BP + -0x84))) &&
               (iVar5 <= *(int *)(unaff_BP + -0x92))) &&
              ((iVar5 < *(int *)(unaff_BP + -0x92) ||
               (*(uint *)(unaff_BP + -0xa6) <= *(uint *)(unaff_BP + -0x94))))))) {
            iVar5 = *(int *)(unaff_BP + -0xc0);
            if ((*(int *)(unaff_BP + -0x82) <= iVar5) &&
               (((*(int *)(unaff_BP + -0x82) < iVar5 ||
                 (*(uint *)(unaff_BP + -0x84) <= *(uint *)(unaff_BP + -0xc2))) &&
                ((*(int *)(unaff_BP + -0x92) < iVar5 ||
                 ((*(int *)(unaff_BP + -0x92) <= iVar5 &&
                  (*(uint *)(unaff_BP + -0x94) <= *(uint *)(unaff_BP + -0xc2))))))))) {
              if (*(int *)(unaff_BP + -0xf8) < 0) {
                iVar5 = -*(int *)(unaff_BP + -0xfa);
                iVar6 = -((*(uint *)(unaff_BP + -0xf8) & 0x7fff) +
                         (uint)(*(int *)(unaff_BP + -0xfa) != 0));
              }
              else {
                iVar5 = *(int *)(unaff_BP + -0xfa);
                iVar6 = *(int *)(unaff_BP + -0xf8);
              }
              *(int *)(unaff_BP + -0x98) = iVar5;
              *(int *)(unaff_BP + -0x96) = iVar6;
              if (*(int *)(unaff_BP + -0xf0) < 0) {
                iVar5 = -*(int *)(unaff_BP + -0xf2);
                iVar6 = -((*(uint *)(unaff_BP + -0xf0) & 0x7fff) +
                         (uint)(*(int *)(unaff_BP + -0xf2) != 0));
              }
              else {
                iVar5 = *(int *)(unaff_BP + -0xf2);
                iVar6 = *(int *)(unaff_BP + -0xf0);
              }
              *(int *)(unaff_BP + -0xa2) = iVar5;
              *(int *)(unaff_BP + -0xa0) = iVar6;
              iVar5 = *(int *)(unaff_BP + -0xaa);
              if (((iVar5 <= *(int *)(unaff_BP + -0x96)) &&
                  (((iVar5 < *(int *)(unaff_BP + -0x96) ||
                    (*(uint *)(unaff_BP + -0xac) <= *(uint *)(unaff_BP + -0x98))) &&
                   (iVar5 <= *(int *)(unaff_BP + -0xa0))))) &&
                 ((iVar5 < *(int *)(unaff_BP + -0xa0) ||
                  (*(uint *)(unaff_BP + -0xac) <= *(uint *)(unaff_BP + -0xa2))))) {
                iVar5 = *(int *)(unaff_BP + -0xda);
                if ((*(int *)(unaff_BP + -0x96) <= iVar5) &&
                   (((*(int *)(unaff_BP + -0x96) < iVar5 ||
                     (*(uint *)(unaff_BP + -0x98) <= *(uint *)(unaff_BP + -0xdc))) &&
                    ((*(int *)(unaff_BP + -0xa0) < iVar5 ||
                     ((*(int *)(unaff_BP + -0xa0) <= iVar5 &&
                      (*(uint *)(unaff_BP + -0xa2) <= *(uint *)(unaff_BP + -0xdc))))))))) {
                  if (*(int *)(unaff_BP + -300) == -1) {
                    puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
                    *puVar1 = *puVar1 & 0xfffd;
                    func_0x00008009(0x7a6,0,*(undefined2 *)(unaff_BP + -0x100));
                  }
                  else {
                    puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
                    *puVar1 = *puVar1 | 2;
                  }
                }
              }
            }
          }
          uVar4 = 0x7a6;
          if (0 < *(int *)(unaff_BP + -0x36)) {
            puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
            *puVar1 = *puVar1 ^ 2;
          }
          uVar9 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x122) >> 0x10);
          iVar5 = (int)*(undefined4 *)(unaff_BP + -0x122);
          if ((*(byte *)(iVar5 + 0x16) & 2) != 0) {
            uVar4 = 0x885;
            iVar5 = func_0x00008854(0x7a6,*(undefined1 *)(iVar5 + 0x15));
            if (iVar5 == 0) {
              uVar4 = 0x7a6;
              func_0x00008009(0x885,1,*(undefined2 *)(unaff_BP + -0x100));
            }
            else {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
              *puVar1 = *puVar1 & 0xfffd;
            }
          }
        }
      }
    }
    else if ((*(int *)(unaff_BP + -300) != 1) ||
            ((*(byte *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16) & 2) == 0))
    goto LAB_3ab8_4ee3;
    *(int *)(unaff_BP + -0x100) = *(int *)(unaff_BP + -0x100) + 1;
  } while( true );
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  446 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_4fbd(void)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int in_AX;
  int iVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar10;
  
  uVar4 = 0x3ab8;
code_r0x0003fb3d:
  iVar5 = -in_AX;
  iVar6 = -((*(uint *)(unaff_BP + -0xf4) & 0x7fff) + (uint)(in_AX != 0));
  do {
    *(int *)(unaff_BP + -0x94) = iVar5;
    *(int *)(unaff_BP + -0x92) = iVar6;
    iVar5 = *(int *)(unaff_BP + -0xa4);
    if ((iVar5 <= *(int *)(unaff_BP + -0x82)) &&
       ((((iVar5 < *(int *)(unaff_BP + -0x82) ||
          (*(uint *)(unaff_BP + -0xa6) <= *(uint *)(unaff_BP + -0x84))) &&
         (iVar5 <= *(int *)(unaff_BP + -0x92))) &&
        ((iVar5 < *(int *)(unaff_BP + -0x92) ||
         (*(uint *)(unaff_BP + -0xa6) <= *(uint *)(unaff_BP + -0x94))))))) {
      iVar5 = *(int *)(unaff_BP + -0xc0);
      if ((*(int *)(unaff_BP + -0x82) <= iVar5) &&
         (((*(int *)(unaff_BP + -0x82) < iVar5 ||
           (*(uint *)(unaff_BP + -0x84) <= *(uint *)(unaff_BP + -0xc2))) &&
          ((*(int *)(unaff_BP + -0x92) < iVar5 ||
           ((*(int *)(unaff_BP + -0x92) <= iVar5 &&
            (*(uint *)(unaff_BP + -0x94) <= *(uint *)(unaff_BP + -0xc2))))))))) {
        if (*(int *)(unaff_BP + -0xf8) < 0) {
          iVar5 = -*(int *)(unaff_BP + -0xfa);
          iVar6 = -((*(uint *)(unaff_BP + -0xf8) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0xfa) != 0)
                   );
        }
        else {
          iVar5 = *(int *)(unaff_BP + -0xfa);
          iVar6 = *(int *)(unaff_BP + -0xf8);
        }
        *(int *)(unaff_BP + -0x98) = iVar5;
        *(int *)(unaff_BP + -0x96) = iVar6;
        if (*(int *)(unaff_BP + -0xf0) < 0) {
          iVar5 = -*(int *)(unaff_BP + -0xf2);
          iVar6 = -((*(uint *)(unaff_BP + -0xf0) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0xf2) != 0)
                   );
        }
        else {
          iVar5 = *(int *)(unaff_BP + -0xf2);
          iVar6 = *(int *)(unaff_BP + -0xf0);
        }
        *(int *)(unaff_BP + -0xa2) = iVar5;
        *(int *)(unaff_BP + -0xa0) = iVar6;
        iVar5 = *(int *)(unaff_BP + -0xaa);
        if (((iVar5 <= *(int *)(unaff_BP + -0x96)) &&
            (((iVar5 < *(int *)(unaff_BP + -0x96) ||
              (*(uint *)(unaff_BP + -0xac) <= *(uint *)(unaff_BP + -0x98))) &&
             (iVar5 <= *(int *)(unaff_BP + -0xa0))))) &&
           ((iVar5 < *(int *)(unaff_BP + -0xa0) ||
            (*(uint *)(unaff_BP + -0xac) <= *(uint *)(unaff_BP + -0xa2))))) {
          iVar5 = *(int *)(unaff_BP + -0xda);
          if ((*(int *)(unaff_BP + -0x96) <= iVar5) &&
             (((*(int *)(unaff_BP + -0x96) < iVar5 ||
               (*(uint *)(unaff_BP + -0x98) <= *(uint *)(unaff_BP + -0xdc))) &&
              ((*(int *)(unaff_BP + -0xa0) < iVar5 ||
               ((*(int *)(unaff_BP + -0xa0) <= iVar5 &&
                (*(uint *)(unaff_BP + -0xa2) <= *(uint *)(unaff_BP + -0xdc))))))))) {
            if (*(int *)(unaff_BP + -300) == -1) {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
              *puVar1 = *puVar1 & 0xfffd;
              func_0x00008009(uVar4,0,*(undefined2 *)(unaff_BP + -0x100));
              uVar4 = 0x7a6;
            }
            else {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
              *puVar1 = *puVar1 | 2;
            }
          }
        }
      }
    }
    if (0 < *(int *)(unaff_BP + -0x36)) {
      puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
      *puVar1 = *puVar1 ^ 2;
    }
    uVar9 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x122) >> 0x10);
    iVar5 = (int)*(undefined4 *)(unaff_BP + -0x122);
    if ((*(byte *)(iVar5 + 0x16) & 2) != 0) {
      iVar5 = func_0x00008854(uVar4,*(undefined1 *)(iVar5 + 0x15));
      if (iVar5 == 0) {
        uVar4 = 0x7a6;
        func_0x00008009(0x885,1,*(undefined2 *)(unaff_BP + -0x100));
      }
      else {
        puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
        *puVar1 = *puVar1 & 0xfffd;
        uVar4 = 0x885;
      }
    }
LAB_3ab8_4e76:
    do {
      do {
        *(int *)(unaff_BP + -0x100) = *(int *)(unaff_BP + -0x100) + 1;
        if (*(int *)0x150 < *(int *)(unaff_BP + -0x100)) {
          uVar4 = FUN_3ab8_51a2();
          return uVar4;
        }
        uVar9 = uVar4;
        if ((*(byte *)(unaff_BP + -0x100) & 7) == 0) {
          iVar5 = func_0x0000db7a(uVar4);
          uVar9 = 0x885;
          if (iVar5 != 0) {
            FUN_32b2_7258();
            FUN_32b2_6eb1();
            FUN_32b2_6cc6();
            FUN_32b2_7258();
            FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
            func_0x0003fc09(0x32b2,0,*(undefined2 *)(unaff_BP + -0x24),
                            *(undefined2 *)(unaff_BP + -0x22),*(undefined2 *)(unaff_BP + -0x20),
                            *(undefined2 *)(unaff_BP + -0x1e),*(undefined2 *)(unaff_BP + -0x30),
                            *(undefined2 *)(unaff_BP + -0x2e),*(undefined2 *)(unaff_BP + -0x2c),
                            *(undefined2 *)(unaff_BP + -0x2a));
            return 1;
          }
        }
        uVar4 = 0;
        uVar10 = func_0x00000398(uVar9,*(undefined2 *)(unaff_BP + -0x100));
        *(undefined2 *)(unaff_BP + -0x122) = (int)uVar10;
        *(undefined2 *)(unaff_BP + -0x120) = (int)((ulong)uVar10 >> 0x10);
        if (*(int *)(unaff_BP + -300) == 0) {
          puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
          *puVar1 = *puVar1 & 0xfffd;
        }
        else if ((*(int *)(unaff_BP + -300) == 1) &&
                ((*(byte *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16) & 2) != 0))
        goto LAB_3ab8_4e76;
      } while (((*(int *)(unaff_BP + -0x130) == 2) &&
               ((*(byte *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16) & 8) == 0)) ||
              (((*(int *)(unaff_BP + -0x36) != -2 && (*(char *)0x2c2e != '\x01')) ||
               ((*(int *)(unaff_BP + -0x116) == 4 &&
                ((uint)*(byte *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x14) != *(uint *)0x168))
               ))));
      uVar4 = 0x7a6;
      iVar5 = func_0x00007ba4(0,*(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x15),
                              *(undefined2 *)0xa6c,*(undefined2 *)0xa6a,
                              *(undefined2 *)(unaff_BP + -0x116));
    } while (iVar5 == 0);
    puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + -0x122);
    uVar9 = *(undefined2 *)(unaff_BP + -0x120);
    puVar8 = (undefined2 *)(unaff_BP + -0xfe);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar2;
    }
    if (*(int *)(unaff_BP + -0xfc) < 0) {
      iVar5 = -*(int *)(unaff_BP + -0xfe);
      iVar6 = -((*(uint *)(unaff_BP + -0xfc) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0xfe) != 0));
    }
    else {
      iVar5 = *(int *)(unaff_BP + -0xfe);
      iVar6 = *(int *)(unaff_BP + -0xfc);
    }
    *(int *)(unaff_BP + -0x84) = iVar5;
    *(int *)(unaff_BP + -0x82) = iVar6;
    if (*(int *)(unaff_BP + -0xf4) < 0) break;
    iVar5 = *(int *)(unaff_BP + -0xf6);
    iVar6 = *(int *)(unaff_BP + -0xf4);
  } while( true );
  in_AX = *(int *)(unaff_BP + -0xf6);
  goto code_r0x0003fb3d;
}



/* 3ab8:517f  FUN_3ab8_517f  35 bytes, 2 callers */

undefined2 __cdecl16far FUN_3ab8_517f(void)

{
  uint *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  undefined4 uVar11;
  
  uVar4 = 0x3ab8;
  do {
    if ((bool)in_ZF) {
      uVar10 = 0x7a6;
      func_0x00008009(uVar4,1,*(undefined2 *)(unaff_BP + -0x100));
    }
    else {
      puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
      *puVar1 = *puVar1 & 0xfffd;
      uVar10 = uVar4;
    }
LAB_3ab8_4e76:
    do {
      do {
        do {
          *(int *)(unaff_BP + -0x100) = *(int *)(unaff_BP + -0x100) + 1;
          if (*(int *)0x150 < *(int *)(unaff_BP + -0x100)) {
            uVar4 = FUN_3ab8_51a2();
            return uVar4;
          }
          uVar4 = uVar10;
          if ((*(byte *)(unaff_BP + -0x100) & 7) == 0) {
            iVar5 = func_0x0000db7a(uVar10);
            uVar4 = 0x885;
            if (iVar5 != 0) {
              FUN_32b2_7258();
              FUN_32b2_6eb1();
              FUN_32b2_6cc6();
              FUN_32b2_7258();
              FUN_32b2_6eb1();
                    /* WARNING: Call to offcut address within same function */
              func_0x0003fc09(0x32b2,0,*(undefined2 *)(unaff_BP + -0x24),
                              *(undefined2 *)(unaff_BP + -0x22),*(undefined2 *)(unaff_BP + -0x20),
                              *(undefined2 *)(unaff_BP + -0x1e),*(undefined2 *)(unaff_BP + -0x30),
                              *(undefined2 *)(unaff_BP + -0x2e),*(undefined2 *)(unaff_BP + -0x2c),
                              *(undefined2 *)(unaff_BP + -0x2a));
              return 1;
            }
          }
          uVar10 = 0;
          uVar11 = func_0x00000398(uVar4,*(undefined2 *)(unaff_BP + -0x100));
          *(undefined2 *)(unaff_BP + -0x122) = (int)uVar11;
          *(undefined2 *)(unaff_BP + -0x120) = (int)((ulong)uVar11 >> 0x10);
          if (*(int *)(unaff_BP + -300) == 0) {
            puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
            *puVar1 = *puVar1 & 0xfffd;
          }
          else if ((*(int *)(unaff_BP + -300) == 1) &&
                  ((*(byte *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16) & 2) != 0))
          goto LAB_3ab8_4e76;
        } while (((*(int *)(unaff_BP + -0x130) == 2) &&
                 ((*(byte *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16) & 8) == 0)) ||
                (((*(int *)(unaff_BP + -0x36) != -2 && (*(char *)0x2c2e != '\x01')) ||
                 ((*(int *)(unaff_BP + -0x116) == 4 &&
                  ((uint)*(byte *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x14) != *(uint *)0x168
                  ))))));
        uVar10 = 0x7a6;
        iVar5 = func_0x00007ba4(0,*(undefined1 *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x15),
                                *(undefined2 *)0xa6c,*(undefined2 *)0xa6a,
                                *(undefined2 *)(unaff_BP + -0x116));
      } while (iVar5 == 0);
      puVar7 = (undefined2 *)*(undefined2 *)(unaff_BP + -0x122);
      uVar4 = *(undefined2 *)(unaff_BP + -0x120);
      puVar8 = (undefined2 *)(unaff_BP + -0xfe);
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = *puVar2;
      }
      if (*(int *)(unaff_BP + -0xfc) < 0) {
        iVar5 = -*(int *)(unaff_BP + -0xfe);
        iVar6 = -((*(uint *)(unaff_BP + -0xfc) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0xfe) != 0));
      }
      else {
        iVar5 = *(int *)(unaff_BP + -0xfe);
        iVar6 = *(int *)(unaff_BP + -0xfc);
      }
      *(int *)(unaff_BP + -0x84) = iVar5;
      *(int *)(unaff_BP + -0x82) = iVar6;
      if (*(int *)(unaff_BP + -0xf4) < 0) {
        iVar5 = -*(int *)(unaff_BP + -0xf6);
        iVar6 = -((*(uint *)(unaff_BP + -0xf4) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0xf6) != 0));
      }
      else {
        iVar5 = *(int *)(unaff_BP + -0xf6);
        iVar6 = *(int *)(unaff_BP + -0xf4);
      }
      *(int *)(unaff_BP + -0x94) = iVar5;
      *(int *)(unaff_BP + -0x92) = iVar6;
      iVar5 = *(int *)(unaff_BP + -0xa4);
      if ((iVar5 <= *(int *)(unaff_BP + -0x82)) &&
         ((((iVar5 < *(int *)(unaff_BP + -0x82) ||
            (*(uint *)(unaff_BP + -0xa6) <= *(uint *)(unaff_BP + -0x84))) &&
           (iVar5 <= *(int *)(unaff_BP + -0x92))) &&
          ((iVar5 < *(int *)(unaff_BP + -0x92) ||
           (*(uint *)(unaff_BP + -0xa6) <= *(uint *)(unaff_BP + -0x94))))))) {
        iVar5 = *(int *)(unaff_BP + -0xc0);
        if ((*(int *)(unaff_BP + -0x82) <= iVar5) &&
           (((*(int *)(unaff_BP + -0x82) < iVar5 ||
             (*(uint *)(unaff_BP + -0x84) <= *(uint *)(unaff_BP + -0xc2))) &&
            ((*(int *)(unaff_BP + -0x92) < iVar5 ||
             ((*(int *)(unaff_BP + -0x92) <= iVar5 &&
              (*(uint *)(unaff_BP + -0x94) <= *(uint *)(unaff_BP + -0xc2))))))))) {
          if (*(int *)(unaff_BP + -0xf8) < 0) {
            iVar5 = -*(int *)(unaff_BP + -0xfa);
            iVar6 = -((*(uint *)(unaff_BP + -0xf8) & 0x7fff) +
                     (uint)(*(int *)(unaff_BP + -0xfa) != 0));
          }
          else {
            iVar5 = *(int *)(unaff_BP + -0xfa);
            iVar6 = *(int *)(unaff_BP + -0xf8);
          }
          *(int *)(unaff_BP + -0x98) = iVar5;
          *(int *)(unaff_BP + -0x96) = iVar6;
          if (*(int *)(unaff_BP + -0xf0) < 0) {
            iVar5 = -*(int *)(unaff_BP + -0xf2);
            iVar6 = -((*(uint *)(unaff_BP + -0xf0) & 0x7fff) +
                     (uint)(*(int *)(unaff_BP + -0xf2) != 0));
          }
          else {
            iVar5 = *(int *)(unaff_BP + -0xf2);
            iVar6 = *(int *)(unaff_BP + -0xf0);
          }
          *(int *)(unaff_BP + -0xa2) = iVar5;
          *(int *)(unaff_BP + -0xa0) = iVar6;
          iVar5 = *(int *)(unaff_BP + -0xaa);
          if (((iVar5 <= *(int *)(unaff_BP + -0x96)) &&
              (((iVar5 < *(int *)(unaff_BP + -0x96) ||
                (*(uint *)(unaff_BP + -0xac) <= *(uint *)(unaff_BP + -0x98))) &&
               (iVar5 <= *(int *)(unaff_BP + -0xa0))))) &&
             ((iVar5 < *(int *)(unaff_BP + -0xa0) ||
              (*(uint *)(unaff_BP + -0xac) <= *(uint *)(unaff_BP + -0xa2))))) {
            iVar5 = *(int *)(unaff_BP + -0xda);
            if ((*(int *)(unaff_BP + -0x96) <= iVar5) &&
               (((*(int *)(unaff_BP + -0x96) < iVar5 ||
                 (*(uint *)(unaff_BP + -0x98) <= *(uint *)(unaff_BP + -0xdc))) &&
                ((*(int *)(unaff_BP + -0xa0) < iVar5 ||
                 ((*(int *)(unaff_BP + -0xa0) <= iVar5 &&
                  (*(uint *)(unaff_BP + -0xa2) <= *(uint *)(unaff_BP + -0xdc))))))))) {
              if (*(int *)(unaff_BP + -300) == -1) {
                puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
                *puVar1 = *puVar1 & 0xfffd;
                func_0x00008009(0x7a6,0,*(undefined2 *)(unaff_BP + -0x100));
              }
              else {
                puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
                *puVar1 = *puVar1 | 2;
              }
            }
          }
        }
      }
      uVar10 = 0x7a6;
      if (0 < *(int *)(unaff_BP + -0x36)) {
        puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + -0x122) + 0x16);
        *puVar1 = *puVar1 ^ 2;
      }
      uVar9 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x122) >> 0x10);
      iVar5 = (int)*(undefined4 *)(unaff_BP + -0x122);
    } while ((*(byte *)(iVar5 + 0x16) & 2) == 0);
    uVar4 = 0x885;
    iVar5 = func_0x00008854(0x7a6,*(undefined1 *)(iVar5 + 0x15));
    in_ZF = iVar5 == 0;
  } while( true );
}



/* 3ab8:51a2  FUN_3ab8_51a2  27 bytes, 2 callers */

undefined2 FUN_3ab8_51a2(void)

{
  undefined2 uVar1;
  undefined2 extraout_DX;
  int unaff_BP;
  undefined1 *unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x0000ac64(0x3ab8);
  if (*(int *)(unaff_BP + -0xb0) != 2) {
    uVar1 = FUN_3ab8_51bd();
    return uVar1;
  }
  *(undefined2 *)0xbc2 = 1;
  *(undefined2 *)(unaff_BP + -2) = 1;
  out(*unaff_SI,extraout_DX);
  func_0x0003fc09(0x885,0,*(undefined2 *)(unaff_BP + -0x24),*(undefined2 *)(unaff_BP + -0x22),
                  *(undefined2 *)(unaff_BP + -0x20),*(undefined2 *)(unaff_BP + -0x1e),
                  *(undefined2 *)(unaff_BP + -0x30),*(undefined2 *)(unaff_BP + -0x2e),
                  *(undefined2 *)(unaff_BP + -0x2c),*(undefined2 *)(unaff_BP + -0x2a));
  return 1;
}



/* 3ab8:51bd  FUN_3ab8_51bd  1217 bytes, 2 callers */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0004d9ab) overlaps instruction at (ram,0x0004d9aa)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0004da24) */
/* WARNING: Removing unreachable block (ram,0x0004da99) */
/* WARNING: Removing unreachable block (ram,0x0004da2f) */
/* WARNING: Removing unreachable block (ram,0x0004da70) */
/* WARNING: Removing unreachable block (ram,0x0004da3a) */
/* WARNING: Removing unreachable block (ram,0x0004da57) */
/* WARNING: Removing unreachable block (ram,0x0004daa3) */
/* WARNING: Removing unreachable block (ram,0x0004da64) */
/* WARNING: Removing unreachable block (ram,0x0004da68) */
/* WARNING: Removing unreachable block (ram,0x0004da69) */
/* WARNING: Removing unreachable block (ram,0x0004da8a) */
/* WARNING: Removing unreachable block (ram,0x0004da98) */
/* WARNING: Removing unreachable block (ram,0x0004db34) */
/* WARNING: Removing unreachable block (ram,0x0004db3c) */
/* WARNING: Removing unreachable block (ram,0x0004dafb) */
/* WARNING: Removing unreachable block (ram,0x0004daba) */
/* WARNING: Removing unreachable block (ram,0x0004da76) */
/* WARNING: Removing unreachable block (ram,0x0004daf4) */
/* WARNING: Removing unreachable block (ram,0x0004da63) */
/* WARNING: Removing unreachable block (ram,0x0004d7b2) */
/* WARNING: Removing unreachable block (ram,0x0004d830) */
/* WARNING: Removing unreachable block (ram,0x0004d838) */
/* WARNING: Removing unreachable block (ram,0x0004d848) */
/* WARNING: Removing unreachable block (ram,0x0004d877) */
/* WARNING: Removing unreachable block (ram,0x0004d853) */
/* WARNING: Removing unreachable block (ram,0x0004d894) */
/* WARNING: Removing unreachable block (ram,0x0004d8b3) */
/* WARNING: Removing unreachable block (ram,0x0004d8e8) */
/* WARNING: Removing unreachable block (ram,0x0004d8f0) */
/* WARNING: Removing unreachable block (ram,0x0004d8f8) */
/* WARNING: Removing unreachable block (ram,0x0004d961) */
/* WARNING: Removing unreachable block (ram,0x0004d90b) */
/* WARNING: Removing unreachable block (ram,0x0004d907) */
/* WARNING: Removing unreachable block (ram,0x0004d91e) */
/* WARNING: Removing unreachable block (ram,0x0004d985) */
/* WARNING: Removing unreachable block (ram,0x0004d9a6) */
/* WARNING: Removing unreachable block (ram,0x0004d9aa) */
/* WARNING: Removing unreachable block (ram,0x0004d9ab) */
/* WARNING: Removing unreachable block (ram,0x0004d92f) */
/* WARNING: Removing unreachable block (ram,0x0004d8b7) */
/* WARNING: Removing unreachable block (ram,0x0004d8ac) */

undefined2 __cdecl16far
FUN_3ab8_51bd(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,uint param_6,uint param_7)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  byte bVar6;
  char cVar7;
  char extraout_DL;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 extraout_DX_04;
  undefined2 *puVar8;
  uint unaff_BP;
  undefined2 *puVar9;
  undefined2 uVar10;
  undefined1 *unaff_SI;
  char *pcVar11;
  int unaff_DI;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar17;
  bool bVar18;
  byte in_AF;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined2 uStack_10;
  undefined2 uStack_e;
  uint uStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  uint uStack_4;
  uint uStack_2;
  
  uVar10 = 0x3ab8;
  do {
    *(undefined2 *)0xbc2 = 1;
    uStack_2 = 2;
    iStack_6 = 0xfd4f;
    uStack_4 = uVar10;
    func_0x000297e6();
    uStack_4 = 0x22b2;
    iStack_6 = 0xfd54;
    func_0x00029d78();
    uStack_c = 0x22b2;
    uStack_e = 0xfd5e;
    func_0x000299d1();
    uStack_c = 0x22b2;
    uStack_e = 0xfd66;
    func_0x000297e6();
    uStack_c = 0x22b2;
    uStack_e = 0xfd6b;
    func_0x00029d78();
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x000297e6(0x22b2);
    func_0x00029d78(0x22b2);
    func_0x000299d1(0x22b2);
    func_0x0002bf06(0x22b2);
    uStack_2 = 0x2ab8;
    uStack_4 = 0xfdb0;
    func_0x0000c340();
    uStack_2 = 0x2bda;
    uStack_4 = 0x885;
    iStack_6 = 0xfdb9;
    func_0x00012276();
    if (*(int *)(unaff_BP + 6) == 2) {
      uStack_2 = 0x2be3;
      uStack_4 = 0x11f2;
      iStack_6 = 0xfdd9;
      func_0x00012276();
    }
    else {
      uStack_2 = 0x2be0;
      uStack_4 = 0x11f2;
      iStack_6 = 0xfdcc;
      func_0x00012276();
    }
    uStack_2 = *(undefined2 *)(unaff_BP + 0xc);
    uStack_4 = 0x2be6;
    iStack_6 = 0x11f2;
    iStack_8 = 0xfde6;
    func_0x00012276();
    if (*(int *)(unaff_BP - 0x36) == -2) {
      uStack_2 = unaff_BP - 0x114;
      uStack_4 = 0x11f2;
      iStack_6 = 0xfdfb;
      func_0x00012276();
    }
    else {
      uStack_2 = 0x2c01;
      uStack_4 = 0x11f2;
      iStack_6 = 0xfe08;
      func_0x00012276();
    }
    if (-1 < *(int *)(unaff_BP - 0x36)) {
      uStack_2 = 0x2c0c;
      uStack_4 = 0x11f2;
      iStack_6 = 0xfe1b;
      func_0x00012276();
    }
    if (*(int *)(unaff_BP - 0x36) != -2) {
      uStack_2 = 0x2c14;
      uStack_4 = 0x11f2;
      iStack_6 = 0xfe2e;
      func_0x00012276();
    }
    uStack_2 = 0x11f2;
    uStack_4 = 0xfe34;
    func_0x00010526();
    uStack_2 = 1;
    uStack_4 = 0x44;
    iStack_6 = 0xdef;
    iStack_8 = 0xfe41;
    FUN_1000_0599();
    uStack_2 = 0x2c20;
    uStack_4 = 0xdef;
    iStack_6 = 0xfe4c;
    func_0x00012276();
    *(undefined2 *)0xa4a = 1;
    *(undefined2 *)0xa48 = 1;
    *(undefined2 *)0xc1a = 10;
    if (*(int *)(unaff_BP + 6) == 2) {
      *(undefined2 *)0xc1a = 0xb;
    }
    uStack_2 = unaff_BP - 0xb0;
    iVar16 = unaff_BP - 0x13e;
    iStack_6 = unaff_BP - 0x134;
    iStack_8 = unaff_BP - 0xc4;
    iStack_a = unaff_BP - 0xb2;
    uStack_c = 0x11f2;
    iVar15 = 0x3bf;
    uStack_e = 0xfe89;
    uStack_4 = iVar16;
    uVar20 = func_0x00006608();
    uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
    *(undefined2 *)(unaff_BP - 0x34) = (int)uVar20;
    *(undefined2 *)0xa4a = 0;
    *(undefined2 *)0xa48 = 0;
    *(undefined2 *)0xc1a = 0;
    *(undefined2 *)(unaff_BP - 300) = 0;
    if ((*(int *)(unaff_BP - 0xb0) == 0) || (*(byte *)0x123 < 0xc)) {
LAB_3ab8_537c:
      if ((*(int *)0xc18 == 1) && (*(int *)(unaff_BP + 6) != 2)) {
        *(undefined2 *)0xc22 = 1;
        uStack_2 = 0xffff;
        uStack_4 = 7;
        iStack_6 = 2;
        iStack_8 = 0x16;
        iStack_a = 0x730;
        iVar16 = 0xdef;
        uStack_e = 0xff2e;
        uStack_c = iVar15;
        FUN_1000_02b5();
        *(undefined2 *)(unaff_BP - 300) = 1;
        uVar10 = *(undefined2 *)(unaff_BP - 0x132);
        *(undefined2 *)(unaff_BP - 0xbe) = *(undefined2 *)(unaff_BP - 0x134);
        *(undefined2 *)(unaff_BP - 0xbc) = uVar10;
        uVar10 = *(undefined2 *)(unaff_BP - 0x13c);
        *(undefined2 *)(unaff_BP - 0xd8) = *(undefined2 *)(unaff_BP - 0x13e);
        *(undefined2 *)(unaff_BP - 0xd6) = uVar10;
        *(undefined2 *)0xc18 = 0;
        goto LAB_3ab8_371c;
      }
      if ((*(int *)0xc18 == -2) && (*(int *)(unaff_BP + 6) != 2)) {
        *(undefined2 *)0xc22 = 1;
        uStack_2 = 0xffff;
        uStack_4 = 4;
        iStack_6 = 2;
        iStack_8 = 0x16;
        iStack_a = 0x73a;
        iVar16 = 0xdef;
        uStack_e = 0xff92;
        uStack_c = iVar15;
        FUN_1000_02b5();
        *(undefined2 *)(unaff_BP - 300) = 0xffff;
        uVar10 = *(undefined2 *)(unaff_BP - 0x132);
        *(undefined2 *)(unaff_BP - 0xbe) = *(undefined2 *)(unaff_BP - 0x134);
        *(undefined2 *)(unaff_BP - 0xbc) = uVar10;
        uVar10 = *(undefined2 *)(unaff_BP - 0x13c);
        *(undefined2 *)(unaff_BP - 0xd8) = *(undefined2 *)(unaff_BP - 0x13e);
        *(undefined2 *)(unaff_BP - 0xd6) = uVar10;
        *(undefined2 *)0xc18 = 0;
        goto LAB_3ab8_371c;
      }
      uStack_2 = iVar15;
      if (*(int *)0xc18 == 2) {
        uStack_4 = 0xffd3;
        func_0x0000c3ca();
        *(undefined2 *)0xc18 = 0;
        goto LAB_2bb4_581e;
      }
      *(undefined2 *)0xc18 = 0;
      if (*(int *)0x158 == 0) {
        if (*(int *)(unaff_BP - 0x34) != -1) {
          uStack_2 = 0x30;
          FUN_32b2_718c();
          uStack_2 = 0x38;
          FUN_32b2_7095();
          uStack_2 = 0x40;
          FUN_32b2_6eb1();
          uStack_2 = 0x48;
          FUN_32b2_6d14();
          uStack_2 = 0x50;
          FUN_32b2_6e63();
          uStack_2 = 0x58;
          FUN_32b2_6d14();
          uStack_2 = 0x60;
          FUN_32b2_6e63();
          return 1;
        }
        uStack_4 = 2;
        FUN_1885_2ec3();
        uStack_2 = 0;
        uStack_4 = 0x1b6e;
        iStack_6 = 0xb;
        bVar6 = func_0x00008095();
        if (*(int *)(unaff_BP - 0x86) != 0) {
          *(undefined2 *)(unaff_BP - 2) = 0xffff;
          uStack_2 = 0;
          uStack_4 = 0x7a6;
          iStack_6 = 0x139e;
          func_0x0000daa6();
          *(uint *)0xc3be =
               *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
          return *(undefined2 *)(unaff_BP - 2);
        }
        unaff_SI[uStack_2] = unaff_SI[uStack_2] + bVar6;
        pcVar11 = (char *)((uint)unaff_SI ^ *(uint *)(unaff_BP + unaff_DI));
        puVar9 = (undefined2 *)(unaff_BP ^ uStack_2);
        bVar6 = bVar6 + (9 < (bVar6 & 0xf) | in_AF) * -6 & 0xf;
        pcVar11[uStack_2] = pcVar11[uStack_2] + bVar6;
        pcVar11[uStack_2] = pcVar11[uStack_2] + bVar6;
        pcVar11[uStack_2] = pcVar11[uStack_2] + bVar6;
        pbVar2 = (byte *)(pcVar11 + uStack_2);
        bVar18 = CARRY1(*pbVar2,bVar6);
        *pbVar2 = *pbVar2 + bVar6;
        puVar8 = puVar9;
        if (iVar16 == 1) {
          uVar10 = *puVar9;
          cVar7 = (char)(uStack_2 + 1);
          *(char *)((int)puVar9 + (int)pcVar11) = *(char *)((int)puVar9 + (int)pcVar11) + cVar7;
          *(char *)((int)puVar9 + (int)pcVar11) = *(char *)((int)puVar9 + (int)pcVar11) + cVar7;
          ((char *)((int)puVar9 + (int)pcVar11))[0x42] =
               ((char *)((int)puVar9 + (int)pcVar11))[0x42];
          *(char *)((int)puVar9 + (int)pcVar11) = *(char *)((int)puVar9 + (int)pcVar11) + cVar7;
          cVar7 = *(char *)0x40;
          *(char *)((int)puVar9 + (int)pcVar11) =
               *(char *)((int)puVar9 + (int)pcVar11) + (char)(uStack_2 + 1 >> 8);
          *puVar9 = unaff_SS;
          *(char *)((int)puVar9 + (int)pcVar11) = *(char *)((int)puVar9 + (int)pcVar11) + cVar7;
          puVar8 = (undefined2 *)((int)puVar9 + 1);
          *(char *)((int)puVar8 + (int)pcVar11) = *(char *)((int)puVar8 + (int)pcVar11) + cVar7 + -1
          ;
          uVar20 = *(undefined4 *)(char *)((int)puVar8 + (int)pcVar11);
          ((char *)((int)puVar8 + (int)pcVar11))[0x44] =
               ((char *)((int)puVar8 + (int)pcVar11))[0x44] + '\x01';
          *(char *)((int)puVar8 + (int)pcVar11) =
               *(char *)((int)puVar8 + (int)pcVar11) + (char)uVar20;
          *(undefined2 *)((int)puVar9 - 1) = unaff_SS;
          uVar20 = *(undefined4 *)(char *)((int)puVar8 + (int)pcVar11);
          *(char *)0x44 = *(char *)0x44 + extraout_DL;
          ((char *)((int)puVar8 + (int)pcVar11))[0x43] =
               ((char *)((int)puVar8 + (int)pcVar11))[0x43] + '\x01';
          pcVar3 = (char *)((int)puVar8 + (int)pcVar11);
          bVar6 = (byte)uVar20;
          *pcVar3 = *pcVar3 + bVar6;
          cVar7 = *pcVar3;
          *(undefined2 *)((int)puVar9 - 3) = uVar10;
          if ((POPCOUNT(cVar7) & 1U) == 0) {
            *(char *)((int)puVar8 + (int)pcVar11) = *(char *)((int)puVar8 + (int)pcVar11) + bVar6;
            *(char *)((int)puVar8 + (int)pcVar11) = *(char *)((int)puVar8 + (int)pcVar11) + bVar6;
            *(char *)((int)puVar8 + (int)pcVar11) = *(char *)((int)puVar8 + (int)pcVar11) + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          pbVar2 = (byte *)((int)puVar8 + (int)pcVar11);
          bVar18 = CARRY1(*pbVar2,bVar6);
          *pbVar2 = *pbVar2 + bVar6;
          *(undefined2 *)((int)puVar9 + unaff_DI + 0x67) = 0x74bc;
        }
        *pcVar11 = (*pcVar11 - (char)puVar8) - bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(unaff_BP - 2) = 0;
      goto LAB_2bb4_5853_2;
    }
    uStack_2 = 0x3bf;
    iVar15 = 0x7a6;
    uStack_4 = -0x148;
    uVar20 = func_0x00007a6a();
    uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
    if ((int)uVar20 == 0) goto LAB_3ab8_537c;
    uStack_2 = *(undefined2 *)(unaff_BP - 0x13c);
    uStack_4 = *(undefined2 *)(unaff_BP - 0x13e);
    iStack_6 = *(undefined2 *)(unaff_BP - 0x132);
    iStack_8 = *(undefined2 *)(unaff_BP - 0x134);
    iStack_a = 1;
    uStack_c = 0x7a6;
    uVar10 = 0x2ab8;
    uStack_e = 0xfed9;
    iVar16 = func_0x0002ac0a();
  } while ((iVar16 == 0) || (*(int *)(unaff_BP - 0xb0) != 2));
  uStack_2 = 0x2ab8;
  iVar15 = 0x1b6e;
  uStack_4 = 0xfef6;
  FUN_1885_2ec3();
  uVar10 = extraout_DX_04;
LAB_2bb4_5853_2:
  out(*unaff_SI,uVar10);
code_r0x00031398:
  uStack_2 = *(undefined2 *)(unaff_BP - 0x2a);
  uStack_4 = *(undefined2 *)(unaff_BP - 0x2c);
  iStack_6 = *(undefined2 *)(unaff_BP - 0x2e);
  iStack_8 = *(undefined2 *)(unaff_BP - 0x30);
  iStack_a = *(undefined2 *)(unaff_BP - 0x1e);
  uStack_c = *(undefined2 *)(unaff_BP - 0x20);
  uStack_e = *(undefined2 *)(unaff_BP - 0x22);
  uStack_10 = *(undefined2 *)(unaff_BP - 0x24);
  func_0x0003fc09(iVar15,0);
  return 1;
LAB_3ab8_371c:
  uVar10 = *(undefined2 *)(unaff_BP - 0xbc);
  *(undefined2 *)(unaff_BP - 0x108) = *(undefined2 *)(unaff_BP - 0xbe);
  *(undefined2 *)(unaff_BP - 0x106) = uVar10;
  uVar10 = *(undefined2 *)(unaff_BP - 0xd6);
  *(undefined2 *)(unaff_BP - 0x11e) = *(undefined2 *)(unaff_BP - 0xd8);
  *(undefined2 *)(unaff_BP - 0x11c) = uVar10;
  uStack_4 = 0xe2c1;
  uStack_2 = iVar16;
  func_0x0000c340();
  uStack_2 = 0x728;
  uStack_4 = 0x885;
  iStack_6 = 0xe2ca;
  func_0x00012276();
  if (*(int *)(unaff_BP + 6) == 2) {
    uStack_2 = 0x2e6;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe2dd;
    func_0x00012276();
    uStack_2 = 0x2f0;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe2e7;
    func_0x00012276();
  }
  else {
    if (*(int *)(unaff_BP - 0x130) == 0) {
      if ((*(char *)0x2c2e == '\0') && (*(int *)(unaff_BP - 0x36) != -2)) {
        uStack_2 = 0x2b78;
        uStack_4 = 0x11f2;
        iStack_6 = 0xe311;
        func_0x00012276();
      }
      if ((*(char *)0x2c2e == '\x01') && (*(int *)(unaff_BP - 0x36) != -2)) {
        uStack_2 = unaff_BP - 0x50;
        uStack_4 = 0x11f2;
        iStack_6 = 0xe32e;
        func_0x00012276();
      }
      if (*(int *)(unaff_BP - 0x36) == -2) {
        uStack_2 = unaff_BP - 0x114;
        uStack_4 = 0x11f2;
        iStack_6 = 0xe342;
        func_0x00012276();
      }
    }
    uStack_2 = 0x2b80;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe34c;
    func_0x00012276();
    uStack_2 = 0x2e6;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe356;
    func_0x00012276();
    uStack_2 = 0x30e;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe360;
    func_0x00012276();
    uStack_2 = 0x2b83;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe36a;
    func_0x00012276();
    uStack_2 = 0x316;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe374;
    func_0x00012276();
  }
  uStack_2 = 0x11f2;
  uStack_4 = 0xe37a;
  func_0x00010526();
  uStack_2 = 1;
  uStack_4 = 0x35;
  iStack_6 = 0xdef;
  iStack_8 = 0xe387;
  FUN_1000_0599();
  uStack_2 = 0x2b8e;
  uStack_4 = 0xdef;
  iStack_6 = 0xe392;
  func_0x00012276();
  uStack_2 = 0xa2d;
  uStack_4 = 0x11f2;
  iStack_6 = 0xe39c;
  func_0x00012276();
  uStack_2 = 0x60a;
  uStack_4 = 0x11f2;
  iStack_6 = 0xe3a6;
  func_0x00012276();
  uStack_2 = 0x2b90;
  uStack_4 = 0x11f2;
  iStack_6 = 0xe3b0;
  func_0x00012276();
  uStack_2 = 0xa30;
  uStack_4 = 0x11f2;
  iStack_6 = 0xe3ba;
  func_0x00012276();
  if (*(int *)(unaff_BP - 0x36) != -2) {
    uStack_2 = 0x2b92;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe3cd;
    func_0x00012276();
    uStack_2 = 0x2b99;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe3d7;
    func_0x00012276();
  }
  if ((*(int *)(unaff_BP - 0x36) == -2) || (*(char *)0x2c2e == '\x01')) {
    if (*(int *)(unaff_BP - 0x36) != -2) {
      uStack_2 = 0xa33;
      uStack_4 = 0x11f2;
      iStack_6 = 0xe3fd;
      func_0x00012276();
    }
    uStack_2 = 0x2b9b;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe407;
    func_0x00012276();
    uStack_2 = 0x2ba2;
    uStack_4 = 0x11f2;
    iStack_6 = 0xe411;
    func_0x00012276();
  }
  uStack_2 = 0x658;
  uStack_4 = 0xbf48;
  iStack_6 = 0x11f2;
  iStack_8 = 0xe41f;
  FUN_21f2_3454();
  uStack_2 = 0x2ba4;
  uStack_4 = 0xbf48;
  iStack_6 = 0x22b2;
  iStack_8 = 0xe42e;
  FUN_21f2_2d26();
  if (*(int *)(unaff_BP - 0x116) == 8) {
    *(undefined2 *)0xc22 = 1;
    uStack_2 = 0x60a;
    uStack_4 = 0xbf48;
    iStack_6 = 0x22b2;
    iStack_8 = 0xe44d;
    FUN_21f2_2d26();
  }
  if (*(int *)(unaff_BP - 0x116) == 2) {
    *(undefined2 *)0xc22 = 1;
    uStack_2 = 0x2ba6;
    uStack_4 = 0xbf48;
    iStack_6 = 0x22b2;
    iStack_8 = 0xe46c;
    FUN_21f2_2d26();
  }
  if (*(int *)(unaff_BP - 0x116) == 4) {
    *(undefined2 *)0xc22 = 1;
    uStack_2 = 0x2bad;
    uStack_4 = 0xbf48;
    iStack_6 = 0x22b2;
    iStack_8 = 0xe48b;
    FUN_21f2_2d26();
  }
  iVar16 = 0x22b2;
  if (*(int *)0xc22 != 0) {
    uStack_2 = 2;
    uStack_4 = 0x3c;
    iStack_6 = 0x22b2;
    iStack_8 = 0xe4a4;
    FUN_1000_0599();
    uStack_2 = 0xdef;
    uStack_4 = 0xe4ab;
    func_0x00010526();
    uStack_2 = 0x2bb4;
    uStack_4 = 0xbf48;
    iStack_6 = 0xdef;
    iStack_8 = 0xe4b8;
    FUN_21f2_2d26();
    uStack_2 = 0xffff;
    uStack_4 = 7;
    iStack_6 = 2;
    iStack_8 = 0x3c;
    iStack_a = 0xbf48;
    uStack_c = 0x22b2;
    iVar16 = 0xdef;
    uStack_e = 0xe4d3;
    FUN_1000_02b5();
  }
  uVar10 = *(undefined2 *)(unaff_BP - 0x106);
  *(undefined2 *)(unaff_BP - 0xd4) = *(undefined2 *)(unaff_BP - 0x108);
  *(undefined2 *)(unaff_BP - 0xd2) = uVar10;
  uVar10 = *(undefined2 *)(unaff_BP - 0x11c);
  *(undefined2 *)(unaff_BP - 0xe6) = *(undefined2 *)(unaff_BP - 0x11e);
  *(undefined2 *)(unaff_BP - 0xe4) = uVar10;
  uVar10 = *(undefined2 *)0x9756;
  *(undefined2 *)(unaff_BP - 0x11a) = *(undefined2 *)0x9754;
  *(undefined2 *)(unaff_BP - 0x118) = uVar10;
  uVar10 = *(undefined2 *)(unaff_BP - 0x11c);
  *(undefined2 *)(unaff_BP - 0x126) = *(undefined2 *)(unaff_BP - 0x11e);
  *(undefined2 *)(unaff_BP - 0x124) = uVar10;
LAB_3ab8_3995:
  *(undefined2 *)0xa4a = 1;
  uStack_2 = unaff_BP - 0xb0;
  uStack_4 = unaff_BP - 0x13e;
  iStack_6 = unaff_BP - 0x134;
  iStack_8 = unaff_BP - 0xc4;
  iStack_a = unaff_BP - 0xb2;
  iVar15 = 0x3bf;
  uStack_e = 0xe539;
  uStack_c = iVar16;
  uVar20 = func_0x00006608();
  uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
  *(undefined2 *)(unaff_BP - 0x34) = (int)uVar20;
  *(undefined2 *)0xa4a = 0;
  if (*(int *)0x158 != 0) {
    *(undefined2 *)(unaff_BP - 2) = 0;
    goto LAB_2bb4_5853_2;
  }
  if (*(int *)(unaff_BP - 0x34) != -1) {
    if (*(int *)(unaff_BP - 0x34) == 99) {
      uStack_2 = 0x3bf;
      iVar16 = 0x1b6e;
      uStack_4 = 0xe5d4;
      FUN_1885_2ec3();
    }
    else {
      if (((*(int *)(unaff_BP - 0xb0) == 0) || (0xf < *(int *)(unaff_BP - 0xc4))) &&
         ((*(int *)(unaff_BP - 0x34) < 0x31 || (0x33 < *(int *)(unaff_BP - 0x34))))) {
        if ((*(int *)(unaff_BP + 6) == 2) && (*(int *)(unaff_BP - 0xb0) != 0)) goto LAB_3ab8_3b69;
        goto LAB_3ab8_3b90;
      }
      if (*(int *)(unaff_BP - 0xb2) < 0x1a5) {
        *(undefined2 *)(unaff_BP - 0x154) = 0;
      }
      else {
        *(int *)(unaff_BP - 0x154) = (*(int *)(unaff_BP - 0xb2) + -0x1a4) / 0x48 + 1;
      }
      if ((0x30 < *(int *)(unaff_BP - 0x34)) && (*(int *)(unaff_BP - 0x34) < 0x34)) {
        *(int *)(unaff_BP - 0x154) = *(int *)(unaff_BP - 0x34) + -0x30;
      }
      if (*(int *)(unaff_BP - 0x154) == 1) {
        if (*(int *)(unaff_BP - 0x116) == 8) {
          *(undefined2 *)(unaff_BP - 0x116) = 0;
        }
        else {
          *(undefined2 *)(unaff_BP - 0x116) = 8;
        }
      }
      if ((*(int *)(unaff_BP - 0x154) == 2) && (*(int *)(unaff_BP - 0x36) != -2)) {
        if (*(int *)(unaff_BP - 0x116) == 2) {
          *(undefined2 *)(unaff_BP - 0x116) = 0;
        }
        else {
          *(undefined2 *)(unaff_BP - 0x116) = 2;
        }
      }
      if (((*(int *)(unaff_BP - 0x154) == 2) && (*(int *)(unaff_BP - 0x36) == -2)) ||
         ((*(int *)(unaff_BP - 0x154) == 3 && (*(char *)0x2c2e == '\x01')))) {
        if (*(int *)(unaff_BP - 0x116) == 4) {
          *(undefined2 *)(unaff_BP - 0x116) = 0;
        }
        else {
          *(undefined2 *)(unaff_BP - 0x116) = 4;
        }
      }
      uStack_2 = 0x3bf;
      iVar16 = 0x1b6e;
      uStack_4 = 0xe6d3;
      FUN_1885_2ec3();
    }
    goto LAB_3ab8_371c;
  }
  uStack_2 = 0x3bf;
  iVar15 = 0x1b6e;
  uStack_4 = 0xe565;
  FUN_1885_2ec3();
  if (*(int *)(unaff_BP - 300) != 0) {
    uVar10 = *(undefined2 *)0x972e;
    *(undefined2 *)(unaff_BP - 0x108) = *(undefined2 *)0x972c;
    *(undefined2 *)(unaff_BP - 0x106) = uVar10;
    uVar10 = *(undefined2 *)0x972e;
    *(undefined2 *)(unaff_BP - 0x11e) = *(undefined2 *)0x972c;
    *(undefined2 *)(unaff_BP - 0x11c) = uVar10;
    uVar10 = *(undefined2 *)0x972e;
    *(undefined2 *)(unaff_BP - 0x12a) = *(undefined2 *)0x972c;
    *(undefined2 *)(unaff_BP - 0x128) = uVar10;
    uVar10 = *(undefined2 *)0x972e;
    *(undefined2 *)(unaff_BP - 0x138) = *(undefined2 *)0x972c;
    *(undefined2 *)(unaff_BP - 0x136) = uVar10;
    uVar10 = FUN_3ab8_51bd();
    return uVar10;
  }
  iVar16 = iVar15;
  if (*(int *)(unaff_BP - 0x86) == 0) goto LAB_3ab8_2c00;
  *(undefined2 *)(unaff_BP - 2) = 0xffff;
  uVar10 = extraout_DX_03;
  goto LAB_2bb4_5853_2;
  while( true ) {
    uStack_2 = unaff_BP - 0x13e;
    uStack_4 = unaff_BP - 0x134;
    iStack_6 = *(int *)(unaff_BP - 0xb0);
    iVar16 = 0x11f2;
    iStack_a = -0x1d9d;
    iStack_8 = iVar15;
    iVar15 = func_0x00015409();
    if (iVar15 != 0) break;
LAB_3ab8_2c00:
    *(undefined2 *)(unaff_BP - 0x9e) = 0;
    uStack_4 = 0xd78b;
    uStack_2 = iVar16;
    func_0x0000c340();
    if (*(int *)(unaff_BP - 0x88) == 0) {
      uStack_2 = 0x2b0c;
      uStack_4 = 0x885;
      iStack_6 = 0xd7ab;
      func_0x00012276();
    }
    else {
      uStack_2 = 0x728;
      uStack_4 = 0x885;
      iStack_6 = 0xd79e;
      func_0x00012276();
    }
    uStack_2 = 0x302;
    uStack_4 = *(undefined2 *)(unaff_BP + 0xc);
    iStack_6 = 0x2b14;
    iStack_8 = 0x11f2;
    iStack_a = -0x2844;
    func_0x00012276();
    *(undefined2 *)(unaff_BP - 4) = 0;
    *(undefined2 *)(unaff_BP - 0xa8) = 0;
    if (*(int *)(unaff_BP - 0x130) == 0) {
      if (*(int *)(unaff_BP + 6) == 2) {
        uStack_2 = 0x2b1f;
        uStack_4 = 0x11f2;
        iStack_6 = 0xd7e5;
        func_0x00012276();
        uStack_2 = unaff_BP - 0x50;
        uStack_4 = 0x11f2;
        iStack_6 = 0xd7ef;
        func_0x00012276();
        uStack_2 = 0x2b22;
        uStack_4 = 0x11f2;
        iStack_6 = 0xd7f9;
        func_0x00012276();
        uStack_2 = 0x2f0;
        uStack_4 = 0x11f2;
        iStack_6 = -0x27fd;
        func_0x00012276();
      }
      else {
        if (*(int *)(unaff_BP - 0x36) == -2) {
          uStack_2 = unaff_BP - 0x114;
          uStack_4 = 0x11f2;
          iStack_6 = -0x27d9;
          func_0x00012276();
        }
        else {
          uStack_2 = 0x2b26;
          uStack_4 = 0x11f2;
          iStack_6 = -0x27e7;
          func_0x00012276();
        }
        if (-1 < *(int *)(unaff_BP - 0x36)) {
          uStack_2 = 0x2b30;
          uStack_4 = 0x11f2;
          iStack_6 = 0xd83a;
          func_0x00012276();
          uStack_2 = unaff_BP - 0x50;
          uStack_4 = 0x11f2;
          iStack_6 = -0x27bc;
          func_0x00012276();
        }
        if (*(int *)(unaff_BP + 6) == 0) {
          if (*(int *)(unaff_BP - 0x36) == 0) {
            uStack_2 = 0x2b35;
            uStack_4 = 0x11f2;
            iStack_6 = 0xd860;
            func_0x00012276();
          }
          uStack_2 = 0x98a;
          uStack_4 = unaff_BP - 0x152;
          iStack_6 = 0x11f2;
          iStack_8 = 0xd86f;
          func_0x00024c86();
          uStack_2 = 0xa2d;
          uStack_4 = unaff_BP - 0x152;
          iStack_6 = 0x22b2;
          iStack_8 = 0xd87f;
          FUN_21f2_2d26();
          if (*(int *)(unaff_BP + 8) != 500) {
            uStack_2 = 0x955;
            uStack_4 = unaff_BP - 0x152;
            iStack_6 = 0x22b2;
            iStack_8 = 0xd899;
            FUN_21f2_2d26();
          }
          uStack_2 = 0x2b42;
          uStack_4 = unaff_BP - 0x152;
          iStack_6 = 0x22b2;
          iStack_8 = 0xd8a9;
          FUN_21f2_2d26();
          if (*(int *)(unaff_BP + 8) != 500) {
            uStack_2 = 0x955;
            uStack_4 = unaff_BP - 0x152;
            iStack_6 = 0x22b2;
            iStack_8 = 0xd8c3;
            FUN_21f2_2d26();
          }
          uStack_2 = 0x2b45;
          uStack_4 = unaff_BP - 0x152;
          iStack_6 = 0x22b2;
          iStack_8 = 0xd8d3;
          FUN_21f2_2d26();
          if (*(int *)(unaff_BP + 8) != 500) {
            uStack_2 = 0x955;
            uStack_4 = unaff_BP - 0x152;
            iStack_6 = 0x22b2;
            iStack_8 = 0xd8ed;
            FUN_21f2_2d26();
          }
          uStack_2 = 0x2b48;
          uStack_4 = unaff_BP - 0x152;
          iStack_6 = 0x22b2;
          iStack_8 = 0xd8fd;
          FUN_21f2_2d26();
          uStack_2 = 0x98a;
          uStack_4 = unaff_BP - 0x152;
          iStack_6 = 0x22b2;
          iStack_8 = 0xd90d;
          FUN_21f2_2d26();
          if (*(int *)(unaff_BP + 8) == 500) {
            uStack_2 = 0x2b4b;
            uStack_4 = unaff_BP - 0x152;
            iStack_6 = 0x22b2;
            iStack_8 = 0xd927;
            FUN_21f2_2d26();
          }
          uStack_2 = 0x22b2;
          uStack_4 = 0xd92e;
          func_0x00010526();
          uStack_2 = 1;
          uStack_4 = 0x44;
          iStack_6 = 0xdef;
          iStack_8 = -0x26c5;
          FUN_1000_0599();
          uStack_2 = unaff_BP - 0x152;
          uStack_4 = 0xdef;
          iStack_6 = -0x26b9;
          func_0x00012276();
          *(undefined2 *)(unaff_BP - 4) = 0xc;
        }
      }
      uStack_2 = 0x11f2;
      iVar15 = 0xdef;
      uStack_4 = 0xd952;
      func_0x00010526();
    }
    else {
      if (*(int *)(unaff_BP - 0x130) == 2) {
        uStack_2 = 0x2b4f;
        uStack_4 = 0x11f2;
        iStack_6 = 0xd968;
        func_0x00012276();
      }
      if (*(int *)(unaff_BP - 0x12e) == 0) {
        uStack_2 = 0x2b5a;
        uStack_4 = 0x11f2;
        iStack_6 = 0xd97c;
        func_0x00012276();
      }
      if (*(int *)(unaff_BP - 0xae) == 0) {
        uStack_2 = unaff_BP - 0x114;
        uStack_4 = 0x11f2;
        iStack_6 = 0xd991;
        func_0x00012276();
      }
      uStack_2 = 0x11f2;
      uStack_4 = 0xd997;
      func_0x00010526();
      uStack_2 = 1;
      uStack_4 = 0x43;
      iStack_6 = 0xdef;
      iStack_8 = -0x265c;
      FUN_1000_0599();
      uStack_2 = 0x2b6a;
      uStack_4 = 0xdef;
      iVar15 = 0x11f2;
      iStack_6 = -0x2651;
      func_0x00012276();
    }
    *(undefined2 *)(unaff_BP - 0x34) = 0;
LAB_3ab8_2e35:
    while (*(int *)(unaff_BP - 0x34) != 100) {
      *(undefined2 *)0xa4a = 1;
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xa48 = 1;
      *(undefined2 *)0xc1a = *(undefined2 *)(unaff_BP - 4);
      uStack_2 = 0;
      iStack_6 = 0xd9d9;
      uStack_4 = iVar15;
      func_0x0000daa6();
      iVar16 = 0x885;
      if (*(char *)0x12a == '\x01') {
        *(uint *)0xc3be = *(uint *)0xc3be | 4;
      }
      while (*(int *)0x158 == 0) {
        uStack_2 = unaff_BP - 0xb0;
        uStack_4 = unaff_BP - 0x13e;
        iStack_6 = unaff_BP - 0x134;
        iStack_8 = unaff_BP - 0xc4;
        iStack_a = unaff_BP - 0xb2;
        iVar15 = 0x3bf;
        uStack_e = 0xda11;
        uStack_c = iVar16;
        uVar10 = func_0x00006608();
        *(undefined2 *)(unaff_BP - 0x34) = uVar10;
        iVar16 = iVar15;
        if ((*(int *)(unaff_BP - 0xb0) != 0) || (*(int *)(unaff_BP - 0x34) != 0)) break;
      }
      uStack_2 = 0;
      iVar15 = 0x885;
      iStack_6 = -0x25c7;
      uStack_4 = iVar16;
      func_0x0000daa6();
      *(undefined2 *)0xa4a = 0;
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xa48 = 0;
      if (*(char *)0x12a == '\x01') {
        *(uint *)0xc3be =
             *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
      }
      uVar10 = extraout_DX;
      if ((*(int *)(unaff_BP - 0xb0) != 0) && (0xb < *(byte *)0x123)) {
        uStack_2 = 0x885;
        iVar15 = 0x7a6;
        uStack_4 = 0xda7b;
        uVar20 = func_0x00007a6a();
        uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
        if ((int)uVar20 != 0) {
          uStack_2 = *(undefined2 *)(unaff_BP - 0x13c);
          uStack_4 = *(undefined2 *)(unaff_BP - 0x13e);
          iStack_6 = *(int *)(unaff_BP - 0x132);
          iStack_8 = *(int *)(unaff_BP - 0x134);
          iStack_a = 0;
          uStack_c = 0x7a6;
          uStack_e = 0xda9c;
          iVar15 = func_0x0002ac0a();
          iVar16 = 0x2ab8;
          if (iVar15 == 0) goto LAB_3ab8_2c00;
          if (*(int *)(unaff_BP - 0xb0) != 2) {
            if (*(char *)0x12a == '\x01') {
              *(uint *)0xc3be =
                   *(uint *)0xc3be ^ (byte)((byte)(*(uint *)0xc3be >> 2) ^ *(byte *)0xc3be) & 4;
            }
            uVar10 = FUN_3ab8_51bd();
            return uVar10;
          }
          uStack_2 = 0x2ab8;
          iVar15 = 0x1b6e;
          uStack_4 = 0xdab9;
          FUN_1885_2ec3();
          uVar10 = extraout_DX_00;
          goto LAB_2bb4_5853_2;
        }
      }
      if (*(int *)0xc1a != 0) {
        if (*(int *)0xc18 == 2) {
          *(undefined2 *)(unaff_BP - 0x34) = 0x31;
        }
        if (*(int *)0xc18 == -2) {
          *(undefined2 *)(unaff_BP - 0xa8) = 1;
        }
      }
      *(undefined2 *)0xc18 = 0;
      *(undefined2 *)0xc1a = 0;
      if (*(int *)0x158 != 0) {
        *(undefined2 *)(unaff_BP - 2) = 0;
        goto LAB_2bb4_5853_2;
      }
      if ((*(int *)(unaff_BP - 0x34) == -1) && (*(int *)(unaff_BP - 0x88) != 0)) {
        *(undefined2 *)(unaff_BP - 2) = 0xffff;
        goto LAB_2bb4_5853_2;
      }
      iVar16 = iVar15;
      if (*(int *)(unaff_BP - 0x34) == 99) goto LAB_3ab8_2c00;
      if ((*(int *)(unaff_BP + 6) == 0) && (*(int *)(unaff_BP - 0x36) == 0)) {
        if (*(int *)(unaff_BP - 0x34) == 0x6300) {
          *(undefined2 *)(unaff_BP - 0x130) = 1;
          *(undefined2 *)(unaff_BP - 0x12e) = 1;
          *(undefined2 *)(unaff_BP - 0xae) = 0;
          *(undefined2 *)(unaff_BP - 0x36) = 0xfffe;
          goto LAB_3ab8_2c00;
        }
        if (*(int *)(unaff_BP - 0x34) == 0x6700) {
          *(undefined2 *)(unaff_BP - 0x130) = 2;
          *(undefined2 *)(unaff_BP - 0x12e) = 0;
          *(undefined2 *)(unaff_BP - 0xae) = 1;
          *(undefined2 *)(unaff_BP - 0x36) = 0xffff;
          goto LAB_3ab8_2c00;
        }
        if (*(int *)(unaff_BP - 0x34) == 0x6800) {
          *(undefined2 *)(unaff_BP - 0x130) = 2;
          *(undefined2 *)(unaff_BP - 0x12e) = 1;
          *(undefined2 *)(unaff_BP - 0xae) = 0;
          *(undefined2 *)(unaff_BP - 0x36) = 0xfffe;
          goto LAB_3ab8_2c00;
        }
      }
      if (((*(int *)(unaff_BP - 0x130) == 0) && (*(int *)(unaff_BP + 8) == 500)) &&
         ((*(int *)(unaff_BP - 0x34) == 0x7f ||
          (((*(int *)(unaff_BP - 0xb0) != 0 && (0x264 < *(int *)(unaff_BP - 0xb2))) &&
           (*(int *)(unaff_BP - 0xc4) <= *(int *)0xa5e)))))) {
        *(undefined2 *)(unaff_BP - 2) = 0x14;
        goto LAB_2bb4_5853_2;
      }
      if (((((*(int *)(unaff_BP - 0x130) == 0) &&
            ((*(int *)(unaff_BP - 0x34) == 0x31 || (*(int *)(unaff_BP - 0x34) == 0xd)))) ||
           ((*(int *)(unaff_BP - 0x130) != 0 && (*(int *)(unaff_BP - 0x34) == 0x7f)))) ||
          (*(int *)(unaff_BP - 0xa8) == 1)) ||
         (((*(int *)(unaff_BP - 0xb0) != 0 && (0x21c < *(int *)(unaff_BP - 0xb2))) &&
          (*(int *)(unaff_BP - 0xc4) <= *(int *)0xa5e)))) {
        uStack_2 = iVar15;
        if (*(int *)(unaff_BP - 0x130) == 0) goto LAB_3ab8_30f0;
        *(undefined2 *)(unaff_BP - 0x36) = *(undefined2 *)(unaff_BP + 10);
        *(undefined2 *)(unaff_BP - 0x130) = 0;
        *(undefined2 *)(unaff_BP - 0x12e) = 0;
        *(undefined2 *)(unaff_BP - 0xae) = 0;
        *(undefined2 *)(unaff_BP - 0x86) = 0;
        if (*(int *)(unaff_BP + 0xe) == 0) goto LAB_3ab8_2c00;
        if (*(int *)(unaff_BP + 0xe) < -9) {
          *(undefined2 *)(unaff_BP - 0x86) = 0;
          *(undefined2 *)(unaff_BP - 0xb0) = 0;
          goto LAB_3ab8_2c00;
        }
        *(undefined2 *)(unaff_BP - 0x86) = *(undefined2 *)(unaff_BP + 0xe);
        uStack_4 = 0xd74e;
        func_0x00029834();
        uStack_2 = 0x22b2;
        uStack_4 = 0xd757;
        func_0x00029983();
        uStack_2 = 0x22b2;
        uStack_4 = 0xd75f;
        func_0x00029834();
        uStack_2 = 0x22b2;
        iVar15 = 0x22b2;
        uStack_4 = 0xd768;
        func_0x00029983();
        *(undefined2 *)(unaff_BP - 0xb0) = *(undefined2 *)(unaff_BP + 0xe);
        break;
      }
      if ((((*(int *)(unaff_BP - 0x130) == 0) && (*(int *)(unaff_BP + 6) == 0)) &&
          (*(int *)(unaff_BP - 0x36) == 0)) &&
         (((((*(int *)(unaff_BP - 0x34) == 0x6200 || (*(int *)(unaff_BP - 0x34) == 0x6400)) ||
            ((*(int *)(unaff_BP - 0x34) == 0x6500 ||
             ((*(int *)(unaff_BP - 0x34) == 0x6600 || (*(int *)(unaff_BP - 0x34) == 0x6900)))))) ||
           (*(int *)(unaff_BP - 0x34) == 0x6a00)) || (*(int *)(unaff_BP - 0x34) == 0x6b00)))) {
        if (*(int *)(unaff_BP - 0x34) == 0x6200) {
          *(undefined2 *)(unaff_BP - 0x1c) = 1;
        }
        if ((*(int *)(unaff_BP - 0x34) == 0x6400) || (*(int *)(unaff_BP - 0x34) == 0x6600)) {
          *(undefined2 *)(unaff_BP - 0x1c) = 2;
        }
        if ((*(int *)(unaff_BP - 0x34) == 0x6900) || (*(int *)(unaff_BP - 0x34) == 0x6b00)) {
          *(undefined2 *)(unaff_BP - 0x1c) = 3;
        }
        uStack_2 = 0;
        iStack_6 = 0xde47;
        uStack_4 = iVar15;
        func_0x0000daa6();
        uStack_2 = 0x885;
        uStack_4 = 0xde4d;
        func_0x0000c3ca();
        uStack_2 = 0x885;
        uStack_4 = 0xde52;
        func_0x00007ac6();
        uStack_2 = 0x7a6;
        uVar10 = 0x7a6;
        uStack_4 = 0xde57;
        func_0x00007b71();
        *(undefined2 *)(unaff_BP - 200) = 1;
        *(undefined2 *)(unaff_BP - 0xc6) = 0;
        while( true ) {
          uStack_4 = *(uint *)(unaff_BP - 200);
          uStack_2 = *(int *)(unaff_BP - 0xc6);
          if ((*(int *)0x14a < (int)uStack_2) ||
             ((*(int *)0x14a <= (int)uStack_2 && (*(uint *)0x148 < uStack_4)))) break;
          iStack_8 = -0x216a;
          iStack_6 = uVar10;
          uVar20 = func_0x0000013f();
          uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
          iVar16 = (int)uVar20;
          *(int *)(unaff_BP - 0x74) = iVar16;
          *(undefined2 *)(unaff_BP - 0x72) = uVar10;
          *(uint *)(iVar16 + 0x14) = *(uint *)(iVar16 + 0x14) & 0xfffd;
          *(uint *)(iVar16 + 0x14) = *(uint *)(iVar16 + 0x14) & 0xfeff;
          *(uint *)(iVar16 + 0x14) = *(uint *)(iVar16 + 0x14) & 0xfdff;
          uStack_2 = (uint)*(byte *)(iVar16 + 0x12);
          *(uint *)(unaff_BP - 0xde) = uStack_2;
          uStack_4 = 0;
          uVar10 = 0x11f2;
          iStack_6 = 0xdec3;
          iVar16 = func_0x000125f1();
          if (iVar16 != 0) {
            if (*(int *)(unaff_BP - 0x1c) == 1) {
              uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x74) >> 0x10);
              iVar16 = (int)*(undefined4 *)(unaff_BP - 0x74);
              uVar13 = *(uint *)(iVar16 + 0x14);
              puVar1 = (uint *)(iVar16 + 0x14);
              *puVar1 = *puVar1 ^ (byte)((byte)(uVar13 >> 1) ^ (byte)uVar13) & 2;
            }
            if (*(int *)(unaff_BP - 0xde) == *(int *)0xb310) {
              if (*(int *)(unaff_BP - 0x1c) == 2) {
                puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
                *puVar1 = *puVar1 | 2;
              }
              if (*(int *)(unaff_BP - 0x1c) == 3) {
                uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x74) >> 0x10);
                iVar16 = (int)*(undefined4 *)(unaff_BP - 0x74);
                uVar13 = *(uint *)(iVar16 + 0x14);
                puVar1 = (uint *)(iVar16 + 0x14);
                *puVar1 = *puVar1 ^ (byte)((byte)(uVar13 >> 2) ^ (byte)uVar13) & 2;
              }
            }
          }
          if ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14) & 2) != 0) {
            uStack_2 = *(undefined2 *)(unaff_BP - 0xde);
            uStack_4 = 0x11f2;
            uVar10 = 0x885;
            iStack_6 = 0xdf3b;
            iVar16 = func_0x00008854();
            if (iVar16 != 0) {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
              *puVar1 = *puVar1 & 0xfffd;
            }
          }
          puVar1 = (uint *)(unaff_BP - 200);
          uVar13 = *puVar1;
          *puVar1 = *puVar1 + 1;
          *(int *)(unaff_BP - 0xc6) = *(int *)(unaff_BP - 0xc6) + (uint)(0xfffe < uVar13);
        }
        *(undefined2 *)(unaff_BP - 200) = 1;
        *(undefined2 *)(unaff_BP - 0xc6) = 0;
        while( true ) {
          uStack_4 = *(uint *)(unaff_BP - 200);
          uStack_2 = *(int *)(unaff_BP - 0xc6);
          if ((*(int *)0x14e < (int)uStack_2) ||
             ((*(int *)0x14e <= (int)uStack_2 && (*(uint *)0x14c < uStack_4)))) break;
          iStack_8 = -0x2072;
          iStack_6 = uVar10;
          uVar20 = func_0x00000271();
          uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
          iVar16 = (int)uVar20;
          *(int *)(unaff_BP - 0x80) = iVar16;
          *(undefined2 *)(unaff_BP - 0x7e) = uVar10;
          *(uint *)(iVar16 + 0x1e) = *(uint *)(iVar16 + 0x1e) & 0xfffd;
          *(undefined1 *)(iVar16 + 0x1d) = 0;
          uStack_2 = (uint)*(byte *)(iVar16 + 0x1c);
          *(uint *)(unaff_BP - 0xde) = uStack_2;
          uStack_4 = 0;
          uVar10 = 0x11f2;
          iStack_6 = 0xdfb4;
          iVar16 = func_0x000125f1();
          if (iVar16 != 0) {
            if (*(int *)(unaff_BP - 0x1c) == 1) {
              uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x80) >> 0x10);
              iVar16 = (int)*(undefined4 *)(unaff_BP - 0x80);
              uVar13 = *(uint *)(iVar16 + 0x1e);
              puVar1 = (uint *)(iVar16 + 0x1e);
              *puVar1 = *puVar1 ^ (byte)((byte)(uVar13 >> 1) ^ (byte)uVar13) & 2;
            }
            if (*(int *)(unaff_BP - 0xde) == *(int *)0xb310) {
              if (*(int *)(unaff_BP - 0x1c) == 2) {
                puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x80) + 0x1e);
                *puVar1 = *puVar1 | 2;
              }
              if (*(int *)(unaff_BP - 0x1c) == 3) {
                uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x80) >> 0x10);
                iVar16 = (int)*(undefined4 *)(unaff_BP - 0x80);
                uVar13 = *(uint *)(iVar16 + 0x1e);
                puVar1 = (uint *)(iVar16 + 0x1e);
                *puVar1 = *puVar1 ^ (byte)((byte)(uVar13 >> 2) ^ (byte)uVar13) & 2;
              }
            }
          }
          if ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x80) + 0x1e) & 2) != 0) {
            uStack_2 = *(undefined2 *)(unaff_BP - 0xde);
            uStack_4 = 0x11f2;
            uVar10 = 0x885;
            iStack_6 = 0xe02c;
            iVar16 = func_0x00008854();
            if (iVar16 != 0) {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x80) + 0x1e);
              *puVar1 = *puVar1 & 0xfffd;
            }
          }
          puVar1 = (uint *)(unaff_BP - 200);
          uVar13 = *puVar1;
          *puVar1 = *puVar1 + 1;
          *(int *)(unaff_BP - 0xc6) = *(int *)(unaff_BP - 0xc6) + (uint)(0xfffe < uVar13);
        }
        *(undefined2 *)(unaff_BP - 0x100) = 1;
        while (*(int *)(unaff_BP - 0x100) <= *(int *)0x152) {
          uStack_2 = *(undefined2 *)(unaff_BP - 0x100);
          iStack_6 = 0xe062;
          uStack_4 = uVar10;
          uVar20 = func_0x000003ef();
          uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
          iVar16 = (int)uVar20;
          *(int *)(unaff_BP - 0x7c) = iVar16;
          *(undefined2 *)(unaff_BP - 0x7a) = uVar10;
          *(uint *)(iVar16 + 10) = *(uint *)(iVar16 + 10) & 0xfffd;
          uStack_2 = (uint)*(byte *)(iVar16 + 8);
          *(uint *)(unaff_BP - 0xde) = uStack_2;
          uStack_4 = 0;
          uVar10 = 0x11f2;
          iStack_6 = 0xe082;
          iVar16 = func_0x000125f1();
          if (iVar16 != 0) {
            if (*(int *)(unaff_BP - 0x1c) == 1) {
              uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x7c) >> 0x10);
              iVar16 = (int)*(undefined4 *)(unaff_BP - 0x7c);
              uVar13 = *(uint *)(iVar16 + 10);
              puVar1 = (uint *)(iVar16 + 10);
              *puVar1 = *puVar1 ^ (byte)((byte)(uVar13 >> 1) ^ (byte)uVar13) & 2;
            }
            if (*(int *)(unaff_BP - 0xde) == *(int *)0xb310) {
              if (*(int *)(unaff_BP - 0x1c) == 2) {
                puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10);
                *puVar1 = *puVar1 | 2;
              }
              if (*(int *)(unaff_BP - 0x1c) == 3) {
                uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x7c) >> 0x10);
                iVar16 = (int)*(undefined4 *)(unaff_BP - 0x7c);
                uVar13 = *(uint *)(iVar16 + 10);
                puVar1 = (uint *)(iVar16 + 10);
                *puVar1 = *puVar1 ^ (byte)((byte)(uVar13 >> 2) ^ (byte)uVar13) & 2;
              }
            }
          }
          if ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10) & 2) != 0) {
            uStack_2 = *(undefined2 *)(unaff_BP - 0xde);
            uStack_4 = 0x11f2;
            uVar10 = 0x885;
            iStack_6 = 0xe0fa;
            iVar16 = func_0x00008854();
            if (iVar16 != 0) {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10);
              *puVar1 = *puVar1 & 0xfffd;
            }
          }
          *(int *)(unaff_BP - 0x100) = *(int *)(unaff_BP - 0x100) + 1;
        }
        *(undefined2 *)(unaff_BP - 0x100) = 1;
        while (uStack_4 = uVar10, *(int *)(unaff_BP - 0x100) <= *(int *)0x150) {
          uStack_2 = *(undefined2 *)(unaff_BP - 0x100);
          iStack_6 = 0xe130;
          uVar20 = func_0x00000398();
          uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
          iVar16 = (int)uVar20;
          *(int *)(unaff_BP - 0x122) = iVar16;
          *(undefined2 *)(unaff_BP - 0x120) = uVar10;
          *(uint *)(iVar16 + 0x16) = *(uint *)(iVar16 + 0x16) & 0xfffd;
          uStack_2 = (uint)*(byte *)(iVar16 + 0x15);
          *(uint *)(unaff_BP - 0xde) = uStack_2;
          uStack_4 = 0;
          uVar10 = 0x11f2;
          iStack_6 = 0xe152;
          iVar16 = func_0x000125f1();
          if (iVar16 != 0) {
            if (*(int *)(unaff_BP - 0x1c) == 1) {
              uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x122) >> 0x10);
              iVar16 = (int)*(undefined4 *)(unaff_BP - 0x122);
              uVar13 = *(uint *)(iVar16 + 0x16);
              puVar1 = (uint *)(iVar16 + 0x16);
              *puVar1 = *puVar1 ^ (byte)((byte)(uVar13 >> 1) ^ (byte)uVar13) & 2;
            }
            if (*(int *)(unaff_BP - 0xde) == *(int *)0xb310) {
              if ((*(int *)(unaff_BP - 0x34) == 0x6500) || (*(int *)(unaff_BP - 0x34) == 0x6600)) {
                puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x122) + 0x16);
                *puVar1 = *puVar1 | 2;
              }
              if ((*(int *)(unaff_BP - 0x34) == 0x6a00) || (*(int *)(unaff_BP - 0x34) == 0x6b00)) {
                uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x122) >> 0x10);
                iVar16 = (int)*(undefined4 *)(unaff_BP - 0x122);
                uVar13 = *(uint *)(iVar16 + 0x16);
                puVar1 = (uint *)(iVar16 + 0x16);
                *puVar1 = *puVar1 ^ (byte)((byte)(uVar13 >> 2) ^ (byte)uVar13) & 2;
              }
            }
          }
          if ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x122) + 0x16) & 2) != 0) {
            uStack_2 = *(undefined2 *)(unaff_BP - 0xde);
            uStack_4 = 0x11f2;
            uVar10 = 0x885;
            iStack_6 = 0xe1e4;
            iVar16 = func_0x00008854();
            if (iVar16 != 0) {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x122) + 0x16);
              *puVar1 = *puVar1 & 0xfffd;
            }
          }
          *(int *)(unaff_BP - 0x100) = *(int *)(unaff_BP - 0x100) + 1;
        }
        uStack_2 = 1;
        iVar15 = 0x7a6;
        iStack_6 = 0xe202;
        func_0x00008095();
        if (*(int *)(unaff_BP - 0x34) == 0x6200) {
          uVar10 = FUN_3ab8_51bd();
          return uVar10;
        }
        *(undefined2 *)(unaff_BP - 2) = 1;
        uVar10 = extraout_DX_02;
        goto LAB_2bb4_5853_2;
      }
    }
    *(undefined1 *)0x2c2e = 0;
    if ((-1 < *(int *)(unaff_BP - 0x36)) && (*(int *)(unaff_BP - 0xb0) == 2)) {
      *(undefined1 *)0x2c2e = 1;
    }
    iVar16 = iVar15;
    if ((*(int *)(unaff_BP + 6) != 2) || (*(undefined1 *)0x2c2e = 1, *(int *)(unaff_BP - 0xb0) == 0)
       ) break;
  }
  uVar10 = *(undefined2 *)(unaff_BP - 0x132);
  *(undefined2 *)(unaff_BP - 0xbe) = *(undefined2 *)(unaff_BP - 0x134);
  *(undefined2 *)(unaff_BP - 0xbc) = uVar10;
  uVar10 = *(undefined2 *)(unaff_BP - 0x13c);
  *(undefined2 *)(unaff_BP - 0xd8) = *(undefined2 *)(unaff_BP - 0x13e);
  *(undefined2 *)(unaff_BP - 0xd6) = uVar10;
  *(undefined2 *)(unaff_BP - 300) = 0;
  *(undefined2 *)(unaff_BP - 0x116) = 0;
  goto LAB_3ab8_371c;
LAB_3ab8_30f0:
  if (*(int *)(unaff_BP - 0x36) == -1) {
    uStack_4 = 0xdc7e;
    func_0x00007b71();
    iVar15 = 0x7a6;
  }
  if (*(int *)(unaff_BP - 0x36) == -2) {
    uStack_4 = 0xdc8c;
    uStack_2 = iVar15;
    func_0x00007ac6();
    iVar15 = 0x7a6;
  }
  if (*(int *)(unaff_BP + 6) != 0) goto LAB_3ab8_2e35;
  uStack_4 = 0xdc9a;
  uStack_2 = iVar15;
  FUN_2bb4_1755();
  uStack_2 = 0;
  uStack_4 = 0x2ab8;
  iStack_6 = 0xdca3;
  FUN_2bb4_0233();
  *(undefined2 *)(unaff_BP - 200) = 1;
  *(undefined2 *)(unaff_BP - 0xc6) = 0;
  iStack_6 = 0x2ab8;
  while( true ) {
    uStack_4 = *(uint *)(unaff_BP - 200);
    uStack_2 = *(int *)(unaff_BP - 0xc6);
    if ((*(int *)0x14a < (int)uStack_2) ||
       ((*(int *)0x14a <= (int)uStack_2 && (*(uint *)0x148 < uStack_4)))) break;
    iStack_8 = -0x231d;
    uVar20 = func_0x0000013f();
    uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
    *(int *)(unaff_BP - 0x74) = (int)uVar20;
    *(undefined2 *)(unaff_BP - 0x72) = uVar10;
    uVar13 = *(uint *)((int)uVar20 + 0x14);
    if (((uVar13 & 0x100) != 0) || ((uVar13 & 0x200) != 0)) {
      puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
      *puVar1 = *puVar1 & 0xfcfd;
    }
    puVar1 = (uint *)(unaff_BP - 200);
    uVar13 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP - 0xc6) = *(int *)(unaff_BP - 0xc6) + (uint)(0xfffe < uVar13);
    iStack_6 = 0;
  }
  *(undefined2 *)(unaff_BP - 200) = 1;
  *(undefined2 *)(unaff_BP - 0xc6) = 0;
  uVar10 = iStack_6;
  while( true ) {
    uStack_4 = *(uint *)(unaff_BP - 200);
    uStack_2 = *(int *)(unaff_BP - 0xc6);
    if ((*(int *)0x14e < (int)uStack_2) ||
       ((*(int *)0x14e <= (int)uStack_2 && (*(uint *)0x14c < uStack_4)))) break;
    iStack_8 = -0x22b0;
    iStack_6 = uVar10;
    uVar20 = func_0x00000271();
    uVar10 = (undefined2)((ulong)uVar20 >> 0x10);
    iVar16 = (int)uVar20;
    *(int *)(unaff_BP - 0x80) = iVar16;
    *(undefined2 *)(unaff_BP - 0x7e) = uVar10;
    if (*(char *)(iVar16 + 0x1d) != '\0') {
      *(uint *)(iVar16 + 0x1e) = *(uint *)(iVar16 + 0x1e) & 0xfffd;
      *(undefined1 *)(iVar16 + 0x1d) = 0;
    }
    puVar1 = (uint *)(unaff_BP - 200);
    uVar13 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP - 0xc6) = *(int *)(unaff_BP - 0xc6) + (uint)(0xfffe < uVar13);
    uVar10 = 0;
  }
  uStack_2 = 1;
  iVar15 = 0x7a6;
  iStack_6 = 0xdd82;
  uStack_4 = uVar10;
  func_0x00008095();
  if (*(int *)(unaff_BP - 0xa8) != 1) {
    uVar10 = FUN_3ab8_51bd();
    return uVar10;
  }
  *(undefined2 *)(unaff_BP - 2) = 1;
  uVar10 = extraout_DX_01;
  goto LAB_2bb4_5853_2;
LAB_3ab8_3b69:
  uStack_2 = unaff_BP - 0x13e;
  uStack_4 = unaff_BP - 0x134;
  iStack_6 = *(int *)(unaff_BP - 0xb0);
  iStack_8 = 0x3bf;
  iVar16 = 0x11f2;
  iStack_a = -0x1904;
  iVar15 = func_0x00015409();
  if (iVar15 == 0) goto LAB_3ab8_3995;
  *(undefined2 *)(unaff_BP - 0xb0) = 1;
  iVar15 = iVar16;
LAB_3ab8_3b90:
  uVar17 = 0;
  uVar19 = *(int *)(unaff_BP - 0xb0) == 0;
  uStack_2 = iVar15;
  if (!(bool)uVar19) {
    uStack_4 = 0xe7e9;
    FUN_1885_2ec3();
    uVar10 = *(undefined2 *)(unaff_BP - 0xd2);
    *(undefined2 *)(unaff_BP - 0x20) = *(undefined2 *)(unaff_BP - 0xd4);
    *(undefined2 *)(unaff_BP - 0x1e) = uVar10;
    uVar10 = *(undefined2 *)(unaff_BP - 0xe4);
    *(undefined2 *)(unaff_BP - 0x3e) = *(undefined2 *)(unaff_BP - 0xe6);
    *(undefined2 *)(unaff_BP - 0x3c) = uVar10;
    uStack_2 = 0x1b6e;
    uStack_4 = 0xe80e;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe816;
    func_0x0002996b();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe81e;
    FUN_28b3_0ee9();
    uVar10 = *(undefined2 *)(unaff_BP - 0x13c);
    *(undefined2 *)(unaff_BP - 0x78) = *(undefined2 *)(unaff_BP - 0x13e);
    *(undefined2 *)(unaff_BP - 0x76) = uVar10;
    uStack_2 = 0x22b2;
    uStack_4 = 0xe834;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe83d;
    func_0x00029983();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe846;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe84e;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe853;
    FUN_28b3_1181();
    if ((bool)uVar17) {
      uVar10 = *(undefined2 *)(unaff_BP - 0x106);
      *(undefined2 *)(unaff_BP - 0x134) = *(undefined2 *)(unaff_BP - 0x108);
      *(undefined2 *)(unaff_BP - 0x132) = uVar10;
      uVar10 = *(undefined2 *)(unaff_BP - 0x128);
      *(undefined2 *)(unaff_BP - 0x108) = *(undefined2 *)(unaff_BP - 0x12a);
      *(undefined2 *)(unaff_BP - 0x106) = uVar10;
      uVar10 = *(undefined2 *)(unaff_BP - 0x132);
      *(undefined2 *)(unaff_BP - 0x12a) = *(undefined2 *)(unaff_BP - 0x134);
      *(undefined2 *)(unaff_BP - 0x128) = uVar10;
    }
    uStack_2 = 0x22b2;
    uStack_4 = 0xe891;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe89a;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe8a3;
    func_0x0002996b();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe8a8;
    FUN_28b3_1181();
    if ((bool)uVar17) {
      uVar10 = *(undefined2 *)(unaff_BP - 0x11c);
      *(undefined2 *)(unaff_BP - 0x13e) = *(undefined2 *)(unaff_BP - 0x11e);
      *(undefined2 *)(unaff_BP - 0x13c) = uVar10;
      uVar10 = *(undefined2 *)(unaff_BP - 0x136);
      *(undefined2 *)(unaff_BP - 0x11e) = *(undefined2 *)(unaff_BP - 0x138);
      *(undefined2 *)(unaff_BP - 0x11c) = uVar10;
      uVar10 = *(undefined2 *)(unaff_BP - 0x13c);
      *(undefined2 *)(unaff_BP - 0x138) = *(undefined2 *)(unaff_BP - 0x13e);
      *(undefined2 *)(unaff_BP - 0x136) = uVar10;
    }
    uVar10 = *(undefined2 *)(unaff_BP - 0x11c);
    *(undefined2 *)0xbd4 = *(undefined2 *)(unaff_BP - 0x11e);
    *(undefined2 *)0xbd6 = uVar10;
    uVar10 = *(undefined2 *)(unaff_BP - 0x128);
    *(undefined2 *)0xbcc = *(undefined2 *)(unaff_BP - 0x12a);
    *(undefined2 *)0xbce = uVar10;
    uVar10 = *(undefined2 *)(unaff_BP - 0x136);
    *(undefined2 *)0xbdc = *(undefined2 *)(unaff_BP - 0x138);
    *(undefined2 *)0xbde = uVar10;
    uVar10 = *(undefined2 *)(unaff_BP - 0x128);
    *(undefined2 *)0xbc8 = *(undefined2 *)(unaff_BP - 0x12a);
    *(undefined2 *)0xbca = uVar10;
    uVar10 = *(undefined2 *)(unaff_BP - 0x11c);
    *(undefined2 *)0xbd8 = *(undefined2 *)(unaff_BP - 0x11e);
    *(undefined2 *)0xbda = uVar10;
    uStack_2 = 0x22b2;
    uStack_4 = 0xe931;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe93a;
    func_0x0002996b();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe943;
    func_0x00029983();
    uVar10 = *(undefined2 *)(unaff_BP - 0x136);
    *(undefined2 *)0xbe0 = *(undefined2 *)(unaff_BP - 0x138);
    *(undefined2 *)0xbe2 = uVar10;
    *(undefined2 *)(unaff_BP - 0x13a) = 0;
    uStack_2 = 0;
    uStack_4 = 0x22b2;
    iStack_6 = -0x16a1;
    func_0x0000daa6();
    uStack_2 = 0x885;
    uVar13 = 0x885;
    uStack_4 = 0xe965;
    func_0x0000c3ca();
    if (*(char *)0xb782 == '\0') {
      func_0x0000ac14();
      func_0x0000a799();
      param_7 = *(uint *)0x1b42;
      param_6 = 0x1d;
      param_5 = 0x2bbe;
      param_4 = 0x885;
      uVar13 = 0xdef;
      param_3 = 0xe992;
      FUN_1000_02b5();
    }
    uVar17 = 0;
    uVar19 = *(int *)0xcb6 == 0;
    if (!(bool)uVar19) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x00029d78();
      uVar13 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar17 && !(bool)uVar19) {
        uVar10 = *(undefined2 *)(unaff_BP - 0x3c);
        *(undefined2 *)0xbd4 = *(undefined2 *)(unaff_BP - 0x3e);
        *(undefined2 *)0xbd6 = uVar10;
        uVar10 = *(undefined2 *)(unaff_BP - 0x38);
        *(undefined2 *)0xbcc = *(undefined2 *)(unaff_BP - 0x3a);
        *(undefined2 *)0xbce = uVar10;
        uVar10 = *(undefined2 *)(unaff_BP - 0x76);
        *(undefined2 *)0xbdc = *(undefined2 *)(unaff_BP - 0x78);
        *(undefined2 *)0xbde = uVar10;
        func_0x000297e6();
        func_0x00029d78();
        param_5 = 0x22b2;
        param_4 = 0xea03;
        func_0x000299d1();
        param_5 = 0x22b2;
        param_4 = 0xea0b;
        func_0x000297e6();
        param_5 = 0x22b2;
        param_4 = 0xea10;
        func_0x00029d78();
        param_1 = 0x22b2;
        func_0x000299d1();
        param_1 = 0x22b2;
        func_0x000297e6();
        param_1 = 0x22b2;
        func_0x00029d78();
        uStack_4 = 0x22b2;
        iStack_6 = 0xea31;
        func_0x000299d1();
        uStack_4 = 0x22b2;
        iStack_6 = 0xea39;
        func_0x000297e6();
        uStack_4 = 0x22b2;
        iStack_6 = 0xea42;
        func_0x0002996b();
        uStack_4 = 0x22b2;
        iStack_6 = 0xea47;
        func_0x00029d78();
        uStack_c = 0x22b2;
        uStack_e = 0xea51;
        func_0x000299d1();
        uStack_c = (uint)*(byte *)0x2c2e;
        uStack_e = *(undefined2 *)(unaff_BP - 0x130);
        uStack_10 = *(undefined2 *)(unaff_BP - 300);
        func_0x0002c336(0x22b2,*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 0xe),
                        *(undefined2 *)(unaff_BP - 0x36),*(undefined2 *)(unaff_BP - 0x116));
        uVar10 = FUN_3ab8_51a2();
        return uVar10;
      }
    }
    if (*(int *)(unaff_BP - 0x106) < 0) {
      iVar16 = -*(int *)(unaff_BP - 0x108);
      iVar15 = -((*(uint *)(unaff_BP - 0x106) & 0x7fff) + (uint)(*(int *)(unaff_BP - 0x108) != 0));
    }
    else {
      iVar16 = *(int *)(unaff_BP - 0x108);
      iVar15 = *(int *)(unaff_BP - 0x106);
    }
    *(int *)(unaff_BP - 0xa6) = iVar16;
    *(int *)(unaff_BP - 0xa4) = iVar15;
    if (*(int *)(unaff_BP - 0x11c) < 0) {
      iVar16 = -*(int *)(unaff_BP - 0x11e);
      iVar15 = -((*(uint *)(unaff_BP - 0x11c) & 0x7fff) + (uint)(*(int *)(unaff_BP - 0x11e) != 0));
    }
    else {
      iVar16 = *(int *)(unaff_BP - 0x11e);
      iVar15 = *(int *)(unaff_BP - 0x11c);
    }
    *(int *)(unaff_BP - 0xac) = iVar16;
    *(int *)(unaff_BP - 0xaa) = iVar15;
    if (*(int *)(unaff_BP - 0x128) < 0) {
      iVar16 = -*(int *)(unaff_BP - 0x12a);
      iVar15 = -((*(uint *)(unaff_BP - 0x128) & 0x7fff) + (uint)(*(int *)(unaff_BP - 0x12a) != 0));
    }
    else {
      iVar16 = *(int *)(unaff_BP - 0x12a);
      iVar15 = *(int *)(unaff_BP - 0x128);
    }
    *(int *)(unaff_BP - 0xc2) = iVar16;
    *(int *)(unaff_BP - 0xc0) = iVar15;
    if (*(int *)(unaff_BP - 0x136) < 0) {
      iVar16 = -*(int *)(unaff_BP - 0x138);
      iVar15 = -((*(uint *)(unaff_BP - 0x136) & 0x7fff) + (uint)(*(int *)(unaff_BP - 0x138) != 0));
    }
    else {
      iVar16 = *(int *)(unaff_BP - 0x138);
      iVar15 = *(int *)(unaff_BP - 0x136);
    }
    *(int *)(unaff_BP - 0xdc) = iVar16;
    *(int *)(unaff_BP - 0xda) = iVar15;
    *(undefined2 *)(unaff_BP - 0x100) = 1;
    goto LAB_3ab8_3fd0;
  }
  uStack_4 = 0xe726;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xe72f;
  func_0x000297e6();
  uStack_2 = 0x22b2;
  uStack_4 = 0xe734;
  FUN_28b3_1181();
  if ((bool)uVar19) {
    uStack_2 = 0x22b2;
    uStack_4 = 0xe742;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    uStack_4 = 0xe74b;
    func_0x000297e6();
    uStack_2 = 0x22b2;
    iVar16 = 0x22b2;
    uStack_4 = 0xe750;
    FUN_28b3_1181();
    if ((bool)uVar19) goto LAB_3ab8_3c41;
  }
  uStack_2 = 0;
  uStack_4 = 0x22b2;
  iStack_6 = 0xe762;
  func_0x000297e6();
  uStack_4 = 0x22b2;
  iStack_6 = 0xe767;
  func_0x00029d78();
  uStack_c = 0x22b2;
  uStack_e = 0xe771;
  func_0x000299d1();
  uStack_c = 0x22b2;
  uStack_e = 0xe77a;
  func_0x000297e6();
  uStack_c = 0x22b2;
  uStack_e = 0xe77f;
  func_0x00029d78();
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  iVar16 = 0x2ab8;
  func_0x0002bf06(0x22b2);
LAB_3ab8_3c41:
  uVar10 = *(undefined2 *)(unaff_BP - 0x132);
  *(undefined2 *)(unaff_BP - 0x11a) = *(undefined2 *)(unaff_BP - 0x134);
  *(undefined2 *)(unaff_BP - 0x118) = uVar10;
  uVar10 = *(undefined2 *)(unaff_BP - 0x13c);
  *(undefined2 *)(unaff_BP - 0x126) = *(undefined2 *)(unaff_BP - 0x13e);
  *(undefined2 *)(unaff_BP - 0x124) = uVar10;
  goto LAB_3ab8_3995;
LAB_3ab8_3fd0:
  if (*(int *)0x152 < *(int *)(unaff_BP - 0x100)) goto LAB_3ab8_41e4;
  if (((*(byte *)(unaff_BP - 0x100) & 0xf) == 0) && (iVar16 = func_0x0000db7a(), iVar16 != 0))
  goto LAB_2bb4_581e;
  uVar13 = 0;
  param_7 = 0xeb7f;
  uVar20 = func_0x000003ef();
  *(undefined2 *)(unaff_BP - 0x7c) = (int)uVar20;
  *(undefined2 *)(unaff_BP - 0x7a) = (int)((ulong)uVar20 >> 0x10);
  if (*(int *)(unaff_BP - 300) == 0) {
    puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10);
    *puVar1 = *puVar1 & 0xfffd;
LAB_3ab8_4035:
    if ((((*(int *)(unaff_BP - 0x130) != 2) ||
         ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10) & 8) != 0)) &&
        (-2 < *(int *)(unaff_BP - 0x36))) && (*(int *)(unaff_BP - 0x116) != 4)) {
      param_7 = *(uint *)0xa6c;
      param_6 = (uint)*(byte *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 8);
      param_5 = 0;
      uVar13 = 0x7a6;
      param_4 = 0xec03;
      iVar16 = func_0x00007ba4();
      if (iVar16 != 0) {
        puVar9 = (undefined2 *)*(undefined2 *)(unaff_BP - 0x7c);
        uVar10 = *(undefined2 *)(unaff_BP - 0x7a);
        puVar8 = (undefined2 *)(unaff_BP - 0x32);
        for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
          puVar5 = puVar8;
          puVar8 = puVar8 + 1;
          puVar4 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar5 = *puVar4;
        }
        if (*(int *)(unaff_BP - 0x30) < 0) {
          uVar13 = -*(int *)(unaff_BP - 0x32);
          iVar16 = -((*(uint *)(unaff_BP - 0x30) & 0x7fff) + (uint)(*(int *)(unaff_BP - 0x32) != 0))
          ;
        }
        else {
          uVar13 = *(uint *)(unaff_BP - 0x32);
          iVar16 = *(int *)(unaff_BP - 0x30);
        }
        *(uint *)(unaff_BP - 0x84) = uVar13;
        *(int *)(unaff_BP - 0x82) = iVar16;
        if (((*(int *)(unaff_BP - 0xa4) <= iVar16) &&
            ((*(int *)(unaff_BP - 0xa4) < iVar16 || (*(uint *)(unaff_BP - 0xa6) <= uVar13)))) &&
           ((iVar16 < *(int *)(unaff_BP - 0xc0) ||
            ((iVar16 <= *(int *)(unaff_BP - 0xc0) && (uVar13 <= *(uint *)(unaff_BP - 0xc2))))))) {
          if (*(int *)(unaff_BP - 0x2c) < 0) {
            uVar13 = -*(int *)(unaff_BP - 0x2e);
            iVar16 = -((*(uint *)(unaff_BP - 0x2c) & 0x7fff) +
                      (uint)(*(int *)(unaff_BP - 0x2e) != 0));
          }
          else {
            uVar13 = *(uint *)(unaff_BP - 0x2e);
            iVar16 = *(int *)(unaff_BP - 0x2c);
          }
          *(uint *)(unaff_BP - 0x98) = uVar13;
          *(int *)(unaff_BP - 0x96) = iVar16;
          if (((*(int *)(unaff_BP - 0xaa) <= iVar16) &&
              ((*(int *)(unaff_BP - 0xaa) < iVar16 || (*(uint *)(unaff_BP - 0xac) <= uVar13)))) &&
             ((iVar16 < *(int *)(unaff_BP - 0xda) ||
              ((iVar16 <= *(int *)(unaff_BP - 0xda) && (uVar13 <= *(uint *)(unaff_BP - 0xdc))))))) {
            if (*(int *)(unaff_BP - 300) == -1) {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10);
              *puVar1 = *puVar1 & 0xfffd;
              param_7 = 0x7a6;
              param_6 = 0xed01;
              func_0x00007f92();
            }
            else {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10);
              *puVar1 = *puVar1 | 2;
            }
          }
        }
        uVar13 = 0x7a6;
        if (0 < *(int *)(unaff_BP - 0x36)) {
          puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10);
          *puVar1 = *puVar1 ^ 2;
        }
        if ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10) & 2) != 0) {
          uVar13 = 0x885;
          param_7 = 0xed3e;
          iVar16 = func_0x00008854();
          if (iVar16 == 0) {
            param_7 = 0x885;
            uVar13 = 0x7a6;
            param_6 = 0xed5f;
            func_0x00007f92();
          }
          else {
            puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10);
            *puVar1 = *puVar1 & 0xfffd;
          }
        }
      }
    }
  }
  else if ((*(int *)(unaff_BP - 300) != 1) ||
          ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x7c) + 10) & 2) == 0)) goto LAB_3ab8_4035;
  *(int *)(unaff_BP - 0x100) = *(int *)(unaff_BP - 0x100) + 1;
  goto LAB_3ab8_3fd0;
LAB_3ab8_41e4:
  *(undefined2 *)(unaff_BP - 200) = 1;
  *(undefined2 *)(unaff_BP - 0xc6) = 0;
  while( true ) {
    if ((*(int *)0x14a < *(int *)(unaff_BP - 0xc6)) ||
       ((*(int *)0x14a <= *(int *)(unaff_BP - 0xc6) && (*(uint *)0x148 < *(uint *)(unaff_BP - 200)))
       )) break;
    uVar14 = uVar13;
    if ((*(uint *)(unaff_BP - 200) & 0xf) == 0) {
      iVar16 = func_0x0000db7a();
      uVar14 = 0x885;
      if (iVar16 != 0) goto LAB_2bb4_581e;
    }
    uVar13 = 0;
    param_6 = 0xedc0;
    param_7 = uVar14;
    uVar20 = func_0x0000013f();
    *(undefined2 *)(unaff_BP - 0x74) = (int)uVar20;
    *(undefined2 *)(unaff_BP - 0x72) = (int)((ulong)uVar20 >> 0x10);
    if (*(int *)(unaff_BP - 300) == 0) {
      puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
      *puVar1 = *puVar1 & 0xfcfd;
LAB_3ab8_4278:
      if ((((*(int *)(unaff_BP - 0x130) != 2) ||
           ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14) & 8) != 0)) &&
          (-2 < *(int *)(unaff_BP - 0x36))) && (*(int *)(unaff_BP - 0x116) != 4)) {
        uVar10 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x74) >> 0x10);
        iVar16 = (int)*(undefined4 *)(unaff_BP - 0x74);
        param_7 = (uint)*(byte *)(iVar16 + 0x10);
        param_6 = (uint)*(byte *)(iVar16 + 0x12);
        param_5 = 0;
        uVar13 = 0x7a6;
        param_4 = 0xee49;
        iVar16 = func_0x00007ba4();
        if (iVar16 != 0) {
          puVar9 = (undefined2 *)*(undefined2 *)(unaff_BP - 0x74);
          uVar10 = *(undefined2 *)(unaff_BP - 0x72);
          puVar8 = (undefined2 *)(unaff_BP - 0x1a);
          for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar8;
            puVar8 = puVar8 + 1;
            puVar4 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar5 = *puVar4;
          }
          if (*(int *)(unaff_BP - 0x18) < 0) {
            iVar16 = -*(int *)(unaff_BP - 0x1a);
            iVar15 = -((*(uint *)(unaff_BP - 0x18) & 0x7fff) +
                      (uint)(*(int *)(unaff_BP - 0x1a) != 0));
          }
          else {
            iVar16 = *(int *)(unaff_BP - 0x1a);
            iVar15 = *(int *)(unaff_BP - 0x18);
          }
          *(int *)(unaff_BP - 0x84) = iVar16;
          *(int *)(unaff_BP - 0x82) = iVar15;
          if (*(int *)(unaff_BP - 0x14) < 0) {
            iVar16 = -*(int *)(unaff_BP - 0x16);
            iVar15 = -((*(uint *)(unaff_BP - 0x14) & 0x7fff) +
                      (uint)(*(int *)(unaff_BP - 0x16) != 0));
          }
          else {
            iVar16 = *(int *)(unaff_BP - 0x16);
            iVar15 = *(int *)(unaff_BP - 0x14);
          }
          *(int *)(unaff_BP - 0x98) = iVar16;
          *(int *)(unaff_BP - 0x96) = iVar15;
          if (*(int *)(unaff_BP - 0x10) < 0) {
            iVar16 = -*(int *)(unaff_BP - 0x12);
            iVar15 = -((*(uint *)(unaff_BP - 0x10) & 0x7fff) +
                      (uint)(*(int *)(unaff_BP - 0x12) != 0));
          }
          else {
            iVar16 = *(int *)(unaff_BP - 0x12);
            iVar15 = *(int *)(unaff_BP - 0x10);
          }
          *(int *)(unaff_BP - 0x94) = iVar16;
          *(int *)(unaff_BP - 0x92) = iVar15;
          if (*(int *)(unaff_BP - 0xc) < 0) {
            iVar16 = -*(int *)(unaff_BP - 0xe);
            iVar15 = -((*(uint *)(unaff_BP - 0xc) & 0x7fff) + (uint)(*(int *)(unaff_BP - 0xe) != 0))
            ;
          }
          else {
            iVar16 = *(int *)(unaff_BP - 0xe);
            iVar15 = *(int *)(unaff_BP - 0xc);
          }
          *(int *)(unaff_BP - 0xa2) = iVar16;
          *(int *)(unaff_BP - 0xa0) = iVar15;
          iVar16 = *(int *)(unaff_BP - 0xa4);
          if ((((*(int *)(unaff_BP - 0x82) < iVar16) ||
               ((*(int *)(unaff_BP - 0x82) <= iVar16 &&
                (*(uint *)(unaff_BP - 0x84) < *(uint *)(unaff_BP - 0xa6))))) ||
              (*(int *)(unaff_BP - 0x92) < iVar16)) ||
             ((*(int *)(unaff_BP - 0x92) <= iVar16 &&
              (*(uint *)(unaff_BP - 0x94) < *(uint *)(unaff_BP - 0xa6))))) {
LAB_3ab8_447a:
            if ((*(int *)(unaff_BP + 6) != 0) && (*(int *)(unaff_BP - 300) != -1)) {
              iVar16 = *(int *)(unaff_BP - 0xa4);
              if ((iVar16 < *(int *)(unaff_BP - 0x82)) ||
                 ((((iVar16 <= *(int *)(unaff_BP - 0x82) &&
                    (*(uint *)(unaff_BP - 0xa6) < *(uint *)(unaff_BP - 0x84))) ||
                   (iVar16 < *(int *)(unaff_BP - 0x92))) ||
                  ((iVar16 <= *(int *)(unaff_BP - 0x92) &&
                   (*(uint *)(unaff_BP - 0xa6) < *(uint *)(unaff_BP - 0x94))))))) {
                iVar16 = *(int *)(unaff_BP - 0xc0);
                if ((*(int *)(unaff_BP - 0x82) < iVar16) ||
                   (((*(int *)(unaff_BP - 0x82) <= iVar16 &&
                     (*(uint *)(unaff_BP - 0x84) < *(uint *)(unaff_BP - 0xc2))) ||
                    ((*(int *)(unaff_BP - 0x92) < iVar16 ||
                     ((*(int *)(unaff_BP - 0x92) <= iVar16 &&
                      (*(uint *)(unaff_BP - 0x94) < *(uint *)(unaff_BP - 0xc2))))))))) {
                  iVar16 = *(int *)(unaff_BP - 0xaa);
                  if ((iVar16 < *(int *)(unaff_BP - 0x96)) ||
                     ((((iVar16 <= *(int *)(unaff_BP - 0x96) &&
                        (*(uint *)(unaff_BP - 0xac) < *(uint *)(unaff_BP - 0x98))) ||
                       (iVar16 < *(int *)(unaff_BP - 0xa0))) ||
                      ((iVar16 <= *(int *)(unaff_BP - 0xa0) &&
                       (*(uint *)(unaff_BP - 0xac) < *(uint *)(unaff_BP - 0xa2))))))) {
                    iVar16 = *(int *)(unaff_BP - 0xda);
                    if ((((*(int *)(unaff_BP - 0x96) < iVar16) ||
                         ((*(int *)(unaff_BP - 0x96) <= iVar16 &&
                          (*(uint *)(unaff_BP - 0x98) < *(uint *)(unaff_BP - 0xdc))))) ||
                        (*(int *)(unaff_BP - 0xa0) < iVar16)) ||
                       ((*(int *)(unaff_BP - 0xa0) <= iVar16 &&
                        (*(uint *)(unaff_BP - 0xa2) < *(uint *)(unaff_BP - 0xdc))))) {
                      if ((*(int *)(unaff_BP - 0xa4) <= *(int *)(unaff_BP - 0x82)) &&
                         ((*(int *)(unaff_BP - 0xa4) < *(int *)(unaff_BP - 0x82) ||
                          (*(uint *)(unaff_BP - 0xa6) <= *(uint *)(unaff_BP - 0x84))))) {
                        if ((*(int *)(unaff_BP - 0x82) <= *(int *)(unaff_BP - 0xc0)) &&
                           ((*(int *)(unaff_BP - 0x82) < *(int *)(unaff_BP - 0xc0) ||
                            (*(uint *)(unaff_BP - 0x84) <= *(uint *)(unaff_BP - 0xc2))))) {
                          if ((*(int *)(unaff_BP - 0xaa) <= *(int *)(unaff_BP - 0x96)) &&
                             ((*(int *)(unaff_BP - 0xaa) < *(int *)(unaff_BP - 0x96) ||
                              (*(uint *)(unaff_BP - 0xac) <= *(uint *)(unaff_BP - 0x98))))) {
                            if ((*(int *)(unaff_BP - 0x96) <= *(int *)(unaff_BP - 0xda)) &&
                               ((*(int *)(unaff_BP - 0x96) < *(int *)(unaff_BP - 0xda) ||
                                (*(uint *)(unaff_BP - 0x98) <= *(uint *)(unaff_BP - 0xdc))))) {
                              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
                              *puVar1 = *puVar1 | 0x102;
                              goto LAB_3ab8_48d3;
                            }
                          }
                        }
                      }
                      if ((*(int *)(unaff_BP - 0xa4) <= *(int *)(unaff_BP - 0x92)) &&
                         ((*(int *)(unaff_BP - 0xa4) < *(int *)(unaff_BP - 0x92) ||
                          (*(uint *)(unaff_BP - 0xa6) <= *(uint *)(unaff_BP - 0x94))))) {
                        if ((*(int *)(unaff_BP - 0x92) <= *(int *)(unaff_BP - 0xc0)) &&
                           ((*(int *)(unaff_BP - 0x92) < *(int *)(unaff_BP - 0xc0) ||
                            (*(uint *)(unaff_BP - 0x94) <= *(uint *)(unaff_BP - 0xc2))))) {
                          if ((*(int *)(unaff_BP - 0xaa) <= *(int *)(unaff_BP - 0xa0)) &&
                             ((*(int *)(unaff_BP - 0xaa) < *(int *)(unaff_BP - 0xa0) ||
                              (*(uint *)(unaff_BP - 0xac) <= *(uint *)(unaff_BP - 0xa2))))) {
                            if ((*(int *)(unaff_BP - 0xa0) <= *(int *)(unaff_BP - 0xda)) &&
                               ((*(int *)(unaff_BP - 0xa0) < *(int *)(unaff_BP - 0xda) ||
                                (*(uint *)(unaff_BP - 0xa2) <= *(uint *)(unaff_BP - 0xdc))))) {
                              uVar10 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x74) >> 0x10)
                              ;
                              iVar16 = (int)*(undefined4 *)(unaff_BP - 0x74);
                              puVar1 = (uint *)(iVar16 + 0x14);
                              *puVar1 = *puVar1 | 2;
                              if (*(int *)(unaff_BP + 6) == 1) {
                                puVar1 = (uint *)(iVar16 + 0x14);
                                *puVar1 = *puVar1 | 0x200;
                              }
                              else {
                                puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
                                *puVar1 = *puVar1 | 0x100;
                              }
                              goto LAB_3ab8_48d3;
                            }
                          }
                        }
                      }
                      if (*(int *)(unaff_BP + 6) != 1) {
                        func_0x000297e6();
                        func_0x00029d78();
                        param_5 = 0x22b2;
                        param_4 = 0xf241;
                        func_0x000299d1();
                        param_5 = 0x22b2;
                        param_4 = 0xf249;
                        func_0x000297e6();
                        param_5 = 0x22b2;
                        param_4 = 0xf24e;
                        func_0x00029d78();
                        param_1 = 0x22b2;
                        func_0x000299d1();
                        param_1 = 0x22b2;
                        func_0x000297e6();
                        param_1 = 0x22b2;
                        func_0x00029d78();
                        uStack_4 = 0x22b2;
                        iStack_6 = 0xf26f;
                        func_0x000299d1();
                        uStack_4 = 0x22b2;
                        iStack_6 = 0xf277;
                        func_0x000297e6();
                        uStack_4 = 0x22b2;
                        iStack_6 = -0xd84;
                        func_0x00029d78();
                        uStack_c = 0x22b2;
                        uStack_e = 0xf286;
                        func_0x000299d1();
                        uStack_c = 0x22b2;
                        uStack_e = 0xf28b;
                        FUN_1def_043a();
                        func_0x000297e6();
                        func_0x000297e6();
                        func_0x00029d78();
                        param_5 = 0x22b2;
                        param_4 = 0xf2af;
                        func_0x000299d1();
                        param_5 = 0x22b2;
                        param_4 = 0xf2b8;
                        func_0x000297e6();
                        param_5 = 0x22b2;
                        param_4 = 0xf2bd;
                        func_0x00029d78();
                        param_1 = 0x22b2;
                        func_0x000299d1();
                        param_1 = 1;
                        func_0x0001e558();
                        func_0x000297e6();
                        func_0x000297e6();
                        func_0x00029d78();
                        param_5 = 0x22b2;
                        param_4 = 0xf2f4;
                        func_0x000299d1();
                        param_5 = 0x22b2;
                        param_4 = 0xf2fd;
                        func_0x000297e6();
                        param_5 = 0x22b2;
                        param_4 = 0xf302;
                        func_0x00029d78();
                        param_1 = 0x22b2;
                        func_0x000299d1();
                        param_1 = 1;
                        func_0x0001e558();
                        uVar17 = (undefined1 *)0xffed < &param_1;
                        func_0x00029b6d();
                        uVar13 = 0x22b2;
                        FUN_28b3_1181();
                        if ((bool)uVar17) {
                          puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
                          *puVar1 = *puVar1 | 0x102;
                        }
                        else {
                          func_0x000297e6();
                          func_0x000297e6();
                          func_0x00029d78();
                          param_5 = 0x22b2;
                          param_4 = 0xf358;
                          func_0x000299d1();
                          param_5 = 0x22b2;
                          param_4 = 0xf361;
                          func_0x000297e6();
                          param_5 = 0x22b2;
                          param_4 = 0xf366;
                          func_0x00029d78();
                          param_1 = 0x22b2;
                          func_0x000299d1();
                          param_1 = 1;
                          func_0x0001e558();
                          func_0x000297e6();
                          func_0x000297e6();
                          func_0x00029d78();
                          param_5 = 0x22b2;
                          param_4 = 0xf39d;
                          func_0x000299d1();
                          param_5 = 0x22b2;
                          param_4 = 0xf3a6;
                          func_0x000297e6();
                          param_5 = 0x22b2;
                          param_4 = 0xf3ab;
                          func_0x00029d78();
                          param_1 = 0x22b2;
                          func_0x000299d1();
                          param_1 = 1;
                          func_0x0001e558();
                          uVar17 = (undefined1 *)0xffed < &param_1;
                          func_0x00029b6d();
                          uVar13 = 0x22b2;
                          FUN_28b3_1181();
                          if ((bool)uVar17) {
                            puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
                            *puVar1 = *puVar1 | 0x102;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            iVar16 = *(int *)(unaff_BP - 0xc0);
            if (((iVar16 < *(int *)(unaff_BP - 0x82)) ||
                (((iVar16 <= *(int *)(unaff_BP - 0x82) &&
                  (*(uint *)(unaff_BP - 0xc2) < *(uint *)(unaff_BP - 0x84))) ||
                 (iVar16 < *(int *)(unaff_BP - 0x92))))) ||
               ((iVar16 <= *(int *)(unaff_BP - 0x92) &&
                (*(uint *)(unaff_BP - 0xc2) < *(uint *)(unaff_BP - 0x94))))) goto LAB_3ab8_447a;
            iVar16 = *(int *)(unaff_BP - 0xaa);
            if ((*(int *)(unaff_BP - 0x96) < iVar16) ||
               (((*(int *)(unaff_BP - 0x96) <= iVar16 &&
                 (*(uint *)(unaff_BP - 0x98) < *(uint *)(unaff_BP - 0xac))) ||
                ((*(int *)(unaff_BP - 0xa0) < iVar16 ||
                 ((*(int *)(unaff_BP - 0xa0) <= iVar16 &&
                  (*(uint *)(unaff_BP - 0xa2) < *(uint *)(unaff_BP - 0xac)))))))))
            goto LAB_3ab8_447a;
            iVar16 = *(int *)(unaff_BP - 0xda);
            if ((iVar16 < *(int *)(unaff_BP - 0x96)) ||
               (((iVar16 <= *(int *)(unaff_BP - 0x96) &&
                 (*(uint *)(unaff_BP - 0xdc) < *(uint *)(unaff_BP - 0x98))) ||
                ((iVar16 <= *(int *)(unaff_BP - 0xa0) &&
                 ((iVar16 < *(int *)(unaff_BP - 0xa0) ||
                  (*(uint *)(unaff_BP - 0xdc) < *(uint *)(unaff_BP - 0xa2)))))))))
            goto LAB_3ab8_447a;
            if (*(int *)(unaff_BP - 300) == -1) {
              uVar14 = *(uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
              if (((uVar14 & 0x40) == 0) && ((uVar14 & 0x80) == 0)) {
                puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
                *puVar1 = *puVar1 & 0xfffd;
                param_7 = 0;
                param_6 = 0x7a6;
                param_5 = 0xf421;
                func_0x00007d9b();
                goto LAB_3ab8_48af;
              }
            }
            else {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
              *puVar1 = *puVar1 | 2;
LAB_3ab8_48af:
              uVar13 = 0x7a6;
              uVar14 = *(uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
              if (((uVar14 & 0x40) != 0) || ((uVar14 & 0x80) != 0)) {
                *(undefined2 *)(unaff_BP - 0x13a) = 1;
              }
            }
          }
LAB_3ab8_48d3:
          if (0 < *(int *)(unaff_BP - 0x36)) {
            uVar10 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x74) >> 0x10);
            iVar16 = (int)*(undefined4 *)(unaff_BP - 0x74);
            if ((*(byte *)(iVar16 + 0x15) & 1) == 0) {
              puVar1 = (uint *)(iVar16 + 0x14);
              *puVar1 = *puVar1 ^ 2;
            }
          }
          if ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14) & 2) != 0) {
            uVar13 = 0x885;
            param_7 = 0xf487;
            iVar16 = func_0x00008854();
            if (iVar16 == 0) {
              if ((*(int *)(unaff_BP + 6) != 0) ||
                 ((uVar14 = *(uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14),
                  (uVar14 & 0x40) == 0 && ((uVar14 & 0x80) == 0)))) {
                param_7 = 1;
                param_6 = 0x885;
                uVar13 = 0x7a6;
                param_5 = 0xf4cd;
                func_0x00007d9b();
              }
            }
            else {
              puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14);
              *puVar1 = *puVar1 & 0xfffd;
            }
          }
        }
      }
    }
    else if ((*(int *)(unaff_BP - 300) != 1) ||
            ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x74) + 0x14) & 2) == 0))
    goto LAB_3ab8_4278;
    puVar1 = (uint *)(unaff_BP - 200);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP - 0xc6) = *(int *)(unaff_BP - 0xc6) + (uint)(0xfffe < uVar14);
  }
  if (((*(int *)(unaff_BP + 6) == 0) && (*(int *)(unaff_BP - 0x13a) != 0)) ||
     (*(int *)(unaff_BP + 0xe) < -9)) {
    uVar13 = 0x2ab8;
    param_7 = 0xf4f7;
    FUN_2bb4_0233();
  }
  *(undefined2 *)(unaff_BP - 200) = 1;
  *(undefined2 *)(unaff_BP - 0xc6) = 0;
  do {
    if (*(int *)0x14e < *(int *)(unaff_BP - 0xc6)) {
      uVar10 = FUN_3ab8_4e6d();
      return uVar10;
    }
    if ((*(int *)0x14e <= *(int *)(unaff_BP - 0xc6)) && (*(uint *)0x14c < *(uint *)(unaff_BP - 200))
       ) {
      uVar10 = FUN_3ab8_4e6d();
      return uVar10;
    }
    uVar14 = uVar13;
    if ((*(uint *)(unaff_BP - 200) & 0xf) == 0) {
      iVar16 = func_0x0000db7a();
      uVar14 = 0x885;
      if (iVar16 != 0) break;
    }
    uVar13 = 0;
    param_6 = 0xf554;
    param_7 = uVar14;
    uVar20 = func_0x00000271();
    *(undefined2 *)(unaff_BP - 0x80) = (int)uVar20;
    *(undefined2 *)(unaff_BP - 0x7e) = (int)((ulong)uVar20 >> 0x10);
    if (*(int *)(unaff_BP - 300) == 0) {
      uVar10 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x80) >> 0x10);
      iVar16 = (int)*(undefined4 *)(unaff_BP - 0x80);
      puVar1 = (uint *)(iVar16 + 0x1e);
      *puVar1 = *puVar1 & 0xfffd;
      *(undefined1 *)(iVar16 + 0x1d) = 0;
LAB_3ab8_4a10:
      if ((((*(int *)(unaff_BP - 0x130) != 2) ||
           ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x80) + 0x1e) & 8) != 0)) &&
          (-2 < *(int *)(unaff_BP - 0x36))) && (*(int *)(unaff_BP - 0x116) != 4)) {
        uVar10 = (undefined2)((ulong)*(undefined4 *)(unaff_BP - 0x80) >> 0x10);
        iVar16 = (int)*(undefined4 *)(unaff_BP - 0x80);
        param_6 = (uint)*(byte *)(iVar16 + 0x1c);
        *(uint *)(unaff_BP - 0xde) = param_6;
        param_7 = (uint)*(byte *)(iVar16 + 0x1a);
        param_5 = 0;
        uVar13 = 0x7a6;
        param_4 = 0xf5e5;
        iVar16 = func_0x00007ba4();
        if (iVar16 != 0) {
          puVar9 = (undefined2 *)*(undefined2 *)(unaff_BP - 0x80);
          uVar10 = *(undefined2 *)(unaff_BP - 0x7e);
          puVar8 = (undefined2 *)(unaff_BP - 0x70);
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            puVar5 = puVar8;
            puVar8 = puVar8 + 1;
            puVar4 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar5 = *puVar4;
          }
          func_0x000297e6();
          func_0x00029bb5();
          func_0x00029983();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029983();
          if (*(int *)(unaff_BP - 0xd2) < 0) {
            iVar16 = -*(int *)(unaff_BP - 0xd4);
            iVar15 = -((*(uint *)(unaff_BP - 0xd2) & 0x7fff) +
                      (uint)(*(int *)(unaff_BP - 0xd4) != 0));
          }
          else {
            iVar16 = *(int *)(unaff_BP - 0xd4);
            iVar15 = *(int *)(unaff_BP - 0xd2);
          }
          *(int *)(unaff_BP - 0x84) = iVar16;
          *(int *)(unaff_BP - 0x82) = iVar15;
          if (*(int *)(unaff_BP - 0xe0) < 0) {
            iVar16 = -*(int *)(unaff_BP - 0xe2);
            iVar15 = -((*(uint *)(unaff_BP - 0xe0) & 0x7fff) +
                      (uint)(*(int *)(unaff_BP - 0xe2) != 0));
          }
          else {
            iVar16 = *(int *)(unaff_BP - 0xe2);
            iVar15 = *(int *)(unaff_BP - 0xe0);
          }
          *(int *)(unaff_BP - 0x94) = iVar16;
          *(int *)(unaff_BP - 0x92) = iVar15;
          if ((*(int *)(unaff_BP - 0xa4) <= *(int *)(unaff_BP - 0x82)) &&
             ((*(int *)(unaff_BP - 0xa4) < *(int *)(unaff_BP - 0x82) ||
              (*(uint *)(unaff_BP - 0xa6) <= *(uint *)(unaff_BP - 0x84))))) {
            if ((*(int *)(unaff_BP - 0x92) < *(int *)(unaff_BP - 0xc0)) ||
               ((*(int *)(unaff_BP - 0x92) <= *(int *)(unaff_BP - 0xc0) &&
                (*(uint *)(unaff_BP - 0x94) <= *(uint *)(unaff_BP - 0xc2))))) {
              func_0x000297e6();
              func_0x00029bb5();
              func_0x00029983();
              func_0x000297e6();
              FUN_28b3_100d();
              func_0x00029983();
              if (*(int *)(unaff_BP - 0xe4) < 0) {
                iVar16 = -*(int *)(unaff_BP - 0xe6);
                iVar15 = -((*(uint *)(unaff_BP - 0xe4) & 0x7fff) +
                          (uint)(*(int *)(unaff_BP - 0xe6) != 0));
              }
              else {
                iVar16 = *(int *)(unaff_BP - 0xe6);
                iVar15 = *(int *)(unaff_BP - 0xe4);
              }
              *(int *)(unaff_BP - 0x98) = iVar16;
              *(int *)(unaff_BP - 0x96) = iVar15;
              if (*(int *)(unaff_BP - 0x102) < 0) {
                iVar16 = -*(int *)(unaff_BP - 0x104);
                iVar15 = -((*(uint *)(unaff_BP - 0x102) & 0x7fff) +
                          (uint)(*(int *)(unaff_BP - 0x104) != 0));
              }
              else {
                iVar16 = *(int *)(unaff_BP - 0x104);
                iVar15 = *(int *)(unaff_BP - 0x102);
              }
              *(int *)(unaff_BP - 0xa2) = iVar16;
              *(int *)(unaff_BP - 0xa0) = iVar15;
              if ((*(int *)(unaff_BP - 0xaa) <= *(int *)(unaff_BP - 0x96)) &&
                 ((*(int *)(unaff_BP - 0xaa) < *(int *)(unaff_BP - 0x96) ||
                  (*(uint *)(unaff_BP - 0xac) <= *(uint *)(unaff_BP - 0x98))))) {
                if ((*(int *)(unaff_BP - 0xa0) < *(int *)(unaff_BP - 0xda)) ||
                   ((*(int *)(unaff_BP - 0xa0) <= *(int *)(unaff_BP - 0xda) &&
                    (*(uint *)(unaff_BP - 0xa2) <= *(uint *)(unaff_BP - 0xdc))))) {
                  if (*(int *)(unaff_BP - 0x92) < *(int *)(unaff_BP - 0xa4)) {
                    uVar10 = FUN_3ab8_4cb7();
                    return uVar10;
                  }
                  if ((*(int *)(unaff_BP - 0x92) <= *(int *)(unaff_BP - 0xa4)) &&
                     (*(uint *)(unaff_BP - 0x94) < *(uint *)(unaff_BP - 0xa6))) {
                    uVar10 = FUN_3ab8_4cb7();
                    return uVar10;
                  }
                  if (*(int *)(unaff_BP - 0xc0) < *(int *)(unaff_BP - 0x82)) {
                    uVar10 = FUN_3ab8_4cb7();
                    return uVar10;
                  }
                  if ((*(int *)(unaff_BP - 0xc0) <= *(int *)(unaff_BP - 0x82)) &&
                     (*(uint *)(unaff_BP - 0xc2) < *(uint *)(unaff_BP - 0x84))) {
                    uVar10 = FUN_3ab8_4cb7();
                    return uVar10;
                  }
                  if (*(int *)(unaff_BP - 0xa0) < *(int *)(unaff_BP - 0xaa)) {
                    uVar10 = FUN_3ab8_4cb7();
                    return uVar10;
                  }
                  if ((*(int *)(unaff_BP - 0xaa) < *(int *)(unaff_BP - 0xa0)) ||
                     (*(uint *)(unaff_BP - 0xac) <= *(uint *)(unaff_BP - 0xa2))) {
                    if (*(int *)(unaff_BP - 0xda) < *(int *)(unaff_BP - 0x96)) {
                      uVar10 = FUN_3ab8_4cb7();
                      return uVar10;
                    }
                    if ((*(int *)(unaff_BP - 0xda) <= *(int *)(unaff_BP - 0x96)) &&
                       (*(uint *)(unaff_BP - 0xdc) < *(uint *)(unaff_BP - 0x98))) {
                      uVar10 = FUN_3ab8_4cb7();
                      return uVar10;
                    }
                    uVar10 = FUN_3ab8_4da5();
                    return uVar10;
                  }
                  param_7 = unaff_BP - 0x42;
                  param_6 = unaff_BP - 0x24;
                  param_5 = *(undefined2 *)(unaff_BP - 0xc6);
                  param_4 = *(undefined2 *)(unaff_BP - 200);
                  param_3 = 0x22b2;
                  param_2 = 0xf856;
                  func_0x00021a19();
                  uVar17 = (undefined1 *)0xfff3 < &param_4;
                  uVar19 = &stack0x0000 == (undefined1 *)0xffea;
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar17 || (bool)uVar19) {
                    func_0x000297e6();
                    func_0x000297e6();
                    FUN_28b3_1181();
                    if ((bool)uVar17 || (bool)uVar19) {
                      func_0x000297e6();
                      func_0x000297e6();
                      FUN_28b3_1181();
                      if (!(bool)uVar17) {
                        func_0x000297e6();
                        func_0x000297e6();
                        FUN_28b3_1181();
                        if ((bool)uVar17 || (bool)uVar19) {
                          uVar10 = FUN_3ab8_4da5();
                          return uVar10;
                        }
                      }
                    }
                  }
                  param_7 = 0xbc4;
                  puVar9 = &uStack_10;
                  puVar8 = (undefined2 *)(unaff_BP - 0x70);
                  for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
                    puVar5 = puVar9;
                    puVar9 = puVar9 + 1;
                    puVar4 = puVar8;
                    puVar8 = puVar8 + 1;
                    *puVar5 = *puVar4;
                  }
                  iVar16 = func_0x0002b542(0x22b2);
                  *(int *)(unaff_BP - 0x154) = iVar16;
                  if (iVar16 == 0) {
                    uVar10 = FUN_3ab8_4de5();
                    return uVar10;
                  }
                  if (*(int *)(unaff_BP + 6) == 2) {
                    if (0 < *(int *)(unaff_BP - 0x154)) {
                      pbVar2 = (byte *)((int)*(undefined4 *)(unaff_BP - 0x80) + 0x1d);
                      *pbVar2 = *pbVar2 | 1;
                    }
                    uVar10 = FUN_3ab8_4da5();
                    return uVar10;
                  }
                  if (0 < *(int *)(unaff_BP - 0x154)) {
                    uVar10 = FUN_3ab8_4de5();
                    return uVar10;
                  }
                  uVar10 = FUN_3ab8_4da5();
                  return uVar10;
                }
              }
              uVar10 = FUN_3ab8_4de5();
              return uVar10;
            }
          }
          uVar10 = FUN_3ab8_4de5();
          return uVar10;
        }
      }
    }
    else if ((*(int *)(unaff_BP - 300) != 1) ||
            ((*(byte *)((int)*(undefined4 *)(unaff_BP - 0x80) + 0x1e) & 2) == 0))
    goto LAB_3ab8_4a10;
    puVar1 = (uint *)(unaff_BP - 200);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP - 0xc6) = *(int *)(unaff_BP - 0xc6) + (uint)(0xfffe < uVar14);
  } while( true );
LAB_2bb4_581e:
  param_7 = *(uint *)(unaff_BP - 0x40);
  param_6 = 0x885;
  param_5 = 0x1372;
  FUN_32b2_6cc6();
  param_6 = 0x32b2;
  param_5 = 0x1377;
  FUN_32b2_7258();
  param_2 = 0x32b2;
  param_1 = 0x1381;
  FUN_32b2_6eb1();
  param_2 = 0x32b2;
  param_1 = 0x1389;
  FUN_32b2_6cc6();
  param_2 = 0x32b2;
  param_1 = 0x138e;
  FUN_32b2_7258();
  uStack_2 = 0x32b2;
  iVar15 = 0x32b2;
  uStack_4 = 0x1398;
  FUN_32b2_6eb1();
  goto code_r0x00031398;
}


