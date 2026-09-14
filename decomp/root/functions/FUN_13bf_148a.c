/* 13bf:148a */

/* WARNING: Instruction at (ram,0x0001529c) overlaps instruction at (ram,0x0001529a)
    */
/* WARNING: Removing unreachable block (ram,0x00015142) */

void FUN_13bf_148a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7,int param_8,int param_9)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  undefined2 uVar10;
  uint in_BX;
  int unaff_SI;
  undefined8 *unaff_DI;
  int unaff_ES;
  int iVar11;
  int iVar12;
  undefined2 unaff_DS;
  bool bVar13;
  undefined8 in_MM5;
  uint in_stack_00000030;
  int iVar14;
  int iVar15;
  
  iVar11 = 0x32b2;
  FUN_32b2_02bc();
  iVar14 = *(int *)0xc18;
  *(undefined2 *)0xc18 = 0;
  iVar15 = 0;
  *(undefined2 *)0xb6a = 0xffff;
  if (iVar14 == 5) {
    *(undefined2 *)0x1150 = 1;
    if (*(char *)0xc13e == '\0') {
      uVar10 = 1;
    }
    else {
      uVar10 = 2;
    }
    iVar11 = 0x1885;
    iVar14 = param_8;
    iVar15 = param_9;
    FUN_1885_027d(uVar10,param_2,param_3,param_4,param_5,param_6,param_7);
    *(undefined2 *)0x1150 = 0;
  }
  if (iVar14 == -1) {
    iVar15 = *(int *)0x90ce;
    iVar14 = *(int *)0x90cc;
    pcVar2 = (code *)swi(0x3f);
    bVar8 = (*pcVar2)(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      *(undefined2 *)0x90c8,*(undefined2 *)0x90ca,*(undefined2 *)0x90cc,
                      *(undefined2 *)0x90ce,*(undefined2 *)0x90c8,*(undefined2 *)0x90ca);
    do {
      bVar13 = (bVar8 & 0x83) == 0;
    } while ((char)(bVar8 & 0x83) < '\x01');
    swi(4);
  }
  else {
    bVar13 = iVar14 == -0x32;
  }
  if (bVar13) {
    pcVar2 = (code *)swi(0x3f);
    bVar8 = (*pcVar2)(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      *(undefined2 *)0x90c8,*(undefined2 *)0x90ca,*(undefined2 *)0x90cc,
                      *(undefined2 *)0x90ce,*(undefined2 *)0x90c8,*(undefined2 *)0x90ca,
                      *(undefined2 *)0x90cc,*(undefined2 *)0x90ce);
    do {
    } while ((char)(bVar8 & 0x83) < '\x01');
    *(int *)((int)unaff_DI + 0x4e) = *(int *)((int)unaff_DI + 0x4e) + unaff_SI;
  }
  else if (iVar14 != 1) goto LAB_13bf_15ef;
  if (*(char *)0xc13e != '\0') {
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    uVar1 = *(undefined8 *)0x21eb;
    iVar14 = (int)in_MM5;
    iVar15 = (int)((qword)in_MM5 >> 0x10);
    iVar12 = (int)((qword)in_MM5 >> 0x20);
    iVar3 = (int)((qword)in_MM5 >> 0x30);
    iVar4 = (int)uVar1;
    iVar5 = (int)((qword)uVar1 >> 0x10);
    iVar6 = (int)((qword)uVar1 >> 0x20);
    iVar7 = (int)((qword)uVar1 >> 0x30);
    in_MM5 = CONCAT17((0 < iVar7) * (iVar7 < 0x100) * (char)((qword)uVar1 >> 0x30) - (0xff < iVar7),
                      CONCAT16((0 < iVar6) * (iVar6 < 0x100) * (char)((qword)uVar1 >> 0x20) -
                               (0xff < iVar6),
                               CONCAT15((0 < iVar5) * (iVar5 < 0x100) * (char)((qword)uVar1 >> 0x10)
                                        - (0xff < iVar5),
                                        CONCAT14((0 < iVar4) * (iVar4 < 0x100) * (char)uVar1 -
                                                 (0xff < iVar4),
                                                 CONCAT13((0 < iVar3) * (iVar3 < 0x100) *
                                                          (char)((qword)in_MM5 >> 0x30) -
                                                          (0xff < iVar3),
                                                          CONCAT12((0 < iVar12) * (iVar12 < 0x100) *
                                                                   (char)((qword)in_MM5 >> 0x20) -
                                                                   (0xff < iVar12),
                                                                   CONCAT11((0 < iVar15) *
                                                                            (iVar15 < 0x100) *
                                                                            (char)((qword)in_MM5 >>
                                                                                  0x10) -
                                                                            (0xff < iVar15),
                                                                            (0 < iVar14) *
                                                                            (iVar14 < 0x100) *
                                                                            (char)in_MM5 -
                                                                            (0xff < iVar14))))))));
  }
  pcVar2 = (code *)swi(0x3f);
  iVar14 = param_8;
  iVar15 = param_9;
  (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7);
  in_BX = in_BX | in_stack_00000030;
LAB_13bf_15ef:
  if (iVar14 == 2) {
    if (*(char *)0xc13e == '\0') {
      pcVar2 = (code *)swi(0x3f);
      iVar14 = param_8;
      iVar15 = param_9;
      cVar9 = (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7);
      *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar9;
    }
    else {
      iVar15 = 0;
      pcVar2 = (code *)swi(0x3f);
      iVar14 = param_9;
      (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  if (iVar14 == -2) {
    if (*(char *)0xc13e == '\0') {
      in_BX = 0x18;
    }
    else {
      in_BX = 0x1c;
    }
    iVar11 = 0x1885;
    FUN_1885_3364();
    iVar15 = param_9;
    if (*(char *)0xc13e != '\0') {
      pcVar2 = (code *)swi(0x3f);
      (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (unaff_DI == (undefined8 *)0x0) {
        iVar15 = unaff_ES;
      }
    }
    pcVar2 = (code *)swi(0x3f);
    iVar14 = param_8;
    (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if (iVar14 == 100) {
    pcVar2 = (code *)swi(0x3f);
    iVar14 = param_8;
    iVar15 = param_9;
    cVar9 = (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7);
    *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar9;
  }
  iVar12 = iVar11;
  if (iVar14 == 0x1e) {
    iVar12 = 0x1885;
    FUN_1885_3364(0xf);
    iVar15 = 1;
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)();
    iVar14 = iVar11;
  }
  if (iVar14 == -0x1e) {
    iVar15 = 0;
    pcVar2 = (code *)swi(0x3f);
    iVar14 = param_9;
    (*pcVar2)(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  if (iVar14 == 0x14) {
    FUN_1885_3364(0xd);
    iVar15 = 1;
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)();
    iVar14 = iVar12;
  }
  if (iVar14 == -0x14) {
    pcVar2 = (code *)swi(0x3f);
    (*pcVar2)(param_3,param_4,param_5,param_6,param_7,param_8);
    pmulhw(in_MM5,*unaff_DI);
    iVar15 = param_9;
  }
  *(undefined2 *)0xb6a = 0;
  if (iVar15 != 0) {
    FUN_1885_3364(*(undefined2 *)0xa62);
  }
  return;
}


