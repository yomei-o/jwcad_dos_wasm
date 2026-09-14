/* 32b2:3916 */

undefined4 __cdecl16near FUN_32b2_3916(void)

{
  char *pcVar1;
  undefined2 uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  undefined2 in_AX;
  int iVar10;
  undefined2 in_DX;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar17;
  
  bVar17 = *(char *)0x874e == '\0';
  if (*(char *)0x874e == '\x01') {
    uVar2 = *(undefined2 *)0x2c;
    iVar10 = -0x8000;
    pcVar13 = (char *)0x0;
LAB_32b2_3931:
    do {
      pcVar14 = pcVar13;
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        pcVar4 = pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar14 = pcVar13;
        if (*pcVar4 != '\0') goto LAB_32b2_3931;
      }
      pcVar13 = pcVar14 + 1;
    } while (*pcVar14 != '\0');
    pcVar14 = pcVar14 + 3;
    pcVar13 = (char *)0x86fe;
    do {
      cVar9 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      *pcVar13 = cVar9;
      pcVar13 = pcVar13 + 1;
    } while (cVar9 != '\0');
  }
  else {
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
    if (bVar17) {
      uVar2 = *(undefined2 *)0x2c;
      pcVar13 = (char *)0x0;
      do {
        pcVar14 = (char *)0x8897;
        do {
          pcVar4 = pcVar14;
          pcVar14 = pcVar14 + 1;
          if (*pcVar4 == '\0') goto LAB_32b2_39d1;
          pcVar1 = pcVar13;
          pcVar13 = pcVar13 + 1;
          if (*pcVar1 == '\0') goto LAB_32b2_39c8;
        } while (*pcVar1 == *pcVar4);
        do {
          pcVar4 = pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (*pcVar4 != '\0');
LAB_32b2_39c8:
      } while (*pcVar13 != '\0');
LAB_32b2_3a35:
      do {
        do {
          FUN_32b2_3550();
          FUN_32b2_3550();
          FUN_32b2_3550();
          pcVar7 = (code *)swi(0x21);
          (*pcVar7)();
          pcVar7 = (code *)swi(0x21);
          (*pcVar7)();
        } while (*(byte *)0x85fd == 0);
        pbVar12 = (byte *)0x85fe;
        *(undefined1 *)(*(byte *)0x85fd + 0x85fe) = 0;
        pbVar15 = (byte *)0x86fe;
        if (*(char *)0x85ff != ':') {
          pcVar7 = (code *)swi(0x21);
          cVar9 = (*pcVar7)();
          *(char *)0x86fe = cVar9 + 'A';
          *(undefined1 *)0x86ff = 0x3a;
          pbVar15 = (byte *)0x8700;
        }
        bVar6 = 0;
        do {
          bVar8 = bVar6;
          pbVar16 = pbVar15;
          bVar6 = *pbVar12;
          pbVar3 = pbVar12;
          pbVar12 = pbVar12 + 1;
          *pbVar16 = *pbVar3;
          pbVar15 = pbVar16 + 1;
        } while (bVar6 != 0);
        if ((bVar8 == 0x5c) || (bVar17 = bVar8 < 0x3a, bVar8 == 0x3a)) {
          pbVar12 = (byte *)0x8fe7;
          do {
            bVar6 = *pbVar12;
            pbVar5 = pbVar16;
            pbVar16 = pbVar16 + 1;
            pbVar3 = pbVar12;
            pbVar12 = pbVar12 + 1;
            *pbVar5 = *pbVar3;
            bVar17 = false;
          } while (bVar6 != 0);
        }
        *(undefined1 *)0x8797 = *(undefined1 *)0x86fe;
        pcVar7 = (code *)swi(0x21);
        (*pcVar7)();
      } while (bVar17);
    }
    else {
      pcVar7 = (code *)swi(0x21);
      cVar9 = (*pcVar7)();
      *(char *)0x8797 = cVar9 + 'A';
      *(char *)0x86fe = cVar9 + 'A';
      *(undefined1 *)0x86ff = 0x3a;
      *(undefined1 *)0x8700 = 0x5c;
      pcVar13 = (char *)0x8701;
      pcVar7 = (code *)swi(0x21);
      (*pcVar7)();
      for (; *pcVar13 != '\0'; pcVar13 = pcVar13 + 1) {
        if (*pcVar13 == '/') {
          *pcVar13 = '\\';
        }
      }
      if (pcVar13[-1] != '\\') {
        *pcVar13 = '\\';
        pcVar13 = pcVar13 + 1;
      }
      pcVar14 = (char *)0x8fe7;
      do {
        cVar9 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        *pcVar13 = cVar9;
        pcVar13 = pcVar13 + 1;
      } while (cVar9 != '\0');
    }
LAB_32b2_3ab4:
    pcVar7 = (code *)swi(0x21);
    (*pcVar7)();
  }
  return CONCAT22(in_DX,in_AX);
LAB_32b2_39d1:
  pcVar14 = (char *)0x86fe;
  if (pcVar13[1] != ':') {
    pcVar7 = (code *)swi(0x21);
    cVar9 = (*pcVar7)();
    *(char *)0x86fe = cVar9 + 'A';
    *(undefined1 *)0x86ff = 0x3a;
    pcVar14 = (char *)0x8700;
  }
  for (; (cVar9 = *pcVar13, cVar9 != '\0' && (cVar9 != ';')); pcVar13 = pcVar13 + 1) {
    if (cVar9 == '/') {
      cVar9 = '\\';
    }
    *pcVar14 = cVar9;
    pcVar14 = pcVar14 + 1;
  }
  if (pcVar14[-1] != '\\') {
    *pcVar14 = '\\';
    pcVar14 = pcVar14 + 1;
  }
  pcVar11 = (char *)0x8fe7;
  do {
    cVar9 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar14 = cVar9;
    pcVar14 = pcVar14 + 1;
    bVar17 = false;
  } while (cVar9 != '\0');
  *(undefined1 *)0x8797 = *(undefined1 *)0x86fe;
  pcVar7 = (code *)swi(0x21);
  (*pcVar7)();
  if (!bVar17) goto LAB_32b2_3ab4;
  if (*pcVar13 == '\0') goto LAB_32b2_3a35;
  pcVar13 = pcVar13 + 1;
  goto LAB_32b2_39d1;
}


