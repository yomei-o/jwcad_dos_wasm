/* 1000:0a81 */

/* WARNING: Instruction at (ram,0x00010800) overlaps instruction at (ram,0x000107fe)
    */
/* WARNING: Control flow encountered bad instruction data */

uint FUN_1000_0a81(void)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 uVar9;
  undefined1 extraout_AH;
  uint uVar10;
  int in_AX;
  uint uVar11;
  int *piVar12;
  byte bVar13;
  uint in_CX;
  undefined2 extraout_DX;
  uint unaff_BP;
  char *unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte bVar15;
  byte in_AF;
  bool bVar16;
  char cVar17;
  char cVar18;
  undefined4 uVar19;
  undefined2 uStack_4;
  
  uVar11 = in_AX - 1;
  if (0x21 < uVar11) goto switchD_1000_0a8a_caseD_20;
  bVar15 = (int)uVar11 < 0;
  piVar12 = (int *)(uVar11 * 2);
  cVar18 = (bool)bVar15 != (int)piVar12 < 0;
  piVar5 = piVar12;
  switch(uVar11) {
  case 0:
    goto LAB_1000_0808;
  default:
    uStack_4 = *(undefined2 *)0x8ffc;
    uVar14 = *(undefined2 *)0x8ffa;
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)(*(undefined2 *)0x8ff8,uVar14,*(undefined2 *)0x8ffc,*(undefined2 *)0x8ffe,
              *(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa);
    *(char *)(unaff_BP + 0xbbc3) = *(char *)(unaff_BP + 0xbbc3) + (char)in_CX;
    return (uint)(0x21 < (*(byte *)((-(uint)((char)*piVar12 == '\0') & 0xfce0) + 0xf9d) & 0x7f));
  case 3:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    unaff_SS = 0;
  case 4:
    uStack_4 = *(undefined2 *)0x8ffc;
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)(0,*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa,*(undefined2 *)0x8ffc,
              *(undefined2 *)0x8ffe,*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa);
    break;
  case 5:
    uStack_4 = *(undefined2 *)0x8ffc;
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)(0,*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa,*(undefined2 *)0x8ffc,
              *(undefined2 *)0x8ffe,*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa,
              *(undefined2 *)0x8ffc,*(undefined2 *)0x8ffe,*(undefined2 *)0x8ff8,
              *(undefined2 *)0x8ffa,*(undefined2 *)0x8ffc,*(undefined2 *)0x8ffe,
              *(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa);
  case 6:
    uStack_4 = *(undefined2 *)0x8ffc;
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)(0,*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa,*(undefined2 *)0x8ffc,
              *(undefined2 *)0x8ffe,*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa,
              *(undefined2 *)0x8ffc,*(undefined2 *)0x8ffe,*(undefined2 *)0x8ff8,
              *(undefined2 *)0x8ffa,*(undefined2 *)0x8ffc,*(undefined2 *)0x8ffe,
              *(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa);
    break;
  case 7:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    bVar15 = false;
  case 8:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    *piVar12 = (int)&uStack_4 + (uint)bVar15 + *piVar12;
    break;
  case 9:
    uStack_4 = *(undefined2 *)0x8ffc;
    pcVar8 = (code *)swi(0x3f);
    cVar18 = (*pcVar8)(*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa,*(undefined2 *)0x8ffc,
                       *(undefined2 *)0x8ffe,*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa);
    *(char *)((int)piVar12 + (int)unaff_SI) = *(char *)((int)piVar12 + (int)unaff_SI) + cVar18;
    uVar11 = FUN_1000_0a25();
    return uVar11;
  case 10:
    uStack_4 = *(undefined2 *)0x8ffc;
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)(*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa,*(undefined2 *)0x8ffc,
              *(undefined2 *)0x8ffe,*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa);
    break;
  case 0xb:
    uStack_4 = *(undefined2 *)0x8ffc;
    pcVar8 = (code *)swi(0x3f);
    cVar18 = (*pcVar8)(*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa,*(undefined2 *)0x8ffc,
                       *(undefined2 *)0x8ffe,*(undefined2 *)0x8ff8,*(undefined2 *)0x8ffa);
    bVar15 = cVar18 + 0xd;
    pbVar2 = (byte *)(unaff_BP + unaff_DI);
    bVar4 = *pbVar2;
    bVar13 = (byte)(in_CX >> 8);
    *pbVar2 = *pbVar2 + bVar13;
    bVar6 = ((char *)((int)piVar12 + (int)unaff_SI))[-0x33];
    ((char *)((int)piVar12 + (int)unaff_SI))[-0x33] =
         bVar6 << 4 | (byte)(CONCAT11(CARRY1(bVar4,bVar13),bVar6) >> 5);
    goto code_r0x000109a6;
  case 0xc:
    pcVar8 = (code *)swi(0x3f);
    bVar15 = (*pcVar8)();
code_r0x000109a6:
    bVar15 = 9 < (bVar15 & 0xf) | in_AF;
switchD_1000_0a8a_caseD_d:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    unaff_BP = (unaff_BP - *(int *)(unaff_SI + 0x20)) - (uint)bVar15;
    break;
  case 0xd:
    goto switchD_1000_0a8a_caseD_d;
  case 0xe:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    uVar11 = FUN_1000_0a65();
    return uVar11;
  case 0xf:
