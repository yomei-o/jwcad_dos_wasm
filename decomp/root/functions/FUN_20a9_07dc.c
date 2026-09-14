/* 20a9:07dc */

void __cdecl16far
FUN_20a9_07dc(uint param_1,int param_2,uint param_3,int param_4,undefined2 param_5,
             undefined2 param_6,int param_7)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined2 unaff_DS;
  code *pcVar15;
  
  iVar7 = param_2;
  uVar4 = param_1;
  FUN_32b2_02bc();
  FUN_32b2_4c4c();
  FUN_20a9_0732(param_5,param_6);
  if (param_7 != -1) {
    iVar8 = param_3 - param_1;
    if (iVar8 < 0) {
      iVar8 = -iVar8;
      LOCK();
      UNLOCK();
      LOCK();
      param_2 = param_4;
      UNLOCK();
      param_4 = iVar7;
    }
    param_4 = param_4 - param_2;
    if (param_4 < 0) {
      param_4 = -param_4;
    }
    pcVar15 = (code *)0xa39;
    if (iVar8 < param_4) {
      pcVar15 = (code *)0xa8b;
    }
                    /* WARNING: Could not recover jumptable at 0x000214c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcVar15)();
    return;
  }
  iVar8 = *(int *)0x1cc2;
  iVar6 = param_3 - param_1;
  if (iVar6 == 0) {
    iVar7 = param_4 - param_2;
    if (param_4 < param_2) {
      iVar7 = -iVar7;
      param_2 = param_4;
    }
    iVar7 = iVar7 + 1;
    pbVar12 = (byte *)((param_1 >> 3) + param_2 * *(int *)0x1cc2 + *(int *)0x1cc8);
    uVar1 = *(undefined2 *)0x1cca;
    out(0x3ce,CONCAT11('\x01' << ((byte)param_1 & 7 ^ 7),8));
    do {
      *pbVar12 = *pbVar12 | 8;
      pbVar12 = pbVar12 + iVar8;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    goto LAB_20a9_0ab6;
  }
  if (iVar6 < 0) {
    iVar6 = -iVar6;
    LOCK();
    param_1 = param_3;
    UNLOCK();
    param_3 = uVar4;
    LOCK();
    param_2 = param_4;
    UNLOCK();
    param_4 = iVar7;
  }
  param_4 = param_4 - param_2;
  if (param_4 != 0) {
    if (param_4 < 0) {
      param_4 = -param_4;
    }
    pcVar15 = (code *)0x952;
    if (iVar6 < param_4) {
      pcVar15 = (code *)0x991;
    }
                    /* WARNING: Could not recover jumptable at 0x0002131e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcVar15)();
    return;
  }
  puVar13 = (undefined1 *)((param_1 >> 3) + param_2 * *(int *)0x1cc2 + *(int *)0x1cc8);
  uVar1 = *(undefined2 *)0x1cca;
  bVar10 = -2 << ((byte)param_1 & 7 ^ 7);
  bVar11 = ~bVar10;
  bVar9 = -1 << ((byte)param_3 & 7 ^ 7);
  iVar7 = (param_3 >> 3) - (param_1 >> 3);
  uVar5 = 8;
  if ((char)bVar10 < '\0') {
    if (iVar7 != 0) {
      uVar5 = CONCAT11(bVar11,8);
      out(0x3ce,uVar5);
      *puVar13 = *puVar13;
      iVar7 = iVar7 + -1;
      puVar13 = puVar13 + 1;
      goto LAB_20a9_0946;
    }
    bVar9 = bVar9 & bVar11;
    puVar14 = puVar13;
  }
  else {
LAB_20a9_0946:
    uVar5 = CONCAT11(0xff,(char)uVar5);
    out(0x3ce,uVar5);
    puVar14 = puVar13;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar14;
      puVar14 = puVar14 + 1;
      puVar2 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar3 = *puVar2;
    }
  }
  out(0x3ce,CONCAT11(bVar9,(char)uVar5));
  *puVar14 = *puVar13;
LAB_20a9_0ab6:
  FUN_20a9_0702();
  FUN_32b2_4c7a();
  return;
}


