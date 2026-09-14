/* 20a9:0ac5 */

void FUN_20a9_0ac5(void)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int in_stack_00000008;
  int in_stack_0000000a;
  undefined2 in_stack_0000000c;
  undefined2 in_stack_0000000e;
  uint local_1a;
  int local_18;
  uint local_12;
  int local_10;
  undefined2 uVar13;
  
  FUN_32b2_02bc();
  FUN_32b2_4c4c();
  FUN_20a9_0732(in_stack_0000000c,in_stack_0000000e);
  lVar9 = FUN_32b2_4e12(in_stack_0000000a,in_stack_0000000a >> 0xf,in_stack_0000000a,
                        in_stack_0000000a >> 0xf);
  uVar10 = FUN_32b2_4e12(in_stack_00000008,in_stack_00000008 >> 0xf,in_stack_00000008,
                         in_stack_00000008 >> 0xf);
  iVar2 = (int)uVar10;
  uVar4 = (int)(uVar10 >> 0x10) << 1 | (uint)(iVar2 < 0);
  uVar6 = (int)lVar9 * 2;
  uVar7 = (int)((ulong)lVar9 >> 0x10) << 1 | (uint)((int)lVar9 < 0);
  local_12 = 0;
  local_10 = 0;
  lVar11 = FUN_20a9_0cff();
  iVar5 = (int)(uVar10 >> 0x10);
  uVar13 = (undefined2)uVar10;
  uVar1 = uVar10 & 0x10000;
  lVar12 = FUN_20a9_0cff();
  lVar12 = (lVar9 + CONCAT22(iVar5 >> 2,
                             (int)(((ulong)((iVar5 >> 1 & 1U) != 0) << 0x10 |
                                   (ulong)(CONCAT12(uVar1 != 0,uVar13) >> 1)) >> 1))) - lVar12;
  while (local_18 = (int)((ulong)lVar11 >> 0x10), local_1a = (uint)lVar11,
        (int)((local_10 - local_18) - (uint)(local_12 < local_1a)) < 0) {
    FUN_20a9_0c8f();
    if (-1 < lVar12) {
      in_stack_0000000a = in_stack_0000000a + -1;
      lVar11 = CONCAT22((local_18 - uVar4) - (uint)(local_1a < (uint)(iVar2 * 2)),
                        local_1a + iVar2 * -2);
      lVar12 = lVar12 - lVar11;
    }
    bVar8 = CARRY2(local_12,uVar6);
    local_12 = local_12 + uVar6;
    local_10 = local_10 + uVar7 + (uint)bVar8;
    lVar12 = lVar12 + lVar9 + CONCAT22(local_10,local_12);
  }
  uVar1 = uVar10 - lVar9;
  uVar1 = ((uVar1 + CONCAT22((int)((long)uVar1 >> 0x11),
                             (int)(CONCAT12((uVar1 & 0x10000) != 0,(int)uVar1) >> 1))) -
          CONCAT22(local_10,local_12)) - lVar11;
  lVar12 = lVar12 + CONCAT22((int)((long)uVar1 >> 0x11),
                             (int)(CONCAT12((uVar1 & 0x10000) != 0,(int)uVar1) >> 1));
  do {
    local_18 = (int)((ulong)lVar11 >> 0x10);
    local_1a = (uint)lVar11;
    FUN_20a9_0c8f();
    if (lVar12 < 0) {
      bVar8 = CARRY2(local_12,uVar6);
      local_12 = local_12 + uVar6;
      local_10 = local_10 + uVar7 + (uint)bVar8;
      lVar12 = lVar12 + CONCAT22(local_10,local_12);
    }
    uVar3 = local_1a + iVar2 * -2;
    iVar5 = (local_18 - uVar4) - (uint)(local_1a < (uint)(iVar2 * 2));
    lVar11 = CONCAT22(iVar5,uVar3);
    lVar12 = lVar12 - CONCAT22((iVar5 - (int)(uVar10 >> 0x10)) - (uint)(uVar3 < (uint)uVar10),
                               uVar3 - (uint)uVar10);
    in_stack_0000000a = in_stack_0000000a + -1;
  } while (-1 < in_stack_0000000a);
  FUN_20a9_0d0b();
  return;
}


