/* Ghidra decompilation of jw28.exe - machine output, not the original source. */

/* 3ab8:0000  OVL_0000  107 bytes, 0 callers */

void __cdecl16far OVL_0000(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_21f2_3454(0x22b2,param_1,0x60c0,0x17bc,0x612a);
  uVar1 = 0xdef;
  FUN_1000_0599(0x22b2,0x3c,2);
  if (*(int *)0xbed2 != 0) {
    uVar1 = 0x11f2;
    func_0x00012276(0xdef,0x60d4,*(undefined2 *)0xbede,*(undefined2 *)0xc724);
  }
  *(undefined2 *)0xc22 = 2;
  FUN_1000_0599(uVar1,param_2,3);
  func_0x00012276(0xdef,0x60e4);
  return;
}



/* 3ab8:006b  FUN_3ab8_006b  235 bytes, 0 callers */

void __cdecl16far FUN_3ab8_006b(undefined2 param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 local_48 [40];
  undefined1 local_20 [6];
  int local_1a;
  undefined1 local_18 [6];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 local_e;
  byte *pbStack_c;
  undefined1 *puStack_a;
  byte *pbStack_8;
  byte *pbStack_6;
  
  pbStack_6 = (byte *)0xabf6;
  FUN_21f2_0ebc();
  pbStack_6 = (byte *)&local_e;
  pbStack_8 = local_18;
  puStack_a = local_48;
  pbStack_c = local_20 + 2;
  local_e = param_1;
  uStack_10 = 0x22b2;
  uStack_12 = 0xac0f;
  FUN_21f2_46c6();
  pbStack_6 = local_20 + 2;
  pbStack_8 = param_2;
  puStack_a = (undefined1 *)0x22b2;
  pbStack_c = (byte *)0xac1e;
  func_0x00024c86();
  pbStack_6 = local_20 + 2;
  pbStack_8 = (byte *)0x22b2;
  puStack_a = (undefined1 *)0xac29;
  iVar1 = func_0x00024ce4();
  pbStack_6 = local_48;
  pbStack_8 = (byte *)0x22b2;
  puStack_a = (undefined1 *)0xac35;
  iVar2 = func_0x00024ce4();
  if (0x28 < (uint)(iVar1 + iVar2)) {
    pbStack_6 = local_20 + 2;
    pbStack_8 = (byte *)0x22b2;
    puStack_a = (undefined1 *)0xac46;
    iVar1 = func_0x00024ce4();
    local_20[-iVar1] = 0;
  }
  pbStack_6 = local_48;
  pbStack_8 = param_2;
  puStack_a = (undefined1 *)0x22b2;
  pbStack_c = (byte *)0xac5b;
  FUN_21f2_2d26();
  if (*param_2 == 0) {
    pbStack_6 = (byte *)0x28;
    pbStack_8 = param_2;
    puStack_a = (undefined1 *)0x22b2;
    pbStack_c = (byte *)0xac6f;
    FUN_21f2_50fe();
  }
  pbStack_6 = (byte *)0x3a;
  pbStack_8 = param_2;
  puStack_a = (undefined1 *)0x22b2;
  pbStack_c = (byte *)0xac7d;
  iVar1 = FUN_21f2_3b7a();
  if (iVar1 == 0) {
    pbStack_6 = (byte *)&local_1a;
    pbStack_8 = (byte *)0x22b2;
    puStack_a = (undefined1 *)0xac8c;
    FUN_21f2_588a();
    pbStack_6 = local_48;
    pbStack_8 = (byte *)(local_1a + 0x40);
    puStack_a = (undefined1 *)0x61f2;
    pbStack_c = param_2;
    local_e = 0x22b2;
    uStack_10 = 0xaca4;
    FUN_21f2_3454();
  }
  pbStack_6 = param_2;
  pbStack_8 = (byte *)0x22b2;
  puStack_a = (undefined1 *)0xacaf;
  iVar1 = func_0x00024ce4();
  if (param_2[iVar1 + -1] == 0x5c) {
    param_2[iVar1 + -1] = 0;
  }
  if ((0x60 < *param_2) && (*param_2 < 0x71)) {
    *param_2 = *param_2 - 0x20;
  }
  return;
}



/* 3ab8:0156  FUN_3ab8_0156  2619 bytes, 0 callers */

void __cdecl16far FUN_3ab8_0156(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined2 unaff_DS;
  int local_36;
  int local_34;
  byte local_32;
  int local_30;
  undefined1 local_2e [30];
  undefined2 uStack_10;
  undefined2 uStack_e;
  char *pcStack_c;
  char *pcStack_a;
  int *piStack_8;
  int *piStack_6;
  
  piStack_6 = (int *)0xace1;
  FUN_21f2_0ebc();
  *(byte *)0xc3be = *(byte *)0xc3be & 0xf2;
  *(undefined2 *)0xc3c0 = 6;
  *(undefined2 *)0xc3c2 = 0xffff;
  *(byte *)0xc3be = *(byte *)0xc3be | 1;
  *(undefined2 *)0x1cc4 = 0x12;
  local_30 = 1;
  do {
    if (param_1 < local_30 + 1) {
      piStack_6 = (int *)local_2e;
      piStack_8 = (int *)0x0;
      pcStack_a = (char *)0x1108;
      pcStack_c = (char *)0x22b2;
      uStack_e = 0xb700;
      iVar5 = func_0x000276d7();
      if (iVar5 == 0) {
        *(undefined1 *)0x1106 = 1;
      }
      return;
    }
    pcVar2 = (char *)*(undefined2 *)(local_30 * 2 + param_2);
    piStack_8 = (int *)pcVar2;
    if ((*pcVar2 == '-') || (*pcVar2 == '/')) {
      cVar1 = pcVar2[1];
      if (cVar1 == '$') {
        *(undefined1 *)0x124 = 6;
        *(byte *)0xc3be = *(byte *)0xc3be | 1;
        *(byte *)0xc3be = *(byte *)0xc3be & 0xfb;
        *(undefined2 *)0x11f0 = 100;
        *(undefined1 *)0x126 = 3;
        *(undefined1 *)0x123 = 8;
        *(undefined1 *)0x136 = 2;
        *(undefined1 *)0x132 = 2;
        *(undefined1 *)0x12a = 1;
        *(undefined1 *)0x139 = 1;
        *(undefined1 *)0x130 = 1;
        *(undefined1 *)0x12f = 1;
        *(undefined1 *)0x1174 = 1;
        *(undefined1 *)0x133 = 1;
        *(undefined1 *)0x128 = 1;
        *(undefined2 *)0x76 = 300;
        *(undefined2 *)0x78 = 0;
        *(undefined2 *)0x114 = 300;
        *(undefined2 *)0x116 = 0;
        *(undefined1 *)0x125 = 0xb;
        local_36 = 0;
        if (pcVar2[2] == '$') {
          local_36 = 3;
          *(undefined1 *)0x123 = 10;
          *(undefined1 *)0x132 = 0xe;
          *(undefined1 *)0x133 = 1;
          *(undefined1 *)0x13b = 2;
          *(undefined1 *)0x7e = 0xb;
        }
        if (pcVar2[3] == '$') {
          local_36 = 4;
          *(undefined1 *)0x7e = 0xc;
          *(undefined1 *)0x84 = 2;
        }
        if (pcVar2[4] == '$') {
          local_36 = 5;
          *(undefined1 *)0x123 = 0xb;
          *(undefined1 *)0x125 = 10;
          *(undefined1 *)0x132 = 2;
        }
        if (pcVar2[4] == '#') {
          local_36 = 5;
          *(undefined1 *)0x123 = 0xc;
          *(undefined1 *)0x125 = 10;
        }
        if (local_36 != 0) {
          if (pcVar2[local_36] == '1') {
            *(undefined1 *)0x12e = 0xb;
          }
          if (pcVar2[local_36] == '2') {
            *(undefined1 *)0x12e = 0xc;
          }
          if (pcVar2[local_36] == '3') {
            *(undefined1 *)0x12e = 0xd;
          }
          if (pcVar2[local_36] == '4') {
            *(undefined1 *)0x12e = 0xe;
          }
          if (pcVar2[local_36] == '5') {
            *(undefined1 *)0x12e = 0xf;
          }
        }
      }
      else if (cVar1 == '9') {
        if (pcVar2[2] == '8') {
          *(byte *)0x129 = *(byte *)0x129 | 1;
        }
        if (pcVar2[2] == '5') {
          *(byte *)0x129 = *(byte *)0x129 | 10;
        }
      }
      else if (cVar1 == 'A') {
LAB_3ab8_0418:
        *(undefined1 *)0x124 = 1;
        if (pcVar2[2] == '2') {
          *(undefined1 *)0x124 = 2;
        }
        if ((pcVar2[2] == '4') && (*(undefined1 *)0x124 = 4, pcVar2[3] == '0')) {
          *(undefined1 *)0x124 = 0x28;
        }
        if ((pcVar2[2] == '6') && (*(undefined1 *)0x124 = 6, pcVar2[3] == '0')) {
          *(undefined1 *)0x124 = 0x3c;
        }
      }
      else if (cVar1 == 'B') {
LAB_3ab8_0460:
        local_36 = 2;
        *(undefined1 *)0x7e = 0;
        if ((pcVar2[2] == 'A') || (pcVar2[2] == 'a')) {
          local_36 = 3;
          *(undefined1 *)0x7e = 0xb;
        }
        if ((pcVar2[2] == 'B') || (pcVar2[2] == 'b')) {
          local_36 = 3;
          *(undefined1 *)0x7e = 0xc;
        }
        piStack_6 = (int *)0x76;
        piStack_8 = (int *)0x61f8;
        pcStack_a = pcVar2 + local_36;
        pcStack_c = (char *)0x22b2;
        uStack_e = 0xb02c;
        FUN_21f2_34ae();
      }
      else if (cVar1 == 'C') {
LAB_3ab8_04b2:
        local_36 = 2;
        *(byte *)0xc3be = *(byte *)0xc3be | 5;
        if (pcVar2[2] == '0') {
          *(byte *)0xc3be = *(byte *)0xc3be & 0xf2;
        }
        else {
          if ((pcVar2[2] == 'A') || (pcVar2[2] == 'a')) {
            *(undefined1 *)0x12a = 1;
            *(byte *)0xc3be = *(byte *)0xc3be & 0xfb;
            local_36 = 3;
          }
          if ((pcVar2[2] == 'B') || (pcVar2[2] == 'b')) {
            *(undefined1 *)0x12a = 2;
            *(byte *)0xc3be = *(byte *)0xc3be & 0xfb;
            local_36 = 3;
          }
          if (pcVar2[local_36] == '#') {
            *(undefined1 *)0x4b = 1;
            local_36 = local_36 + 1;
          }
          if (pcVar2[local_36] != ' ') {
            piStack_6 = (int *)0x2c;
            pcStack_a = (char *)0x22b2;
            pcStack_c = (char *)0xb0a8;
            puVar4 = (undefined1 *)FUN_21f2_3b7a();
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0x20;
            }
            piStack_6 = (int *)0xc3c2;
            piStack_8 = (int *)0xc3c0;
            pcStack_a = (char *)0x1f8;
            pcStack_c = pcVar2 + local_36;
            uStack_e = 0x22b2;
            uStack_10 = 0xb0ce;
            FUN_21f2_34ae();
          }
        }
      }
      else if (cVar1 == 'D') {
LAB_3ab8_0554:
        local_32 = pcVar2[2];
        *(undefined1 *)0xd16 = 0;
        if ((0x40 < local_32) && (local_32 < 0x5b)) {
          *(char *)0xd16 = local_32 - 0x40;
        }
        if ((0x60 < local_32) && (local_32 < 0x7b)) {
          *(char *)0xd16 = local_32 + 0xa0;
        }
      }
      else if (cVar1 == 'E') {
LAB_3ab8_0589:
        if ((0x2f < (byte)pcVar2[2]) && ((byte)pcVar2[2] < 0x3a)) {
          local_36 = 0;
          local_34 = 0;
          piStack_6 = &local_36;
          piStack_8 = &local_34;
          pcStack_a = (char *)0x1ee;
          pcStack_c = pcVar2 + 2;
          uStack_e = 0x22b2;
          uStack_10 = 0xb138;
          FUN_21f2_34ae();
          *(int *)0x4e = local_34;
          *(int *)0x50 = local_36;
        }
      }
      else if (cVar1 == 'F') {
LAB_3ab8_05ca:
        if (((pcVar2[2] == '*') || (pcVar2[2] == '#')) || (pcVar2[2] == '&')) {
          if (pcVar2[2] == '#') {
            *(undefined1 *)0x139 = 1;
          }
          if (pcVar2[2] == '&') {
            *(undefined1 *)0x139 = 2;
          }
          local_34 = 0;
          piStack_6 = &local_34;
          piStack_8 = (int *)0x1ea;
          pcStack_a = pcVar2 + 3;
          pcStack_c = (char *)0x22b2;
          uStack_e = 0xb18e;
          FUN_21f2_34ae();
          if ((9 < local_34) && (local_34 < 0xc9)) {
            *(int *)0x11f0 = local_34;
          }
        }
        else if (pcVar2[2] != '\0') {
          piStack_8 = (int *)(pcVar2 + 2);
          goto LAB_3ab8_0404;
        }
      }
      else if (cVar1 == 'G') {
LAB_3ab8_0638:
        *(undefined1 *)0x120 = 1;
        if (pcVar2[2] == '2') {
          *(undefined1 *)0x120 = 2;
        }
      }
      else if (cVar1 == 'H') {
LAB_3ab8_0651:
        if (((byte)pcVar2[2] < 0x30) || (0x39 < (byte)pcVar2[2])) {
          *(undefined1 *)0x130 = 1;
        }
        else {
          *(undefined1 *)0x130 = 0;
          local_36 = 0;
          local_34 = 0;
          piStack_6 = &local_36;
          piStack_8 = &local_34;
          pcStack_a = (char *)0x1ee;
          pcStack_c = pcVar2 + 2;
          uStack_e = 0x22b2;
          uStack_10 = 0xb202;
          FUN_21f2_34ae();
          if ((local_34 == 1) || (local_34 == 2)) {
            *(undefined1 *)0x130 = (char)local_34;
          }
          if ((4 < local_36) && (local_36 < 0xfb)) {
            *(undefined1 *)0x131 = (undefined1)local_36;
          }
        }
      }
      else if (cVar1 == 'I') {
LAB_3ab8_06b8:
        *(undefined1 *)0x122 = 1;
        if (pcVar2[2] == '2') {
          *(undefined1 *)0x122 = 2;
        }
      }
      else if (cVar1 == 'K') {
LAB_3ab8_06ce:
        *(undefined1 *)0x127 = 1;
        if (pcVar2[2] == '2') {
          *(undefined1 *)0x127 = 2;
        }
      }
      else if (cVar1 == 'L') {
LAB_3ab8_06e7:
        *(undefined1 *)0x126 = 1;
        local_36 = 2;
        *(undefined1 *)0x12f = 0;
        *(undefined1 *)0x136 = 0;
        if (pcVar2[2] == '0') {
          *(undefined1 *)0x126 = 0;
          local_36 = 3;
        }
        if (pcVar2[2] == '1') {
          *(undefined1 *)0x126 = 1;
          local_36 = 3;
        }
        if (pcVar2[2] == '2') {
          *(undefined1 *)0x126 = 2;
          local_36 = 3;
        }
        if (pcVar2[2] == '3') {
          *(undefined1 *)0x136 = 1;
          local_36 = 3;
        }
        if (pcVar2[2] == '4') {
          *(undefined1 *)0x136 = 1;
          *(undefined1 *)0x126 = 2;
          local_36 = 3;
        }
        if (pcVar2[2] == '6') {
          *(undefined1 *)0x136 = 2;
          *(undefined1 *)0x126 = 3;
          local_36 = 3;
        }
        if (pcVar2[2] == '8') {
          *(undefined1 *)0x12f = 1;
          *(undefined1 *)0x136 = 2;
          *(undefined1 *)0x126 = 3;
          local_36 = 3;
        }
        if (pcVar2[local_36] == '#') {
          *(undefined1 *)0x137 = 1;
        }
      }
      else if (cVar1 == 'M') {
LAB_3ab8_0791:
        *(undefined1 *)0x123 = 1;
        if (pcVar2[2] == '0') {
          *(undefined1 *)0x123 = 0;
        }
        if ((pcVar2[2] == '2') || (pcVar2[2] == '3')) {
          *(undefined1 *)0x123 = 2;
        }
        if (pcVar2[2] == '4') {
          *(undefined1 *)0x123 = 4;
        }
        if (pcVar2[2] == '5') {
          *(undefined1 *)0x123 = 5;
        }
        if (pcVar2[2] == '6') {
          *(undefined1 *)0x123 = 6;
        }
        if (pcVar2[2] == '8') {
          *(undefined1 *)0x123 = 8;
        }
        if (pcVar2[2] == '9') {
          *(undefined1 *)0x123 = 9;
        }
        if ((pcVar2[2] == 'a') || (pcVar2[2] == 'A')) {
          *(undefined1 *)0x123 = 10;
        }
        if ((pcVar2[2] == 'b') || (pcVar2[2] == 'B')) {
          *(undefined1 *)0x123 = 0xb;
        }
        if ((pcVar2[2] == 'c') || (pcVar2[2] == 'C')) {
          *(undefined1 *)0x123 = 0xc;
        }
        if (pcVar2[2] == '#') {
          *(undefined1 *)0x114a = 1;
          *(undefined1 *)0x123 = 0x14;
          *(undefined1 *)0x114b = 0x1e;
          uVar3 = *(undefined2 *)0xa4f2;
          *(undefined2 *)0x113a = *(undefined2 *)0xa4f0;
          *(undefined2 *)0x113c = uVar3;
          uVar3 = *(undefined2 *)0xa4f6;
          *(undefined2 *)0x1142 = *(undefined2 *)0xa4f4;
          *(undefined2 *)0x1144 = uVar3;
          uVar3 = *(undefined2 *)0xa4fa;
          *(undefined2 *)0x113e = *(undefined2 *)0xa4f8;
          *(undefined2 *)0x1140 = uVar3;
          uVar3 = *(undefined2 *)0xa4f6;
          *(undefined2 *)0x1146 = *(undefined2 *)0xa4f4;
          *(undefined2 *)0x1148 = uVar3;
          *(undefined2 *)0xca0 = 0;
        }
      }
      else if (cVar1 == 'N') {
LAB_3ab8_0878:
        local_34 = 0;
        piStack_6 = &local_34;
        piStack_8 = (int *)0x1ea;
        pcStack_a = pcVar2 + 2;
        pcStack_c = (char *)0x22b2;
        uStack_e = 0xb410;
        FUN_21f2_34ae();
        if ((0 < local_34) && (local_34 < 0x21)) {
          *(int *)0x1c4 = local_34;
          *(int *)0x1c6 = local_34;
        }
      }
      else if (cVar1 == 'O') {
LAB_3ab8_08ae:
        local_36 = 2;
        local_34 = 0;
        *(undefined1 *)0x132 = 1;
        if ((pcVar2[2] == 'P') || (pcVar2[2] == 'p')) {
          local_36 = 3;
          *(undefined1 *)0x132 = 0xb;
        }
        piStack_6 = &local_34;
        piStack_8 = (int *)0x1ea;
        pcStack_a = pcVar2 + local_36;
        pcStack_c = (char *)0x22b2;
        uStack_e = 0xb46a;
        FUN_21f2_34ae();
        if ((1 < local_34) && (local_34 < 6)) {
          *(char *)0x132 = *(char *)0x132 + (char)local_34 + -1;
        }
      }
      else if (cVar1 == 'P') {
LAB_3ab8_090b:
        *(undefined1 *)0x1174 = 1;
        local_34 = 0;
        piStack_6 = &local_34;
        piStack_8 = (int *)0x1ea;
        pcStack_a = pcVar2 + 2;
        pcStack_c = (char *)0x22b2;
        uStack_e = 0xb4a8;
        FUN_21f2_34ae();
        if (local_34 == 2) {
          *(undefined1 *)0x1174 = 0;
        }
        if (1 < local_34) {
          *(undefined1 *)0x1175 = 1;
        }
        if (local_34 == 4) {
          *(undefined1 *)0x1174 = 0;
        }
        if (3 < local_34) {
          *(undefined1 *)0x1175 = 2;
        }
        if (100 < local_34) {
          *(undefined1 *)0x1175 = 0;
        }
        if (local_34 == 0x6f) {
          *(undefined1 *)0x74 = 1;
        }
        if (local_34 == 0x70) {
          *(undefined1 *)0x74 = 2;
        }
        if (local_34 == 0x72) {
          *(undefined1 *)0x74 = 4;
        }
        if (local_34 == 0x74) {
          *(undefined1 *)0x74 = 6;
        }
      }
      else if (cVar1 == 'Q') {
LAB_3ab8_0994:
        if (pcVar2[2] == '0') {
          *(undefined1 *)0x133 = 0;
          *(undefined1 *)0x13b = 0;
        }
        else {
          if (*(char *)0x132 == '\0') {
            *(undefined1 *)0x132 = 1;
          }
          *(undefined1 *)0x133 = 1;
          *(undefined1 *)0x13b = 0;
          if (pcVar2[2] == '1') {
            *(undefined1 *)0x13b = 1;
          }
          if (pcVar2[2] == '2') {
            *(undefined1 *)0x13b = 2;
          }
        }
      }
      else if (cVar1 == 'R') {
LAB_3ab8_09da:
        local_36 = 0;
        local_34 = 0;
        piStack_6 = &local_36;
        piStack_8 = &local_34;
        pcStack_a = (char *)0x1ee;
        pcStack_c = pcVar2 + 2;
        uStack_e = 0x22b2;
        uStack_10 = 0xb579;
        FUN_21f2_34ae();
        if (local_34 < 1) {
          local_34 = 1;
        }
        if (0xff < local_34) {
          local_34 = 0xff;
        }
        if (0xff < local_36) {
          local_36 = 0xff;
        }
        if (local_36 == 0) {
          local_36 = local_34;
        }
        *(int *)0x12c = local_34 * 0x100 + local_36;
      }
      else if (cVar1 == 'S') {
LAB_3ab8_0a39:
        *(undefined1 *)0x128 = 1;
        piStack_6 = (int *)0x114;
        piStack_8 = (int *)0x61fc;
        pcStack_a = pcVar2 + 2;
        pcStack_c = (char *)0x22b2;
        uStack_e = 0xb5d1;
        FUN_21f2_34ae();
        if ((*(int *)0x116 < 1) && ((*(int *)0x116 < 0 || (*(uint *)0x114 < 10)))) {
          *(undefined2 *)0x114 = 10;
          *(undefined2 *)0x116 = 0;
        }
      }
      else if (cVar1 == 'T') {
LAB_3ab8_0a79:
        piStack_6 = (int *)0x3;
        piStack_8 = (int *)(pcVar2 + 2);
        pcStack_a = (char *)0xed4;
        pcStack_c = (char *)0x22b2;
        uStack_e = 0xb60c;
        FUN_21f2_2de0();
      }
      else if (cVar1 == 'U') {
LAB_3ab8_0a8f:
        *(undefined1 *)0x138 = 1;
      }
      else if (cVar1 == 'V') {
LAB_3ab8_0a97:
        local_34 = 0;
        local_36 = 0xf;
        piStack_6 = &local_36;
        piStack_8 = &local_34;
        pcStack_a = (char *)0x6200;
        pcStack_c = pcVar2 + 2;
        uStack_e = 0x22b2;
        uStack_10 = 0xb638;
        FUN_21f2_34ae();
        if (0 < local_34) {
          *(int *)0x1cc4 = local_34;
        }
        if (-1 < local_36) {
          local_34 = local_36 * 10;
          *(byte *)0x129 = *(byte *)0x129 | (byte)local_34;
        }
      }
      else if (cVar1 == 'Y') {
LAB_3ab8_0aff:
        *(undefined1 *)0x134 = 1;
      }
      else {
        if (cVar1 != 'Z') {
          if (cVar1 == 'a') goto LAB_3ab8_0418;
          if (cVar1 == 'b') goto LAB_3ab8_0460;
          if (cVar1 == 'c') goto LAB_3ab8_04b2;
          if (cVar1 == 'd') goto LAB_3ab8_0554;
          if (cVar1 == 'e') goto LAB_3ab8_0589;
          if (cVar1 == 'f') goto LAB_3ab8_05ca;
          if (cVar1 == 'g') goto LAB_3ab8_0638;
          if (cVar1 == 'h') goto LAB_3ab8_0651;
          if (cVar1 == 'i') goto LAB_3ab8_06b8;
          if (cVar1 == 'k') goto LAB_3ab8_06ce;
          if (cVar1 == 'l') goto LAB_3ab8_06e7;
          if (cVar1 == 'm') goto LAB_3ab8_0791;
          if (cVar1 == 'n') goto LAB_3ab8_0878;
          if (cVar1 == 'o') goto LAB_3ab8_08ae;
          if (cVar1 == 'p') goto LAB_3ab8_090b;
          if (cVar1 == 'q') goto LAB_3ab8_0994;
          if (cVar1 == 'r') goto LAB_3ab8_09da;
          if (cVar1 == 's') goto LAB_3ab8_0a39;
          if (cVar1 == 't') goto LAB_3ab8_0a79;
          if (cVar1 == 'u') goto LAB_3ab8_0a8f;
          if (cVar1 == 'v') goto LAB_3ab8_0a97;
          if (cVar1 == 'y') goto LAB_3ab8_0aff;
          if (cVar1 != 'z') {
            if (cVar1 == -0x46) {
              *(int *)0xca0 = 7 - *(int *)0xca0;
            }
            goto LAB_3ab8_03c4;
          }
        }
        *(undefined1 *)0x125 = 1;
        if (pcVar2[2] == '2') {
          *(undefined1 *)0x125 = 2;
        }
        if (pcVar2[2] == '4') {
          *(undefined1 *)0x125 = 4;
        }
        if (pcVar2[2] == '6') {
          *(undefined1 *)0x125 = 6;
        }
        if (pcVar2[2] == '8') {
          *(undefined1 *)0x125 = 8;
        }
        if ((pcVar2[2] == 'a') || (pcVar2[2] == 'A')) {
          *(undefined1 *)0x125 = 10;
        }
        if ((pcVar2[2] == 'b') || (pcVar2[2] == 'B')) {
          *(undefined1 *)0x125 = 0xb;
        }
      }
    }
    else {
      piStack_6 = (int *)0x2e;
      pcStack_a = (char *)0x22b2;
      pcStack_c = (char *)0xaf77;
      iVar5 = FUN_21f2_3b7a();
      piStack_8 = (int *)pcVar2;
      if (iVar5 != 0) {
LAB_3ab8_0404:
        piStack_6 = (int *)0x32;
        pcStack_a = (char *)0xbefe;
        pcStack_c = (char *)0x22b2;
        uStack_e = 0xaf8d;
        FUN_21f2_2de0();
        *(undefined2 *)0x112 = 1;
      }
    }
LAB_3ab8_03c4:
    local_30 = local_30 + 1;
  } while( true );
}



/* 3ab8:0b91  FUN_3ab8_0b91  806 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_3ab8_0b91(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined2 local_86;
  int *local_84;
  undefined2 local_82;
  undefined2 local_80;
  int local_7e [50];
  int local_1a;
  int local_18 [4];
  int iStack_10;
  undefined4 local_e;
  int **ppiStack_a;
  int *piStack_8;
  int *piStack_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  uVar5 = 0x22b2;
  piStack_6 = (int *)0xb71c;
  FUN_21f2_0ebc();
LAB_3ab8_0b9c:
  do {
    local_4 = (int *)0x6206;
    piStack_6 = local_7e;
    ppiStack_a = (int **)0xb729;
    piStack_8 = (int *)uVar5;
    FUN_21f2_3454();
    local_4 = (int *)0x9b0;
    piStack_6 = local_7e;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb738;
    FUN_21f2_2d26();
    local_4 = (int *)0x6220;
    piStack_6 = local_7e;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb747;
    FUN_21f2_2d26();
    local_4 = (int *)0x424;
    piStack_6 = local_7e;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb756;
    FUN_21f2_2d26();
    local_4 = (int *)0x6222;
    piStack_6 = local_7e;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb765;
    FUN_21f2_2d26();
    if (*(int *)0x78 == 0 && *(int *)0x76 == 0) {
      local_4 = (int *)0x6227;
    }
    else {
      local_4 = (int *)0x6224;
    }
    piStack_6 = local_7e;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb782;
    FUN_21f2_2d26();
    local_4 = (int *)0x622a;
    piStack_6 = local_7e;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb791;
    FUN_21f2_2d26();
    local_4 = (int *)0x7f2;
    piStack_6 = local_7e;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb7a0;
    FUN_21f2_2d26();
    local_4 = (int *)0x622d;
    piStack_6 = local_7e;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb7af;
    FUN_21f2_2d26();
    local_4 = (int *)0x7e0;
    piStack_6 = local_7e;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb7be;
    FUN_21f2_2d26();
    local_4 = local_7e;
    piStack_6 = (int *)0x6;
    piStack_8 = (int *)0x22b2;
    ppiStack_a = (int **)0xb7cd;
    FUN_1def_07a4();
    if (1 < *(byte *)0x136) {
      *(undefined2 *)0xc1a = 1;
    }
    local_4 = local_18;
    piStack_6 = &local_86;
    piStack_8 = &local_82;
    ppiStack_a = (int **)local_7e;
    local_e._2_2_ = (int *)0x2710;
    local_e._0_2_ = 0x1bb4;
    iStack_10 = -0x480a;
    local_18[2] = FUN_1def_0904();
    *(undefined2 *)0xc1a = 0;
    local_4 = (int *)0x1bb4;
    piStack_6 = (int *)0xb807;
    func_0x0000c3ca();
    if (*(int *)0x158 != 0) {
      return;
    }
    local_4 = local_18 + 3;
    piStack_6 = (int *)&local_e;
    piStack_8 = local_18 + 1;
    ppiStack_a = &local_4;
    local_e._2_2_ = (int *)0x885;
    uVar5 = 0x885;
    local_e._0_2_ = -0x47da;
    func_0x0000dcbd();
    if ((((local_18[0] == 0) && (*(char *)0x15a == '\0')) && (0x30 < local_18[3])) &&
       ((9 < *(int *)0x11f0 && (local_18[2] == 1)))) {
      local_4 = local_7e;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    else {
      local_4 = local_18 + 3;
      piStack_6 = (int *)&local_e;
      piStack_8 = local_18 + 1;
      ppiStack_a = &local_4;
      local_e._2_2_ = (int *)0x885;
      local_e._0_2_ = -0x4796;
      func_0x0000dcbd();
      if (*(int *)0xc18 != 500) {
        if (local_18[0] == 0) {
LAB_3ab8_0d4d:
          uVar5 = 0x885;
          if (*(int *)0xc18 == 0) {
            if (local_18[0] == 1) {
              local_18[2] = 1;
            }
            if (local_18[0] == 2) {
              local_18[2] = 2;
            }
            if ((local_18[2] != 0xd) || (*(byte *)0x123 < 5)) {
              if (local_18[2] == 1) {
                local_4 = local_7e;
                pcVar1 = (code *)swi(0x3f);
                (*pcVar1)();
              }
              else if (local_18[2] == 2) {
                local_4 = local_7e;
                pcVar1 = (code *)swi(0x3f);
                (*pcVar1)();
              }
              else if (local_18[2] == 3) {
                pcVar1 = (code *)swi(0x3f);
                (*pcVar1)();
              }
              else if (local_18[2] == 4) {
                pcVar1 = (code *)swi(0x3f);
                (*pcVar1)();
              }
              else if (local_18[2] == 5) {
                pcVar1 = (code *)swi(0x3f);
                local_1a = (*pcVar1)();
                if (local_1a == 2) {
                  local_4 = local_7e;
                  pcVar1 = (code *)swi(0x3f);
                  (*pcVar1)();
                }
              }
              else if (local_18[2] == 6) {
                local_4 = (int *)0x885;
                piStack_6 = (int *)0xba4b;
                local_1a = FUN_3ab8_2f0e();
                if (local_1a == 1) {
                  local_4 = (int *)0x1;
                  piStack_6 = (int *)0x885;
                  uVar5 = 0x22b2;
                  piStack_8 = (int *)0xba5a;
                  FUN_21f2_0dd1();
                }
              }
              else if (local_18[2] == 0x6500) {
                *(undefined1 *)0x118 = 2;
                *(undefined2 *)0x158 = 1;
              }
              else if (local_18[2] == 0x6600) {
                pcVar1 = (code *)swi(0x3f);
                (*pcVar1)();
              }
              goto LAB_3ab8_0e8a;
            }
            if (*(char *)0xcf6 == '\0') {
              local_4 = (int *)0x7f2;
            }
            else {
              local_4 = (int *)0xcf6;
            }
            piStack_6 = (int *)0xd18;
            piStack_8 = local_7e;
            ppiStack_a = (int **)0x885;
            local_e._2_2_ = (int *)0xb954;
            func_0x0001263c();
            *(undefined2 *)0x158 = 0;
            *(undefined2 *)0xc22 = 1;
            local_4 = (int *)0xffff;
            piStack_6 = (int *)0x6;
            piStack_8 = (int *)0x2;
            ppiStack_a = (int **)0x11;
            local_e._2_2_ = local_7e;
            local_e._0_2_ = 0x11f2;
            iStack_10 = -0x4684;
            FUN_1000_02b5();
            local_4 = (int *)0xdef;
            uVar5 = 0x885;
            piStack_6 = (int *)0xb984;
            uVar3 = func_0x0000db57();
            if ((uVar3 & 2) != 0) {
              *(undefined2 *)0xc22 = 2;
              local_4 = (int *)0x3;
              piStack_6 = (int *)0x14;
              piStack_8 = (int *)0x885;
              ppiStack_a = (int **)0xb99e;
              FUN_1000_0599();
              local_4 = (int *)0x0;
              piStack_6 = (int *)0x2;
              iVar4 = *(uint *)0xc0ac - *(uint *)0xbefa;
              iVar2 = -(uint)(*(uint *)0xc0ac < *(uint *)0xbefa);
              local_e._2_2_ = (int *)0xdef;
              local_e._0_2_ = 0xb9be;
              ppiStack_a = (int **)iVar4;
              piStack_8 = (int *)iVar2;
              local_e = FUN_21f2_5978();
              local_18[2] = 0x6233;
              local_18[1] = 0x22b2;
              uVar5 = 0x11f2;
              local_18[0] = -0x4627;
              local_18[3] = iVar4;
              iStack_10 = iVar2;
              func_0x00012276();
            }
          }
          else {
            local_4 = (int *)0x885;
            piStack_6 = (int *)0xb8dd;
            func_0x000297e6();
            local_4 = (int *)0x22b2;
            piStack_6 = (int *)0xb8e2;
            func_0x00029d78();
            local_e._2_2_ = (int *)0x22b2;
            local_e._0_2_ = 0xb8ec;
            func_0x000299d1();
            local_e._2_2_ = (int *)0x22b2;
            local_e._0_2_ = 0xb8f4;
            func_0x000297e6();
            local_e._2_2_ = (int *)0x22b2;
            local_e._0_2_ = 0xb8f9;
            func_0x00029d78();
            local_18[2] = 0x22b2;
            local_18[1] = 0xb903;
            func_0x000299d1();
            local_18[2] = 0x22b2;
            uVar5 = 0x3bf;
            local_18[1] = 0xb908;
            func_0x0000507a();
          }
          goto LAB_3ab8_0b9c;
        }
        if (((int)local_e < 9) || (0x10 < local_18[3])) {
          local_4 = (int *)0x885;
          piStack_6 = (int *)0xb88c;
          uVar3 = func_0x0000db57();
          if ((uVar3 & 4) == 0) {
            local_4 = (int *)0x885;
            piStack_6 = (int *)0xb895;
            uVar3 = func_0x0000db57();
            if ((uVar3 & 2) == 0) goto LAB_3ab8_0d4d;
          }
        }
      }
      uVar5 = 0x885;
      *(undefined2 *)0xc18 = 0;
      if ((*(int *)0x11f0 < 0x15) && (*(byte *)0x136 < 2)) goto LAB_3ab8_0b9c;
      local_4 = local_84;
      piStack_6 = (int *)local_86;
      piStack_8 = (int *)local_80;
      ppiStack_a = (int **)local_82;
      local_e._2_2_ = local_7e;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
LAB_3ab8_0e8a:
    if (*(int *)0x158 != 0) {
      return;
    }
  } while( true );
}



/* 3ab8:0ef4  FUN_3ab8_0ef4  44 bytes, 3 callers */

void __cdecl16far FUN_3ab8_0ef4(undefined2 param_1)

{
  undefined1 local_34 [40];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0xba7f;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)param_1;
  uStack_6 = 0x623d;
  puStack_8 = local_34;
  uStack_a = 0x22b2;
  uStack_c = 0xba8f;
  FUN_21f2_3454();
  puStack_4 = local_34;
  uStack_6 = 0x22b2;
  puStack_8 = (undefined1 *)0xba9b;
  FUN_13bf_0a03();
  return;
}



/* 3ab8:0f20  FUN_3ab8_0f20  41 bytes, 1 callers */

undefined1 __cdecl16far FUN_3ab8_0f20(void)

{
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xbaab;
  FUN_21f2_0ebc();
  local_f = 0x40;
  puStack_4 = &local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x67;
  uStack_a = 0x22b2;
  uStack_c = 0xbac0;
  func_0x00024f9a();
  return local_1d;
}



/* 3ab8:0f49  FUN_3ab8_0f49  49 bytes, 1 callers */

undefined1 __cdecl16far FUN_3ab8_0f49(uint *param_1)

{
  undefined2 unaff_DS;
  byte local_1e;
  undefined1 local_1d;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  byte *pbStack_4;
  
  pbStack_4 = (byte *)0x3ab8;
  puStack_6 = (undefined1 *)0xbad4;
  FUN_21f2_0ebc();
  local_f = 0x46;
  pbStack_4 = &local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x67;
  uStack_a = 0x22b2;
  uStack_c = 0xbae9;
  func_0x00024f9a();
  *param_1 = (uint)local_1e;
  return local_1d;
}



/* 3ab8:0f7a  FUN_3ab8_0f7a  57 bytes, 1 callers */

undefined1 __cdecl16far FUN_3ab8_0f7a(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined2 local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xbb05;
  FUN_21f2_0ebc();
  local_f = 0x42;
  puStack_4 = &local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x67;
  uStack_a = 0x22b2;
  uStack_c = 0xbb1a;
  func_0x00024f9a();
  *param_1 = local_1c;
  *param_2 = local_18;
  return local_1d;
}



/* 3ab8:0fb3  FUN_3ab8_0fb3  49 bytes, 1 callers */

undefined1 __cdecl16far FUN_3ab8_0fb3(undefined2 *param_1)

{
  undefined2 unaff_DS;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xbb3e;
  FUN_21f2_0ebc();
  local_f = 0x41;
  puStack_4 = &local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x67;
  uStack_a = 0x22b2;
  uStack_c = 0xbb53;
  func_0x00024f9a();
  *param_1 = local_1c;
  return local_1d;
}



/* 3ab8:0fe4  FUN_3ab8_0fe4  70 bytes, 1 callers */

void __cdecl16far FUN_3ab8_0fe4(undefined2 param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  undefined1 local_1e;
  byte local_1d;
  undefined2 local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xbb6f;
  FUN_21f2_0ebc();
  local_f = 0x43;
  local_e = param_1;
  puStack_4 = &local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x67;
  uStack_a = 0x22b2;
  uStack_c = 0xbb8a;
  func_0x00024f9a();
  *param_2 = local_18;
  if (local_1d != 0) {
    puStack_4 = (undefined1 *)(uint)local_1d;
    puStack_6 = (undefined1 *)0x22b2;
    uStack_8 = 0xbba5;
    FUN_3ab8_0ef4();
  }
  return;
}



/* 3ab8:102a  FUN_3ab8_102a  62 bytes, 1 callers */

void __cdecl16far FUN_3ab8_102a(void)

{
  undefined1 local_1e;
  byte local_1d;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xbbb5;
  FUN_21f2_0ebc();
  local_f = 0x45;
  puStack_4 = &local_1e;
  puStack_6 = &local_10;
  uStack_8 = 0x67;
  local_a = 0x22b2;
  uStack_c = 0xbbd0;
  func_0x00024f9a();
  if (local_1d != 0) {
    puStack_4 = (undefined1 *)(uint)local_1d;
    puStack_6 = (undefined1 *)0x22b2;
    uStack_8 = 0xbbe3;
    FUN_3ab8_0ef4();
  }
  return;
}



/* 3ab8:1068  FUN_3ab8_1068  669 bytes, 1 callers */

int __cdecl16far FUN_3ab8_1068(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar7;
  undefined1 local_6a [8];
  undefined1 local_62;
  undefined1 local_42;
  undefined1 local_38 [16];
  int local_28;
  int local_26;
  undefined1 local_24;
  undefined1 local_23;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined4 uStack_16;
  undefined2 local_12;
  int local_10;
  undefined4 local_e;
  undefined1 *local_a;
  
  FUN_21f2_0ebc();
  *(undefined2 *)0xbed2 = 0;
  if (*(int *)0x4e == 0) {
    return 0;
  }
  local_23 = 0x35;
  local_24 = 0x67;
  local_a = local_38;
  local_e._2_2_ = &local_24;
  local_e._0_2_ = 0x22b2;
  local_10 = 0xbc20;
  FUN_21f2_35f4();
  local_10 = 0;
  local_28 = 0;
  do {
    local_6a[local_28] = *(undefined1 *)(local_10 + 10 + local_28);
    local_28 = local_28 + 1;
  } while (local_28 < 0x28);
  local_42 = 0;
  local_62 = 0;
  local_a = local_6a;
  local_e._2_2_ = (undefined1 *)0x22b2;
  local_e._0_2_ = 0xbc63;
  iVar3 = FUN_21f2_2d98();
  if (iVar3 == 0) {
    local_a = (undefined1 *)0x22b2;
    local_e._2_2_ = (undefined1 *)0xbc7a;
    FUN_21f2_3652();
    local_a = (undefined1 *)0xbc85;
    local_26 = FUN_3ab8_0f20();
    if (local_26 != 0) {
      return local_26;
    }
    local_a = (undefined1 *)0x22b2;
    local_e._2_2_ = (undefined1 *)0xbc97;
    FUN_3ab8_0f49();
    local_a = (undefined1 *)0xbede;
    local_e._2_2_ = (undefined1 *)0x22b2;
    local_e._0_2_ = 0xbca4;
    FUN_3ab8_0f7a();
    local_a = (undefined1 *)0x22b2;
    local_e._2_2_ = (undefined1 *)0xbcae;
    FUN_3ab8_0fb3();
    if (4 < *(int *)0xbede) {
      *(undefined2 *)0xbee4 = 0;
      *(undefined2 *)0xbee6 = uStack_16._2_2_;
      *(undefined2 *)0xbed2 = 1;
      local_12 = 0x2c0;
      if (0x2c0 < *(int *)0xbede) {
        *(undefined2 *)0xbede = 0x2c0;
      }
      puVar6 = (undefined2 *)0xc718;
      puVar5 = (undefined2 *)0xbed2;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      *(undefined2 *)0xc718 = 2;
      if (*(int *)0x4e < 0) {
        local_a = (undefined1 *)0xbd00;
        FUN_28b3_0d8b();
        local_a = (undefined1 *)0xbd09;
        func_0x00029c2c();
        local_a = (undefined1 *)0xbd0e;
        uVar4 = FUN_28b3_0f51();
        *(undefined2 *)0x4e = uVar4;
        local_a = (undefined1 *)0xbd1a;
        FUN_28b3_0d8b();
        local_a = (undefined1 *)0xbd23;
        func_0x00029c2c();
        local_a = (undefined1 *)0xbd28;
        uVar4 = FUN_28b3_0f51();
        *(undefined2 *)0x50 = uVar4;
      }
      if (*(int *)0x4e == 1) {
        local_a = (undefined1 *)0xbd3b;
        FUN_28b3_0d8b();
        local_a = (undefined1 *)0xbd44;
        func_0x00029c2c();
        local_a = (undefined1 *)0xbd49;
        uVar4 = FUN_28b3_0f51();
        *(undefined2 *)0x4e = uVar4;
        local_a = (undefined1 *)0xbd55;
        FUN_28b3_0d8b();
        local_a = (undefined1 *)0xbd5e;
        func_0x00029c2c();
        local_a = (undefined1 *)0xbd63;
        uVar4 = FUN_28b3_0f51();
        *(undefined2 *)0x50 = uVar4;
      }
      if (*(int *)0x50 < 1) {
        iVar3 = *(int *)0x4e;
        local_a = (undefined1 *)0xbd7b;
        FUN_28b3_0d8b();
        local_a = (undefined1 *)0xbd84;
        func_0x00029c2c();
        local_a = (undefined1 *)0xbd89;
        uVar4 = FUN_28b3_0f51();
        *(undefined2 *)0x4e = uVar4;
        *(int *)0x50 = iVar3 - *(int *)0x4e;
      }
      if (*(int *)0xbede <= *(int *)0x50 + *(int *)0x4e) {
        local_a = (undefined1 *)0xbdae;
        FUN_28b3_0d8b();
        local_a = (undefined1 *)0xbdb7;
        FUN_28b3_0d8b();
        local_a = (undefined1 *)0xbdbc;
        FUN_28b3_1177();
        local_a = (undefined1 *)0xbdc4;
        func_0x000299b9();
        local_a = (undefined1 *)0xbdcd;
        FUN_28b3_0d8b();
        local_a = (undefined1 *)0xbdd2;
        func_0x00029c9d();
        local_a = (undefined1 *)0xbdd7;
        iVar3 = FUN_28b3_0f51();
        *(int *)0x4e = iVar3;
        if (iVar3 < 1) {
          *(undefined2 *)0x4e = 1;
        }
        *(int *)0x50 = *(int *)0xbede - *(int *)0x4e;
      }
      if (*(int *)0x4e < *(int *)0xbede) {
        *(undefined2 *)0xbede = *(undefined2 *)0x4e;
      }
      if (*(int *)0x50 < *(int *)0xc724) {
        *(undefined2 *)0xc724 = *(undefined2 *)0x50;
      }
      local_a = (undefined1 *)*(undefined2 *)0xbede;
      local_e._2_2_ = (undefined1 *)0x22b2;
      local_e._0_2_ = 0xbe19;
      FUN_3ab8_0fe4();
      local_a = (undefined1 *)*(undefined2 *)0xc724;
      local_e._2_2_ = (undefined1 *)0x22b2;
      local_e._0_2_ = 0xbe27;
      FUN_3ab8_0fe4();
      local_a = (undefined1 *)0x16;
      local_e._2_2_ = (undefined1 *)0x22b2;
      local_e._0_2_ = 0xbe3a;
      local_e = func_0x00027a04();
      local_10 = 0x22b2;
      local_12 = 0xbe41;
      uVar7 = FUN_21f2_5978();
      *(int *)0x13c = (uint)uVar7 - 4;
      *(int *)0x13e = (int)((ulong)uVar7 >> 0x10) - (uint)((uint)uVar7 < 4);
      local_10 = 0;
      local_12 = 0x20;
      uStack_16._2_2_ = 0x22b2;
      uStack_16._0_2_ = 0xbe5f;
      uStack_16 = func_0x00027a04();
      uStack_18 = 0x22b2;
      uStack_1a = 0xbe66;
      uVar7 = FUN_21f2_5978();
      *(int *)0x140 = (uint)uVar7 - 4;
      *(int *)0x142 = (int)((ulong)uVar7 >> 0x10) - (uint)((uint)uVar7 < 4);
      *(undefined2 *)0xc728 = 0xffff;
      *(undefined2 *)0xbee2 = 0xffff;
      return 1;
    }
  }
  *(undefined2 *)0x4e = 0;
  return 0;
}



/* 3ab8:1305  FUN_3ab8_1305  4616 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_1305(void)

{
  undefined2 *puVar1;
  undefined2 **ppuVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  undefined2 **ppuVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  int local_1a6 [4];
  int local_19e [2];
  undefined1 local_19a [4];
  int local_196 [2];
  int local_192 [2];
  int local_18e [2];
  int local_18a [2];
  undefined1 local_186 [4];
  int local_182 [2];
  int local_17e [2];
  undefined1 local_17a [4];
  undefined1 local_176 [4];
  undefined1 local_172 [12];
  undefined4 local_166;
  undefined4 local_162;
  undefined2 local_15e;
  undefined2 *local_15c;
  undefined2 local_15a;
  byte local_146;
  undefined2 local_144;
  undefined2 local_142;
  uint local_140;
  int local_13e;
  char local_13c [7];
  undefined1 local_135 [193];
  int local_74;
  int local_72;
  int local_70 [3];
  undefined1 local_6a [2];
  int local_68;
  int local_66;
  int local_64;
  int local_62;
  undefined1 local_60 [2];
  int local_5e;
  int local_5c;
  undefined1 local_5a [2];
  undefined1 local_58 [2];
  undefined1 local_56 [4];
  int local_52;
  uint local_4c;
  int local_4a;
  int aiStack_48 [11];
  int aiStack_32 [4];
  int *piStack_2a;
  undefined2 uStack_28;
  int *piStack_26;
  int *piStack_24;
  int *piStack_22;
  undefined1 *puStack_20;
  int *piStack_1e;
  int *apiStack_1c [2];
  char *pcStack_18;
  undefined1 *puStack_16;
  int *piStack_14;
  int *piStack_12;
  int *piStack_10;
  int *piStack_e;
  undefined2 **ppuStack_c;
  
  FUN_21f2_0ebc();
  local_4c = 1;
  do {
    iVar10 = local_4c * 2;
    aiStack_32[local_4c] = *(int *)(iVar10 + 0x182);
    aiStack_48[local_4c] = *(int *)(iVar10 + 0x198);
    apiStack_1c[local_4c] = (int *)*(undefined2 *)(iVar10 + 0x1ae);
    local_4c = local_4c + 1;
  } while ((int)local_4c < 0xb);
  ppuStack_c = (undefined2 **)0x22b2;
  uVar13 = 0x22b2;
  piStack_e = (int *)0xbec8;
  iVar10 = FUN_21f2_1348();
  *(int *)0xd70 = iVar10;
  if (iVar10 != 0) {
    uVar7 = (int)*(uint *)0xb310 >> 0xf;
    uVar7 = ((int)((*(uint *)0xb310 ^ uVar7) - uVar7) >> 4 ^ uVar7) - uVar7;
    local_13e = 0;
LAB_3ab8_1371:
    ppuStack_c = (undefined2 **)local_13c;
    piStack_10 = (int *)0xbf03;
    piStack_e = (int *)uVar13;
    iVar10 = func_0x0002509c();
    if (iVar10 != 0) {
      if (local_13c[0] != '#') {
        ppuStack_c = (undefined2 **)0x22b2;
        piStack_e = (int *)0xc1b4;
        piVar4 = (int *)FUN_21f2_3b7a();
        if (piVar4 != (int *)0x0) {
          do {
            piVar4 = (int *)((int)piVar4 + 1);
          } while ((char)*piVar4 == ' ');
          ppuStack_c = (undefined2 **)0x22b2;
          piStack_e = (int *)0xc1d9;
          iVar10 = FUN_10ad_1762();
          if (iVar10 == 0) {
            ppuStack_c = (undefined2 **)0x11f2;
            piStack_e = (int *)0xc227;
            iVar10 = FUN_10ad_1762();
            if (iVar10 != 0) {
              local_166 = (char *)((ulong)local_166 & 0xffff0000);
              ppuStack_c = (undefined2 **)0xa84;
              piStack_e = (int *)0xa82;
              piStack_10 = (int *)0xa80;
              piStack_12 = (int *)0xa7e;
              piStack_14 = (int *)0xa7c;
              puStack_16 = (undefined1 *)0xa7a;
              pcStack_18 = (char *)0xa78;
              apiStack_1c[1] = (int *)0xa76;
              apiStack_1c[0] = (int *)0xa74;
              piStack_1e = (int *)0xa72;
              puStack_20 = (undefined1 *)0x63c8;
              piStack_24 = (int *)0x11f2;
              uVar13 = 0x22b2;
              piStack_26 = (int *)0xc270;
              piStack_22 = piVar4;
              FUN_21f2_34ae();
              if ((-1 < (int)(char *)local_166) && ((int)(char *)local_166 < 7)) {
                *(undefined1 *)0x1cd = (undefined1)local_166;
              }
              goto LAB_3ab8_1371;
            }
            ppuStack_c = (undefined2 **)0x11f2;
            piStack_e = (int *)0xc29c;
            iVar10 = FUN_10ad_1762();
            if (iVar10 == 0) {
              ppuStack_c = (undefined2 **)0x11f2;
              piStack_e = (int *)0xc2de;
              iVar10 = FUN_10ad_1762();
              if (iVar10 == 0) {
                ppuStack_c = (undefined2 **)0x11f2;
                piStack_e = (int *)0xc31b;
                iVar10 = FUN_10ad_1762();
                if (iVar10 == 0) {
                  ppuStack_c = (undefined2 **)0x11f2;
                  piStack_e = (int *)0xc359;
                  iVar10 = FUN_10ad_1762();
                  if (iVar10 == 0) {
                    ppuStack_c = (undefined2 **)0x11f2;
                    piStack_e = (int *)0xc397;
                    iVar10 = FUN_10ad_1762();
                    if (iVar10 == 0) {
                      ppuStack_c = (undefined2 **)0x11f2;
                      piStack_e = (int *)0xc3d9;
                      iVar10 = FUN_10ad_1762();
                      if (iVar10 != 0) {
                        ppuStack_c = (undefined2 **)0x1128;
                        piStack_e = (int *)0x1d8;
                        piStack_10 = (int *)0x1d4;
                        piStack_12 = (int *)0x1d0;
                        piStack_14 = (int *)0x1d2;
                        puStack_16 = (undefined1 *)0x1ce;
                        pcStack_18 = (char *)0x6299;
                        apiStack_1c[0] = (int *)0x11f2;
                        uVar13 = 0x22b2;
                        piStack_1e = (int *)0xc40b;
                        apiStack_1c[1] = piVar4;
                        FUN_21f2_34ae();
                        if ((*(int *)0x112e < 0) || (2 < *(int *)0x112e)) {
                          *(undefined2 *)0x112e = 0;
                        }
                        if ((*(int *)0x1124 < 0) || (3 < *(int *)0x1124)) {
                          *(undefined2 *)0x1124 = 1;
                        }
                        goto LAB_3ab8_1371;
                      }
                      ppuStack_c = (undefined2 **)0x11f2;
                      piStack_e = (int *)0xc44a;
                      iVar10 = FUN_10ad_1762();
                      if (iVar10 != 0) {
                        local_15c = (undefined2 *)*(undefined2 *)0xa4f8;
                        local_15a = *(undefined2 *)0xa4fa;
                        local_162 = (undefined2 *)CONCAT22(local_15a,local_15c);
                        local_144 = 0;
                        local_15e = 0;
                        local_166 = (char *)((ulong)local_166 & 0xffff0000);
                        ppuStack_c = (undefined2 **)&local_15e;
                        piStack_e = (int *)&local_162;
                        piStack_10 = (int *)0x1136;
                        piStack_12 = (int *)0x1132;
                        piStack_14 = (int *)0x1126;
                        puStack_16 = (undefined1 *)0x62b8;
                        apiStack_1c[1] = (int *)0x11f2;
                        apiStack_1c[0] = (int *)0xc4a4;
                        pcStack_18 = (char *)piVar4;
                        FUN_21f2_34ae();
                        uVar14 = (char **)0xffed < &pcStack_18;
                        FUN_28b3_0d04();
                        func_0x000297e6();
                        func_0x00029d78();
                        FUN_28b3_1181();
                        if ((bool)uVar14) {
LAB_3ab8_1983:
                          *(undefined1 *)0x1130 = 0;
                        }
                        else {
                          func_0x000297e6();
                          func_0x000297e6();
                          FUN_28b3_1181();
                          if ((bool)uVar14) goto LAB_3ab8_1983;
                          func_0x000297e6();
                          func_0x00029b6d();
                          func_0x00029d78();
                          local_144 = FUN_28b3_0f51();
                          *(undefined1 *)0x1130 = (char)local_144;
                        }
                        if ((-1 < (int)local_15e) && ((int)local_15e < 4)) {
                          *(undefined1 *)0x1131 = (undefined1)local_15e;
                        }
                        uVar14 = 0;
                        uVar15 = (char *)local_166 == (char *)0x0;
                        if ((int)(char *)local_166 < 1) {
                          *(undefined1 *)0x114a = 0;
                        }
                        else {
                          *(undefined1 *)0x114a = 2;
                        }
                        func_0x000297e6();
                        func_0x000297e6();
                        FUN_28b3_1181();
                        if (!(bool)uVar14 && !(bool)uVar15) {
                          func_0x000297e6();
                          func_0x000297e6();
                          FUN_28b3_1181();
                          if ((bool)uVar14 || (bool)uVar15) {
                            func_0x000297e6();
                            func_0x00029b6d();
                            func_0x00029d78();
                            uVar13 = 0x22b2;
                            uVar14 = FUN_28b3_0f51();
                            *(undefined1 *)0x114b = uVar14;
                            goto LAB_3ab8_1371;
                          }
                        }
                        uVar13 = 0x22b2;
                        *(undefined1 *)0x114b = 0;
                        goto LAB_3ab8_1371;
                      }
                      ppuStack_c = (undefined2 **)0x11f2;
                      piStack_e = (int *)0xc59a;
                      iVar10 = FUN_10ad_1762();
                      if (iVar10 == 0) {
                        ppuStack_c = (undefined2 **)0x11f2;
                        piStack_e = (int *)0xc5d0;
                        iVar10 = FUN_10ad_1762();
                        if (iVar10 == 0) {
                          ppuStack_c = (undefined2 **)0x11f2;
                          piStack_e = (int *)0xc6df;
                          iVar10 = FUN_10ad_1762();
                          if (iVar10 == 0) {
                            ppuStack_c = (undefined2 **)0x11f2;
                            piStack_e = (int *)0xc7b4;
                            iVar10 = FUN_10ad_1762();
                            if (iVar10 == 0) {
                              ppuStack_c = (undefined2 **)0x11f2;
                              piStack_e = (int *)0xc889;
                              iVar10 = FUN_10ad_1762();
                              if (iVar10 == 0) {
                                ppuStack_c = (undefined2 **)0x11f2;
                                piStack_e = (int *)0xc993;
                                iVar10 = FUN_10ad_1762();
                                if (iVar10 == 0) {
                                  ppuStack_c = (undefined2 **)0x11f2;
                                  piStack_e = (int *)0xcb72;
                                  iVar10 = FUN_10ad_1762();
                                  if (iVar10 == 0) {
                                    ppuStack_c = (undefined2 **)0x11f2;
                                    piStack_e = (int *)0xccfe;
                                    iVar10 = FUN_10ad_1762();
                                    if (iVar10 == 0) {
                                      ppuStack_c = (undefined2 **)0x11f2;
                                      piStack_e = (int *)0xcd54;
                                      iVar10 = FUN_10ad_1762();
                                      if (iVar10 == 0) {
                                        ppuStack_c = (undefined2 **)0x11f2;
                                        piStack_e = (int *)0xcddb;
                                        iVar10 = FUN_10ad_1762();
                                        if (iVar10 == 0) {
                                          ppuStack_c = (undefined2 **)0x11f2;
                                          piStack_e = (int *)0xce62;
                                          iVar10 = FUN_10ad_1762();
                                          if (iVar10 == 0) {
                                            ppuStack_c = (undefined2 **)0x11f2;
                                            piStack_e = (int *)0xcee9;
                                            iVar10 = FUN_10ad_1762();
                                            if (iVar10 == 0) {
                                              ppuStack_c = (undefined2 **)0x11f2;
                                              piStack_e = (int *)0xcf13;
                                              iVar10 = FUN_10ad_1762();
                                              if (iVar10 == 0) {
                                                ppuStack_c = (undefined2 **)0x11f2;
                                                uVar13 = 0x11f2;
                                                piStack_e = (int *)0xcfc6;
                                                iVar10 = FUN_10ad_1762();
                                                if (iVar10 != 0) {
                                                  local_4c = 0;
                                                  do {
                                                    local_70[local_4c] = 0;
                                                    local_4c = local_4c + 1;
                                                  } while ((int)local_4c < 0x10);
                                                  ppuStack_c = (undefined2 **)local_56;
                                                  piStack_e = (int *)local_58;
                                                  piStack_10 = (int *)local_5a;
                                                  piStack_12 = &local_5c;
                                                  piStack_14 = &local_5e;
                                                  puStack_16 = local_60;
                                                  pcStack_18 = (char *)&local_62;
                                                  apiStack_1c[1] = &local_64;
                                                  apiStack_1c[0] = &local_66;
                                                  piStack_1e = &local_68;
                                                  puStack_20 = local_6a;
                                                  piStack_22 = local_70 + 2;
                                                  piStack_24 = local_70 + 1;
                                                  piStack_26 = local_70;
                                                  uStack_28 = 0x6398;
                                                  aiStack_32[3] = 0x11f2;
                                                  uVar13 = 0x22b2;
                                                  aiStack_32[2] = 0xd033;
                                                  piStack_2a = piVar4;
                                                  FUN_21f2_34ae();
                                                  local_140 = 1;
                                                  *(undefined2 *)0x82 = 0;
                                                  for (local_4c = 0; (int)local_4c < 0xf;
                                                      local_4c = local_4c + 1) {
                                                    if (local_70[local_4c] != 0) {
                                                      *(uint *)0x82 = *(uint *)0x82 | local_140;
                                                    }
                                                    local_140 = local_140 << 1;
                                                  }
                                                  *(undefined1 *)0x84 = 0;
                                                  if (0 < local_52) {
                                                    *(undefined1 *)0x84 = 1;
                                                  }
                                                  if (1 < local_52) {
                                                    *(undefined1 *)0x84 = 2;
                                                  }
                                                }
                                              }
                                              else {
                                                local_4c = 0;
                                                do {
                                                  local_70[local_4c] = 0;
                                                  local_4c = local_4c + 1;
                                                } while ((int)local_4c < 0x10);
                                                ppuStack_c = (undefined2 **)local_56;
                                                piStack_e = (int *)local_58;
                                                piStack_10 = (int *)local_5a;
                                                piStack_12 = &local_5c;
                                                piStack_14 = &local_5e;
                                                puStack_16 = local_60;
                                                pcStack_18 = (char *)&local_62;
                                                apiStack_1c[1] = &local_64;
                                                apiStack_1c[0] = &local_66;
                                                piStack_1e = &local_68;
                                                puStack_20 = local_6a;
                                                piStack_22 = local_70 + 2;
                                                piStack_24 = local_70 + 1;
                                                piStack_26 = local_70;
                                                uStack_28 = 0x6398;
                                                aiStack_32[3] = 0x11f2;
                                                uVar13 = 0x22b2;
                                                aiStack_32[2] = 0xcf80;
                                                piStack_2a = piVar4;
                                                FUN_21f2_34ae();
                                                local_140 = 1;
                                                *(undefined2 *)0x80 = 0;
                                                for (local_4c = 0; (int)local_4c < 0xf;
                                                    local_4c = local_4c + 1) {
                                                  if (local_70[local_4c] != 0) {
                                                    *(uint *)0x80 = *(uint *)0x80 | local_140;
                                                  }
                                                  local_140 = local_140 << 1;
                                                }
                                              }
                                            }
                                            else {
                                              piStack_e = (int *)0x11f2;
                                              uVar13 = 0x22b2;
                                              piStack_10 = (int *)0xceff;
                                              ppuStack_c = (undefined2 **)piVar4;
                                              FUN_21f2_34ae();
                                            }
                                          }
                                          else {
                                            local_4c = 1;
                                            do {
                                              local_70[local_4c] = 0;
                                              local_4c = local_4c + 1;
                                            } while ((int)local_4c < 0xb);
                                            ppuStack_c = (undefined2 **)local_60;
                                            piStack_e = &local_62;
                                            piStack_10 = &local_64;
                                            piStack_12 = &local_66;
                                            piStack_14 = &local_68;
                                            puStack_16 = local_6a;
                                            pcStack_18 = (char *)(local_70 + 2);
                                            apiStack_1c[1] = local_70 + 1;
                                            apiStack_1c[0] = (int *)0x63c8;
                                            puStack_20 = (undefined1 *)0x11f2;
                                            uVar13 = 0x22b2;
                                            piStack_22 = (int *)0xceb4;
                                            piStack_1e = piVar4;
                                            FUN_21f2_34ae();
                                            for (local_4c = 1; (int)local_4c < 0xb;
                                                local_4c = local_4c + 1) {
                                              *(undefined1 *)(local_4c + 0xbb4) =
                                                   (char)local_70[local_4c];
                                            }
                                          }
                                        }
                                        else {
                                          local_4c = 1;
                                          do {
                                            local_70[local_4c] = 0;
                                            local_4c = local_4c + 1;
                                          } while ((int)local_4c < 0xb);
                                          ppuStack_c = (undefined2 **)local_60;
                                          piStack_e = &local_62;
                                          piStack_10 = &local_64;
                                          piStack_12 = &local_66;
                                          piStack_14 = &local_68;
                                          puStack_16 = local_6a;
                                          pcStack_18 = (char *)(local_70 + 2);
                                          apiStack_1c[1] = local_70 + 1;
                                          apiStack_1c[0] = (int *)0x63c8;
                                          puStack_20 = (undefined1 *)0x11f2;
                                          uVar13 = 0x22b2;
                                          piStack_22 = (int *)0xce2d;
                                          piStack_1e = piVar4;
                                          FUN_21f2_34ae();
                                          for (local_4c = 1; (int)local_4c < 0xb;
                                              local_4c = local_4c + 1) {
                                            *(undefined1 *)(local_4c + 0xbaa) =
                                                 (char)local_70[local_4c];
                                          }
                                        }
                                      }
                                      else {
                                        local_4c = 1;
                                        do {
                                          local_70[local_4c] = 0;
                                          local_4c = local_4c + 1;
                                        } while ((int)local_4c < 0xb);
                                        ppuStack_c = (undefined2 **)local_60;
                                        piStack_e = &local_62;
                                        piStack_10 = &local_64;
                                        piStack_12 = &local_66;
                                        piStack_14 = &local_68;
                                        puStack_16 = local_6a;
                                        pcStack_18 = (char *)(local_70 + 2);
                                        apiStack_1c[1] = local_70 + 1;
                                        apiStack_1c[0] = (int *)0x63c8;
                                        puStack_20 = (undefined1 *)0x11f2;
                                        uVar13 = 0x22b2;
                                        piStack_22 = (int *)0xcda6;
                                        piStack_1e = piVar4;
                                        FUN_21f2_34ae();
                                        for (local_4c = 1; (int)local_4c < 0xb;
                                            local_4c = local_4c + 1) {
                                          *(undefined1 *)(local_4c + 0xba0) =
                                               (char)local_70[local_4c];
                                        }
                                      }
                                    }
                                    else {
                                      local_140 = 0x11;
                                      local_74 = 1;
                                      ppuStack_c = (undefined2 **)0x1f8;
                                      piStack_10 = (int *)0x11f2;
                                      uVar13 = 0x22b2;
                                      piStack_12 = (int *)0xcd24;
                                      piStack_e = piVar4;
                                      FUN_21f2_34ae();
                                      *(undefined1 *)0xba0 = (undefined1)local_140;
                                      if ((local_74 == 0) || (local_74 == 1)) {
                                        *(undefined1 *)0xbbf = (undefined1)local_74;
                                      }
                                    }
                                  }
                                  else {
                                    local_4c = 0;
                                    do {
                                      uVar9 = local_4c;
                                      iVar10 = *(int *)0xa4fa;
                                      local_1a6[local_4c * 2] = *(int *)0xa4f8;
                                      local_1a6[uVar9 * 2 + 1] = iVar10;
                                      local_4c = local_4c + 1;
                                    } while ((int)local_4c < 0x10);
                                    ppuStack_c = (undefined2 **)local_172;
                                    piStack_e = (int *)local_176;
                                    piStack_10 = (int *)local_17a;
                                    piStack_12 = local_17e;
                                    piStack_14 = local_182;
                                    puStack_16 = local_186;
                                    pcStack_18 = (char *)local_18a;
                                    apiStack_1c[1] = local_18e;
                                    apiStack_1c[0] = local_192;
                                    piStack_1e = local_196;
                                    puStack_20 = local_19a;
                                    piStack_22 = local_19e;
                                    piStack_24 = local_1a6 + 2;
                                    piStack_26 = local_1a6;
                                    uStack_28 = 0x6323;
                                    aiStack_32[3] = 0x11f2;
                                    aiStack_32[2] = 0xcbfb;
                                    piStack_2a = piVar4;
                                    FUN_21f2_34ae();
                                    local_4c = 0;
                                    do {
                                      func_0x000297e6();
                                      uVar14 = (int)(local_4c << 1) < 0;
                                      uVar15 = (local_4c & 0x3fff) == 0;
                                      func_0x000297e6();
                                      FUN_28b3_0e3b();
                                      uVar13 = 0x22b2;
                                      FUN_28b3_1181();
                                      if (!(bool)uVar14 && !(bool)uVar15) {
                                        func_0x000297e6();
                                        func_0x000297e6();
                                        uVar13 = 0x22b2;
                                        FUN_28b3_1181();
                                        if ((bool)uVar14 || (bool)uVar15) {
                                          local_4a = 1;
                                          local_74 = local_4c * 0x10;
                                          local_72 = 0;
                                          do {
                                            if (*(char *)(local_72 + local_74 + -0x4b5a) != '\0') {
                                              local_4a = 0;
                                            }
                                            if (*(char *)(local_72 + local_74 + -0x4488) != '\0') {
                                              local_4a = 0;
                                            }
                                            local_72 = local_72 + 1;
                                          } while (local_72 < 0x10);
                                          if (local_4a != 0) {
                                            iVar10 = local_4c * 4;
                                            local_166 = (char *)CONCAT22(local_1a6[local_4c * 2 + 1]
                                                                         ,(char *)local_1a6[local_4c
                                                                                            * 2]);
                                            uVar13 = 0x885;
                                            ppuStack_c = (undefined2 **)0xccaa;
                                            func_0x000088e3();
                                            *(undefined2 *)(iVar10 + 0xb2a) = (char *)local_166;
                                            *(undefined2 *)(iVar10 + 0xb2c) = local_166._2_2_;
                                          }
                                        }
                                      }
                                      local_4c = local_4c + 1;
                                    } while ((int)local_4c < 0x10);
                                    uVar9 = (int)*(uint *)0xb310 >> 0xf;
                                    iVar10 = (((int)((*(uint *)0xb310 ^ uVar9) - uVar9) >> 4 ^ uVar9
                                              ) - uVar9) * 4;
                                    uVar12 = *(undefined2 *)(iVar10 + 0xb2c);
                                    *(undefined2 *)0xb26 = *(undefined2 *)(iVar10 + 0xb2a);
                                    *(undefined2 *)0xb28 = uVar12;
                                  }
                                }
                                else {
                                  ppuStack_c = (undefined2 **)local_135;
                                  piStack_e = (int *)0x11f2;
                                  uVar13 = 0x22b2;
                                  piStack_10 = (int *)0xc9af;
                                  FUN_21f2_34ae();
                                  local_15c = (undefined2 *)0xffff;
                                  if (-1 < (int)local_140) {
                                    if ((int)local_140 < 0x10) {
                                      piStack_e = (int *)0x22b2;
                                      piStack_10 = (int *)0xc9da;
                                      ppuStack_c = (undefined2 **)piVar4;
                                      FUN_21f2_34ae();
                                      if (-1 < (int)local_15c) {
                                        if (99 < (int)local_15c) {
                                          local_15c = (undefined2 *)0x2;
                                          uVar7 = local_140;
                                        }
                                        *(undefined1 *)(local_140 + 0xb6c) = 0;
                                        *(undefined1 *)(local_140 + 0xb7c) = 0;
                                        puVar8 = (undefined2 *)((int)local_15c % 10);
                                        local_162 = (undefined2 *)CONCAT22(local_162._2_2_,puVar8);
                                        local_15e = (int)local_15c / 10;
                                        if (0 < (int)puVar8) {
                                          *(undefined1 *)(local_140 + 0xb7c) = 1;
                                        }
                                        if (1 < (int)puVar8) {
                                          *(undefined1 *)(local_140 + 0xb6c) = 1;
                                        }
                                        if (0 < (int)local_15e) {
                                          *(byte *)(local_140 + 0xb6c) =
                                               *(byte *)(local_140 + 0xb6c) | 2;
                                        }
                                        if (1 < (int)local_15e) {
                                          *(byte *)(local_140 + 0xb6c) =
                                               *(byte *)(local_140 + 0xb6c) | 6;
                                        }
                                        for (local_4c = 0; (int)local_4c < 0x10;
                                            local_4c = local_4c + 1) {
                                          ppuStack_c = (undefined2 **)0x22b2;
                                          piStack_e = (int *)0xcb2d;
                                          iVar10 = FUN_21f2_3b7a();
                                          if (iVar10 == 0) break;
                                          local_166 = (char *)CONCAT22(local_166._2_2_,
                                                                       (char *)(local_140 * 0x10 +
                                                                               local_4c));
                                          local_15c = (undefined2 *)0xffff;
                                          ppuStack_c = (undefined2 **)(iVar10 + 1);
                                          piStack_e = (int *)0x22b2;
                                          piStack_10 = (int *)0xca8f;
                                          FUN_21f2_34ae();
                                          if ((int)local_15c < 0) break;
                                          if (99 < (int)local_15c) {
                                            *(undefined1 *)(local_140 + 0xb8e) =
                                                 (undefined1)local_166;
                                            local_15c = (undefined2 *)0x2;
                                          }
                                          ((char *)local_166)[-0x3e90] = '\0';
                                          ((char *)local_166)[-0x4c78] = '\0';
                                          puVar8 = (undefined2 *)((int)local_15c % 10);
                                          local_162 = (undefined2 *)CONCAT22(local_162._2_2_,puVar8)
                                          ;
                                          local_15e = (int)local_15c / 10;
                                          if (0 < (int)puVar8) {
                                            ((char *)local_166)[-0x4c78] = '\x01';
                                          }
                                          if (1 < (int)puVar8) {
                                            ((char *)local_166)[-0x3e90] = '\x01';
                                          }
                                          if (0 < (int)local_15e) {
                                            ((char *)local_166)[-0x3e90] =
                                                 ((char *)local_166)[-0x3e90] | 2;
                                          }
                                          if (1 < (int)local_15e) {
                                            ((char *)local_166)[-0x3e90] =
                                                 ((char *)local_166)[-0x3e90] | 6;
                                          }
                                        }
                                        uVar13 = 0x22b2;
                                        pcVar6 = (char *)(uint)*(byte *)(local_140 + 0xb8e);
                                        local_166 = (char *)CONCAT22(local_166._2_2_,pcVar6);
                                        pcVar6[-0x3e90] = '\x01';
                                        pcVar6[-0x4c78] = '\x01';
                                        if (-1 < *(int *)0xa62) {
                                          local_13e = 1;
                                        }
                                        goto LAB_3ab8_1371;
                                      }
                                    }
                                    uVar13 = 0x22b2;
                                  }
                                }
                              }
                              else {
                                ppuStack_c = (undefined2 **)local_135;
                                piStack_e = (int *)0x11f2;
                                piStack_10 = (int *)0xc8a5;
                                FUN_21f2_34ae();
                                for (local_4c = 0xffff; uVar13 = 0x22b2, (int)local_4c < 0x10;
                                    local_4c = local_4c + 1) {
                                  if ((int)local_4c < 0) {
                                    local_162 = (undefined2 *)
                                                CONCAT22(local_162._2_2_,(undefined2 *)0x10);
                                  }
                                  else {
                                    local_162 = (undefined2 *)
                                                CONCAT22(local_162._2_2_,(undefined2 *)0x8);
                                  }
                                  ppuStack_c = &local_15c;
                                  piStack_e = (int *)0x22b2;
                                  piStack_10 = (int *)0xc8c7;
                                  FUN_21f2_2de0();
                                  ppuStack_c = (undefined2 **)0x22b2;
                                  piStack_e = (int *)0xc8d8;
                                  puVar5 = (undefined1 *)FUN_21f2_3b7a();
                                  if (puVar5 != (undefined1 *)0x0) {
                                    *puVar5 = 0;
                                  }
                                  ppuStack_c = (undefined2 **)0x22b2;
                                  piStack_e = (int *)0xc8f5;
                                  local_166._0_2_ = puVar5;
                                  pcVar6 = (char *)FUN_21f2_3b7a();
                                  local_166 = (char *)CONCAT22(local_166._2_2_,pcVar6);
                                  if (pcVar6 == (char *)0x0) goto LAB_3ab8_1d84;
                                  do {
                                    *pcVar6 = '\0';
LAB_3ab8_1d84:
                                    ppuStack_c = (undefined2 **)0xc90e;
                                    iVar10 = func_0x00024ce4();
                                    pcVar6 = (char *)((int)&local_15e + iVar10 + 1);
                                    local_166 = (char *)CONCAT22(local_166._2_2_,pcVar6);
                                  } while (*pcVar6 == ' ');
                                  if ((int)local_4c < 0) {
                                    ppuStack_c = (undefined2 **)0x22b2;
                                    piStack_e = (int *)0xc932;
                                    FUN_12c1_0025();
                                  }
                                  else {
                                    ppuStack_c = (undefined2 **)0x22b2;
                                    piStack_e = (int *)0xc94a;
                                    FUN_10ad_20e9();
                                  }
                                  ppuStack_c = (undefined2 **)0x11f2;
                                  uVar13 = 0x22b2;
                                  piStack_e = (int *)0xc958;
                                  iVar10 = FUN_21f2_3b7a();
                                  if (iVar10 == 0) break;
                                }
                              }
                            }
                            else {
                              ppuStack_c = (undefined2 **)local_135;
                              piStack_e = (int *)0x11f2;
                              piStack_10 = (int *)0xc7d0;
                              FUN_21f2_34ae();
                              local_140 = local_140 << 4;
                              local_4c = 0;
                              do {
                                local_70[local_4c] = 0;
                                local_4c = local_4c + 1;
                              } while ((int)local_4c < 0x10);
                              ppuStack_c = (undefined2 **)local_56;
                              piStack_e = (int *)local_58;
                              piStack_10 = (int *)local_5a;
                              piStack_12 = &local_5c;
                              piStack_14 = &local_5e;
                              puStack_16 = local_60;
                              pcStack_18 = (char *)&local_62;
                              apiStack_1c[1] = &local_64;
                              apiStack_1c[0] = &local_66;
                              piStack_1e = &local_68;
                              puStack_20 = local_6a;
                              piStack_22 = local_70 + 2;
                              piStack_24 = local_70 + 1;
                              piStack_26 = local_70;
                              uStack_28 = 0x6398;
                              aiStack_32[3] = 0x22b2;
                              uVar13 = 0x22b2;
                              aiStack_32[2] = 0xc83d;
                              piStack_2a = piVar4;
                              FUN_21f2_34ae();
                              local_4c = 0;
                              do {
                                *(undefined1 *)(local_4c + local_140 + -0x4996) =
                                     (char)local_70[local_4c];
                                local_4c = local_4c + 1;
                              } while ((int)local_4c < 0x10);
                              if (*(char *)(*(int *)0xb310 + -0x4996) != '\0') {
                                *(uint *)0xa6a = (uint)*(byte *)(*(int *)0xb310 + -0x4996);
                              }
                            }
                          }
                          else {
                            ppuStack_c = (undefined2 **)local_135;
                            piStack_e = (int *)0x11f2;
                            piStack_10 = (int *)0xc6fb;
                            FUN_21f2_34ae();
                            local_140 = local_140 << 4;
                            local_4c = 0;
                            do {
                              local_70[local_4c] = 0;
                              local_4c = local_4c + 1;
                            } while ((int)local_4c < 0x10);
                            ppuStack_c = (undefined2 **)local_56;
                            piStack_e = (int *)local_58;
                            piStack_10 = (int *)local_5a;
                            piStack_12 = &local_5c;
                            piStack_14 = &local_5e;
                            puStack_16 = local_60;
                            pcStack_18 = (char *)&local_62;
                            apiStack_1c[1] = &local_64;
                            apiStack_1c[0] = &local_66;
                            piStack_1e = &local_68;
                            puStack_20 = local_6a;
                            piStack_22 = local_70 + 2;
                            piStack_24 = local_70 + 1;
                            piStack_26 = local_70;
                            uStack_28 = 0x6398;
                            aiStack_32[3] = 0x22b2;
                            uVar13 = 0x22b2;
                            aiStack_32[2] = 0xc768;
                            piStack_2a = piVar4;
                            FUN_21f2_34ae();
                            local_4c = 0;
                            do {
                              *(undefined1 *)(local_4c + local_140 + -0x3d6e) =
                                   (char)local_70[local_4c];
                              local_4c = local_4c + 1;
                            } while ((int)local_4c < 0x10);
                            if (*(char *)(*(int *)0xb310 + -0x3d6e) != '\0') {
                              *(uint *)0xa6c = (uint)*(byte *)(*(int *)0xb310 + -0x3d6e);
                            }
                          }
                        }
                        else {
                          ppuStack_c = (undefined2 **)0x1142;
                          piStack_e = (int *)0x113a;
                          piStack_10 = (int *)0x62e9;
                          piStack_14 = (int *)0x11f2;
                          puStack_16 = (undefined1 *)0xc5f5;
                          piStack_12 = piVar4;
                          FUN_21f2_34ae();
                          for (local_4c = 0; uVar13 = 0x22b2, (int)local_4c < 2;
                              local_4c = local_4c + 1) {
                            func_0x000297e6();
                            uVar9 = local_4c * 4;
                            uVar14 = 0xeec5 < uVar9;
                            uVar15 = (undefined2 *)(uVar9 + 0x113a) == (undefined2 *)0x0;
                            func_0x000297e6();
                            FUN_28b3_1181();
                            if (!(bool)uVar14 && !(bool)uVar15) {
                              uVar13 = *(undefined2 *)0xa53a;
                              *(undefined2 *)(uVar9 + 0x113a) = *(undefined2 *)0xa538;
                              *(undefined2 *)(uVar9 + 0x113c) = uVar13;
                            }
                            func_0x000297e6();
                            uVar9 = local_4c * 4;
                            uVar14 = 0xeebd < uVar9;
                            uVar15 = (undefined2 *)(uVar9 + 0x1142) == (undefined2 *)0x0;
                            func_0x000297e6();
                            FUN_28b3_1181();
                            if (!(bool)uVar14 && !(bool)uVar15) {
                              uVar13 = *(undefined2 *)0xa53a;
                              *(undefined2 *)(uVar9 + 0x1142) = *(undefined2 *)0xa538;
                              *(undefined2 *)(uVar9 + 0x1144) = uVar13;
                            }
                            func_0x000297e6();
                            uVar9 = local_4c * 4;
                            uVar14 = 0xeec5 < uVar9;
                            func_0x000297e6();
                            FUN_28b3_1181();
                            if ((bool)uVar14) {
                              uVar13 = *(undefined2 *)0xa53e;
                              *(undefined2 *)(uVar9 + 0x113a) = *(undefined2 *)0xa53c;
                              *(undefined2 *)(uVar9 + 0x113c) = uVar13;
                            }
                            func_0x000297e6();
                            uVar9 = local_4c * 4;
                            uVar14 = 0xeebd < uVar9;
                            func_0x000297e6();
                            FUN_28b3_1181();
                            if ((bool)uVar14) {
                              uVar13 = *(undefined2 *)0xa53e;
                              *(undefined2 *)(uVar9 + 0x1142) = *(undefined2 *)0xa53c;
                              *(undefined2 *)(uVar9 + 0x1144) = uVar13;
                            }
                          }
                        }
                      }
                      else {
                        ppuStack_c = (undefined2 **)0x112c;
                        piStack_e = (int *)0x112a;
                        piStack_10 = (int *)0x62d4;
                        piStack_14 = (int *)0x11f2;
                        uVar13 = 0x22b2;
                        puStack_16 = (undefined1 *)0xc5bc;
                        piStack_12 = piVar4;
                        FUN_21f2_34ae();
                      }
                    }
                    else {
                      ppuStack_c = (undefined2 **)0x10c2;
                      piStack_e = (int *)0x10be;
                      piStack_10 = (int *)0x10ba;
                      piStack_12 = (int *)0x10b6;
                      piStack_14 = (int *)0x10b2;
                      puStack_16 = (undefined1 *)0x627d;
                      apiStack_1c[1] = (int *)0x11f2;
                      uVar13 = 0x22b2;
                      apiStack_1c[0] = (int *)0xc3c5;
                      pcStack_18 = (char *)piVar4;
                      FUN_21f2_34ae();
                    }
                    goto LAB_3ab8_1371;
                  }
                  ppuStack_c = (undefined2 **)0x1be;
                  piStack_e = (int *)0x1bc;
                  piStack_10 = (int *)0x1ba;
                  piStack_12 = (int *)0x1b8;
                  piStack_14 = (int *)0x1b6;
                  puStack_16 = (undefined1 *)0x1b4;
                  pcStack_18 = (char *)0x1b2;
                  apiStack_1c[1] = (int *)0x1b0;
                }
                else {
                  ppuStack_c = (undefined2 **)0x1a8;
                  piStack_e = (int *)0x1a6;
                  piStack_10 = (int *)0x1a4;
                  piStack_12 = (int *)0x1a2;
                  piStack_14 = (int *)0x1a0;
                  puStack_16 = (undefined1 *)0x19e;
                  pcStack_18 = (char *)0x19c;
                  apiStack_1c[1] = (int *)0x19a;
                }
              }
              else {
                ppuStack_c = (undefined2 **)0x192;
                piStack_e = (int *)0x190;
                piStack_10 = (int *)0x18e;
                piStack_12 = (int *)0x18c;
                piStack_14 = (int *)0x18a;
                puStack_16 = (undefined1 *)0x188;
                pcStack_18 = (char *)0x186;
                apiStack_1c[1] = (int *)0x184;
              }
            }
            else {
              ppuStack_c = (undefined2 **)0x17c;
              piStack_e = (int *)0x17a;
              piStack_10 = (int *)0x178;
              piStack_12 = (int *)0x176;
              piStack_14 = (int *)0x174;
              puStack_16 = (undefined1 *)0x172;
              pcStack_18 = (char *)0x170;
              apiStack_1c[1] = (int *)0x16e;
            }
            apiStack_1c[0] = (int *)0x6398;
          }
          else {
            ppuStack_c = (undefined2 **)0xa96;
            piStack_e = (int *)0xa94;
            piStack_10 = (int *)0xa92;
            piStack_12 = (int *)0xa90;
            piStack_14 = (int *)0xa8e;
            puStack_16 = (undefined1 *)0xa8c;
            pcStack_18 = (char *)0xa8a;
            apiStack_1c[1] = (int *)0xa88;
            apiStack_1c[0] = (int *)0x63c8;
          }
          puStack_20 = (undefined1 *)0x11f2;
          uVar13 = 0x22b2;
          piStack_22 = (int *)0xc213;
          piStack_1e = piVar4;
          FUN_21f2_34ae();
          goto LAB_3ab8_1371;
        }
      }
      uVar13 = 0x22b2;
      goto LAB_3ab8_1371;
    }
    *(undefined1 *)(uVar7 + 0xb6c) = 1;
    *(undefined1 *)(uVar7 + 0xb7c) = 1;
    uVar9 = (uint)*(byte *)(uVar7 + 0xb8e);
    *(uint *)0xb310 = uVar9;
    uVar13 = *(undefined2 *)(uVar7 * 4 + 0xb2c);
    *(undefined2 *)0xb26 = *(undefined2 *)(uVar7 * 4 + 0xb2a);
    *(undefined2 *)0xb28 = uVar13;
    if (*(char *)(uVar9 + 0xc292) != '\0') {
      *(uint *)0xa6c = (uint)*(byte *)(uVar9 + 0xc292);
    }
    if (*(char *)(uVar9 + 0xb66a) != '\0') {
      *(uint *)0xa6a = (uint)*(byte *)(uVar9 + 0xb66a);
    }
    local_140 = 0;
    local_4c = 1;
    do {
      iVar10 = local_4c * 2;
      if (((aiStack_32[local_4c] != *(int *)(iVar10 + 0x182)) ||
          (aiStack_48[local_4c] != *(int *)(iVar10 + 0x198))) ||
         (apiStack_1c[local_4c] != (int *)*(int *)(iVar10 + 0x1ae))) {
        local_140 = 1;
      }
      local_4c = local_4c + 1;
    } while ((int)local_4c < 0xb);
    if (local_140 != 0) {
      for (local_4c = 1; (int)local_4c <= *(int *)0x150; local_4c = local_4c + 1) {
        ppuStack_c = (undefined2 **)0xc128;
        uVar16 = func_0x00000398();
        if (*(byte *)((int)uVar16 + 0x14) < 0x5a) {
          ppuStack_c = (undefined2 **)0xc13c;
          local_162 = (undefined2 *)func_0x00000398();
          puVar8 = (undefined2 *)local_162;
          ppuVar11 = &local_15c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            ppuVar2 = ppuVar11;
            ppuVar11 = ppuVar11 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *ppuVar2 = (undefined2 *)*puVar1;
          }
          ppuStack_c = (undefined2 **)0xbf48;
          piStack_e = (int *)0x0;
          piStack_10 = (int *)0xc167;
          FUN_1885_0344();
          local_15e = (uint)((local_146 & 0x20) != 0);
          ppuStack_c = (undefined2 **)0xbf48;
          piStack_e = (int *)0x18b3;
          piStack_10 = (int *)0xbfbe;
          puVar8 = (undefined2 *)func_0x00018eff();
          local_144 = *puVar8;
          local_142 = puVar8[1];
          uVar13 = (undefined2)((ulong)local_162 >> 0x10);
          puVar8 = (undefined2 *)local_162;
          FUN_28b3_0c98();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xbfef;
          func_0x000299d1();
          local_166 = (char *)CONCAT22((int)((ulong)local_162 >> 0x10),(undefined2 *)local_162 + 4);
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xc005;
          FUN_28b3_0c98();
          piStack_10 = (int *)0x22b2;
          piStack_12 = (int *)0xc00a;
          func_0x00029d78();
          pcStack_18 = (char *)0x22b2;
          apiStack_1c[1] = (int *)0xc014;
          func_0x000299d1();
          pcStack_18 = (char *)0x22b2;
          apiStack_1c[1] = (int *)0xc020;
          FUN_28b3_0c98();
          pcStack_18 = (char *)0x22b2;
          apiStack_1c[1] = (int *)0xc025;
          func_0x00029d78();
          puStack_20 = (undefined1 *)0x22b2;
          piStack_22 = (int *)0xc02f;
          func_0x000299d1();
          puStack_20 = (undefined1 *)0x22b2;
          piStack_22 = (int *)0xc038;
          FUN_28b3_0c98();
          puStack_20 = (undefined1 *)0x22b2;
          piStack_22 = (int *)0xc03d;
          func_0x00029d78();
          uStack_28 = 0x22b2;
          piStack_2a = (int *)0xc047;
          func_0x000299d1();
          uStack_28 = 0x22b2;
          piStack_2a = (int *)0xc04c;
          iVar10 = FUN_1def_043a();
          if (iVar10 == 0) {
            FUN_28b3_0c98();
            func_0x00029bb5();
            func_0x00029987();
            uVar12 = (undefined2)((ulong)local_162 >> 0x10);
            puVar8 = (undefined2 *)local_162;
            uVar13 = puVar8[3];
            puVar8[6] = puVar8[2];
            puVar8[7] = uVar13;
          }
          else {
            ppuStack_c = (undefined2 **)*(undefined2 *)0xa51e;
            piStack_e = (int *)*(undefined2 *)0xa51c;
            piStack_10 = (int *)0x1bb4;
            piStack_12 = (int *)0xc06f;
            func_0x000297e6();
            pcStack_18 = (char *)0x22b2;
            apiStack_1c[1] = (int *)0xc079;
            func_0x000299d1();
            pcStack_18 = (char *)0x0;
            apiStack_1c[1] = (int *)0x22b2;
            apiStack_1c[0] = (int *)0xc081;
            puVar3 = (undefined2 *)FUN_1def_05d1();
            uVar12 = puVar3[1];
            *(undefined2 *)local_166 = *puVar3;
            *(undefined2 *)((char *)local_166 + 2) = uVar12;
            ppuStack_c = (undefined2 **)*(undefined2 *)0xa51e;
            piStack_e = (int *)*(undefined2 *)0xa51c;
            piStack_10 = (int *)0x1bb4;
            piStack_12 = (int *)0xc0af;
            func_0x000297e6();
            pcStack_18 = (char *)0x22b2;
            apiStack_1c[1] = (int *)0xc0b9;
            func_0x000299d1();
            pcStack_18 = (char *)0x0;
            apiStack_1c[1] = (int *)0x22b2;
            apiStack_1c[0] = (int *)0xc0c1;
            puVar3 = (undefined2 *)func_0x0001e558();
            uVar12 = puVar3[1];
            puVar8[6] = *puVar3;
            puVar8[7] = uVar12;
          }
          *(undefined1 *)0xd14 = 2;
          *(undefined2 *)0xbc0 = 1;
        }
      }
    }
    if (local_13e != 0) {
      ppuStack_c = (undefined2 **)0xc18c;
      FUN_13bf_0b1b();
    }
    if ((*(byte *)(*(int *)0xd70 + 6) & 0x10) != 0) {
      return 0;
    }
  }
  return 0xffff;
}



/* 3ab8:250d  FUN_3ab8_250d  21 bytes, 0 callers */

void FUN_3ab8_250d(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 local_3e [50];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  puStack_6 = (undefined1 *)0xd098;
  FUN_21f2_0ebc();
  uStack_4 = 0x63ec;
  puStack_6 = local_3e;
  pcVar1 = (code *)swi(0x3f);
  iVar2 = (*pcVar1)();
  if ((iVar2 == 0) && (*(int *)0x158 == 0)) {
    FUN_10ad_18a4();
    uStack_4 = 0xd0c1;
    iVar2 = FUN_3ab8_1305();
    if (iVar2 != 0) {
      uStack_4 = 2;
      puStack_6 = (undefined1 *)0x14;
      uStack_8 = 0x63f1;
      uStack_a = 0x11f2;
      uStack_c = 0xd0df;
      FUN_1000_02b5();
      *(undefined2 *)0xc22 = 1;
    }
    func_0x0000b3f3();
    uStack_4 = 0xd0f5;
    func_0x0000b1d8();
    func_0x0000b6ea();
  }
  return;
}



/* 3ab8:257f  FUN_3ab8_257f  15 bytes, 0 callers */

void __cdecl16far FUN_3ab8_257f(void)

{
  FUN_21f2_0ebc();
  return;
}



/* 3ab8:258e  FUN_3ab8_258e  49 bytes, 0 callers */

void FUN_3ab8_258e(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  undefined1 local_10 [4];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined2 uStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  uStack_6 = 0xd119;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)*(undefined2 *)0xa62;
  uStack_6 = 0x63fa;
  puStack_8 = local_10;
  uStack_a = 0x22b2;
  uStack_c = 0xd12a;
  FUN_21f2_3454();
  puStack_4 = local_10;
  uStack_6 = 0x1082;
  puStack_8 = (undefined1 *)0x1078;
  uStack_a = 0x6406;
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  *(undefined2 *)0x158 = 0;
  FUN_1000_0620();
  return;
}



/* 3ab8:25d4  FUN_3ab8_25d4  344 bytes, 2 callers */

void __cdecl16far FUN_3ab8_25d4(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 local_34;
  undefined2 local_32;
  int local_30;
  undefined1 local_2e [34];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  uStack_6 = 0xd15f;
  FUN_21f2_0ebc();
  puStack_4 = (undefined2 *)local_2e;
  uStack_6 = 0;
  uStack_8 = 0xb76e;
  uStack_a = 0x22b2;
  uStack_c = 0xd16f;
  iVar2 = func_0x000276d7();
  if (iVar2 != 0) {
    puStack_4 = (undefined2 *)0xa1e;
    uStack_6 = 0xb76e;
    uStack_8 = 0x22b2;
    uStack_a = 0xd183;
    FUN_21f2_3454();
    *(undefined1 *)0x6124 = 0;
  }
  *(undefined2 *)0x6126 = 0;
  *(undefined2 *)0x6128 = 0;
  puStack_4 = (undefined2 *)0xd12;
  uStack_6 = 2;
  uStack_8 = 0xb76e;
  uStack_a = 0x22b2;
  uStack_c = 0xd1a3;
  iVar2 = FUN_21f2_5804();
  if (iVar2 != 0) {
    puStack_4 = (undefined2 *)0x22b2;
    uStack_6 = 0xd1af;
    func_0x0002504e();
    *(undefined1 *)0x6124 = 0;
    puStack_4 = (undefined2 *)0xa1e;
    uStack_6 = 0xb76e;
    uStack_8 = 0x22b2;
    uStack_a = 0xd1c1;
    FUN_21f2_3454();
    puStack_4 = (undefined2 *)0xd12;
    uStack_6 = 2;
    uStack_8 = 0xb76e;
    uStack_a = 0x22b2;
    uStack_c = 0xd1d4;
    iVar2 = FUN_21f2_5804();
    if (iVar2 != 0) {
      puStack_4 = (undefined2 *)0x22b2;
      uStack_6 = 0xd204;
      func_0x0002504e();
      if (((*(char *)0x6124 == '\0') || (param_1 != *(int *)0x6126)) || (param_2 != *(int *)0x6128))
      {
        puStack_4 = (undefined2 *)0x254;
        uStack_6 = 0xb76e;
        uStack_8 = 0x22b2;
        uStack_a = 0xd22b;
        iVar2 = FUN_21f2_1348();
        *(int *)0xd70 = iVar2;
        if (iVar2 != 0) {
          puStack_4 = (undefined2 *)0x22b2;
          uVar3 = 0x885;
          uStack_6 = 0xd239;
          func_0x0000c3ca();
          *(undefined1 *)0x6124 = 0;
          local_30 = 0;
          do {
            *(undefined2 *)(local_30 * 4 + -0x4de6) = 0;
            *(undefined2 *)(local_30 * 4 + -0x4de8) = 0;
            local_30 = local_30 + 1;
          } while (local_30 < 0x28);
          while( true ) {
            puStack_4 = &local_34;
            uStack_6 = *(undefined2 *)0xd70;
            uStack_a = 0xd296;
            uStack_8 = uVar3;
            FUN_21f2_3154();
            puStack_4 = (undefined2 *)*(undefined2 *)0xd70;
            uStack_6 = 0x50;
            uStack_8 = 0xbf48;
            uStack_a = 0x22b2;
            uVar3 = 0x22b2;
            uStack_c = 0xd2a9;
            iVar2 = func_0x0002509c();
            if (iVar2 == 0) break;
            if ((*(char *)0xbf48 == '\f') && (*(byte *)0x6124 < 0x27)) {
              *(char *)0x6124 = *(char *)0x6124 + '\x01';
              bVar1 = *(byte *)0x6124;
              *(undefined2 *)((uint)bVar1 * 4 + -0x4de8) = local_34;
              *(undefined2 *)((uint)bVar1 * 4 + -0x4de6) = local_32;
            }
          }
        }
      }
      *(undefined2 *)0xd70 = 0;
      puStack_4 = (undefined2 *)0x22b2;
      uStack_6 = 0xd2bb;
      func_0x0002504e();
      return;
    }
  }
  puStack_4 = (undefined2 *)0x6128;
  uStack_6 = 0x6126;
  uStack_8 = *(undefined2 *)0xd12;
                    /* WARNING: Subroutine does not return */
  uStack_a = 0x22b2;
  uStack_c = 0xd1ec;
  thunk_FUN_32b2_6cc6();
}



/* 3ab8:273f  FUN_3ab8_273f  1762 bytes, 0 callers */

void __cdecl16far FUN_3ab8_273f(void)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 local_be [4];
  byte local_ba [4];
  int local_b6;
  undefined2 local_b4;
  byte local_b2;
  byte local_b1 [99];
  int local_4e;
  int local_4a;
  int local_46;
  undefined1 local_44 [24];
  uint local_2c;
  undefined1 local_18 [6];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  byte *pbStack_c;
  byte *pbStack_a;
  byte *pbStack_8;
  byte *pbStack_6;
  byte *local_4;
  
  local_4 = (byte *)0x3ab8;
  pbStack_6 = (byte *)0xd2ca;
  FUN_21f2_0ebc();
  local_b6 = 0;
  local_4 = (byte *)0x22b2;
  pbStack_6 = (byte *)0xd2d5;
  func_0x0000c3ca();
  local_4 = local_44;
  pbStack_6 = (byte *)0x0;
  pbStack_8 = (byte *)0x6409;
  pbStack_a = (byte *)0x885;
  pbStack_c = (byte *)0xd2e5;
  iVar3 = func_0x000276d7();
  if (iVar3 == 0) {
    local_4 = (byte *)(local_2c & 0x1f);
    pbStack_6 = (byte *)((local_2c & 0x1e0) >> 5);
    pbStack_8 = (byte *)((local_2c >> 9) + 0x50);
    pbStack_a = (byte *)0x6415;
    pbStack_c = local_18;
    uStack_e = 0x22b2;
    uStack_10 = 0xd316;
    FUN_21f2_3454();
  }
  else {
    local_4 = (byte *)0x6424;
    pbStack_6 = local_18;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd328;
    func_0x00024c86();
  }
  local_4 = local_44;
  pbStack_6 = (byte *)0x0;
  pbStack_8 = (byte *)0xb76e;
  pbStack_a = (byte *)0x22b2;
  pbStack_c = (byte *)0xd33a;
  iVar3 = func_0x000276d7();
  if (iVar3 != 0) {
    local_4 = (byte *)0xa1e;
    pbStack_6 = (byte *)0xb76e;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd34e;
    FUN_21f2_3454();
    local_4 = local_44;
    pbStack_6 = (byte *)0x0;
    pbStack_8 = (byte *)0xb76e;
    pbStack_a = (byte *)0x22b2;
    pbStack_c = (byte *)0xd360;
    pbStack_6 = (byte *)func_0x000276d7();
    if (pbStack_6 != (byte *)0x0) {
      return;
    }
    *(undefined1 *)0x6124 = 0;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd375;
    local_4 = pbStack_6;
    FUN_3ab8_25d4();
  }
  local_4 = (byte *)0x22b2;
  pbStack_6 = (byte *)0xd37c;
  FUN_1000_0620();
  if (*(int *)0xa62 == 0) {
    local_4a = 0x1e;
  }
  else {
    local_4a = *(int *)0xa62;
  }
  if (0x1f < *(int *)0xa62) {
    local_4a = 0x23;
  }
  if (*(int *)0xca2 != 0) {
    local_4a = 0x1f;
  }
  local_4 = (byte *)0x254;
  pbStack_6 = (byte *)0xb76e;
  pbStack_8 = (byte *)0xdef;
  uVar6 = 0x22b2;
  pbStack_a = (byte *)0xd3b5;
  iVar3 = FUN_21f2_1348();
  *(int *)0xb2b8 = iVar3;
  if (iVar3 == 0) {
    local_4 = (byte *)0x1dc;
    pbStack_6 = (byte *)0x22b2;
    pbStack_8 = (byte *)0xd3c7;
    func_0x00012276();
  }
  else {
    *(undefined2 *)0xc28 = 1;
    if (*(int *)0xc08 == 0) {
      local_4 = (byte *)0x0;
      pbStack_6 = (byte *)0x22b2;
      pbStack_8 = (byte *)0xd3e0;
      func_0x0000daa6();
      local_4 = (byte *)0x885;
      pbStack_6 = (byte *)0xd3e6;
      FUN_1885_333f();
      local_4 = (byte *)0x1bb4;
      pbStack_6 = (byte *)0xd3eb;
      func_0x0000ac64();
      local_4 = (byte *)0x885;
      uVar6 = 0x1bb4;
      pbStack_6 = (byte *)0xd3f0;
      func_0x0001bba4();
    }
LAB_3ab8_2870:
    pbStack_6 = (byte *)0xd3f5;
    local_4 = (byte *)uVar6;
    func_0x0000c3ca();
    local_4 = (byte *)(*(int *)0xa60 + -1);
    pbStack_6 = (byte *)(*(int *)0x1b3e + -1);
    pbStack_8 = (byte *)(*(int *)0xa5e + 1);
    pbStack_a = (byte *)(*(int *)0xa5c + 1);
    pbStack_c = (byte *)0x885;
    uStack_e = 0xd40e;
    func_0x0000a76b();
    local_4 = (byte *)0x885;
    pbStack_6 = (byte *)0xd416;
    func_0x0000a799();
    *(undefined2 *)0xbc0 = 1;
    local_4 = local_18;
    pbStack_6 = (byte *)0x612a;
    pbStack_8 = (byte *)0x17bc;
    pbStack_a = (byte *)0x6425;
    pbStack_c = &local_b2;
    uStack_e = 0x885;
    uStack_10 = 0xd436;
    FUN_21f2_3454();
    local_4 = (byte *)0x2;
    pbStack_6 = (byte *)0x11;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd446;
    FUN_1000_0599();
    local_4 = (byte *)0xdef;
    pbStack_6 = (byte *)0xd44d;
    func_0x00010526();
    local_4 = (byte *)0x3;
    pbStack_6 = (byte *)0x11;
    pbStack_8 = (byte *)0xdef;
    pbStack_a = (byte *)0xd45a;
    FUN_1000_0599();
    local_4 = (byte *)0xdef;
    pbStack_6 = (byte *)0xd461;
    func_0x00010526();
    if (*(char *)0x124 == '\0') {
      pbStack_8 = (byte *)0x2;
    }
    else {
      pbStack_8 = (byte *)0x3;
    }
    local_4 = (byte *)0xffff;
    pbStack_6 = (byte *)0x6;
    pbStack_a = (byte *)0x11;
    pbStack_c = &local_b2;
    uStack_e = 0xdef;
    uStack_10 = 0xd48f;
    FUN_1000_02b5();
    if (local_4a < 1) {
      local_4a = 0x1e;
    }
    if ((int)(uint)*(byte *)0x6124 < local_4a) {
      local_4a = 1;
    }
    local_4 = (byte *)(local_4a * 4 + -0x4de8);
    pbStack_6 = (byte *)*(undefined2 *)0xb2b8;
    pbStack_8 = (byte *)0xdef;
    pbStack_a = (byte *)0xd4c0;
    FUN_21f2_32c4();
    local_4 = (byte *)*(undefined2 *)0xb2b8;
    pbStack_6 = (byte *)0x50;
    pbStack_8 = &local_b2;
    pbStack_a = (byte *)0x22b2;
    pbStack_c = (byte *)0xd4d4;
    func_0x0002509c();
    for (local_4e = 1; uVar6 = 0x22b2, local_4e <= local_b6; local_4e = local_4e + 1) {
LAB_3ab8_2978:
      local_4 = (byte *)*(undefined2 *)0xb2b8;
      pbStack_6 = (byte *)0x50;
      pbStack_8 = &local_b2;
      pbStack_a = (byte *)0x22b2;
      uVar6 = 0x22b2;
      pbStack_c = (byte *)0xd50a;
      iVar3 = func_0x0002509c();
      if (iVar3 == 0) goto LAB_3ab8_2991;
      if ((local_b2 != 0x81) || (local_b1[0] != 0x96)) goto LAB_3ab8_299f;
    }
    local_4e = 4;
    do {
      local_4 = (byte *)local_4e;
      pbStack_6 = (byte *)0x11;
      pbStack_a = (byte *)0xd546;
      pbStack_8 = (byte *)uVar6;
      FUN_1000_0599();
      local_4 = (byte *)0xdef;
      uVar6 = 0xdef;
      pbStack_6 = (byte *)0xd54d;
      func_0x00010526();
      local_4e = local_4e + 1;
    } while (local_4e < 0x19);
    for (local_4e = 4; local_4e < 0x18; local_4e = local_4e + 1) {
      local_4 = (byte *)local_4e;
      pbStack_6 = (byte *)0x11;
      pbStack_a = (byte *)0xd742;
      pbStack_8 = (byte *)uVar6;
      FUN_1000_0599();
      if (local_b2 < 0x20) {
        local_4 = local_b1;
      }
      else {
        local_4 = &local_b2;
      }
      pbStack_6 = (byte *)0x1de;
      pbStack_8 = (byte *)0xdef;
      pbStack_a = (byte *)0xd56c;
      func_0x00012276();
      local_4 = (byte *)*(undefined2 *)0xb2b8;
      pbStack_6 = (byte *)0x4b;
      pbStack_8 = &local_b2;
      pbStack_a = (byte *)0x11f2;
      uVar6 = 0x22b2;
      pbStack_c = (byte *)0xd580;
      func_0x0002509c();
      if (((local_b2 == 0x81) && (local_b1[0] == 0x96)) || (local_b2 == 0xc)) break;
    }
    local_4 = (byte *)0x0;
    pbStack_8 = (byte *)0xd59c;
    pbStack_6 = (byte *)uVar6;
    func_0x0000daa6();
    local_4 = (byte *)0xffff;
    pbStack_6 = (byte *)0x7;
    pbStack_8 = (byte *)*(undefined2 *)0xa5a;
    pbStack_a = (byte *)*(undefined2 *)0x1b3e;
    pbStack_c = (byte *)*(int *)0xa5e;
    uStack_e = *(undefined2 *)0x1b3e;
    uStack_10 = 0x885;
    uStack_12 = 0xd5ba;
    func_0x0000def0();
    if (*(char *)0x124 != '\0') {
      local_4 = (byte *)0xb76e;
      pbStack_6 = &local_b2;
      pbStack_8 = (byte *)0xdef;
      pbStack_a = (byte *)0xd5d2;
      FUN_21f2_3454();
      local_4 = &local_b2;
      pbStack_6 = (byte *)0x22b2;
      pbStack_8 = (byte *)0xd5e2;
      puVar4 = (undefined1 *)FUN_21f2_3be6();
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      local_4 = (byte *)0xffff;
      pbStack_6 = (byte *)0x7;
      pbStack_8 = (byte *)0x2;
      pbStack_a = (byte *)0x48;
      pbStack_c = &local_b2;
      uStack_e = 0x22b2;
      uStack_10 = 0xd60a;
      FUN_1000_02b5();
    }
    local_4 = (byte *)0x642e;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0xdef;
    pbStack_a = (byte *)0xd61b;
    FUN_21f2_3454();
    local_4 = (byte *)0x6460;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd62b;
    FUN_21f2_2d26();
    local_4 = (byte *)0x6432;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd63b;
    FUN_21f2_2d26();
    local_4 = (byte *)0x6460;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd64b;
    FUN_21f2_2d26();
    local_4 = (byte *)0x6436;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd65b;
    FUN_21f2_2d26();
    local_4 = (byte *)0x6466;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd66b;
    FUN_21f2_2d26();
    local_4 = (byte *)0x643c;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd67b;
    FUN_21f2_2d26();
    local_4 = (byte *)0x6466;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd68b;
    FUN_21f2_2d26();
    local_4 = (byte *)0x6442;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd69b;
    FUN_21f2_2d26();
    local_4 = (byte *)0x6466;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd6ab;
    FUN_21f2_2d26();
    local_4 = (byte *)0x6447;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd6bb;
    FUN_21f2_2d26();
    if (*(char *)0x124 != '\0') {
      local_4 = (byte *)0x6449;
      pbStack_6 = &local_b2;
      pbStack_8 = (byte *)0x22b2;
      pbStack_a = (byte *)0xd6d2;
      FUN_21f2_2d26();
    }
    local_4 = &local_b2;
    pbStack_6 = (byte *)0x7;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd6e2;
    FUN_1def_07a4();
    local_b4 = *(undefined2 *)0xc2c;
    *(undefined2 *)0xc2c = 0;
    local_4 = (byte *)&local_46;
    pbStack_6 = local_be;
    pbStack_8 = local_ba;
    pbStack_a = &local_b2;
    pbStack_c = (byte *)0x1;
    uStack_e = 0x1bb4;
    uVar6 = 0x1bb4;
    uStack_10 = 0xd70d;
    local_4e = FUN_1def_0904();
    *(undefined2 *)0xc2c = local_b4;
    if (((*(int *)0x158 != 0) || (local_4e == -1)) || (local_4e == 0x3f00)) goto LAB_3ab8_2bdb;
    if ((local_4e == 0x3e00) && (*(char *)0x15a != '\0')) {
      uVar6 = *(undefined2 *)0x1cc4;
      local_4 = (byte *)0x1bb4;
      pbStack_6 = (byte *)0xd796;
      uVar5 = func_0x0000db57();
      if (((uVar5 & 2) != 0) && (*(int *)0x1cc4 == 0x70)) {
        *(undefined2 *)0x1cc4 = 0x6a;
      }
      uVar1 = *(undefined2 *)0xa60;
      local_4 = (byte *)0x885;
      pbStack_6 = (byte *)0xd7b3;
      FUN_10ad_0593();
      *(undefined2 *)0xa60 = uVar1;
      *(undefined2 *)0x1cc4 = uVar6;
      pcVar2 = (code *)swi(0x3f);
      (*pcVar2)();
      if (*(char *)0xb782 != '\0') {
        local_4 = (byte *)0xd7d6;
        FUN_21f2_1262();
        *(undefined2 *)0xbc0 = 1;
        *(undefined2 *)0xc28 = 0;
        if (*(byte *)0xb782 < 4) {
          *(undefined2 *)0xa5c = 0;
          *(undefined2 *)0xa60 = *(undefined2 *)0x1b40;
          pcVar2 = (code *)swi(0x3f);
          (*pcVar2)();
          FUN_13bf_0b1b();
          return;
        }
        *(undefined2 *)0x158 = 20000;
        return;
      }
      uVar6 = 0x885;
      func_0x0000a7c5();
      goto LAB_3ab8_2bdb;
    }
    if ((((local_46 == 1) || (local_4e == 1)) || (local_4e == 0x3d00)) || (local_4e == 0x3700)) {
      local_b6 = local_b6 + 1;
      goto LAB_3ab8_2870;
    }
    if (((local_46 == 2) || (local_4e == 2)) || ((local_4e == 0x3a00 || (local_4e == 0x3600)))) {
      local_b6 = local_b6 + -1;
      if (local_b6 < 0) {
        local_4a = local_4a + -1;
LAB_3ab8_2996:
        local_b6 = 0;
      }
      goto LAB_3ab8_2870;
    }
    if (local_4e != 7) {
      if ((local_4e == 6) && (0x22 < local_4a)) {
        local_b6 = 0;
        local_4a = local_4a + 1;
        if ((int)(uint)*(byte *)0x6124 < local_4a) {
          local_4a = 0x23;
        }
      }
      else if (2 < local_4e) {
        local_b6 = 0;
        local_4a = local_4e + 0x1d;
      }
      goto LAB_3ab8_2870;
    }
    local_4 = (byte *)0xb76e;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x1bb4;
    pbStack_a = (byte *)0xd87d;
    FUN_21f2_3454();
    local_4 = (byte *)0x2e;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd88d;
    local_4 = (byte *)FUN_21f2_3be6();
    if (local_4 != (undefined1 *)0x0) {
      *local_4 = 0;
    }
    pbStack_6 = (byte *)0x8;
    pbStack_8 = (byte *)0x2;
    pbStack_a = (byte *)0x48;
    pbStack_c = &local_b2;
    uStack_e = 0x22b2;
    uStack_10 = 0xd8b1;
    local_4e = FUN_12c1_03d3();
    pbStack_8 = (byte *)0x0;
    pbStack_a = (byte *)0x11f2;
    pbStack_c = (byte *)0xd8bf;
    func_0x0000daa6();
    *(byte *)0xc3be = *(byte *)0xc3be & 0xf7;
    pbStack_8 = (byte *)0x1;
    pbStack_a = (byte *)0x885;
    pbStack_c = (byte *)0xd8ce;
    func_0x0000daa6();
    pbStack_8 = (byte *)0x885;
    uVar6 = 0x2c1;
    pbStack_a = (byte *)0xd8d4;
    func_0x00002cc6();
    if (local_4e < 1) goto LAB_3ab8_2870;
    local_4 = (byte *)0xa;
    pbStack_6 = &local_b2;
    pbStack_8 = (byte *)0x2c1;
    pbStack_a = (byte *)0xd8eb;
    local_4 = (byte *)FUN_21f2_3be6();
    if (local_4 != (undefined1 *)0x0) {
      *local_4 = 0;
    }
    pbStack_6 = (byte *)0x2e;
    pbStack_8 = &local_b2;
    pbStack_a = (byte *)0x22b2;
    pbStack_c = (byte *)0xd907;
    local_4 = (byte *)FUN_21f2_3be6();
    if (local_4 != (undefined1 *)0x0) {
      *local_4 = 0;
    }
    pbStack_8 = &local_b2;
    pbStack_a = (byte *)0xb76e;
    pbStack_c = (byte *)0x22b2;
    uStack_e = 0xd923;
    FUN_21f2_3454();
    pbStack_8 = (byte *)0x645a;
    pbStack_a = (byte *)0xb76e;
    pbStack_c = (byte *)0x22b2;
    uStack_e = 0xd932;
    FUN_21f2_2d26();
    pbStack_8 = (byte *)*(undefined2 *)0xb2b8;
    pbStack_a = (byte *)0x22b2;
    pbStack_c = (byte *)0xd93d;
    FUN_21f2_1262();
    *(undefined1 *)0x6124 = 0;
    local_4 = (byte *)0x0;
    pbStack_6 = (byte *)0x0;
    pbStack_8 = (byte *)0x22b2;
    pbStack_a = (byte *)0xd94b;
    FUN_3ab8_25d4();
    local_4 = (byte *)0x254;
    pbStack_6 = (byte *)0xb76e;
    pbStack_8 = (byte *)0x22b2;
    uVar6 = 0x22b2;
    pbStack_a = (byte *)0xd95a;
    iVar3 = FUN_21f2_1348();
    *(int *)0xb2b8 = iVar3;
    if (iVar3 != 0) goto LAB_3ab8_2870;
LAB_3ab8_2bdb:
    local_4 = (byte *)*(undefined2 *)0xb2b8;
    pbStack_8 = (byte *)0xd764;
    pbStack_6 = (byte *)uVar6;
    FUN_21f2_1262();
    local_4 = (byte *)0x22b2;
    uVar6 = 0x885;
    pbStack_6 = (byte *)0xd76a;
    func_0x0000c3ca();
    for (local_4e = 2; local_4e < 0x19; local_4e = local_4e + 1) {
      local_4 = (byte *)local_4e;
      pbStack_6 = (byte *)0x11;
      pbStack_a = (byte *)0xd9c3;
      pbStack_8 = (byte *)uVar6;
      FUN_1000_0599();
      local_4 = (byte *)0xdef;
      uVar6 = 0xdef;
      pbStack_6 = (byte *)0xd9ca;
      func_0x00010526();
    }
    if (*(int *)0xc08 == 0) {
      local_4 = (byte *)0x0;
      pbStack_8 = (byte *)0xd9db;
      pbStack_6 = (byte *)uVar6;
      func_0x0000daa6();
      local_4 = (byte *)0x885;
      uVar6 = 0x1bb4;
      pbStack_6 = (byte *)0xd9e1;
      func_0x0001bba4();
    }
    local_4 = (byte *)0x0;
    pbStack_8 = (byte *)0xd9e9;
    pbStack_6 = (byte *)uVar6;
    FUN_13bf_0b1b();
    *(undefined2 *)0xbc0 = 1;
    *(undefined2 *)0xc28 = 0;
  }
  return;
LAB_3ab8_299f:
  if (local_b2 == 0xc) {
    if (local_4a < (int)(uint)*(byte *)0x6124) {
      local_4a = local_4a + 1;
    }
    else {
LAB_3ab8_2991:
      local_4a = 1;
    }
    goto LAB_3ab8_2996;
  }
  goto LAB_3ab8_2978;
}



/* 3ab8:2e82  OVL_2e82  25 bytes, 0 callers */

void OVL_2e82(void)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_21f2_0ebc();
  uVar2 = 0x22b2;
  do {
    iVar1 = FUN_1000_0632(uVar2);
    uVar2 = 0xdef;
  } while (iVar1 != 0);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_32b2_02bc();
}



/* 3ab8:2f0e  FUN_3ab8_2f0e  294 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_2f0e(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 local_aa [4];
  undefined1 local_a6 [4];
  undefined2 local_a2;
  int local_8e;
  undefined1 local_7e [4];
  undefined1 local_7a [102];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  
  uVar3 = 0x22b2;
  FUN_21f2_0ebc();
  local_a2 = 1;
  if (*(char *)0xd14 == '\0') {
    local_8e = 1;
  }
  else {
    do {
      puStack_8 = (undefined1 *)0x3a6;
      puStack_a = local_7a;
      puStack_e = (undefined1 *)0xdab8;
      puStack_c = (undefined1 *)uVar3;
      FUN_21f2_3454();
      puStack_8 = (undefined1 *)0x647f;
      puStack_a = local_7a;
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xdac7;
      FUN_21f2_2d26();
      puStack_8 = (undefined1 *)0x7e0;
      puStack_a = local_7a;
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xdad6;
      FUN_21f2_2d26();
      puStack_8 = (undefined1 *)0x7e6;
      puStack_a = local_7a;
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xdae5;
      FUN_21f2_2d26();
      puStack_8 = (undefined1 *)0x7ec;
      puStack_a = local_7a;
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xdaf4;
      FUN_21f2_2d26();
      puStack_8 = local_7a;
      puStack_a = (undefined1 *)0x3;
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xdb03;
      FUN_1def_07a4();
      puStack_8 = local_7e;
      puStack_a = local_aa;
      puStack_c = local_a6;
      puStack_e = local_7a;
      uStack_10 = 1;
      uStack_12 = 0x1bb4;
      uVar3 = 0x1bb4;
      uStack_14 = 0xdb20;
      local_8e = FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return 0xfba9;
      }
      if (local_8e == -1) {
        return 0xffff;
      }
      if (local_8e == 3) {
        return 3;
      }
      if (local_8e == 2) {
        puStack_8 = local_7a;
        pcVar1 = (code *)swi(0x3f);
        iVar2 = (*pcVar1)();
        if (iVar2 == -1) {
          return 0xffff;
        }
        if (*(int *)0x158 != 0) {
          return 0xfba9;
        }
        local_8e = 1;
      }
    } while (local_8e != 1);
    if (((*(char *)0x7e != '\0') && (*(char *)0xd14 == '\x02')) && (1 < *(byte *)0x84)) {
      puStack_8 = (undefined1 *)0x1bb4;
      puStack_a = (undefined1 *)0xdb8a;
      func_0x0000c3ca();
      puStack_8 = (undefined1 *)0xb2fe;
      puStack_a = (undefined1 *)0x90;
      puStack_c = local_7a;
      puStack_e = (undefined1 *)0x885;
      uVar3 = 0x11f2;
      uStack_10 = 0xdb9b;
      func_0x0001263c();
      puStack_8 = (undefined1 *)0x90;
      puStack_a = (undefined1 *)0xbefe;
      puStack_c = local_7a;
      puStack_e = (undefined1 *)0x1;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
      *(undefined1 *)0xd14 = 4;
    }
  }
  puStack_a = (undefined1 *)0xdbc8;
  puStack_8 = (undefined1 *)uVar3;
  func_0x0000c3ca();
  if (local_8e != 1) {
    return 0xffff;
  }
  puStack_8 = (undefined1 *)0x2;
  pcVar1 = (code *)swi(0x3f);
  (*pcVar1)();
  puStack_8 = (undefined1 *)0xdbe1;
  func_0x0000daa6();
  if ((*(byte *)0x120 & 1) == 0) {
    puStack_8 = (undefined1 *)0x0;
    puStack_a = (undefined1 *)0x3;
    puStack_c = (undefined1 *)0x885;
    puStack_e = (undefined1 *)0xdc01;
    func_0x0000f2cb();
    puStack_8 = (undefined1 *)0x0;
    puStack_a = (undefined1 *)0x0;
    puStack_c = (undefined1 *)0xdef;
    puStack_e = (undefined1 *)0xdc15;
    func_0x0000f1d8();
    puStack_8 = (undefined1 *)0xdc21;
    func_0x0000f2d3();
    puStack_8 = (undefined1 *)0x0;
    puStack_a = (undefined1 *)0x3;
    puStack_c = (undefined1 *)0xdef;
    puStack_e = (undefined1 *)0xdc36;
    func_0x0000f2cb();
    puStack_8 = (undefined1 *)0x0;
    puStack_a = (undefined1 *)0x0;
    puStack_c = (undefined1 *)0xdef;
    puStack_e = (undefined1 *)0xdc4a;
    func_0x0000f1d8();
    puStack_8 = (undefined1 *)0xdc56;
    func_0x0000f2d3();
    puStack_8 = (undefined1 *)0xdc60;
    FUN_1000_0606();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_10ad_0a7a();
}



/* 3ab8:355f  FUN_3ab8_355f  2119 bytes, 0 callers */

void __cdecl16far FUN_3ab8_355f(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 **ppuVar6;
  undefined2 unaff_DS;
  int local_1a;
  int local_18;
  int *local_16;
  undefined1 **local_14;
  undefined2 **local_12;
  undefined2 **local_10;
  int local_e;
  undefined1 *local_c;
  undefined1 *local_a;
  int local_8;
  int local_6;
  
  local_6 = 0xe0ea;
  FUN_21f2_0ebc();
  local_e = 0;
  local_10 = (undefined2 **)0x0;
  local_6 = 0x254;
  local_8 = 0x64b4;
  local_a = (undefined1 *)0x22b2;
  local_c = (undefined1 *)0xe105;
  local_6 = FUN_21f2_1348();
  *(int *)0xd70 = local_6;
  if (local_6 != 0) {
    local_8 = 100;
    local_a = (undefined1 *)0xbf48;
    local_c = (undefined1 *)0x22b2;
    local_e = -0x1ee4;
    iVar2 = func_0x0002509c();
    if (iVar2 != 0) {
      local_6 = 0x22;
      local_8 = -0x40b8;
      local_a = (undefined1 *)0xedc;
      local_c = (undefined1 *)0x22b2;
      local_e = -0x1ecc;
      FUN_21f2_2de0();
      *(undefined1 *)0xefe = 0;
    }
  }
  local_6 = 0x22b2;
  local_8 = -0x1ebf;
  func_0x0002504e();
  *(undefined1 *)0x6124 = 0;
  local_6 = 0xa1e;
  local_8 = -0x4892;
  local_a = (undefined1 *)0x22b2;
  local_c = (undefined1 *)0xe153;
  FUN_21f2_3454();
  local_6 = 0x254;
  local_8 = 0x100;
  local_a = (undefined1 *)0x22b2;
  local_c = (undefined1 *)0xe162;
  local_6 = FUN_21f2_1348();
  *(int *)0xd70 = local_6;
  if (local_6 == 0) {
    local_6 = 0x22b2;
    local_8 = -0x17d3;
    func_0x0002504e();
    *(undefined2 *)0xd70 = 0;
    local_10 = (undefined2 **)0x258;
    local_12 = (undefined2 **)0x100;
    local_14 = (undefined1 **)0x22b2;
    local_16 = (int *)0xe840;
    uVar5 = FUN_21f2_1348();
    *(undefined2 *)0xd70 = uVar5;
    goto LAB_3ab8_3cc5;
  }
  local_8 = 0x2a;
  local_a = (undefined1 *)0xd18;
  local_c = (undefined1 *)0x22b2;
  local_e = 0xe17c;
  iVar2 = func_0x0002509c();
  if (iVar2 == 0) {
    local_6 = 0x64bf;
    local_8 = 0xd18;
    local_a = (undefined1 *)0x22b2;
    local_c = (undefined1 *)0xe190;
    func_0x00024c86();
  }
  local_6 = *(undefined2 *)0xd70;
  local_8 = 0x2a;
  local_a = (undefined1 *)0xd44;
  local_c = (undefined1 *)0x22b2;
  local_e = 0xe1a3;
  iVar2 = func_0x0002509c();
  if (iVar2 == 0) {
    local_6 = 0x64c2;
    local_8 = 0xd44;
    local_a = (undefined1 *)0x22b2;
    local_c = (undefined1 *)0xe1b7;
    func_0x00024c86();
  }
  local_6 = *(undefined2 *)0xd70;
  local_8 = 0x3c;
  local_a = (undefined1 *)0xbf48;
  local_c = (undefined1 *)0x22b2;
  local_e = 0xe1ca;
  iVar2 = func_0x0002509c();
  if (iVar2 == 0) {
    local_6 = 0x64c5;
    local_c = (undefined1 *)0xe82;
LAB_3ab8_36b8:
    local_e = 0x22b2;
    local_10 = (undefined2 **)0xe23e;
    func_0x00024c86();
  }
  else {
    local_6 = 0x5c;
    local_8 = -0x40b8;
    local_a = (undefined1 *)0x22b2;
    local_c = (undefined1 *)0xe1e7;
    puVar3 = (undefined1 *)FUN_21f2_3be6();
    if (puVar3 == (undefined1 *)0x0) {
      local_8 = 0x3a;
      local_a = (undefined1 *)0xbf48;
      local_c = (undefined1 *)0x22b2;
      local_e = 0xe213;
      puVar3 = (undefined1 *)FUN_21f2_3be6();
    }
    else {
      *puVar3 = 0;
      local_8 = -0x40b8;
      local_a = (undefined1 *)0xe82;
      local_c = (undefined1 *)0x22b2;
      local_e = 0xe202;
      func_0x00024c86();
    }
    if (puVar3 != (undefined1 *)0x0) {
      local_a = (undefined1 *)0x64c8;
      local_e = 0x22b2;
      local_10 = (undefined2 **)0xe22e;
      local_c = puVar3 + 1;
      iVar2 = func_0x00025bc2();
      if (iVar2 != 0) {
        local_c = (undefined1 *)0xeae;
        local_a = puVar3 + 1;
        goto LAB_3ab8_36b8;
      }
    }
  }
  local_a = (undefined1 *)0xa;
  local_c = (undefined1 *)0xd18;
  local_e = 0x22b2;
  local_10 = (undefined2 **)0xe24d;
  puVar3 = (undefined1 *)FUN_21f2_3be6();
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  local_c = (undefined1 *)0xa;
  local_e = 0xd44;
  local_10 = (undefined2 **)0x22b2;
  local_12 = (undefined2 **)0xe268;
  puVar3 = (undefined1 *)FUN_21f2_3be6();
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  local_e = 10;
  local_10 = (undefined2 **)0xeae;
  local_12 = (undefined2 **)0x22b2;
  local_14 = (undefined1 **)0xe283;
  puVar3 = (undefined1 *)FUN_21f2_3be6();
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  *(undefined1 *)0xbf48 = 0;
  local_10 = (undefined2 **)*(undefined2 *)0xd70;
  local_12 = (undefined2 **)0x12a;
  local_14 = (undefined1 **)0xbf48;
  local_16 = (int *)0x22b2;
  local_18 = -0x1d59;
  func_0x0002509c();
  local_10 = (undefined2 **)0xff2;
  local_12 = (undefined2 **)0x66;
  local_14 = (undefined1 **)0xcf2;
  local_16 = (int *)0xcf0;
  local_18 = 0xcee;
  local_1a = 0xcec;
  local_e = FUN_21f2_34ae(0x22b2,0xbf48,0x614c,0x140,0x144,0x146,0x166,0xc34,0xa68,0xb26,&local_c,
                          &local_10,0x6124,0x52,0x56,0x5a,0x5e,0x68,0x6a,0x6c,0x6e,0x70,0x72,0x115a,
                          0x115e,0x1162,0x1166,0x116c,0xc1c,0x1124,0x112a,0x112c,100,0xce8,0xcea);
  if (local_e < 4) {
    *(undefined2 *)0x140 = 1000;
    *(undefined2 *)0x142 = 0;
    *(undefined2 *)0x144 = 500;
    *(undefined2 *)0x146 = 400;
    *(undefined2 *)0x166 = 0x7fff;
  }
  if (*(char *)0x124 == '\0') {
    if (*(int *)0xc1c < 0) {
      *(int *)0xc1c = -*(int *)0xc1c;
    }
  }
  else {
    uVar4 = (int)*(uint *)0xc1c >> 0xf;
    iVar2 = (*(uint *)0xc1c ^ uVar4) - uVar4;
    if ((0x3c < iVar2) && (iVar2 < 2000)) {
      *(undefined2 *)0xc1c = 0x3c;
    }
  }
  *(undefined2 *)0x166 = 2000;
  if (local_e < 5) {
    uVar5 = *(undefined2 *)0xa546;
    *(undefined2 *)0xc34 = *(undefined2 *)0xa544;
    *(undefined2 *)0xc36 = uVar5;
  }
  if (local_e < 7) {
    *(undefined2 *)0xa68 = 3;
    uVar5 = *(undefined2 *)0xa532;
    *(undefined2 *)0xb26 = *(undefined2 *)0xa530;
    *(undefined2 *)0xb28 = uVar5;
  }
  if ((((*(int *)0xa68 < 0) || (*(int *)0xa68 == 5)) || (*(int *)0xa68 == 6)) ||
     ((*(int *)0xa68 == 7 || (0xe < *(int *)0xa68)))) {
    *(undefined2 *)0xa68 = 3;
  }
  local_10 = (undefined2 **)0xb26;
  local_12 = (undefined2 **)0x22b2;
  local_14 = (undefined1 **)0xe40a;
  func_0x000088e3();
  if (local_e < 10) {
    *(undefined1 *)0x6124 = 0;
  }
  if (local_e < 0xe) {
    uVar5 = *(undefined2 *)0xa4f0;
    uVar1 = *(undefined2 *)0xa4f2;
    *(undefined2 *)0x56 = uVar5;
    *(undefined2 *)0x58 = uVar1;
    *(undefined2 *)0x52 = uVar5;
    *(undefined2 *)0x54 = uVar1;
    *(undefined2 *)0x5a = uVar5;
    *(undefined2 *)0x5c = uVar1;
    uVar5 = *(undefined2 *)0xa4f6;
    *(undefined2 *)0x5e = *(undefined2 *)0xa4f4;
    *(undefined2 *)0x60 = uVar5;
  }
  if (local_e < 0x19) {
    *(undefined2 *)0x6e = 1;
    *(undefined2 *)0x70 = 2;
    *(undefined2 *)0x72 = 3;
    uVar5 = *(undefined2 *)0xa4f0;
    uVar1 = *(undefined2 *)0xa4f2;
    *(undefined2 *)0x115a = uVar5;
    *(undefined2 *)0x115c = uVar1;
    *(undefined2 *)0x115e = uVar5;
    *(undefined2 *)0x1160 = uVar1;
    uVar5 = *(undefined2 *)0xa4f8;
    uVar1 = *(undefined2 *)0xa4fa;
    *(undefined2 *)0x1162 = uVar5;
    *(undefined2 *)0x1164 = uVar1;
    *(undefined2 *)0x1166 = uVar5;
    *(undefined2 *)0x1168 = uVar1;
    *(undefined2 *)0x68 = 0;
    *(undefined2 *)0x6a = 0;
    *(undefined2 *)0x6c = 0;
    *(undefined2 *)0x116c = 0;
  }
  if (local_e < 0x1a) {
    *(undefined2 *)0xc1c = 1000;
  }
  if (local_e < 0x1d) {
    *(undefined2 *)0x1124 = 1;
    *(undefined2 *)0x112a = 1;
    *(undefined2 *)0x112c = 0;
  }
  if (local_e < 0x1e) {
    *(undefined2 *)0x64 = 0;
  }
  if (local_e < 0x23) {
    *(undefined2 *)0xce8 = 1;
    *(undefined2 *)0xcea = 7;
    *(undefined2 *)0xcf0 = 3;
    *(undefined2 *)0xcec = 0;
    *(undefined2 *)0xcee = 0;
    *(undefined2 *)0xcf2 = 0;
  }
  local_6 = 0;
  local_16 = (int *)0x885;
  do {
    iVar2 = local_6 * 4;
    *(undefined2 *)(iVar2 + -0x4de6) = 0;
    *(undefined2 *)(iVar2 + -0x4de8) = 0;
    local_10 = (undefined2 **)(iVar2 + -0x4de8);
    local_12 = (undefined2 **)0x64cf;
    local_14 = (undefined1 **)*(undefined2 *)0xd70;
    local_18 = -0x1af2;
    FUN_21f2_1396();
    local_6 = local_6 + 1;
    local_16 = (int *)0x22b2;
  } while (local_6 < 0x28);
  local_10 = (undefined2 **)*(undefined2 *)0xd70;
  local_12 = (undefined2 **)0x64;
  local_14 = (undefined1 **)0xbf48;
  local_16 = (int *)0x22b2;
  local_18 = -0x1ad5;
  func_0x0002509c();
  *(undefined1 *)0xbf48 = 0;
  local_10 = (undefined2 **)*(undefined2 *)0xd70;
  local_12 = (undefined2 **)0x64;
  local_14 = (undefined1 **)0xbf48;
  local_16 = (int *)0x22b2;
  local_18 = -0x1abc;
  iVar2 = func_0x0002509c();
  if (iVar2 != 0) {
    local_a = (undefined1 *)0x0;
    local_8 = 0;
    local_10 = (undefined2 **)0x1070;
    local_12 = (undefined2 **)0x106c;
    local_14 = &local_a;
    local_16 = &local_8;
    local_18 = 0x11e4;
    local_1a = 0x11e0;
    local_e = FUN_21f2_34ae(0x22b2,0xbf48,0x61c0,&local_14,0x7a,0x105a,0x1170,0x1172,0x112e,0x1128,
                            0x1126,0x11d8,0x11dc);
    if (*(int *)0x78 == 0 && *(int *)0x76 == 0) {
      *(int *)0x76 = (int)local_14;
      *(undefined2 *)0x78 = local_12;
    }
    if (local_e < 3) {
      uVar5 = *(undefined2 *)0xa4fa;
      *(undefined2 *)0x105a = *(undefined2 *)0xa4f8;
      *(undefined2 *)0x105c = uVar5;
    }
    if (local_e < 0xc) {
      *(undefined2 *)0x1172 = 3;
      *(undefined2 *)0x1128 = 1;
      uVar5 = *(undefined2 *)0xa54a;
      *(undefined2 *)0x11d8 = *(undefined2 *)0xa548;
      *(undefined2 *)0x11da = uVar5;
      uVar5 = *(undefined2 *)0xa54e;
      *(undefined2 *)0x11dc = *(undefined2 *)0xa54c;
      *(undefined2 *)0x11de = uVar5;
      uVar5 = *(undefined2 *)0xa4fa;
      *(undefined2 *)0x11e0 = *(undefined2 *)0xa4f8;
      *(undefined2 *)0x11e2 = uVar5;
      *(undefined2 *)0x1170 = 0;
      *(undefined2 *)0x112e = 0;
      *(undefined2 *)0x1126 = 0;
      *(undefined2 *)0x11e4 = 0;
    }
    if (local_e < 0x10) {
      local_8 = 0;
      local_a = (undefined1 *)0x4;
      uVar5 = *(undefined2 *)0xa52c;
      uVar1 = *(undefined2 *)0xa52e;
      *(undefined2 *)0x106c = uVar5;
      *(undefined2 *)0x106e = uVar1;
      *(undefined2 *)0x1070 = uVar5;
      *(undefined2 *)0x1072 = uVar1;
    }
    if ((local_8 == 0) || (local_8 == 1)) {
      *(undefined1 *)0x13a = (undefined1)local_8;
    }
    if (((local_a == (undefined1 *)0x1) || (local_a == (undefined1 *)0x2)) ||
       (local_a == (undefined1 *)0x4)) {
      *(undefined1 *)0xd78 = local_a._0_1_;
    }
  }
  local_10 = (undefined2 **)*(undefined2 *)0xd70;
  local_12 = (undefined2 **)0xe;
  local_14 = (undefined1 **)0xbf48;
  local_16 = (int *)0x22b2;
  local_18 = -0x1983;
  iVar2 = func_0x0002509c();
  if (iVar2 != 0) {
    local_10 = (undefined2 **)0xbf48;
    local_12 = (undefined2 **)0x22b2;
    local_14 = (undefined1 **)0xe68d;
    iVar2 = func_0x00024ce4();
    *(undefined1 *)(iVar2 + -0x40b9) = 0;
    *(undefined1 *)0xbf54 = 0;
    local_10 = (undefined2 **)0xbf48;
    local_12 = (undefined2 **)0xb2fe;
    local_14 = (undefined1 **)0x22b2;
    local_16 = (int *)0xe6a7;
    func_0x00024c86();
  }
  local_10 = (undefined2 **)*(undefined2 *)0xd70;
  local_12 = (undefined2 **)0x2a;
  local_14 = (undefined1 **)0x90;
  local_16 = (int *)0x22b2;
  local_18 = -0x1946;
  iVar2 = func_0x0002509c();
  if (iVar2 != 0) {
    local_10 = (undefined2 **)0x90;
    local_12 = (undefined2 **)0x22b2;
    local_14 = (undefined1 **)0xe6ca;
    iVar2 = func_0x00024ce4();
    *(undefined1 *)(iVar2 + 0x8f) = 0;
  }
  local_10 = (undefined2 **)*(undefined2 *)0xd70;
  local_12 = (undefined2 **)0x64;
  local_14 = (undefined1 **)0xbf48;
  local_16 = (int *)0x22b2;
  local_18 = -0x191d;
  iVar2 = func_0x0002509c();
  if (iVar2 != 0) {
    local_10 = &local_14;
    local_12 = (undefined2 **)0x1ea;
    local_14 = (undefined1 **)0xbf48;
    local_16 = (int *)0x22b2;
    local_18 = -0x1900;
    local_e = FUN_21f2_34ae();
    if (((*(char *)0xd16 == '\0') && (0 < (int)local_14)) && ((int)local_14 < 0x1b)) {
      *(undefined1 *)0xd16 = local_14._0_1_;
    }
  }
  local_6 = 0;
  do {
    uVar5 = *(undefined2 *)0xb28;
    *(undefined2 *)(local_6 * 4 + 0xb2a) = *(undefined2 *)0xb26;
    *(undefined2 *)(local_6 * 4 + 0xb2c) = uVar5;
    local_6 = local_6 + 1;
  } while (local_6 < 0x10);
  local_6 = 0xe;
  do {
    local_10 = (undefined2 **)*(undefined2 *)0xd70;
    local_12 = (undefined2 **)0x64;
    local_14 = (undefined1 **)0xbf48;
    local_16 = (int *)0x22b2;
    local_18 = -0x18a7;
    func_0x0002509c();
    local_6 = local_6 + 1;
  } while (local_6 < 0x13);
  local_10 = (undefined2 **)*(undefined2 *)0xd70;
  local_12 = (undefined2 **)0x64;
  local_14 = (undefined1 **)0xbf48;
  local_16 = (int *)0x22b2;
  local_18 = -0x188a;
  iVar2 = func_0x0002509c();
  if (iVar2 != 0) {
    local_10 = (undefined2 **)0xbf48;
    local_12 = (undefined2 **)0x22b2;
    local_14 = (undefined1 **)0xe786;
    iVar2 = func_0x00024ce4();
    *(undefined1 *)(iVar2 + -0x40b9) = 0;
    if (*(char *)0xbf48 != '\0') {
      local_e = 0x2e;
      local_10 = (undefined2 **)0xbf48;
      local_12 = (undefined2 **)0x22b2;
      local_14 = (undefined1 **)0xe7a2;
      iVar2 = FUN_21f2_3be6();
      if (iVar2 != 0) {
        local_10 = (undefined2 **)0xbf48;
        local_12 = (undefined2 **)0x22b2;
        local_14 = (undefined1 **)0xe7b1;
        uVar4 = func_0x00024ce4();
        if (uVar4 < 0xd) {
          local_10 = (undefined2 **)0xbf48;
          local_12 = (undefined2 **)0xb76e;
          local_14 = (undefined1 **)0x22b2;
          local_16 = (int *)0xe7c4;
          FUN_21f2_3454();
        }
      }
    }
  }
  local_10 = (undefined2 **)*(undefined2 *)0xd70;
  local_12 = (undefined2 **)0x64;
  local_14 = (undefined1 **)0xbf48;
  local_16 = (int *)0x22b2;
  local_18 = -0x1829;
  iVar2 = func_0x0002509c();
  if (iVar2 != 0) {
    local_10 = &local_14;
    local_12 = (undefined2 **)0x1ea;
    local_14 = (undefined1 **)0xbf48;
    local_16 = (int *)0x22b2;
    local_18 = -0x180c;
    local_e = FUN_21f2_34ae();
    if (((-1 < (int)local_14) && ((int)local_14 < 0x10)) ||
       (((99 < (int)local_14 && ((int)local_14 < 0x74)) ||
        ((199 < (int)local_14 && ((int)local_14 < 0xd8)))))) {
      *(undefined1 *)0x135 = local_14._0_1_;
    }
  }
LAB_3ab8_3cc5:
  local_10 = (undefined2 **)0x22b2;
  local_12 = (undefined2 **)0xe84a;
  func_0x0002504e();
  *(undefined2 *)0xd70 = 0;
  local_12 = (undefined2 **)local_c;
  local_14 = (undefined1 **)0x22b2;
  local_16 = (int *)0xe85a;
  FUN_3ab8_25d4();
  local_10 = (undefined2 **)0x22b2;
  local_12 = (undefined2 **)0xe861;
  func_0x0002504e();
  *(undefined2 *)0xd70 = 0;
  local_10 = (undefined2 **)0x22b2;
  local_12 = (undefined2 **)0xe86b;
  FUN_3ab8_3da6();
  *(undefined1 *)0xbf48 = 0;
  local_10 = (undefined2 **)0xbf48;
  local_12 = (undefined2 **)0x1d;
  local_14 = (undefined1 **)0x22b2;
  local_16 = (int *)0xe87d;
  iVar2 = FUN_10ad_1568();
  if (iVar2 != 0) {
    *(undefined1 *)0xbf48 = 0;
    local_10 = (undefined2 **)0xbf48;
    local_12 = (undefined2 **)0x1d;
    local_14 = (undefined1 **)0x11f2;
    local_16 = (int *)0xe895;
    FUN_10ad_161c();
  }
  *(undefined1 *)0xbf48 = 0;
  local_10 = (undefined2 **)0xbf48;
  local_12 = (undefined2 **)0x23;
  local_14 = (undefined1 **)0x11f2;
  ppuVar6 = (undefined2 **)0x11f2;
  local_16 = (int *)0xe8a9;
  iVar2 = FUN_10ad_1568();
  if (iVar2 != 0) {
    local_10 = &local_16;
    local_12 = &local_14;
    local_14 = (undefined1 **)&local_1a;
    local_16 = &local_18;
    local_18 = 0x64d3;
    local_1a = -0x40b8;
    ppuVar6 = (undefined2 **)0x22b2;
    FUN_21f2_34ae(0x11f2);
    if ((-1 < local_18) && (local_18 < 0x1a)) {
      *(undefined1 *)0x11ec = (undefined1)local_18;
    }
    if ((-1 < local_1a) && (local_1a < 0x1a)) {
      *(undefined1 *)0x11ed = (undefined1)local_1a;
    }
    if ((-1 < (int)local_14) && ((int)local_14 < 0x1a)) {
      *(undefined1 *)0x11ee = local_14._0_1_;
    }
    if ((-1 < (int)local_16) && ((int)local_16 < 0x1a)) {
      *(undefined1 *)0x11ef = local_16._0_1_;
    }
  }
  local_12 = (undefined2 **)0xe91c;
  local_10 = ppuVar6;
  func_0x0000c340();
  local_10 = (undefined2 **)0x885;
  local_12 = (undefined2 **)0xe921;
  func_0x00010526();
  return;
}



/* 3ab8:3da6  FUN_3ab8_3da6  154 bytes, 1 callers */

void __cdecl16far FUN_3ab8_3da6(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_80 [44];
  int local_54;
  undefined1 local_52 [70];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x3ab8;
  puStack_6 = (undefined1 *)0xe931;
  FUN_21f2_0ebc();
  puStack_4 = (undefined1 *)0x90;
  puStack_6 = local_52;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xe93e;
  FUN_21f2_3454();
  puStack_4 = (undefined1 *)0x64df;
  puStack_6 = local_52;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xe94d;
  FUN_21f2_2d26();
  puStack_4 = (undefined1 *)0xb2fe;
  puStack_6 = local_52;
  puStack_8 = (undefined1 *)0x22b2;
  uStack_a = 0xe95c;
  FUN_21f2_2d26();
  puStack_4 = local_80;
  puStack_6 = (undefined1 *)0x0;
  puStack_8 = local_52;
  uStack_a = 0x22b2;
  uStack_c = 0xe96e;
  iVar1 = func_0x000276d7();
  if (iVar1 != 0) {
    puStack_4 = (undefined1 *)0x180;
    puStack_6 = local_52;
    puStack_8 = (undefined1 *)0x22b2;
    uStack_a = 0xe982;
    local_54 = FUN_21f2_34ec();
    if (local_54 == -1) {
      puStack_4 = (undefined1 *)0xc13f;
      puStack_6 = (undefined1 *)0x90;
      puStack_8 = (undefined1 *)0x22b2;
      uStack_a = 0xe997;
      func_0x00024c86();
      puStack_4 = (undefined1 *)0x86;
      puStack_6 = (undefined1 *)0xb2fe;
      puStack_8 = (undefined1 *)0x22b2;
      uStack_a = 0xe9a6;
      func_0x00024c86();
    }
    puStack_4 = (undefined1 *)local_54;
    puStack_6 = (undefined1 *)0x22b2;
    puStack_8 = (undefined1 *)0xe9b0;
    FUN_21f2_26c2();
    puStack_4 = (undefined1 *)0x22b2;
    puStack_6 = (undefined1 *)0xe9b6;
    func_0x0002504e();
    *(undefined2 *)0xd70 = 0;
  }
  return;
}



/* 3ab8:3e40  FUN_3ab8_3e40  740 bytes, 0 callers */

/* WARNING: Removing unreachable block (ram,0x0003eb7d) */

void __cdecl16far FUN_3ab8_3e40(void)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 unaff_DS;
  long lVar9;
  undefined4 uVar10;
  uint local_10;
  int local_e;
  int local_c;
  undefined2 uStack_a;
  uint uStack_8;
  uint *puStack_6;
  
  puStack_6 = (uint *)0xe9cb;
  FUN_21f2_0ebc();
  *(undefined2 *)0xc28a = 0;
  *(undefined2 *)0xc288 = 0;
  puStack_6 = &local_10;
  local_e = 0xffff;
  uStack_8 = 0xffff;
  uStack_a = 0x22b2;
  local_c = 0xe9e4;
  func_0x000276a6();
  *(uint *)0xc288 = local_10;
  *(undefined2 *)0xc28a = 0;
  *(uint *)0xc11a = local_10;
  puStack_6 = &local_10;
  uStack_8 = local_10;
  uStack_a = 0x22b2;
  local_c = 0xe9ff;
  iVar3 = func_0x000276a6();
  if (iVar3 != 0) {
    puStack_6 = (uint *)0x6b0;
    uStack_8 = 0x1e6;
    uStack_a = 0x22b2;
    local_c = 0xea12;
    func_0x00012276();
    puStack_6 = (uint *)0x1;
    uStack_8 = 0x11f2;
    uStack_a = 0xea1d;
    FUN_21f2_0dd1();
  }
  *(uint *)0xc138 = local_10;
  puStack_6 = (uint *)CONCAT11((char)(local_10 >> 8),4);
  uStack_8 = 0xc288;
  uStack_a = 0x22b2;
  local_c = 0xea30;
  func_0x00027a7c();
  puVar1 = (uint *)0xc288;
  uVar4 = *puVar1;
  *puVar1 = *puVar1 - 0x9c8;
  *(int *)0xc28a = *(int *)0xc28a - (uint)(uVar4 < 0x9c8);
  if ((*(int *)0xc28a < 1) && ((*(int *)0xc28a < 0 || (*(int *)0xc288 == 0)))) {
    uStack_a = 0x6b0;
    local_c = 0x1e6;
    local_e = 0x22b2;
    local_10 = 0xea58;
    func_0x00012276();
    uStack_a = 1;
    local_c = 0x11f2;
    local_e = 0xea63;
    FUN_21f2_0dd1();
  }
  do {
    uVar4 = (uint)((long)*(int *)0x146 * 0xc);
    uVar5 = *(uint *)0xc288 - uVar4;
    uVar6 = uVar5 - *(uint *)0x166;
    uVar7 = uVar6 - 0xd;
    iVar3 = (((*(int *)0xc28a - (int)((ulong)((long)*(int *)0x146 * 0xc) >> 0x10)) -
             (uint)(*(uint *)0xc288 < uVar4)) - (uint)(uVar5 < *(uint *)0x166)) -
            (uint)(uVar6 < 0xd);
    if (*(int *)0xbed2 == 0) {
      uStack_a = 0;
      local_c = 0x16;
      local_e = 0x22b2;
      local_10 = 0xeb23;
      lVar9 = func_0x00027a04();
      lVar9 = (long)*(int *)0x144 * -0x18 - lVar9;
      uVar4 = (uint)lVar9;
      uVar5 = uVar4 - 0x38;
      local_10 = uVar7 + uVar5;
      local_e = iVar3 + ((int)((ulong)lVar9 >> 0x10) - (uint)(uVar4 < 0x38)) +
                (uint)CARRY2(uVar7,uVar5);
      uVar10 = FUN_21f2_5978(0x22b2);
      iVar3 = (int)uVar10 + -1;
      iVar8 = (int)((ulong)uVar10 >> 0x10) - (uint)((int)uVar10 == 0);
      *(int *)0x13c = iVar3;
      *(int *)0x13e = iVar8;
      uVar10 = FUN_21f2_5978(0x22b2,iVar3,iVar8,100,0,100,0);
      lVar9 = func_0x00027932(0x22b2,uVar10);
      *(undefined2 *)0x13c = (int)lVar9;
      *(undefined2 *)0x13e = (int)((ulong)lVar9 >> 0x10);
      if (0 < lVar9) {
LAB_3ab8_3f34:
        if ((*(byte *)0x166 & 1) == 0) {
          *(int *)0x166 = *(int *)0x166 + -1;
        }
        *(undefined2 *)0xb490 = 0;
        *(uint *)0xb492 = local_10;
        *(undefined2 *)0xc284 = 0;
        *(int *)0xc286 = local_10 + 0x80;
        iVar3 = local_10 + 0x90;
        *(undefined2 *)0xbefa = 0;
        *(int *)0xbefc = iVar3;
        *(undefined2 *)0xc0ac = 0;
        *(int *)0xc0ae = iVar3;
        *(int *)0xbc7e = *(int *)0x166 + 1;
        *(int *)0xbc80 = iVar3;
        uStack_a = 0;
        local_c = 0x16;
        if (*(int *)0xbed2 == 0) {
          uVar4 = *(uint *)0x13c;
          local_e = *(int *)0x13e;
        }
        else {
          uVar4 = 0;
          local_e = 0;
        }
        local_10 = uVar4 + 1;
        local_e = local_e + (uint)(0xfffe < uVar4);
        uVar10 = func_0x00027932(0x22b2);
        uVar4 = *(uint *)0xbc7e;
        iVar3 = *(int *)0xbc80;
        *(int *)0xb788 = (uint)uVar10 + *(uint *)0xbc7e;
        *(int *)0xb78a =
             ((int)((ulong)uVar10 >> 0x10) + (uint)CARRY2((uint)uVar10,uVar4)) * 0x1000 + iVar3;
        uVar10 = func_0x00027a04(0x22b2);
        uVar4 = (uint)uVar10 + *(uint *)0xb788;
        iVar3 = ((int)((ulong)uVar10 >> 0x10) + (uint)CARRY2((uint)uVar10,*(uint *)0xb788)) * 0x1000
                + *(int *)0xb78a;
        *(uint *)0xbe82 = uVar4;
        *(int *)0xbe84 = iVar3;
        lVar9 = (long)*(int *)0x146 * 0xc + (ulong)uVar4;
        uVar4 = (uint)lVar9;
        *(int *)0xbe9a = uVar4 + 0xc;
        *(int *)0xbe9c =
             (int)((ulong)lVar9 >> 0x10) * 0x1000 + iVar3 + (-(uint)(0xfff3 < uVar4) & 0x1000);
        local_c = 0;
        uVar2 = *(undefined2 *)0xb492;
        do {
          *(undefined1 *)(local_c * 8 + *(int *)0xb490) = 0;
          local_c = local_c + 1;
        } while (local_c < 0x100);
        local_c = 0;
        uVar2 = *(undefined2 *)0xc286;
        do {
          *(undefined1 *)(local_c * 0x10 + *(int *)0xc284) = 0;
          local_c = local_c + 1;
        } while (local_c < 0x10);
        return;
      }
      if ((*(int *)0x142 < 0) || ((*(int *)0x142 < 1 && (*(uint *)0x140 < 0x33)))) {
        if (0x32 < *(int *)0x144) {
          *(int *)0x144 = *(int *)0x144 + -0x32;
        }
      }
      else {
        puVar1 = (uint *)0x140;
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 0x32;
        *(int *)0x142 = *(int *)0x142 - (uint)(uVar4 < 0x32);
      }
    }
    else {
      uStack_a = 0;
      local_c = 0x18;
      local_10 = uVar7;
      local_e = iVar3;
      iVar3 = FUN_21f2_5978(0x22b2);
      *(int *)0x144 = iVar3 + -1;
      iVar3 = ((iVar3 + -1) / 100) * 100;
      *(int *)0x144 = iVar3;
      if (0 < iVar3) goto LAB_3ab8_3f34;
    }
    if (*(int *)0x146 < 0x33) {
      if (500 < *(uint *)0x166) {
        *(int *)0x166 = *(int *)0x166 + -500;
      }
    }
    else {
      *(int *)0x146 = *(int *)0x146 + -0x32;
    }
  } while( true );
}



/* 3ab8:4124  FUN_3ab8_4124  89 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_4124(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if ((param_1 == *(int *)0xbe94) && (param_2 == *(int *)0xbe96)) {
    uVar1 = 0;
  }
  else {
    *(byte *)0xbe98 = *(byte *)0xbe98 | 6;
    *(int *)0xbe94 = param_1;
    *(int *)0xbe96 = param_2;
    uVar1 = FUN_3ab8_43b1(*(int *)0xc0ac - *(int *)0xbefa,*(undefined2 *)0x148,*(undefined2 *)0x14a,
                          *(undefined2 *)0x14c,*(undefined2 *)0x14e,*(undefined2 *)0x152,
                          *(undefined2 *)0x150);
  }
  return uVar1;
}



/* 3ab8:417d  FUN_3ab8_417d  42 bytes, 2 callers */

void __cdecl16far FUN_3ab8_417d(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  FUN_21f2_3454(0x22b2,param_1,0x100);
  *(undefined1 *)(param_1 + 10) = 0x24;
  *(undefined1 *)(param_1 + 9) = 0x24;
  *(undefined1 *)(param_1 + 8) = 0x24;
  return;
}



/* 3ab8:41a7  FUN_3ab8_41a7  268 bytes, 1 callers */

void __cdecl16far FUN_3ab8_41a7(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_16;
  int iStack_14;
  int iStack_12;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 *puStack_8;
  undefined2 *puStack_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  puStack_6 = (undefined2 *)0xed32;
  FUN_21f2_0ebc();
  puStack_4 = &local_16;
  puStack_6 = (undefined2 *)0x22b2;
  puStack_8 = (undefined2 *)0xed3a;
  FUN_3ab8_417d();
  puStack_4 = (undefined2 *)0x180;
  puStack_6 = &local_16;
  puStack_8 = (undefined2 *)0x22b2;
  uVar2 = 0x22b2;
  uStack_a = 0xed48;
  iVar1 = FUN_21f2_34ec();
  if (iVar1 == -1) {
    puStack_4 = &local_16;
    puStack_6 = (undefined2 *)0x22b2;
    uVar2 = 0x11f2;
    puStack_8 = (undefined2 *)0xed59;
    FUN_13bf_0a03();
  }
  puStack_8 = (undefined2 *)0xed62;
  puStack_6 = (undefined2 *)uVar2;
  puStack_4 = (undefined2 *)iVar1;
  FUN_21f2_26c2();
  puStack_4 = (undefined2 *)0xd12;
  puStack_6 = (undefined2 *)0x2;
  puStack_8 = &local_16;
  uStack_a = 0x22b2;
  uVar2 = 0x22b2;
  uStack_c = 0xed74;
  iVar1 = FUN_21f2_5804();
  if (iVar1 != 0) {
    puStack_4 = &local_16;
    puStack_6 = (undefined2 *)0x22b2;
    uVar2 = 0x11f2;
    puStack_8 = (undefined2 *)0xed84;
    FUN_13bf_0a03();
  }
  puStack_4 = (undefined2 *)0x0;
  puStack_6 = (undefined2 *)0x16;
  puStack_8 = (undefined2 *)*(undefined2 *)0x14a;
  uStack_a = *(undefined2 *)0x148;
  uStack_10._2_2_ = 0xed98;
  uStack_c = uVar2;
  uStack_10 = func_0x00027932();
  if (*(int *)0xbed2 == 0) {
    iStack_14 = *(uint *)0xbc7e + 0x16;
    iStack_12 = *(int *)0xbc80 + (-(uint)(0xffe9 < *(uint *)0xbc7e) & 0x1000);
  }
  else {
    iStack_14 = 0x16;
    iStack_12 = 0;
  }
  uStack_c = *(undefined2 *)0xbed2;
  local_16 = 0x22b2;
  func_0x00012835();
  uStack_c = 0x11f2;
  uStack_10._2_2_ = 0xede5;
  uStack_10 = func_0x00027a04();
  uStack_c = *(undefined2 *)0xc718;
  if (*(int *)0xbed2 == 0) {
    iStack_14 = *(uint *)0xb788 + 0x20;
    iStack_12 = *(int *)0xb78a + (-(uint)(0xffdf < *(uint *)0xb788) & 0x1000);
  }
  else {
    iStack_14 = 0x20;
    iStack_12 = 0;
  }
  local_16 = 0x22b2;
  func_0x00012835();
  uStack_c = *(undefined2 *)0xd12;
  uStack_10._2_2_ = 0x11f2;
  uStack_10._0_2_ = 0xee29;
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  return;
}



/* 3ab8:42b3  FUN_3ab8_42b3  254 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_42b3(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_16;
  int iStack_14;
  int iStack_12;
  undefined4 uStack_10;
  undefined2 *puStack_c;
  undefined2 uStack_a;
  undefined2 *puStack_8;
  undefined2 uStack_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x3ab8;
  uStack_6 = 0xee3e;
  FUN_21f2_0ebc();
  puStack_4 = &local_16;
  uStack_6 = 0x22b2;
  puStack_8 = (undefined2 *)0xee46;
  FUN_3ab8_417d();
  puStack_4 = (undefined2 *)0xd12;
  uStack_6 = 0;
  puStack_8 = &local_16;
  uStack_a = 0x22b2;
  uVar2 = 0x22b2;
  puStack_c = (undefined2 *)0xee57;
  iVar1 = FUN_21f2_5804();
  if (iVar1 != 0) {
    puStack_4 = &local_16;
    uStack_6 = 0x22b2;
    uVar2 = 0x11f2;
    puStack_8 = (undefined2 *)0xee67;
    FUN_13bf_0a03();
  }
  puStack_4 = (undefined2 *)0x0;
  uStack_6 = 0x16;
  puStack_8 = (undefined2 *)*(undefined2 *)0x14a;
  uStack_a = *(undefined2 *)0x148;
  uStack_10._2_2_ = 0xee7b;
  puStack_c = (undefined2 *)uVar2;
  uStack_10 = func_0x00027932();
  if (*(int *)0xbed2 == 0) {
    iStack_14 = *(uint *)0xbc7e + 0x16;
    iStack_12 = *(int *)0xbc80 + (-(uint)(0xffe9 < *(uint *)0xbc7e) & 0x1000);
  }
  else {
    iStack_14 = 0x16;
    iStack_12 = 0;
  }
  puStack_c = (undefined2 *)*(undefined2 *)0xbed2;
  local_16 = 0x22b2;
  func_0x000129e6();
  puStack_c = (undefined2 *)0x11f2;
  uStack_10._2_2_ = 0xeec8;
  uStack_10 = func_0x00027a04();
  puStack_c = (undefined2 *)*(undefined2 *)0xc718;
  if (*(int *)0xbed2 == 0) {
    iStack_14 = *(uint *)0xb788 + 0x20;
    iStack_12 = *(int *)0xb78a + (-(uint)(0xffdf < *(uint *)0xb788) & 0x1000);
  }
  else {
    iStack_14 = 0x20;
    iStack_12 = 0;
  }
  local_16 = 0x22b2;
  func_0x000129e6();
  puStack_c = (undefined2 *)*(undefined2 *)0xd12;
  uStack_10._2_2_ = 0x11f2;
  uStack_10._0_2_ = 0xef0c;
  func_0x000276be();
  *(undefined2 *)0xd12 = 0;
  puStack_c = &local_16;
  uStack_10._2_2_ = 0x22b2;
  uStack_10._0_2_ = 0xef1c;
  iVar1 = FUN_21f2_5778();
  if (iVar1 != 0) {
    puStack_c = &local_16;
    uStack_10._2_2_ = 0x22b2;
    uStack_10._0_2_ = 0xef2a;
    FUN_13bf_0a03();
  }
  return 0;
}



/* 3ab8:43b1  FUN_3ab8_43b1  1196 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003f038) */

undefined2 __cdecl16far
FUN_3ab8_43b1(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
             int param_7)

{
  undefined2 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 unaff_DS;
  long lVar14;
  undefined4 uVar15;
  long lVar16;
  undefined2 uVar17;
  int iVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  char cVar23;
  undefined2 uVar24;
  undefined2 local_e;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  
  lVar4 = CONCAT22(param_5,param_4);
  lVar3 = CONCAT22(param_3,param_2);
  FUN_21f2_0ebc();
  if (param_1 < 0x8000) {
    if ((*(byte *)0xbe98 & 2) == 0) {
      *(undefined2 *)0xbe96 = 0;
      *(undefined2 *)0xbe94 = 0;
    }
    iVar5 = (-(uint)(*(int *)0xbed2 == 0) & 0x16) + (-(uint)(*(int *)0xbed2 == 0) & 0x20) + 0x25;
    uVar27 = 0;
    lVar14 = func_0x00027a04(0x22b2,iVar5,0);
    uVar25 = 0;
    local_e = 0xc;
    uVar15 = func_0x00027932(0x22b2,param_6 + param_7 * 2,
                             ((int)param_6 >> 0xf) + ((param_7 >> 0xf) << 1 | (uint)(param_7 < 0)) +
                             (uint)CARRY2(param_6,param_7 * 2));
    uVar13 = (undefined2)((ulong)uVar15 >> 0x10);
    lVar16 = func_0x00027932(0x22b2,iVar5,uVar27);
    lVar14 = (lVar16 - CONCAT22(uVar13,(int)uVar15)) - lVar14;
    uVar6 = (uint)lVar14;
    uVar8 = uVar6 - param_1;
    uVar9 = uVar8 - *(uint *)0xbe94;
    uVar10 = uVar9 + *(uint *)0xc288;
    iVar12 = ((((((int)((ulong)lVar14 >> 0x10) - ((int)param_1 >> 0xf)) - (uint)(uVar6 < param_1)) -
               *(int *)0xbe96) - (uint)(uVar8 < *(uint *)0xbe94)) + *(int *)0xc28a +
             (uint)CARRY2(uVar9,*(uint *)0xc288)) - (uint)(uVar10 < 0x5b);
    uVar13 = 0x22b2;
    lVar14 = FUN_21f2_5978(0x22b2,uVar10 - 0x5b);
    iVar18 = (int)lVar14;
    if (9 < lVar14) {
      if (((*(int *)0xbed2 == 0) && (param_3 <= *(int *)0x14a)) &&
         ((param_3 < *(int *)0x14a || (param_2 < *(uint *)0x148)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        if (*(int *)0xbed2 == 0) {
          if ((*(int *)0x14e < param_5) ||
             ((*(int *)0x14e <= param_5 && (*(uint *)0x14c <= param_4)))) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        if ((((!bVar2) && (*(int *)0x152 <= (int)param_6)) && (*(int *)0x150 <= param_7)) &&
           (*(int *)0xc0ac - *(int *)0xbefa <= (int)param_1)) {
          if (*(int *)0xbed2 == 0) {
            lVar3 = lVar14 + lVar3;
            lVar4 = lVar14 + lVar4;
          }
          param_5 = (int)((ulong)lVar4 >> 0x10);
          param_4 = (uint)lVar4;
          param_3 = (int)((ulong)lVar3 >> 0x10);
          param_2 = (uint)lVar3;
          param_1 = param_1 + iVar18;
          if (*(char *)0xd74 == '\0') {
            FUN_1000_0599(0x22b2,0x11,2);
            func_0x00010526(0xdef);
            *(undefined2 *)0xc22 = 2;
            uVar13 = 0xdef;
            FUN_1000_02b5(0x6c6,0x14,2,7,0);
          }
          if ((param_1 & 1) == 0) {
            param_1 = param_1 - 1;
          }
          if ((param_1 & 0x8000) != 0) {
            param_1 = 0x7fff;
          }
          FUN_3ab8_485d();
          FUN_3ab8_4c20(param_1,lVar3,lVar4,param_6 + iVar18,param_7 + iVar18);
          uVar27 = uVar13;
          if ((*(byte *)0xbe98 & 4) != 0) {
            uVar6 = *(uint *)0x144;
            uVar27 = 0x22b2;
            uVar15 = func_0x00027932(uVar13,uVar6 + 1,((int)uVar6 >> 0xf) + (uint)(0xfffe < uVar6),
                                     0x18,0);
            uVar6 = *(uint *)0xbe9a;
            uVar8 = (uint)uVar15 + *(uint *)0xbe9a;
            iVar18 = *(int *)0xbe9c;
            *(uint *)0xbe90 = uVar8 & 0xf;
            *(int *)0xbe92 =
                 (uVar8 >> 4) +
                 ((int)((ulong)uVar15 >> 0x10) + (uint)CARRY2((uint)uVar15,uVar6)) * 0x1000 + iVar18
            ;
            *(byte *)0xbe98 = *(byte *)0xbe98 & 0xfb;
          }
          if ((*(int *)0xbed2 != 0) &&
             (((*(int *)0x13e < param_3 ||
               ((*(int *)0x13e <= param_3 && (*(uint *)0x13c <= param_2)))) ||
              ((*(int *)0x142 <= param_5 &&
               ((*(int *)0x142 < param_5 || (*(uint *)0x140 <= param_4)))))))) {
            if ((*(int *)0x14a == 0 && *(int *)0x148 == 0) &&
               ((((*(int *)0x14e == 0 && *(int *)0x14c == 0 && (*(int *)0x150 == 0)) &&
                 (*(int *)0x152 == 0)) &&
                ((*(int *)0xbefa == *(int *)0xc0ac && (*(int *)0xbefc == *(int *)0xc0ae)))))) {
              cVar23 = '\0';
            }
            else {
              cVar23 = '\x01';
            }
            uVar15 = func_0x00027a04(uVar27,0x4000,0);
            FUN_21f2_5978(0x22b2,uVar15);
            iVar11 = *(int *)0x50 + *(int *)0x4e;
            iVar18 = 0;
            uVar15 = func_0x00027932(0x22b2,lVar3 + 2,0x16,0,0x4000,0);
            uVar27 = 0x22b2;
            iVar7 = FUN_21f2_5978(0x22b2,uVar15);
            iVar7 = iVar7 + 1;
            iVar18 = -iVar18 - (iVar7 - iVar11);
            if (iVar18 < 2) {
              return 0xffff;
            }
            if (cVar23 != '\0') {
              iVar12 = *(int *)0x148;
              iVar5 = *(int *)0x14a;
              local_e = *(undefined2 *)0x14c;
              uVar25 = *(undefined2 *)0x14e;
              iVar7 = 0x22b2;
              FUN_3ab8_41a7();
            }
            *(undefined2 *)0xc11a = 0;
            iVar7 = iVar18 / 2 + iVar7;
            *(int *)0x4e = iVar7;
            *(int *)0x50 = -(iVar7 - iVar11);
            FUN_3ab8_102a(*(undefined2 *)0xbee0);
            FUN_3ab8_102a(*(undefined2 *)0xc726);
            FUN_3ab8_1068();
            uVar13 = *(undefined2 *)0xc60;
            uVar1 = *(undefined2 *)0xc50;
            uVar24 = *(undefined2 *)0xc52;
            uVar26 = *(undefined2 *)0xc54;
            uVar28 = *(undefined2 *)0xc56;
            uVar19 = *(undefined2 *)0xc58;
            uVar20 = *(undefined2 *)0xc5a;
            uVar17 = *(undefined2 *)0xc62;
            uVar21 = *(undefined2 *)0xc5c;
            uVar22 = *(undefined2 *)0xc5e;
            if (cVar23 != '\0') {
              *(int *)0x148 = iVar12;
              *(int *)0x14a = iVar5;
              *(undefined2 *)0x14c = local_e;
              *(undefined2 *)0x14e = uVar25;
              uVar22 = 0xf326;
              FUN_3ab8_42b3();
            }
            *(undefined2 *)0xc60 = uVar13;
            *(undefined2 *)0xc50 = uVar1;
            *(undefined2 *)0xc52 = uVar24;
            *(undefined2 *)0xc54 = uVar26;
            *(undefined2 *)0xc56 = uVar28;
            *(undefined2 *)0xc58 = uVar19;
            *(undefined2 *)0xc5a = uVar20;
            *(undefined2 *)0xc62 = uVar17;
            *(undefined2 *)0xc5c = uVar21;
            *(undefined2 *)0xc5e = uVar22;
          }
          if (*(char *)0xd74 == '\0') {
            *(undefined2 *)0xc22 = 2;
            uVar25 = 0x6c6;
            FUN_1000_02b5(0x6c6,0x14,2,7,0xffff);
            FUN_1000_0599(0xdef,0x14,3);
            func_0x00012276(0xdef,0x22e,*(undefined2 *)0x13c,*(undefined2 *)0x13e,
                            *(undefined2 *)0x140,*(undefined2 *)0x142,*(undefined2 *)0x146,
                            *(undefined2 *)0x144,uVar27,uVar25);
            func_0x00010526(0x11f2);
          }
          return 0;
        }
      }
    }
  }
  return 0xffff;
}



/* 3ab8:485d  FUN_3ab8_485d  963 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003f62d) */
/* WARNING: Removing unreachable block (ram,0x0003f44c) */
/* WARNING: Removing unreachable block (ram,0x0003f543) */
/* WARNING: Removing unreachable block (ram,0x0003f6ff) */

int __cdecl16far FUN_3ab8_485d(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  bool bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  FUN_21f2_0ebc();
  if (*(int *)0xbed2 == 0) {
    uVar2 = *(uint *)0x148;
    iVar3 = *(int *)0x14a;
  }
  else {
    uVar2 = 0;
    iVar3 = 0;
  }
  lVar5 = func_0x00027932(0x22b2,uVar2 + 1,iVar3 + (uint)(0xfffe < uVar2),0x16);
  uVar2 = 0;
  for (iVar3 = 0; CONCAT22(iVar3,uVar2) < lVar5; iVar3 = iVar3 + (uint)bVar4) {
    *(undefined1 *)(uVar2 + *(uint *)0xbc7e) = *(undefined1 *)(uVar2 + *(uint *)0xbc7e);
    bVar4 = 0xfffe < uVar2;
    uVar2 = uVar2 + 1;
  }
  *(undefined2 *)0xbc7e = *(undefined2 *)0xbc7e;
  *(undefined2 *)0xbc80 = *(undefined2 *)0xbc80;
  if (*(int *)0xbed2 == 0) {
    iVar3 = (*(int *)0x13e - *(int *)0x14a) - (uint)(*(uint *)0x13c < *(uint *)0x148);
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  lVar5 = func_0x00027932(0x22b2,0,iVar3,0x16);
  iVar8 = (int)((ulong)lVar5 >> 0x10);
  uVar7 = (uint)lVar5;
  lVar6 = func_0x00027a04(0x22b2);
  uVar2 = 0;
  for (iVar3 = 0; CONCAT22(iVar3,uVar2) < lVar6; iVar3 = iVar3 + (uint)bVar4) {
    *(undefined1 *)((uVar2 - uVar7) + *(uint *)0xb788) = *(undefined1 *)(uVar2 + *(uint *)0xb788);
    bVar4 = 0xfffe < uVar2;
    uVar2 = uVar2 + 1;
  }
  puVar1 = (uint *)0xb788;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + -uVar7;
  *(int *)0xb78a =
       *(int *)0xb78a + ((uint)CARRY2(uVar2,-uVar7) - (iVar8 + (uint)(uVar7 != 0))) * 0x1000;
  lVar6 = func_0x00027a04(0x22b2);
  lVar5 = lVar5 + lVar6;
  uVar2 = (uint)lVar5;
  iVar3 = (int)((ulong)lVar5 >> 0x10);
  uVar7 = *(uint *)0x152;
  lVar6 = func_0x00027932(0x22b2,uVar7 + 1,((int)uVar7 >> 0xf) + (uint)(0xfffe < uVar7),0xc,0);
  uVar7 = 0;
  for (iVar8 = 0; CONCAT22(iVar8,uVar7) < lVar6; iVar8 = iVar8 + (uint)bVar4) {
    *(undefined1 *)((uVar7 - uVar2) + *(uint *)0xbe82) = *(undefined1 *)(uVar7 + *(uint *)0xbe82);
    bVar4 = 0xfffe < uVar7;
    uVar7 = uVar7 + 1;
  }
  puVar1 = (uint *)0xbe82;
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + -uVar2;
  *(int *)0xbe84 =
       *(int *)0xbe84 + ((uint)CARRY2(uVar7,-uVar2) - (iVar3 + (uint)(uVar2 != 0))) * 0x1000;
  iVar3 = *(int *)0x146 - *(int *)0x152;
  iVar8 = iVar3 >> 0xf;
  if (iVar8 < 0) {
    iVar8 = 0;
    iVar3 = 0;
  }
  lVar6 = func_0x00027932(0x22b2,iVar3,iVar8,0xc,0);
  uVar2 = (uint)(lVar5 + lVar6);
  iVar3 = (int)((ulong)(lVar5 + lVar6) >> 0x10);
  uVar7 = *(uint *)0x150;
  lVar5 = func_0x00027932(0x22b2,uVar7 + 1,((int)uVar7 >> 0xf) + (uint)(0xfffe < uVar7),0x18,0);
  uVar7 = 0;
  for (iVar8 = 0; CONCAT22(iVar8,uVar7) < lVar5; iVar8 = iVar8 + (uint)bVar4) {
    *(undefined1 *)((uVar7 - uVar2) + *(uint *)0xbe9a) = *(undefined1 *)(uVar7 + *(uint *)0xbe9a);
    bVar4 = 0xfffe < uVar7;
    uVar7 = uVar7 + 1;
  }
  puVar1 = (uint *)0xbe9a;
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + -uVar2;
  *(int *)0xbe9c =
       *(int *)0xbe9c + ((uint)CARRY2(uVar7,-uVar2) - (iVar3 + (uint)(uVar2 != 0))) * 0x1000;
  iVar3 = *(int *)0x144 - *(int *)0x150;
  iVar8 = iVar3 >> 0xf;
  if (iVar8 < 0) {
    iVar8 = 0;
    iVar3 = 0;
  }
  iVar3 = func_0x00027932(0x22b2,iVar3,iVar8,0x18,0);
  return uVar2 + iVar3;
}



/* 3ab8:4c20  FUN_3ab8_4c20  995 bytes, 1 callers */

void __cdecl16far
FUN_3ab8_4c20(int param_1,uint param_2,int param_3,undefined2 param_4,undefined2 param_5,int param_6
             ,undefined2 param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_DS;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  
  FUN_21f2_0ebc();
  uVar3 = *(uint *)0x148;
  iVar6 = *(int *)0x14a;
  if ((*(int *)0x13e <= iVar6) && ((*(int *)0x13e < iVar6 || (*(uint *)0x13c < uVar3)))) {
    iVar6 = *(int *)0x13e;
    uVar3 = *(uint *)0x13c;
  }
  uVar5 = *(uint *)0x144;
  if (*(int *)0x150 < (int)uVar5) {
    uVar5 = *(uint *)0x150;
  }
  if (*(int *)0xbed2 == 0) {
    uVar2 = param_2 - uVar3;
    iVar6 = (param_3 - iVar6) - (uint)(param_2 < uVar3);
  }
  else {
    uVar2 = 1;
    iVar6 = 0;
  }
  lVar9 = func_0x00027932(0x22b2,uVar2,iVar6,0x16,0,uVar5);
  iVar12 = 0x22b2;
  lVar11 = func_0x00027a04();
  lVar9 = (long)(param_6 - iVar12) * 0xc + lVar11 +
          CONCAT22(*(undefined2 *)0xbefc,*(int *)0xbefa + param_1 + 1) + lVar9;
  uVar3 = (uint)lVar9;
  uVar4 = uVar3 - *(uint *)0xbc7e;
  iVar7 = ((int)((ulong)lVar9 >> 0x10) - *(int *)0xbc80) - (uint)(uVar3 < *(uint *)0xbc7e);
  uVar13 = 0;
  uVar10 = func_0x00027932(0x22b2,uVar5 + 1,((int)uVar5 >> 0xf) + (uint)(0xfffe < uVar5),0x18);
  uVar3 = (uint)uVar10;
  for (iVar12 = (int)((ulong)uVar10 >> 0x10) - (uint)(uVar3 == 0); uVar3 = uVar3 - 1, -1 < iVar12;
      iVar12 = iVar12 - (uint)(uVar3 == 0)) {
    *(undefined1 *)(uVar3 + uVar4 + *(uint *)0xbe9a) = *(undefined1 *)(uVar3 + *(uint *)0xbe9a);
  }
  puVar1 = (uint *)0xbe9a;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  *(int *)0xbe9c = *(int *)0xbe9c + (iVar7 + (uint)CARRY2(uVar3,uVar4)) * 0x1000;
  lVar11 = (long)(int)(param_6 - uVar13) * 0xc;
  uVar5 = (uint)lVar11;
  uVar3 = uVar4 - uVar5;
  iVar12 = (iVar7 - (int)((ulong)lVar11 >> 0x10)) - (uint)(uVar4 < uVar5);
  uVar10 = func_0x00027932(0x22b2,uVar13 + 1,((int)uVar13 >> 0xf) + (uint)(0xfffe < uVar13),0xc,0);
  uVar5 = (uint)uVar10;
  for (iVar7 = (int)((ulong)uVar10 >> 0x10) - (uint)(uVar5 == 0); uVar5 = uVar5 - 1, -1 < iVar7;
      iVar7 = iVar7 - (uint)(uVar5 == 0)) {
    *(undefined1 *)(uVar5 + uVar3 + *(uint *)0xbe82) = *(undefined1 *)(uVar5 + *(uint *)0xbe82);
  }
  puVar1 = (uint *)0xbe82;
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)0xbe84 = *(int *)0xbe84 + (iVar12 + (uint)CARRY2(uVar5,uVar3)) * 0x1000;
  uVar10 = func_0x00027a04(0x22b2);
  uVar5 = uVar3 - (uint)uVar10;
  iVar12 = (iVar12 - (int)((ulong)uVar10 >> 0x10)) - (uint)(uVar3 < (uint)uVar10);
  uVar10 = func_0x00027a04(0x22b2);
  uVar3 = (uint)uVar10;
  for (iVar7 = (int)((ulong)uVar10 >> 0x10) - (uint)(uVar3 == 0); uVar3 = uVar3 - 1, -1 < iVar7;
      iVar7 = iVar7 - (uint)(uVar3 == 0)) {
    *(undefined1 *)(uVar3 + uVar5 + *(uint *)0xb788) = *(undefined1 *)(uVar3 + *(uint *)0xb788);
  }
  puVar1 = (uint *)0xb788;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  *(int *)0xb78a = *(int *)0xb78a + (iVar12 + (uint)CARRY2(uVar3,uVar5)) * 0x1000;
  if (*(int *)0xbed2 == 0) {
    iVar7 = param_2 - uVar2;
    iVar8 = (param_3 - iVar6) - (uint)(param_2 < uVar2);
  }
  else {
    iVar7 = 1;
    iVar8 = 0;
  }
  lVar11 = func_0x00027932(0x22b2,iVar7,iVar8,0xffea,0xffff);
  lVar11 = lVar11 + CONCAT22(iVar12,uVar5);
  if (*(int *)0xbed2 != 0) {
    uVar2 = 0;
    iVar6 = 0;
  }
  uVar10 = func_0x00027932(0x22b2,uVar2 + 1,iVar6 + (uint)(0xfffe < uVar2),0x16,0);
  uVar3 = (uint)uVar10;
  iVar6 = (int)((ulong)uVar10 >> 0x10) - (uint)(uVar3 == 0);
  while( true ) {
    uVar3 = uVar3 - 1;
    if (iVar6 < 0) break;
    lVar9 = lVar11 + CONCAT22(iVar6,uVar3);
    uVar5 = (uint)lVar9;
    *(undefined1 *)(uVar5 + *(uint *)0xbc7e) = *(undefined1 *)(uVar3 + *(uint *)0xbc7e);
    iVar6 = iVar6 - (uint)(uVar3 == 0);
  }
  puVar1 = (uint *)0xbc7e;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + (uint)lVar11;
  *(int *)0xbc80 =
       *(int *)0xbc80 + ((int)((ulong)lVar11 >> 0x10) + (uint)CARRY2(uVar3,(uint)lVar11)) * 0x1000;
  *(int *)0x166 = param_1;
  if (*(int *)0xbed2 == 0) {
    *(uint *)0x13c = param_2;
    *(int *)0x13e = param_3;
    *(undefined2 *)0x140 = param_4;
    *(undefined2 *)0x142 = param_5;
  }
  *(int *)0x146 = param_6;
  *(undefined2 *)0x144 = param_7;
  return;
}



/* 3ab8:5003  FUN_3ab8_5003  53 bytes, 2 callers */

undefined2 __cdecl16far
FUN_3ab8_5003(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  FUN_21f2_0ebc();
  func_0x0000c340(0x22b2);
  func_0x00012276(0x885,0x64e1,param_1,param_2,param_3,param_4,param_5);
  func_0x00010526(0x11f2);
  return 1;
}



/* 3ab8:5038  FUN_3ab8_5038  68 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far FUN_3ab8_5038(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined1 uVar6;
  bool bVar7;
  undefined1 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_8a [4];
  int iStack_86;
  undefined1 auStack_84 [8];
  undefined4 uStack_7c;
  undefined2 local_74;
  undefined2 local_72;
  undefined1 auStack_70 [2];
  undefined2 local_6e;
  undefined2 local_6c;
  uint uStack_6a;
  uint uStack_50;
  int iStack_4e;
  undefined4 uStack_4c;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined4 uStack_26;
  undefined4 uStack_22;
  undefined1 *puStack_1e;
  undefined1 *puStack_1c;
  uint uStack_1a;
  int iStack_18;
  undefined4 uStack_16;
  undefined4 uStack_12;
  undefined4 uStack_e;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  
  uVar4 = 0x22b2;
  FUN_21f2_0ebc();
LAB_3ab8_5058:
  local_74 = *(undefined2 *)0xa4f8;
  local_72 = *(undefined2 *)0xa4fa;
  if (*(int *)0xbed2 != 0) {
    uVar10 = CONCAT22(*(undefined2 *)0x13e,*(undefined2 *)0x13c);
    goto LAB_3ab8_51c5;
  }
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0x16;
  uStack_e._0_2_ = (undefined2 *)0xfc10;
  local_6e = local_74;
  local_6c = local_72;
  uStack_e._2_2_ = (undefined1 *)uVar4;
  lVar9 = func_0x00027a04();
  uStack_e._2_2_ = (undefined1 *)0x0;
  uStack_e._0_2_ = (undefined2 *)0xc;
  uVar2 = *(uint *)0x152;
  uStack_12._0_2_ = -0xd - uVar2;
  uStack_12._2_2_ = (-1 - ((int)uVar2 >> 0xf)) - (uint)(0xfff3 < uVar2);
  uStack_16._2_2_ = 0x22b2;
  uStack_16._0_2_ = 0xfc34;
  lVar12 = func_0x00027932();
  lVar9 = ((lVar12 - ((*(int *)0xc0ac - *(int *)0xbefa) + 1)) + (long)*(int *)0x150 * -0x22) - lVar9
  ;
  uVar2 = (uint)lVar9;
  uStack_16._0_2_ = uVar2 + *(uint *)0xc288;
  uStack_16._2_2_ =
       (int)((ulong)lVar9 >> 0x10) + *(int *)0xc28a + (uint)CARRY2(uVar2,*(uint *)0xc288);
  iStack_18 = 0x22b2;
  uStack_1a = 0xfc63;
  uVar10 = FUN_21f2_5978();
  uStack_50 = (int)uVar10 - 1;
  iStack_4e = (int)((ulong)uVar10 >> 0x10) - (uint)((int)uVar10 == 0);
  puStack_1c = (undefined1 *)*(undefined2 *)0x14a;
  puStack_1e = (undefined1 *)*(undefined2 *)0x148;
  uStack_22._2_2_ = (undefined2 *)0x651c;
  uStack_22._0_2_ = (undefined2 *)0x22b2;
  uStack_26._2_2_ = 0xfc81;
  uStack_1a = uStack_50;
  iStack_18 = iStack_4e;
  FUN_3ab8_5003();
  iStack_18 = 0x2711;
  uStack_1a = 0x40;
  puStack_1c = auStack_8a;
  puStack_1e = auStack_84;
  uStack_22._2_2_ = &local_74;
  uStack_22._0_2_ = &local_6e;
  uStack_26._2_2_ = 0x22b2;
  uStack_26._0_2_ = 0xfca3;
  uStack_26._0_2_ = func_0x000021a4();
  if (*(int *)0x158 != 0) {
    FUN_2bb4_4822();
    return;
  }
  if ((uint)uStack_26 == 0xffff) {
    FUN_2bb4_4822();
    return;
  }
  uVar6 = (uint)uStack_26 < 0x65;
  uVar8 = true;
  if ((uint)uStack_26 == 0x65) {
LAB_3ab8_5145:
    local_6e = *(undefined2 *)0xa4f8;
    local_6c = *(undefined2 *)0xa4fa;
  }
  else {
    uVar6 = (uint)uStack_26 < 0x66;
    uVar8 = (uint)uStack_26 == 0x66;
    if ((bool)uVar8) goto LAB_3ab8_5145;
  }
  iStack_18 = 0xad;
  uStack_1a = 0xfcdb;
  func_0x000297e6();
  iStack_18 = 0x22b2;
  uStack_1a = 0xfce3;
  func_0x000297e6();
  iStack_18 = 0x22b2;
  uStack_1a = 0xfce8;
  FUN_28b3_1181();
  if ((bool)uVar8) {
    iStack_18 = 0x22b2;
    uStack_1a = 0xfcf3;
    func_0x000298b4();
    iStack_18 = 0x22b2;
    uStack_1a = 0xfcfb;
    FUN_28b3_0e53();
  }
  iStack_18 = 0x22b2;
  uStack_1a = 0xfd03;
  func_0x000297e6();
  iStack_18 = 0x22b2;
  uStack_1a = 0xfd0b;
  func_0x000298b4();
  iStack_18 = 0x22b2;
  uStack_1a = 0xfd10;
  FUN_28b3_1181();
  if (!(bool)uVar6) {
    iStack_18 = 0x22b2;
    uStack_1a = 0xfd1a;
    func_0x000297e6();
    iStack_18 = 0x22b2;
    uStack_1a = 0xfd23;
    func_0x000298b4();
    iStack_18 = 0x22b2;
    uStack_1a = 0xfd28;
    FUN_28b3_1181();
    if ((bool)uVar6 || (bool)uVar8) {
      iStack_18 = 0x22b2;
      uStack_1a = 0xfd35;
      func_0x000297e6();
      iStack_18 = 0x22b2;
      uStack_1a = 0xfd3a;
      func_0x00029d78();
      iStack_18 = 0x22b2;
      uVar4 = 0x22b2;
      uStack_1a = 0xfd3f;
      uVar10 = FUN_28b3_0f51();
LAB_3ab8_51c5:
      do {
        local_6e = *(undefined2 *)0xa4f8;
        local_6c = *(undefined2 *)0xa4fa;
        if (*(int *)0xbed2 == 0) {
          do {
            do {
              puStack_8 = (undefined1 *)0x0;
              puStack_a = (undefined1 *)0x20;
              uStack_e._2_2_ = (undefined1 *)0xffff;
              uStack_e._0_2_ = (undefined2 *)0xffea;
              uStack_4c = uVar10;
              if (*(int *)0xbed2 == 0) {
                FUN_3ab8_51e6();
                return;
              }
              uStack_12._2_2_ = 0;
              uStack_12._0_2_ = 0;
              uStack_16._0_2_ = 0xfd73;
              uStack_16._2_2_ = uVar4;
              lVar9 = func_0x00027932();
              lVar9 = (lVar9 - ((*(int *)0xc0ac - *(int *)0xbefa) + 1)) +
                      (long)*(int *)0x150 * -0x22 + (long)*(int *)0x152 * -0xc;
              uVar2 = (uint)lVar9;
              uVar3 = uVar2 + *(uint *)0xc288;
              uStack_16._0_2_ = uVar3 - 0x72;
              uStack_16._2_2_ =
                   ((int)((ulong)lVar9 >> 0x10) + *(int *)0xc28a +
                   (uint)CARRY2(uVar2,*(uint *)0xc288)) - (uint)(uVar3 < 0x72);
              iStack_18 = 0x22b2;
              uStack_1a = 0xfdaf;
              uVar10 = FUN_21f2_5978();
              uStack_50 = (int)uVar10 - 1;
              iStack_4e = (int)((ulong)uVar10 >> 0x10) - (uint)((int)uVar10 == 0);
              puStack_1c = (undefined1 *)*(undefined2 *)0x14e;
              puStack_1e = (undefined1 *)*(undefined2 *)0x14c;
              uStack_22._2_2_ = (undefined2 *)0x6523;
              uStack_22._0_2_ = (undefined2 *)0x22b2;
              uStack_26._2_2_ = 0xfdcd;
              uStack_1a = uStack_50;
              iStack_18 = iStack_4e;
              FUN_3ab8_5003();
              iStack_18 = 0x2711;
              uStack_1a = 0x40;
              puStack_1c = auStack_8a;
              puStack_1e = auStack_84;
              uStack_22._2_2_ = &local_74;
              uStack_22._0_2_ = &local_6e;
              uStack_26._2_2_ = 0x22b2;
              uVar4 = 0xad;
              uStack_26._0_2_ = 0xfdef;
              uStack_26._0_2_ = func_0x000021a4();
              if (*(int *)0x158 != 0) {
                FUN_2bb4_4822();
                return;
              }
              if ((uint)uStack_26 == 0xffff) {
                if (*(int *)0xbed2 != 0) {
                  FUN_2bb4_4822();
                  return;
                }
                goto LAB_3ab8_5058;
              }
              uVar6 = (uint)uStack_26 < 0x65;
              uVar8 = true;
              if ((uint)uStack_26 == 0x65) {
LAB_3ab8_529b:
                local_6e = *(undefined2 *)0xa4f8;
                local_6c = *(undefined2 *)0xa4fa;
              }
              else {
                uVar6 = (uint)uStack_26 < 0x66;
                uVar8 = (uint)uStack_26 == 0x66;
                if ((bool)uVar8) goto LAB_3ab8_529b;
              }
              puStack_8 = (undefined1 *)0xad;
              puStack_a = (undefined1 *)0xfe31;
              func_0x000297e6();
              puStack_8 = (undefined1 *)0x22b2;
              puStack_a = (undefined1 *)0xfe39;
              func_0x000297e6();
              puStack_8 = (undefined1 *)0x22b2;
              puStack_a = (undefined1 *)0xfe3e;
              FUN_28b3_1181();
              if ((bool)uVar8) {
                puStack_8 = (undefined1 *)0x22b2;
                puStack_a = (undefined1 *)0xfe49;
                func_0x000298b4();
                puStack_8 = (undefined1 *)0x22b2;
                puStack_a = (undefined1 *)0xfe51;
                FUN_28b3_0e53();
              }
              puStack_8 = (undefined1 *)0x22b2;
              puStack_a = (undefined1 *)0xfe59;
              func_0x000297e6();
              puStack_8 = (undefined1 *)0x22b2;
              puStack_a = (undefined1 *)0xfe61;
              func_0x000298b4();
              puStack_8 = (undefined1 *)0x22b2;
              uVar4 = 0x22b2;
              puStack_a = (undefined1 *)0xfe66;
              FUN_28b3_1181();
              uVar10 = uStack_4c;
            } while ((bool)uVar6);
            puStack_8 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0xfe70;
            func_0x000297e6();
            puStack_8 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0xfe79;
            func_0x000298b4();
            puStack_8 = (undefined1 *)0x22b2;
            uVar4 = 0x22b2;
            puStack_a = (undefined1 *)0xfe7e;
            FUN_28b3_1181();
            uVar10 = uStack_4c;
          } while (!(bool)uVar6 && !(bool)uVar8);
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xfea4;
          func_0x000297e6();
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xfea9;
          func_0x00029d78();
          puStack_8 = (undefined1 *)0x22b2;
          uVar4 = 0x22b2;
          puStack_a = (undefined1 *)0xfeae;
          puVar11 = (undefined2 *)FUN_28b3_0f51();
          uVar10 = uStack_4c;
        }
        else {
          puVar11 = (undefined2 *)CONCAT22(*(undefined2 *)0x142,(undefined2 *)*(undefined2 *)0x140);
        }
        local_6e = *(undefined2 *)0xa4f8;
        local_6c = *(undefined2 *)0xa4fa;
        uStack_12 = uVar10;
        if (*(int *)0xbed2 != 0) {
          uStack_12 = 0;
        }
        puStack_8 = (undefined1 *)0x0;
        puStack_a = (undefined1 *)0xc;
        uStack_e._2_2_ = (undefined1 *)0x0;
        uStack_e._0_2_ = (undefined2 *)0x16;
        uStack_16._0_2_ = 0xfef4;
        uStack_16._2_2_ = uVar4;
        uStack_7c = puVar11;
        uStack_4c = uVar10;
        lVar12 = func_0x00027932();
        uStack_16._2_2_ = 0x22b2;
        uStack_16._0_2_ = 0xff15;
        lVar9 = func_0x00027a04();
        lVar12 = (((long)*(int *)0x150 * -0x22 - lVar9) -
                 (long)((*(int *)0xc0ac - *(int *)0xbefa) + 1)) - lVar12;
        uVar2 = (uint)lVar12;
        uVar3 = uVar2 + *(uint *)0xc288;
        uStack_16._0_2_ = uVar3 - 0x7a;
        uStack_16._2_2_ =
             ((int)((ulong)lVar12 >> 0x10) + *(int *)0xc28a + (uint)CARRY2(uVar2,*(uint *)0xc288)) -
             (uint)(uVar3 < 0x7a);
        iStack_18 = 0x22b2;
        uStack_1a = 0xff52;
        uVar10 = FUN_21f2_5978();
        uStack_50 = (int)uVar10 - 1;
        iStack_4e = (int)((ulong)uVar10 >> 0x10) - (uint)((int)uVar10 == 0);
        puStack_1e = (undefined1 *)*(int *)0x152;
        puStack_1c = (undefined1 *)((int)puStack_1e >> 0xf);
        uStack_22._2_2_ = (undefined2 *)0x652a;
        uStack_22._0_2_ = (undefined2 *)0x22b2;
        uStack_26._2_2_ = 0xff6e;
        uStack_1a = uStack_50;
        iStack_18 = iStack_4e;
        FUN_3ab8_5003();
        iStack_18 = 0x22b2;
        uStack_1a = 0xff79;
        func_0x000298b4();
        iStack_18 = 0x22b2;
        uStack_1a = 0xff81;
        FUN_28b3_0e53();
        iStack_18 = 0x2711;
        uStack_1a = 0x40;
        puStack_1c = auStack_8a;
        puStack_1e = auStack_84;
        uStack_22._2_2_ = &local_74;
        uStack_22._0_2_ = &local_6e;
        uStack_26._2_2_ = 0x22b2;
        uVar4 = 0xad;
        uStack_26._0_2_ = 0xffa0;
        uStack_26._0_2_ = func_0x000021a4();
        if (*(int *)0x158 != 0) {
          FUN_2bb4_4822();
          return;
        }
        if ((uint)uStack_26 != 0xffff) {
          uVar6 = (uint)uStack_26 < 0x65;
          uVar8 = true;
          if ((uint)uStack_26 == 0x65) {
LAB_3ab8_544c:
            local_6e = *(undefined2 *)0xa4f8;
            local_6c = *(undefined2 *)0xa4fa;
          }
          else {
            uVar6 = (uint)uStack_26 < 0x66;
            uVar8 = (uint)uStack_26 == 0x66;
            if ((bool)uVar8) goto LAB_3ab8_544c;
          }
          puStack_8 = (undefined1 *)0xad;
          puStack_a = (undefined1 *)0xffe2;
          func_0x000297e6();
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xffea;
          func_0x000297e6();
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xffef;
          FUN_28b3_1181();
          if ((bool)uVar8) {
            puStack_8 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0xfffa;
            FUN_28b3_0d8b();
            puStack_8 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0x2;
            FUN_28b3_0e53();
          }
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xa;
          func_0x000297e6();
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0x12;
          func_0x000298b4();
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0x17;
          FUN_28b3_1181();
          if (!(bool)uVar6) {
            puStack_8 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0x21;
            func_0x000297e6();
            puStack_8 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0x2a;
            FUN_28b3_0d8b();
            puStack_8 = (undefined1 *)0x22b2;
            puStack_a = (undefined1 *)0x2f;
            FUN_28b3_1181();
            if ((bool)uVar6 || (bool)uVar8) {
              puStack_8 = (undefined1 *)0x22b2;
              puStack_a = (undefined1 *)0x3c;
              func_0x000297e6();
              puStack_8 = (undefined1 *)0x22b2;
              puStack_a = (undefined1 *)0x41;
              func_0x00029d78();
              puStack_8 = (undefined1 *)0x22b2;
              uVar4 = 0x22b2;
              puStack_a = (undefined1 *)0x46;
              uStack_6a = FUN_28b3_0f51();
              goto LAB_3ab8_54c9;
            }
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(int *)0xbed2 != 0) {
          FUN_2bb4_4822();
          return;
        }
        uStack_26._0_2_ = 0xffff;
        uVar10 = uStack_4c;
      } while( true );
    }
  }
  FUN_3ab8_507c();
  return;
LAB_3ab8_54c9:
  local_6e = *(undefined2 *)0xa4f8;
  local_6c = *(undefined2 *)0xa4fa;
  do {
    uVar10 = uStack_4c;
    if (*(int *)0xbed2 != 0) {
      uVar10 = 0;
    }
    puStack_8 = (undefined1 *)0x0;
    puStack_a = (undefined1 *)0x22;
    uStack_e._0_2_ = (undefined2 *)0x8f;
    uStack_e._2_2_ = (undefined1 *)uVar4;
    lVar9 = func_0x00027a04();
    uStack_e._2_2_ = (undefined1 *)0x0;
    uStack_e._0_2_ = (undefined2 *)0x16;
    uStack_12._0_2_ = -3 - (uint)uVar10;
    uStack_12._2_2_ = (-1 - (int)((ulong)uVar10 >> 0x10)) - (uint)(0xfffd < (uint)uVar10);
    uStack_16._2_2_ = 0x22b2;
    uStack_16._0_2_ = 0xaf;
    lVar12 = func_0x00027932();
    lVar9 = ((lVar12 - ((*(int *)0xc0ac - *(int *)0xbefa) + 2)) - lVar9) +
            (long)(int)uStack_6a * -0xc;
    uVar2 = (uint)lVar9;
    uStack_16._0_2_ = uVar2 + *(uint *)0xc288;
    uStack_16._2_2_ =
         (int)((ulong)lVar9 >> 0x10) + *(int *)0xc28a + (uint)CARRY2(uVar2,*(uint *)0xc288);
    iStack_18 = 0x22b2;
    uStack_1a = 0xde;
    uVar10 = FUN_21f2_5978();
    uStack_50 = (int)uVar10 - 1;
    iStack_4e = (int)((ulong)uVar10 >> 0x10) - (uint)((int)uVar10 == 0);
    puStack_1e = (undefined1 *)*(int *)0x150;
    puStack_1c = (undefined1 *)((int)puStack_1e >> 0xf);
    uStack_22._2_2_ = (undefined2 *)0x6531;
    uStack_22._0_2_ = (undefined2 *)0x22b2;
    uStack_26._2_2_ = 0xfa;
    uStack_1a = uStack_50;
    iStack_18 = iStack_4e;
    FUN_4375_c433();
    iStack_18 = 0x22b2;
    uStack_1a = 0x105;
    func_0x000298b4();
    iStack_18 = 0x22b2;
    uStack_1a = 0x10d;
    FUN_28b3_0e53();
    iStack_18 = 0x2711;
    uStack_1a = 0x40;
    puStack_1c = auStack_8a;
    puStack_1e = auStack_84;
    uStack_22._2_2_ = &local_74;
    uStack_22._0_2_ = &local_6e;
    uStack_26._2_2_ = 0x22b2;
    uStack_26._0_2_ = 300;
    uStack_26._0_2_ = func_0x000021a4();
    if (*(int *)0x158 != 0) {
      return;
    }
    if ((uint)uStack_26 == 0xffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = (uint)uStack_26 < 0x65;
    uVar8 = true;
    if ((uint)uStack_26 == 0x65) {
LAB_3ab8_55ce:
      local_6e = *(undefined2 *)0xa4f8;
      local_6c = *(undefined2 *)0xa4fa;
    }
    else {
      uVar6 = (uint)uStack_26 < 0x66;
      uVar8 = (uint)uStack_26 == 0x66;
      if ((bool)uVar8) goto LAB_3ab8_55ce;
    }
    iStack_18 = 0xad;
    uStack_1a = 0x164;
    func_0x000297e6();
    iStack_18 = 0x22b2;
    uStack_1a = 0x16c;
    func_0x000297e6();
    iStack_18 = 0x22b2;
    uStack_1a = 0x171;
    FUN_28b3_1181();
    if ((bool)uVar8) {
      iStack_18 = 0x22b2;
      uStack_1a = 0x17c;
      FUN_28b3_0d8b();
      iStack_18 = 0x22b2;
      uStack_1a = 0x184;
      FUN_28b3_0e53();
    }
    iStack_18 = 0x22b2;
    uStack_1a = 0x18c;
    func_0x000297e6();
    iStack_18 = 0x22b2;
    uStack_1a = 0x194;
    func_0x000298b4();
    iStack_18 = 0x22b2;
    uStack_1a = 0x199;
    FUN_28b3_1181();
    if (!(bool)uVar6) {
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x1a3;
      func_0x000297e6();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x1ac;
      FUN_28b3_0d8b();
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x1b1;
      FUN_28b3_1181();
      if ((bool)uVar6 || (bool)uVar8) break;
    }
    uVar4 = 0x22b2;
  } while( true );
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x1be;
  func_0x000297e6();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x1c3;
  func_0x00029d78();
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x1c8;
  iStack_86 = FUN_28b3_0f51();
  uVar10 = uStack_4c;
  if (*(int *)0xbed2 != 0) {
    uVar10 = 0;
  }
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x1ff;
  lVar9 = func_0x00027a04();
  puStack_8 = (undefined1 *)0x0;
  puStack_a = (undefined1 *)0xc;
  uStack_e._0_2_ = (undefined2 *)(uStack_6a + iStack_86 * 2);
  uStack_e._2_2_ =
       (undefined1 *)
       (((int)uStack_6a >> 0xf) + ((iStack_86 >> 0xf) << 1 | (uint)(iStack_86 < 0)) +
       (uint)CARRY2(uStack_6a,iStack_86 * 2));
  uStack_12._2_2_ = 0x22b2;
  uStack_12._0_2_ = 0x22a;
  lVar12 = func_0x00027932();
  uStack_12._2_2_ = 0xffff;
  uStack_12._0_2_ = 0xffea;
  iStack_18 = 0x22b2;
  uStack_1a = 0x247;
  uStack_16 = uVar10;
  lVar13 = func_0x00027932();
  lVar9 = (lVar13 - lVar12) - lVar9;
  uVar2 = (uint)lVar9;
  uVar3 = uVar2 + *(uint *)0xc288;
  uStack_50 = uVar3 - 0x5b;
  iStack_4e = ((int)((ulong)lVar9 >> 0x10) + *(int *)0xc28a + (uint)CARRY2(uVar2,*(uint *)0xc288)) -
              (uint)(uVar3 < 0x5b);
  if ((-1 < iStack_4e) && ((0 < iStack_4e || (0x7fff < uStack_50)))) {
    uStack_50 = 0x7fff;
    iStack_4e = 0;
  }
  if ((uStack_50 & 1) == 0) {
    bVar7 = uStack_50 == 0;
    uStack_50 = uStack_50 - 1;
    iStack_4e = iStack_4e - (uint)bVar7;
  }
  uStack_22 = uStack_7c;
  if (*(int *)0xbed2 != 0) {
    uStack_22 = (undefined2 *)CONCAT22(*(undefined2 *)0x142,(undefined2 *)*(undefined2 *)0x140);
  }
  iStack_18 = iStack_4e;
  uStack_1a = uStack_50;
  puStack_1c = (undefined1 *)iStack_86;
  puStack_1e = (undefined1 *)uStack_6a;
  uStack_26 = uStack_4c;
  if (*(int *)0xbed2 != 0) {
    uStack_26 = CONCAT22(*(undefined2 *)0x13e,*(undefined2 *)0x13c);
  }
  uStack_28 = 0x22e;
  uStack_2a = 0xbf48;
  uStack_2c = 0x22b2;
  uStack_2e = 0x2dc;
  FUN_21f2_3454();
  iStack_18 = 0x6538;
  uStack_1a = 0xbf48;
  puStack_1c = (undefined1 *)0x22b2;
  puStack_1e = (undefined1 *)0x2ec;
  FUN_21f2_2d26();
  uVar5 = 0x22b2;
  while( true ) {
    puStack_8 = auStack_70;
    puStack_a = auStack_8a;
    uStack_e._2_2_ = auStack_84;
    uStack_e._0_2_ = (undefined2 *)0xbf48;
    uStack_12._2_2_ = 1;
    uVar4 = 0x1bb4;
    uStack_16._2_2_ = 0x309;
    uStack_12._0_2_ = uVar5;
    iVar1 = FUN_1def_0904();
    uStack_26 = CONCAT22(uStack_26._2_2_,iVar1);
    if (*(int *)0x158 != 0) {
      return;
    }
    if (iVar1 == -1) break;
    if (iVar1 == 2) {
      return;
    }
    uVar5 = uVar4;
    if (iVar1 == 1) {
      puStack_8 = (undefined1 *)0x1bb4;
      puStack_a = (undefined1 *)0x32d;
      uStack_26._0_2_ = iVar1;
      func_0x0000c3ca();
      if ((*(byte *)0xbe98 & 2) == 0) {
        *(undefined2 *)0xbe96 = 0;
        *(undefined2 *)0xbe94 = 0;
      }
      puStack_8 = (undefined1 *)0x885;
      puStack_a = (undefined1 *)0x340;
      FUN_4375_bc8d();
      puStack_8 = (undefined1 *)iStack_86;
      puStack_a = (undefined1 *)uStack_6a;
      uStack_16._2_2_ = uStack_50;
      uStack_16._0_2_ = 0x885;
      iStack_18 = 0x35a;
      uStack_e = uStack_7c;
      uStack_12 = uStack_4c;
      FUN_4375_c050();
      puStack_8 = (undefined1 *)0x885;
      puStack_a = (undefined1 *)0x362;
      func_0x0000abfa();
      return;
    }
  }
  uStack_26._0_2_ = 0xffff;
  goto LAB_3ab8_54c9;
}



/* 3ab8:507c  FUN_3ab8_507c  13 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_507c(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int unaff_BP;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar11 = 0x3ab8;
code_r0x0003fbfc:
  lVar14 = func_0x00027a04(uVar11,0x16,0);
  uVar5 = *(uint *)0x152;
  lVar15 = func_0x00027932(0x22b2,-0xd - uVar5,(-1 - ((int)uVar5 >> 0xf)) - (uint)(0xfff3 < uVar5),
                           0xc,0);
  lVar14 = ((lVar15 - ((*(int *)0xc0ac - *(int *)0xbefa) + 1)) + (long)*(int *)0x150 * -0x22) -
           lVar14;
  uVar5 = (uint)lVar14;
  uVar16 = FUN_21f2_5978(0x22b2,uVar5 + *(uint *)0xc288,
                         (int)((ulong)lVar14 >> 0x10) + *(int *)0xc28a +
                         (uint)CARRY2(uVar5,*(uint *)0xc288));
  iVar2 = (int)uVar16 + -1;
  iVar8 = (int)((ulong)uVar16 >> 0x10) - (uint)((int)uVar16 == 0);
  *(int *)(unaff_BP + -0x4e) = iVar2;
  *(int *)(unaff_BP + -0x4c) = iVar8;
  FUN_3ab8_5003(0x651c,*(undefined2 *)0x148,*(undefined2 *)0x14a,iVar2,iVar8);
  uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,unaff_BP + -0x88
                          ,0x40,0x2711);
  *(uint *)(unaff_BP + -0x24) = uVar5;
  if (*(int *)0x158 != 0) {
    FUN_2bb4_4822();
    return;
  }
  if (uVar5 == 0xffff) {
    FUN_2bb4_4822();
    return;
  }
  uVar12 = uVar5 < 0x65;
  uVar13 = uVar5 == 0x65;
  if (!(bool)uVar13) {
    uVar12 = uVar5 < 0x66;
    uVar13 = uVar5 == 0x66;
    if (!(bool)uVar13) goto LAB_3ab8_5152;
  }
  uVar11 = *(undefined2 *)0xa4fa;
  *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
  *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
LAB_3ab8_5152:
  func_0x000297e6(0xad);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar13) {
    func_0x000298b4(0x22b2);
    FUN_28b3_0e53(0x22b2);
  }
  func_0x000297e6(0x22b2);
  func_0x000298b4(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar12) {
    func_0x000297e6(0x22b2);
    func_0x000298b4(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar12 || (bool)uVar13) {
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      uVar11 = 0x22b2;
      uVar16 = FUN_28b3_0f51(0x22b2);
LAB_3ab8_51bf:
      *(undefined2 *)(unaff_BP + -0x4a) = (int)uVar16;
      *(undefined2 *)(unaff_BP + -0x48) = (int)((ulong)uVar16 >> 0x10);
      do {
        uVar3 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
        if (*(int *)0xbed2 == 0) {
          do {
            do {
              if (*(int *)0xbed2 == 0) {
                FUN_3ab8_51e6();
                return;
              }
              lVar14 = func_0x00027932(uVar11,0,0,0xffea,0xffff,0x20,0);
              lVar14 = (lVar14 - ((*(int *)0xc0ac - *(int *)0xbefa) + 1)) +
                       (long)*(int *)0x150 * -0x22 + (long)*(int *)0x152 * -0xc;
              uVar5 = (uint)lVar14;
              uVar6 = uVar5 + *(uint *)0xc288;
              uVar16 = FUN_21f2_5978(0x22b2,uVar6 - 0x72,
                                     ((int)((ulong)lVar14 >> 0x10) + *(int *)0xc28a +
                                     (uint)CARRY2(uVar5,*(uint *)0xc288)) - (uint)(uVar6 < 0x72));
              iVar2 = (int)uVar16 + -1;
              iVar8 = (int)((ulong)uVar16 >> 0x10) - (uint)((int)uVar16 == 0);
              *(int *)(unaff_BP + -0x4e) = iVar2;
              *(int *)(unaff_BP + -0x4c) = iVar8;
              FUN_3ab8_5003(0x6523,*(undefined2 *)0x14c,*(undefined2 *)0x14e,iVar2,iVar8);
              uVar11 = 0xad;
              uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                                      unaff_BP + -0x88,0x40,0x2711);
              *(uint *)(unaff_BP + -0x24) = uVar5;
              if (*(int *)0x158 != 0) {
                FUN_2bb4_4822();
                return;
              }
              if (uVar5 == 0xffff) {
                if (*(int *)0xbed2 != 0) {
                  FUN_2bb4_4822();
                  return;
                }
                uVar3 = *(undefined2 *)0xa4f8;
                uVar9 = *(undefined2 *)0xa4fa;
                *(undefined2 *)(unaff_BP + -0x6c) = uVar3;
                *(undefined2 *)(unaff_BP + -0x6a) = uVar9;
                *(undefined2 *)(unaff_BP + -0x72) = uVar3;
                *(undefined2 *)(unaff_BP + -0x70) = uVar9;
                if (*(int *)0xbed2 == 0) goto code_r0x0003fbfc;
                uVar16 = CONCAT22(*(undefined2 *)0x13e,*(undefined2 *)0x13c);
                goto LAB_3ab8_51bf;
              }
              uVar13 = uVar5 < 0x65;
              uVar12 = true;
              if (uVar5 == 0x65) {
LAB_3ab8_529b:
                uVar11 = *(undefined2 *)0xa4fa;
                *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
                *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
              }
              else {
                uVar13 = uVar5 < 0x66;
                uVar12 = uVar5 == 0x66;
                if ((bool)uVar12) goto LAB_3ab8_529b;
              }
              func_0x000297e6(0xad);
              func_0x000297e6(0x22b2);
              FUN_28b3_1181(0x22b2);
              if ((bool)uVar12) {
                func_0x000298b4(0x22b2);
                FUN_28b3_0e53(0x22b2);
              }
              func_0x000297e6(0x22b2);
              func_0x000298b4(0x22b2);
              uVar11 = 0x22b2;
              FUN_28b3_1181(0x22b2);
            } while ((bool)uVar13);
            func_0x000297e6(0x22b2);
            func_0x000298b4(0x22b2);
            uVar11 = 0x22b2;
            FUN_28b3_1181(0x22b2);
          } while (!(bool)uVar13 && !(bool)uVar12);
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          uVar11 = 0x22b2;
          uVar16 = FUN_28b3_0f51(0x22b2);
        }
        else {
          uVar16 = CONCAT22(*(undefined2 *)0x142,*(undefined2 *)0x140);
        }
        *(undefined2 *)(unaff_BP + -0x7a) = (int)uVar16;
        *(undefined2 *)(unaff_BP + -0x78) = (int)((ulong)uVar16 >> 0x10);
        uVar3 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
        if (*(int *)0xbed2 == 0) {
          uVar3 = *(undefined2 *)(unaff_BP + -0x4a);
          uVar9 = *(undefined2 *)(unaff_BP + -0x48);
        }
        else {
          uVar3 = 0;
          uVar9 = 0;
        }
        *(undefined2 *)(unaff_BP + -0x8c) = uVar3;
        *(undefined2 *)(unaff_BP + -0x8a) = uVar9;
        uVar16 = func_0x00027932(uVar11,*(undefined2 *)(unaff_BP + -0x8c),
                                 *(undefined2 *)(unaff_BP + -0x8a),0x16,0,0xc,0);
        *(undefined2 *)(unaff_BP + -0x94) = (int)uVar16;
        *(undefined2 *)(unaff_BP + -0x92) = (int)((ulong)uVar16 >> 0x10);
        lVar14 = func_0x00027a04(0x22b2);
        lVar14 = ((long)*(int *)0x150 * -0x22 - lVar14) -
                 (long)((*(int *)0xc0ac - *(int *)0xbefa) + 1);
        uVar5 = (uint)lVar14;
        uVar6 = uVar5 - *(uint *)(unaff_BP + -0x94);
        uVar7 = uVar6 + *(uint *)0xc288;
        uVar16 = FUN_21f2_5978(0x22b2,uVar7 - 0x7a,
                               ((((int)((ulong)lVar14 >> 0x10) - *(int *)(unaff_BP + -0x92)) -
                                (uint)(uVar5 < *(uint *)(unaff_BP + -0x94))) + *(int *)0xc28a +
                               (uint)CARRY2(uVar6,*(uint *)0xc288)) - (uint)(uVar7 < 0x7a));
        iVar2 = (int)uVar16 + -1;
        iVar8 = (int)((ulong)uVar16 >> 0x10) - (uint)((int)uVar16 == 0);
        *(int *)(unaff_BP + -0x4e) = iVar2;
        *(int *)(unaff_BP + -0x4c) = iVar8;
        FUN_3ab8_5003(0x652a,*(int *)0x152,*(int *)0x152 >> 0xf,iVar2,iVar8);
        func_0x000298b4(0x22b2);
        FUN_28b3_0e53(0x22b2);
        uVar11 = 0xad;
        uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                                unaff_BP + -0x88,0x40,0x2711);
        *(uint *)(unaff_BP + -0x24) = uVar5;
        if (*(int *)0x158 != 0) {
          FUN_2bb4_4822();
          return;
        }
        if (uVar5 != 0xffff) {
          uVar13 = uVar5 < 0x65;
          uVar12 = true;
          if (uVar5 == 0x65) {
LAB_3ab8_544c:
            uVar11 = *(undefined2 *)0xa4fa;
            *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
            *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
          }
          else {
            uVar13 = uVar5 < 0x66;
            uVar12 = uVar5 == 0x66;
            if ((bool)uVar12) goto LAB_3ab8_544c;
          }
          func_0x000297e6(0xad);
          func_0x000297e6(0x22b2);
          FUN_28b3_1181(0x22b2);
          if ((bool)uVar12) {
            FUN_28b3_0d8b(0x22b2);
            FUN_28b3_0e53(0x22b2);
          }
          func_0x000297e6(0x22b2);
          func_0x000298b4(0x22b2);
          FUN_28b3_1181(0x22b2);
          if (!(bool)uVar13) {
            func_0x000297e6(0x22b2);
            FUN_28b3_0d8b(0x22b2);
            FUN_28b3_1181(0x22b2);
            if ((bool)uVar13 || (bool)uVar12) {
              func_0x000297e6(0x22b2);
              func_0x00029d78(0x22b2);
              uVar3 = 0x22b2;
              uVar11 = FUN_28b3_0f51(0x22b2);
              *(undefined2 *)(unaff_BP + -0x68) = uVar11;
              goto LAB_3ab8_54c9;
            }
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(int *)0xbed2 != 0) {
          FUN_2bb4_4822();
          return;
        }
      } while( true );
    }
  }
  FUN_3ab8_507c();
  return;
LAB_3ab8_54c9:
  uVar11 = *(undefined2 *)0xa4fa;
  *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
  *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
  do {
    if (*(int *)0xbed2 == 0) {
      uVar11 = *(undefined2 *)(unaff_BP + -0x4a);
      uVar9 = *(undefined2 *)(unaff_BP + -0x48);
    }
    else {
      uVar11 = 0;
      uVar9 = 0;
    }
    *(undefined2 *)(unaff_BP + -0x94) = uVar11;
    *(undefined2 *)(unaff_BP + -0x92) = uVar9;
    lVar14 = func_0x00027a04(uVar3,0x22,0);
    lVar15 = func_0x00027932(0x22b2,-3 - *(uint *)(unaff_BP + -0x94),
                             (-1 - *(int *)(unaff_BP + -0x92)) -
                             (uint)(0xfffd < *(uint *)(unaff_BP + -0x94)),0x16,0);
    lVar14 = ((lVar15 - ((*(int *)0xc0ac - *(int *)0xbefa) + 2)) - lVar14) +
             (long)*(int *)(unaff_BP + -0x68) * -0xc;
    uVar5 = (uint)lVar14;
    uVar16 = FUN_21f2_5978(0x22b2,uVar5 + *(uint *)0xc288,
                           (int)((ulong)lVar14 >> 0x10) + *(int *)0xc28a +
                           (uint)CARRY2(uVar5,*(uint *)0xc288));
    iVar2 = (int)uVar16 + -1;
    iVar8 = (int)((ulong)uVar16 >> 0x10) - (uint)((int)uVar16 == 0);
    *(int *)(unaff_BP + -0x4e) = iVar2;
    *(int *)(unaff_BP + -0x4c) = iVar8;
    FUN_4375_c433(0x22b2,0x6531,*(int *)0x150,*(int *)0x150 >> 0xf,iVar2,iVar8);
    func_0x000298b4(0x22b2);
    FUN_28b3_0e53(0x22b2);
    uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                            unaff_BP + -0x88,0x40,0x2711);
    *(uint *)(unaff_BP + -0x24) = uVar5;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (uVar5 == 0xffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar13 = uVar5 < 0x65;
    uVar12 = true;
    if (uVar5 == 0x65) {
LAB_3ab8_55ce:
      uVar11 = *(undefined2 *)0xa4fa;
      *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
      *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
    }
    else {
      uVar13 = uVar5 < 0x66;
      uVar12 = uVar5 == 0x66;
      if ((bool)uVar12) goto LAB_3ab8_55ce;
    }
    func_0x000297e6(0xad);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar12) {
      FUN_28b3_0d8b(0x22b2);
      FUN_28b3_0e53(0x22b2);
    }
    func_0x000297e6(0x22b2);
    func_0x000298b4(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar13) {
      func_0x000297e6(0x22b2);
      FUN_28b3_0d8b(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar13 || (bool)uVar12) break;
    }
    uVar3 = 0x22b2;
  } while( true );
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  uVar11 = FUN_28b3_0f51(0x22b2);
  *(undefined2 *)(unaff_BP + -0x84) = uVar11;
  if (*(int *)0xbed2 == 0) {
    uVar11 = *(undefined2 *)(unaff_BP + -0x4a);
    uVar3 = *(undefined2 *)(unaff_BP + -0x48);
  }
  else {
    uVar11 = 0;
    uVar3 = 0;
  }
  *(undefined2 *)(unaff_BP + -0x94) = uVar11;
  *(undefined2 *)(unaff_BP + -0x92) = uVar3;
  uVar16 = func_0x00027a04(0x22b2);
  iVar2 = *(int *)(unaff_BP + -0x84);
  uVar5 = *(uint *)(unaff_BP + -0x68);
  uVar17 = func_0x00027932(0x22b2,uVar5 + iVar2 * 2,
                           ((int)uVar5 >> 0xf) + ((iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0)) +
                           (uint)CARRY2(uVar5,iVar2 * 2),0xc,0);
  uVar11 = *(undefined2 *)(unaff_BP + -0x92);
  uVar3 = *(undefined2 *)(unaff_BP + -0x94);
  *(undefined2 *)(unaff_BP + -0x8c) = (int)uVar17;
  *(undefined2 *)(unaff_BP + -0x8a) = (int)((ulong)uVar17 >> 0x10);
  uVar17 = func_0x00027932(0x22b2,uVar3,uVar11,0xffea,0xffff);
  uVar5 = (uint)uVar17 - *(uint *)(unaff_BP + -0x8c);
  uVar6 = uVar5 - (uint)uVar16;
  uVar7 = uVar6 + *(uint *)0xc288;
  uVar4 = uVar7 - 0x5b;
  iVar2 = ((((((int)((ulong)uVar17 >> 0x10) - *(int *)(unaff_BP + -0x8a)) -
             (uint)((uint)uVar17 < *(uint *)(unaff_BP + -0x8c))) - (int)((ulong)uVar16 >> 0x10)) -
           (uint)(uVar5 < (uint)uVar16)) + *(int *)0xc28a + (uint)CARRY2(uVar6,*(uint *)0xc288)) -
          (uint)(uVar7 < 0x5b);
  *(uint *)(unaff_BP + -0x4e) = uVar4;
  *(int *)(unaff_BP + -0x4c) = iVar2;
  if ((-1 < iVar2) && ((0 < iVar2 || (0x7fff < uVar4)))) {
    *(undefined2 *)(unaff_BP + -0x4e) = 0x7fff;
    *(undefined2 *)(unaff_BP + -0x4c) = 0;
  }
  if ((*(byte *)(unaff_BP + -0x4e) & 1) == 0) {
    piVar1 = (int *)(unaff_BP + -0x4e);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)(unaff_BP + -0x4c) = *(int *)(unaff_BP + -0x4c) - (uint)(iVar2 == 0);
  }
  if (*(int *)0xbed2 == 0) {
    uVar11 = *(undefined2 *)(unaff_BP + -0x7a);
    uVar3 = *(undefined2 *)(unaff_BP + -0x78);
  }
  else {
    uVar11 = *(undefined2 *)0x140;
    uVar3 = *(undefined2 *)0x142;
  }
  *(undefined2 *)(unaff_BP + -0x94) = uVar11;
  *(undefined2 *)(unaff_BP + -0x92) = uVar3;
  if (*(int *)0xbed2 == 0) {
    uVar9 = *(undefined2 *)(unaff_BP + -0x4a);
    uVar10 = *(undefined2 *)(unaff_BP + -0x48);
  }
  else {
    uVar9 = *(undefined2 *)0x13c;
    uVar10 = *(undefined2 *)0x13e;
  }
  FUN_21f2_3454(0x22b2,0xbf48,0x22e,uVar9,uVar10,uVar11,uVar3,*(undefined2 *)(unaff_BP + -0x68),
                *(undefined2 *)(unaff_BP + -0x84),*(undefined2 *)(unaff_BP + -0x4e),
                *(undefined2 *)(unaff_BP + -0x4c));
  FUN_21f2_2d26(0x22b2,0xbf48,0x6538);
  uVar11 = 0x22b2;
  while( true ) {
    uVar3 = 0x1bb4;
    iVar2 = FUN_1def_0904(uVar11,1,0xbf48,unaff_BP + -0x82,unaff_BP + -0x88,unaff_BP + -0x6e);
    *(int *)(unaff_BP + -0x24) = iVar2;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (iVar2 == -1) break;
    if (iVar2 == 2) {
      return;
    }
    uVar11 = uVar3;
    if (iVar2 == 1) {
      func_0x0000c3ca(0x1bb4);
      if ((*(byte *)0xbe98 & 2) == 0) {
        *(undefined2 *)0xbe96 = 0;
        *(undefined2 *)0xbe94 = 0;
      }
      FUN_4375_bc8d(0x885);
      FUN_4375_c050(0x885,*(undefined2 *)(unaff_BP + -0x4e),*(undefined2 *)(unaff_BP + -0x4a),
                    *(undefined2 *)(unaff_BP + -0x48),*(undefined2 *)(unaff_BP + -0x7a),
                    *(undefined2 *)(unaff_BP + -0x78),*(undefined2 *)(unaff_BP + -0x68),
                    *(undefined2 *)(unaff_BP + -0x84));
      func_0x0000abfa(0x885);
      return;
    }
  }
  goto LAB_3ab8_54c9;
}



/* 3ab8:5089  FUN_3ab8_5089  349 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_5089(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int unaff_BP;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar11 = 0x3ab8;
code_r0x0003fc09:
  lVar14 = func_0x00027a04(uVar11);
  uVar5 = *(uint *)0x152;
  lVar15 = func_0x00027932(0x22b2,-0xd - uVar5,(-1 - ((int)uVar5 >> 0xf)) - (uint)(0xfff3 < uVar5),
                           0xc,0);
  lVar14 = ((lVar15 - ((*(int *)0xc0ac - *(int *)0xbefa) + 1)) + (long)*(int *)0x150 * -0x22) -
           lVar14;
  uVar5 = (uint)lVar14;
  uVar16 = FUN_21f2_5978(0x22b2,uVar5 + *(uint *)0xc288,
                         (int)((ulong)lVar14 >> 0x10) + *(int *)0xc28a +
                         (uint)CARRY2(uVar5,*(uint *)0xc288));
  iVar2 = (int)uVar16 + -1;
  iVar8 = (int)((ulong)uVar16 >> 0x10) - (uint)((int)uVar16 == 0);
  *(int *)(unaff_BP + -0x4e) = iVar2;
  *(int *)(unaff_BP + -0x4c) = iVar8;
  FUN_3ab8_5003(0x651c,*(undefined2 *)0x148,*(undefined2 *)0x14a,iVar2,iVar8);
  uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,unaff_BP + -0x88
                          ,0x40,0x2711);
  *(uint *)(unaff_BP + -0x24) = uVar5;
  if (*(int *)0x158 != 0) {
    FUN_2bb4_4822();
    return;
  }
  if (uVar5 == 0xffff) {
    FUN_2bb4_4822();
    return;
  }
  uVar12 = uVar5 < 0x65;
  uVar13 = uVar5 == 0x65;
  if (!(bool)uVar13) {
    uVar12 = uVar5 < 0x66;
    uVar13 = uVar5 == 0x66;
    if (!(bool)uVar13) goto LAB_3ab8_5152;
  }
  uVar11 = *(undefined2 *)0xa4fa;
  *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
  *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
LAB_3ab8_5152:
  func_0x000297e6(0xad);
  func_0x000297e6(0x22b2);
  FUN_28b3_1181(0x22b2);
  if ((bool)uVar13) {
    func_0x000298b4(0x22b2);
    FUN_28b3_0e53(0x22b2);
  }
  func_0x000297e6(0x22b2);
  func_0x000298b4(0x22b2);
  FUN_28b3_1181(0x22b2);
  if (!(bool)uVar12) {
    func_0x000297e6(0x22b2);
    func_0x000298b4(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar12 || (bool)uVar13) {
      func_0x000297e6(0x22b2);
      func_0x00029d78(0x22b2);
      uVar11 = 0x22b2;
      uVar16 = FUN_28b3_0f51(0x22b2);
LAB_3ab8_51bf:
      *(undefined2 *)(unaff_BP + -0x4a) = (int)uVar16;
      *(undefined2 *)(unaff_BP + -0x48) = (int)((ulong)uVar16 >> 0x10);
      do {
        uVar3 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
        if (*(int *)0xbed2 == 0) {
          do {
            do {
              if (*(int *)0xbed2 == 0) {
                FUN_3ab8_51e6();
                return;
              }
              lVar14 = func_0x00027932(uVar11,0,0,0xffea,0xffff);
              lVar14 = (lVar14 - ((*(int *)0xc0ac - *(int *)0xbefa) + 1)) +
                       (long)*(int *)0x150 * -0x22 + (long)*(int *)0x152 * -0xc;
              uVar5 = (uint)lVar14;
              uVar6 = uVar5 + *(uint *)0xc288;
              uVar16 = FUN_21f2_5978(0x22b2,uVar6 - 0x72,
                                     ((int)((ulong)lVar14 >> 0x10) + *(int *)0xc28a +
                                     (uint)CARRY2(uVar5,*(uint *)0xc288)) - (uint)(uVar6 < 0x72));
              iVar2 = (int)uVar16 + -1;
              iVar8 = (int)((ulong)uVar16 >> 0x10) - (uint)((int)uVar16 == 0);
              *(int *)(unaff_BP + -0x4e) = iVar2;
              *(int *)(unaff_BP + -0x4c) = iVar8;
              FUN_3ab8_5003(0x6523,*(undefined2 *)0x14c,*(undefined2 *)0x14e,iVar2,iVar8);
              uVar11 = 0xad;
              uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                                      unaff_BP + -0x88,0x40,0x2711);
              *(uint *)(unaff_BP + -0x24) = uVar5;
              if (*(int *)0x158 != 0) {
                FUN_2bb4_4822();
                return;
              }
              if (uVar5 == 0xffff) {
                if (*(int *)0xbed2 != 0) {
                  FUN_2bb4_4822();
                  return;
                }
                uVar3 = *(undefined2 *)0xa4f8;
                uVar9 = *(undefined2 *)0xa4fa;
                *(undefined2 *)(unaff_BP + -0x6c) = uVar3;
                *(undefined2 *)(unaff_BP + -0x6a) = uVar9;
                *(undefined2 *)(unaff_BP + -0x72) = uVar3;
                *(undefined2 *)(unaff_BP + -0x70) = uVar9;
                if (*(int *)0xbed2 == 0) goto code_r0x0003fc09;
                uVar16 = CONCAT22(*(undefined2 *)0x13e,*(undefined2 *)0x13c);
                goto LAB_3ab8_51bf;
              }
              uVar13 = uVar5 < 0x65;
              uVar12 = true;
              if (uVar5 == 0x65) {
LAB_3ab8_529b:
                uVar11 = *(undefined2 *)0xa4fa;
                *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
                *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
              }
              else {
                uVar13 = uVar5 < 0x66;
                uVar12 = uVar5 == 0x66;
                if ((bool)uVar12) goto LAB_3ab8_529b;
              }
              func_0x000297e6();
              func_0x000297e6();
              FUN_28b3_1181();
              if ((bool)uVar12) {
                func_0x000298b4();
                FUN_28b3_0e53();
              }
              func_0x000297e6();
              func_0x000298b4();
              uVar11 = 0x22b2;
              FUN_28b3_1181();
            } while ((bool)uVar13);
            func_0x000297e6();
            func_0x000298b4();
            uVar11 = 0x22b2;
            FUN_28b3_1181();
          } while (!(bool)uVar13 && !(bool)uVar12);
          func_0x000297e6();
          func_0x00029d78();
          uVar11 = 0x22b2;
          uVar16 = FUN_28b3_0f51();
        }
        else {
          uVar16 = CONCAT22(*(undefined2 *)0x142,*(undefined2 *)0x140);
        }
        *(undefined2 *)(unaff_BP + -0x7a) = (int)uVar16;
        *(undefined2 *)(unaff_BP + -0x78) = (int)((ulong)uVar16 >> 0x10);
        uVar3 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
        if (*(int *)0xbed2 == 0) {
          uVar3 = *(undefined2 *)(unaff_BP + -0x4a);
          uVar9 = *(undefined2 *)(unaff_BP + -0x48);
        }
        else {
          uVar3 = 0;
          uVar9 = 0;
        }
        *(undefined2 *)(unaff_BP + -0x8c) = uVar3;
        *(undefined2 *)(unaff_BP + -0x8a) = uVar9;
        uVar16 = func_0x00027932(uVar11,*(undefined2 *)(unaff_BP + -0x8c),
                                 *(undefined2 *)(unaff_BP + -0x8a),0x16,0);
        *(undefined2 *)(unaff_BP + -0x94) = (int)uVar16;
        *(undefined2 *)(unaff_BP + -0x92) = (int)((ulong)uVar16 >> 0x10);
        lVar14 = func_0x00027a04(0x22b2);
        lVar14 = ((long)*(int *)0x150 * -0x22 - lVar14) -
                 (long)((*(int *)0xc0ac - *(int *)0xbefa) + 1);
        uVar5 = (uint)lVar14;
        uVar6 = uVar5 - *(uint *)(unaff_BP + -0x94);
        uVar7 = uVar6 + *(uint *)0xc288;
        uVar16 = FUN_21f2_5978(0x22b2,uVar7 - 0x7a,
                               ((((int)((ulong)lVar14 >> 0x10) - *(int *)(unaff_BP + -0x92)) -
                                (uint)(uVar5 < *(uint *)(unaff_BP + -0x94))) + *(int *)0xc28a +
                               (uint)CARRY2(uVar6,*(uint *)0xc288)) - (uint)(uVar7 < 0x7a));
        iVar2 = (int)uVar16 + -1;
        iVar8 = (int)((ulong)uVar16 >> 0x10) - (uint)((int)uVar16 == 0);
        *(int *)(unaff_BP + -0x4e) = iVar2;
        *(int *)(unaff_BP + -0x4c) = iVar8;
        FUN_3ab8_5003(0x652a,*(int *)0x152,*(int *)0x152 >> 0xf,iVar2,iVar8);
        func_0x000298b4(0x22b2);
        FUN_28b3_0e53(0x22b2);
        uVar11 = 0xad;
        uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                                unaff_BP + -0x88,0x40,0x2711);
        *(uint *)(unaff_BP + -0x24) = uVar5;
        if (*(int *)0x158 != 0) {
          FUN_2bb4_4822();
          return;
        }
        if (uVar5 != 0xffff) {
          uVar13 = uVar5 < 0x65;
          uVar12 = true;
          if (uVar5 == 0x65) {
LAB_3ab8_544c:
            uVar11 = *(undefined2 *)0xa4fa;
            *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
            *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
          }
          else {
            uVar13 = uVar5 < 0x66;
            uVar12 = uVar5 == 0x66;
            if ((bool)uVar12) goto LAB_3ab8_544c;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar12) {
            FUN_28b3_0d8b();
            FUN_28b3_0e53();
          }
          func_0x000297e6();
          func_0x000298b4();
          FUN_28b3_1181();
          if (!(bool)uVar13) {
            func_0x000297e6();
            FUN_28b3_0d8b();
            FUN_28b3_1181();
            if ((bool)uVar13 || (bool)uVar12) {
              func_0x000297e6();
              func_0x00029d78();
              uVar3 = 0x22b2;
              uVar11 = FUN_28b3_0f51();
              *(undefined2 *)(unaff_BP + -0x68) = uVar11;
              goto LAB_3ab8_54c9;
            }
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(int *)0xbed2 != 0) {
          FUN_2bb4_4822();
          return;
        }
      } while( true );
    }
  }
  FUN_3ab8_507c();
  return;
LAB_3ab8_54c9:
  uVar11 = *(undefined2 *)0xa4fa;
  *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
  *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
  do {
    if (*(int *)0xbed2 == 0) {
      uVar11 = *(undefined2 *)(unaff_BP + -0x4a);
      uVar9 = *(undefined2 *)(unaff_BP + -0x48);
    }
    else {
      uVar11 = 0;
      uVar9 = 0;
    }
    *(undefined2 *)(unaff_BP + -0x94) = uVar11;
    *(undefined2 *)(unaff_BP + -0x92) = uVar9;
    lVar14 = func_0x00027a04(uVar3);
    lVar15 = func_0x00027932(0x22b2,-3 - *(uint *)(unaff_BP + -0x94),
                             (-1 - *(int *)(unaff_BP + -0x92)) -
                             (uint)(0xfffd < *(uint *)(unaff_BP + -0x94)),0x16,0);
    lVar14 = ((lVar15 - ((*(int *)0xc0ac - *(int *)0xbefa) + 2)) - lVar14) +
             (long)*(int *)(unaff_BP + -0x68) * -0xc;
    uVar5 = (uint)lVar14;
    uVar16 = FUN_21f2_5978(0x22b2,uVar5 + *(uint *)0xc288,
                           (int)((ulong)lVar14 >> 0x10) + *(int *)0xc28a +
                           (uint)CARRY2(uVar5,*(uint *)0xc288));
    iVar2 = (int)uVar16 + -1;
    iVar8 = (int)((ulong)uVar16 >> 0x10) - (uint)((int)uVar16 == 0);
    *(int *)(unaff_BP + -0x4e) = iVar2;
    *(int *)(unaff_BP + -0x4c) = iVar8;
    FUN_4375_c433(0x22b2,0x6531,*(int *)0x150,*(int *)0x150 >> 0xf,iVar2,iVar8);
    func_0x000298b4(0x22b2);
    FUN_28b3_0e53(0x22b2);
    uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                            unaff_BP + -0x88,0x40,0x2711);
    *(uint *)(unaff_BP + -0x24) = uVar5;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (uVar5 == 0xffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar13 = uVar5 < 0x65;
    uVar12 = true;
    if (uVar5 == 0x65) {
LAB_3ab8_55ce:
      uVar11 = *(undefined2 *)0xa4fa;
      *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
      *(undefined2 *)(unaff_BP + -0x6a) = uVar11;
    }
    else {
      uVar13 = uVar5 < 0x66;
      uVar12 = uVar5 == 0x66;
      if ((bool)uVar12) goto LAB_3ab8_55ce;
    }
    func_0x000297e6(0xad);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar12) {
      FUN_28b3_0d8b(0x22b2);
      FUN_28b3_0e53(0x22b2);
    }
    func_0x000297e6(0x22b2);
    func_0x000298b4(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar13) {
      func_0x000297e6();
      FUN_28b3_0d8b();
      FUN_28b3_1181();
      if ((bool)uVar13 || (bool)uVar12) break;
    }
    uVar3 = 0x22b2;
  } while( true );
  func_0x000297e6();
  func_0x00029d78();
  uVar11 = FUN_28b3_0f51();
  *(undefined2 *)(unaff_BP + -0x84) = uVar11;
  if (*(int *)0xbed2 == 0) {
    uVar11 = *(undefined2 *)(unaff_BP + -0x4a);
    uVar3 = *(undefined2 *)(unaff_BP + -0x48);
  }
  else {
    uVar11 = 0;
    uVar3 = 0;
  }
  *(undefined2 *)(unaff_BP + -0x94) = uVar11;
  *(undefined2 *)(unaff_BP + -0x92) = uVar3;
  uVar16 = func_0x00027a04();
  iVar2 = *(int *)(unaff_BP + -0x84);
  uVar5 = *(uint *)(unaff_BP + -0x68);
  uVar17 = func_0x00027932(0x22b2,uVar5 + iVar2 * 2,
                           ((int)uVar5 >> 0xf) + ((iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0)) +
                           (uint)CARRY2(uVar5,iVar2 * 2));
  uVar11 = *(undefined2 *)(unaff_BP + -0x92);
  uVar3 = *(undefined2 *)(unaff_BP + -0x94);
  *(undefined2 *)(unaff_BP + -0x8c) = (int)uVar17;
  *(undefined2 *)(unaff_BP + -0x8a) = (int)((ulong)uVar17 >> 0x10);
  uVar17 = func_0x00027932(0x22b2,uVar3,uVar11,0xffea,0xffff);
  uVar5 = (uint)uVar17 - *(uint *)(unaff_BP + -0x8c);
  uVar6 = uVar5 - (uint)uVar16;
  uVar7 = uVar6 + *(uint *)0xc288;
  uVar4 = uVar7 - 0x5b;
  iVar2 = ((((((int)((ulong)uVar17 >> 0x10) - *(int *)(unaff_BP + -0x8a)) -
             (uint)((uint)uVar17 < *(uint *)(unaff_BP + -0x8c))) - (int)((ulong)uVar16 >> 0x10)) -
           (uint)(uVar5 < (uint)uVar16)) + *(int *)0xc28a + (uint)CARRY2(uVar6,*(uint *)0xc288)) -
          (uint)(uVar7 < 0x5b);
  *(uint *)(unaff_BP + -0x4e) = uVar4;
  *(int *)(unaff_BP + -0x4c) = iVar2;
  if ((-1 < iVar2) && ((0 < iVar2 || (0x7fff < uVar4)))) {
    *(undefined2 *)(unaff_BP + -0x4e) = 0x7fff;
    *(undefined2 *)(unaff_BP + -0x4c) = 0;
  }
  if ((*(byte *)(unaff_BP + -0x4e) & 1) == 0) {
    piVar1 = (int *)(unaff_BP + -0x4e);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)(unaff_BP + -0x4c) = *(int *)(unaff_BP + -0x4c) - (uint)(iVar2 == 0);
  }
  if (*(int *)0xbed2 == 0) {
    uVar11 = *(undefined2 *)(unaff_BP + -0x7a);
    uVar3 = *(undefined2 *)(unaff_BP + -0x78);
  }
  else {
    uVar11 = *(undefined2 *)0x140;
    uVar3 = *(undefined2 *)0x142;
  }
  *(undefined2 *)(unaff_BP + -0x94) = uVar11;
  *(undefined2 *)(unaff_BP + -0x92) = uVar3;
  if (*(int *)0xbed2 == 0) {
    uVar9 = *(undefined2 *)(unaff_BP + -0x4a);
    uVar10 = *(undefined2 *)(unaff_BP + -0x48);
  }
  else {
    uVar9 = *(undefined2 *)0x13c;
    uVar10 = *(undefined2 *)0x13e;
  }
  FUN_21f2_3454(0x22b2,0xbf48,0x22e,uVar9,uVar10,uVar11,uVar3,*(undefined2 *)(unaff_BP + -0x68),
                *(undefined2 *)(unaff_BP + -0x84),*(undefined2 *)(unaff_BP + -0x4e),
                *(undefined2 *)(unaff_BP + -0x4c));
  FUN_21f2_2d26(0x22b2,0xbf48,0x6538);
  uVar11 = 0x22b2;
  while( true ) {
    uVar3 = 0x1bb4;
    iVar2 = FUN_1def_0904(uVar11,1,0xbf48,unaff_BP + -0x82);
    *(int *)(unaff_BP + -0x24) = iVar2;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (iVar2 == -1) break;
    if (iVar2 == 2) {
      return;
    }
    uVar11 = uVar3;
    if (iVar2 == 1) {
      func_0x0000c3ca();
      if ((*(byte *)0xbe98 & 2) == 0) {
        *(undefined2 *)0xbe96 = 0;
        *(undefined2 *)0xbe94 = 0;
      }
      FUN_4375_bc8d();
      FUN_4375_c050(0x885,*(undefined2 *)(unaff_BP + -0x4e),*(undefined2 *)(unaff_BP + -0x4a),
                    *(undefined2 *)(unaff_BP + -0x48),*(undefined2 *)(unaff_BP + -0x7a),
                    *(undefined2 *)(unaff_BP + -0x78));
      func_0x0000abfa();
      return;
    }
  }
  goto LAB_3ab8_54c9;
}



/* 3ab8:51e6  FUN_3ab8_51e6  73 bytes, 1 callers */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_51e6(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int unaff_BP;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  undefined4 uVar15;
  long lVar16;
  undefined4 uVar17;
  
  uVar11 = 0x3ab8;
  uVar3 = *(undefined2 *)(unaff_BP + -0x4a);
  uVar9 = *(undefined2 *)(unaff_BP + -0x48);
  do {
    lVar14 = func_0x00027932(uVar11,uVar3,uVar9);
    lVar14 = (lVar14 - ((*(int *)0xc0ac - *(int *)0xbefa) + 1)) + (long)*(int *)0x150 * -0x22 +
             (long)*(int *)0x152 * -0xc;
    uVar5 = (uint)lVar14;
    uVar6 = uVar5 + *(uint *)0xc288;
    uVar15 = FUN_21f2_5978(0x22b2,uVar6 - 0x72,
                           ((int)((ulong)lVar14 >> 0x10) + *(int *)0xc28a +
                           (uint)CARRY2(uVar5,*(uint *)0xc288)) - (uint)(uVar6 < 0x72));
    iVar2 = (int)uVar15 + -1;
    iVar8 = (int)((ulong)uVar15 >> 0x10) - (uint)((int)uVar15 == 0);
    *(int *)(unaff_BP + -0x4e) = iVar2;
    *(int *)(unaff_BP + -0x4c) = iVar8;
    FUN_3ab8_5003(0x6523,*(undefined2 *)0x14c,*(undefined2 *)0x14e,iVar2,iVar8);
    uVar11 = 0xad;
    uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                            unaff_BP + -0x88,0x40,0x2711);
    *(uint *)(unaff_BP + -0x24) = uVar5;
    if (*(int *)0x158 != 0) {
      FUN_2bb4_4822();
      return;
    }
    if (uVar5 == 0xffff) {
      if (*(int *)0xbed2 != 0) {
        FUN_2bb4_4822();
        return;
      }
      uVar3 = *(undefined2 *)0xa4f8;
      uVar9 = *(undefined2 *)0xa4fa;
      *(undefined2 *)(unaff_BP + -0x6c) = uVar3;
      *(undefined2 *)(unaff_BP + -0x6a) = uVar9;
      *(undefined2 *)(unaff_BP + -0x72) = uVar3;
      *(undefined2 *)(unaff_BP + -0x70) = uVar9;
      if (*(int *)0xbed2 == 0) {
        lVar14 = func_0x00027a04();
        uVar5 = *(uint *)0x152;
        lVar16 = func_0x00027932(0x22b2,-0xd - uVar5,
                                 (-1 - ((int)uVar5 >> 0xf)) - (uint)(0xfff3 < uVar5));
        lVar14 = ((lVar16 - ((*(int *)0xc0ac - *(int *)0xbefa) + 1)) + (long)*(int *)0x150 * -0x22)
                 - lVar14;
        uVar5 = (uint)lVar14;
        uVar15 = FUN_21f2_5978(0x22b2,uVar5 + *(uint *)0xc288,
                               (int)((ulong)lVar14 >> 0x10) + *(int *)0xc28a +
                               (uint)CARRY2(uVar5,*(uint *)0xc288));
        iVar2 = (int)uVar15 + -1;
        iVar8 = (int)((ulong)uVar15 >> 0x10) - (uint)((int)uVar15 == 0);
        *(int *)(unaff_BP + -0x4e) = iVar2;
        *(int *)(unaff_BP + -0x4c) = iVar8;
        FUN_3ab8_5003(0x651c,*(undefined2 *)0x148,*(undefined2 *)0x14a,iVar2,iVar8);
        uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                                unaff_BP + -0x88,0x40,0x2711);
        *(uint *)(unaff_BP + -0x24) = uVar5;
        if (*(int *)0x158 != 0) {
          FUN_2bb4_4822();
          return;
        }
        if (uVar5 == 0xffff) {
          FUN_2bb4_4822();
          return;
        }
        uVar12 = uVar5 < 0x65;
        uVar13 = true;
        if (uVar5 == 0x65) {
LAB_3ab8_5145:
          uVar3 = *(undefined2 *)0xa4fa;
          *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
          *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
        }
        else {
          uVar12 = uVar5 < 0x66;
          uVar13 = uVar5 == 0x66;
          if ((bool)uVar13) goto LAB_3ab8_5145;
        }
        func_0x000297e6(0xad);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar13) {
          func_0x000298b4(0x22b2);
          FUN_28b3_0e53(0x22b2);
        }
        func_0x000297e6(0x22b2);
        func_0x000298b4(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12) {
LAB_3ab8_51aa:
          FUN_3ab8_507c();
          return;
        }
        func_0x000297e6(0x22b2);
        func_0x000298b4(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar12 && !(bool)uVar13) goto LAB_3ab8_51aa;
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        uVar11 = 0x22b2;
        uVar15 = FUN_28b3_0f51(0x22b2);
      }
      else {
        uVar15 = CONCAT22(*(undefined2 *)0x13e,*(undefined2 *)0x13c);
      }
      *(undefined2 *)(unaff_BP + -0x4a) = (int)uVar15;
      *(undefined2 *)(unaff_BP + -0x48) = (int)((ulong)uVar15 >> 0x10);
      while( true ) {
        uVar3 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
        if (*(int *)0xbed2 == 0) break;
        uVar15 = CONCAT22(*(undefined2 *)0x142,*(undefined2 *)0x140);
LAB_3ab8_532e:
        *(undefined2 *)(unaff_BP + -0x7a) = (int)uVar15;
        *(undefined2 *)(unaff_BP + -0x78) = (int)((ulong)uVar15 >> 0x10);
        uVar3 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
        if (*(int *)0xbed2 == 0) {
          uVar3 = *(undefined2 *)(unaff_BP + -0x4a);
          uVar9 = *(undefined2 *)(unaff_BP + -0x48);
        }
        else {
          uVar3 = 0;
          uVar9 = 0;
        }
        *(undefined2 *)(unaff_BP + -0x8c) = uVar3;
        *(undefined2 *)(unaff_BP + -0x8a) = uVar9;
        uVar15 = func_0x00027932(uVar11,*(undefined2 *)(unaff_BP + -0x8c),
                                 *(undefined2 *)(unaff_BP + -0x8a));
        *(undefined2 *)(unaff_BP + -0x94) = (int)uVar15;
        *(undefined2 *)(unaff_BP + -0x92) = (int)((ulong)uVar15 >> 0x10);
        lVar14 = func_0x00027a04(0x22b2);
        lVar14 = ((long)*(int *)0x150 * -0x22 - lVar14) -
                 (long)((*(int *)0xc0ac - *(int *)0xbefa) + 1);
        uVar5 = (uint)lVar14;
        uVar6 = uVar5 - *(uint *)(unaff_BP + -0x94);
        uVar7 = uVar6 + *(uint *)0xc288;
        uVar15 = FUN_21f2_5978(0x22b2,uVar7 - 0x7a,
                               ((((int)((ulong)lVar14 >> 0x10) - *(int *)(unaff_BP + -0x92)) -
                                (uint)(uVar5 < *(uint *)(unaff_BP + -0x94))) + *(int *)0xc28a +
                               (uint)CARRY2(uVar6,*(uint *)0xc288)) - (uint)(uVar7 < 0x7a));
        iVar2 = (int)uVar15 + -1;
        iVar8 = (int)((ulong)uVar15 >> 0x10) - (uint)((int)uVar15 == 0);
        *(int *)(unaff_BP + -0x4e) = iVar2;
        *(int *)(unaff_BP + -0x4c) = iVar8;
        FUN_3ab8_5003(0x652a,*(int *)0x152,*(int *)0x152 >> 0xf,iVar2,iVar8);
        func_0x000298b4(0x22b2);
        FUN_28b3_0e53(0x22b2);
        uVar11 = 0xad;
        uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                                unaff_BP + -0x88,0x40,0x2711);
        *(uint *)(unaff_BP + -0x24) = uVar5;
        if (*(int *)0x158 != 0) {
          FUN_2bb4_4822();
          return;
        }
        if (uVar5 != 0xffff) {
          uVar12 = uVar5 < 0x65;
          uVar13 = true;
          if (uVar5 == 0x65) {
LAB_3ab8_544c:
            uVar3 = *(undefined2 *)0xa4fa;
            *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
            *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
          }
          else {
            uVar12 = uVar5 < 0x66;
            uVar13 = uVar5 == 0x66;
            if ((bool)uVar13) goto LAB_3ab8_544c;
          }
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_1181();
          if ((bool)uVar13) {
            FUN_28b3_0d8b();
            FUN_28b3_0e53();
          }
          func_0x000297e6();
          func_0x000298b4();
          FUN_28b3_1181();
          if (!(bool)uVar12) {
            func_0x000297e6();
            FUN_28b3_0d8b();
            FUN_28b3_1181();
            if ((bool)uVar12 || (bool)uVar13) {
              func_0x000297e6();
              func_0x00029d78();
              uVar3 = FUN_28b3_0f51();
              *(undefined2 *)(unaff_BP + -0x68) = uVar3;
              goto LAB_3ab8_54c9;
            }
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(int *)0xbed2 != 0) {
          FUN_2bb4_4822();
          return;
        }
      }
    }
    else {
      uVar12 = uVar5 < 0x65;
      uVar13 = true;
      if (uVar5 == 0x65) {
LAB_3ab8_529b:
        uVar3 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
      }
      else {
        uVar12 = uVar5 < 0x66;
        uVar13 = uVar5 == 0x66;
        if ((bool)uVar13) goto LAB_3ab8_529b;
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar13) {
        func_0x000298b4();
        FUN_28b3_0e53();
      }
      func_0x000297e6();
      func_0x000298b4();
      uVar11 = 0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar12) {
        func_0x000297e6();
        func_0x000298b4();
        uVar11 = 0x22b2;
        FUN_28b3_1181();
        if ((bool)uVar12 || (bool)uVar13) {
          func_0x000297e6();
          func_0x00029d78();
          uVar11 = 0x22b2;
          uVar15 = FUN_28b3_0f51();
          goto LAB_3ab8_532e;
        }
      }
    }
    if (*(int *)0xbed2 == 0) {
      FUN_3ab8_51e6();
      return;
    }
    uVar3 = 0;
    uVar9 = 0;
  } while( true );
LAB_3ab8_54c9:
  uVar3 = *(undefined2 *)0xa4fa;
  *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
  *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
  do {
    do {
      if (*(int *)0xbed2 == 0) {
        uVar3 = *(undefined2 *)(unaff_BP + -0x4a);
        uVar9 = *(undefined2 *)(unaff_BP + -0x48);
      }
      else {
        uVar3 = 0;
        uVar9 = 0;
      }
      *(undefined2 *)(unaff_BP + -0x94) = uVar3;
      *(undefined2 *)(unaff_BP + -0x92) = uVar9;
      lVar14 = func_0x00027a04();
      lVar16 = func_0x00027932(0x22b2,-3 - *(uint *)(unaff_BP + -0x94),
                               (-1 - *(int *)(unaff_BP + -0x92)) -
                               (uint)(0xfffd < *(uint *)(unaff_BP + -0x94)));
      lVar14 = ((lVar16 - ((*(int *)0xc0ac - *(int *)0xbefa) + 2)) - lVar14) +
               (long)*(int *)(unaff_BP + -0x68) * -0xc;
      uVar5 = (uint)lVar14;
      uVar15 = FUN_21f2_5978(0x22b2,uVar5 + *(uint *)0xc288,
                             (int)((ulong)lVar14 >> 0x10) + *(int *)0xc28a +
                             (uint)CARRY2(uVar5,*(uint *)0xc288));
      iVar2 = (int)uVar15 + -1;
      iVar8 = (int)((ulong)uVar15 >> 0x10) - (uint)((int)uVar15 == 0);
      *(int *)(unaff_BP + -0x4e) = iVar2;
      *(int *)(unaff_BP + -0x4c) = iVar8;
      FUN_4375_c433(0x22b2,0x6531,*(int *)0x150,*(int *)0x150 >> 0xf,iVar2,iVar8);
      func_0x000298b4(0x22b2);
      FUN_28b3_0e53(0x22b2);
      uVar5 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                              unaff_BP + -0x88,0x40,0x2711);
      *(uint *)(unaff_BP + -0x24) = uVar5;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (uVar5 == 0xffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar12 = uVar5 < 0x65;
      uVar13 = true;
      if (uVar5 == 0x65) {
LAB_3ab8_55ce:
        uVar3 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar3;
      }
      else {
        uVar12 = uVar5 < 0x66;
        uVar13 = uVar5 == 0x66;
        if ((bool)uVar13) goto LAB_3ab8_55ce;
      }
      func_0x000297e6(0xad);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar13) {
        FUN_28b3_0d8b(0x22b2);
        FUN_28b3_0e53(0x22b2);
      }
      func_0x000297e6(0x22b2);
      func_0x000298b4(0x22b2);
      FUN_28b3_1181(0x22b2);
    } while ((bool)uVar12);
    func_0x000297e6();
    FUN_28b3_0d8b();
    FUN_28b3_1181();
  } while (!(bool)uVar12 && !(bool)uVar13);
  func_0x000297e6();
  func_0x00029d78();
  uVar3 = FUN_28b3_0f51();
  *(undefined2 *)(unaff_BP + -0x84) = uVar3;
  if (*(int *)0xbed2 == 0) {
    uVar3 = *(undefined2 *)(unaff_BP + -0x4a);
    uVar9 = *(undefined2 *)(unaff_BP + -0x48);
  }
  else {
    uVar3 = 0;
    uVar9 = 0;
  }
  *(undefined2 *)(unaff_BP + -0x94) = uVar3;
  *(undefined2 *)(unaff_BP + -0x92) = uVar9;
  uVar15 = func_0x00027a04();
  uVar17 = func_0x00027932(0x22b2);
  uVar3 = *(undefined2 *)(unaff_BP + -0x92);
  uVar9 = *(undefined2 *)(unaff_BP + -0x94);
  *(undefined2 *)(unaff_BP + -0x8c) = (int)uVar17;
  *(undefined2 *)(unaff_BP + -0x8a) = (int)((ulong)uVar17 >> 0x10);
  uVar17 = func_0x00027932(0x22b2,uVar9,uVar3,0xffea,0xffff);
  uVar5 = (uint)uVar17 - *(uint *)(unaff_BP + -0x8c);
  uVar6 = uVar5 - (uint)uVar15;
  uVar7 = uVar6 + *(uint *)0xc288;
  uVar4 = uVar7 - 0x5b;
  iVar2 = ((((((int)((ulong)uVar17 >> 0x10) - *(int *)(unaff_BP + -0x8a)) -
             (uint)((uint)uVar17 < *(uint *)(unaff_BP + -0x8c))) - (int)((ulong)uVar15 >> 0x10)) -
           (uint)(uVar5 < (uint)uVar15)) + *(int *)0xc28a + (uint)CARRY2(uVar6,*(uint *)0xc288)) -
          (uint)(uVar7 < 0x5b);
  *(uint *)(unaff_BP + -0x4e) = uVar4;
  *(int *)(unaff_BP + -0x4c) = iVar2;
  if ((-1 < iVar2) && ((0 < iVar2 || (0x7fff < uVar4)))) {
    *(undefined2 *)(unaff_BP + -0x4e) = 0x7fff;
    *(undefined2 *)(unaff_BP + -0x4c) = 0;
  }
  if ((*(byte *)(unaff_BP + -0x4e) & 1) == 0) {
    piVar1 = (int *)(unaff_BP + -0x4e);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)(unaff_BP + -0x4c) = *(int *)(unaff_BP + -0x4c) - (uint)(iVar2 == 0);
  }
  if (*(int *)0xbed2 == 0) {
    uVar3 = *(undefined2 *)(unaff_BP + -0x7a);
    uVar9 = *(undefined2 *)(unaff_BP + -0x78);
  }
  else {
    uVar3 = *(undefined2 *)0x140;
    uVar9 = *(undefined2 *)0x142;
  }
  *(undefined2 *)(unaff_BP + -0x94) = uVar3;
  *(undefined2 *)(unaff_BP + -0x92) = uVar9;
  if (*(int *)0xbed2 == 0) {
    uVar11 = *(undefined2 *)(unaff_BP + -0x4a);
    uVar10 = *(undefined2 *)(unaff_BP + -0x48);
  }
  else {
    uVar11 = *(undefined2 *)0x13c;
    uVar10 = *(undefined2 *)0x13e;
  }
  FUN_21f2_3454(0x22b2,0xbf48,0x22e,uVar11,uVar10,uVar3,uVar9,*(undefined2 *)(unaff_BP + -0x68),
                *(undefined2 *)(unaff_BP + -0x84),*(undefined2 *)(unaff_BP + -0x4e),
                *(undefined2 *)(unaff_BP + -0x4c));
  FUN_21f2_2d26(0x22b2,0xbf48,0x6538);
  uVar3 = 0x22b2;
  while( true ) {
    iVar2 = FUN_1def_0904(uVar3,1);
    *(int *)(unaff_BP + -0x24) = iVar2;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (iVar2 == -1) break;
    if (iVar2 == 2) {
      return;
    }
    uVar3 = 0x1bb4;
    if (iVar2 == 1) {
      func_0x0000c3ca();
      if ((*(byte *)0xbe98 & 2) == 0) {
        *(undefined2 *)0xbe96 = 0;
        *(undefined2 *)0xbe94 = 0;
      }
      FUN_4375_bc8d();
      FUN_4375_c050(0x885,*(undefined2 *)(unaff_BP + -0x4e),*(undefined2 *)(unaff_BP + -0x4a),
                    *(undefined2 *)(unaff_BP + -0x48));
      func_0x0000abfa();
      return;
    }
  }
  goto LAB_3ab8_54c9;
}



/* 3ab8:522f  FUN_3ab8_522f  1465 bytes, 0 callers */

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far FUN_3ab8_522f(void)

{
  int *piVar1;
  undefined2 in_AX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 in_DX;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int unaff_BP;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  
  uVar14 = CONCAT22(in_DX,in_AX);
  uVar10 = 0x3ab8;
  do {
    iVar2 = (int)uVar14 + -1;
    iVar7 = (int)((ulong)uVar14 >> 0x10) - (uint)((int)uVar14 == 0);
    *(int *)(unaff_BP + -0x4e) = iVar2;
    *(int *)(unaff_BP + -0x4c) = iVar7;
    FUN_3ab8_5003(0x6523,*(undefined2 *)0x14c,*(undefined2 *)0x14e,iVar2,iVar7);
    uVar11 = 0xad;
    uVar3 = func_0x000021a4(uVar10,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                            unaff_BP + -0x88,0x40,0x2711);
    *(uint *)(unaff_BP + -0x24) = uVar3;
    if (*(int *)0x158 != 0) {
      FUN_2bb4_4822();
      return;
    }
    if (uVar3 == 0xffff) {
      if (*(int *)0xbed2 != 0) {
        FUN_2bb4_4822();
        return;
      }
      uVar10 = *(undefined2 *)0xa4f8;
      uVar8 = *(undefined2 *)0xa4fa;
      *(undefined2 *)(unaff_BP + -0x6c) = uVar10;
      *(undefined2 *)(unaff_BP + -0x6a) = uVar8;
      *(undefined2 *)(unaff_BP + -0x72) = uVar10;
      *(undefined2 *)(unaff_BP + -0x70) = uVar8;
      if (*(int *)0xbed2 == 0) {
        lVar15 = func_0x00027a04(0xad,0x16,0);
        uVar3 = *(uint *)0x152;
        lVar16 = func_0x00027932(0x22b2,-0xd - uVar3,
                                 (-1 - ((int)uVar3 >> 0xf)) - (uint)(0xfff3 < uVar3),0xc,0);
        lVar15 = ((lVar16 - ((*(int *)0xc0ac - *(int *)0xbefa) + 1)) + (long)*(int *)0x150 * -0x22)
                 - lVar15;
        uVar3 = (uint)lVar15;
        uVar14 = FUN_21f2_5978(0x22b2,uVar3 + *(uint *)0xc288,
                               (int)((ulong)lVar15 >> 0x10) + *(int *)0xc28a +
                               (uint)CARRY2(uVar3,*(uint *)0xc288));
        iVar2 = (int)uVar14 + -1;
        iVar7 = (int)((ulong)uVar14 >> 0x10) - (uint)((int)uVar14 == 0);
        *(int *)(unaff_BP + -0x4e) = iVar2;
        *(int *)(unaff_BP + -0x4c) = iVar7;
        FUN_3ab8_5003(0x651c,*(undefined2 *)0x148,*(undefined2 *)0x14a,iVar2,iVar7);
        uVar3 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                                unaff_BP + -0x88,0x40,0x2711);
        *(uint *)(unaff_BP + -0x24) = uVar3;
        if (*(int *)0x158 != 0) {
          FUN_2bb4_4822();
          return;
        }
        if (uVar3 == 0xffff) {
          FUN_2bb4_4822();
          return;
        }
        uVar12 = uVar3 < 0x65;
        uVar13 = true;
        if (uVar3 == 0x65) {
LAB_3ab8_5145:
          uVar10 = *(undefined2 *)0xa4fa;
          *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
          *(undefined2 *)(unaff_BP + -0x6a) = uVar10;
        }
        else {
          uVar12 = uVar3 < 0x66;
          uVar13 = uVar3 == 0x66;
          if ((bool)uVar13) goto LAB_3ab8_5145;
        }
        func_0x000297e6(0xad);
        func_0x000297e6(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar13) {
          func_0x000298b4(0x22b2);
          FUN_28b3_0e53(0x22b2);
        }
        func_0x000297e6(0x22b2);
        func_0x000298b4(0x22b2);
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12) {
LAB_3ab8_51aa:
          FUN_3ab8_507c();
          return;
        }
        func_0x000297e6(0x22b2);
        func_0x000298b4(0x22b2);
        FUN_28b3_1181(0x22b2);
        if (!(bool)uVar12 && !(bool)uVar13) goto LAB_3ab8_51aa;
        func_0x000297e6(0x22b2);
        func_0x00029d78(0x22b2);
        uVar11 = 0x22b2;
        uVar14 = FUN_28b3_0f51(0x22b2);
      }
      else {
        uVar14 = CONCAT22(*(undefined2 *)0x13e,*(undefined2 *)0x13c);
      }
      *(undefined2 *)(unaff_BP + -0x4a) = (int)uVar14;
      *(undefined2 *)(unaff_BP + -0x48) = (int)((ulong)uVar14 >> 0x10);
      while( true ) {
        uVar10 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar10;
        if (*(int *)0xbed2 == 0) break;
        uVar14 = CONCAT22(*(undefined2 *)0x142,*(undefined2 *)0x140);
LAB_3ab8_532e:
        *(undefined2 *)(unaff_BP + -0x7a) = (int)uVar14;
        *(undefined2 *)(unaff_BP + -0x78) = (int)((ulong)uVar14 >> 0x10);
        uVar10 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar10;
        if (*(int *)0xbed2 == 0) {
          uVar10 = *(undefined2 *)(unaff_BP + -0x4a);
          uVar8 = *(undefined2 *)(unaff_BP + -0x48);
        }
        else {
          uVar10 = 0;
          uVar8 = 0;
        }
        *(undefined2 *)(unaff_BP + -0x8c) = uVar10;
        *(undefined2 *)(unaff_BP + -0x8a) = uVar8;
        uVar14 = func_0x00027932(uVar11,*(undefined2 *)(unaff_BP + -0x8c),
                                 *(undefined2 *)(unaff_BP + -0x8a),0x16,0,0xc,0);
        *(undefined2 *)(unaff_BP + -0x94) = (int)uVar14;
        *(undefined2 *)(unaff_BP + -0x92) = (int)((ulong)uVar14 >> 0x10);
        lVar15 = func_0x00027a04(0x22b2);
        lVar15 = ((long)*(int *)0x150 * -0x22 - lVar15) -
                 (long)((*(int *)0xc0ac - *(int *)0xbefa) + 1);
        uVar3 = (uint)lVar15;
        uVar5 = uVar3 - *(uint *)(unaff_BP + -0x94);
        uVar6 = uVar5 + *(uint *)0xc288;
        uVar14 = FUN_21f2_5978(0x22b2,uVar6 - 0x7a,
                               ((((int)((ulong)lVar15 >> 0x10) - *(int *)(unaff_BP + -0x92)) -
                                (uint)(uVar3 < *(uint *)(unaff_BP + -0x94))) + *(int *)0xc28a +
                               (uint)CARRY2(uVar5,*(uint *)0xc288)) - (uint)(uVar6 < 0x7a));
        iVar2 = (int)uVar14 + -1;
        iVar7 = (int)((ulong)uVar14 >> 0x10) - (uint)((int)uVar14 == 0);
        *(int *)(unaff_BP + -0x4e) = iVar2;
        *(int *)(unaff_BP + -0x4c) = iVar7;
        FUN_3ab8_5003(0x652a,*(int *)0x152,*(int *)0x152 >> 0xf,iVar2,iVar7);
        func_0x000298b4(0x22b2);
        FUN_28b3_0e53(0x22b2);
        uVar11 = 0xad;
        uVar3 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                                unaff_BP + -0x88,0x40,0x2711);
        *(uint *)(unaff_BP + -0x24) = uVar3;
        if (*(int *)0x158 != 0) {
          FUN_2bb4_4822();
          return;
        }
        if (uVar3 != 0xffff) {
          uVar12 = uVar3 < 0x65;
          uVar13 = true;
          if (uVar3 == 0x65) {
LAB_3ab8_544c:
            uVar10 = *(undefined2 *)0xa4fa;
            *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
            *(undefined2 *)(unaff_BP + -0x6a) = uVar10;
          }
          else {
            uVar12 = uVar3 < 0x66;
            uVar13 = uVar3 == 0x66;
            if ((bool)uVar13) goto LAB_3ab8_544c;
          }
          func_0x000297e6(0xad);
          func_0x000297e6(0x22b2);
          FUN_28b3_1181(0x22b2);
          if ((bool)uVar13) {
            FUN_28b3_0d8b(0x22b2);
            FUN_28b3_0e53(0x22b2);
          }
          func_0x000297e6(0x22b2);
          func_0x000298b4(0x22b2);
          FUN_28b3_1181(0x22b2);
          if (!(bool)uVar12) {
            func_0x000297e6(0x22b2);
            FUN_28b3_0d8b(0x22b2);
            FUN_28b3_1181(0x22b2);
            if ((bool)uVar12 || (bool)uVar13) {
              func_0x000297e6(0x22b2);
              func_0x00029d78(0x22b2);
              uVar11 = 0x22b2;
              uVar10 = FUN_28b3_0f51(0x22b2);
              *(undefined2 *)(unaff_BP + -0x68) = uVar10;
              goto LAB_3ab8_54c9;
            }
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(int *)0xbed2 != 0) {
          FUN_2bb4_4822();
          return;
        }
      }
    }
    else {
      uVar12 = uVar3 < 0x65;
      uVar13 = true;
      if (uVar3 == 0x65) {
LAB_3ab8_529b:
        uVar10 = *(undefined2 *)0xa4fa;
        *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
        *(undefined2 *)(unaff_BP + -0x6a) = uVar10;
      }
      else {
        uVar12 = uVar3 < 0x66;
        uVar13 = uVar3 == 0x66;
        if ((bool)uVar13) goto LAB_3ab8_529b;
      }
      func_0x000297e6(0xad);
      func_0x000297e6(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar13) {
        func_0x000298b4(0x22b2);
        FUN_28b3_0e53(0x22b2);
      }
      func_0x000297e6(0x22b2);
      func_0x000298b4(0x22b2);
      uVar11 = 0x22b2;
      FUN_28b3_1181(0x22b2);
      if (!(bool)uVar12) {
        func_0x000297e6(0x22b2);
        func_0x000298b4(0x22b2);
        uVar11 = 0x22b2;
        FUN_28b3_1181(0x22b2);
        if ((bool)uVar12 || (bool)uVar13) {
          func_0x000297e6(0x22b2);
          func_0x00029d78(0x22b2);
          uVar11 = 0x22b2;
          uVar14 = FUN_28b3_0f51(0x22b2);
          goto LAB_3ab8_532e;
        }
      }
    }
    if (*(int *)0xbed2 == 0) {
      FUN_3ab8_51e6();
      return;
    }
    func_0x00027932(uVar11,0,0,0xffea,0xffff,0x20,0);
    uVar10 = 0x22b2;
    uVar14 = FUN_21f2_5978(0x22b2);
  } while( true );
LAB_3ab8_54c9:
  uVar10 = *(undefined2 *)0xa4fa;
  *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
  *(undefined2 *)(unaff_BP + -0x6a) = uVar10;
  do {
    if (*(int *)0xbed2 == 0) {
      uVar10 = *(undefined2 *)(unaff_BP + -0x4a);
      uVar8 = *(undefined2 *)(unaff_BP + -0x48);
    }
    else {
      uVar10 = 0;
      uVar8 = 0;
    }
    *(undefined2 *)(unaff_BP + -0x94) = uVar10;
    *(undefined2 *)(unaff_BP + -0x92) = uVar8;
    lVar15 = func_0x00027a04(uVar11,0x22,0);
    lVar16 = func_0x00027932(0x22b2,-3 - *(uint *)(unaff_BP + -0x94),
                             (-1 - *(int *)(unaff_BP + -0x92)) -
                             (uint)(0xfffd < *(uint *)(unaff_BP + -0x94)),0x16,0);
    lVar15 = ((lVar16 - ((*(int *)0xc0ac - *(int *)0xbefa) + 2)) - lVar15) +
             (long)*(int *)(unaff_BP + -0x68) * -0xc;
    uVar3 = (uint)lVar15;
    uVar14 = FUN_21f2_5978(0x22b2,uVar3 + *(uint *)0xc288,
                           (int)((ulong)lVar15 >> 0x10) + *(int *)0xc28a +
                           (uint)CARRY2(uVar3,*(uint *)0xc288));
    iVar2 = (int)uVar14 + -1;
    iVar7 = (int)((ulong)uVar14 >> 0x10) - (uint)((int)uVar14 == 0);
    *(int *)(unaff_BP + -0x4e) = iVar2;
    *(int *)(unaff_BP + -0x4c) = iVar7;
    FUN_4375_c433(0x22b2,0x6531,*(int *)0x150,*(int *)0x150 >> 0xf,iVar2,iVar7);
    func_0x000298b4(0x22b2);
    FUN_28b3_0e53(0x22b2);
    uVar3 = func_0x000021a4(0x22b2,unaff_BP + -0x6c,unaff_BP + -0x72,unaff_BP + -0x82,
                            unaff_BP + -0x88,0x40,0x2711);
    *(uint *)(unaff_BP + -0x24) = uVar3;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (uVar3 == 0xffff) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar12 = uVar3 < 0x65;
    uVar13 = true;
    if (uVar3 == 0x65) {
LAB_3ab8_55ce:
      uVar10 = *(undefined2 *)0xa4fa;
      *(undefined2 *)(unaff_BP + -0x6c) = *(undefined2 *)0xa4f8;
      *(undefined2 *)(unaff_BP + -0x6a) = uVar10;
    }
    else {
      uVar12 = uVar3 < 0x66;
      uVar13 = uVar3 == 0x66;
      if ((bool)uVar13) goto LAB_3ab8_55ce;
    }
    func_0x000297e6(0xad);
    func_0x000297e6(0x22b2);
    FUN_28b3_1181(0x22b2);
    if ((bool)uVar13) {
      FUN_28b3_0d8b(0x22b2);
      FUN_28b3_0e53(0x22b2);
    }
    func_0x000297e6(0x22b2);
    func_0x000298b4(0x22b2);
    FUN_28b3_1181(0x22b2);
    if (!(bool)uVar12) {
      func_0x000297e6(0x22b2);
      FUN_28b3_0d8b(0x22b2);
      FUN_28b3_1181(0x22b2);
      if ((bool)uVar12 || (bool)uVar13) break;
    }
    uVar11 = 0x22b2;
  } while( true );
  func_0x000297e6(0x22b2);
  func_0x00029d78(0x22b2);
  uVar10 = FUN_28b3_0f51(0x22b2);
  *(undefined2 *)(unaff_BP + -0x84) = uVar10;
  if (*(int *)0xbed2 == 0) {
    uVar10 = *(undefined2 *)(unaff_BP + -0x4a);
    uVar11 = *(undefined2 *)(unaff_BP + -0x48);
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
  }
  *(undefined2 *)(unaff_BP + -0x94) = uVar10;
  *(undefined2 *)(unaff_BP + -0x92) = uVar11;
  uVar14 = func_0x00027a04(0x22b2);
  iVar2 = *(int *)(unaff_BP + -0x84);
  uVar3 = *(uint *)(unaff_BP + -0x68);
  uVar17 = func_0x00027932(0x22b2,uVar3 + iVar2 * 2,
                           ((int)uVar3 >> 0xf) + ((iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0)) +
                           (uint)CARRY2(uVar3,iVar2 * 2),0xc,0);
  uVar10 = *(undefined2 *)(unaff_BP + -0x92);
  uVar11 = *(undefined2 *)(unaff_BP + -0x94);
  *(undefined2 *)(unaff_BP + -0x8c) = (int)uVar17;
  *(undefined2 *)(unaff_BP + -0x8a) = (int)((ulong)uVar17 >> 0x10);
  uVar17 = func_0x00027932(0x22b2,uVar11,uVar10,0xffea,0xffff);
  uVar3 = (uint)uVar17 - *(uint *)(unaff_BP + -0x8c);
  uVar5 = uVar3 - (uint)uVar14;
  uVar6 = uVar5 + *(uint *)0xc288;
  uVar4 = uVar6 - 0x5b;
  iVar2 = ((((((int)((ulong)uVar17 >> 0x10) - *(int *)(unaff_BP + -0x8a)) -
             (uint)((uint)uVar17 < *(uint *)(unaff_BP + -0x8c))) - (int)((ulong)uVar14 >> 0x10)) -
           (uint)(uVar3 < (uint)uVar14)) + *(int *)0xc28a + (uint)CARRY2(uVar5,*(uint *)0xc288)) -
          (uint)(uVar6 < 0x5b);
  *(uint *)(unaff_BP + -0x4e) = uVar4;
  *(int *)(unaff_BP + -0x4c) = iVar2;
  if ((-1 < iVar2) && ((0 < iVar2 || (0x7fff < uVar4)))) {
    *(undefined2 *)(unaff_BP + -0x4e) = 0x7fff;
    *(undefined2 *)(unaff_BP + -0x4c) = 0;
  }
  if ((*(byte *)(unaff_BP + -0x4e) & 1) == 0) {
    piVar1 = (int *)(unaff_BP + -0x4e);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)(unaff_BP + -0x4c) = *(int *)(unaff_BP + -0x4c) - (uint)(iVar2 == 0);
  }
  if (*(int *)0xbed2 == 0) {
    uVar10 = *(undefined2 *)(unaff_BP + -0x7a);
    uVar11 = *(undefined2 *)(unaff_BP + -0x78);
  }
  else {
    uVar10 = *(undefined2 *)0x140;
    uVar11 = *(undefined2 *)0x142;
  }
  *(undefined2 *)(unaff_BP + -0x94) = uVar10;
  *(undefined2 *)(unaff_BP + -0x92) = uVar11;
  if (*(int *)0xbed2 == 0) {
    uVar8 = *(undefined2 *)(unaff_BP + -0x4a);
    uVar9 = *(undefined2 *)(unaff_BP + -0x48);
  }
  else {
    uVar8 = *(undefined2 *)0x13c;
    uVar9 = *(undefined2 *)0x13e;
  }
  FUN_21f2_3454(0x22b2,0xbf48,0x22e,uVar8,uVar9,uVar10,uVar11,*(undefined2 *)(unaff_BP + -0x68),
                *(undefined2 *)(unaff_BP + -0x84),*(undefined2 *)(unaff_BP + -0x4e),
                *(undefined2 *)(unaff_BP + -0x4c));
  FUN_21f2_2d26(0x22b2,0xbf48,0x6538);
  uVar10 = 0x22b2;
  while( true ) {
    uVar11 = 0x1bb4;
    iVar2 = FUN_1def_0904(uVar10,1,0xbf48,unaff_BP + -0x82,unaff_BP + -0x88,unaff_BP + -0x6e);
    *(int *)(unaff_BP + -0x24) = iVar2;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (iVar2 == -1) break;
    if (iVar2 == 2) {
      return;
    }
    uVar10 = uVar11;
    if (iVar2 == 1) {
      func_0x0000c3ca(0x1bb4);
      if ((*(byte *)0xbe98 & 2) == 0) {
        *(undefined2 *)0xbe96 = 0;
        *(undefined2 *)0xbe94 = 0;
      }
      FUN_4375_bc8d(0x885);
      FUN_4375_c050(0x885,*(undefined2 *)(unaff_BP + -0x4e),*(undefined2 *)(unaff_BP + -0x4a),
                    *(undefined2 *)(unaff_BP + -0x48),*(undefined2 *)(unaff_BP + -0x7a),
                    *(undefined2 *)(unaff_BP + -0x78),*(undefined2 *)(unaff_BP + -0x68),
                    *(undefined2 *)(unaff_BP + -0x84));
      func_0x0000abfa(0x885);
      return;
    }
  }
  goto LAB_3ab8_54c9;
}



/* 3ab8:57e8  FUN_3ab8_57e8  935 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x000404af) */
/* WARNING: Removing unreachable block (ram,0x000404b5) */
/* WARNING: Removing unreachable block (ram,0x000404cf) */
/* WARNING: Removing unreachable block (ram,0x000404e6) */
/* WARNING: Removing unreachable block (ram,0x000404cc) */

void __cdecl16far FUN_3ab8_57e8(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 *puVar10;
  uint local_42;
  int local_40;
  int local_3c;
  int local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  byte local_1e;
  byte local_1d;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  uVar6 = 0x22b2;
  FUN_21f2_0ebc();
  *(undefined2 *)0xc22 = 1;
  local_40 = 0;
  local_42 = 0;
  local_3a = *(int *)0x14a;
  for (local_3c = *(int *)0x148; (-1 < local_3a && ((0 < local_3a || (local_3c != 0))));
      local_3c = local_3c + -1) {
    local_e = 0x3b9;
    local_c = uVar6;
    puVar10 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar10;
    puVar5 = &local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    FUN_28b3_0d04();
    func_0x000297e6();
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0x3eb;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0x3f0;
    func_0x00029f30();
    uVar8 = (undefined1 *)0xfff7 < &local_e;
    uVar9 = &stack0x0000 == (undefined1 *)0x6;
    FUN_28b3_0d04();
    FUN_28b3_1181();
    if ((bool)uVar8 || (bool)uVar9) {
      FUN_28b3_0d04();
      func_0x000297e6();
      func_0x00029d78();
      local_10 = 0x22b2;
      local_12 = 0x424;
      func_0x000299d1();
      local_10 = 0x22b2;
      local_12 = 0x429;
      func_0x00029f30();
      uVar8 = (undefined1 *)0xfff7 < &local_e;
      uVar9 = &stack0x0000 == (undefined1 *)0x6;
      FUN_28b3_0d04();
      FUN_28b3_1181();
      if ((bool)uVar8 || (bool)uVar9) {
        FUN_28b3_0d04();
        func_0x000297e6();
        func_0x00029d78();
        local_10 = 0x22b2;
        local_12 = 0x45d;
        func_0x000299d1();
        local_10 = 0x22b2;
        local_12 = 0x462;
        func_0x00029f30();
        uVar8 = (undefined1 *)0xfff7 < &local_e;
        uVar9 = &stack0x0000 == (undefined1 *)0x6;
        FUN_28b3_0d04();
        FUN_28b3_1181();
        if ((bool)uVar8 || (bool)uVar9) {
          FUN_28b3_0d04();
          func_0x000297e6();
          func_0x00029d78();
          local_10 = 0x22b2;
          local_12 = 0x493;
          func_0x000299d1();
          local_10 = 0x22b2;
          local_12 = 0x498;
          func_0x00029f30();
          FUN_28b3_0d04();
          FUN_28b3_1181();
        }
      }
    }
    local_c = 0x22b2;
    local_e = 0x4f6;
    FUN_1000_0599();
    local_c = 0x6551;
    local_e = 0xdef;
    local_10 = 0x507;
    func_0x00012276();
    func_0x00010526();
    local_18 = *(undefined2 *)0xa558;
    local_16 = *(undefined2 *)0xa55a;
    local_10 = *(undefined2 *)0xa55c;
    local_c = 0xdef;
    local_e = 0x540;
    local_14 = local_18;
    local_12 = local_16;
    puVar10 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar10;
    puVar5 = &local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    local_c = 0;
    local_e = 0x55e;
    FUN_17a6_0d19();
    bVar7 = 0xfffe < local_42;
    local_42 = local_42 + 1;
    local_40 = local_40 + (uint)bVar7;
    uVar6 = 0x11f2;
    local_3a = local_3a - (uint)(local_3c == 0);
  }
  *(undefined2 *)0xc22 = 2;
  local_3c = *(int *)0x14c;
  local_3a = *(int *)0x14e;
  do {
    local_c = uVar6;
    if ((local_3a < 0) || ((local_3a < 1 && (local_3c == 0)))) {
      if (local_40 != 0 || local_42 != 0) {
        local_e = 0x6f5;
        FUN_1000_0599();
        local_c = 0x6566;
        local_e = 0xdef;
        local_10 = 0x706;
        func_0x00012276();
      }
      return;
    }
    local_e = 0x5a7;
    puVar10 = (undefined2 *)func_0x00000271();
    puVar4 = (undefined2 *)puVar10;
    puVar5 = &local_38;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    FUN_28b3_0d04();
    func_0x000297e6();
    func_0x00029d78();
    local_10 = 0x22b2;
    local_12 = 0x5d9;
    func_0x000299d1();
    local_10 = 0x22b2;
    local_12 = 0x5de;
    func_0x00029f30();
    uVar8 = (undefined1 *)0xfff7 < &local_e;
    uVar9 = &stack0x0000 == (undefined1 *)0x6;
    FUN_28b3_0d04();
    FUN_28b3_1181();
    if ((bool)uVar8 || (bool)uVar9) {
      FUN_28b3_0d04();
      func_0x000297e6();
      func_0x00029d78();
      local_10 = 0x22b2;
      local_12 = 0x60f;
      func_0x000299d1();
      local_10 = 0x22b2;
      local_12 = 0x614;
      func_0x00029f30();
      uVar8 = (undefined1 *)0xfff7 < &local_e;
      uVar9 = &stack0x0000 == (undefined1 *)0x6;
      FUN_28b3_0d04();
      FUN_28b3_1181();
      if (!(bool)uVar8 && !(bool)uVar9) goto LAB_3ab8_5ae4;
      FUN_28b3_0d04();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar8 && !(bool)uVar9) goto LAB_3ab8_5ae4;
      FUN_28b3_0d04();
      func_0x000297e6();
      uVar6 = 0x22b2;
      FUN_28b3_1181();
      if ((((bool)uVar8 || (bool)uVar9) || (8 < local_1d)) || (0x12 < local_1e)) goto LAB_3ab8_5ae4;
    }
    else {
LAB_3ab8_5ae4:
      local_38 = *(undefined2 *)0xa55c;
      local_36 = *(undefined2 *)0xa55e;
      local_30 = *(undefined2 *)0xa570;
      local_2e = *(undefined2 *)0xa572;
      local_c = 0x22b2;
      local_e = 0x68f;
      local_34 = local_38;
      local_32 = local_36;
      puVar10 = (undefined2 *)func_0x00000271();
      puVar4 = (undefined2 *)puVar10;
      puVar5 = &local_38;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      local_c = 0;
      local_e = 0x6af;
      FUN_1000_0599();
      local_c = 0x655b;
      local_e = 0xdef;
      local_10 = 0x6c0;
      func_0x00012276();
      func_0x00010526();
      local_c = 0xdef;
      uVar6 = 0x11f2;
      local_e = 0x6d3;
      FUN_13bf_0327();
      bVar7 = 0xfffe < local_42;
      local_42 = local_42 + 1;
      local_40 = local_40 + (uint)bVar7;
    }
    bVar7 = local_3c == 0;
    local_3c = local_3c + -1;
    local_3a = local_3a - (uint)bVar7;
  } while( true );
}



/* 3ab8:5b8f  FUN_3ab8_5b8f  59 bytes, 0 callers */

void FUN_3ab8_5b8f(void)

{
  FUN_21f2_0ebc();
  func_0x0000c340(0x22b2);
  func_0x00012276(0x885,0x1dc);
  func_0x00012276(0x11f2,0x6587,0xbf48,0x968);
  func_0x00010526(0x11f2);
  FUN_3ab8_57e8();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_32b2_02bc();
}



/* 3ab8:5bd8  FUN_3ab8_5bd8  412 bytes, 1 callers */

void __cdecl16far FUN_3ab8_5bd8(void)

{
  uint uVar1;
  undefined2 ***pppuVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 **local_16 [2];
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 ***local_e;
  undefined2 ***local_c;
  undefined2 *local_a;
  undefined2 ***local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0x3ab8;
  local_6 = 0x763;
  FUN_21f2_0ebc();
  local_c = (undefined2 ***)*(int *)0xa4f8;
  local_a = (undefined2 *)*(int *)0xa4fa;
  local_8 = local_c;
  do {
    do {
      local_4 = 0x22b2;
      local_6 = 0x77b;
      func_0x0000c340();
      local_4 = 0x728;
      local_6 = 0x885;
      local_8 = (undefined2 ***)0x784;
      func_0x00012276();
      local_4 = 0x65a4;
      local_6 = 0x11f2;
      local_8 = (undefined2 ***)0x78e;
      func_0x00012276();
      local_4 = 0x11f2;
      local_6 = 0x794;
      func_0x00010526();
      local_4 = 2;
      local_6 = 0x12;
      local_8 = (undefined2 ***)0xdef;
      local_a = (undefined2 *)0x7a1;
      FUN_1000_0599();
      local_4 = 0;
      local_6 = 2;
      local_8 = (undefined2 ***)0x2;
      local_a = (undefined2 *)0x12;
      local_c = (undefined2 ***)0x65d0;
      local_e = (undefined2 ***)0xdef;
      uStack_10 = 0x7b8;
      FUN_1000_02b5();
      local_e = (undefined2 ***)0x1;
      do {
        local_4 = 0;
        local_6 = 2;
        local_8 = (undefined2 ***)0x2;
        local_a = (undefined2 *)(((int)local_e + 9) * 2);
        local_c = (undefined2 ***)0x65d3;
        local_e = (undefined2 ***)0xdef;
        uStack_10 = 0x7da;
        FUN_1000_02b5();
        local_e = (undefined2 ***)((int)local_e + 1);
      } while ((int)local_e < 0x1e);
      local_4 = 0;
      local_6 = 2;
      local_8 = (undefined2 ***)0x2;
      local_a = (undefined2 *)0x4e;
      local_c = (undefined2 ***)0x65d6;
      local_e = (undefined2 ***)0xdef;
      uStack_10 = 0x7fb;
      FUN_1000_02b5();
      local_4 = 0x2711;
      local_6 = 0x34;
      local_8 = local_16;
      local_a = &local_12;
      local_c = &local_c;
      local_e = &local_8;
      uStack_10 = 0xdef;
      pppuVar2 = (undefined2 ***)0xad;
      local_12 = 0x81b;
      uVar1 = func_0x000021a4();
      if (((*(int *)0x158 != 0) || (uVar1 == 0xffff)) || (uVar1 == 0x65)) goto LAB_3ab8_5d57;
      uVar3 = uVar1 < 0x66;
      uVar4 = uVar1 == 0x66;
      if ((bool)uVar4) goto LAB_3ab8_5d57;
      local_4 = 0xad;
      local_6 = 0x84b;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0x854;
      func_0x000297e6();
      local_4 = 0x22b2;
      pppuVar2 = (undefined2 ***)0x22b2;
      local_6 = 0x859;
      FUN_28b3_1181();
      if ((bool)uVar4) goto LAB_3ab8_5d57;
      local_4 = 0x22b2;
      local_6 = 0x863;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0x86c;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0x871;
      FUN_28b3_1181();
    } while ((bool)uVar3);
    local_4 = 0x22b2;
    local_6 = 0x87e;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0x887;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0x88c;
    FUN_28b3_1181();
  } while (!(bool)uVar3 && !(bool)uVar4);
  local_4 = 0x22b2;
  local_6 = 0x8a3;
  FUN_28b3_0d8b();
  local_4 = 0x22b2;
  local_6 = 0x8ac;
  func_0x00029b6d();
  local_4 = 0x22b2;
  local_6 = 0x8b4;
  func_0x00029b6d();
  local_4 = 0x22b2;
  local_6 = 0x8bd;
  FUN_28b3_0e3b();
  local_4 = 0x22b2;
  local_6 = 0x8ce;
  func_0x00029b85();
  local_4 = 0x22b2;
  pppuVar2 = (undefined2 ***)0x22b2;
  local_6 = 0x8d7;
  FUN_28b3_0e53();
LAB_3ab8_5d57:
  local_4 = 2;
  local_6 = 0x13;
  local_a = (undefined2 *)0x8e4;
  local_8 = pppuVar2;
  FUN_1000_0599();
  local_4 = 0xdef;
  local_6 = 0x8eb;
  func_0x00010526();
  local_4 = 0xdef;
  local_6 = 0x8f0;
  func_0x0000ac64();
  return;
}



/* 3ab8:5d74  FUN_3ab8_5d74  702 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_5d74(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  int local_78;
  int local_76;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined2 local_6e;
  int local_6c;
  undefined1 local_6a [90];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *local_6;
  int *local_4;
  
  local_4 = (int *)0x3ab8;
  local_6 = (undefined1 *)0x8ff;
  FUN_21f2_0ebc();
  local_4 = (int *)0x0;
  local_6 = (undefined1 *)0x22b2;
  uVar4 = 0x885;
  puStack_8 = (undefined1 *)0x90c;
  func_0x0000daa6();
  local_71 = 0;
  while ((int)local_6 < 0x21) {
    local_4 = (int *)0x1;
    local_6 = (undefined1 *)0x1;
    puStack_a = (undefined1 *)0x924;
    puStack_8 = (undefined1 *)uVar4;
    FUN_1000_0599();
    local_4 = (int *)0x65d9;
    local_6 = (undefined1 *)0xdef;
    puStack_8 = (undefined1 *)0x92f;
    func_0x00012276();
    if ((int)local_6 < 0x1f) {
      local_4 = (int *)(uint)*(byte *)((int)local_6 + 0xedc);
      local_6 = (undefined1 *)((int)local_6 * 7 + 0xf00);
      puStack_8 = (undefined1 *)0x65e1;
      puStack_a = (undefined1 *)0x11f2;
      puStack_c = (undefined1 *)0x954;
      func_0x00012276();
    }
    if (local_6 == (undefined1 *)0x1f) {
      local_4 = (int *)0x65f3;
      local_6 = (undefined1 *)0x11f2;
      puStack_8 = (undefined1 *)0x966;
      func_0x00012276();
      if (*(char *)((int)local_6 + 0xedc) == '|') {
        local_4 = (int *)0x6602;
        local_6 = (undefined1 *)0x11f2;
        puStack_8 = (undefined1 *)0x97a;
        func_0x00012276();
      }
      else {
        local_4 = (int *)(uint)*(byte *)((int)local_6 + 0xedc);
        local_6 = (undefined1 *)0x660a;
        puStack_8 = (undefined1 *)0x11f2;
        puStack_a = (undefined1 *)0x98c;
        func_0x00012276();
      }
    }
    if (local_6 == (undefined1 *)0x20) {
      local_4 = (int *)0x6612;
      local_6 = (undefined1 *)0x11f2;
      puStack_8 = (undefined1 *)0x99d;
      func_0x00012276();
      if (*(char *)((int)local_6 + 0xedc) == '|') {
        local_4 = (int *)0x6621;
        local_6 = (undefined1 *)0x11f2;
        puStack_8 = (undefined1 *)0x9b1;
        func_0x00012276();
      }
      else {
        local_4 = (int *)(uint)*(byte *)((int)local_6 + 0xedc);
        local_6 = (undefined1 *)0x662f;
        puStack_8 = (undefined1 *)0x11f2;
        puStack_a = (undefined1 *)0x9c3;
        func_0x00012276();
      }
    }
    local_4 = (int *)0x11f2;
    local_6 = (undefined1 *)0x9ca;
    func_0x00010526();
    for (local_6c = 1; local_6c < 0x1f; local_6c = local_6c + 1) {
      if ((undefined1 *)local_6c == local_6) {
        local_6e = 0xffff;
      }
      else {
        local_6e = 0;
      }
      local_72 = *(undefined1 *)(local_6c + 0xedc);
      local_4 = (int *)local_6e;
      local_6 = (undefined1 *)0x6;
      puStack_8 = (undefined1 *)0x3;
      puStack_a = (undefined1 *)((local_6c + 8) * 2);
      puStack_c = &local_72;
      uStack_e = 0xdef;
      uStack_10 = 0x9fa;
      FUN_1000_02b5();
    }
    local_4 = (int *)0xdef;
    local_6 = (undefined1 *)0xa1a;
    FUN_1000_060e();
    local_74 = 0;
    do {
      local_4 = (int *)0xdef;
      uVar5 = 0xdef;
      local_6 = (undefined1 *)0xa24;
      uVar1 = FUN_1000_0632();
      local_74 = uVar1;
    } while (uVar1 == 0);
    local_74._0_1_ = (byte)uVar1;
    uVar2 = uVar1 & 0xff;
    if (uVar2 == 0x1b) {
      local_4 = (int *)0xdef;
      local_6 = (undefined1 *)0xa3d;
      FUN_1000_0620();
      local_4 = (int *)0x3;
      local_6 = (undefined1 *)0x12;
      puStack_8 = (undefined1 *)0xdef;
      puStack_a = (undefined1 *)0xa4a;
      FUN_1000_0599();
      local_4 = (int *)0xdef;
      local_6 = (undefined1 *)0xa51;
      func_0x00010526();
      return 0xffff;
    }
    local_74._1_1_ = (char)(uVar1 >> 8);
    if (((((0x40 < (byte)local_74) && ((byte)local_74 < 0x5b)) ||
         ((0x60 < (byte)local_74 && ((byte)local_74 < 0x7b)))) || ((0xa5 < uVar2 && (uVar2 < 0xde)))
        ) || ((local_6 == (undefined1 *)0x1f && (local_74._1_1_ == '\x0e')))) {
      if ((local_6 == (undefined1 *)0x1f) && (local_74._1_1_ == '\x0e')) {
        *(undefined1 *)0xefb = 0x7c;
      }
      else {
        *(byte *)((int)local_6 + 0xedc) = (byte)local_74;
      }
      if (local_6 == (undefined1 *)0x20) {
        if ((uVar2 == 0x5a) || (uVar2 == 0x7a)) {
          *(undefined1 *)0xefc = 0x5a;
          *(undefined1 *)0xefd = 0x7a;
        }
        else {
          *(byte *)0xefc = (byte)local_74;
          *(undefined1 *)0xefd = 0x7e;
        }
      }
      local_4 = (int *)0xdef;
      local_6 = (undefined1 *)0xad9;
      func_0x0000bd93();
      local_4 = (int *)0x885;
      local_6 = (undefined1 *)0xade;
      func_0x0000c053();
      local_4 = (int *)0x885;
      uVar5 = 0x885;
      local_6 = (undefined1 *)0xae3;
      func_0x0000ac64();
      uVar1 = local_74;
    }
    local_74 = uVar1;
    uVar4 = 0xdef;
    local_6 = (undefined1 *)0xaf1;
    local_4 = (int *)uVar5;
    FUN_1000_0620();
  }
  local_6 = (undefined1 *)0xaf9;
  local_4 = (int *)uVar4;
  FUN_1000_0620();
  local_4 = (int *)0x3;
  local_6 = (undefined1 *)0x12;
  puStack_8 = (undefined1 *)0xdef;
  puStack_a = (undefined1 *)0xb06;
  FUN_1000_0599();
  local_4 = (int *)0xdef;
  uVar4 = 0xdef;
  local_6 = (undefined1 *)0xb0d;
  func_0x00010526();
  do {
    local_4 = (int *)0x522;
    local_6 = (undefined1 *)0x6637;
    puStack_8 = local_6a;
    puStack_c = (undefined1 *)0xb1e;
    puStack_a = (undefined1 *)uVar4;
    FUN_21f2_3454();
    local_4 = &local_76;
    local_6 = local_80;
    puStack_8 = local_7c;
    puStack_a = local_6a;
    puStack_c = (undefined1 *)0x1;
    uStack_e = 0x22b2;
    uVar4 = 0x1bb4;
    uStack_10 = 0xb3a;
    local_78 = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return 0xfba9;
    }
    if (local_78 == -1) {
      return 0xffff;
    }
    if ((local_78 == 1) || (local_76 == 1)) {
      local_4 = (int *)0x258;
      local_6 = (undefined1 *)0x6648;
      puStack_8 = (undefined1 *)0x1bb4;
      uVar4 = 0x22b2;
      puStack_a = (undefined1 *)0xb6c;
      iVar3 = FUN_21f2_1348();
      *(int *)0xd70 = iVar3;
      if (iVar3 == 0) {
        local_4 = (int *)0x6653;
        local_6 = (undefined1 *)0x22b2;
        uVar4 = 0x11f2;
        puStack_8 = (undefined1 *)0xb7e;
        FUN_13bf_0a03();
      }
      local_4 = (int *)0xedc;
      local_6 = (undefined1 *)0x1e6;
      puStack_8 = (undefined1 *)*(undefined2 *)0xd70;
      puStack_c = (undefined1 *)0xb90;
      puStack_a = (undefined1 *)uVar4;
      func_0x0002327e();
      local_4 = (int *)0x22b2;
      local_6 = (undefined1 *)0xb98;
      func_0x0002504e();
      return 1;
    }
  } while ((local_78 != 2) && (local_76 != 2));
  return 2;
}



/* 4000:0bb2  FUN_4000_0bb2  703 bytes, 0 callers */

void __cdecl16far FUN_4000_0bb2(void)

{
  undefined2 ***pppuVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 ****ppppuVar5;
  undefined2 ****ppppuVar6;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 **local_fa;
  undefined2 *local_f8 [50];
  int local_94;
  undefined2 **local_92;
  int local_90;
  int local_8e;
  undefined4 local_8c;
  undefined2 local_88 [2];
  undefined2 *local_84 [2];
  int local_80;
  undefined2 **local_7c [47];
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 *puStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 **ppuStack_14;
  undefined2 *puStack_12;
  undefined2 uStack_10;
  undefined2 *puStack_e;
  undefined2 **ppuStack_c;
  undefined2 **ppuStack_a;
  undefined2 ***pppuStack_8;
  undefined2 ***pppuStack_6;
  undefined2 ****local_4;
  
  local_4 = (undefined2 ****)0x3ab8;
  ppppuVar5 = (undefined2 ****)0x22b2;
  pppuStack_6 = (undefined2 ***)0xbbd;
  FUN_21f2_0ebc();
  do {
    local_4 = (undefined2 ****)0x6663;
    pppuStack_6 = local_7c;
    ppuStack_a = (undefined2 **)0xbca;
    pppuStack_8 = ppppuVar5;
    FUN_21f2_3454();
    local_4 = (undefined2 ****)local_7c;
    pppuStack_6 = (undefined2 ***)0x7;
    pppuStack_8 = (undefined2 ***)0x22b2;
    ppuStack_a = (undefined2 **)0xbd9;
    FUN_1def_07a4();
    local_4 = &local_4;
    pppuStack_6 = (undefined2 ***)local_88;
    pppuStack_8 = (undefined2 ***)local_84;
    ppuStack_a = local_7c;
    ppuStack_c = (undefined2 ***)0x1;
    puStack_e = (undefined2 **)0x1bb4;
    ppppuVar6 = (undefined2 ****)0x1bb4;
    uStack_10 = 0xbf6;
    local_80 = FUN_1def_0904();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_80 == 1) {
      local_4 = (undefined2 ****)0x1bb4;
      pppuStack_6 = (undefined2 ***)0xc0f;
      FUN_4375_c468();
    }
    if (local_80 == 2) {
      local_4 = (undefined2 ****)0x1bb4;
      pppuStack_6 = (undefined2 ***)0xc19;
      FUN_3ab8_5bd8();
    }
    pppuVar1 = local_8c;
    if (local_80 == 3) {
      local_4 = (undefined2 ****)0x1bb4;
      pppuStack_6 = (undefined2 ***)0xc23;
      FUN_3ab8_5d74();
      pppuVar1 = local_8c;
    }
    do {
      if (local_80 != 4) goto LAB_3ab8_6180;
      pppuStack_6 = (undefined2 ***)0xc31;
      local_4 = ppppuVar6;
      local_8c = pppuVar1;
      func_0x0000c340();
      local_4 = (undefined2 ****)0x669f;
      pppuStack_6 = (undefined2 ***)0x885;
      pppuStack_8 = (undefined2 ***)0xc3a;
      func_0x00012276();
      local_4 = (undefined2 ****)0x11f2;
      pppuStack_6 = (undefined2 ***)0xc40;
      func_0x00010526();
      local_4 = (undefined2 ****)&local_92;
      pppuStack_6 = (undefined2 ***)0xdef;
      pppuStack_8 = (undefined2 ***)0xc4a;
      FUN_21f2_38a0();
      local_4 = (undefined2 ****)0x0;
      pppuStack_6 = (undefined2 ***)0xe10;
      local_8c._0_2_ = (undefined2 ***)((int)local_92 - *(uint *)0xc134);
      local_8c._2_2_ =
           (undefined2 **)
           ((local_90 - *(int *)0xc136) - (uint)(local_92 < (undefined2 ***)*(uint *)0xc134));
      ppuStack_c = (undefined2 **)0x22b2;
      puStack_e = (undefined2 *)0xc70;
      ppuStack_a = (undefined2 ***)local_8c;
      pppuStack_8 = (undefined2 ***)local_8c._2_2_;
      iVar2 = FUN_21f2_5a44();
      ppuStack_c = (undefined2 **)(iVar2 / 0x3c);
      puStack_e = (undefined2 **)0x0;
      uStack_10 = 0xe10;
      puStack_12 = local_8c._2_2_;
      ppuStack_14 = (undefined2 ***)local_8c;
      uStack_16 = 0x22b2;
      uStack_18 = 0xc8a;
      uStack_16 = FUN_21f2_5978();
      uStack_18 = 0x66b6;
      puStack_1a = local_f8;
      uStack_1c = 0x22b2;
      uStack_1e = 0xc99;
      FUN_21f2_3454();
      ppuStack_14 = (undefined2 **)0x0;
      uStack_16 = 0x22b2;
      uStack_18 = 0xca4;
      func_0x0000daa6();
      *(undefined2 *)0x156 = 0;
      *(byte *)0xc3be = *(byte *)0xc3be | 8;
      ppuStack_14 = (undefined2 **)0x14;
      uStack_16 = 1;
      uStack_18 = 0x19;
      puStack_1a = local_f8;
      uStack_1c = 0x885;
      uStack_1e = 0xcc6;
      local_8e = FUN_12c1_03d3();
      uStack_16 = 0;
      uStack_18 = 0x11f2;
      puStack_1a = (undefined2 *)0xcd5;
      func_0x0000daa6();
      *(byte *)0xc3be = *(byte *)0xc3be & 0xf7;
      uStack_16 = 1;
      uStack_18 = 0x885;
      puStack_1a = (undefined2 *)0xce4;
      func_0x0000daa6();
      uStack_16 = 0x885;
      ppppuVar6 = (undefined2 ****)0x2c1;
      uStack_18 = 0xcea;
      func_0x00002cc6();
      pppuVar1 = (undefined2 ***)CONCAT22(local_8c._2_2_,(undefined2 ***)local_8c);
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_8e == -1) goto LAB_3ab8_6180;
      local_4 = (undefined2 ****)&local_fa;
      pppuStack_6 = (undefined2 ***)&local_94;
      pppuStack_8 = (undefined2 ***)0x66be;
      ppuStack_a = local_f8;
      ppuStack_c = (undefined2 ***)0x2c1;
      ppppuVar6 = (undefined2 ****)0x22b2;
      puStack_e = (undefined2 **)0xd8b;
      iVar2 = FUN_21f2_34ae();
      pppuVar1 = (undefined2 ***)CONCAT22(local_8c._2_2_,(undefined2 ***)local_8c);
      if (iVar2 == 2) {
        pppuVar1 = (undefined2 ***)((long)local_94 * 0xe10 + (long)((int)local_fa * 0x3c));
      }
      local_8c._2_2_ = (undefined2 **)((ulong)pppuVar1 >> 0x10);
      local_8c._0_2_ = (undefined2 ***)pppuVar1;
    } while ((long)pppuVar1 < 0);
    *(int *)0xc134 = (int)local_92 - (int)(undefined2 ***)local_8c;
    *(int *)0xc136 = (local_90 - (int)local_8c._2_2_) - (uint)(local_92 < (undefined2 ***)local_8c);
LAB_3ab8_6180:
    local_8c = pppuVar1;
    if (local_80 == 5) {
      pppuStack_6 = (undefined2 ***)0xd0a;
      local_4 = ppppuVar6;
      FUN_4375_993d();
    }
    do {
      do {
        if (local_80 != 6) goto LAB_3ab8_625f;
        pppuStack_6 = (undefined2 ***)0xd18;
        local_4 = ppppuVar6;
        func_0x0000c340();
        local_4 = (undefined2 ****)0x66c4;
        pppuStack_6 = (undefined2 ***)0x885;
        pppuStack_8 = (undefined2 ***)0xd21;
        func_0x00012276();
        local_4 = (undefined2 ****)0x11f2;
        pppuStack_6 = (undefined2 ***)0xd27;
        func_0x00010526();
        local_4 = (undefined2 ****)0xdef;
        pppuStack_6 = (undefined2 ***)0xd30;
        FUN_28b3_0d8b();
        local_4 = (undefined2 ****)0x22b2;
        pppuStack_6 = (undefined2 ***)0xd39;
        FUN_28b3_0e3b();
        local_4 = (undefined2 ****)0x22b2;
        pppuStack_6 = (undefined2 ***)0xd42;
        FUN_28b3_0e53();
        local_4 = (undefined2 ****)0x2711;
        pppuStack_6 = (undefined2 ***)0x2a;
        pppuStack_8 = (undefined2 ***)local_88;
        ppuStack_a = local_84;
        ppuStack_c = &local_92;
        puStack_e = local_f8;
        uStack_10 = 0x22b2;
        ppppuVar6 = (undefined2 ****)0xad;
        puStack_12 = (undefined2 **)0xd63;
        uVar3 = func_0x000021a4();
        if (((*(int *)0x158 != 0) || (uVar3 == 0xffff)) || (uVar3 == 0x65)) goto LAB_3ab8_625f;
        uVar7 = uVar3 < 0x66;
        uVar8 = uVar3 == 0x66;
        if ((bool)uVar8) goto LAB_3ab8_625f;
        local_4 = (undefined2 ****)0xad;
        pppuStack_6 = (undefined2 ***)0xe0d;
        func_0x000297e6();
        local_4 = (undefined2 ****)0x22b2;
        pppuStack_6 = (undefined2 ***)0xe16;
        func_0x000297e6();
        local_4 = (undefined2 ****)0x22b2;
        pppuStack_6 = (undefined2 ***)0xe1b;
        func_0x00029ae7();
        local_4 = (undefined2 ****)0x22b2;
        pppuStack_6 = (undefined2 ***)0xe24;
        FUN_28b3_0e3b();
        local_4 = (undefined2 ****)0x22b2;
        ppppuVar6 = (undefined2 ****)0x22b2;
        pppuStack_6 = (undefined2 ***)0xe29;
        FUN_28b3_1181();
      } while (!(bool)uVar7 && !(bool)uVar8);
      local_4 = (undefined2 ****)0x22b2;
      pppuStack_6 = (undefined2 ***)0xe37;
      func_0x000297e6();
      local_4 = (undefined2 ****)0x22b2;
      pppuStack_6 = (undefined2 ***)0xe40;
      func_0x000297e6();
      local_4 = (undefined2 ****)0x22b2;
      ppppuVar6 = (undefined2 ****)0x22b2;
      pppuStack_6 = (undefined2 ***)0xe45;
      FUN_28b3_1181();
    } while ((bool)uVar7);
    local_4 = (undefined2 ****)0x22b2;
    pppuStack_6 = (undefined2 ***)0xe53;
    func_0x000297e6();
    local_4 = (undefined2 ****)0x22b2;
    pppuStack_6 = (undefined2 ***)0xe58;
    func_0x00029d78();
    local_4 = (undefined2 ****)0x22b2;
    ppppuVar6 = (undefined2 ****)0x22b2;
    pppuStack_6 = (undefined2 ***)0xe5d;
    uVar4 = FUN_28b3_0f51();
    *(undefined2 *)0xc1c = uVar4;
LAB_3ab8_625f:
    ppppuVar5 = ppppuVar6;
    if (local_80 == 7) {
      pppuStack_6 = (undefined2 ***)0xde9;
      local_4 = ppppuVar6;
      FUN_3ab8_62f1();
      local_4 = (undefined2 ****)0x0;
      ppppuVar5 = (undefined2 ****)0x11f2;
      pppuStack_8 = (undefined2 ***)0xdf1;
      pppuStack_6 = ppppuVar6;
      FUN_13bf_0b1b();
    }
    if (local_80 == -1) {
      return;
    }
    if (*(int *)0x158 != 0) {
      return;
    }
  } while( true );
}



/* 3ab8:62f1  FUN_3ab8_62f1  247 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_62f1(void)

{
  int iVar1;
  undefined2 unaff_DS;
  byte local_52 [6];
  undefined1 local_4c [56];
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_a;
  uint local_8;
  byte *pbStack_6;
  uint *puStack_4;
  
  puStack_4 = (uint *)0x3ab8;
  pbStack_6 = (byte *)0xe7c;
  FUN_21f2_0ebc();
  local_52[0] = 0;
  while( true ) {
    puStack_4 = (uint *)0x22b2;
    pbStack_6 = (byte *)0xe85;
    func_0x0000c340();
    puStack_4 = (uint *)0x66ed;
    pbStack_6 = (byte *)0x885;
    local_8 = 0xe8e;
    func_0x00012276();
    if (*(char *)0x136 == '\0') {
      puStack_4 = (uint *)0x66ff;
    }
    else {
      puStack_4 = (uint *)0x6701;
    }
    pbStack_6 = (byte *)0x11f2;
    local_8 = 0xea4;
    func_0x00012276();
    puStack_4 = (uint *)0x6703;
    pbStack_6 = (byte *)0x11f2;
    local_8 = 0xeae;
    func_0x00012276();
    puStack_4 = (uint *)0x11f2;
    pbStack_6 = (byte *)0xeb4;
    func_0x00010526();
    local_4c[0] = 0;
    puStack_4 = (uint *)0x3c;
    pbStack_6 = (byte *)0x1;
    local_8 = 0x18;
    puStack_a = local_4c;
    local_c = 0xdef;
    uStack_e = 0xecd;
    iVar1 = FUN_12c1_03d3();
    if ((iVar1 < 1) || (*(int *)0x158 != 0)) break;
    pbStack_6 = local_52;
    local_8 = 0x1ea;
    puStack_a = local_4c;
    local_c = 0x11f2;
    uStack_e = 0xef3;
    FUN_21f2_34ae();
    if (local_52[0] < 0x10) {
      puStack_4 = &local_8;
      pbStack_6 = (byte *)CONCAT11((char)((uint)puStack_4 >> 8),local_52[0]);
      local_8 = 0x22b2;
      puStack_a = (undefined1 *)0xf09;
      FUN_10ad_00ca();
      local_c = 400;
      do {
        puStack_4 = (uint *)0xffff;
        pbStack_6 = (byte *)0x0;
        local_8 = (uint)local_52[0];
        puStack_a = (undefined1 *)0xb0;
        uStack_e = 0x30;
        iStack_10 = local_c;
        uStack_12 = 0x10a9;
        uStack_14 = 0xf30;
        FUN_10ad_079c();
        local_c = local_c + 1;
      } while (local_c < 0x1b8);
      puStack_4 = (uint *)0xffff;
      pbStack_6 = (byte *)0x0;
      local_8 = (uint)local_52[0];
      puStack_a = (undefined1 *)0xb0;
      local_c = 500;
      uStack_e = 0x30;
      iStack_10 = 500;
      uStack_12 = 0x10a9;
      uStack_14 = 0xf5c;
      FUN_10ad_079c();
                    /* WARNING: Subroutine does not return */
      puStack_4 = (uint *)0x10a9;
      pbStack_6 = (byte *)0xf64;
      thunk_FUN_32b2_02bc();
    }
  }
  return 0xffff;
}


