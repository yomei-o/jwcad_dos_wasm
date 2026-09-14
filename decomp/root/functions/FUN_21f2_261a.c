/* 21f2:261a */

/* WARNING: Instruction at (ram,0x00020850) overlaps instruction at (ram,0x0002084e)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0002c24b) */
/* WARNING: Removing unreachable block (ram,0x0002c255) */
/* WARNING: Removing unreachable block (ram,0x0002c265) */

byte * __cdecl16far
FUN_21f2_261a(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6)

{
  undefined2 uVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined2 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined2 in_CX;
  char cVar8;
  int extraout_DX;
  uint uVar9;
  int in_DX;
  uint uVar10;
  int unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  int in_stack_0000002c;
  int in_stack_0000002e;
  byte *pbStack_38;
  undefined2 uStack_1a;
  undefined2 auStack_18 [3];
  byte *pbStack_12;
  int iStack_10;
  int iStack_e;
  undefined2 *puStack_c;
  undefined2 uStack_a;
  byte **ppbStack_8;
  byte *pbStack_6;
  int iVar14;
  byte bVar11;
  
  pbVar2 = param_4;
  pbVar7 = param_3;
  cVar8 = (char)((uint)in_CX >> 8);
  pbStack_6 = (byte *)0x4544;
  FUN_32b2_02bc();
  if (((uint)param_1 & 0x8000) != 0) {
    pbStack_6 = (byte *)0x32b2;
    ppbStack_8 = (byte **)0x4552;
    FUN_21f2_25b2();
  }
  iVar14 = 0x1dc0;
  pbStack_6 = (byte *)0xbf48;
  ppbStack_8 = (byte **)0x32b2;
  uStack_a = 0x4560;
  FUN_32b2_2166();
  uVar9 = (uint)(byte)param_2;
  if (0xc < uVar9) {
    pbStack_6 = (byte *)0x32b2;
    ppbStack_8 = (byte **)0x45ee;
    pbVar7 = (byte *)FUN_32b2_4cf6();
    return pbVar7;
  }
  pbVar5 = (byte *)(uVar9 * 2);
  pbVar6 = (byte *)0x1dc0;
  bVar11 = (byte)((uint)in_DX >> 8);
  uVar10 = (int)param_1 >> 0xf;
  switch(uVar9) {
  case 0:
    break;
  case 1:
    return pbVar6;
  case 2:
    *(char *)((int)unaff_DI + 7) = *(char *)((int)unaff_DI + 7) + bVar11;
    if (*(char *)0x125 != '\0') {
      pbStack_6 = (byte *)auStack_18;
      ppbStack_8 = (byte **)0x2000;
      uStack_a = 0xc657;
      FUN_32b2_2854();
      pbStack_6 = (byte *)0x7;
      ppbStack_8 = (byte **)*(undefined2 *)0x1b42;
      uStack_a = 1;
      puStack_c = (undefined2 *)0x1fb0;
      iStack_e = 0x32b2;
      iStack_10 = 0xc671;
      FUN_1def_23c5();
      pbStack_6 = (byte *)0x7;
      ppbStack_8 = (byte **)*(undefined2 *)0x1b42;
      uStack_a = 4;
      puStack_c = auStack_18;
      iStack_e = 0x1def;
      iStack_10 = 0xc68c;
      FUN_1def_23c5();
      pbStack_6 = (byte *)0x7;
      ppbStack_8 = (byte **)*(undefined2 *)0x1b42;
      uStack_a = 0x38;
      puStack_c = auStack_18;
      iStack_e = 0x1def;
      iStack_10 = 0xc6a7;
      FUN_1def_23c5();
      do {
        pbStack_6 = (byte *)0x0;
        ppbStack_8 = (byte **)0x1def;
        uStack_a = 0xc6b9;
        FUN_2bb4_09a2();
      } while( true );
    }
    return (byte *)0x1dc0;
  case 3:
    if (uVar9 != 0) {
      (&stack0x007d)[(int)unaff_DI] = (&stack0x007d)[(int)unaff_DI] + cVar8;
      return pbStack_38;
    }
    return pbVar6;
  case 4:
    *(undefined1 **)0xb200 = &stack0xfffe;
    *(undefined2 *)0xb1fe = 0x2000;
    *(undefined2 *)0xb1fc = 0x8b4f;
    FUN_32b2_02bc();
    do {
      pcVar3 = (char *)*(undefined2 *)0xb208;
      *(int *)0xb208 = *(int *)0xb208 + 1;
      cVar8 = *pcVar3;
      pcVar3 = (char *)*(undefined2 *)0xb206;
      *(int *)0xb206 = *(int *)0xb206 + 1;
      *pcVar3 = cVar8;
    } while (cVar8 != '\0');
    return (byte *)0x0;
  case 5:
    pbStack_6 = param_1;
    ppbStack_8 = &pbStack_6;
    uStack_a = 0x2000;
    puStack_c = (undefined2 *)0xa5b;
    FUN_32b2_4f1c();
    if (((int)uVar10 < 0) || (((int)uVar10 < 1 && (pbStack_6 == (byte *)0x0)))) {
      uVar9 = -(uint)(pbStack_6 < (byte *)0x8000);
    }
    else {
      uVar9 = (uint)((byte *)0x7fff < pbStack_6);
    }
    return (byte *)(uVar10 + uVar9);
  default:
    return pbVar6;
  case 7:
    return (byte *)0x1dc0;
  case 8:
    if (uVar9 == 0) {
      uVar1 = in(in_DX);
      *unaff_DI = uVar1;
      in_DX = (uint)bVar11 << 8;
    }
    *(char *)(unaff_SI + 0x4e) = *(char *)(unaff_SI + 0x4e) + (char)((uint)in_DX >> 8);
    pbStack_6 = (byte *)0x853;
    FUN_32b2_6d94();
    pbStack_6 = (byte *)0x85c;
    FUN_32b2_710c();
    puStack_c = (undefined2 *)0x32b2;
    iStack_e = 0x866;
    FUN_32b2_6eb1();
    puStack_c = (undefined2 *)0x32b2;
    iStack_e = 0x86b;
    FUN_32b2_75ec();
    pbStack_6 = (byte *)0x32b2;
    ppbStack_8 = (byte **)0x875;
    FUN_32b2_6d14();
    pbStack_6 = (byte *)0x32b2;
    ppbStack_8 = (byte **)0x87d;
    FUN_32b2_6d9b();
    pbStack_6 = (byte *)0x32b2;
    ppbStack_8 = (byte **)0x882;
    FUN_32b2_717d();
    pbStack_6 = (byte *)0x32b2;
    ppbStack_8 = (byte **)0x88b;
    iVar14 = extraout_DX;
    FUN_32b2_710c();
    pbStack_6 = (byte *)0x32b2;
    ppbStack_8 = (byte **)0x890;
    uVar9 = FUN_32b2_6f61();
    if ((iVar14 < 0) || ((iVar14 < 1 && (uVar9 == 0)))) {
      uVar9 = -(uint)(uVar9 < 0x8000);
    }
    else {
      uVar9 = (uint)(0x7fff < uVar9);
    }
    return (byte *)(iVar14 + uVar9);
  case 10:
    bVar11 = *pbVar5;
    pbVar7 = (byte *)0x1dc0;
    while (bVar11 != 0) {
      pbVar2 = param_1 + 1;
      *param_1 = *pbVar5;
      pbVar5 = (byte *)param_2 + 1;
      param_2 = (byte *)CONCAT22(param_2._2_2_,pbVar5);
      iVar14 = iVar14 + 1;
      pbVar7 = param_3;
      param_1 = pbVar2;
      if ((int)param_3 <= iVar14) break;
      unaff_ES = param_2._2_2_;
      bVar11 = *param_2;
    }
    *param_1 = 0;
    return pbVar7;
  case 0xb:
    pbStack_6 = param_5;
    ppbStack_8 = (byte **)0x2000;
    uStack_a = 0xc52;
    FUN_20a9_0732();
    pbStack_6 = (byte *)0x3ce;
    ppbStack_8 = (byte **)0x20a9;
    uStack_a = 0xc61;
    FUN_32b2_4d3c();
    ppbStack_8 = (byte **)(*(int *)0x1cc2 * (int)(byte *)param_2 +
                          (((int)(((uint)param_1 ^ uVar10) - uVar10) >> 3 ^ uVar10) - uVar10));
    while (param_3 != (byte *)0x0) {
      for (iVar14 = 0; uVar9 = (int)param_2._2_2_ >> 0xf,
          iVar14 < (int)(((int)(((uint)param_2._2_2_ ^ uVar9) - uVar9) >> 3 ^ uVar9) - uVar9);
          iVar14 = iVar14 + 1) {
        out(0x3ce,(int)param_5 << 8);
        unaff_DS = *(undefined2 *)0xbc78;
        uVar1 = *(undefined2 *)0x1cca;
        *(byte *)ppbStack_8 = *param_4;
        out(0x3ce,(int)param_6 << 8);
        *(byte *)ppbStack_8 = ~*param_4;
        ppbStack_8 = (byte **)((int)ppbStack_8 + 1);
        param_4 = param_4 + 1;
      }
      ppbStack_8 = (byte **)((int)ppbStack_8 +
                            -((((int)(((uint)param_2._2_2_ ^ uVar9) - uVar9) >> 3 ^ uVar9) - uVar9)
                             - *(int *)0x1cc2));
      param_3 = param_3 + -1;
    }
    pbStack_6 = (byte *)0xd0f;
    FUN_20a9_0702();
    pbStack_6 = (byte *)0xd14;
    pbVar7 = (byte *)FUN_32b2_4c7a();
    return pbVar7;
  }
  *(undefined2 *)0xbc0 = 1;
  ppbStack_8 = (byte **)*(undefined2 *)0xc30;
  uVar1 = *(undefined2 *)0xc32;
  uVar4 = *(undefined2 *)0xca8;
  *(undefined2 *)0xc30 = *(undefined2 *)0xca6;
  *(undefined2 *)0xc32 = uVar4;
  *(undefined2 *)0xca6 = ppbStack_8;
  *(undefined2 *)0xca8 = uVar1;
  uVar1 = *(undefined2 *)0xcac;
  *(undefined2 *)0xc48 = *(undefined2 *)0xcaa;
  *(undefined2 *)0xc4a = uVar1;
  pbStack_6 = (byte *)0xbcde;
  FUN_32b2_6d14();
  pbStack_6 = (byte *)0xbce7;
  FUN_32b2_6e63();
  uVar1 = *(undefined2 *)0xcb0;
  *(undefined2 *)0xc4c = *(undefined2 *)0xcae;
  *(undefined2 *)0xc4e = uVar1;
  pbStack_6 = (byte *)0xbcfd;
  FUN_32b2_6d14();
  pbStack_6 = (byte *)0xbd06;
  FUN_32b2_6e63();
  if (param_1 == (byte *)0x0) {
    *(undefined2 *)0xbc0 = 0;
    *(undefined2 *)0xbc0 = 1;
    uVar1 = *(undefined2 *)0xca8;
    *(undefined2 *)0x1f8c = *(undefined2 *)0xca6;
    *(undefined2 *)0x1f8e = uVar1;
    uVar1 = *(undefined2 *)0xcac;
    *(undefined2 *)0x1f90 = *(undefined2 *)0xcaa;
    *(undefined2 *)0x1f92 = uVar1;
    uVar1 = *(undefined2 *)0xcb0;
    *(undefined2 *)0x1f94 = *(undefined2 *)0xcae;
    *(undefined2 *)0x1f96 = uVar1;
    uVar1 = *(undefined2 *)0xc32;
    *(undefined2 *)0xca6 = *(undefined2 *)0xc30;
    *(undefined2 *)0xca8 = uVar1;
    pbStack_6 = (byte *)0xbd5e;
    FUN_32b2_6d14();
    pbStack_6 = (byte *)0xbd67;
    FUN_32b2_6e63();
    pbStack_6 = (byte *)0xbd6f;
    FUN_32b2_6d14();
    pbStack_6 = (byte *)0xbd78;
    FUN_32b2_6e63();
    puStack_c = (undefined2 *)*(undefined2 *)0x9380;
    uStack_a = *(undefined2 *)0x9382;
    ppbStack_8 = (byte **)puStack_c;
    if (*(char *)0xb782 != '\0') {
      iStack_e = (*(int *)0xa58 - *(int *)0xa5c) / 2;
      pbStack_6 = (byte *)0xbda9;
      FUN_32b2_6d9b();
      pbStack_6 = (byte *)0xbdb1;
      FUN_32b2_6e63();
      iStack_e = (*(int *)0xa60 - *(int *)0xa5a) / 2;
      pbStack_6 = (byte *)0xbdc8;
      FUN_32b2_6d9b();
      pbStack_6 = (byte *)0xbdd0;
      FUN_32b2_6e63();
    }
    if (*(int *)0xc60 == 0) {
      uVar1 = *(undefined2 *)0x9386;
      *(undefined2 *)0xc30 = *(undefined2 *)0x9384;
      *(undefined2 *)0xc32 = uVar1;
      pbStack_6 = (byte *)0xbe36;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xbe3b;
      FUN_32b2_6fd6();
      pbStack_6 = (byte *)0xbe44;
      FUN_32b2_6e63();
      pbStack_6 = (byte *)0xbe4c;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xbe51;
      FUN_32b2_6fd6();
      pbStack_6 = (byte *)0xbe5a;
      FUN_32b2_6e63();
      if (*(char *)0x130 == '\0') goto LAB_2bb4_0378;
      iStack_e = *(int *)0x1b3e - *(int *)0xa58;
      pbStack_6 = (byte *)0xbe73;
      FUN_32b2_6d9b();
      iStack_10 = 0x27f - *(int *)0xa58;
      pbStack_6 = (byte *)0xbe85;
      FUN_32b2_6d9b();
      pbStack_6 = (byte *)0xbe8a;
      FUN_32b2_7182();
      pbStack_6 = (byte *)0xbe93;
      FUN_32b2_704d();
      pbStack_12 = (byte *)((*(int *)0xa60 - *(int *)0xa5e) / 2);
      pbStack_6 = (byte *)0xbeaa;
      FUN_32b2_6d9b();
      pbStack_6 = (byte *)0xbeaf;
      FUN_32b2_7173();
    }
    else {
      pbStack_6 = (byte *)0xbde0;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xbde9;
      FUN_32b2_6e4b();
      pbStack_6 = (byte *)0xbdf1;
      FUN_32b2_707d();
      pbStack_6 = (byte *)0xbdfa;
      FUN_32b2_7035();
      pbStack_6 = (byte *)0xbe03;
      FUN_32b2_6e63();
      pbStack_6 = (byte *)0xbe0b;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xbe14;
      FUN_32b2_7065();
      pbStack_6 = (byte *)0xbe1d;
      FUN_32b2_7035();
    }
    pbStack_6 = (byte *)0xbeb8;
    FUN_32b2_6e63();
  }
LAB_2bb4_0378:
  if (param_1 != (byte *)0x1) goto LAB_2bb4_06da;
  if ((int)param_5 < (int)param_3) {
    pbStack_12 = param_3;
    param_3 = param_5;
    param_5 = pbVar7;
  }
  if ((int)param_4 < (int)param_6) {
    pbStack_12 = param_4;
    param_4 = param_6;
    param_6 = pbVar2;
  }
  iStack_10 = (int)param_4 - (int)param_6;
  pbStack_6 = (byte *)0xbf00;
  FUN_32b2_6d9b();
  pbStack_6 = (byte *)0xbf08;
  FUN_32b2_6e4b();
  pbStack_6 = (byte *)0xbf10;
  FUN_32b2_6ef9();
  pbStack_6 = (byte *)0xbf18;
  FUN_32b2_6d9b();
  uVar12 = param_5 < param_3;
  iStack_10 = (int)param_5 - (int)param_3;
  pbStack_6 = (byte *)0xbf29;
  FUN_32b2_6d9b();
  pbStack_6 = (byte *)0xbf31;
  FUN_32b2_6e4b();
  pbStack_6 = (byte *)0xbf36;
  FUN_32b2_7191();
  if ((bool)uVar12) {
    pbStack_6 = (byte *)0xbf40;
    FUN_32b2_6d9b();
    pbStack_6 = (byte *)0xbf48;
    FUN_32b2_6cc6();
    pbStack_6 = (byte *)0xbf4d;
    FUN_32b2_7191();
    if (!(bool)uVar12) goto LAB_2bb4_0462;
    iStack_10 = (int)param_5 - in_stack_0000002c;
    pbStack_6 = (byte *)0xbf65;
    FUN_32b2_6d9b();
    pbStack_6 = (byte *)0xbf6d;
    FUN_32b2_7124();
    pbStack_6 = (byte *)0xbf75;
    FUN_32b2_7154();
    pbStack_6 = (byte *)0xbf7e;
    FUN_32b2_6e63();
    iStack_10 = in_stack_0000002e - (int)param_6;
    pbStack_6 = (byte *)0xbf8f;
    FUN_32b2_6d9b();
    pbStack_6 = (byte *)0xbf97;
    FUN_32b2_7124();
    pbStack_6 = (byte *)0xbf9f;
    FUN_32b2_7154();
  }
  else {
LAB_2bb4_0462:
    *(undefined2 *)0xbc0 = 0;
    *(undefined2 *)0xbc0 = 1;
    uVar1 = *(undefined2 *)0xca8;
    *(undefined2 *)0x1f8c = *(undefined2 *)0xca6;
    *(undefined2 *)0x1f8e = uVar1;
    uVar1 = *(undefined2 *)0xcac;
    *(undefined2 *)0x1f90 = *(undefined2 *)0xcaa;
    *(undefined2 *)0x1f92 = uVar1;
    uVar1 = *(undefined2 *)0xcb0;
    *(undefined2 *)0x1f94 = *(undefined2 *)0xcae;
    *(undefined2 *)0x1f96 = uVar1;
    uVar1 = *(undefined2 *)0xc32;
    *(undefined2 *)0xca6 = *(undefined2 *)0xc30;
    *(undefined2 *)0xca8 = uVar1;
    pbStack_6 = (byte *)0xbff1;
    FUN_32b2_6d14();
    pbStack_6 = (byte *)0xbffa;
    FUN_32b2_6e63();
    pbStack_6 = (byte *)0xc002;
    FUN_32b2_6d14();
    pbStack_6 = (byte *)0xc00b;
    FUN_32b2_6e63();
    iStack_10 = *(int *)0x1b3e - (int)(byte *)param_2;
    pbStack_6 = (byte *)0xc01c;
    FUN_32b2_6d9b();
    pbStack_6 = (byte *)0xc024;
    FUN_32b2_6e4b();
    iStack_e = (int)param_2._2_2_ - *(int *)0xa5e;
    pbStack_6 = (byte *)0xc036;
    FUN_32b2_6d9b();
    pbStack_6 = (byte *)0xc03b;
    FUN_32b2_7182();
    pbStack_6 = (byte *)0xc043;
    FUN_32b2_6e4b();
    pbStack_6 = (byte *)0xc04b;
    FUN_32b2_6ef9();
    iStack_10 = (int)param_3 - (int)(byte *)param_2;
    pbStack_6 = (byte *)0xc05c;
    FUN_32b2_6d9b();
    pbStack_6 = (byte *)0xc064;
    FUN_32b2_6e63();
    uVar12 = param_2._2_2_ < param_4;
    iStack_10 = (int)param_2._2_2_ - (int)param_4;
    pbStack_6 = (byte *)0xc075;
    FUN_32b2_6d9b();
    pbStack_6 = (byte *)0xc07d;
    FUN_32b2_6e4b();
    pbStack_6 = (byte *)0xc085;
    FUN_32b2_6ef9();
    pbStack_6 = (byte *)0xc08d;
    FUN_32b2_6cc6();
    pbStack_6 = (byte *)0xc095;
    FUN_32b2_6cc6();
    pbStack_6 = (byte *)0xc09d;
    FUN_32b2_704d();
    pbStack_6 = (byte *)0xc0a2;
    FUN_32b2_7191();
    if ((bool)uVar12) {
      pbStack_6 = (byte *)0xc0ac;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xc0b4;
      FUN_32b2_7065();
      pbStack_6 = (byte *)0xc0b9;
      FUN_32b2_7258();
      pbStack_6 = (byte *)0xc0c1;
      FUN_32b2_710c();
      pbStack_6 = (byte *)0xc0c9;
      FUN_32b2_6e63();
      pbStack_6 = (byte *)0xc0d1;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xc0d9;
      FUN_32b2_7065();
      pbStack_6 = (byte *)0xc0e1;
      FUN_32b2_7035();
      pbStack_6 = (byte *)0xc0ea;
      FUN_32b2_704d();
      pbStack_6 = (byte *)0xc0f2;
      FUN_32b2_7095();
    }
    else {
      pbStack_6 = (byte *)0xc109;
      FUN_32b2_6d9b();
      pbStack_6 = (byte *)0xc111;
      FUN_32b2_7065();
      pbStack_6 = (byte *)0xc116;
      FUN_32b2_7258();
      pbStack_6 = (byte *)0xc11e;
      FUN_32b2_710c();
      pbStack_6 = (byte *)0xc126;
      FUN_32b2_6e63();
      pbStack_6 = (byte *)0xc12e;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xc136;
      FUN_32b2_704d();
      pbStack_6 = (byte *)0xc13e;
      FUN_32b2_7035();
      pbStack_6 = (byte *)0xc147;
      FUN_32b2_704d();
      pbStack_6 = (byte *)0x32b2;
      ppbStack_8 = (byte **)0xc150;
      FUN_32b2_7095();
    }
    pbStack_6 = (byte *)0xc156;
    FUN_32b2_6e63();
    uVar9 = *(uint *)0xa68;
    uVar12 = uVar9 < 0xc;
    uVar13 = uVar9 == 0xc;
    if ((int)uVar9 < 0xc) {
      pbStack_6 = (byte *)0xc166;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xc16f;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xc177;
      FUN_32b2_704d();
      pbStack_6 = (byte *)0xc17c;
      FUN_32b2_7191();
      if (!(bool)uVar12 && !(bool)uVar13) {
LAB_2bb4_0669:
        pbStack_6 = (byte *)0xc1ae;
        FUN_32b2_6cc6();
        pbStack_6 = (byte *)0xc1b7;
        FUN_32b2_7065();
        pbStack_6 = (byte *)0xc1bf;
        FUN_32b2_6e63();
      }
    }
    else {
      pbStack_6 = (byte *)0xc18d;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xc196;
      FUN_32b2_6cc6();
      pbStack_6 = (byte *)0xc19e;
      FUN_32b2_704d();
      pbStack_6 = (byte *)0xc1a3;
      FUN_32b2_7191();
      if (!(bool)uVar12 && !(bool)uVar13) goto LAB_2bb4_0669;
    }
    *(undefined2 *)0xc30 = uStack_1a;
    *(undefined2 *)0xc32 = auStack_18[0];
    pbStack_6 = (byte *)0xc1d4;
    FUN_32b2_6cc6();
    pbStack_6 = (byte *)0xc1d9;
    FUN_32b2_7258();
    pbStack_6 = (byte *)0xc1e1;
    FUN_32b2_7124();
    pbStack_6 = (byte *)0xc1ea;
    FUN_32b2_7095();
    pbStack_6 = (byte *)0xc1f3;
    FUN_32b2_6e63();
    pbStack_6 = (byte *)0xc1fb;
    FUN_32b2_6cc6();
    pbStack_6 = (byte *)0xc200;
    FUN_32b2_7258();
    pbStack_6 = (byte *)0xc208;
    FUN_32b2_7124();
    pbStack_6 = (byte *)0xc211;
    FUN_32b2_7095();
  }
  pbStack_6 = (byte *)0xc21a;
  FUN_32b2_6e63();
LAB_2bb4_06da:
  pbStack_6 = (byte *)0x32b2;
  ppbStack_8 = (byte **)0xc222;
  FUN_1885_5256();
  if (*(int *)0x11c == 0) {
    pbStack_6 = (byte *)0xc263;
    FUN_2bb4_07d8();
  }
  else {
    pbStack_6 = (byte *)0xc22f;
    FUN_1885_1f49();
    *(undefined2 *)0xbc0 = 1;
    pbStack_6 = (byte *)0xc239;
    FUN_2bb4_07d8();
    if (*(int *)0x11c == 3) {
      return (byte *)0x0;
    }
  }
  return (byte *)0x1;
}


