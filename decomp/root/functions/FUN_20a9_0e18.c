/* 20a9:0e18 */

/* WARNING: Removing unreachable block (ram,0x00021af7) */
/* WARNING: Removing unreachable block (ram,0x00021b27) */

void __cdecl16far
FUN_20a9_0e18(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,
             undefined2 param_5,uint param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 unaff_SS;
  bool bVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  long lVar15;
  int local_b2;
  uint local_b0;
  int local_ae;
  uint local_a6;
  int local_a4;
  int local_9a;
  int local_90;
  uint local_72 [10];
  uint auStack_5e [10];
  uint auStack_4a [5];
  undefined2 auStack_40 [5];
  undefined2 auStack_36 [5];
  undefined2 auStack_2c [5];
  undefined2 auStack_22 [5];
  undefined2 local_18;
  undefined4 local_16;
  int local_12;
  int iStack_10;
  undefined4 uStack_e;
  uint local_a;
  
  FUN_32b2_02bc();
  local_90 = 0;
  local_9a = param_3;
  local_a = param_3;
  uStack_e._0_2_ = param_3;
  iStack_10 = 0x32b2;
  local_12 = 0x1924;
  uStack_e._2_2_ = param_3 >> 0xf;
  local_16 = FUN_32b2_4e12();
  iVar3 = (int)local_16;
  uVar4 = iVar3 * 2;
  uVar9 = (int)((ulong)local_16 >> 0x10) << 1 | (uint)(iVar3 < 0);
  local_18 = param_5;
  for (; (int)param_7 < 0; param_7 = param_7 + 0x168) {
  }
  while (((int)param_9 < 1 && (((int)param_9 < 0 || (param_8 == 0))))) {
    param_9 = param_9 + 0x168;
  }
  for (; 0x167 < (int)param_7; param_7 = param_7 - 0x168) {
  }
  while ((0x167 < (int)param_9 && ((0x168 < (int)param_9 || (param_8 != 0))))) {
    param_9 = param_9 - 0x168;
  }
  local_b2 = 0;
  do {
    auStack_22[local_b2] = 0xffff;
    auStack_2c[local_b2] = 0xffff;
    auStack_36[local_b2] = 0xffff;
    auStack_40[local_b2] = 0xffff;
    auStack_4a[local_b2] = 0xffff;
    auStack_5e[local_b2 * 2] = 0xffff;
    auStack_5e[local_b2 * 2 + 1] = 0xffff;
    local_72[local_b2 * 2] = 0xffff;
    local_72[local_b2 * 2 + 1] = 0xffff;
    local_b2 = local_b2 + 1;
  } while (local_b2 < 5);
  local_a = 0;
  uStack_e._2_2_ = param_7;
  uStack_e._0_2_ = param_6;
  iStack_10 = 0x32b2;
  local_12 = 0x1a07;
  cVar2 = FUN_32b2_4d78();
  for (local_b2 = 0; local_b2 < 5; local_b2 = local_b2 + 1) {
    bVar11 = false;
    uVar6 = (byte)(cVar2 + (char)local_b2) & 3;
    auStack_4a[local_b2] = uVar6;
    local_a = 0;
    uStack_e._2_2_ = 0;
    iStack_10 = 0x32b2;
    local_12 = 0x1c6b;
    uStack_e._0_2_ = uVar6;
    uVar14 = FUN_32b2_4e12();
    uVar10 = (uint)((ulong)uVar14 >> 0x10);
    uVar7 = (uint)uVar14;
    local_72[local_b2 * 2] = uVar7;
    local_72[local_b2 * 2 + 1] = uVar10;
    uVar8 = uVar10 + 0x5a;
    auStack_5e[local_b2 * 2] = uVar7;
    auStack_5e[local_b2 * 2 + 1] = uVar8;
    if ((0x167 < (int)uVar8) && ((0x168 < (int)uVar8 || (uVar7 != 0)))) {
      auStack_5e[local_b2 * 2] = uVar7;
      auStack_5e[local_b2 * 2 + 1] = uVar10 - 0x10e;
    }
    if (((int)local_72[local_b2 * 2 + 1] <= (int)param_7) &&
       (((int)local_72[local_b2 * 2 + 1] < (int)param_7 || (local_72[local_b2 * 2] < param_6)))) {
      local_72[local_b2 * 2] = param_6;
      local_72[local_b2 * 2 + 1] = param_7;
    }
    if ((((int)param_9 <= (int)auStack_5e[local_b2 * 2 + 1]) &&
        (((((int)param_9 < (int)auStack_5e[local_b2 * 2 + 1] ||
           (param_8 <= auStack_5e[local_b2 * 2])) && ((int)param_7 <= (int)param_9)) &&
         (((int)param_7 < (int)param_9 || (param_6 <= param_8)))))) &&
       ((local_b2 != 0 || ((param_8 != param_6 || (param_9 != param_7)))))) {
      auStack_5e[local_b2 * 2] = param_8;
      auStack_5e[local_b2 * 2 + 1] = param_9;
      bVar11 = true;
    }
    param_6 = auStack_5e[local_b2 * 2];
    param_7 = auStack_5e[local_b2 * 2 + 1];
    if ((param_6 == 0) && (param_7 == 0x168)) {
      param_7 = 0;
      param_6 = 0;
    }
    local_a = 0x1d46;
    FUN_32b2_6d94();
    local_a = 0x1d4f;
    FUN_32b2_710c();
    iStack_10 = 0x32b2;
    local_12 = 0x1d59;
    FUN_32b2_6eb1();
    iStack_10 = 0x32b2;
    local_12 = 0x1d5e;
    FUN_32b2_75ec();
    local_a = 0x32b2;
    uStack_e._2_2_ = 0x1d68;
    FUN_32b2_6d14();
    local_a = 0x32b2;
    uStack_e._2_2_ = 0x1d70;
    FUN_32b2_6d9b();
    local_a = 0x32b2;
    uStack_e._2_2_ = 0x1d75;
    FUN_32b2_717d();
    local_a = 0x32b2;
    uStack_e._2_2_ = 0x1d7d;
    FUN_32b2_6eb1();
    local_a = 0x32b2;
    uStack_e._2_2_ = 0x1d85;
    FUN_32b2_6d94();
    local_a = 0x32b2;
    uStack_e._2_2_ = 0x1d8e;
    FUN_32b2_710c();
    local_12 = 0x32b2;
    local_16._2_2_ = 0x1d98;
    FUN_32b2_6eb1();
    local_12 = 0x32b2;
    local_16._2_2_ = 0x1d9d;
    FUN_32b2_75fe();
    uStack_e._2_2_ = 0x32b2;
    uStack_e._0_2_ = 0x1da7;
    FUN_32b2_6d14();
    uStack_e._2_2_ = 0x32b2;
    uStack_e._0_2_ = 0x1daf;
    FUN_32b2_6d9b();
    uStack_e._2_2_ = 0x32b2;
    uStack_e._0_2_ = 0x1db4;
    FUN_32b2_717d();
    uStack_e._2_2_ = 0x32b2;
    uStack_e._0_2_ = 0x1dbd;
    FUN_32b2_6eb1();
    uStack_e._2_2_ = 0x32b2;
    uStack_e._0_2_ = 0x1dc5;
    FUN_32b2_6d94();
    uStack_e._2_2_ = 0x32b2;
    uStack_e._0_2_ = 0x1dce;
    FUN_32b2_710c();
    local_16._2_2_ = 0x32b2;
    local_16._0_2_ = 0x1dd8;
    FUN_32b2_6eb1();
    local_16._2_2_ = 0x32b2;
    local_16._0_2_ = 0x1ddd;
    FUN_32b2_75ec();
    uStack_e._0_2_ = 0x32b2;
    iStack_10 = 0x1de7;
    FUN_32b2_6d14();
    uStack_e._0_2_ = 0x32b2;
    iStack_10 = 0x1def;
    FUN_32b2_6d9b();
    uStack_e._0_2_ = 0x32b2;
    iStack_10 = 0x1df4;
    FUN_32b2_717d();
    uStack_e._0_2_ = 0x32b2;
    iStack_10 = 0x1dfc;
    FUN_32b2_6eb1();
    uStack_e._0_2_ = 0x32b2;
    iStack_10 = 0x1e04;
    FUN_32b2_6d94();
    uStack_e._0_2_ = 0x32b2;
    iStack_10 = 0x1e0d;
    FUN_32b2_710c();
    local_16._0_2_ = 0x32b2;
    local_18 = 0x1e17;
    FUN_32b2_6eb1();
    local_16._0_2_ = 0x32b2;
    local_18 = 0x1e1c;
    FUN_32b2_75fe();
    iStack_10 = 0x32b2;
    local_12 = 0x1e26;
    FUN_32b2_6d14();
    iStack_10 = 0x32b2;
    local_12 = 0x1e2e;
    FUN_32b2_6d9b();
    iStack_10 = 0x32b2;
    local_12 = 0x1e33;
    FUN_32b2_717d();
    local_a = 0x1e3c;
    FUN_32b2_6eb1();
    auStack_40[local_b2] = param_1;
    auStack_36[local_b2] = param_1;
    auStack_2c[local_b2] = param_2;
    auStack_22[local_b2] = param_2;
    if ((cVar2 + (char)local_b2 & 3U) == 0) {
      local_a = 0x1a22;
      FUN_32b2_6d9b();
      local_a = 0x1a2b;
      FUN_32b2_7154();
      local_a = 0x1a30;
      uVar5 = FUN_32b2_6f61();
      auStack_36[local_b2] = uVar5;
      local_a = 0x1a3b;
      FUN_32b2_6d9b();
LAB_20a9_0faf:
      local_a = 0x1a44;
      FUN_32b2_7154();
      local_a = 0x1a49;
      uVar5 = FUN_32b2_6f61();
      auStack_40[local_b2] = uVar5;
      local_a = 0x1a54;
      FUN_32b2_6d9b();
      local_a = 0x1a5c;
      FUN_32b2_70dc();
      local_a = 0x1a61;
      uVar5 = FUN_32b2_6f61();
      auStack_22[local_b2] = uVar5;
      local_a = 0x1a6c;
      FUN_32b2_6d9b();
LAB_20a9_0fdf:
      local_a = 0x1a74;
      FUN_32b2_70dc();
      local_a = 0x1a79;
      uVar5 = FUN_32b2_6f61();
      auStack_2c[local_b2] = uVar5;
    }
    else {
      if (uVar6 == 1) {
        local_a = 0x1b84;
        FUN_32b2_6d9b();
        local_a = 0x1b8d;
        FUN_32b2_7154();
        local_a = 0x1b92;
        uVar5 = FUN_32b2_6f61();
        auStack_36[local_b2] = uVar5;
        local_a = 0x1b9d;
        FUN_32b2_6d9b();
LAB_20a9_113e:
        local_a = 0x1bd3;
        FUN_32b2_7154();
        local_a = 0x1bd8;
        uVar5 = FUN_32b2_6f61();
        auStack_40[local_b2] = uVar5;
        local_a = 0x1be3;
        FUN_32b2_6d9b();
        local_a = 0x1beb;
        FUN_32b2_70dc();
        local_a = 0x1bf0;
        uVar5 = FUN_32b2_6f61();
        auStack_22[local_b2] = uVar5;
        local_a = 0x1bfb;
        FUN_32b2_6d9b();
        goto LAB_20a9_0fdf;
      }
      if (uVar6 == 2) {
        local_a = 0x1bb1;
        FUN_32b2_6d9b();
        local_a = 0x1bba;
        FUN_32b2_7154();
        local_a = 0x1bbf;
        uVar5 = FUN_32b2_6f61();
        auStack_36[local_b2] = uVar5;
        local_a = 0x1bca;
        FUN_32b2_6d9b();
        goto LAB_20a9_113e;
      }
      if (uVar6 == 3) {
        local_a = 0x1c0f;
        FUN_32b2_6d9b();
        local_a = 0x1c18;
        FUN_32b2_7154();
        local_a = 0x1c1d;
        uVar5 = FUN_32b2_6f61();
        auStack_36[local_b2] = uVar5;
        local_a = 0x1c28;
        FUN_32b2_6d9b();
        goto LAB_20a9_0faf;
      }
    }
    if (bVar11) break;
  }
  local_a = param_3;
  uStack_e._0_2_ = param_3;
  iStack_10 = 0x32b2;
  local_12 = 0x1a99;
  uStack_e._2_2_ = param_3 >> 0xf;
  lVar12 = FUN_32b2_4e12();
  local_a = 4;
  uStack_e._2_2_ = 0;
  uStack_e._0_2_ = 4;
  iStack_10 = 0x32b2;
  local_12 = 0x1aaf;
  lVar13 = FUN_32b2_4d78();
  lVar12 = (lVar13 - lVar12) + local_16;
  local_a4 = 0;
  local_a6 = 0;
  local_a = param_3;
  iStack_10 = 0x32b2;
  local_12 = 0x1adc;
  uStack_e._0_2_ = uVar4;
  uStack_e._2_2_ = uVar9;
  lVar13 = FUN_32b2_4e12();
  lVar15 = local_16;
  while( true ) {
    local_16._2_2_ = (int)((ulong)lVar15 >> 0x10);
    local_16._0_2_ = (uint)lVar15;
    local_ae = (int)((ulong)lVar13 >> 0x10);
    local_b0 = (uint)lVar13;
    if (lVar13 <= CONCAT22(local_a4,local_a6)) break;
    local_a = param_10;
    uStack_e._2_2_ = param_4;
    uStack_e._0_2_ = param_2;
    iStack_10 = param_1;
    local_12 = local_9a;
    local_16._2_2_ = local_90;
    local_16._0_2_ = 0x32b2;
    local_18 = 0x1b1c;
    FUN_20a9_0d1a();
    lVar15 = CONCAT22(local_16._2_2_,(uint)local_16);
    if (0 < lVar12) {
      local_9a = local_9a + -1;
      lVar13 = CONCAT22((local_ae - uVar9) - (uint)(local_b0 < uVar4),local_b0 + iVar3 * -2);
      lVar12 = lVar12 - lVar13;
    }
    local_90 = local_90 + 1;
    bVar11 = CARRY2(local_a6,uVar4);
    local_a6 = local_a6 + uVar4;
    local_a4 = local_a4 + uVar9 + (uint)bVar11;
    lVar12 = lVar12 + CONCAT22(local_a4 + local_16._2_2_ + (uint)CARRY2(local_a6,(uint)local_16),
                               local_a6 + (uint)local_16);
  }
  local_a = 2;
  uStack_e._2_2_ = 0;
  uStack_e._0_2_ = 2;
  uVar8 = 2 - (uint)local_16;
  local_16._2_2_ = -(uint)(2 < (uint)local_16) - local_16._2_2_;
  local_12 = uVar8 * 3;
  iStack_10 = (local_16._2_2_ * 2 | (uint)((int)uVar8 < 0)) + local_16._2_2_ +
              (uint)CARRY2(uVar8 * 2,uVar8);
  local_16._2_2_ = 0x32b2;
  local_16._0_2_ = 0x1e9b;
  lVar15 = FUN_32b2_4d78();
  uStack_e = (lVar15 - CONCAT22(local_a4,local_a6)) - lVar13;
  iStack_10 = 0x32b2;
  local_12 = 0x1eb2;
  lVar15 = FUN_32b2_4d78();
  while( true ) {
    local_ae = (int)((ulong)lVar13 >> 0x10);
    local_b0 = (uint)lVar13;
    lVar12 = lVar15 + lVar12;
    if (local_9a < 0) break;
    local_a = param_10;
    uStack_e._2_2_ = param_4;
    uStack_e._0_2_ = param_2;
    iStack_10 = param_1;
    local_12 = local_9a;
    local_16._2_2_ = local_90;
    local_16._0_2_ = 0x32b2;
    local_18 = 0x1ed0;
    FUN_20a9_0d1a();
    if (lVar12 < 0) {
      local_90 = local_90 + 1;
      bVar11 = CARRY2(local_a6,uVar4);
      local_a6 = local_a6 + uVar4;
      local_a4 = local_a4 + uVar9 + (uint)bVar11;
      lVar12 = lVar12 + CONCAT22(local_a4,local_a6);
    }
    local_9a = local_9a + -1;
    uVar8 = local_b0 + iVar3 * -2;
    iVar1 = (local_ae - uVar9) - (uint)(local_b0 < uVar4);
    lVar13 = CONCAT22(iVar1,uVar8);
    lVar15 = CONCAT22((int)local_72 + (-(uint)(local_a < uVar8) - iVar1),local_a - uVar8);
  }
  return;
}