LAB_1000_0808:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    piVar12[-0xb5a] = (int)(unaff_SI + piVar12[-0xb5a]);
    pcVar3 = (char *)(CONCAT11((char)((uint)piVar12 >> 8) * '\x02',(char)piVar12) + 0x36ff);
    *pcVar3 = *pcVar3 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    break;
  case 0x11:
    pcVar8 = (code *)swi(0x3f);
    uVar11 = (*pcVar8)();
    *(uint *)((int)piVar12 + unaff_DI) = *(uint *)((int)piVar12 + unaff_DI) | uVar11;
    break;
  case 0x12:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    break;
  case 0x13:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
  case 0x14:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    break;
  case 0x15:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    unaff_BP = unaff_BP + 1;
    break;
  case 0x16:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    break;
  case 0x17:
    uVar14 = 0;
    goto LAB_1000_0a1f;
  case 0x18:
    bVar15 = 0;
    pcVar8 = (code *)swi(0x3f);
    uVar14 = (*pcVar8)();
    uStack_4 = unaff_DS;
    goto caseD_18_1;
  case 0x19:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    uStack_4 = unaff_DS;
    goto code_r0x00010a37;
  case 0x1a:
    goto switchD_1000_0a8a_caseD_1a;
  case 0x1b:
    goto switchD_1000_0a8a_caseD_1b;
  case 0x1c:
    pcVar8 = (code *)swi(0x3f);
    uVar10 = (*pcVar8)();
    puVar1 = (uint *)(unaff_SI + unaff_BP);
    uVar11 = (uint)bVar15;
    uVar7 = *puVar1 + uVar10;
    bVar15 = CARRY2(*puVar1,uVar10) || CARRY2(uVar7,uVar11);
    cVar18 = SCARRY2(*puVar1,uVar10) != SCARRY2(uVar7,uVar11);
    *puVar1 = uVar7 + uVar11;
    piVar5 = (int *)*puVar1;
    if ((POPCOUNT(*puVar1 & 0xff) & 1U) != 0) goto switchD_1000_0a8a_caseD_1d;
    goto switchD_1000_0a8a_caseD_1a;
  case 0x1d:
switchD_1000_0a8a_caseD_1d:
    pcVar8 = (code *)swi(0x3f);
    uVar19 = (*pcVar8)();
    unaff_BP = unaff_BP | in_CX;
    out((int)((ulong)uVar19 >> 0x10),
        CONCAT11((char)((ulong)uVar19 >> 8),((char)uVar19 + 'o') - bVar15));
  case 0x1e:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    break;
  case 0x1f:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
    goto switchD_1000_0a8a_caseD_20;
  case 0x21:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
    goto switchD_1000_0a8a_caseD_20;
  }
LAB_1000_074c:
  uVar14 = 0x1000;
  *(undefined2 *)0xc728 = 0xffff;
  *(undefined2 *)0xbee2 = 0xffff;
  if ((0x28 < *(int *)(unaff_BP - 2)) && (*(int *)0xa62 != 0x1e)) {
    *(undefined2 *)0xc22 = 2;
    uStack_4 = 3;
    FUN_1def_26a9(0x14);
    uStack_4 = 0x6b0;
    uVar14 = 0x21f2;
    FUN_21f2_0356(0x1254);
  }
  if (*(byte *)0xb782 < 4) {
    uStack_4 = 0;
    FUN_10ad_0f45();
    if (*(char *)0x118 != '\0') {
      pcVar8 = (code *)swi(0x3f);
      (*pcVar8)();
    }
    uStack_4 = *(undefined2 *)0xa62;
    uVar14 = 0x1885;
    FUN_1885_3364();
  }
  if ((((*(int *)0xa62 == 0xd) || (*(int *)0xa62 == 0xe)) || (*(int *)0xa62 == 0xf)) ||
     ((*(int *)0xa62 == 0x1c || (*(int *)0xa62 == 0x1e)))) {
    *(undefined1 *)0xc13e = 1;
  }
  else {
    *(undefined1 *)0xc13e = 0;
  }
  if ((*(char *)0x124 != '\0') && (*(int *)0xc22 == 0)) {
    uStack_4 = uVar14;
    FUN_17a6_000a();
  }
  uStack_4 = 1;
  pcVar8 = (code *)swi(0x3f);
  (*pcVar8)();
  uVar11 = FUN_1000_0a81();
  return uVar11;
switchD_1000_0a8a_caseD_20:
  pcVar8 = (code *)swi(0x3f);
  (*pcVar8)();
  goto LAB_1000_074c;
switchD_1000_0a8a_caseD_1a:
  cVar17 = (int)piVar5 < 0;
  bVar16 = piVar5 == (int *)0x0;
  pcVar8 = (code *)swi(0x3f);
  (*pcVar8)();
  uVar9 = in(extraout_DX);
  uVar14 = CONCAT11(extraout_AH,uVar9);
  if (!bVar16 && cVar18 == cVar17) {
switchD_1000_0a8a_caseD_1b:
    pcVar8 = (code *)swi(0x3f);
    (*pcVar8)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
caseD_18_1:
  uVar11 = CONCAT11(bVar15,((char *)((int)piVar12 + (int)unaff_SI))[-0x33]);
  uVar11 = uVar11 << 4 | uVar11 >> 5;
  ((char *)((int)piVar12 + (int)unaff_SI))[-0x33] = (char)uVar11;
  unaff_DS = uStack_4;
  if (in_CX - *piVar12 == (uint)((uVar11 & 0x100) != 0)) {
LAB_1000_0a1f:
    pcVar8 = (code *)swi(0x3f);
    uStack_4 = uVar14;
    (*pcVar8)();
  }
  else {
    bVar15 = 9 < ((byte)uVar14 & 0xf) | in_AF;
code_r0x00010a37:
    *unaff_SI = (*unaff_SI - (char)((uint)piVar12 >> 8)) - bVar15;
    unaff_DS = uStack_4;
  }
  goto LAB_1000_074c;
}


