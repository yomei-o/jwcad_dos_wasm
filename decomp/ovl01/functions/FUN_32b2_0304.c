/* 32b2:0304 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_32b2_0304(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  code *pcVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  *(undefined2 *)0x7a74 = in_stack_00000000;
  *(undefined2 *)0x7a76 = param_1;
  pcVar5 = (code *)swi(0x21);
  uVar7 = (*pcVar5)();
  *(undefined2 *)0x7a3c = uVar7;
  uVar10 = 1;
  if ((char)uVar7 != '\x02') {
    uVar7 = *(undefined2 *)0x2c;
    *(undefined2 *)0x7a5f = uVar7;
    iVar8 = -0x8000;
    pcVar15 = (char *)0x0;
LAB_32b2_032f:
    do {
      pcVar16 = pcVar15;
      if (iVar8 != 0) {
        iVar8 = iVar8 + -1;
        pcVar4 = pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar16 = pcVar15;
        if (*pcVar4 != '\0') goto LAB_32b2_032f;
      }
      pcVar15 = pcVar16 + 1;
    } while (*pcVar16 != '\0');
    pcVar16 = pcVar16 + 3;
    *(undefined2 *)0x7a5d = pcVar16;
    uVar10 = 0xffff;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar4 = pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (*pcVar4 != '\0');
    uVar10 = ~uVar10;
  }
  iVar8 = 1;
  pbVar12 = (byte *)0x81;
  uVar7 = *(undefined2 *)0x7a3a;
LAB_32b2_034d:
  do {
    do {
      pbVar2 = pbVar12;
      pbVar12 = pbVar12 + 1;
      bVar6 = *pbVar2;
    } while (bVar6 == 0x20);
  } while (bVar6 == 9);
  if ((bVar6 != 0xd) && (bVar6 != 0)) {
    iVar8 = iVar8 + 1;
    do {
      pbVar13 = pbVar12 + -1;
LAB_32b2_0366:
      pbVar12 = pbVar13 + 1;
      bVar6 = *pbVar13;
      if ((bVar6 == 0x20) || (bVar6 == 9)) goto LAB_32b2_034d;
      if ((bVar6 == 0xd) || (bVar6 == 0)) break;
      if (bVar6 == 0x22) goto LAB_32b2_03b7;
      if (bVar6 != 0x5c) {
        if ((0x7f < bVar6) && ((bVar6 < 0xa0 || ((0xdf < bVar6 && (bVar6 < 0xfd)))))) {
          uVar10 = uVar10 + 1;
          pbVar12 = pbVar13 + 2;
        }
        uVar10 = uVar10 + 1;
        pbVar13 = pbVar12;
        goto LAB_32b2_0366;
      }
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 1;
        pbVar2 = pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (*pbVar2 == 0x5c);
      if (*pbVar2 == 0x22) {
        uVar10 = uVar10 + (uVar9 >> 1) + (uint)((uVar9 & 1) != 0);
        while (pbVar13 = pbVar12, (uVar9 & 1) == 0) {
LAB_32b2_03b7:
          while( true ) {
            while( true ) {
              pbVar13 = pbVar12 + 1;
              bVar6 = *pbVar12;
              if ((bVar6 == 0xd) || (bVar6 == 0)) goto LAB_32b2_0400;
              if (bVar6 == 0x22) goto LAB_32b2_0366;
              if (bVar6 == 0x5c) break;
              if ((0x7f < bVar6) && ((bVar6 < 0xa0 || ((0xdf < bVar6 && (bVar6 < 0xfd)))))) {
                uVar10 = uVar10 + 1;
                pbVar13 = pbVar12 + 2;
              }
              pbVar12 = pbVar13;
              uVar10 = uVar10 + 1;
            }
            uVar9 = 0;
            do {
              pbVar12 = pbVar13;
              uVar9 = uVar9 + 1;
              pbVar13 = pbVar12 + 1;
            } while (*pbVar12 == 0x5c);
            if (*pbVar12 == 0x22) break;
            uVar10 = uVar10 + uVar9;
          }
          uVar10 = uVar10 + (uVar9 >> 1) + (uint)((uVar9 & 1) != 0);
          pbVar12 = pbVar12 + 1;
        }
        goto LAB_32b2_0366;
      }
      uVar10 = uVar10 + uVar9;
    } while( true );
  }
LAB_32b2_0400:
  *(int *)0x7a57 = iVar8;
  iVar17 = (iVar8 + 1) * 2;
  iVar8 = -(uVar10 + iVar8 + iVar17 + 1 & 0xfffe);
  *(undefined1 **)0x7a59 = &stack0x0008 + iVar8;
  pbVar13 = &stack0x0008 + iVar17 + iVar8;
  *(undefined2 *)((int)&stack0x0006 + iVar8) = unaff_SS;
  uVar7 = *(undefined2 *)((int)&stack0x0006 + iVar8);
  *(byte **)(&stack0x0008 + iVar8) = pbVar13;
  puVar11 = (undefined2 *)(&stack0x000a + iVar8);
  pbVar2 = (byte *)*(undefined4 *)0x7a5d;
  pbVar12 = (byte *)pbVar2;
  do {
    pbVar3 = pbVar12;
    pbVar12 = pbVar12 + 1;
    bVar6 = *pbVar3;
    pbVar3 = pbVar13;
    pbVar13 = pbVar13 + 1;
    *pbVar3 = bVar6;
  } while (bVar6 != 0);
  uVar1 = *(undefined2 *)0x7a3a;
  pbVar12 = (byte *)0x81;
LAB_32b2_043a:
  do {
    do {
      pbVar14 = pbVar12 + 1;
      bVar6 = *pbVar12;
      pbVar12 = pbVar14;
    } while (bVar6 == 0x20);
  } while (bVar6 == 9);
  if ((bVar6 == 0xd) || (bVar6 == 0)) {
LAB_32b2_04fc:
    *(undefined2 *)((int)&stack0x0006 + iVar8) = unaff_SS;
    uVar7 = *(undefined2 *)((int)&stack0x0006 + iVar8);
    *puVar11 = 0;
                    /* WARNING: Could not recover jumptable at 0x00033022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x7a74)();
    return;
  }
  *puVar11 = pbVar13;
  puVar11 = puVar11 + 1;
  do {
    pbVar14 = pbVar14 + -1;
LAB_32b2_0457:
    pbVar12 = pbVar14 + 1;
    bVar6 = *pbVar14;
    if ((bVar6 == 0x20) || (bVar6 == 9)) {
      pbVar2 = pbVar13;
      pbVar13 = pbVar13 + 1;
      *pbVar2 = 0;
      goto LAB_32b2_043a;
    }
    if ((bVar6 == 0xd) || (bVar6 == 0)) {
LAB_32b2_04f9:
      *pbVar13 = 0;
      goto LAB_32b2_04fc;
    }
    if (bVar6 == 0x22) {
LAB_32b2_04ab:
      while( true ) {
        pbVar14 = pbVar12 + 1;
        bVar6 = *pbVar12;
        if ((bVar6 == 0xd) || (bVar6 == 0)) goto LAB_32b2_04f9;
        if (bVar6 == 0x22) break;
        if (bVar6 == 0x5c) {
          uVar10 = 0;
          do {
            pbVar12 = pbVar14;
            uVar10 = uVar10 + 1;
            pbVar14 = pbVar12 + 1;
          } while (*pbVar12 == 0x5c);
          if (*pbVar12 == 0x22) {
            for (uVar9 = uVar10 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
              pbVar2 = pbVar13;
              pbVar13 = pbVar13 + 1;
              *pbVar2 = 0x5c;
            }
            if ((uVar10 & 1) == 0) break;
            pbVar2 = pbVar13;
            pbVar13 = pbVar13 + 1;
            *pbVar2 = 0x22;
            pbVar12 = pbVar14;
          }
          else {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              pbVar2 = pbVar13;
              pbVar13 = pbVar13 + 1;
              *pbVar2 = 0x5c;
            }
          }
        }
        else {
          if ((0x7f < bVar6) && ((bVar6 < 0xa0 || ((0xdf < bVar6 && (bVar6 < 0xfd)))))) {
            pbVar2 = pbVar13;
            pbVar13 = pbVar13 + 1;
            *pbVar2 = bVar6;
            pbVar2 = pbVar14;
            pbVar14 = pbVar12 + 2;
            bVar6 = *pbVar2;
          }
          pbVar2 = pbVar13;
          pbVar13 = pbVar13 + 1;
          *pbVar2 = bVar6;
          pbVar12 = pbVar14;
        }
      }
      goto LAB_32b2_0457;
    }
    if (bVar6 != 0x5c) {
      if ((0x7f < bVar6) && ((bVar6 < 0xa0 || ((0xdf < bVar6 && (bVar6 < 0xfd)))))) {
        pbVar2 = pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar2 = bVar6;
        bVar6 = *pbVar12;
        pbVar12 = pbVar14 + 2;
      }
      pbVar14 = pbVar12;
      pbVar2 = pbVar13;
      pbVar13 = pbVar13 + 1;
      *pbVar2 = bVar6;
      goto LAB_32b2_0457;
    }
    uVar10 = 0;
    pbVar14 = pbVar12;
    do {
      uVar10 = uVar10 + 1;
      pbVar2 = pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (*pbVar2 == 0x5c);
    if (*pbVar2 == 0x22) {
      for (uVar9 = uVar10 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        pbVar2 = pbVar13;
        pbVar13 = pbVar13 + 1;
        *pbVar2 = 0x5c;
      }
      pbVar12 = pbVar14;
      if ((uVar10 & 1) == 0) goto LAB_32b2_04ab;
      pbVar2 = pbVar13;
      pbVar13 = pbVar13 + 1;
      *pbVar2 = 0x22;
      goto LAB_32b2_0457;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      pbVar2 = pbVar13;
      pbVar13 = pbVar13 + 1;
      *pbVar2 = 0x5c;
    }
  } while( true );
}


