/* Ghidra decompilation of jw17.exe - machine output, not the original source. */

/* 3ab8:0000  OVL_0000  1304 bytes, 0 callers */

void __cdecl16far OVL_0000(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined1 local_b6 [4];
  undefined1 local_b2 [4];
  int local_ae;
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  uint local_a4;
  int local_a2;
  undefined1 local_a0 [4];
  int local_9c;
  undefined1 local_9a [4];
  undefined1 local_96 [22];
  uint local_80;
  undefined1 local_6a [88];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *local_6;
  undefined1 **local_4;
  
  local_4 = (undefined1 **)0x3ab8;
  puVar3 = (undefined1 *)0x22b2;
  local_6 = (undefined1 *)0xab8b;
  FUN_21f2_0ebc();
LAB_3ab8_000b:
  do {
    while( true ) {
      local_4 = (undefined1 **)0x2e;
      local_6 = (undefined1 *)0xb2fe;
      puStack_a = (undefined1 *)0xab98;
      puStack_8 = puVar3;
      puVar3 = (undefined1 *)func_0x00025b06();
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      if (*(char *)0xb2fe != '\0') {
        local_4 = (undefined1 **)0x45e6;
        local_6 = (undefined1 *)0xb2fe;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xabba;
        FUN_21f2_2d26();
      }
      local_4 = (undefined1 **)&local_9c;
      local_6 = (undefined1 *)0x22b2;
      puStack_8 = (undefined1 *)0xabc6;
      func_0x000277aa();
      if ((((((uint)*(byte *)0x90 - local_9c == 0x40) || ((uint)*(byte *)0x90 - local_9c == 0x60))
           && (*(char *)0x91 == ':')) && (*(char *)0x92 == '\0')) || (*(char *)0x90 == '\0')) {
        local_4 = (undefined1 **)0x31;
        local_6 = (undefined1 *)0xbf48;
        puStack_8 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0xabfc;
        iVar2 = func_0x0002701e();
        if (iVar2 != 0) {
          local_4 = (undefined1 **)0xbf48;
          local_6 = (undefined1 *)0x90;
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xac0f;
          func_0x00024c86();
        }
      }
      local_4 = (undefined1 **)0x90;
      local_6 = (undefined1 *)0x22b2;
      puStack_8 = (undefined1 *)0xac1a;
      iVar2 = func_0x00024ce4();
      if (*(char *)(iVar2 + 0x8f) == '\\') {
        *(char *)(iVar2 + 0x8f) = '\0';
      }
      local_4 = (undefined1 **)0x2;
      local_6 = (undefined1 *)0x11;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xac39;
      FUN_1000_0599();
      local_4 = (undefined1 **)0xdef;
      local_6 = (undefined1 *)0xac40;
      func_0x00010526();
      *(undefined2 *)0xc22 = 1;
      local_4 = (undefined1 **)*(undefined2 *)0x78;
      local_6 = (undefined1 *)*(undefined2 *)0x76;
      puStack_8 = (undefined1 *)0x45eb;
      puStack_a = (undefined1 *)0xbf48;
      puStack_c = (undefined1 *)0xdef;
      puStack_e = (undefined1 *)0xac5b;
      FUN_21f2_3454();
      local_4 = (undefined1 **)0xffff;
      local_6 = (undefined1 *)0x7;
      puStack_8 = (undefined1 *)0x2;
      puStack_a = (undefined1 *)0x14;
      puStack_c = (undefined1 *)0xbf48;
      puStack_e = (undefined1 *)0x22b2;
      uStack_10 = 0xac77;
      FUN_1000_02b5();
      local_4 = (undefined1 **)0xb2fe;
      local_6 = (undefined1 *)0x45f1;
      puStack_8 = (undefined1 *)0xbf48;
      puStack_a = (undefined1 *)0xdef;
      puStack_c = (undefined1 *)0xac8b;
      FUN_21f2_3454();
      local_4 = (undefined1 **)0xffff;
      local_6 = (undefined1 *)0x7;
      puStack_8 = (undefined1 *)0x2;
      puStack_a = (undefined1 *)0x1c;
      puStack_c = (undefined1 *)0xbf48;
      puStack_e = (undefined1 *)0x22b2;
      uStack_10 = 0xaca7;
      FUN_1000_02b5();
      local_4 = (undefined1 **)0x90;
      local_6 = (undefined1 *)0x45f6;
      puStack_8 = (undefined1 *)0xbf48;
      puStack_a = (undefined1 *)0xdef;
      puStack_c = (undefined1 *)0xacbb;
      FUN_21f2_3454();
      local_4 = (undefined1 **)0xffff;
      local_6 = (undefined1 *)0x7;
      puStack_8 = (undefined1 *)0x2;
      puStack_a = (undefined1 *)0x2b;
      puStack_c = (undefined1 *)0xbf48;
      puStack_e = (undefined1 *)0x22b2;
      uStack_10 = 0xacd7;
      FUN_1000_02b5();
      local_4 = (undefined1 **)*(undefined2 *)0x7c;
      local_6 = (undefined1 *)*(undefined2 *)0x7a;
      puStack_8 = (undefined1 *)0x45fc;
      puStack_a = (undefined1 *)0xbf48;
      puStack_c = (undefined1 *)0xdef;
      puStack_e = (undefined1 *)0xacef;
      FUN_21f2_3454();
      local_4 = (undefined1 **)0xffff;
      local_6 = (undefined1 *)0x7;
      puStack_8 = (undefined1 *)0x2;
      puStack_a = (undefined1 *)0x42;
      puStack_c = (undefined1 *)0xbf48;
      puStack_e = (undefined1 *)0x22b2;
      uStack_10 = 0xad0b;
      FUN_1000_02b5();
      local_4 = (undefined1 **)0x424;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0xdef;
      puStack_a = (undefined1 *)0xad1b;
      FUN_21f2_3454();
      local_4 = (undefined1 **)0x4602;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xad2a;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x42e;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xad39;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x460e;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xad48;
      FUN_21f2_2d26();
      if ((*(char *)0x7e == '\0') || (9 < *(byte *)0x7e)) {
        *(undefined2 *)0xc2c = 1;
      }
      else {
        local_4 = (undefined1 **)0xb2fe;
        local_6 = (undefined1 *)0x90;
        puStack_8 = (undefined1 *)0xbf48;
        puStack_a = (undefined1 *)0x22b2;
        puStack_c = (undefined1 *)0xad69;
        func_0x0001263c();
        local_4 = (undefined1 **)local_96;
        local_6 = (undefined1 *)0x0;
        puStack_8 = (undefined1 *)0xbf48;
        puStack_a = (undefined1 *)0x11f2;
        puStack_c = (undefined1 *)0xad7d;
        iVar2 = func_0x000276d7();
        if (iVar2 == 0) {
          local_4 = (undefined1 **)0x922;
          local_6 = local_6a;
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xad91;
          FUN_21f2_2d26();
          local_4 = (undefined1 **)0x98a;
          local_6 = local_6a;
          puStack_8 = (undefined1 *)0x22b2;
          puStack_a = (undefined1 *)0xada0;
          FUN_21f2_2d26();
        }
      }
      local_4 = (undefined1 **)local_6a;
      local_6 = (undefined1 *)0x5;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xadb7;
      FUN_1def_07a4();
      local_4 = &local_6;
      local_6 = local_a0;
      puStack_8 = local_9a;
      puStack_a = local_6a;
      puStack_c = (undefined1 *)0x1;
      puStack_e = (undefined1 *)0x1bb4;
      puVar3 = (undefined1 *)0x1bb4;
      uStack_10 = 0xadd4;
      local_9c = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if (((*(int *)0x158 != 0) || (local_9c == 0x14)) || (local_9c == -1)) {
        return;
      }
      if (local_9c != 1) break;
      local_4 = (undefined1 **)0x2712;
      local_6 = (undefined1 *)0x14;
      puStack_8 = local_b6;
      puStack_a = local_b2;
      puStack_c = local_ac;
      puStack_e = local_a8;
      uStack_10 = 0x1bb4;
      puVar3 = (undefined1 *)0xad;
      uStack_12 = 0xae31;
      local_ae = func_0x000021a4();
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_ae != -1) {
        local_4 = (undefined1 **)0xad;
        local_6 = (undefined1 *)0xae53;
        func_0x000297e6();
        local_4 = (undefined1 **)0x22b2;
        local_6 = (undefined1 *)0xae58;
        func_0x00029d78();
        local_4 = (undefined1 **)0x22b2;
        puVar3 = (undefined1 *)0x22b2;
        local_6 = (undefined1 *)0xae5d;
        uVar5 = FUN_28b3_0f51();
        *(undefined2 *)0x76 = (int)uVar5;
        *(undefined2 *)0x78 = (int)((ulong)uVar5 >> 0x10);
      }
    }
    if (local_9c == 2) break;
    if (local_9c == 3) {
      local_4 = (undefined1 **)0x90;
      local_6 = (undefined1 *)0xbf48;
      puStack_8 = (undefined1 *)0x1bb4;
      puStack_a = (undefined1 *)0xaedc;
      func_0x00024c86();
      local_4 = (undefined1 **)0x12;
      local_6 = (undefined1 *)0x2;
      puStack_8 = (undefined1 *)0x2b;
      puStack_a = (undefined1 *)0xbf48;
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xaef3;
      local_ae = FUN_12c1_03d3();
      local_4 = (undefined1 **)0x11f2;
      puVar3 = (undefined1 *)0x2c1;
      local_6 = (undefined1 *)0xaeff;
      func_0x00002cc6();
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_ae != -1) {
        local_6 = (undefined1 *)0x90;
        goto LAB_3ab8_039a;
      }
      goto LAB_3ab8_000b;
    }
    if (local_9c == 4) {
      local_4 = (undefined1 **)0x2712;
      local_6 = (undefined1 *)0x42;
      puStack_8 = local_b6;
      puStack_a = local_b2;
      puStack_c = local_ac;
      puStack_e = local_a8;
      uStack_10 = 0x1bb4;
      puVar3 = (undefined1 *)0xad;
      uStack_12 = 0xaf46;
      local_ae = func_0x000021a4();
      if (*(int *)0x158 != 0) {
        return;
      }
      if (local_ae != -1) {
        local_4 = (undefined1 **)0xad;
        local_6 = (undefined1 *)0xaf68;
        func_0x000297e6();
        local_4 = (undefined1 **)0x22b2;
        local_6 = (undefined1 *)0xaf6d;
        func_0x00029d78();
        local_4 = (undefined1 **)0x22b2;
        puVar3 = (undefined1 *)0x22b2;
        local_6 = (undefined1 *)0xaf72;
        uVar5 = FUN_28b3_0f51();
        *(undefined2 *)0x7a = (int)uVar5;
        *(undefined2 *)0x7c = (int)((ulong)uVar5 >> 0x10);
      }
    }
    else if (local_9c == 5) {
      local_4 = (undefined1 **)0x922;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x1bb4;
      puStack_a = (undefined1 *)0xaf89;
      func_0x00024c86();
      local_4 = (undefined1 **)0x860;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xaf98;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)((local_80 & 0x1f) << 1);
      local_6 = (undefined1 *)((local_80 & 0x7e0) >> 5);
      puStack_8 = (undefined1 *)(local_80 >> 0xb);
      puStack_a = (undefined1 *)0x462a;
      puStack_c = (undefined1 *)0xbf48;
      puStack_e = (undefined1 *)0x22b2;
      uStack_10 = 0xafc3;
      FUN_21f2_3454();
      local_4 = (undefined1 **)0xbf48;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xafd3;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)&local_a4;
      local_6 = (undefined1 *)0x22b2;
      puStack_8 = (undefined1 *)0xafdf;
      func_0x000257c0();
      local_6 = (undefined1 *)(local_a4 - *(uint *)0xc0b0);
      local_4 = (undefined1 **)((local_a2 - *(int *)0xc0b2) - (uint)(local_a4 < *(uint *)0xc0b0));
      puStack_8 = (undefined1 *)0x463a;
      puStack_a = (undefined1 *)0xbf48;
      puStack_c = (undefined1 *)0x22b2;
      puStack_e = (undefined1 *)0xafff;
      FUN_21f2_3454();
      local_4 = (undefined1 **)0xbf48;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xb00f;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x4644;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xb01e;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x952;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xb02d;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x522;
      local_6 = local_6a;
      puStack_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0xb03c;
      FUN_21f2_2d26();
      puVar4 = (undefined1 *)0x22b2;
      do {
        local_4 = &local_6;
        local_6 = local_b6;
        puStack_8 = local_b2;
        puStack_a = local_6a;
        puStack_c = (undefined1 *)0x1;
        puVar3 = (undefined1 *)0x1bb4;
        uStack_10 = 0xb059;
        puStack_e = puVar4;
        local_ae = FUN_1def_0904();
        if (*(int *)0x158 != 0) {
          return;
        }
        if (((local_ae == -1) || (local_ae == 2)) || (local_6 == (undefined1 *)0x2))
        goto LAB_3ab8_000b;
      } while ((local_ae != 1) && (puVar4 = puVar3, local_6 != (undefined1 *)0x1));
      local_4 = (undefined1 **)0x2;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
      *(undefined1 *)0xd14 = 4;
    }
  } while( true );
  local_4 = (undefined1 **)0xb2fe;
  local_6 = (undefined1 *)0xbf48;
  puStack_8 = (undefined1 *)0x1bb4;
  puStack_a = (undefined1 *)0xae74;
  func_0x00024c86();
  local_4 = (undefined1 **)0x2e;
  local_6 = (undefined1 *)0xbf48;
  puStack_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0xae83;
  puVar3 = (undefined1 *)func_0x00025b06();
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  local_4 = (undefined1 **)0x8;
  local_6 = (undefined1 *)0x2;
  puStack_8 = (undefined1 *)0x1c;
  puStack_a = (undefined1 *)0xbf48;
  puStack_c = (undefined1 *)0x22b2;
  puStack_e = (undefined1 *)0xaea6;
  local_ae = FUN_12c1_03d3();
  local_4 = (undefined1 **)0x11f2;
  puVar3 = (undefined1 *)0x2c1;
  local_6 = (undefined1 *)0xaeb2;
  func_0x00002cc6();
  if (*(int *)0x158 != 0) {
    return;
  }
  if (local_ae != -1) {
    local_6 = (undefined1 *)0xb2fe;
LAB_3ab8_039a:
    local_4 = (undefined1 **)0xbf48;
    puStack_8 = (undefined1 *)0x2c1;
    puVar3 = (undefined1 *)0x22b2;
    puStack_a = (undefined1 *)0xaf20;
    func_0x00024c86();
  }
  goto LAB_3ab8_000b;
}



/* 3ab8:051b  FUN_3ab8_051b  524 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_051b(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *****pppppuVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 ***local_48 [2];
  undefined1 local_44 [10];
  undefined1 local_3a [4];
  int local_36;
  undefined2 ****local_34 [13];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 ****ppppuStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *****pppppuStack_e;
  undefined2 ******local_c;
  undefined1 *local_a;
  undefined2 *****local_8;
  undefined1 *local_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  pppppuVar1 = (undefined2 *****)0x22b2;
  local_6 = (undefined1 *)0xb0a6;
  FUN_21f2_0ebc();
  do {
    while( true ) {
      local_c = (undefined2 ******)*param_2;
      local_4 = (undefined1 *)0x464a;
      local_6 = local_44;
      local_a = (undefined1 *)0xb0cf;
      local_8 = pppppuVar1;
      FUN_21f2_3454();
      local_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xb0d6;
      func_0x0001bb4e();
      local_4 = local_44;
      local_6 = (undefined1 *)0x1bb4;
      local_8 = (undefined2 *****)0xb0df;
      func_0x00012276();
      local_4 = (undefined1 *)0x464f;
      local_6 = (undefined1 *)0x11f2;
      local_8 = (undefined2 *****)0xb0e9;
      func_0x00012276();
      local_4 = (undefined1 *)0x1;
      local_6 = (undefined1 *)0x2c;
      local_8 = (undefined2 *****)0x11f2;
      local_a = (undefined1 *)0xb0f7;
      FUN_1000_0599();
      local_4 = local_44;
      local_6 = (undefined1 *)0xdef;
      local_8 = (undefined2 *****)0xb102;
      func_0x00012276();
      local_4 = (undefined1 *)0x4652;
      local_6 = (undefined1 *)0x11f2;
      local_8 = (undefined2 *****)0xb10c;
      func_0x00012276();
      local_4 = (undefined1 *)0x31e;
      local_6 = (undefined1 *)0x11f2;
      local_8 = (undefined2 *****)0xb116;
      func_0x00012276();
      local_4 = (undefined1 *)0x11f2;
      local_6 = (undefined1 *)0xb11f;
      func_0x000297e6();
      local_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xb124;
      func_0x00029d78();
      local_c = (undefined2 ******)0x22b2;
      pppppuStack_e = (undefined2 *****)0xb12e;
      func_0x000299d1();
      local_c = (undefined2 ******)0x22b2;
      pppppuStack_e = (undefined2 *****)0xb136;
      func_0x000297e6();
      local_c = (undefined2 ******)0x22b2;
      pppppuStack_e = (undefined2 *****)0xb13b;
      func_0x00029d78();
      uStack_14 = 0x22b2;
      ppppuStack_16 = (undefined2 ****)0xb145;
      func_0x000299d1();
      uStack_14 = 0x465e;
      ppppuStack_16 = local_34;
      uStack_18 = 0x22b2;
      uStack_1a = 0xb152;
      FUN_21f2_3454();
      local_4 = (undefined1 *)0xffff;
      local_6 = (undefined1 *)0x7;
      local_8 = (undefined2 *****)0x2;
      local_a = (undefined1 *)0x3a;
      local_c = (undefined2 ******)local_34;
      pppppuStack_e = (undefined2 *****)0x22b2;
      uStack_10 = 0xb16e;
      FUN_1000_02b5();
      local_4 = (undefined1 *)0x1;
      local_6 = (undefined1 *)0xf;
      local_8 = (undefined2 *****)local_48;
      local_a = local_3a;
      local_c = &local_c;
      pppppuStack_e = &local_8;
      uStack_10 = 0xdef;
      uStack_12 = 0xb18e;
      func_0x000021a4();
      local_36 = 0x3a;
      uVar2 = 0xad;
      do {
        local_4 = (undefined1 *)0x0;
        local_6 = (undefined1 *)0x7;
        local_8 = (undefined2 ******)0x2;
        local_a = (undefined1 *)local_36;
        local_c = (undefined2 ******)0x466e;
        uStack_10 = 0xb1b0;
        pppppuStack_e = (undefined2 *****)uVar2;
        FUN_1000_02b5();
        local_36 = local_36 + 1;
        uVar2 = 0xdef;
      } while (local_36 < 0x50);
      if (*(int *)0x158 != 0) {
        return 0xd499;
      }
      uVar3 = local_4 != (undefined1 *)0xffff;
      uVar4 = local_4 == (undefined1 *)0xffff;
      if ((bool)uVar4) {
        return 0xffff;
      }
      local_4 = (undefined1 *)0xdef;
      local_6 = (undefined1 *)0xb1dd;
      func_0x000297e6();
      local_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xb1e6;
      func_0x000297e6();
      local_4 = (undefined1 *)0x22b2;
      local_6 = (undefined1 *)0xb1eb;
      FUN_28b3_1181();
      if ((bool)uVar3 || (bool)uVar4) break;
LAB_3ab8_06b5:
      *(undefined2 *)0xc22 = 1;
      local_4 = (undefined1 *)0x2;
      local_6 = (undefined1 *)0x12;
      local_8 = (undefined2 *****)0x22b2;
      local_a = (undefined1 *)0xb248;
      FUN_1000_0599();
      local_4 = (undefined1 *)0x396;
      local_6 = (undefined1 *)0xdef;
      pppppuVar1 = (undefined2 *****)0x11f2;
      local_8 = (undefined2 *****)0xb253;
      func_0x00012276();
    }
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb1f5;
    func_0x000297e6();
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb1fe;
    func_0x000297e6();
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb203;
    FUN_28b3_1181();
    if ((bool)uVar3) goto LAB_3ab8_06b5;
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb20d;
    func_0x000297e6();
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb216;
    func_0x000297e6();
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb21b;
    FUN_28b3_1181();
    if (!(bool)uVar3 && !(bool)uVar4) goto LAB_3ab8_06b5;
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb225;
    func_0x000297e6();
    local_4 = (undefined1 *)0x22b2;
    local_6 = (undefined1 *)0xb22e;
    func_0x000297e6();
    local_4 = (undefined1 *)0x22b2;
    pppppuVar1 = (undefined2 *****)0x22b2;
    local_6 = (undefined1 *)0xb233;
    FUN_28b3_1181();
    if ((bool)uVar3) goto LAB_3ab8_06b5;
    if (local_4 == (undefined1 *)0x0) {
      *param_1 = local_8;
      param_1[1] = local_6;
LAB_3ab8_06f1:
      *param_2 = local_c;
      param_2[1] = local_a;
      return 1;
    }
    if (local_4 == (undefined1 *)0x65) {
      *param_1 = local_c;
      param_1[1] = local_a;
      local_c = (undefined2 ******)local_8;
      local_a = local_6;
      goto LAB_3ab8_06f1;
    }
    if (local_4 == (undefined1 *)0x66) {
      return 1;
    }
  } while( true );
}



/* 3ab8:0727  FUN_3ab8_0727  10615 bytes, 0 callers */

/* WARNING: Heritage AFTER dead removal. Example location: s0xf796 : 0x0003c2f1 */
/* WARNING: Removing unreachable block (ram,0x0003b4a5) */
/* WARNING: Removing unreachable block (ram,0x0003c42c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_3ab8_0727(void)

{
  uint *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int *piVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  long lVar18;
  int *piVar19;
  undefined2 *puVar20;
  undefined2 local_a08;
  undefined2 local_a06;
  undefined2 local_9fc;
  undefined2 local_9fa;
  int local_9f8;
  int local_9f6;
  int local_9f0;
  uint local_9ea;
  uint local_9e8;
  int local_9e6;
  undefined2 local_9e4;
  undefined2 local_9e2;
  int local_9dc;
  int local_9da;
  undefined2 local_9d8;
  undefined2 local_9d6;
  undefined2 local_9d0 [11];
  uint local_9ba;
  undefined2 local_9b8;
  undefined2 local_9b6;
  int local_9b4;
  int local_9b2;
  undefined1 local_9b0 [80];
  int local_960;
  int local_95e;
  int local_95c;
  int local_95a;
  undefined2 local_958;
  undefined2 local_956;
  undefined2 local_954;
  int local_952;
  undefined2 local_950;
  undefined2 local_94e;
  undefined2 local_94c;
  undefined2 local_944;
  int local_910;
  int local_8fe [50];
  int local_89a;
  undefined2 local_898;
  undefined2 local_896;
  undefined2 local_894;
  int local_892;
  undefined2 local_890;
  undefined2 local_88e;
  undefined2 local_88c;
  int local_882;
  undefined2 local_870;
  undefined2 local_86e;
  uint auStack_86c [22];
  undefined2 local_840;
  int local_83e;
  undefined2 local_82e;
  undefined2 local_82c;
  undefined4 local_82a;
  undefined2 local_822;
  undefined2 local_820;
  undefined2 local_81e;
  undefined2 local_81c;
  undefined2 local_816;
  undefined2 local_814;
  undefined2 auStack_812 [44];
  int local_7ba;
  int *local_7b8;
  undefined4 local_7b6;
  int local_7b2;
  int local_7b0;
  undefined2 local_7ae;
  undefined2 local_7ac;
  int local_7aa;
  int local_7a8;
  undefined2 local_7a6;
  undefined2 local_7a4;
  undefined2 local_786;
  undefined2 local_784 [43];
  undefined2 auStack_72e [44];
  int local_6d6;
  int local_6d4;
  undefined2 local_6d2;
  undefined2 local_6d0;
  int local_6ce;
  int local_6cc;
  undefined2 local_6ca;
  undefined2 local_6c8;
  undefined2 local_6aa;
  undefined2 local_6a8 [45];
  int local_64e;
  int local_64c;
  undefined2 local_64a;
  undefined2 local_648;
  int local_646;
  int local_644;
  undefined2 local_642;
  undefined2 local_640;
  undefined1 local_63e;
  undefined1 local_63d;
  undefined1 local_63c;
  int local_638 [20];
  int aiStack_610 [4];
  int local_608;
  undefined2 local_606;
  undefined2 local_604;
  undefined2 local_5fe [2];
  int aiStack_5fa [242];
  int aiStack_416 [15];
  int aiStack_3f8 [7];
  int local_3ea;
  int local_3e8;
  int aiStack_3e2 [246];
  undefined2 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined2 local_1f0;
  undefined2 local_1ee;
  undefined2 local_1ec;
  undefined2 local_1ea;
  undefined2 local_1e8;
  int aiStack_1e6 [11];
  int local_1d0 [203];
  undefined2 uStack_3a;
  int iStack_38;
  int aiStack_34 [4];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 auStack_28 [2];
  undefined2 uStack_24;
  int iStack_20;
  int aiStack_1c [3];
  undefined1 *puStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int *piStack_10;
  int *piStack_e;
  undefined2 *puStack_c;
  
  FUN_21f2_0ebc();
  local_7ba = 0x14;
  local_6aa = *(undefined2 *)0x1152;
  local_6a8[0] = *(undefined2 *)0x1154;
  local_786 = *(undefined2 *)0x1156;
  local_784[0] = *(undefined2 *)0x1158;
  puStack_c = (undefined2 *)0x22b2;
  uVar14 = 0x22b2;
  piStack_e = (int *)0xb2e6;
  func_0x00024c86();
LAB_3ab8_0768:
  do {
    local_7b8 = (int *)0x0;
    local_840 = 0;
    local_9f0 = 0;
    local_7b6._2_2_ = 0;
    local_7b6._0_2_ = 0;
    local_82a._2_2_ = 0;
    local_82a._0_2_ = 0;
LAB_3ab8_0786:
    piStack_e = (int *)0xb314;
    puStack_c = (undefined2 *)uVar14;
    func_0x00024c86();
    puStack_c = (undefined2 *)0x22b2;
    piStack_e = (int *)0xb324;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    piStack_e = (int *)0xb334;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    piStack_e = (int *)0xb344;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    piStack_e = (int *)0xb354;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)*(undefined2 *)0x1154;
    piStack_e = (int *)*(undefined2 *)0x1152;
    piStack_10 = (int *)0x4683;
    uStack_12 = 0x6e8;
    uStack_14 = 0x468e;
    puStack_16 = local_9b0;
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb37c;
    FUN_10ad_19f9();
    puStack_c = (undefined2 *)0x11f2;
    piStack_e = (int *)0xb38e;
    FUN_21f2_2d26();
    puStack_c = (undefined2 *)0x22b2;
    piStack_e = (int *)0xb39e;
    FUN_21f2_2d26();
    *(undefined2 *)0xc1a = 1;
    puStack_c = &local_9e4;
    piStack_e = local_8fe;
    piStack_10 = (int *)0x0;
    uStack_12 = 0x22b2;
    uVar14 = 0x1bb4;
    uStack_14 = 0xb3c2;
    local_960 = FUN_1def_0904();
    *(undefined2 *)0xc1a = 0;
    if (*(int *)0x158 != 0) {
      return;
    }
    if (*(int *)0xc18 == 0) {
      if (local_960 == 1) {
        local_83e = 0;
        puStack_c = (undefined2 *)0x1bb4;
        piStack_e = (int *)0xb438;
        aiStack_610[2] = FUN_3ab8_051b();
        if (*(int *)0x158 != 0) {
          return;
        }
      }
      if (local_83e != 0) {
        *(undefined1 *)0xb8c = 1;
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xb46f;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xb478;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xb47d;
        func_0x00029d78();
        aiStack_1c[2] = 0x22b2;
        aiStack_1c[1] = 0xb487;
        func_0x000299d1();
        aiStack_1c[2] = 0x22b2;
        uVar14 = 0x11f2;
        aiStack_1c[1] = 0xb48c;
        lVar18 = FUN_13bf_39a0();
        *(undefined1 *)0xb8c = 0;
        if (0 < lVar18) {
          puStack_c = (undefined2 *)0x11f2;
          piStack_e = (int *)0xb4b3;
          piVar19 = (int *)func_0x0000013f();
          piVar13 = (int *)piVar19;
          piVar8 = local_638;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            piVar4 = piVar8;
            piVar8 = piVar8 + 1;
            piVar2 = piVar13;
            piVar13 = piVar13 + 1;
            *piVar4 = *piVar2;
          }
          func_0x000297e6();
          func_0x00029d78();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xb4de;
          func_0x000299d1();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xb4e7;
          func_0x000297e6();
          piStack_10 = (int *)0x22b2;
          uStack_12 = 0xb4ec;
          func_0x00029d78();
          aiStack_1c[2] = 0x22b2;
          aiStack_1c[1] = 0xb4f6;
          func_0x000299d1();
          aiStack_1c[2] = 0x22b2;
          aiStack_1c[1] = 0xb4ff;
          func_0x000297e6();
          aiStack_1c[2] = 0x22b2;
          aiStack_1c[1] = 0xb504;
          func_0x00029d78();
          iStack_20 = 0x22b2;
          func_0x000299d1();
          iStack_20 = 0x22b2;
          func_0x000297e6();
          iStack_20 = 0x22b2;
          func_0x00029d78();
          auStack_28[0] = 0x22b2;
          uStack_2a = 0xb526;
          func_0x000299d1();
          auStack_28[0] = 0x22b2;
          uVar14 = 0x1bb4;
          uStack_2a = 0xb52b;
          iVar10 = FUN_1def_043a();
          if (iVar10 != 0) break;
        }
        if (lVar18 < 0) {
          *(undefined2 *)0xc22 = 1;
          piStack_e = (int *)0xb5f0;
          puStack_c = (undefined2 *)uVar14;
          FUN_1000_0599();
          uVar14 = 0x11f2;
          puStack_c = (undefined2 *)0xb5fb;
          func_0x00012276();
        }
      }
      goto LAB_3ab8_0786;
    }
    local_7b8 = (int *)0x0;
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb3fe;
    func_0x000299d1();
LAB_3ab8_0882:
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb407;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb40c;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb416;
    func_0x000299d1();
    aiStack_1c[2] = 0x22b2;
    uVar14 = 0x3bf;
    aiStack_1c[1] = 0xb41b;
    func_0x0000507a();
  } while( true );
LAB_3ab8_09b5:
  uVar14 = 0x885;
  func_0x0000abfa();
  do {
    do {
      piStack_e = (int *)0xb548;
      puStack_c = (undefined2 *)uVar14;
      func_0x00024c86();
      puStack_c = (undefined2 *)0x22b2;
      piStack_e = (int *)0xb558;
      FUN_21f2_2d26();
      puStack_c = (undefined2 *)0x22b2;
      piStack_e = (int *)0xb568;
      FUN_21f2_2d26();
      puStack_c = (undefined2 *)0x22b2;
      piStack_e = (int *)0xb578;
      FUN_21f2_2d26();
      puStack_c = (undefined2 *)0x22b2;
      piStack_e = (int *)0xb588;
      FUN_21f2_2d26();
      puStack_c = (undefined2 *)0x22b2;
      piStack_e = (int *)0xb598;
      FUN_21f2_2d26();
      puStack_c = (undefined2 *)0x22b2;
      piStack_e = (int *)0xb5a8;
      FUN_21f2_2d26();
      puStack_c = (undefined2 *)0x22b2;
      piStack_e = (int *)0xb5b9;
      FUN_21f2_2d26();
      *(undefined2 *)0xc2c = 1;
      *(undefined2 *)0xc1a = 1;
      *(undefined2 *)0xc20 = 1;
      local_7b8 = (int *)(uint)(1 < local_9f0);
      puStack_c = local_5fe;
      piStack_e = local_8fe;
      piStack_10 = local_7b8;
      uStack_12 = 0x22b2;
      uVar14 = 0x1bb4;
      uStack_14 = 0xb622;
      local_960 = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      *(undefined2 *)0xc1a = 0;
      *(undefined2 *)0xc20 = 0;
      if (*(int *)0x158 != 0) {
        return;
      }
      if (*(int *)0xc18 != 0) {
        local_7b8 = (int *)0x0;
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        uStack_12 = 0xb65f;
        func_0x000299d1();
        goto LAB_3ab8_0882;
      }
      if (local_960 == 0x14) goto LAB_3ab8_0768;
      if ((local_960 == -1) && (0 < (int)local_7b8)) {
        puStack_c = (undefined2 *)0xb686;
        func_0x0000daa6();
        local_83e = 0;
        iVar10 = local_9f0 + -1;
        uVar14 = 0x885;
        while (0 < aiStack_416[iVar10]) {
          lVar18 = CONCAT22(*(undefined2 *)0x14a,*(undefined2 *)0x148);
          piStack_e = (int *)0xb6a9;
          puStack_c = (undefined2 *)uVar14;
          func_0x00018779();
          aiStack_416[iVar10] = aiStack_416[iVar10] + -1;
          uVar14 = 0x11f2;
        }
        puVar1 = auStack_86c + local_9f0;
        local_9f0 = iVar10;
        if (*puVar1 != 2) goto LAB_3ab8_0bff;
        piVar13 = aiStack_1c;
        piVar8 = &local_95a;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          piVar2 = piVar13;
          piVar13 = piVar13 + 1;
          piVar19 = piVar8;
          piVar8 = piVar8 + 1;
          *piVar2 = *piVar19;
        }
        uVar14 = 0x11f2;
        iStack_20 = -0x491f;
        FUN_17a6_0cba();
        local_9e6 = *(int *)0x14a;
        for (local_9e8 = *(uint *)0x148;
            (lVar18 = CONCAT22(local_9e6,local_9e8), puStack_c = (undefined2 *)uVar14,
            local_7b6._2_2_ <= local_9e6 &&
            ((local_7b6._2_2_ < local_9e6 || ((uint)local_7b6 < local_9e8))));
            local_9e8 = local_9e8 - 1) {
          piStack_e = (int *)0xb722;
          puVar20 = (undefined2 *)func_0x0000013f();
          puVar11 = (undefined2 *)puVar20;
          puVar9 = local_9d0;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar5 = puVar9;
            puVar9 = puVar9 + 1;
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar5 = *puVar3;
          }
          puStack_c = (undefined2 *)0x0;
          uVar14 = 0;
          piStack_e = (int *)0xb742;
          puVar20 = (undefined2 *)func_0x0000013f();
          puVar11 = (undefined2 *)puVar20;
          puVar9 = local_9d0;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar5 = puVar11;
            puVar11 = puVar11 + 1;
            puVar3 = puVar9;
            puVar9 = puVar9 + 1;
            *puVar5 = *puVar3;
          }
          local_9e6 = local_9e6 - (uint)(local_9e8 == 0);
        }
        piStack_e = (int *)0xb768;
        piVar19 = (int *)func_0x0000013f();
        piVar13 = (int *)piVar19;
        piVar8 = &local_95a;
        iVar10 = 0xb;
        do {
          if (iVar10 == 0) goto LAB_3ab8_0bff;
          iVar10 = iVar10 + -1;
          piVar4 = piVar13;
          piVar13 = piVar13 + 1;
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          *piVar4 = *piVar2;
        } while( true );
      }
    } while (local_882 == 0);
    puStack_c = &local_9e4;
    piStack_e = (int *)0x1bb4;
    piStack_10 = (int *)0xb888;
    func_0x000297e6();
    piStack_e = (int *)0x22b2;
    piStack_10 = (int *)0xb88d;
    func_0x00029d78();
    puStack_16 = (undefined1 *)0x22b2;
    aiStack_1c[2] = 0xb897;
    func_0x000299d1();
    puStack_16 = (undefined1 *)0x22b2;
    aiStack_1c[2] = 0xb8a0;
    func_0x000297e6();
    puStack_16 = (undefined1 *)0x22b2;
    aiStack_1c[2] = 0xb8a5;
    func_0x00029d78();
    uVar14 = 0x22b2;
    iStack_20 = -0x4751;
    func_0x000299d1();
    piVar13 = aiStack_34;
    piVar8 = local_638;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    iStack_38 = 0x22b2;
    uStack_3a = 0xb8cc;
    local_9ba = FUN_3ab8_309e();
    if (*(int *)0x158 != 0) {
      return;
    }
  } while ((int)local_9ba < 0);
  if (local_9ba == 0) {
    puStack_c = (undefined2 *)*(undefined2 *)0x9cf2;
    piStack_e = (int *)*(undefined2 *)0x9cf0;
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb904;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb909;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb913;
    func_0x000299d1();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb91c;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb921;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 1;
    uStack_24 = 0xb934;
    FUN_1def_05d1();
    piStack_10 = (int *)0x1bb4;
    uStack_12 = 0xb93e;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb947;
    func_0x0002996b();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb94c;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb956;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x46a2;
    puVar9 = (undefined2 *)FUN_1def_05d1();
    local_82e = *puVar9;
    local_82c = puVar9[1];
    puStack_c = (undefined2 *)*(int *)0x9cf2;
    piStack_e = (int *)*(undefined2 *)0x9cf0;
    piStack_10 = (int *)0x1bb4;
    uStack_12 = 0xb989;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb993;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    uVar14 = 0x1bb4;
    aiStack_1c[0] = -0x4665;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_870 = *puVar9;
    local_86e = puVar9[1];
  }
  if (local_9ba == 1) {
    piStack_e = (int *)0xb9c4;
    puStack_c = (undefined2 *)uVar14;
    piVar19 = (int *)func_0x0000013f();
    piVar13 = (int *)piVar19;
    piVar8 = local_638;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar4 = piVar8;
      piVar8 = piVar8 + 1;
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar4 = *piVar2;
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb9ef;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb9f8;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb9fd;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xba07;
    func_0x000299d1();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xba10;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xba15;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 0x22b2;
    func_0x000297e6();
    iStack_20 = 0x22b2;
    func_0x00029d78();
    auStack_28[0] = 0x22b2;
    uStack_2a = 0xba37;
    func_0x000299d1();
    auStack_28[0] = 0x22b2;
    uStack_2a = 0xba3c;
    FUN_1def_043a();
    goto LAB_3ab8_09b5;
  }
  if (local_9ba == 2) {
    piStack_e = (int *)0xba63;
    puStack_c = (undefined2 *)uVar14;
    local_7b6 = lVar18;
    piVar19 = (int *)func_0x0000013f();
    piVar13 = (int *)piVar19;
    piVar8 = &local_89a;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar4 = piVar8;
      piVar8 = piVar8 + 1;
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar4 = *piVar2;
    }
    puStack_c = (undefined2 *)0xba7e;
    func_0x0000daa6();
    puStack_c = (undefined2 *)0x885;
    piStack_e = (int *)0xba8c;
    func_0x00018779();
    puStack_c = (undefined2 *)0xba97;
    func_0x0000b1d8();
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbab0;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbab9;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbabe;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xbac8;
    func_0x000299d1();
    aiStack_1c[2] = 1;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x452f;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_1ea = *puVar9;
    local_1e8 = puVar9[1];
    piVar13 = &iStack_20;
    piVar8 = &local_89a;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    piVar13 = (int *)&stack0xffca;
    piVar8 = local_638;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    iStack_38 = 0x1bb4;
    uStack_3a = 0xbb10;
    local_944 = FUN_1def_1921();
  }
  local_9f0 = 1;
  piVar8 = local_1d0;
  piVar13 = local_638;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar8;
    piVar8 = piVar8 + 1;
    piVar19 = piVar13;
    piVar13 = piVar13 + 1;
    *piVar2 = *piVar19;
  }
  auStack_86c[1] = local_9ba;
  auStack_72e[2] = local_82e;
  auStack_72e[3] = local_82c;
  auStack_812[2] = local_870;
  auStack_812[3] = local_86e;
  aiStack_416[1] = 0;
  local_7b8 = (int *)0x0;
  local_840 = 0;
  local_7b6._0_2_ = *(uint *)0x148;
  local_7b6._2_2_ = *(int *)0x14a;
LAB_3ab8_0ff1:
  local_82e = auStack_72e[local_9f0 * 2];
  local_82c = auStack_72e[local_9f0 * 2 + 1];
  local_870 = auStack_812[local_9f0 * 2];
  local_86e = auStack_812[local_9f0 * 2 + 1];
  piVar13 = local_638;
  piVar8 = aiStack_1e6 + local_9f0 * 0xb;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar13;
    piVar13 = piVar13 + 1;
    piVar19 = piVar8;
    piVar8 = piVar8 + 1;
    *piVar2 = *piVar19;
  }
  func_0x000297e6();
  func_0x00029b6d();
  func_0x0002996b();
  func_0x00029b9d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029b85();
  func_0x0002996b();
  FUN_28b3_0ee9();
  local_9ba = auStack_86c[local_9f0];
  uVar15 = local_9ba < 2;
  uVar17 = local_9ba == 2;
  if ((bool)uVar17) {
    local_3e8 = 0;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar15 || (bool)uVar17) {
LAB_3ab8_10e0:
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar15 && !(bool)uVar17) {
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029bb5();
        FUN_28b3_1181();
        if (!(bool)uVar15 && !(bool)uVar17) goto LAB_3ab8_111b;
      }
    }
    else {
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029bb5();
      FUN_28b3_1181();
      if (!(bool)uVar15) goto LAB_3ab8_10e0;
LAB_3ab8_111b:
      local_3e8 = 1;
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbcb9;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbcc2;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbcc7;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xbcd1;
    func_0x000299d1();
    aiStack_1c[2] = 1;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x4326;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_816 = *puVar9;
    local_814 = puVar9[1];
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbd0d;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbd16;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbd1b;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xbd25;
    func_0x000299d1();
    aiStack_1c[2] = 1;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x42d2;
    func_0x0001e558();
    uVar15 = (undefined1 *)0xffed < aiStack_1c + 2;
    func_0x000297e6();
    func_0x0002996b();
    FUN_28b3_1181();
    if ((bool)uVar15) {
      local_822 = local_816;
      local_820 = local_814;
      func_0x000297e6();
      func_0x00029983();
      uVar7 = local_894;
      uVar6 = local_896;
      uVar14 = local_898;
      iVar10 = local_89a;
      local_81e = local_822;
      local_81c = local_820;
      local_89a = local_892;
      local_898 = local_890;
      local_892 = iVar10;
      local_890 = uVar14;
      local_822 = local_896;
      local_820 = local_894;
      local_896 = local_88e;
      local_894 = local_88c;
      local_88e = uVar6;
      local_88c = uVar7;
    }
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbdf0;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9cf6;
    uStack_12 = *(undefined2 *)0x9cf4;
    uStack_14 = *(undefined2 *)0x9cf2;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cf0;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x41f8;
    piVar8 = (int *)FUN_1def_05d1();
    local_64e = *piVar8;
    local_64c = piVar8[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbe2d;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9cf6;
    uStack_12 = *(undefined2 *)0x9cf4;
    uStack_14 = *(undefined2 *)0x9cf2;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cf0;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x41bb;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_64a = *puVar9;
    local_648 = puVar9[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbe6a;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d02;
    uStack_12 = *(undefined2 *)0x9d00;
    uStack_14 = *(undefined2 *)0x9cfe;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cfc;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x417e;
    puVar9 = (undefined2 *)FUN_1def_05d1();
    local_646 = *puVar9;
    local_644 = puVar9[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbea7;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d02;
    uStack_12 = *(undefined2 *)0x9d00;
    uStack_14 = *(undefined2 *)0x9cfe;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cfc;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x4141;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_642 = *puVar9;
    local_640 = puVar9[1];
    piVar13 = &iStack_20;
    piVar8 = &local_89a;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    piVar13 = (int *)&stack0xffca;
    piVar8 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    iStack_38 = 0x1bb4;
    uStack_3a = 0xbefe;
    FUN_1def_1921();
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029d78();
    func_0x000299b9();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbf27;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9cf6;
    uStack_12 = *(undefined2 *)0x9cf4;
    uStack_14 = *(undefined2 *)0x9cf2;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cf0;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x40c1;
    piVar8 = (int *)FUN_1def_05d1();
    local_64e = *piVar8;
    local_64c = piVar8[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbf64;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9cf6;
    uStack_12 = *(undefined2 *)0x9cf4;
    uStack_14 = *(undefined2 *)0x9cf2;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cf0;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x4084;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_64a = *puVar9;
    local_648 = puVar9[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbfa1;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d02;
    uStack_12 = *(undefined2 *)0x9d00;
    uStack_14 = *(undefined2 *)0x9cfe;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cfc;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x4047;
    piVar8 = (int *)FUN_1def_05d1();
    local_646 = *piVar8;
    local_644 = piVar8[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xbfde;
    func_0x000299d1();
    piStack_10 = (int *)*(int *)0x9d02;
    uStack_12 = *(undefined2 *)0x9d00;
    uStack_14 = *(undefined2 *)0x9cfe;
    puStack_16 = (undefined1 *)*(int *)0x9cfc;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x400a;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_642 = *puVar9;
    local_640 = puVar9[1];
    piVar13 = &iStack_20;
    piVar8 = &local_89a;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    piVar13 = (int *)&stack0xffca;
    piVar8 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    iStack_38 = 0x1bb4;
    uStack_3a = 0xc035;
    local_944 = FUN_1def_1921();
  }
  else {
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc052;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc05b;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc060;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xc06a;
    func_0x000299d1();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xc073;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xc078;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 1;
    uStack_24 = 0xc08b;
    FUN_1def_05d1();
    piStack_10 = (int *)0x1bb4;
    uStack_12 = 0xc095;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc09e;
    func_0x0002996b();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc0a3;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xc0ad;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3f4b;
    piVar8 = (int *)FUN_1def_05d1();
    local_95e = *piVar8;
    local_95c = piVar8[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc0da;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc0e3;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xc0ed;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3f0b;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_9b8 = *puVar9;
    local_9b6 = puVar9[1];
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029d78();
    func_0x000299b9();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc12d;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc136;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xc140;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3eb8;
    piVar8 = (int *)FUN_1def_05d1();
    local_9b4 = *piVar8;
    local_9b2 = piVar8[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc16d;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc176;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xc180;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3e78;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_9d8 = *puVar9;
    local_9d6 = puVar9[1];
  }
LAB_3ab8_161a:
  local_606 = *(undefined2 *)0x9cec;
  local_604 = *(undefined2 *)0x9cee;
  local_1f2 = local_606;
  local_1f0 = local_604;
  func_0x0001bb4e();
  puStack_c = (undefined2 *)0xc1bf;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc1c9;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc1d3;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc1dd;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc1e7;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc1f1;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc1fc;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc206;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc210;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc21a;
  func_0x00012276();
  puStack_c = (undefined2 *)0xc224;
  func_0x00012276();
  uVar14 = 0x11f2;
  puStack_c = (undefined2 *)0xc22e;
  func_0x00012276();
LAB_3ab8_16af:
  *(undefined2 *)0xc20 = 1;
  *(undefined2 *)0xa4a = 1;
  *(undefined2 *)0xa48 = 1;
  puStack_c = &local_9e4;
  piStack_e = aiStack_610 + 3;
  piStack_10 = &local_3ea;
  uStack_14 = 0xc259;
  uStack_12 = uVar14;
  local_960 = func_0x00006608();
  *(undefined2 *)0xc20 = 0;
  *(undefined2 *)0xa4a = 0;
  *(undefined2 *)0xa48 = 0;
  if (*(int *)0x158 != 0) {
    return;
  }
  if ((local_83e != 0) && (aiStack_610[3] < 0x10)) {
    local_83e = 0;
    local_960 = 0;
    if (local_3ea < 0x28) {
      local_960 = -1;
    }
    if (0x220 < local_3ea) {
      local_960 = 0x31;
    }
  }
  if (local_960 == 0x31) {
    FUN_1885_2ec3();
    puStack_c = (undefined2 *)0x1b6e;
    piStack_e = (int *)0xc2bc;
    aiStack_610[2] = FUN_3ab8_051b();
    if (*(int *)0x158 != 0) {
      return;
    }
    goto LAB_3ab8_0ff1;
  }
  if (local_960 == -1) {
    puStack_c = (undefined2 *)0xc2de;
    func_0x0000daa6();
    FUN_1885_2ec3();
    if (local_9f0 == 1) {
      if (auStack_86c[1] == 2) {
        piVar13 = aiStack_1c;
        piVar8 = &local_89a;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          piVar2 = piVar13;
          piVar13 = piVar13 + 1;
          piVar19 = piVar8;
          piVar8 = piVar8 + 1;
          *piVar2 = *piVar19;
        }
        iStack_20 = -0x3cf0;
        FUN_17a6_0cba();
      }
      goto LAB_3ab8_09b5;
    }
    local_9f0 = local_9f0 + -1;
    uVar14 = 0x1b6e;
    while (0 < aiStack_416[local_9f0]) {
      lVar18 = CONCAT22(*(undefined2 *)0x14a,*(undefined2 *)0x148);
      piStack_e = (int *)&SUB_0000_c340;
      puStack_c = (undefined2 *)uVar14;
      func_0x00018779();
      aiStack_416[local_9f0] = aiStack_416[local_9f0] + -1;
      uVar14 = 0x11f2;
    }
LAB_3ab8_0bff:
    func_0x0000abfa();
    puStack_c = (undefined2 *)0xb78d;
    func_0x0000b1d8();
    local_1f2 = *(undefined2 *)0x9cec;
    local_1f0 = *(undefined2 *)0x9cee;
    local_82e = auStack_72e[local_9f0 * 2];
    local_82c = auStack_72e[local_9f0 * 2 + 1];
    local_870 = auStack_812[local_9f0 * 2];
    local_86e = auStack_812[local_9f0 * 2 + 1];
    piVar8 = aiStack_1e6 + local_9f0 * 0xb;
    piVar13 = local_638;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb7f7;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb800;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xb805;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb80f;
    func_0x000299d1();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb818;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xb81d;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 0x22b2;
    func_0x000297e6();
    iStack_20 = 0x22b2;
    func_0x00029d78();
    auStack_28[0] = 0x22b2;
    uStack_2a = 0xb83f;
    func_0x000299d1();
    auStack_28[0] = 0x22b2;
    uStack_2a = 0xb844;
    FUN_1def_043a();
    uVar14 = local_6a8[local_9f0 * 2];
    *(undefined2 *)0x1152 = local_6a8[local_9f0 * 2 + -1];
    *(undefined2 *)0x1154 = uVar14;
    uVar14 = local_784[local_9f0 * 2];
    *(undefined2 *)0x1156 = local_784[local_9f0 * 2 + -1];
    *(undefined2 *)0x1158 = uVar14;
    goto LAB_3ab8_0ff1;
  }
  if (local_960 == 99) goto LAB_3ab8_161a;
  uVar15 = local_83e == 0;
  if ((bool)uVar15) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar15) goto code_r0x0003c510;
    goto LAB_3ab8_19ac;
  }
  local_910 = local_83e;
  puStack_c = &local_9e4;
  piStack_e = (int *)0x3bf;
  piStack_10 = (int *)0xc388;
  func_0x000297e6();
  piStack_e = (int *)0x22b2;
  piStack_10 = (int *)0xc38d;
  func_0x00029d78();
  puStack_16 = (undefined1 *)0x22b2;
  aiStack_1c[2] = 0xc397;
  func_0x000299d1();
  puStack_16 = (undefined1 *)0x22b2;
  aiStack_1c[2] = 0xc3a0;
  func_0x000297e6();
  puStack_16 = (undefined1 *)0x22b2;
  aiStack_1c[2] = 0xc3a9;
  func_0x0002996b();
  puStack_16 = (undefined1 *)0x22b2;
  aiStack_1c[2] = 0xc3ae;
  func_0x00029d78();
  iStack_20 = -0x3c48;
  func_0x000299d1();
  piVar13 = aiStack_34;
  piVar8 = local_638;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar13;
    piVar13 = piVar13 + 1;
    piVar19 = piVar8;
    piVar8 = piVar8 + 1;
    *piVar2 = *piVar19;
  }
  iStack_38 = 0x22b2;
  uStack_3a = 0xc3d5;
  local_9ea = FUN_3ab8_309e();
  if (*(int *)0x158 != 0) {
    return;
  }
  local_1f6 = local_9e4;
  local_1f4 = local_9e2;
  puStack_c = (undefined2 *)0x22b2;
  piStack_e = (int *)0xc413;
  FUN_1000_0599();
  if (local_9ea == 2) {
    if (CONCAT22(local_7b6._2_2_,(uint)local_7b6) < lVar18) {
      local_9ea = 0xffff;
      *(undefined2 *)0xc22 = 1;
      puStack_c = (undefined2 *)0xc447;
      func_0x00012276();
    }
    else {
      puStack_c = (undefined2 *)0xdef;
      piStack_e = (int *)0xc459;
      local_82a = lVar18;
      piVar19 = (int *)func_0x0000013f();
      piVar13 = (int *)piVar19;
      piVar8 = &local_95a;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        piVar4 = piVar8;
        piVar8 = piVar8 + 1;
        piVar2 = piVar13;
        piVar13 = piVar13 + 1;
        *piVar4 = *piVar2;
      }
    }
  }
  if ((int)local_9ea < 0) goto LAB_3ab8_161a;
  FUN_1885_2ec3();
  local_7b8 = (int *)0x0;
  local_840 = 0;
  puStack_c = (undefined2 *)0xc48b;
  func_0x0000daa6();
  uVar14 = 0x885;
  func_0x0000c3ca();
  if (local_9ba == 2) {
    uVar15 = 0;
    uVar17 = local_3e8 == 0;
    if ((bool)uVar17) {
      piVar8 = &local_64e;
      piVar13 = &local_89a;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        piVar2 = piVar8;
        piVar8 = piVar8 + 1;
        piVar19 = piVar13;
        piVar13 = piVar13 + 1;
        *piVar2 = *piVar19;
      }
      local_64e = local_95e;
      local_64c = local_95c;
      local_64a = local_9b8;
      local_648 = local_9b6;
      local_646 = local_9b4;
      local_644 = local_9b2;
      local_642 = local_9d8;
      local_640 = local_9d6;
LAB_3ab8_251b:
      piVar13 = aiStack_1c;
      piVar8 = &local_64e;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        piVar2 = piVar13;
        piVar13 = piVar13 + 1;
        piVar19 = piVar8;
        piVar8 = piVar8 + 1;
        *piVar2 = *piVar19;
      }
      uVar14 = 0x11f2;
      iStack_20 = -0x2f52;
      iVar10 = FUN_17a6_0cba();
      if (iVar10 != 0) {
        aiStack_416[local_9f0] = aiStack_416[local_9f0] + 1;
      }
    }
    else {
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029bb5();
      FUN_28b3_1181();
      if ((bool)uVar15) {
        func_0x000297e6();
        func_0x000297e6();
        FUN_28b3_1181();
        uVar16 = false;
        if ((bool)uVar15) {
          piVar8 = &local_64e;
          piVar13 = &local_89a;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            piVar2 = piVar8;
            piVar8 = piVar8 + 1;
            piVar19 = piVar13;
            piVar13 = piVar13 + 1;
            *piVar2 = *piVar19;
          }
          local_646 = local_95e;
          local_644 = local_95c;
          local_642 = local_9b8;
          local_640 = local_9b6;
          piVar13 = aiStack_1c;
          piVar8 = &local_64e;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            piVar2 = piVar13;
            piVar13 = piVar13 + 1;
            piVar19 = piVar8;
            piVar8 = piVar8 + 1;
            *piVar2 = *piVar19;
          }
          iStack_20 = -0x3082;
          iVar10 = FUN_17a6_0cba();
          uVar16 = false;
          uVar17 = iVar10 == 0;
          if (!(bool)uVar17) {
            uVar16 = local_9f0 < 0;
            piVar19 = aiStack_416 + local_9f0;
            *piVar19 = *piVar19 + 1;
            uVar17 = *piVar19 == 0;
          }
        }
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029bb5();
        uVar14 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar16 && !(bool)uVar17) {
          piVar8 = &local_64e;
          piVar13 = &local_89a;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            piVar2 = piVar8;
            piVar8 = piVar8 + 1;
            piVar19 = piVar13;
            piVar13 = piVar13 + 1;
            *piVar2 = *piVar19;
          }
          local_64e = local_9b4;
          local_64c = local_9b2;
          local_64a = local_9d8;
          local_648 = local_9d6;
          goto LAB_3ab8_2513;
        }
      }
      else {
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029bb5();
        FUN_28b3_1181();
        uVar16 = false;
        if ((bool)uVar15) {
          piVar8 = &local_64e;
          piVar13 = &local_89a;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            piVar2 = piVar8;
            piVar8 = piVar8 + 1;
            piVar19 = piVar13;
            piVar13 = piVar13 + 1;
            *piVar2 = *piVar19;
          }
          local_646 = local_9b4;
          local_644 = local_9b2;
          local_642 = local_9d8;
          local_640 = local_9d6;
          piVar13 = aiStack_1c;
          piVar8 = &local_64e;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            piVar2 = piVar13;
            piVar13 = piVar13 + 1;
            piVar19 = piVar8;
            piVar8 = piVar8 + 1;
            *piVar2 = *piVar19;
          }
          iStack_20 = -0x2fbe;
          iVar10 = FUN_17a6_0cba();
          uVar16 = false;
          uVar17 = iVar10 == 0;
          if (!(bool)uVar17) {
            uVar16 = local_9f0 < 0;
            piVar19 = aiStack_416 + local_9f0;
            *piVar19 = *piVar19 + 1;
            uVar17 = *piVar19 == 0;
          }
        }
        func_0x000297e6();
        func_0x000297e6();
        uVar14 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar16 && !(bool)uVar17) {
          piVar8 = &local_64e;
          piVar13 = &local_89a;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            piVar2 = piVar8;
            piVar8 = piVar8 + 1;
            piVar19 = piVar13;
            piVar13 = piVar13 + 1;
            *piVar2 = *piVar19;
          }
          local_64e = local_95e;
          local_64c = local_95c;
          local_64a = local_9b8;
          local_648 = local_9b6;
LAB_3ab8_2513:
          goto LAB_3ab8_251b;
        }
      }
    }
    local_7b6._0_2_ = *(uint *)0x148;
    local_7b6._2_2_ = *(int *)0x14a;
  }
  if ((local_9ea == 1) && (local_7ba <= local_9f0 + 1)) {
    *(undefined2 *)0xc22 = 1;
    piStack_e = (int *)0xd0f3;
    puStack_c = (undefined2 *)uVar14;
    FUN_1000_0599();
    puStack_c = (undefined2 *)0xd0fe;
    func_0x00012276();
    goto LAB_3ab8_0ff1;
  }
  local_63d = *(undefined1 *)0xa6a;
  local_63e = *(undefined1 *)0xa6c;
  local_63c = *(undefined1 *)0xb310;
  piVar8 = &local_6d6;
  piVar13 = &local_64e;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar8;
    piVar8 = piVar8 + 1;
    piVar19 = piVar13;
    piVar13 = piVar13 + 1;
    *piVar2 = *piVar19;
  }
  piVar8 = &local_7b2;
  piVar13 = &local_64e;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar8;
    piVar8 = piVar8 + 1;
    piVar19 = piVar13;
    piVar13 = piVar13 + 1;
    *piVar2 = *piVar19;
  }
  if (local_9ea == 2) {
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd150;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9cf6;
    uStack_12 = *(undefined2 *)0x9cf4;
    uStack_14 = *(undefined2 *)0x9cf2;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cf0;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2e98;
    piVar8 = (int *)FUN_1def_05d1();
    local_64e = *piVar8;
    local_64c = piVar8[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd18d;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9cf6;
    uStack_12 = *(undefined2 *)0x9cf4;
    uStack_14 = *(undefined2 *)0x9cf2;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cf0;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2e5b;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_64a = *puVar9;
    local_648 = puVar9[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd1ca;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d02;
    uStack_12 = *(undefined2 *)0x9d00;
    uStack_14 = *(undefined2 *)0x9cfe;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cfc;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2e1e;
    puVar9 = (undefined2 *)FUN_1def_05d1();
    local_646 = *puVar9;
    local_644 = puVar9[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd207;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d02;
    uStack_12 = *(undefined2 *)0x9d00;
    uStack_14 = *(undefined2 *)0x9cfe;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cfc;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2de1;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_642 = *puVar9;
    local_640 = puVar9[1];
    piVar13 = &iStack_20;
    piVar8 = &local_95a;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    piVar13 = (int *)&stack0xffca;
    piVar8 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    iStack_38 = 0x1bb4;
    uStack_3a = 0xd25e;
    FUN_1def_1921();
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029d78();
    func_0x000299b9();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd287;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9cf6;
    uStack_12 = *(undefined2 *)0x9cf4;
    uStack_14 = *(undefined2 *)0x9cf2;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cf0;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2d61;
    piVar8 = (int *)FUN_1def_05d1();
    local_64e = *piVar8;
    local_64c = piVar8[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd2c4;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9cf6;
    uStack_12 = *(undefined2 *)0x9cf4;
    uStack_14 = *(undefined2 *)0x9cf2;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cf0;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2d24;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_64a = *puVar9;
    local_648 = puVar9[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd301;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d02;
    uStack_12 = *(undefined2 *)0x9d00;
    uStack_14 = *(undefined2 *)0x9cfe;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9cfc;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2ce7;
    piVar8 = (int *)FUN_1def_05d1();
    local_646 = *piVar8;
    local_644 = piVar8[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd33e;
    func_0x000299d1();
    piStack_10 = (int *)*(int *)0x9d02;
    uStack_12 = *(undefined2 *)0x9d00;
    uStack_14 = *(undefined2 *)0x9cfe;
    puStack_16 = (undefined1 *)*(int *)0x9cfc;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2caa;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_642 = *puVar9;
    local_640 = puVar9[1];
    piVar13 = &iStack_20;
    piVar8 = &local_95a;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    piVar13 = (int *)&stack0xffca;
    piVar8 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    iStack_38 = 0x1bb4;
    uStack_3a = 0xd395;
    local_944 = FUN_1def_1921();
  }
  else {
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd3b2;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd3bb;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd3c0;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd3ca;
    func_0x000299d1();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd3d3;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd3d8;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 1;
    uStack_24 = 0xd3eb;
    FUN_1def_05d1();
    piStack_10 = (int *)0x1bb4;
    uStack_12 = 0xd3f5;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd3fe;
    func_0x0002996b();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd403;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd40d;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2beb;
    piVar8 = (int *)FUN_1def_05d1();
    local_9dc = *piVar8;
    local_9da = piVar8[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd43a;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd443;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd44d;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2bab;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_9fc = *puVar9;
    local_9fa = puVar9[1];
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029d78();
    func_0x000299b9();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd48d;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd496;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd4a0;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2b58;
    piVar8 = (int *)FUN_1def_05d1();
    local_9f8 = *piVar8;
    local_9f6 = piVar8[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd4cd;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd4d6;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd4e0;
    func_0x000299d1();
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x2b18;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_1ee = *puVar9;
    local_1ec = puVar9[1];
  }
  puVar9 = (undefined2 *)0x1bb4;
  local_6d6 = local_95e;
  local_6d4 = local_95c;
  local_6d2 = local_9b8;
  local_6d0 = local_9b6;
  local_6ce = local_9dc;
  local_6cc = local_9da;
  local_6ca = local_9fc;
  local_6c8 = local_9fa;
  local_7b2 = local_9b4;
  local_7b0 = local_9b2;
  local_7ae = local_9d8;
  local_7ac = local_9d6;
  local_7aa = local_9f8;
  local_7a8 = local_9f6;
  local_7a6 = local_1ee;
  local_7a4 = local_1ec;
  piVar8 = aiStack_3e2 + local_9f0 * 0xb;
  piVar13 = &local_6d6;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar8;
    piVar8 = piVar8 + 1;
    piVar19 = piVar13;
    piVar13 = piVar13 + 1;
    *piVar2 = *piVar19;
  }
  piVar8 = aiStack_5fa + local_9f0 * 0xb;
  piVar13 = &local_7b2;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar8;
    piVar8 = piVar8 + 1;
    piVar19 = piVar13;
    piVar13 = piVar13 + 1;
    *piVar2 = *piVar19;
  }
  uVar14 = *(undefined2 *)0x1154;
  local_6a8[local_9f0 * 2 + -1] = *(undefined2 *)0x1152;
  local_6a8[local_9f0 * 2] = uVar14;
  uVar14 = *(undefined2 *)0x1158;
  local_784[local_9f0 * 2 + -1] = *(undefined2 *)0x1156;
  local_784[local_9f0 * 2] = uVar14;
  if (1 < local_9f0) {
    piVar13 = aiStack_1c;
    piVar8 = aiStack_3f8 + local_9f0 * 0xb;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    iStack_20 = -0x2a1d;
    iVar10 = FUN_17a6_0cba();
    if (iVar10 != 0) {
      aiStack_416[local_9f0] = aiStack_416[local_9f0] + 1;
    }
    piVar13 = aiStack_1c;
    piVar8 = aiStack_610 + local_9f0 * 0xb;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    puVar9 = (undefined2 *)0x11f2;
    iStack_20 = -0x29ee;
    iVar10 = FUN_17a6_0cba();
    if (iVar10 != 0) {
      aiStack_416[local_9f0] = aiStack_416[local_9f0] + 1;
    }
  }
  if (local_9ea == 1) {
    piStack_e = (int *)0xd63a;
    puStack_c = puVar9;
    piVar19 = (int *)func_0x0000013f();
    piVar13 = (int *)piVar19;
    piVar8 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar4 = piVar8;
      piVar8 = piVar8 + 1;
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar4 = *piVar2;
    }
    piVar13 = &iStack_20;
    piVar8 = local_638;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    piVar13 = (int *)&stack0xffca;
    piVar8 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    iStack_38 = 0;
    uStack_3a = 0xd67a;
    local_944 = FUN_1def_1921();
    piVar8 = local_638;
    piVar13 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar8;
      piVar8 = piVar8 + 1;
      piVar19 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar2 = *piVar19;
    }
    local_9f0 = local_9f0 + 1;
    auStack_86c[local_9f0] = 3;
    auStack_72e[local_9f0 * 2] = local_82e;
    auStack_72e[local_9f0 * 2 + 1] = local_82c;
    auStack_812[local_9f0 * 2] = local_870;
    auStack_812[local_9f0 * 2 + 1] = local_86e;
    piVar8 = aiStack_1e6 + local_9f0 * 0xb;
    piVar13 = local_638;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar8;
      piVar8 = piVar8 + 1;
      piVar19 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar2 = *piVar19;
    }
    aiStack_416[local_9f0] = 0;
    func_0x0000abfa();
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd703;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd70c;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xd711;
    func_0x00029d78();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd71b;
    func_0x000299d1();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd724;
    func_0x000297e6();
    aiStack_1c[2] = 0x22b2;
    aiStack_1c[1] = 0xd729;
    func_0x00029d78();
    iStack_20 = 0x22b2;
    func_0x000299d1();
    iStack_20 = 0x22b2;
    func_0x000297e6();
    iStack_20 = 0x22b2;
    func_0x00029d78();
    auStack_28[0] = 0x22b2;
    uStack_2a = 0xd74b;
    func_0x000299d1();
    auStack_28[0] = 0x22b2;
    uStack_2a = 0xd750;
    FUN_1def_043a();
    goto LAB_3ab8_0ff1;
  }
  piVar13 = aiStack_1c;
  piVar12 = aiStack_1c;
  piVar8 = &local_6d6;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar13;
    piVar13 = piVar13 + 1;
    piVar19 = piVar8;
    piVar8 = piVar8 + 1;
    *piVar2 = *piVar19;
  }
  iStack_20 = -0x2895;
  iVar10 = FUN_17a6_0cba();
  if (iVar10 != 0) {
    aiStack_416[local_9f0] = aiStack_416[local_9f0] + 1;
  }
  piVar8 = &local_7b2;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar12;
    piVar12 = piVar12 + 1;
    piVar19 = piVar8;
    piVar8 = piVar8 + 1;
    *piVar2 = *piVar19;
  }
  iStack_20 = -0x286f;
  iVar10 = FUN_17a6_0cba();
  if (iVar10 != 0) {
    aiStack_416[local_9f0] = aiStack_416[local_9f0] + 1;
  }
  if (local_9ea != 2) goto LAB_3ab8_3078;
  puStack_c = (undefined2 *)0x11f2;
  piStack_e = (int *)0xd7b9;
  func_0x00018779();
  piVar8 = &local_64e;
  piVar13 = &local_95a;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    piVar2 = piVar8;
    piVar8 = piVar8 + 1;
    piVar19 = piVar13;
    piVar13 = piVar13 + 1;
    *piVar2 = *piVar19;
  }
  puStack_c = (undefined2 *)0xd7d3;
  func_0x0000b1d8();
  puStack_c = (undefined2 *)0xd7dc;
  func_0x0000daa6();
  local_608 = 0;
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xd804;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xd80d;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xd812;
  func_0x00029d78();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xd81c;
  func_0x000299d1();
  aiStack_1c[2] = 1;
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x27db;
  func_0x0001e558();
  uVar15 = (undefined1 *)0xffed < aiStack_1c + 2;
  uVar17 = &stack0x0000 == (undefined1 *)0x6;
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_1181();
  if ((bool)uVar15) {
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029bb5();
    FUN_28b3_1181();
    if (!(bool)uVar15) goto LAB_3ab8_2ce1;
LAB_3ab8_2d1c:
    local_608 = 1;
  }
  else {
LAB_3ab8_2ce1:
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar15 && !(bool)uVar17) {
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029bb5();
      FUN_28b3_1181();
      if (!(bool)uVar15 && !(bool)uVar17) goto LAB_3ab8_2d1c;
    }
  }
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xd8ba;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xd8c3;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xd8c8;
  func_0x00029d78();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xd8d2;
  func_0x000299d1();
  aiStack_1c[2] = 1;
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x2725;
  puVar9 = (undefined2 *)func_0x0001e558();
  local_816 = *puVar9;
  local_814 = puVar9[1];
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xd90e;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xd917;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xd91c;
  func_0x00029d78();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xd926;
  func_0x000299d1();
  aiStack_1c[2] = 1;
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x26d1;
  func_0x0001e558();
  uVar15 = (undefined1 *)0xffed < aiStack_1c + 2;
  func_0x000297e6();
  func_0x0002996b();
  FUN_28b3_1181();
  if ((bool)uVar15) {
    local_822 = local_816;
    local_820 = local_814;
    func_0x000297e6();
    func_0x00029983();
    uVar7 = local_954;
    uVar6 = local_956;
    uVar14 = local_958;
    iVar10 = local_95a;
    local_81e = local_822;
    local_81c = local_820;
    local_95a = local_952;
    local_958 = local_950;
    local_952 = iVar10;
    local_950 = uVar14;
    local_822 = local_956;
    local_820 = local_954;
    local_956 = local_94e;
    local_954 = local_94c;
    local_94e = uVar6;
    local_94c = uVar7;
  }
  uVar15 = 0;
  uVar17 = local_608 == 0;
  if ((bool)uVar17) {
    piVar8 = &local_64e;
    piVar13 = &local_95a;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar8;
      piVar8 = piVar8 + 1;
      piVar19 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar2 = *piVar19;
    }
    local_64e = local_9dc;
    local_64c = local_9da;
    local_64a = local_9fc;
    local_648 = local_9fa;
    local_646 = local_9f8;
    local_644 = local_9f6;
    local_642 = local_1ee;
    local_640 = local_1ec;
LAB_3ab8_3054:
    piVar13 = aiStack_1c;
    piVar8 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar19;
    }
    iStack_20 = -0x2419;
    iVar10 = FUN_17a6_0cba();
    if (iVar10 != 0) {
      aiStack_416[local_9f0] = aiStack_416[local_9f0] + 1;
    }
  }
  else {
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029bb5();
    FUN_28b3_1181();
    if ((bool)uVar15) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      uVar16 = false;
      if ((bool)uVar15) {
        piVar8 = &local_64e;
        piVar13 = &local_95a;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          piVar19 = piVar13;
          piVar13 = piVar13 + 1;
          *piVar2 = *piVar19;
        }
        local_646 = local_9dc;
        local_644 = local_9da;
        local_642 = local_9fc;
        local_640 = local_9fa;
        piVar13 = aiStack_1c;
        piVar8 = &local_64e;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          piVar2 = piVar13;
          piVar13 = piVar13 + 1;
          piVar19 = piVar8;
          piVar8 = piVar8 + 1;
          *piVar2 = *piVar19;
        }
        iStack_20 = -0x2549;
        iVar10 = FUN_17a6_0cba();
        uVar16 = false;
        uVar17 = iVar10 == 0;
        if (!(bool)uVar17) {
          uVar16 = local_9f0 < 0;
          piVar19 = aiStack_416 + local_9f0;
          *piVar19 = *piVar19 + 1;
          uVar17 = *piVar19 == 0;
        }
      }
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029bb5();
      FUN_28b3_1181();
      if (!(bool)uVar16 && !(bool)uVar17) {
        piVar8 = &local_64e;
        piVar13 = &local_95a;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          piVar19 = piVar13;
          piVar13 = piVar13 + 1;
          *piVar2 = *piVar19;
        }
        local_64e = local_9f8;
        local_64c = local_9f6;
        local_64a = local_1ee;
        local_648 = local_1ec;
        goto LAB_3ab8_304c;
      }
    }
    else {
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029bb5();
      FUN_28b3_1181();
      uVar16 = false;
      if ((bool)uVar15) {
        piVar8 = &local_64e;
        piVar13 = &local_95a;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          piVar19 = piVar13;
          piVar13 = piVar13 + 1;
          *piVar2 = *piVar19;
        }
        local_646 = local_9f8;
        local_644 = local_9f6;
        local_642 = local_1ee;
        local_640 = local_1ec;
        piVar13 = aiStack_1c;
        piVar8 = &local_64e;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          piVar2 = piVar13;
          piVar13 = piVar13 + 1;
          piVar19 = piVar8;
          piVar8 = piVar8 + 1;
          *piVar2 = *piVar19;
        }
        iStack_20 = -0x2485;
        iVar10 = FUN_17a6_0cba();
        uVar16 = false;
        uVar17 = iVar10 == 0;
        if (!(bool)uVar17) {
          uVar16 = local_9f0 < 0;
          piVar19 = aiStack_416 + local_9f0;
          *piVar19 = *piVar19 + 1;
          uVar17 = *piVar19 == 0;
        }
      }
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if (!(bool)uVar16 && !(bool)uVar17) {
        piVar8 = &local_64e;
        piVar13 = &local_95a;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          piVar19 = piVar13;
          piVar13 = piVar13 + 1;
          *piVar2 = *piVar19;
        }
        local_64e = local_9dc;
        local_64c = local_9da;
        local_64a = local_9fc;
        local_648 = local_9fa;
LAB_3ab8_304c:
        goto LAB_3ab8_3054;
      }
    }
  }
LAB_3ab8_3078:
  local_9f0 = local_9f0 + 1;
  auStack_86c[local_9f0] = local_9ea;
  aiStack_416[local_9f0] = 0;
  func_0x0000abfa();
  goto LAB_3ab8_09b5;
code_r0x0003c510:
  func_0x000297e6();
  func_0x000297e6();
  uVar14 = 0x22b2;
  FUN_28b3_1181();
  if ((bool)uVar15) goto LAB_3ab8_16af;
LAB_3ab8_19ac:
  FUN_1885_2ec3();
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xc549;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xc552;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xc557;
  func_0x00029d78();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xc561;
  func_0x000299d1();
  aiStack_1c[2] = 1;
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x3a96;
  FUN_1def_05d1();
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xc58c;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xc595;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xc59a;
  func_0x00029d78();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xc5a4;
  func_0x000299d1();
  aiStack_1c[2] = 1;
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x3a53;
  FUN_1def_05d1();
  uVar15 = (undefined1 *)0xffed < aiStack_1c + 2;
  uVar17 = &stack0x0000 == (undefined1 *)0x6;
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar15 && !(bool)uVar17) {
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029983();
    goto LAB_3ab8_0ff1;
  }
  if (local_9ba == 3) {
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc60c;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d0a;
    uStack_12 = *(undefined2 *)0x9d08;
    uStack_14 = *(undefined2 *)0x9d06;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9d04;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x39dc;
    piVar8 = (int *)FUN_1def_05d1();
    local_6d6 = *piVar8;
    local_6d4 = piVar8[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc649;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d0a;
    uStack_12 = *(undefined2 *)0x9d08;
    uStack_14 = *(undefined2 *)0x9d06;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9d04;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x399f;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_6d2 = *puVar9;
    local_6d0 = puVar9[1];
    func_0x000297e6();
    func_0x00029af6();
    func_0x00029d78();
    func_0x000299b9();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc699;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d0a;
    uStack_12 = *(undefined2 *)0x9d08;
    uStack_14 = *(undefined2 *)0x9d06;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9d04;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x394f;
    piVar8 = (int *)FUN_1def_05d1();
    local_7b2 = *piVar8;
    local_7b0 = piVar8[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc6d6;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d0a;
    uStack_12 = *(undefined2 *)0x9d08;
    uStack_14 = *(undefined2 *)0x9d06;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9d04;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3912;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_7ae = *puVar9;
    local_7ac = puVar9[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc713;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d12;
    uStack_12 = *(undefined2 *)0x9d10;
    uStack_14 = *(undefined2 *)0x9d0e;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9d0c;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x38d5;
    piVar8 = (int *)FUN_1def_05d1();
    local_6ce = *piVar8;
    local_6cc = piVar8[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc750;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d12;
    uStack_12 = *(undefined2 *)0x9d10;
    uStack_14 = *(undefined2 *)0x9d0e;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9d0c;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3898;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_6ca = *puVar9;
    local_6c8 = puVar9[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc78d;
    func_0x000299d1();
    piStack_10 = (int *)*(undefined2 *)0x9d12;
    uStack_12 = *(undefined2 *)0x9d10;
    uStack_14 = *(undefined2 *)0x9d0e;
    puStack_16 = (undefined1 *)*(undefined2 *)0x9d0c;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x385b;
    piVar8 = (int *)FUN_1def_05d1();
    local_7aa = *piVar8;
    local_7a8 = piVar8[1];
    func_0x00029834();
    piStack_10 = (int *)0x22b2;
    uStack_12 = 0xc7ca;
    func_0x000299d1();
    piStack_10 = (int *)*(int *)0x9d12;
    uStack_12 = *(undefined2 *)0x9d10;
    uStack_14 = *(undefined2 *)0x9d0e;
    puStack_16 = (undefined1 *)*(int *)0x9d0c;
    aiStack_1c[2] = 0;
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x381e;
    puVar9 = (undefined2 *)func_0x0001e558();
    local_7a6 = *puVar9;
    local_7a4 = puVar9[1];
    piVar8 = aiStack_3f8 + local_9f0 * 0xb;
    piVar13 = &local_64e;
    piVar12 = piVar8;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar12;
      piVar12 = piVar12 + 1;
      *piVar2 = *piVar19;
    }
    piVar12 = &iStack_20;
    piVar13 = &local_6d6;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar12;
      piVar12 = piVar12 + 1;
      piVar19 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar2 = *piVar19;
    }
    piVar12 = (int *)&stack0xffca;
    iStack_38 = local_9f0 * 0x16;
    piVar13 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar12;
      piVar12 = piVar12 + 1;
      piVar19 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar2 = *piVar19;
    }
    iStack_38 = 0x1bb4;
    uStack_3a = 0xc845;
    FUN_1def_1921();
    puStack_c = (undefined2 *)0xc855;
    func_0x000297e6();
    puStack_c = (undefined2 *)0xc85a;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc864;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc86d;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc872;
    func_0x00029d78();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3784;
    func_0x000299d1();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x377b;
    func_0x000297e6();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3776;
    func_0x00029d78();
    uStack_24 = 0xc894;
    func_0x000299d1();
    uStack_24 = 0xc89d;
    func_0x000297e6();
    uStack_24 = 0xc8a2;
    func_0x00029d78();
    uStack_2a = 0x22b2;
    uStack_2c = 0xc8ac;
    func_0x000299d1();
    uStack_2a = 0x22b2;
    uStack_2c = 0xc8b1;
    func_0x0001e18f();
    local_646 = local_95e;
    local_644 = local_95c;
    local_642 = local_9b8;
    local_640 = local_9b6;
    piVar13 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar8;
      piVar8 = piVar8 + 1;
      piVar19 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar2 = *piVar19;
    }
    piVar8 = aiStack_610 + local_9f0 * 0xb;
    piVar13 = &local_64e;
    piVar12 = piVar8;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar13;
      piVar13 = piVar13 + 1;
      piVar19 = piVar12;
      piVar12 = piVar12 + 1;
      *piVar2 = *piVar19;
    }
    piVar12 = &iStack_20;
    piVar13 = &local_7b2;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar12;
      piVar12 = piVar12 + 1;
      piVar19 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar2 = *piVar19;
    }
    piVar12 = (int *)&stack0xffca;
    piVar13 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar12;
      piVar12 = piVar12 + 1;
      piVar19 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar2 = *piVar19;
    }
    iStack_38 = 0x1bb4;
    uStack_3a = 0xc91f;
    local_944 = FUN_1def_1921();
    puStack_c = (undefined2 *)0xc933;
    func_0x000297e6();
    puStack_c = (undefined2 *)0xc938;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc942;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc94b;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xc950;
    func_0x00029d78();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x36a6;
    func_0x000299d1();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x369d;
    func_0x000297e6();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3698;
    func_0x00029d78();
    uStack_24 = 0xc972;
    func_0x000299d1();
    uStack_24 = 0xc97b;
    func_0x000297e6();
    uStack_24 = 0xc980;
    func_0x00029d78();
    uStack_2a = 0x22b2;
    uStack_2c = 0xc98a;
    func_0x000299d1();
    uStack_2a = 0x22b2;
    uStack_2c = 0xc98f;
    func_0x0001e18f();
    local_646 = local_9b4;
    local_644 = local_9b2;
    local_642 = local_9d8;
    local_640 = local_9d6;
    piVar13 = &local_64e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      piVar2 = piVar8;
      piVar8 = piVar8 + 1;
      piVar19 = piVar13;
      piVar13 = piVar13 + 1;
      *piVar2 = *piVar19;
    }
    local_6d6 = local_95e;
    local_6d4 = local_95c;
    local_6d2 = local_9b8;
    local_6d0 = local_9b6;
    local_7b2 = local_9b4;
    local_7b0 = local_9b2;
    local_7ae = local_9d8;
    local_7ac = local_9d6;
  }
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xca12;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xca1b;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xca20;
  func_0x00029d78();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xca2a;
  func_0x000299d1();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xca33;
  func_0x000297e6();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xca38;
  func_0x00029d78();
  iStack_20 = 0x22b2;
  func_0x000299d1();
  iStack_20 = 1;
  uStack_24 = 0xca4b;
  FUN_1def_05d1();
  piStack_10 = (int *)0x1bb4;
  uStack_12 = 0xca55;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xca5e;
  func_0x0002996b();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xca63;
  func_0x00029d78();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xca6d;
  func_0x000299d1();
  aiStack_1c[2] = 0;
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x358b;
  piVar8 = (int *)FUN_1def_05d1();
  local_9dc = *piVar8;
  local_9da = piVar8[1];
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xca9a;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xcaa3;
  func_0x000297e6();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xcaad;
  func_0x000299d1();
  aiStack_1c[2] = 0;
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x354b;
  puVar9 = (undefined2 *)func_0x0001e558();
  local_9fc = *puVar9;
  local_9fa = puVar9[1];
  func_0x000297e6();
  func_0x00029af6();
  func_0x00029d78();
  func_0x000299b9();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xcaed;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xcaf6;
  func_0x000297e6();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xcb00;
  func_0x000299d1();
  aiStack_1c[2] = 0;
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x34f8;
  piVar8 = (int *)FUN_1def_05d1();
  local_9f8 = *piVar8;
  local_9f6 = piVar8[1];
  func_0x00029834();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xcb2d;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  uStack_12 = 0xcb36;
  func_0x000297e6();
  aiStack_1c[2] = 0x22b2;
  aiStack_1c[1] = 0xcb40;
  func_0x000299d1();
  aiStack_1c[2] = 0;
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x34b8;
  puVar9 = (undefined2 *)func_0x0001e558();
  local_7a6 = *puVar9;
  local_7a4 = puVar9[1];
  local_6ce = local_9dc;
  local_6cc = local_9da;
  puStack_c = (undefined2 *)0xcba7;
  local_7aa = local_9f8;
  local_7a8 = local_9f6;
  local_6ca = local_9fc;
  local_6c8 = local_9fa;
  local_1ee = local_7a6;
  local_1ec = local_7a4;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xcbac;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xcbb6;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xcbbf;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xcbc4;
  func_0x00029d78();
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x3432;
  func_0x000299d1();
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x3429;
  func_0x000297e6();
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x3424;
  func_0x00029d78();
  uStack_24 = 0xcbe6;
  func_0x000299d1();
  uStack_24 = 0xcbef;
  func_0x000297e6();
  uStack_24 = 0xcbf4;
  func_0x00029d78();
  uStack_2a = 0x22b2;
  uStack_2c = 0xcbfe;
  func_0x000299d1();
  uStack_2a = 0x22b2;
  uStack_2c = 0xcc03;
  func_0x0001e18f();
  puStack_c = (undefined2 *)0xcc13;
  func_0x000297e6();
  puStack_c = (undefined2 *)0xcc18;
  func_0x00029d78();
  uStack_12 = 0x22b2;
  uStack_14 = 0xcc22;
  func_0x000299d1();
  uStack_12 = 0x22b2;
  uStack_14 = 0xcc2b;
  func_0x000297e6();
  uStack_12 = 0x22b2;
  uStack_14 = 0xcc30;
  func_0x00029d78();
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x33c6;
  func_0x000299d1();
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x33bd;
  func_0x000297e6();
  aiStack_1c[1] = 0x22b2;
  aiStack_1c[0] = -0x33b8;
  func_0x00029d78();
  uStack_24 = 0xcc52;
  func_0x000299d1();
  uStack_24 = 0xcc5b;
  func_0x000297e6();
  uStack_24 = 0xcc60;
  func_0x00029d78();
  uStack_2a = 0x22b2;
  uStack_2c = 0xcc6a;
  func_0x000299d1();
  uStack_2a = 0x22b2;
  uVar14 = 0x1bb4;
  uStack_2c = 0xcc6f;
  func_0x0001e18f();
  if (local_9ba != 2) goto LAB_3ab8_235b;
  uVar15 = 0;
  uVar17 = local_3e8 == 0;
  if ((bool)uVar17) {
    puStack_c = (undefined2 *)0xcc90;
    func_0x000297e6();
    puStack_c = (undefined2 *)0xcc95;
    func_0x00029d78();
    uStack_12 = 0x22b2;
    uStack_14 = 0xcc9f;
    func_0x000299d1();
    uStack_12 = 0x22b2;
    uStack_14 = 0xcca8;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xccad;
    func_0x00029d78();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3349;
    func_0x000299d1();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3340;
    func_0x000297e6();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x333b;
    func_0x00029d78();
    uStack_24 = 0xcccf;
    func_0x000299d1();
  }
  else {
    func_0x000297e6();
    func_0x000297e6();
    func_0x00029bb5();
    FUN_28b3_1181();
    if ((bool)uVar15) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar15) {
        puStack_c = (undefined2 *)0xcd21;
        func_0x000297e6();
        puStack_c = (undefined2 *)0xcd26;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xcd30;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xcd39;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xcd3e;
        func_0x00029d78();
        aiStack_1c[1] = 0x22b2;
        aiStack_1c[0] = -0x32b8;
        func_0x000299d1();
        aiStack_1c[1] = 0x22b2;
        aiStack_1c[0] = -0x32af;
        func_0x000297e6();
        aiStack_1c[1] = 0x22b2;
        aiStack_1c[0] = -0x32aa;
        func_0x00029d78();
        uStack_24 = 0xcd60;
        func_0x000299d1();
        uStack_24 = 0xcd69;
        func_0x000297e6();
        uStack_24 = 0xcd6e;
        func_0x00029d78();
        uStack_2a = 0x22b2;
        uStack_2c = 0xcd78;
        func_0x000299d1();
        uStack_2a = 0x22b2;
        uStack_2c = 0xcd7d;
        func_0x0001e18f();
        uVar17 = &stack0x0000 == (undefined1 *)0x6;
      }
      uVar15 = (bool)uVar15 && (undefined1 *)0xffdd < auStack_28;
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029bb5();
      uVar14 = 0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar15 || (bool)uVar17) goto LAB_3ab8_235b;
      puStack_c = (undefined2 *)0xcdb2;
      func_0x000297e6();
      puStack_c = (undefined2 *)0xcdb7;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xcdc1;
      func_0x000299d1();
    }
    else {
      func_0x000297e6();
      func_0x000297e6();
      func_0x00029bb5();
      FUN_28b3_1181();
      if ((bool)uVar15) {
        puStack_c = (undefined2 *)0xcdf7;
        func_0x000297e6();
        puStack_c = (undefined2 *)0xcdfc;
        func_0x00029d78();
        uStack_12 = 0x22b2;
        uStack_14 = 0xce06;
        func_0x000299d1();
        uStack_12 = 0x22b2;
        uStack_14 = 0xce0f;
        func_0x000297e6();
        uStack_12 = 0x22b2;
        uStack_14 = 0xce14;
        func_0x00029d78();
        aiStack_1c[1] = 0x22b2;
        aiStack_1c[0] = -0x31e2;
        func_0x000299d1();
        aiStack_1c[1] = 0x22b2;
        aiStack_1c[0] = -0x31d9;
        func_0x000297e6();
        aiStack_1c[1] = 0x22b2;
        aiStack_1c[0] = -0x31d4;
        func_0x00029d78();
        uStack_24 = 0xce36;
        func_0x000299d1();
        uStack_24 = 0xce3f;
        func_0x000297e6();
        uStack_24 = 0xce44;
        func_0x00029d78();
        uStack_2a = 0x22b2;
        uStack_2c = 0xce4e;
        func_0x000299d1();
        uStack_2a = 0x22b2;
        uStack_2c = 0xce53;
        func_0x0001e18f();
        uVar17 = &stack0x0000 == (undefined1 *)0x6;
      }
      uVar15 = (bool)uVar15 && (undefined1 *)0xffdd < auStack_28;
      func_0x000297e6();
      func_0x000297e6();
      uVar14 = 0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar15 || (bool)uVar17) goto LAB_3ab8_235b;
      puStack_c = (undefined2 *)0xce7c;
      func_0x000297e6();
      puStack_c = (undefined2 *)0xce81;
      func_0x00029d78();
      uStack_12 = 0x22b2;
      uStack_14 = 0xce8b;
      func_0x000299d1();
    }
    uStack_12 = 0x22b2;
    uStack_14 = 0xce94;
    func_0x000297e6();
    uStack_12 = 0x22b2;
    uStack_14 = 0xce99;
    func_0x00029d78();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x315d;
    func_0x000299d1();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x3154;
    func_0x000297e6();
    aiStack_1c[1] = 0x22b2;
    aiStack_1c[0] = -0x314f;
    func_0x00029d78();
    uStack_24 = 0xcebb;
    func_0x000299d1();
  }
  uStack_24 = 0xcec4;
  func_0x000297e6();
  uStack_24 = 0xcec9;
  func_0x00029d78();
  uStack_2a = 0x22b2;
  uStack_2c = 0xced3;
  func_0x000299d1();
  uStack_2a = 0x22b2;
  uVar14 = 0x1bb4;
  uStack_2c = 0xced8;
  func_0x0001e18f();
LAB_3ab8_235b:
  local_1f2 = local_9e4;
  local_1f0 = local_9e2;
  local_606 = local_a08;
  local_604 = local_a06;
  goto LAB_3ab8_16af;
}



/* 3ab8:309e  FUN_3ab8_309e  1209 bytes, 1 callers */

uint __cdecl16far FUN_3ab8_309e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined2 *puVar4;
  int iVar5;
  uint unaff_SI;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar8;
  undefined2 *puVar9;
  undefined2 *in_stack_0000001c;
  undefined2 *in_stack_0000002e;
  undefined2 *in_stack_00000030;
  uint in_stack_00000032;
  int local_4c [2];
  undefined2 local_48;
  undefined2 local_46;
  undefined1 local_44 [4];
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  int local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  int local_28 [3];
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  undefined1 *local_e;
  undefined1 *puStack_c;
  uint uVar10;
  
  FUN_21f2_0ebc();
  func_0x00029834();
  func_0x00029983();
  func_0x00029834();
  func_0x00029983();
  uVar7 = 0x22b2;
  uVar10 = 9999;
  do {
    do {
      puStack_c = local_44;
      local_e = &stack0xfff6;
      puStack_10 = &stack0xfffa;
      local_14 = 0xdc6e;
      uStack_12 = uVar7;
      local_2e = func_0x00006608();
      if (*(int *)0x158 != 0) {
        return 0;
      }
      uVar8 = unaff_SI < uVar10;
    } while (((unaff_SI == uVar10) && (uVar8 = local_4c < local_28, local_4c == local_28)) &&
            (uVar8 = false, uVar7 = 0x3bf, local_28[0] == 0));
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029d78();
    func_0x000299b9();
    func_0x00029834();
    FUN_28b3_100d();
    func_0x00029ae7();
    FUN_28b3_1181();
    if (!(bool)uVar8) {
LAB_3ab8_3181:
      if (in_stack_00000032 != 0) {
        puStack_c = (undefined1 *)in_stack_00000032;
        local_e = (undefined1 *)0x22b2;
        puStack_10 = (undefined1 *)0xe09e;
        iVar5 = func_0x00015409();
        if (iVar5 == 0) {
          return 0xffff;
        }
      }
      in_stack_0000001c[1] = 0;
      *in_stack_0000001c = 0;
      *in_stack_0000002e = local_40;
      in_stack_0000002e[1] = local_3e;
      *in_stack_00000030 = local_48;
      in_stack_00000030[1] = local_46;
      return 0;
    }
    func_0x00029834();
    func_0x00029834();
    FUN_28b3_100d();
    func_0x00029ae7();
    FUN_28b3_1181();
    if (!(bool)uVar8) goto LAB_3ab8_3181;
    puStack_c = (undefined1 *)0x22b2;
    local_e = (undefined1 *)0xdd0e;
    FUN_1000_0599();
    func_0x00010526();
    puStack_c = (undefined1 *)0xdef;
    local_e = (undefined1 *)0xdd22;
    FUN_1000_0599();
    puStack_c = (undefined1 *)0xdef;
    local_e = (undefined1 *)0xdd30;
    func_0x00012276();
    if (in_stack_00000032 == 1) {
      puStack_c = (undefined1 *)0xdd41;
      func_0x00012276();
    }
    if (in_stack_00000032 == 2) {
      puStack_c = (undefined1 *)0xdd50;
      func_0x00012276();
    }
    puStack_c = (undefined1 *)0xdd5a;
    func_0x00012276();
    if (in_stack_00000032 == 1) {
      puStack_c = (undefined1 *)0xdd6a;
      func_0x00012276();
    }
    if (in_stack_00000032 == 2) {
      puStack_c = (undefined1 *)0xdd7a;
      func_0x00012276();
    }
    uVar7 = 0x11f2;
    puStack_c = (undefined1 *)0xdd84;
    func_0x00012276();
  } while (((local_28[0] != 1) || (in_stack_00000032 != 1)) &&
          ((uVar10 = unaff_SI, local_28[0] != 2 || (in_stack_00000032 != 2))));
  *(undefined1 *)0xb8c = 1;
  func_0x000297e6();
  func_0x00029d78();
  puStack_10 = (undefined1 *)0x22b2;
  uStack_12 = 0xddbc;
  func_0x000299d1();
  puStack_10 = (undefined1 *)0x22b2;
  uStack_12 = 0xddc4;
  func_0x000297e6();
  puStack_10 = (undefined1 *)0x22b2;
  uStack_12 = 0xddc9;
  func_0x00029d78();
  local_18 = 0x22b2;
  uStack_1a = 0xddd3;
  func_0x000299d1();
  local_18 = 0x22b2;
  uStack_1a = 0xddd8;
  local_3c = FUN_13bf_39a0();
  *(undefined1 *)0xb8c = 0;
  if (local_3c == 0) {
    return 0xffff;
  }
  if (local_3c < 0) {
    *(undefined2 *)0xc22 = 1;
    puStack_c = (undefined1 *)0x11f2;
    local_e = (undefined1 *)0xde0a;
    FUN_1000_0599();
LAB_3ab8_328f:
    puStack_c = (undefined1 *)0xde15;
    func_0x00012276();
    return 0xffff;
  }
  puStack_c = (undefined1 *)0x11f2;
  local_e = (undefined1 *)0xde21;
  puVar9 = (undefined2 *)func_0x0000013f();
  puVar6 = (undefined2 *)puVar9;
  puVar4 = local_20;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  if (in_stack_00000032 == 2) {
    puStack_c = (undefined1 *)0xde47;
    iVar5 = func_0x00008854();
    if (iVar5 != 0) {
      return 0xffff;
    }
    puStack_c = (undefined1 *)0xde54;
    iVar5 = func_0x000125f1();
    if (iVar5 == 0) {
      *(undefined2 *)0xc22 = 1;
      puStack_c = (undefined1 *)0x11f2;
      local_e = (undefined1 *)0xde6c;
      FUN_1000_0599();
      goto LAB_3ab8_32f5;
    }
  }
  func_0x000297e6();
  func_0x00029d78();
  puStack_10 = (undefined1 *)0x22b2;
  uStack_12 = 0xde95;
  func_0x000299d1();
  puStack_10 = (undefined1 *)0x22b2;
  uStack_12 = 0xde9d;
  func_0x000297e6();
  puStack_10 = (undefined1 *)0x22b2;
  uStack_12 = 0xdea2;
  func_0x00029d78();
  local_18 = 0x22b2;
  uStack_1a = 0xdeac;
  func_0x000299d1();
  local_18 = 1;
  uStack_1a = 0x22b2;
  local_1c = 0xdeb5;
  puVar4 = (undefined2 *)func_0x0001e558();
  local_32 = *puVar4;
  local_30 = puVar4[1];
  func_0x000297e6();
  func_0x00029d78();
  puStack_10 = (undefined1 *)0x22b2;
  uStack_12 = 0xdedc;
  func_0x000299d1();
  puStack_10 = (undefined1 *)0x22b2;
  uStack_12 = 0xdee4;
  func_0x000297e6();
  puStack_10 = (undefined1 *)0x22b2;
  uStack_12 = 0xdee9;
  func_0x00029d78();
  local_18 = 0x22b2;
  uStack_1a = 0xdef3;
  func_0x000299d1();
  local_18 = 1;
  uStack_1a = 0x22b2;
  local_1c = 0xdefc;
  puVar4 = (undefined2 *)func_0x0001e558();
  local_36 = *puVar4;
  local_34 = puVar4[1];
  puStack_c = (undefined1 *)0x1bb4;
  local_e = (undefined1 *)0xdf18;
  iVar5 = func_0x00024cb8();
  uVar8 = false;
  if ((iVar5 == 0) || (uVar8 = in_stack_00000032 < 2, lVar3 = local_3c, in_stack_00000032 == 2)) {
    func_0x00029834();
    func_0x000297e6();
    func_0x00029ae7();
    func_0x00029d78();
    FUN_28b3_1181();
    if ((bool)uVar8) {
      func_0x00029834();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x00029d78();
      FUN_28b3_1181();
      if ((bool)uVar8) {
        *(undefined2 *)0xc22 = 1;
        puStack_c = (undefined1 *)0x22b2;
        local_e = (undefined1 *)0xdf7e;
        FUN_1000_0599();
LAB_3ab8_32f5:
        puStack_c = (undefined1 *)0xdef;
        local_e = (undefined1 *)0xde7b;
        func_0x00012276();
        return 0xffff;
      }
    }
    lVar3 = local_3c;
    if (in_stack_00000032 != 0) {
      puVar6 = local_20;
      puVar4 = local_20;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = *puVar9;
      }
      puVar6 = &local_36;
      puVar4 = (undefined2 *)&stack0x0006;
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = *puVar9;
      }
      local_38 = 0x22b2;
      uVar7 = 0x1bb4;
      local_3c._2_2_ = 0xdfd6;
      local_38 = FUN_1def_1921();
      uVar8 = 0;
      if (local_38 != 0) {
        func_0x000297e6();
        func_0x000297e6();
        uVar7 = 0x22b2;
        FUN_28b3_1181();
        if (!(bool)uVar8) {
          func_0x000297e6();
          FUN_28b3_0d8b();
          uVar7 = 0x22b2;
          FUN_28b3_1181();
          if (!(bool)uVar8) {
            func_0x000297e6();
            func_0x000297e6();
            uVar7 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar8) {
              func_0x000297e6();
              FUN_28b3_0d8b();
              uVar7 = 0x22b2;
              FUN_28b3_1181();
              lVar3 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
              if (!(bool)uVar8) goto LAB_3ab8_34d9;
            }
          }
        }
      }
      *(undefined2 *)0xc22 = 1;
      local_e = (undefined1 *)0xe051;
      puStack_c = (undefined1 *)uVar7;
      FUN_1000_0599();
      goto LAB_3ab8_328f;
    }
  }
LAB_3ab8_34d9:
  local_3c._2_2_ = (undefined2)((ulong)lVar3 >> 0x10);
  local_3c._0_2_ = (undefined2)lVar3;
  *in_stack_0000001c = (undefined2)local_3c;
  in_stack_0000001c[1] = local_3c._2_2_;
  *in_stack_0000002e = local_40;
  in_stack_0000002e[1] = local_3e;
  *in_stack_00000030 = local_48;
  in_stack_00000030[1] = local_46;
  return in_stack_00000032;
}



/* 3ab8:3557  FUN_3ab8_3557  636 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_3557(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  uint uVar16;
  undefined2 unaff_SI;
  undefined2 *puVar17;
  undefined2 *puVar18;
  uint *puVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar20;
  undefined2 *puVar21;
  uint *puVar22;
  int local_3e;
  int local_3c;
  uint local_3a;
  uint local_38;
  uint local_36;
  uint local_34;
  uint local_26;
  uint local_24;
  uint local_22;
  uint local_20;
  uint local_18;
  uint local_16;
  undefined4 local_14;
  undefined2 local_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14);
  local_3c = 1;
  while( true ) {
    if (*(int *)0x152 <= local_3c) {
      return 0;
    }
    local_14 = puVar22;
    cVar4 = FUN_12c1_009c();
    if (cVar4 == '\x1b') break;
    uStack_c = 0xe10b;
    uVar20 = func_0x000003ef();
    puVar22 = local_14;
    if (*(byte *)((int)uVar20 + 9) < 0x5a) {
      uStack_c = 0xe124;
      uVar20 = func_0x000003ef();
      puVar22 = local_14;
      if ((*(byte *)((int)uVar20 + 10) & 2) != 0) {
        uStack_c = 0xe138;
        puVar21 = (undefined2 *)func_0x000003ef();
        puVar17 = (undefined2 *)puVar21;
        puVar18 = &local_e;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar2 = puVar18;
          puVar18 = puVar18 + 1;
          puVar1 = puVar17;
          puVar17 = puVar17 + 1;
          *puVar2 = *puVar1;
        }
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029bfc();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029bfc();
        func_0x00029983();
        uVar5 = local_36;
        uVar11 = local_34;
        if ((int)local_34 < 0) {
          uVar5 = -local_36;
          uVar11 = -((local_34 & 0x7fff) + (uint)(local_36 != 0));
        }
        uVar6 = local_3a;
        uVar12 = local_38;
        if ((int)local_38 < 0) {
          uVar6 = -local_3a;
          uVar12 = -((local_38 & 0x7fff) + (uint)(local_3a != 0));
        }
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        func_0x00029983();
        func_0x000297e6();
        func_0x00029d78();
        func_0x00029c74();
        func_0x00029983();
        uVar7 = local_36;
        uVar13 = local_34;
        if ((int)local_34 < 0) {
          uVar7 = -local_36;
          uVar13 = -((local_34 & 0x7fff) + (uint)(local_36 != 0));
        }
        uVar8 = local_3a;
        uVar14 = local_38;
        if ((int)local_38 < 0) {
          uVar8 = -local_3a;
          uVar14 = -((local_38 & 0x7fff) + (uint)(local_3a != 0));
        }
        puVar22 = local_14;
        for (local_3e = *(int *)0x152; local_3c < local_3e; local_3e = local_3e + -1) {
          uStack_c = 0xe26a;
          local_14 = puVar22;
          puVar22 = (uint *)func_0x000003ef();
          uVar15 = (undefined2)((ulong)puVar22 >> 0x10);
          local_14._0_2_ = (uint *)puVar22;
          if ((((*(byte *)((int)(uint *)local_14 + 9) < 0x5a) && ((((uint *)local_14)[5] & 2) != 0))
              && ((char)((uint *)local_14)[4] == (char)unaff_SI)) &&
             (*(char *)((int)(uint *)local_14 + 9) == (char)((uint)unaff_SI >> 8))) {
            puVar19 = &local_26;
            iVar10 = 6;
            while( true ) {
              local_14._2_2_ = (undefined2)((ulong)puVar22 >> 0x10);
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              puVar3 = puVar19;
              puVar19 = puVar19 + 1;
              *puVar3 = *(uint *)puVar22;
              puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)puVar22 + 1);
            }
            local_18 = local_26;
            local_16 = local_24;
            if ((int)local_24 < 0) {
              local_18 = -local_26;
              local_16 = -((local_24 & 0x7fff) + (uint)(local_26 != 0));
            }
            puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14);
            if ((((int)uVar11 <= (int)local_16) &&
                (((int)uVar11 < (int)local_16 ||
                 (puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14), uVar5 <= local_18))))
               && (((int)local_16 < (int)uVar13 ||
                   ((puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14),
                    (int)local_16 <= (int)uVar13 &&
                    (puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14), local_18 <= uVar7)
                    ))))) {
              uVar9 = local_22;
              uVar16 = local_20;
              if ((int)local_20 < 0) {
                uVar9 = -local_22;
                uVar16 = -((local_20 & 0x7fff) + (uint)(local_22 != 0));
              }
              puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14);
              if ((((int)uVar12 <= (int)uVar16) &&
                  (((int)uVar12 < (int)uVar16 ||
                   (puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14), uVar6 <= uVar9))))
                 && (((int)uVar16 < (int)uVar14 ||
                     ((puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14),
                      (int)uVar16 <= (int)uVar14 &&
                      (puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14), uVar9 <= uVar8))
                     )))) {
                uStack_c = 0xe32d;
                func_0x0000daa6();
                uStack_c = 0xe336;
                FUN_1def_186d();
                uStack_c = 0x1bb4;
                local_e = 0xe343;
                func_0x0001f185();
                puVar22 = (uint *)CONCAT22(local_14._2_2_,(uint *)local_14);
              }
            }
          }
        }
      }
    }
    local_3c = local_3c + 1;
  }
  return 0xffff;
}



/* 3ab8:37d3  FUN_3ab8_37d3  2103 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x0003e961) */
/* WARNING: Removing unreachable block (ram,0x0003e8fb) */
/* WARNING: Removing unreachable block (ram,0x0003e909) */
/* WARNING: Removing unreachable block (ram,0x0003e92d) */
/* WARNING: Removing unreachable block (ram,0x0003e9dc) */
/* WARNING: Removing unreachable block (ram,0x0003e989) */
/* WARNING: Removing unreachable block (ram,0x0003e99e) */
/* WARNING: Removing unreachable block (ram,0x0003e9bc) */
/* WARNING: Removing unreachable block (ram,0x0003e9fe) */

undefined2 __cdecl16far FUN_3ab8_37d3(int param_1,uint param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint *puVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  uint uVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  uint *puVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar25;
  undefined4 uVar26;
  undefined2 *puVar27;
  ulong uVar28;
  uint *puVar29;
  ulong uVar30;
  ulong uVar31;
  uint local_98;
  int local_96;
  uint local_94;
  int local_92;
  uint local_7e;
  int local_7c;
  uint local_7a;
  int local_78;
  uint local_76;
  uint local_74;
  uint local_72;
  uint local_70;
  uint local_66;
  uint local_64;
  uint local_62;
  uint local_60;
  uint local_5e;
  uint local_5c;
  int local_5a;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4e;
  uint local_46;
  uint local_44;
  uint local_42;
  uint local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined4 local_3a;
  uint local_36;
  uint local_34;
  undefined2 local_32 [4];
  undefined2 local_2a;
  int local_26;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_1a;
  char local_18;
  char local_17;
  char local_16;
  uint local_12;
  uint local_10;
  uint local_e;
  int local_c;
  int local_8;
  
  iVar23 = 0x22b2;
  FUN_21f2_0ebc();
  local_94 = param_2;
  local_92 = param_3;
  local_7a = 1;
  local_78 = 0;
  while( true ) {
    puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a);
    if ((*(int *)0x14e < local_78) || ((*(int *)0x14e <= local_78 && (*(uint *)0x14c < local_7a))))
    break;
    local_e = 0xe39d;
    local_c = iVar23;
    uVar26 = func_0x00000271();
    if (*(byte *)((int)uVar26 + 0x1b) < 0x5a) {
      local_c = 0;
      local_e = 0xe3b5;
      uVar26 = func_0x00000271();
      if ((*(byte *)((int)uVar26 + 0x1e) & 2) != 0) {
        bVar25 = 0xfffe < local_94;
        local_94 = local_94 + 1;
        local_92 = local_92 + (uint)bVar25;
      }
    }
    iVar23 = 0;
    bVar25 = 0xfffe < local_7a;
    local_7a = local_7a + 1;
    local_78 = local_78 + (uint)bVar25;
  }
  if ((local_94 != param_2) || (local_92 != param_3)) {
    local_78 = 0;
    for (local_7a = 1;
        (local_78 <= *(int *)0x14e && ((local_78 < *(int *)0x14e || (local_7a < *(uint *)0x14c))));
        local_7a = local_7a + 1) {
      local_3a = puVar29;
      cVar5 = FUN_12c1_009c();
      if (cVar5 == '\x1b') {
        return 0xffff;
      }
      local_c = 0x11f2;
      local_e = 0xe41f;
      FUN_1000_0599();
      local_c = 0x1fe;
      local_e = 0xdef;
      local_10 = 0xe432;
      func_0x00012276();
      local_c = 0x11f2;
      local_e = 0xe440;
      uVar26 = func_0x00000271();
      puVar29 = local_3a;
      if (*(byte *)((int)uVar26 + 0x1b) < 0x5a) {
        local_c = 0;
        local_e = 0xe462;
        uVar26 = func_0x00000271();
        puVar29 = local_3a;
        if ((*(byte *)((int)uVar26 + 0x1e) & 2) != 0) {
          local_c = 0;
          local_e = 0xe484;
          puVar27 = (undefined2 *)func_0x00000271();
          puVar19 = (undefined2 *)puVar27;
          puVar20 = local_32;
          for (iVar23 = 0x10; iVar23 != 0; iVar23 = iVar23 + -1) {
            puVar2 = puVar20;
            puVar20 = puVar20 + 1;
            puVar1 = puVar19;
            puVar19 = puVar19 + 1;
            *puVar2 = *puVar1;
          }
          if ((local_26 == 10000) && (local_1a != 0 || local_1c != 0)) {
            local_c = 0;
            local_e = 0xe4b8;
            uVar28 = func_0x00021eee();
            local_c = 0x1bb4;
            local_e = 0xe4db;
            local_24 = uVar28;
            uVar28 = func_0x00021eee();
            local_1a = 0;
            local_1c = 0;
            local_c = 0x1bb4;
            local_e = 0xe4f6;
            local_20 = uVar28;
            puVar27 = (undefined2 *)func_0x00000271();
            puVar19 = (undefined2 *)puVar27;
            puVar20 = local_32;
            for (iVar23 = 0x10; iVar23 != 0; iVar23 = iVar23 + -1) {
              puVar2 = puVar19;
              puVar19 = puVar19 + 1;
              puVar1 = puVar20;
              puVar20 = puVar20 + 1;
              *puVar2 = *puVar1;
            }
          }
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029bfc();
          func_0x00029983();
          uVar6 = local_72;
          uVar12 = local_70;
          if ((int)local_70 < 0) {
            uVar6 = -local_72;
            uVar12 = -((local_70 & 0x7fff) + (uint)(local_72 != 0));
          }
          uVar7 = local_76;
          uVar13 = local_74;
          if ((int)local_74 < 0) {
            uVar7 = -local_76;
            uVar13 = -((local_74 & 0x7fff) + (uint)(local_76 != 0));
          }
          uVar8 = local_12;
          uVar14 = local_10;
          if ((int)local_10 < 0) {
            uVar8 = -local_12;
            uVar14 = -((local_10 & 0x7fff) + (uint)(local_12 != 0));
          }
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c74();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c74();
          func_0x00029983();
          func_0x000297e6();
          func_0x00029d78();
          func_0x00029c74();
          iVar23 = 0x22b2;
          func_0x00029983();
          local_46 = local_72;
          local_44 = local_70;
          if ((int)local_70 < 0) {
            local_46 = -local_72;
            local_44 = -((local_70 & 0x7fff) + (uint)(local_72 != 0));
          }
          uVar9 = local_76;
          uVar15 = local_74;
          if ((int)local_74 < 0) {
            uVar9 = -local_76;
            uVar15 = -((local_74 & 0x7fff) + (uint)(local_76 != 0));
          }
          uVar16 = local_10;
          uVar10 = local_12;
          puVar29 = local_3a;
          if ((int)local_10 < 0) {
            uVar16 = -((local_10 & 0x7fff) + (uint)(local_12 != 0));
            uVar10 = -local_12;
          }
LAB_3ab8_3b1c:
          local_7e = *(uint *)0x14c;
          local_7c = *(int *)0x14e;
          do {
            if ((local_7c < local_78) || ((local_7c <= local_78 && (local_7e <= local_7a)))) break;
            iVar24 = 0;
            local_e = 0xe6cc;
            local_c = iVar23;
            local_3a = puVar29;
            puVar29 = (uint *)func_0x00000271();
            uVar17 = (undefined2)((ulong)puVar29 >> 0x10);
            local_3a._0_2_ = (uint *)puVar29;
            uVar4 = local_24;
            uVar31 = local_20;
            uVar28 = local_58;
            uVar30 = local_54;
            if ((*(byte *)((int)(uint *)local_3a + 0x1b) < 0x5a) &&
               (((((((uint *)local_3a)[0xf] & 2) != 0 && ((char)((uint *)local_3a)[0xe] == local_16)
                  ) && (*(char *)((int)(uint *)local_3a + 0x1b) == local_17)) &&
                ((char)((uint *)local_3a)[0xd] == local_18)))) {
              puVar21 = &local_66;
              iVar23 = 0x10;
              while( true ) {
                local_3a._2_2_ = (undefined2)((ulong)puVar29 >> 0x10);
                local_54 = uVar30;
                if (iVar23 == 0) break;
                iVar23 = iVar23 + -1;
                puVar3 = puVar21;
                puVar21 = puVar21 + 1;
                *puVar3 = *(uint *)puVar29;
                puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)puVar29 + 1);
                uVar30 = local_54;
              }
              local_36 = local_66;
              local_34 = local_64;
              if ((int)local_64 < 0) {
                local_36 = -local_66;
                local_34 = -((local_64 & 0x7fff) + (uint)(local_66 != 0));
              }
              uVar4 = local_24;
              uVar31 = local_20;
              uVar28 = local_58;
              puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a);
              if ((((int)uVar12 <= (int)local_34) &&
                  (((int)uVar12 < (int)local_34 ||
                   (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a), uVar6 <= local_36))
                  )) && (((int)local_34 < (int)local_44 ||
                         ((puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                          (int)local_34 <= (int)local_44 &&
                          (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                          local_36 <= local_46)))))) {
                local_42 = local_62;
                local_40 = local_60;
                if ((int)local_60 < 0) {
                  local_42 = -local_62;
                  local_40 = -((local_60 & 0x7fff) + (uint)(local_62 != 0));
                }
                puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a);
                if ((((int)uVar13 <= (int)local_40) &&
                    (((int)uVar13 < (int)local_40 ||
                     (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a), uVar7 <= local_42
                     )))) && (((int)local_40 < (int)uVar15 ||
                              ((puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                               (int)local_40 <= (int)uVar15 &&
                               (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                               local_42 <= uVar9)))))) {
                  uVar11 = local_5e;
                  uVar18 = local_5c;
                  if ((int)local_5c < 0) {
                    uVar11 = -local_5e;
                    uVar18 = -((local_5c & 0x7fff) + (uint)(local_5e != 0));
                  }
                  puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a);
                  if ((((((int)uVar14 <= (int)uVar18) &&
                        (((int)uVar14 < (int)uVar18 ||
                         (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                         uVar8 <= uVar11)))) &&
                       (((int)uVar18 < (int)uVar16 ||
                        ((puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                         (int)uVar18 <= (int)uVar16 &&
                         (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                         uVar11 <= uVar10)))))) &&
                      (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                      local_5a == local_26)) &&
                     ((local_26 == 10000 ||
                      ((puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                       local_50 == local_1c &&
                       (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                       local_4e == local_1a)))))) {
                    if ((local_5a == 10000) && (local_4e != 0 || local_50 != 0)) {
                      local_c = 0;
                      local_e = 0xe81d;
                      uVar28 = func_0x00021eee();
                      local_c = 0x1bb4;
                      iVar24 = 0x1bb4;
                      local_e = 0xe840;
                      local_58 = uVar28;
                      uVar30 = func_0x00021eee();
                      local_4e = 0;
                      local_50 = 0;
                      uVar28 = local_58;
                      uVar4 = local_24;
                      uVar31 = local_20;
                    }
                    local_20._2_2_ = (int)(uVar31 >> 0x10);
                    local_20._0_2_ = (uint)uVar31;
                    local_24._2_2_ = (int)(uVar4 >> 0x10);
                    local_24._0_2_ = (uint)uVar4;
                    local_54._2_2_ = (int)(uVar30 >> 0x10);
                    local_54._0_2_ = (uint)uVar30;
                    local_58._2_2_ = (int)(uVar28 >> 0x10);
                    local_58._0_2_ = (uint)uVar28;
                    bVar25 = false;
                    if (uVar4 != uVar31) {
                      if (uVar28 == uVar30) {
                        bVar25 = true;
                        uVar31 = 0;
                        uVar4 = 0;
                      }
                      else if ((uVar28 != uVar4) || (uVar30 != uVar31)) {
                        local_96 = local_24._2_2_;
                        local_8 = local_20._2_2_;
                        local_c = local_54._2_2_;
                        local_3e = 0;
                        local_3c = 0x168;
                        if ((uVar4 < uVar31) && (uVar30 < uVar28)) {
                          local_c = local_54._2_2_ + 0x168;
                          if (param_1 == 0) {
                            if (uVar31 <= uVar28) {
                              local_96 = local_24._2_2_ + 0x168;
                              local_8 = local_20._2_2_ + 0x168;
                            }
                          }
                          else if (uVar31 < uVar28) {
                            local_96 = local_24._2_2_ + 0x168;
                            local_8 = local_20._2_2_ + 0x168;
                          }
                        }
                        local_98 = (uint)local_24;
                        if (uVar31 < uVar4) {
                          if (uVar28 < uVar30) {
                            local_8 = local_8 + 0x168;
                            if (param_1 == 0) {
                              if (uVar30 <= uVar4) {
                                local_58._2_2_ = local_58._2_2_ + 0x168;
                                local_c = local_c + 0x168;
                              }
                            }
                            else if (uVar30 < uVar4) {
                              local_58._2_2_ = local_58._2_2_ + 0x168;
                              local_c = local_c + 0x168;
                            }
                          }
                          if (uVar30 < uVar28) {
                            local_8 = local_8 + 0x168;
                            local_c = local_c + 0x168;
                          }
                        }
                        local_e = (uint)local_54;
                        if (param_1 == 0) {
                          puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a);
                          if (((local_96 <= local_c) &&
                              ((local_96 < local_c ||
                               (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                               (uint)local_24 < (uint)local_54)))) &&
                             ((local_58._2_2_ < local_8 ||
                              ((puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                               local_58._2_2_ <= local_8 &&
                               (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                               (uint)local_58 < (uint)local_20)))))) goto LAB_3ab8_3eff;
                        }
                        else {
                          puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a);
                          if (((local_96 <= local_c) &&
                              ((local_96 < local_c ||
                               (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                               (uint)local_24 <= (uint)local_54)))) &&
                             ((local_58._2_2_ < local_8 ||
                              ((puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                               local_58._2_2_ <= local_8 &&
                               (puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a),
                               (uint)local_58 <= (uint)local_20)))))) {
LAB_3ab8_3eff:
                            if ((local_58._2_2_ <= local_96) &&
                               ((local_58._2_2_ < local_96 || ((uint)local_58 < (uint)local_24)))) {
                              bVar25 = true;
                              local_98 = (uint)local_58;
                              local_96 = local_58._2_2_;
                            }
                            if ((local_8 <= local_c) &&
                               ((local_8 < local_c || ((uint)local_20 < (uint)local_54)))) {
                              bVar25 = true;
                              local_20._0_2_ = (uint)local_54;
                              local_8 = local_c;
                            }
                            if (0x167 < (int)((local_8 - local_96) -
                                             (uint)((uint)local_20 < local_98))) {
                              bVar25 = true;
                            }
                            local_e = 0xeaff;
                            local_c = iVar24;
                            local_58 = uVar28;
                            local_54 = uVar30;
                            local_24 = uVar4;
                            local_20 = uVar31;
                            uVar28 = func_0x00021eee();
                            local_c = 0x1bb4;
                            local_e = 0xeb12;
                            local_24 = uVar28;
                            uVar31 = func_0x00021eee();
                            uVar28 = local_58;
                            uVar30 = local_54;
                            uVar4 = local_24;
                            goto LAB_3ab8_3f9a;
                          }
                        }
                        goto LAB_3ab8_3bcf;
                      }
                    }
LAB_3ab8_3f9a:
                    local_c = 0xeb2c;
                    local_58 = uVar28;
                    local_54 = uVar30;
                    local_24 = uVar4;
                    local_20 = uVar31;
                    func_0x0000daa6();
                    local_c = 0x885;
                    local_e = 0xeb38;
                    FUN_13bf_0327();
                    piVar22 = &local_26;
                    puVar20 = local_32;
                    for (iVar23 = 0x10; iVar23 != 0; iVar23 = iVar23 + -1) {
                      puVar1 = piVar22;
                      piVar22 = piVar22 + 1;
                      puVar27 = puVar20;
                      puVar20 = puVar20 + 1;
                      *puVar1 = *puVar27;
                    }
                    local_2a = 0xeb4e;
                    func_0x00013e46();
                    iVar24 = 0x885;
                    func_0x0000a9df();
                    uVar4 = local_24;
                    uVar31 = local_20;
                    uVar28 = local_58;
                    uVar30 = local_54;
                    puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a);
                    if (bVar25) goto LAB_3ab8_3fe0;
                  }
                }
              }
            }
LAB_3ab8_3bcf:
            local_54 = uVar30;
            local_58 = uVar28;
            local_20 = uVar31;
            local_24 = uVar4;
            bVar25 = local_7e == 0;
            local_7e = local_7e - 1;
            local_7c = local_7c - (uint)bVar25;
            iVar23 = iVar24;
          } while( true );
        }
      }
      local_78 = local_78 + (uint)(0xfffe < local_7a);
    }
  }
  return 0;
LAB_3ab8_3fe0:
  local_c = 0x885;
  iVar23 = 0;
  local_e = 0xeb6b;
  puVar27 = (undefined2 *)func_0x00000271();
  puVar29 = (uint *)CONCAT22(local_3a._2_2_,(uint *)local_3a);
  puVar19 = (undefined2 *)puVar27;
  puVar20 = local_32;
  for (iVar24 = 0x10; iVar24 != 0; iVar24 = iVar24 + -1) {
    puVar2 = puVar19;
    puVar19 = puVar19 + 1;
    puVar1 = puVar20;
    puVar20 = puVar20 + 1;
    *puVar2 = *puVar1;
  }
  goto LAB_3ab8_3b1c;
}



/* 3ab8:400a  FUN_3ab8_400a  3204 bytes, 0 callers */

void FUN_3ab8_400a(undefined2 param_1,uint param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined2 uVar9;
  uint uVar10;
  char unaff_SI;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  uint *puVar19;
  uint local_1076;
  uint local_1074;
  char local_1072;
  uint local_106c;
  uint local_106a;
  uint auStack_1068 [2042];
  uint local_74;
  uint local_72;
  uint local_70;
  uint local_6e;
  uint local_6c;
  uint local_6a;
  uint local_68;
  uint local_66;
  uint local_64;
  uint local_62;
  uint local_60;
  uint local_5e;
  uint local_5c;
  uint local_5a;
  uint local_58;
  uint local_56;
  uint local_54;
  uint local_52;
  char local_50;
  uint local_4e;
  uint local_4c;
  uint local_4a;
  uint local_48;
  uint local_46;
  uint local_44;
  uint local_42;
  uint local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  uint local_3a;
  uint local_38;
  uint local_36;
  uint local_34;
  uint local_32;
  uint local_30;
  uint local_2e;
  uint local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  int local_1a;
  uint local_18;
  uint local_16;
  uint local_14;
  uint local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  char local_8;
  char local_7;
  
  FUN_21f2_0ebc();
  local_1c = 1000;
  local_1a = 0;
  local_3e = *(undefined2 *)0x148;
  local_3c = *(undefined2 *)0x14a;
  local_c = 0x22b2;
  local_e = 0xebd7;
  FUN_1000_0599();
  local_c = 0x1fe;
  local_e = 0xdef;
  local_10 = 0xebea;
  func_0x00012276();
  local_c = 0x11f2;
  local_e = 0xebfa;
  FUN_1000_0599();
  func_0x00010526();
  local_c = 0xdef;
  local_e = 0xec0e;
  FUN_1000_0599();
  uVar12 = 0x11f2;
  local_c = 0xec19;
  func_0x00012276();
  local_1074 = 0;
  local_1076 = 0;
  local_56 = 0;
  for (local_58 = 1;
      ((int)local_56 <= *(int *)0x14a &&
      (((int)local_56 < *(int *)0x14a || (local_58 <= *(uint *)0x148)))); local_58 = local_58 + 1) {
    local_e = 0xec51;
    local_c = uVar12;
    uVar18 = func_0x0000013f();
    if (*(byte *)((int)uVar18 + 0x11) < 0x5a) {
      local_c = 0;
      local_e = 0xec69;
      uVar18 = func_0x0000013f();
      if ((*(byte *)((int)uVar18 + 0x14) & 2) != 0) {
        bVar15 = 0xfffe < local_1076;
        local_1076 = local_1076 + 1;
        local_1074 = local_1074 + bVar15;
        if (((int)local_1074 <= local_1a) &&
           (((int)local_1074 < local_1a || (local_1076 <= local_1c)))) {
          auStack_1068[local_1076 * 2] = local_58;
          auStack_1068[local_1076 * 2 + 1] = local_56;
        }
      }
    }
    uVar12 = 0;
    local_56 = local_56 + (0xfffe < local_58);
  }
  if ((local_1a < (int)local_1074) || ((local_1a <= (int)local_1074 && (local_1c < local_1076)))) {
    local_50 = '\0';
    local_60 = *(uint *)0x148;
    local_5e = *(uint *)0x14a;
  }
  else {
    local_50 = '\x01';
    local_60 = local_1076;
    local_5e = local_1074;
  }
  if (((0x13 < *(byte *)0x123) && (local_1a <= (int)local_1074)) &&
     ((local_1a < (int)local_1074 || (local_1c < local_1076)))) {
    iVar6 = *(int *)0x14a - (uint)(*(uint *)0x148 < 2000);
    if (((int)local_1074 <= iVar6) &&
       (((int)local_1074 < iVar6 || (local_1076 < *(uint *)0x148 - 2000)))) {
      local_106c = *(uint *)0x148 + 1;
      local_106a = *(int *)0x14a + (uint)(0xfffe < *(uint *)0x148);
      local_1074 = 0;
      local_1076 = 0;
      local_6e = *(uint *)0x14a;
      for (local_70 = *(uint *)0x148;
          (-1 < (int)local_6e && ((0 < (int)local_6e || (local_70 != 0)))); local_70 = local_70 - 1)
      {
        local_e = 0xed73;
        local_c = uVar12;
        uVar18 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar18 + 0x14);
        *pbVar1 = *pbVar1 & 0xbf;
        local_c = 0;
        local_e = 0xed89;
        uVar18 = func_0x0000013f();
        pbVar1 = (byte *)((int)uVar18 + 0x14);
        *pbVar1 = *pbVar1 & 0x7f;
        local_c = 0;
        local_e = 0xed9f;
        uVar18 = func_0x0000013f();
        if ((*(byte *)((int)uVar18 + 0x14) & 2) == 0) {
LAB_3ab8_4244:
          local_c = 0;
          local_e = 0xedcf;
          uVar18 = func_0x0000013f();
          if ((*(byte *)((int)uVar18 + 0x14) & 0x40) != 0) goto LAB_3ab8_4277;
          local_c = 0;
          local_e = 0xede7;
          uVar18 = func_0x0000013f();
          if ((*(byte *)((int)uVar18 + 0x14) & 0x80) != 0) goto LAB_3ab8_4277;
        }
        else {
          local_c = 0;
          local_e = 0xedb7;
          uVar18 = func_0x0000013f();
          if (0x59 < *(byte *)((int)uVar18 + 0x11)) goto LAB_3ab8_4244;
LAB_3ab8_4277:
          bVar15 = 0xfffe < local_1076;
          local_1076 = local_1076 + 1;
          local_1074 = local_1074 + bVar15;
          bVar15 = local_106c == 0;
          local_106c = local_106c - 1;
          local_106a = local_106a - bVar15;
          if ((local_106c != local_70) || (local_106a != local_6e)) {
            local_c = 0;
            local_e = 0xee2d;
            puVar19 = (uint *)func_0x0000013f();
            puVar11 = (uint *)puVar19;
            puVar8 = &local_18;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar4 = *puVar3;
            }
            local_c = 0;
            local_e = 0xee4a;
            puVar19 = (uint *)func_0x0000013f();
            puVar11 = (uint *)puVar19;
            puVar8 = &local_3a;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar8;
              puVar8 = puVar8 + 1;
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              *puVar4 = *puVar3;
            }
            local_c = 0;
            local_e = 0xee69;
            puVar19 = (uint *)func_0x0000013f();
            puVar11 = (uint *)puVar19;
            puVar8 = &local_3a;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar11;
              puVar11 = puVar11 + 1;
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar4 = *puVar3;
            }
            local_c = 0;
            local_e = 0xee8a;
            puVar19 = (uint *)func_0x0000013f();
            puVar11 = (uint *)puVar19;
            puVar8 = &local_18;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar11;
              puVar11 = puVar11 + 1;
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar4 = *puVar3;
            }
          }
        }
        uVar12 = 0;
        local_6e = local_6e - (local_70 == 0);
      }
      local_58 = local_106c;
      local_56 = local_106a;
      goto LAB_3ab8_4349;
    }
  }
  local_58 = 1;
  local_56 = 0;
LAB_3ab8_4349:
  uVar13 = uVar12;
  if ((local_1a <= (int)local_1074) && ((local_1a < (int)local_1074 || (local_1c < local_1076)))) {
    local_c = 2;
    local_e = 0x24;
    local_10 = 0x4755;
    uVar13 = 0xdef;
    local_14 = 0xeef6;
    local_12 = uVar12;
    FUN_1000_02b5();
  }
  local_e = 0xef06;
  local_c = uVar13;
  FUN_1000_0599();
  func_0x00010526();
  local_c = 0xdef;
  local_e = 0xef1a;
  FUN_1000_0599();
  uVar12 = 0x11f2;
  local_c = 0xef25;
  func_0x00012276();
  local_c = param_2;
  local_e = 0x11f2;
  local_10 = 0xef35;
  iVar6 = FUN_3ab8_37d3();
  if (iVar6 == 0) {
    iVar6 = FUN_3ab8_3557();
    puVar19 = (uint *)CONCAT22(local_24._2_2_,(uint *)local_24);
    if (iVar6 == 0) {
      do {
        local_24 = puVar19;
        if ((int)local_5e < (int)local_56) {
          FUN_3ab8_4cdd();
          return;
        }
        if (((int)local_5e <= (int)local_56) && (local_60 <= local_58)) {
          FUN_3ab8_4cdd();
          return;
        }
        uVar13 = uVar12;
        if (((byte)local_58 & 0xf) == 0xf) {
          uVar13 = 0x11f2;
          cVar5 = FUN_12c1_009c();
          if (cVar5 == '\x1b') {
            FUN_3ab8_4cdd();
            return;
          }
        }
        local_20 = local_58;
        if (local_50 != '\0') {
          local_20 = auStack_1068[local_58 * 2];
        }
        uVar12 = 0;
        local_e = 0xefa1;
        local_c = uVar13;
        puVar19 = (uint *)func_0x0000013f();
        uVar9 = (undefined2)((ulong)puVar19 >> 0x10);
        puVar8 = (uint *)puVar19;
        local_24 = puVar19;
        if ((((*(byte *)((int)puVar8 + 0x11) < 0x5a) && ((puVar8[10] & 2) != 0)) &&
            ((puVar8[10] & 0x40) == 0)) && ((puVar8[10] & 0x80) == 0)) {
          puVar11 = &local_18;
          for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar4 = puVar11;
            puVar11 = puVar11 + 1;
            puVar3 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar4 = *puVar3;
          }
          local_c = 0;
          local_e = 0xeff3;
          FUN_1000_0599();
          local_c = 0x1fe;
          local_e = 0xdef;
          local_10 = 0xf006;
          func_0x00012276();
          while( true ) {
            func_0x000297e6();
            func_0x00029d78();
            local_10 = 0x22b2;
            local_12 = 0xf02a;
            func_0x000299d1();
            local_10 = 0x22b2;
            local_12 = 0xf032;
            func_0x000297e6();
            local_10 = 0x22b2;
            local_12 = 0xf037;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xf041;
            func_0x000299d1();
            local_18 = 0x22b2;
            local_1a = 0xf049;
            func_0x000297e6();
            local_18 = 0x22b2;
            local_1a = -0xfb2;
            func_0x00029d78();
            local_20 = 0x22b2;
            local_24._2_2_ = 0xf058;
            func_0x000299d1();
            local_20 = 0x22b2;
            local_24._2_2_ = 0xf060;
            func_0x000297e6();
            local_20 = 0x22b2;
            local_24._2_2_ = 0xf065;
            func_0x00029d78();
            uStack_28 = 0x22b2;
            uStack_2a = 0xf06f;
            func_0x000299d1();
            uStack_28 = 0x22b2;
            uStack_2a = 0xf074;
            iVar6 = FUN_1def_043a();
            if (iVar6 == 0) break;
            uVar16 = 0;
            uVar17 = param_2 == 0;
            if ((bool)uVar17) {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029bfc();
            }
            else {
              func_0x000297e6();
              func_0x00029d78();
              func_0x00029c74();
            }
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c74();
            func_0x00029983();
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar16 || (bool)uVar17) {
              local_5c = local_10;
              local_5a = local_e;
              local_68 = local_18;
              local_66 = local_16;
            }
            else {
              local_5c = local_18;
              local_5a = local_16;
              local_68 = local_10;
              local_66 = local_e;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar16) {
              local_6c = local_14;
              local_6a = local_12;
              local_74 = local_c;
              local_72 = 0xf1a5;
            }
            else {
              local_6c = local_c;
              local_6a = 0xf1a5;
              local_74 = local_14;
              local_72 = local_12;
            }
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c74();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029bfc();
            func_0x00029983();
            func_0x000297e6();
            func_0x00029d78();
            func_0x00029c74();
            func_0x00029983();
            local_46 = local_5c;
            local_44 = local_5a;
            if ((int)local_5a < 0) {
              local_46 = -local_5c;
              local_44 = -((local_5a & 0x7fff) + (uint)(local_5c != 0));
            }
            local_4e = local_6c;
            local_4c = local_6a;
            if ((int)local_6a < 0) {
              local_4e = -local_6c;
              local_4c = -((local_6a & 0x7fff) + (uint)(local_6c != 0));
            }
            local_54 = local_68;
            local_52 = local_66;
            if ((int)local_66 < 0) {
              local_54 = -local_68;
              local_52 = -((local_66 & 0x7fff) + (uint)(local_68 != 0));
            }
            local_64 = local_74;
            local_62 = local_72;
            if ((int)local_72 < 0) {
              local_64 = -local_74;
              local_62 = -((local_72 & 0x7fff) + (uint)(local_74 != 0));
            }
            local_70 = local_60;
            local_6e = local_5e;
            uVar12 = 0x22b2;
            puVar19 = (uint *)CONCAT22(local_24._2_2_,(uint *)local_24);
LAB_3ab8_4767:
            if (((int)local_6e < (int)local_56) ||
               (((int)local_6e <= (int)local_56 && (local_70 <= local_58)))) goto LAB_3ab8_4434;
            local_42 = local_70;
            uVar13 = local_6e;
            if (local_50 != '\0') {
              local_42 = auStack_1068[local_70 * 2];
              uVar13 = auStack_1068[local_70 * 2 + 1];
            }
            uVar14 = 0;
            local_e = 0xf329;
            local_40 = uVar13;
            local_c = uVar12;
            local_24 = puVar19;
            puVar19 = (uint *)func_0x0000013f();
            uVar9 = (undefined2)((ulong)puVar19 >> 0x10);
            puVar8 = (uint *)puVar19;
            local_24 = puVar19;
            if ((((0x59 < *(byte *)((int)puVar8 + 0x11)) || ((puVar8[10] & 2) == 0)) ||
                (((puVar8[10] & 0x40) != 0 ||
                 ((((puVar8[10] & 0x80) != 0 || ((char)puVar8[9] != unaff_SI)) ||
                  (local_7 = (char)(uVar13 >> 8), *(char *)((int)puVar8 + 0x11) != local_7)))))) ||
               (local_8 = (char)uVar13, (char)puVar8[8] != local_8)) goto LAB_3ab8_47d2;
            puVar11 = &local_3a;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar19 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar3 = *puVar19;
            }
            uVar12 = local_3a;
            uVar13 = local_38;
            if ((int)local_38 < 0) {
              uVar12 = -local_3a;
              uVar13 = -((local_38 & 0x7fff) + (uint)(local_3a != 0));
            }
            uVar7 = local_32;
            uVar10 = local_30;
            if ((int)local_30 < 0) {
              uVar7 = -local_32;
              uVar10 = -((local_30 & 0x7fff) + (uint)(local_32 != 0));
            }
            if ((((((int)uVar13 <= (int)local_44) &&
                  (((int)uVar13 < (int)local_44 || (uVar12 < local_46)))) &&
                 ((int)uVar10 <= (int)local_44)) &&
                (((int)uVar10 < (int)local_44 || (uVar7 < local_46)))) ||
               ((((int)local_52 <= (int)uVar13 &&
                 ((((int)local_52 < (int)uVar13 || (local_54 < uVar12)) &&
                  ((int)local_52 <= (int)uVar10)))) &&
                (((int)local_52 < (int)uVar10 || (local_54 < uVar7)))))) goto LAB_3ab8_47d2;
            uVar12 = local_36;
            uVar13 = local_34;
            if ((int)local_34 < 0) {
              uVar12 = -local_36;
              uVar13 = -((local_34 & 0x7fff) + (uint)(local_36 != 0));
            }
            uVar7 = local_2e;
            uVar10 = local_2c;
            if ((int)local_2c < 0) {
              uVar7 = -local_2e;
              uVar10 = -((local_2c & 0x7fff) + (uint)(local_2e != 0));
            }
            if (((((int)uVar13 <= (int)local_4c) &&
                 (((int)uVar13 < (int)local_4c || (uVar12 < local_4e)))) &&
                (((int)uVar10 <= (int)local_4c &&
                 (((int)uVar10 < (int)local_4c || (uVar7 < local_4e)))))) ||
               (((int)local_62 <= (int)uVar13 &&
                (((((int)local_62 < (int)uVar13 || (local_64 < uVar12)) &&
                  ((int)local_62 <= (int)uVar10)) &&
                 (((int)local_62 < (int)uVar10 || (local_64 < uVar7)))))))) goto LAB_3ab8_47d2;
            func_0x000297e6();
            func_0x00029d78();
            local_10 = 0x22b2;
            local_12 = 0xf4d8;
            func_0x000299d1();
            local_10 = 0x22b2;
            local_12 = 0xf4e0;
            func_0x000297e6();
            local_10 = 0x22b2;
            local_12 = 0xf4e5;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xf4ef;
            func_0x000299d1();
            local_18 = 1;
            local_1a = 0x22b2;
            local_1c = 0xf4f8;
            puVar8 = (uint *)func_0x0001e558();
            uVar16 = (undefined1 *)0xffed < &local_18;
            uVar17 = &stack0x0000 == (undefined1 *)0x6;
            local_6c = *puVar8;
            local_6a = puVar8[1];
            func_0x00029834();
            func_0x000297e6();
            func_0x00029ae7();
            func_0x00029d78();
            uVar14 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar16 && !(bool)uVar17) goto LAB_3ab8_47d2;
            func_0x000297e6();
            func_0x00029d78();
            local_10 = 0x22b2;
            local_12 = 0xf541;
            func_0x000299d1();
            local_10 = 0x22b2;
            local_12 = 0xf549;
            func_0x000297e6();
            local_10 = 0x22b2;
            local_12 = 0xf54e;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xf558;
            func_0x000299d1();
            local_18 = 1;
            local_1a = 0x22b2;
            local_1c = 0xf561;
            puVar8 = (uint *)func_0x0001e558();
            uVar16 = (undefined1 *)0xffed < &local_18;
            uVar17 = &stack0x0000 == (undefined1 *)0x6;
            local_74 = *puVar8;
            local_72 = puVar8[1];
            func_0x00029834();
            func_0x000297e6();
            func_0x00029ae7();
            func_0x00029d78();
            uVar14 = 0x22b2;
            FUN_28b3_1181();
            if (!(bool)uVar16 && !(bool)uVar17) goto LAB_3ab8_47d2;
            func_0x000297e6();
            func_0x00029d78();
            local_10 = 0x22b2;
            local_12 = 0xf5ad;
            func_0x000299d1();
            local_10 = 0x22b2;
            local_12 = 0xf5b5;
            func_0x000297e6();
            local_10 = 0x22b2;
            local_12 = 0xf5ba;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xf5c4;
            func_0x000299d1();
            local_18 = 1;
            local_1a = 0x22b2;
            local_1c = 0xf5cd;
            puVar8 = (uint *)FUN_1def_05d1();
            local_5c = *puVar8;
            local_5a = puVar8[1];
            func_0x000297e6();
            func_0x00029d78();
            local_10 = 0x22b2;
            local_12 = 0xf5f4;
            func_0x000299d1();
            local_10 = 0x22b2;
            local_12 = 0xf5fc;
            func_0x000297e6();
            local_10 = 0x22b2;
            local_12 = 0xf601;
            func_0x00029d78();
            local_18 = 0x22b2;
            local_1a = 0xf60b;
            func_0x000299d1();
            local_18 = 1;
            local_1a = 0x22b2;
            local_1c = 0xf614;
            puVar8 = (uint *)FUN_1def_05d1();
            local_1072 = (undefined1 *)0xffed < &local_18;
            uVar16 = &stack0x0000 == (undefined1 *)0x6;
            local_68 = *puVar8;
            local_66 = puVar8[1];
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            uVar13 = local_5a;
            uVar12 = local_5c;
            if (!(bool)local_1072 && !(bool)uVar16) {
              local_4a = local_5c;
              local_48 = local_5a;
              local_5c = local_68;
              local_5a = local_66;
              local_68 = uVar12;
              local_66 = uVar13;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)local_1072 && !(bool)uVar16) {
LAB_3ab8_4b0f:
              uVar14 = 0x22b2;
LAB_3ab8_47d2:
              bVar15 = local_70 == 0;
              local_70 = local_70 - 1;
              local_6e = local_6e - bVar15;
              uVar12 = uVar14;
              puVar19 = local_24;
              goto LAB_3ab8_4767;
            }
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if (!(bool)local_1072 && !(bool)uVar16) goto LAB_3ab8_4b0f;
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)local_1072) {
              local_c = *(undefined2 *)0x9cf2;
              local_e = *(undefined2 *)0x9cf0;
              local_10 = 0x22b2;
              local_12 = 0xf6cf;
              func_0x000297e6();
              local_10 = 0x22b2;
              local_12 = 0xf6d4;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = 0xf6de;
              func_0x000299d1();
              local_18 = 0;
              local_1a = 0x22b2;
              local_1c = 0xf6e6;
              puVar8 = (uint *)FUN_1def_05d1();
              local_18 = *puVar8;
              local_16 = puVar8[1];
              local_c = *(uint *)0x9cf2;
              local_e = *(uint *)0x9cf0;
              local_10 = 0x1bb4;
              local_12 = 0xf70e;
              func_0x000297e6();
              local_10 = 0x22b2;
              local_12 = 0xf713;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = 0xf71d;
              func_0x000299d1();
              local_18 = 0;
              local_1a = 0x22b2;
              local_1c = 0xf725;
              puVar8 = (uint *)func_0x0001e558();
              local_14 = *puVar8;
              local_12 = puVar8[1];
            }
            uVar16 = (bool)local_1072 && (undefined1 *)0xffed < &local_18;
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_1181();
            if ((bool)uVar16) {
              local_1072 = '\x01';
              local_c = *(undefined2 *)0x9cf2;
              local_e = *(undefined2 *)0x9cf0;
              local_10 = 0x22b2;
              local_12 = 0xf76d;
              func_0x000297e6();
              local_10 = 0x22b2;
              local_12 = 0xf772;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = 0xf77c;
              func_0x000299d1();
              local_18 = 0;
              local_1a = 0x22b2;
              local_1c = 0xf784;
              FUN_1def_05d1();
              local_c = *(undefined2 *)0x9cf2;
              local_e = *(uint *)0x9cf0;
              local_10 = 0x1bb4;
              local_12 = 0xf7ac;
              func_0x000297e6();
              local_10 = 0x22b2;
              local_12 = 0xf7b1;
              func_0x00029d78();
              local_18 = 0x22b2;
              local_1a = 0xf7bb;
              func_0x000299d1();
              local_18 = 0;
              local_1a = 0x22b2;
              local_1c = 0xf7c3;
              func_0x0001e558();
            }
            local_c = 0xf7db;
            func_0x0000daa6();
            puVar11 = &local_1c;
            puVar8 = &local_18;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar3 = puVar11;
              puVar11 = puVar11 + 1;
              puVar19 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar3 = *puVar19;
            }
            local_20 = 0xf7f0;
            FUN_17a6_0ae3();
            local_c = 0x11f2;
            local_e = 0xf7fe;
            uVar18 = func_0x0000013f();
            *(undefined1 *)((int)uVar18 + 0x11) = 100;
            piVar2 = (int *)0x148;
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            *(int *)0x14a = *(int *)0x14a - (uint)(iVar6 == 0);
            uVar14 = 0x885;
            func_0x0000a9df();
            if (local_1072 == '\0') goto LAB_3ab8_47d2;
            local_c = 0x885;
            local_e = 0xf837;
            puVar19 = (uint *)func_0x0000013f();
            puVar11 = (uint *)puVar19;
            puVar8 = &local_18;
            for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
              puVar4 = puVar11;
              puVar11 = puVar11 + 1;
              puVar3 = puVar8;
              puVar8 = puVar8 + 1;
              *puVar4 = *puVar3;
            }
            local_c = 0;
            local_e = 0xf858;
            FUN_13bf_0a80();
          }
          local_c = 0x1bb4;
          local_e = 0xf088;
          FUN_1000_0599();
          local_c = 0xf093;
          func_0x00012276();
          func_0x00010526();
          local_c = 0xdef;
          local_e = 0xf0a4;
          uVar18 = func_0x0000013f();
          *(undefined1 *)((int)uVar18 + 0x11) = 100;
          piVar2 = (int *)0x148;
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          *(int *)0x14a = *(int *)0x14a - (uint)(iVar6 == 0);
          uVar12 = 0x885;
          func_0x0000a9df();
          puVar19 = (uint *)CONCAT22(local_24._2_2_,(uint *)local_24);
        }
LAB_3ab8_4434:
        bVar15 = 0xfffe < local_58;
        local_58 = local_58 + 1;
        local_56 = local_56 + bVar15;
      } while( true );
    }
  }
  return;
}



/* 3ab8:4c91  FUN_3ab8_4c91  76 bytes, 1 callers */

void FUN_3ab8_4c91(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  char cVar6;
  undefined2 *puVar7;
  int in_AX;
  undefined2 uVar8;
  int iVar9;
  int in_BX;
  int unaff_BP;
  int iVar10;
  int unaff_SI;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined2 *puVar16;
  undefined4 uVar17;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 auStack_12 [3];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  *(int *)(in_BX + unaff_SI) = *(int *)(in_BX + unaff_SI) + in_AX;
code_r0x0003f813:
  piVar2 = (int *)(unaff_BP + -0x1074);
  iVar10 = *piVar2;
  *piVar2 = *piVar2 + -1;
  *(int *)(unaff_BP + -0x1072) = *(int *)(unaff_BP + -0x1072) - (uint)(iVar10 == 0);
  uVar13 = 0x885;
  func_0x0000a9df();
  if (*(char *)(unaff_BP + -0x1070) != '\0') {
    uStack_6 = 0x885;
    uStack_8 = 0xf837;
    uVar17 = func_0x0000013f();
    *(undefined2 *)(unaff_BP + -0x1092) = (int)uVar17;
    *(undefined2 *)(unaff_BP + -0x1090) = (int)((ulong)uVar17 >> 0x10);
    puVar7 = (undefined2 *)(unaff_BP + -0x16);
    puVar16 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x1092);
    puVar11 = (undefined2 *)puVar16;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar11;
      puVar11 = puVar11 + 1;
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar5 = *puVar4;
    }
    uStack_6 = 0;
    uStack_8 = 0xf858;
    FUN_13bf_0a80();
    goto LAB_3ab8_4493;
  }
LAB_3ab8_47d2:
  do {
    do {
      do {
        do {
          do {
            do {
              do {
                piVar2 = (int *)(unaff_BP + -0x6e);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                *(int *)(unaff_BP + -0x6c) = *(int *)(unaff_BP + -0x6c) - (uint)(iVar10 == 0);
                uVar12 = uVar13;
                while( true ) {
                  if ((*(int *)(unaff_BP + -0x54) <= *(int *)(unaff_BP + -0x6c)) &&
                     ((*(int *)(unaff_BP + -0x54) < *(int *)(unaff_BP + -0x6c) ||
                      (*(uint *)(unaff_BP + -0x56) < *(uint *)(unaff_BP + -0x6e))))) break;
                  while( true ) {
                    do {
                      puVar1 = (uint *)(unaff_BP + -0x56);
                      uVar3 = *puVar1;
                      *puVar1 = *puVar1 + 1;
                      *(int *)(unaff_BP + -0x54) =
                           *(int *)(unaff_BP + -0x54) + (uint)(0xfffe < uVar3);
                      if (*(int *)(unaff_BP + -0x5c) < *(int *)(unaff_BP + -0x54)) {
                        FUN_3ab8_4cdd();
                        return;
                      }
                      if ((*(int *)(unaff_BP + -0x5c) <= *(int *)(unaff_BP + -0x54)) &&
                         (*(uint *)(unaff_BP + -0x5e) <= *(uint *)(unaff_BP + -0x56))) {
                        FUN_3ab8_4cdd();
                        return;
                      }
                      uVar13 = uVar12;
                      if ((*(byte *)(unaff_BP + -0x56) & 0xf) == 0xf) {
                        uVar13 = 0x11f2;
                        cVar6 = FUN_12c1_009c();
                        if (cVar6 == '\x1b') {
                          FUN_3ab8_4cdd();
                          return;
                        }
                      }
                      if (*(char *)(unaff_BP + -0x4e) == '\0') {
                        uVar12 = *(undefined2 *)(unaff_BP + -0x56);
                        uVar8 = *(undefined2 *)(unaff_BP + -0x54);
                      }
                      else {
                        iVar10 = *(int *)(unaff_BP + -0x56) * 4;
                        uVar12 = *(undefined2 *)(unaff_BP + iVar10 + -0x1066);
                        uVar8 = *(undefined2 *)(unaff_BP + iVar10 + -0x1064);
                      }
                      *(undefined2 *)(unaff_BP + -0x1e) = uVar12;
                      *(undefined2 *)(unaff_BP + -0x1c) = uVar8;
                      uVar12 = 0;
                      uStack_8 = 0xefa1;
                      uStack_6 = uVar13;
                      puVar16 = (undefined2 *)func_0x0000013f();
                      uVar13 = (undefined2)((ulong)puVar16 >> 0x10);
                      puVar7 = (undefined2 *)puVar16;
                      *(undefined2 *)(unaff_BP + -0x22) = puVar7;
                      *(undefined2 *)(unaff_BP + -0x20) = uVar13;
                    } while ((((0x59 < *(byte *)((int)puVar7 + 0x11)) ||
                              ((*(byte *)(puVar7 + 10) & 2) == 0)) || ((puVar7[10] & 0x40) != 0)) ||
                            ((puVar7[10] & 0x80) != 0));
                    puVar11 = (undefined2 *)(unaff_BP + -0x16);
                    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
                      puVar4 = puVar11;
                      puVar11 = puVar11 + 1;
                      puVar16 = puVar7;
                      puVar7 = puVar7 + 1;
                      *puVar4 = *puVar16;
                    }
                    uStack_6 = 0;
                    uStack_8 = 0xeff3;
                    FUN_1000_0599();
                    uStack_6 = 0x1fe;
                    uStack_8 = 0xdef;
                    uStack_a = 0xf006;
                    func_0x00012276();
                    piVar2 = (int *)(unaff_BP + -0x1074);
                    iVar10 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    *(int *)(unaff_BP + -0x1072) =
                         *(int *)(unaff_BP + -0x1072) - (uint)(iVar10 == 0);
LAB_3ab8_4493:
                    func_0x000297e6();
                    func_0x00029d78();
                    uStack_a = 0x22b2;
                    uStack_c = 0xf02a;
                    func_0x000299d1();
                    uStack_a = 0x22b2;
                    uStack_c = 0xf032;
                    func_0x000297e6();
                    uStack_a = 0x22b2;
                    uStack_c = 0xf037;
                    func_0x00029d78();
                    auStack_12[0] = 0x22b2;
                    uStack_14 = 0xf041;
                    func_0x000299d1();
                    auStack_12[0] = 0x22b2;
                    uStack_14 = 0xf049;
                    func_0x000297e6();
                    auStack_12[0] = 0x22b2;
                    uStack_14 = 0xf04e;
                    func_0x00029d78();
                    func_0x000299d1(0x22b2);
                    func_0x000297e6(0x22b2);
                    func_0x00029d78(0x22b2);
                    func_0x000299d1(0x22b2);
                    iVar10 = FUN_1def_043a(0x22b2);
                    if (iVar10 != 0) break;
                    uStack_6 = 0x1bb4;
                    uStack_8 = 0xf088;
                    FUN_1000_0599();
                    uStack_6 = 0xf093;
                    func_0x00012276();
                    func_0x00010526();
                    uStack_6 = 0xdef;
                    uStack_8 = 0xf0a4;
                    uVar17 = func_0x0000013f();
                    *(undefined1 *)((int)uVar17 + 0x11) = 100;
                    piVar2 = (int *)0x148;
                    iVar10 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    *(int *)0x14a = *(int *)0x14a - (uint)(iVar10 == 0);
                    uVar12 = 0x885;
                    func_0x0000a9df();
                  }
                  uVar14 = 0;
                  uVar15 = *(int *)(unaff_BP + 6) == 0;
                  if ((bool)uVar15) {
                    uVar13 = *(undefined2 *)0x9d36;
                    *(undefined2 *)(unaff_BP + -0x106e) = *(undefined2 *)0x9d34;
                    *(undefined2 *)(unaff_BP + -0x106c) = uVar13;
                    func_0x000297e6();
                    func_0x00029d78();
                    func_0x00029bfc();
                  }
                  else {
                    uVar13 = *(undefined2 *)0x9d32;
                    *(undefined2 *)(unaff_BP + -0x106e) = *(undefined2 *)0x9d30;
                    *(undefined2 *)(unaff_BP + -0x106c) = uVar13;
                    func_0x000297e6();
                    func_0x00029d78();
                    func_0x00029c74();
                  }
                  func_0x00029983();
                  uVar13 = *(undefined2 *)0x9d32;
                  *(undefined2 *)(unaff_BP + -0x107c) = *(undefined2 *)0x9d30;
                  *(undefined2 *)(unaff_BP + -0x107a) = uVar13;
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029c74();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar14 || (bool)uVar15) {
                    uVar13 = *(undefined2 *)(unaff_BP + -0xc);
                    *(undefined2 *)(unaff_BP + -0x5a) = *(undefined2 *)(unaff_BP + -0xe);
                    *(undefined2 *)(unaff_BP + -0x58) = uVar13;
                    uVar13 = *(undefined2 *)(unaff_BP + -0x16);
                    uVar12 = *(undefined2 *)(unaff_BP + -0x14);
                  }
                  else {
                    uVar13 = *(undefined2 *)(unaff_BP + -0x14);
                    *(undefined2 *)(unaff_BP + -0x5a) = *(undefined2 *)(unaff_BP + -0x16);
                    *(undefined2 *)(unaff_BP + -0x58) = uVar13;
                    uVar13 = *(undefined2 *)(unaff_BP + -0xe);
                    uVar12 = *(undefined2 *)(unaff_BP + -0xc);
                  }
                  *(undefined2 *)(unaff_BP + -0x66) = uVar13;
                  *(undefined2 *)(unaff_BP + -100) = uVar12;
                  func_0x000297e6();
                  func_0x000297e6();
                  FUN_28b3_1181();
                  if ((bool)uVar14) {
                    uVar13 = *(undefined2 *)(unaff_BP + -0x10);
                    *(undefined2 *)(unaff_BP + -0x6a) = *(undefined2 *)(unaff_BP + -0x12);
                    *(undefined2 *)(unaff_BP + -0x68) = uVar13;
                    uVar13 = *(undefined2 *)(unaff_BP + -10);
                    uVar12 = *(undefined2 *)(unaff_BP + -8);
                  }
                  else {
                    uVar13 = *(undefined2 *)(unaff_BP + -8);
                    *(undefined2 *)(unaff_BP + -0x6a) = *(undefined2 *)(unaff_BP + -10);
                    *(undefined2 *)(unaff_BP + -0x68) = uVar13;
                    uVar13 = *(undefined2 *)(unaff_BP + -0x12);
                    uVar12 = *(undefined2 *)(unaff_BP + -0x10);
                  }
                  *(undefined2 *)(unaff_BP + -0x72) = uVar13;
                  *(undefined2 *)(unaff_BP + -0x70) = uVar12;
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029c74();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029bfc();
                  func_0x00029983();
                  func_0x000297e6();
                  func_0x00029d78();
                  func_0x00029c74();
                  uVar12 = 0x22b2;
                  func_0x00029983();
                  if (*(int *)(unaff_BP + -0x58) < 0) {
                    iVar10 = -*(int *)(unaff_BP + -0x5a);
                    iVar9 = -((*(uint *)(unaff_BP + -0x58) & 0x7fff) +
                             (uint)(*(int *)(unaff_BP + -0x5a) != 0));
                  }
                  else {
                    iVar10 = *(int *)(unaff_BP + -0x5a);
                    iVar9 = *(int *)(unaff_BP + -0x58);
                  }
                  *(int *)(unaff_BP + -0x44) = iVar10;
                  *(int *)(unaff_BP + -0x42) = iVar9;
                  if (*(int *)(unaff_BP + -0x68) < 0) {
                    iVar10 = -*(int *)(unaff_BP + -0x6a);
                    iVar9 = -((*(uint *)(unaff_BP + -0x68) & 0x7fff) +
                             (uint)(*(int *)(unaff_BP + -0x6a) != 0));
                  }
                  else {
                    iVar10 = *(int *)(unaff_BP + -0x6a);
                    iVar9 = *(int *)(unaff_BP + -0x68);
                  }
                  *(int *)(unaff_BP + -0x4c) = iVar10;
                  *(int *)(unaff_BP + -0x4a) = iVar9;
                  if (*(int *)(unaff_BP + -100) < 0) {
                    iVar10 = -*(int *)(unaff_BP + -0x66);
                    iVar9 = -((*(uint *)(unaff_BP + -100) & 0x7fff) +
                             (uint)(*(int *)(unaff_BP + -0x66) != 0));
                  }
                  else {
                    iVar10 = *(int *)(unaff_BP + -0x66);
                    iVar9 = *(int *)(unaff_BP + -100);
                  }
                  *(int *)(unaff_BP + -0x52) = iVar10;
                  *(int *)(unaff_BP + -0x50) = iVar9;
                  if (*(int *)(unaff_BP + -0x70) < 0) {
                    iVar10 = -*(int *)(unaff_BP + -0x72);
                    iVar9 = -((*(uint *)(unaff_BP + -0x70) & 0x7fff) +
                             (uint)(*(int *)(unaff_BP + -0x72) != 0));
                  }
                  else {
                    iVar10 = *(int *)(unaff_BP + -0x72);
                    iVar9 = *(int *)(unaff_BP + -0x70);
                  }
                  *(int *)(unaff_BP + -0x62) = iVar10;
                  *(int *)(unaff_BP + -0x60) = iVar9;
                  uVar13 = *(undefined2 *)(unaff_BP + -0x5c);
                  *(undefined2 *)(unaff_BP + -0x6e) = *(undefined2 *)(unaff_BP + -0x5e);
                  *(undefined2 *)(unaff_BP + -0x6c) = uVar13;
                }
                if (*(char *)(unaff_BP + -0x4e) == '\0') {
                  uVar13 = *(undefined2 *)(unaff_BP + -0x6e);
                  uVar8 = *(undefined2 *)(unaff_BP + -0x6c);
                }
                else {
                  iVar10 = *(int *)(unaff_BP + -0x6e) * 4;
                  uVar13 = *(undefined2 *)(unaff_BP + iVar10 + -0x1066);
                  uVar8 = *(undefined2 *)(unaff_BP + iVar10 + -0x1064);
                }
                *(undefined2 *)(unaff_BP + -0x40) = uVar13;
                *(undefined2 *)(unaff_BP + -0x3e) = uVar8;
                uVar13 = 0;
                uStack_8 = 0xf329;
                uStack_6 = uVar12;
                puVar16 = (undefined2 *)func_0x0000013f();
                uVar12 = (undefined2)((ulong)puVar16 >> 0x10);
                puVar7 = (undefined2 *)puVar16;
                *(undefined2 *)(unaff_BP + -0x22) = puVar7;
                *(undefined2 *)(unaff_BP + -0x20) = uVar12;
              } while ((((0x59 < *(byte *)((int)puVar7 + 0x11)) ||
                        ((*(byte *)(puVar7 + 10) & 2) == 0)) || ((puVar7[10] & 0x40) != 0)) ||
                      ((((puVar7[10] & 0x80) != 0 ||
                        (*(char *)(puVar7 + 9) != *(char *)(unaff_BP + -4))) ||
                       ((*(char *)((int)puVar7 + 0x11) != *(char *)(unaff_BP + -5) ||
                        (*(char *)(puVar7 + 8) != *(char *)(unaff_BP + -6)))))));
              puVar11 = (undefined2 *)(unaff_BP + -0x38);
              for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar4 = puVar11;
                puVar11 = puVar11 + 1;
                puVar16 = puVar7;
                puVar7 = puVar7 + 1;
                *puVar4 = *puVar16;
              }
              if (*(int *)(unaff_BP + -0x36) < 0) {
                iVar10 = -*(int *)(unaff_BP + -0x38);
                iVar9 = -((*(uint *)(unaff_BP + -0x36) & 0x7fff) +
                         (uint)(*(int *)(unaff_BP + -0x38) != 0));
              }
              else {
                iVar10 = *(int *)(unaff_BP + -0x38);
                iVar9 = *(int *)(unaff_BP + -0x36);
              }
              *(int *)(unaff_BP + -0x1078) = iVar10;
              *(int *)(unaff_BP + -0x1076) = iVar9;
              if (*(int *)(unaff_BP + -0x2e) < 0) {
                iVar10 = -*(int *)(unaff_BP + -0x30);
                iVar9 = -((*(uint *)(unaff_BP + -0x2e) & 0x7fff) +
                         (uint)(*(int *)(unaff_BP + -0x30) != 0));
              }
              else {
                iVar10 = *(int *)(unaff_BP + -0x30);
                iVar9 = *(int *)(unaff_BP + -0x2e);
              }
              *(int *)(unaff_BP + -0x1084) = iVar10;
              *(int *)(unaff_BP + -0x1082) = iVar9;
              iVar10 = *(int *)(unaff_BP + -0x42);
            } while ((((*(int *)(unaff_BP + -0x1076) <= iVar10) &&
                      ((*(int *)(unaff_BP + -0x1076) < iVar10 ||
                       (*(uint *)(unaff_BP + -0x1078) < *(uint *)(unaff_BP + -0x44))))) &&
                     (*(int *)(unaff_BP + -0x1082) <= iVar10)) &&
                    ((*(int *)(unaff_BP + -0x1082) < iVar10 ||
                     (*(uint *)(unaff_BP + -0x1084) < *(uint *)(unaff_BP + -0x44)))));
            iVar10 = *(int *)(unaff_BP + -0x50);
          } while (((iVar10 <= *(int *)(unaff_BP + -0x1076)) &&
                   (((iVar10 < *(int *)(unaff_BP + -0x1076) ||
                     (*(uint *)(unaff_BP + -0x52) < *(uint *)(unaff_BP + -0x1078))) &&
                    (iVar10 <= *(int *)(unaff_BP + -0x1082))))) &&
                  ((iVar10 < *(int *)(unaff_BP + -0x1082) ||
                   (*(uint *)(unaff_BP + -0x52) < *(uint *)(unaff_BP + -0x1084)))));
          if (*(int *)(unaff_BP + -0x32) < 0) {
            iVar10 = -*(int *)(unaff_BP + -0x34);
            iVar9 = -((*(uint *)(unaff_BP + -0x32) & 0x7fff) +
                     (uint)(*(int *)(unaff_BP + -0x34) != 0));
          }
          else {
            iVar10 = *(int *)(unaff_BP + -0x34);
            iVar9 = *(int *)(unaff_BP + -0x32);
          }
          *(int *)(unaff_BP + -0x1078) = iVar10;
          *(int *)(unaff_BP + -0x1076) = iVar9;
          if (*(int *)(unaff_BP + -0x2a) < 0) {
            iVar10 = -*(int *)(unaff_BP + -0x2c);
            iVar9 = -((*(uint *)(unaff_BP + -0x2a) & 0x7fff) +
                     (uint)(*(int *)(unaff_BP + -0x2c) != 0));
          }
          else {
            iVar10 = *(int *)(unaff_BP + -0x2c);
            iVar9 = *(int *)(unaff_BP + -0x2a);
          }
          *(int *)(unaff_BP + -0x1084) = iVar10;
          *(int *)(unaff_BP + -0x1082) = iVar9;
          iVar10 = *(int *)(unaff_BP + -0x4a);
        } while (((*(int *)(unaff_BP + -0x1076) <= iVar10) &&
                 ((*(int *)(unaff_BP + -0x1076) < iVar10 ||
                  (*(uint *)(unaff_BP + -0x1078) < *(uint *)(unaff_BP + -0x4c))))) &&
                ((*(int *)(unaff_BP + -0x1082) <= iVar10 &&
                 ((*(int *)(unaff_BP + -0x1082) < iVar10 ||
                  (*(uint *)(unaff_BP + -0x1084) < *(uint *)(unaff_BP + -0x4c)))))));
        iVar10 = *(int *)(unaff_BP + -0x60);
      } while ((iVar10 <= *(int *)(unaff_BP + -0x1076)) &&
              ((((iVar10 < *(int *)(unaff_BP + -0x1076) ||
                 (*(uint *)(unaff_BP + -0x62) < *(uint *)(unaff_BP + -0x1078))) &&
                (iVar10 <= *(int *)(unaff_BP + -0x1082))) &&
               ((iVar10 < *(int *)(unaff_BP + -0x1082) ||
                (*(uint *)(unaff_BP + -0x62) < *(uint *)(unaff_BP + -0x1084)))))));
      func_0x000297e6();
      func_0x00029d78();
      uStack_a = 0x22b2;
      uStack_c = 0xf4d8;
      func_0x000299d1();
      uStack_a = 0x22b2;
      uStack_c = 0xf4e0;
      func_0x000297e6();
      uStack_a = 0x22b2;
      uStack_c = 0xf4e5;
      func_0x00029d78();
      auStack_12[0] = 0x22b2;
      uStack_14 = 0xf4ef;
      func_0x000299d1();
      auStack_12[0] = 1;
      uStack_14 = 0x22b2;
      uStack_16 = 0xf4f8;
      puVar7 = (undefined2 *)func_0x0001e558();
      uVar14 = (undefined1 *)0xffed < auStack_12;
      uVar15 = &stack0x0000 == (undefined1 *)0x0;
      uVar13 = puVar7[1];
      *(undefined2 *)(unaff_BP + -0x6a) = *puVar7;
      *(undefined2 *)(unaff_BP + -0x68) = uVar13;
      func_0x00029834();
      func_0x000297e6();
      func_0x00029ae7();
      func_0x00029d78();
      uVar13 = 0x22b2;
      FUN_28b3_1181();
    } while (!(bool)uVar14 && !(bool)uVar15);
    func_0x000297e6();
    func_0x00029d78();
    uStack_a = 0x22b2;
    uStack_c = 0xf541;
    func_0x000299d1();
    uStack_a = 0x22b2;
    uStack_c = 0xf549;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xf54e;
    func_0x00029d78();
    auStack_12[0] = 0x22b2;
    uStack_14 = 0xf558;
    func_0x000299d1();
    auStack_12[0] = 1;
    uStack_14 = 0x22b2;
    uStack_16 = 0xf561;
    puVar7 = (undefined2 *)func_0x0001e558();
    uVar14 = (undefined1 *)0xffed < auStack_12;
    uVar15 = &stack0x0000 == (undefined1 *)0x0;
    uVar13 = puVar7[1];
    *(undefined2 *)(unaff_BP + -0x72) = *puVar7;
    *(undefined2 *)(unaff_BP + -0x70) = uVar13;
    func_0x00029834();
    func_0x000297e6();
    func_0x00029ae7();
    func_0x00029d78();
    uVar13 = 0x22b2;
    FUN_28b3_1181();
  } while (!(bool)uVar14 && !(bool)uVar15);
  func_0x000297e6();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xf5ad;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xf5b5;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xf5ba;
  func_0x00029d78();
  auStack_12[0] = 0x22b2;
  uStack_14 = 0xf5c4;
  func_0x000299d1();
  auStack_12[0] = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf5cd;
  puVar7 = (undefined2 *)FUN_1def_05d1();
  uVar13 = puVar7[1];
  *(undefined2 *)(unaff_BP + -0x5a) = *puVar7;
  *(undefined2 *)(unaff_BP + -0x58) = uVar13;
  func_0x000297e6();
  func_0x00029d78();
  uStack_a = 0x22b2;
  uStack_c = 0xf5f4;
  func_0x000299d1();
  uStack_a = 0x22b2;
  uStack_c = 0xf5fc;
  func_0x000297e6();
  uStack_a = 0x22b2;
  uStack_c = 0xf601;
  func_0x00029d78();
  auStack_12[0] = 0x22b2;
  uStack_14 = 0xf60b;
  func_0x000299d1();
  auStack_12[0] = 1;
  uStack_14 = 0x22b2;
  uStack_16 = 0xf614;
  puVar7 = (undefined2 *)FUN_1def_05d1();
  uVar14 = (undefined1 *)0xffed < auStack_12;
  uVar15 = &stack0x0000 == (undefined1 *)0x0;
  uVar13 = puVar7[1];
  *(undefined2 *)(unaff_BP + -0x66) = *puVar7;
  *(undefined2 *)(unaff_BP + -100) = uVar13;
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar14 && !(bool)uVar15) {
    uVar13 = *(undefined2 *)(unaff_BP + -0x58);
    *(undefined2 *)(unaff_BP + -0x48) = *(undefined2 *)(unaff_BP + -0x5a);
    *(undefined2 *)(unaff_BP + -0x46) = uVar13;
    uVar13 = *(undefined2 *)(unaff_BP + -100);
    *(undefined2 *)(unaff_BP + -0x5a) = *(undefined2 *)(unaff_BP + -0x66);
    *(undefined2 *)(unaff_BP + -0x58) = uVar13;
    uVar13 = *(undefined2 *)(unaff_BP + -0x46);
    *(undefined2 *)(unaff_BP + -0x66) = *(undefined2 *)(unaff_BP + -0x48);
    *(undefined2 *)(unaff_BP + -100) = uVar13;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar14 || (bool)uVar15) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar14 || (bool)uVar15) goto LAB_3ab8_4b12;
  }
  uVar13 = 0x22b2;
  goto LAB_3ab8_47d2;
LAB_3ab8_4b12:
  *(undefined1 *)(unaff_BP + -0x1070) = 0;
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar14) {
    *(undefined1 *)(unaff_BP + -0x1070) = 1;
    uStack_6 = *(undefined2 *)0x9cf2;
    uStack_8 = *(undefined2 *)0x9cf0;
    uStack_a = 0x22b2;
    uStack_c = 0xf6cf;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xf6d4;
    func_0x00029d78();
    auStack_12[0] = 0x22b2;
    uStack_14 = 0xf6de;
    func_0x000299d1();
    auStack_12[0] = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xf6e6;
    puVar7 = (undefined2 *)FUN_1def_05d1();
    uVar13 = puVar7[1];
    *(undefined2 *)(unaff_BP + -0x16) = *puVar7;
    *(undefined2 *)(unaff_BP + -0x14) = uVar13;
    uStack_6 = *(undefined2 *)0x9cf2;
    uStack_8 = *(undefined2 *)0x9cf0;
    uStack_a = 0x1bb4;
    uStack_c = 0xf70e;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xf713;
    func_0x00029d78();
    auStack_12[0] = 0x22b2;
    uStack_14 = 0xf71d;
    func_0x000299d1();
    auStack_12[0] = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xf725;
    puVar7 = (undefined2 *)func_0x0001e558();
    uVar13 = puVar7[1];
    *(undefined2 *)(unaff_BP + -0x12) = *puVar7;
    *(undefined2 *)(unaff_BP + -0x10) = uVar13;
  }
  uVar14 = (bool)uVar14 && (undefined1 *)0xffed < auStack_12;
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar14) {
    *(undefined1 *)(unaff_BP + -0x1070) = 1;
    uStack_6 = *(undefined2 *)0x9cf2;
    uStack_8 = *(undefined2 *)0x9cf0;
    uStack_a = 0x22b2;
    uStack_c = 0xf76d;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xf772;
    func_0x00029d78();
    auStack_12[0] = 0x22b2;
    uStack_14 = 0xf77c;
    func_0x000299d1();
    auStack_12[0] = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xf784;
    puVar7 = (undefined2 *)FUN_1def_05d1();
    uVar13 = puVar7[1];
    *(undefined2 *)(unaff_BP + -0xe) = *puVar7;
    *(undefined2 *)(unaff_BP + -0xc) = uVar13;
    uStack_6 = *(undefined2 *)0x9cf2;
    uStack_8 = *(undefined2 *)0x9cf0;
    uStack_a = 0x1bb4;
    uStack_c = 0xf7ac;
    func_0x000297e6();
    uStack_a = 0x22b2;
    uStack_c = 0xf7b1;
    func_0x00029d78();
    auStack_12[0] = 0x22b2;
    uStack_14 = 0xf7bb;
    func_0x000299d1();
    auStack_12[0] = 0;
    uStack_14 = 0x22b2;
    uStack_16 = 0xf7c3;
    puVar7 = (undefined2 *)func_0x0001e558();
    uVar13 = puVar7[1];
    *(undefined2 *)(unaff_BP + -10) = *puVar7;
    *(undefined2 *)(unaff_BP + -8) = uVar13;
  }
  uStack_6 = 0xf7db;
  func_0x0000daa6();
  puVar11 = &uStack_16;
  puVar7 = (undefined2 *)(unaff_BP + -0x16);
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar4 = puVar11;
    puVar11 = puVar11 + 1;
    puVar16 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar4 = *puVar16;
  }
  FUN_17a6_0ae3();
  uStack_6 = 0x11f2;
  uStack_8 = 0xf7fe;
  uVar17 = func_0x0000013f();
  *(undefined1 *)((int)uVar17 + 0x11) = 100;
  piVar2 = (int *)0x148;
  iVar10 = *piVar2;
  *piVar2 = *piVar2 + -1;
  *(int *)0x14a = *(int *)0x14a - (uint)(iVar10 == 0);
  goto code_r0x0003f813;
}



/* 3ab8:4cdd  FUN_3ab8_4cdd  252 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4cdd(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int unaff_BP;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar10;
  undefined2 *puVar11;
  
  FUN_1000_0599(0x3ab8,0x11,2);
  func_0x00010526(0xdef);
  uVar9 = 0x885;
  func_0x0000c3ca(0xdef);
  *(undefined2 *)(unaff_BP + -0x74) = 0;
  *(undefined2 *)(unaff_BP + -0x76) = 0;
  *(undefined2 *)(unaff_BP + -0x6e) = 1;
  *(undefined2 *)(unaff_BP + -0x6c) = 0;
  while( true ) {
    iVar6 = *(int *)(unaff_BP + -0x6c);
    if ((*(int *)(unaff_BP + -0x3a) < iVar6) ||
       ((*(int *)(unaff_BP + -0x3a) <= iVar6 &&
        (*(uint *)(unaff_BP + -0x3c) < *(uint *)(unaff_BP + -0x6e))))) break;
    uVar10 = func_0x0000013f(uVar9,*(uint *)(unaff_BP + -0x6e),iVar6);
    if (*(char *)((int)uVar10 + 0x11) != 'd') {
      iVar6 = *(int *)(unaff_BP + -0x6e);
      iVar5 = *(int *)(unaff_BP + -0x6c);
      puVar1 = (uint *)(unaff_BP + -0x76);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)(unaff_BP + -0x74) = *(int *)(unaff_BP + -0x74) + (uint)(0xfffe < uVar2);
      if ((*(int *)(unaff_BP + -0x76) != iVar6) || (*(int *)(unaff_BP + -0x74) != iVar5)) {
        puVar11 = (undefined2 *)func_0x0000013f(0,iVar6,iVar5);
        puVar8 = (undefined2 *)puVar11;
        puVar7 = (undefined2 *)(unaff_BP + -0x16);
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar7;
          puVar7 = puVar7 + 1;
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar3;
        }
        uVar10 = func_0x0000013f(0,*(undefined2 *)(unaff_BP + -0x76),
                                 *(undefined2 *)(unaff_BP + -0x74));
        *(undefined2 *)(unaff_BP + -0x1096) = (int)uVar10;
        *(undefined2 *)(unaff_BP + -0x1094) = (int)((ulong)uVar10 >> 0x10);
        puVar7 = (undefined2 *)(unaff_BP + -0x16);
        puVar11 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x1096);
        puVar8 = (undefined2 *)puVar11;
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar8;
          puVar8 = puVar8 + 1;
          puVar3 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar4 = *puVar3;
        }
      }
    }
    uVar9 = 0;
    puVar1 = (uint *)(unaff_BP + -0x6e);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)(unaff_BP + -0x6c) = *(int *)(unaff_BP + -0x6c) + (uint)(0xfffe < uVar2);
  }
  if ((*(int *)0x148 != *(int *)(unaff_BP + -0x76)) || (*(int *)0x14a != *(int *)(unaff_BP + -0x74))
     ) {
    *(undefined2 *)0xc22 = 1;
    FUN_1000_0599(uVar9,0x12,3);
    func_0x00012276(0xdef,0x4771,*(undefined2 *)0x148,*(undefined2 *)0x14a);
  }
  uVar9 = *(undefined2 *)(unaff_BP + -0x74);
  *(undefined2 *)0x148 = *(undefined2 *)(unaff_BP + -0x76);
  *(undefined2 *)0x14a = uVar9;
  return;
}



/* 3ab8:4dd9  FUN_3ab8_4dd9  379 bytes, 1 callers */

uint __cdecl16far
FUN_3ab8_4dd9(uint param_1,int param_2,uint param_3,int param_4,uint *param_5,undefined2 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined2 unaff_DS;
  bool bVar16;
  
  FUN_21f2_0ebc();
  uVar15 = (undefined2)((ulong)param_5 >> 0x10);
  puVar13 = (uint *)param_5;
  uVar2 = *param_5;
  uVar4 = puVar13[1];
  uVar6 = puVar13[2];
  uVar14 = puVar13[3];
  uVar3 = puVar13[4];
  uVar9 = puVar13[5];
  uVar5 = puVar13[6];
  uVar11 = puVar13[7];
  if ((int)uVar4 < 0) {
    bVar16 = uVar2 != 0;
    uVar2 = -uVar2;
    uVar4 = -((uVar4 & 0x7fff) + (uint)bVar16);
  }
  uVar1 = uVar2 - param_1;
  iVar7 = (uVar4 - param_2) - (uint)(uVar2 < param_1);
  if ((int)uVar14 < 0) {
    bVar16 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar14 = -((uVar14 & 0x7fff) + (uint)bVar16);
  }
  uVar2 = uVar6 - param_3;
  iVar8 = (uVar14 - param_4) - (uint)(uVar6 < param_3);
  if ((int)uVar9 < 0) {
    bVar16 = uVar3 != 0;
    uVar3 = -uVar3;
    uVar9 = -((uVar9 & 0x7fff) + (uint)bVar16);
  }
  uVar4 = uVar3 - param_1;
  iVar10 = (uVar9 - param_2) - (uint)(uVar3 < param_1);
  if ((int)uVar11 < 0) {
    bVar16 = uVar5 != 0;
    uVar5 = -uVar5;
    uVar11 = -((uVar11 & 0x7fff) + (uint)bVar16);
  }
  uVar6 = uVar5 - param_3;
  iVar12 = (uVar11 - param_4) - (uint)(uVar5 < param_3);
  if (iVar7 < 0) {
    bVar16 = uVar1 != 0;
    uVar1 = -uVar1;
    iVar7 = -(iVar7 + (uint)bVar16);
  }
  if (iVar8 < 0) {
    bVar16 = uVar2 != 0;
    uVar2 = -uVar2;
    iVar8 = -(iVar8 + (uint)bVar16);
  }
  iVar7 = iVar7 + iVar8 + (uint)CARRY2(uVar1,uVar2);
  if (iVar10 < 0) {
    bVar16 = uVar4 != 0;
    uVar4 = -uVar4;
    iVar10 = -(iVar10 + (uint)bVar16);
  }
  if (iVar12 < 0) {
    bVar16 = uVar6 != 0;
    uVar6 = -uVar6;
    iVar12 = -(iVar12 + (uint)bVar16);
  }
  uVar14 = uVar4 + uVar6;
  iVar8 = iVar10 + iVar12 + (uint)CARRY2(uVar4,uVar6);
  if ((iVar8 < iVar7) || ((iVar8 <= iVar7 && (uVar14 <= uVar1 + uVar2)))) {
    param_6[1] = 0;
    *param_6 = 0;
  }
  else {
    *param_6 = 1;
    param_6[1] = 0;
    uVar14 = uVar1 + uVar2;
  }
  return uVar14;
}



/* 3ab8:4f54  FUN_3ab8_4f54  105 bytes, 2 callers */

void __cdecl16far FUN_3ab8_4f54(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar6;
  undefined2 local_2e [11];
  undefined2 local_18 [5];
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_21f2_0ebc();
  if ((param_3 != param_1) || (param_4 != param_2)) {
    uStack_c = 0x22b2;
    uStack_e = 0xfaf8;
    puVar6 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar6;
    puVar5 = local_2e;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    uStack_c = 0;
    uStack_e = 0xfb15;
    puVar6 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar6;
    puVar5 = local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    uStack_c = 0;
    uStack_e = 0xfb32;
    puVar6 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar6;
    puVar5 = local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uStack_c = 0;
    uStack_e = 0xfb50;
    puVar6 = (undefined2 *)func_0x0000013f();
    puVar4 = (undefined2 *)puVar6;
    puVar5 = local_2e;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}



/* 3ab8:4fbd  FUN_3ab8_4fbd  44 bytes, 2 callers */

void __cdecl16far FUN_3ab8_4fbd(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar7;
  
  puVar3 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x30);
  puVar5 = (undefined2 *)puVar3;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  uVar7 = func_0x0000013f(0x3ab8,*(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 0xc));
  *(undefined2 *)(unaff_BP + -0x34) = (int)uVar7;
  *(undefined2 *)(unaff_BP + -0x32) = (int)((ulong)uVar7 >> 0x10);
  puVar5 = (undefined2 *)(unaff_BP + -0x2c);
  puVar3 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x34);
  puVar6 = (undefined2 *)puVar3;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 3ab8:4fe9  FUN_3ab8_4fe9  44 bytes, 1 callers */

void __cdecl16far FUN_3ab8_4fe9(undefined2 param_1,undefined2 param_2)

{
  FUN_21f2_0ebc();
  FUN_1000_0599(0x22b2,0x2a,1);
  func_0x00012276(0xdef,0x1fe,param_1,param_2);
  return;
}



/* 3ab8:5015  FUN_3ab8_5015  103 bytes, 0 callers */

/* WARNING: Instruction at (ram,0x000301e7) overlaps instruction at (ram,0x000301e6)
    */
/* WARNING: Type propagation algorithm not settling */

int FUN_3ab8_5015(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined2 unaff_SI;
  undefined1 **ppuVar7;
  undefined2 *unaff_DI;
  undefined1 *puVar8;
  undefined1 *unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined2 *puVar13;
  undefined2 *in_stack_0000003a;
  undefined2 *in_stack_0000003c;
  undefined2 *in_stack_0000003e;
  undefined2 *in_stack_00000040;
  undefined1 *puStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined1 *puStack_b8;
  undefined1 auStack_aa [10];
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined1 *puStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined1 *puStack_7e;
  undefined1 *puStack_6c;
  undefined1 *puStack_6a;
  int iStack_68;
  int iStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  int local_60;
  uint local_5e;
  undefined1 *local_5c;
  undefined1 *local_5a;
  uint uStack_58;
  int iStack_56;
  undefined1 *puStack_54;
  undefined1 *puStack_52;
  undefined1 *puStack_50;
  undefined1 *puStack_4e;
  undefined1 *local_4c;
  undefined1 *local_4a;
  int iStack_48;
  undefined2 uStack_46;
  undefined1 *puStack_44;
  undefined1 *puStack_42;
  undefined1 *puStack_40;
  undefined1 *puStack_3e;
  undefined1 *local_3c;
  undefined1 *local_3a;
  int local_38;
  uint local_36;
  undefined2 uStack_34;
  undefined1 *puStack_32;
  uint uStack_30;
  int iStack_2e;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_26;
  undefined1 *puStack_24;
  undefined1 *puStack_22;
  int iStack_1c;
  uint uStack_1a;
  undefined1 *puStack_18;
  undefined1 *puStack_16;
  undefined1 *puStack_14;
  uint uStack_12;
  undefined1 *puStack_10;
  undefined1 *puStack_e;
  undefined2 *puStack_c;
  undefined2 *local_a;
  undefined2 *local_8;
  
  puVar8 = (undefined1 *)0x22b2;
  FUN_21f2_0ebc();
  local_60 = *(int *)0x9d38;
  local_5e = *(uint *)0x9d3a;
  local_5c = (undefined1 *)*(undefined2 *)0x9cf8;
  local_5a = (undefined1 *)*(undefined2 *)0x9cfa;
  local_8 = (undefined2 *)0x0;
  local_a = (undefined2 *)0x0;
  local_38 = local_60;
  local_36 = local_5e;
  if ((int)local_5e < 0) {
    local_38 = -local_60;
    local_36 = -((local_5e & 0x7fff) + (uint)(local_60 != 0));
  }
  local_4c = (undefined1 *)*(undefined2 *)0x148;
  local_4a = (undefined1 *)*(undefined2 *)0x14a;
  local_3c = local_4c;
  local_3a = local_4a;
  while( true ) {
    if (((int)local_3a < 0) || (((int)local_3a < 1 && (local_3c == (undefined1 *)0x0)))) {
      puStack_40 = local_4c;
      puStack_3e = local_4a;
      local_3a = local_4a;
      for (local_3c = local_4c;
          (-1 < (int)local_3a && ((0 < (int)local_3a || (local_3c != (undefined1 *)0x0))));
          local_3c = local_3c + -1) {
        local_8 = (undefined2 *)local_3a;
        local_a = (undefined2 *)local_3c;
        puStack_e = (undefined1 *)0xfcbe;
        puStack_c = (undefined2 *)puVar8;
        uVar12 = func_0x0000013f();
        if ((*(byte *)((int)uVar12 + 0x14) & 2) != 0) {
          local_8 = (undefined2 *)puStack_3e;
          local_a = (undefined2 *)puStack_40;
          puStack_c = (undefined2 *)local_3a;
          puStack_e = local_3c;
          puStack_10 = (undefined1 *)0x0;
          uStack_12 = -0x325;
          FUN_3ab8_4f54();
          bVar10 = puStack_40 == (undefined1 *)0x0;
          puStack_40 = puStack_40 + -1;
          puStack_3e = puStack_3e + -(uint)bVar10;
          bVar10 = (undefined1 *)0xfffe < local_a;
          local_a = (undefined2 *)((int)local_a + 1);
          local_8 = (undefined2 *)((int)local_8 + (uint)bVar10);
        }
        local_3a = local_3a + -(uint)(local_3c == (undefined1 *)0x0);
        puVar8 = (undefined1 *)0x0;
      }
      if ((int)local_8 < 1) {
        puVar4 = (undefined1 *)unaff_DI;
        if ((int)local_8 < 0) goto code_r0x000301ec;
        if (local_a == (undefined2 *)0x0) goto code_r0x000301ec;
      }
      puStack_44 = puStack_40 + 1;
      puStack_42 = puStack_3e + ((undefined1 *)0xfffe < puStack_40);
      puStack_e = (undefined1 *)0xfd22;
      puStack_40 = puStack_44;
      puStack_3e = puStack_42;
      puStack_c = (undefined2 *)puVar8;
      FUN_3ab8_4fe9();
      iStack_56 = 0;
      for (uStack_58 = 1; (iStack_56 < 1 && ((iStack_56 < 0 || (uStack_58 < 7))));
          uStack_58 = uStack_58 + 1) {
        puStack_6a = (undefined1 *)0x0;
        puStack_6c = (undefined1 *)0x0;
        puStack_32 = (undefined1 *)0x0;
        uStack_34 = 0;
        uStack_12 = local_38;
        puStack_10 = (undefined1 *)local_36;
        puStack_2c = local_5c;
        puVar4 = local_5a;
        if ((int)local_5a < 0) {
          puStack_2c = (undefined1 *)-(int)local_5c;
          puVar4 = (undefined1 *)
                   -(((uint)local_5a & 0x7fff) + (uint)(local_5c != (undefined1 *)0x0));
        }
        puStack_54 = local_4c;
        puStack_52 = local_4a;
        local_3a = local_4a;
        puStack_e = puStack_2c;
        puStack_c = (undefined2 *)puVar4;
        for (local_3c = local_4c;
            ((int)puStack_3e <= (int)local_3a &&
            (((int)puStack_3e < (int)local_3a || (puStack_40 <= local_3c))));
            local_3c = local_3c + -1) {
          local_8 = (undefined2 *)local_3a;
          local_a = (undefined2 *)local_3c;
          puStack_e = (undefined1 *)0xfdf3;
          puStack_c = (undefined2 *)puVar8;
          uVar12 = func_0x0000013f();
          if ((*(byte *)((int)uVar12 + 0x11) == uStack_58) && (iStack_56 == 0)) {
            local_8 = (undefined2 *)&stack0xfffa;
            local_a = (undefined2 *)local_3a;
            puStack_c = (undefined2 *)local_3c;
            puStack_e = (undefined1 *)0x0;
            puStack_10 = (undefined1 *)0xfd70;
            uVar12 = func_0x0000013f();
            iVar3 = (int)((ulong)uVar12 >> 0x10);
            uStack_12 = (uint)uVar12;
            puStack_10 = puStack_2c;
            puStack_16 = (undefined1 *)0x0;
            puStack_18 = (undefined1 *)0xfd84;
            puStack_14 = puVar4;
            puStack_e = puVar4;
            puStack_c = (undefined2 *)uStack_12;
            local_a = (undefined2 *)iVar3;
            uStack_30 = FUN_3ab8_4dd9();
            if ((iVar3 <= (int)puStack_10) && ((iVar3 < (int)puStack_10 || (uStack_30 < uStack_12)))
               ) {
              puStack_6c = puStack_54;
              puStack_6a = puStack_52;
              uStack_34 = unaff_SI;
              puStack_32 = (undefined1 *)unaff_DI;
            }
            local_8 = (undefined2 *)puStack_52;
            local_a = (undefined2 *)puStack_54;
            puStack_c = (undefined2 *)local_3a;
            puStack_e = local_3c;
            puStack_10 = (undefined1 *)0x0;
            uStack_12 = -0x239;
            iStack_2e = iVar3;
            FUN_3ab8_4f54();
            bVar10 = puStack_54 == (undefined1 *)0x0;
            puStack_54 = puStack_54 + -1;
            puStack_52 = puStack_52 + -(uint)bVar10;
          }
          puVar8 = (undefined1 *)0x0;
          local_3a = local_3a + -(uint)(local_3c == (undefined1 *)0x0);
        }
        if (((local_4c != puStack_54) || (local_4a != puStack_52)) &&
           (puStack_6a != (undefined1 *)0x0 || puStack_6c != (undefined1 *)0x0)) {
          bVar10 = (undefined1 *)0xfffe < puStack_54;
          puStack_54 = puStack_54 + 1;
          puStack_52 = puStack_52 + bVar10;
          puStack_c = (undefined2 *)puStack_6a;
          puStack_e = puStack_6c;
          uStack_12 = 0xfe8a;
          puStack_10 = puVar8;
          local_a = (undefined2 *)puStack_54;
          local_8 = (undefined2 *)puStack_52;
          FUN_3ab8_4f54();
          uStack_64 = 1;
          uStack_62 = 0;
          local_3c = puStack_54;
          local_3a = puStack_52;
          local_a = (undefined2 *)0x48;
          local_8 = (undefined2 *)puVar8;
          FUN_32b2_6d14();
          local_8 = (undefined2 *)0x32b2;
          local_a = (undefined2 *)0x50;
          FUN_32b2_6e63();
          local_8 = (undefined2 *)0x32b2;
          local_a = (undefined2 *)0x58;
          FUN_32b2_6d14();
          local_8 = (undefined2 *)0x32b2;
          local_a = (undefined2 *)0x60;
          FUN_32b2_6e63();
          return 1;
        }
        iStack_56 = iStack_56 + (uint)(0xfffe < uStack_58);
      }
      while( true ) {
        local_a = (undefined2 *)0x12b;
        local_8 = (undefined2 *)puVar8;
        FUN_32b2_704d();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x133;
        FUN_32b2_7095();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x13b;
        FUN_32b2_6eb1();
        local_8 = (undefined2 *)puStack_b8;
        puStack_10 = (undefined1 *)0x32b2;
        uStack_12 = 0x150;
        FUN_32b2_75ec();
        uVar9 = &stack0x0000 == (undefined1 *)0x8;
        local_a = (undefined2 *)0x32b2;
        puStack_c = (undefined2 *)0x15a;
        FUN_32b2_6d14();
        local_a = (undefined2 *)0x32b2;
        puStack_c = (undefined2 *)0x162;
        FUN_32b2_704d();
        local_a = (undefined2 *)0x32b2;
        puStack_c = (undefined2 *)0x16a;
        FUN_32b2_7095();
        local_a = (undefined2 *)0x32b2;
        puStack_c = (undefined2 *)0x173;
        FUN_32b2_6eb1();
        local_a = (undefined2 *)0x32b2;
        puStack_c = (undefined2 *)0x17b;
        FUN_32b2_6cc6();
        local_a = (undefined2 *)0x32b2;
        puStack_c = (undefined2 *)0x183;
        FUN_32b2_6cc6();
        local_a = (undefined2 *)0x32b2;
        puStack_c = (undefined2 *)0x188;
        FUN_32b2_7191();
        if ((bool)uVar9) {
          local_a = (undefined2 *)0x32b2;
          puStack_c = (undefined2 *)0x192;
          FUN_32b2_6cc6();
          local_a = (undefined2 *)0x32b2;
          puStack_c = (undefined2 *)0x19a;
          FUN_32b2_6cc6();
          local_a = (undefined2 *)0x32b2;
          puStack_c = (undefined2 *)0x19f;
          FUN_32b2_7191();
          if ((bool)uVar9) {
            return 0;
          }
        }
        local_a = (undefined2 *)auStack_aa;
        puStack_c = (undefined2 *)&stack0xffe2;
        puStack_e = puStack_7e;
        puStack_10 = (undefined1 *)uStack_80;
        uStack_12 = uStack_82;
        puStack_14 = puStack_84;
        puStack_16 = local_5a;
        puStack_18 = local_5c;
        uStack_1a = local_5e;
        iStack_1c = local_60;
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        puStack_26 = (undefined1 *)0x32b2;
        puStack_28 = (undefined1 *)0x1df;
        FUN_32b2_6eb1();
        puStack_26 = (undefined1 *)0x32b2;
        puStack_28 = (undefined1 *)0x1e7;
        FUN_32b2_6cc6();
        puStack_26 = (undefined1 *)0x32b2;
        puVar8 = (undefined1 *)0x32b2;
        puStack_28 = (undefined1 *)0x1ec;
        FUN_32b2_7258();
        puVar4 = (undefined1 *)unaff_DI;
code_r0x000301ec:
        uStack_12 = 0x1f6;
        puStack_10 = puVar8;
        FUN_32b2_6eb1();
        puStack_10 = (undefined1 *)0x32b2;
        uStack_12 = 0x1fa;
        iVar3 = FUN_3ab8_4fbd();
        if (iVar3 == 0) break;
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x269;
        FUN_32b2_6eb1();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x271;
        FUN_32b2_6cc6();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x276;
        FUN_32b2_7258();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x27e;
        FUN_32b2_6e99();
        puStack_10 = (undefined1 *)0x32b2;
        uStack_12 = 0x288;
        FUN_32b2_6eb1();
        puStack_10 = (undefined1 *)0x32b2;
        uStack_12 = 0x290;
        FUN_32b2_6cc6();
        puStack_10 = (undefined1 *)0x32b2;
        uStack_12 = 0x295;
        FUN_32b2_7258();
        puStack_18 = (undefined1 *)0x32b2;
        uStack_1a = 0x29f;
        FUN_32b2_6eb1();
        puStack_18 = (undefined1 *)0x32b2;
        uStack_1a = 0x2a7;
        FUN_32b2_6cc6();
        puStack_18 = (undefined1 *)0x32b2;
        uStack_1a = 0x2ac;
        FUN_32b2_7258();
        puStack_22 = (undefined1 *)0x2b6;
        FUN_32b2_6eb1();
        puStack_22 = (undefined1 *)0x32b2;
        puStack_24 = (undefined1 *)0x2be;
        FUN_3ab8_5089();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x30c;
        FUN_32b2_6eb1();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x314;
        FUN_32b2_6d14();
        puStack_10 = (undefined1 *)0x32b2;
        uStack_12 = 0x31e;
        FUN_32b2_6eb1();
        puStack_10 = (undefined1 *)0x32b2;
        uStack_12 = 0x326;
        FUN_32b2_6cc6();
        puStack_10 = (undefined1 *)0x32b2;
        uStack_12 = 0x32b;
        FUN_32b2_7258();
        puStack_18 = (undefined1 *)0x32b2;
        uStack_1a = 0x335;
        FUN_32b2_6eb1();
        puStack_18 = (undefined1 *)0x32b2;
        uStack_1a = 0x33d;
        FUN_32b2_6cc6();
        puStack_18 = (undefined1 *)0x32b2;
        uStack_1a = 0x342;
        FUN_32b2_7258();
        puStack_22 = (undefined1 *)0x34c;
        FUN_32b2_6eb1();
        puStack_22 = (undefined1 *)0x32b2;
        puStack_24 = (undefined1 *)0x354;
        FUN_3ab8_5089();
        uVar9 = (undefined1 *)0xffc9 < &local_3a;
        uVar11 = &stack0x0000 == (undefined1 *)0x4;
        local_8 = (undefined2 *)0x360;
        FUN_32b2_6cc6();
        local_8 = (undefined2 *)0x369;
        FUN_32b2_701d();
        local_8 = (undefined2 *)0x36e;
        FUN_32b2_7258();
        local_8 = (undefined2 *)0x376;
        FUN_32b2_6e99();
        local_8 = (undefined2 *)0x37e;
        FUN_32b2_6ef9();
        local_8 = (undefined2 *)0x387;
        FUN_32b2_6cc6();
        local_8 = (undefined2 *)0x390;
        FUN_32b2_701d();
        local_8 = (undefined2 *)0x395;
        FUN_32b2_7258();
        local_8 = (undefined2 *)0x39e;
        FUN_32b2_6e99();
        local_8 = (undefined2 *)0x3a6;
        FUN_32b2_6ef9();
        local_8 = (undefined2 *)0x3af;
        FUN_32b2_6d14();
        local_8 = (undefined2 *)0x3b4;
        FUN_32b2_6fc7();
        local_8 = (undefined2 *)0x3bc;
        FUN_32b2_6d14();
        local_8 = (undefined2 *)0x3c1;
        FUN_32b2_6fc7();
        local_8 = (undefined2 *)0x3ca;
        FUN_32b2_710c();
        local_8 = (undefined2 *)0x3cf;
        FUN_32b2_7191();
        if (!(bool)uVar9 && !(bool)uVar11) {
          local_8 = (undefined2 *)0x3da;
          FUN_32b2_6d14();
          local_8 = (undefined2 *)0x3e2;
          FUN_32b2_6d14();
          local_8 = (undefined2 *)0x3e7;
          FUN_32b2_7191();
          if (!(bool)uVar11) {
            local_8 = (undefined2 *)0x431;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x439;
            FUN_32b2_7124();
            local_8 = (undefined2 *)0x441;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x44a;
            FUN_32b2_704d();
            local_8 = (undefined2 *)0x453;
            FUN_32b2_7035();
            local_8 = (undefined2 *)0x45c;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x464;
            FUN_32b2_6eb1();
            local_8 = (undefined2 *)0x46c;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x474;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x47c;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x484;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x48c;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x494;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x49d;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x4a2;
            FUN_32b2_718c();
            local_8 = (undefined2 *)0x4ab;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x4b3;
            FUN_32b2_6eb1();
            local_8 = (undefined2 *)0x4bc;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x4c4;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x4cd;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x4d5;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x4dd;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x4e6;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x4ee;
            FUN_32b2_6eb1();
            local_8 = (undefined2 *)0x4f7;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x500;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x509;
            FUN_32b2_70dc();
            local_8 = (undefined2 *)0x511;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x519;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x522;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x52b;
            FUN_32b2_6eb1();
            local_8 = (undefined2 *)0x534;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x53d;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x546;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x54f;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x558;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x55d;
            FUN_32b2_718c();
            local_8 = (undefined2 *)0x566;
            FUN_32b2_6eb1();
            local_8 = (undefined2 *)0x56f;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x574;
            FUN_32b2_6fd6();
            local_8 = (undefined2 *)0x57d;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x586;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x58b;
            FUN_32b2_7182();
            local_8 = (undefined2 *)0x594;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x59c;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x5a5;
            FUN_32b2_7154();
            local_8 = (undefined2 *)0x5ae;
            FUN_32b2_6e99();
            local_8 = (undefined2 *)0x5b7;
            FUN_32b2_6eb1();
            local_8 = (undefined2 *)0x5c0;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x5c9;
            FUN_32b2_6eb1();
            local_8 = &uStack_64;
            local_a = (undefined2 *)0x32b2;
            puStack_c = (undefined2 *)0x5db;
            FUN_32b2_6cc6();
            local_a = (undefined2 *)0x32b2;
            puStack_c = (undefined2 *)0x5e0;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            puStack_14 = (undefined1 *)0x5ea;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            puStack_14 = (undefined1 *)0x5f2;
            FUN_32b2_6cc6();
            uStack_12 = 0x32b2;
            puStack_14 = (undefined1 *)0x5f7;
            FUN_32b2_7258();
            uStack_1a = 0x32b2;
            iStack_1c = 0x601;
            FUN_32b2_6eb1();
            uStack_1a = iStack_66;
            iStack_1c = iStack_68;
            puStack_22 = local_4a;
            puStack_24 = local_4c;
            puStack_26 = puStack_4e;
            puStack_28 = puStack_50;
            puStack_2c = (undefined1 *)0x622;
            FUN_32b2_6d14();
            puStack_32 = (undefined1 *)0x32b2;
            uStack_34 = 0x62c;
            FUN_32b2_6eb1();
            puStack_32 = (undefined1 *)0x32b2;
            uStack_34 = 0x635;
            FUN_32b2_6d14();
            local_3a = (undefined1 *)0x32b2;
            local_3c = (undefined1 *)0x63f;
            FUN_32b2_6eb1();
            local_3a = (undefined1 *)0x0;
            local_3c = (undefined1 *)0x32b2;
            puStack_3e = (undefined1 *)0x646;
            FUN_3ab8_5089();
            uStack_88 = uStack_64;
            uStack_86 = uStack_62;
            uStack_a0 = uStack_8c;
            uStack_9e = uStack_8a;
            local_8 = &uStack_88;
            ppuVar7 = &puStack_28;
            puVar6 = (undefined2 *)&stack0x001a;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar1 = ppuVar7;
              ppuVar7 = ppuVar7 + 1;
              puVar13 = puVar6;
              puVar6 = puVar6 + 1;
              *puVar1 = *puVar13;
            }
                    /* WARNING: Call to offcut address within same function */
            puStack_2c = (undefined1 *)0x684;
            iVar3 = func_0x0003fdaf();
            uVar9 = 0;
            uVar11 = iVar3 == 0;
            if (!(bool)uVar11) {
              local_8 = (undefined2 *)0x694;
              FUN_32b2_6d14();
              local_8 = (undefined2 *)0x69d;
              FUN_32b2_6cc6();
              local_8 = (undefined2 *)0x6a5;
              FUN_32b2_701d();
              local_8 = (undefined2 *)0x6aa;
              FUN_32b2_6fc7();
              local_8 = (undefined2 *)0x6af;
              FUN_32b2_7258();
              local_8 = (undefined2 *)0x6b4;
              FUN_32b2_7191();
              if ((bool)uVar9 || (bool)uVar11) {
                local_8 = (undefined2 *)0x6bf;
                FUN_32b2_6d14();
                local_8 = (undefined2 *)0x6c8;
                FUN_32b2_6cc6();
                local_8 = (undefined2 *)0x6d1;
                FUN_32b2_701d();
                local_8 = (undefined2 *)0x6d6;
                FUN_32b2_6fc7();
                local_8 = (undefined2 *)0x6db;
                FUN_32b2_7258();
                local_8 = (undefined2 *)0x6e0;
                FUN_32b2_7191();
                if ((bool)uVar9 || (bool)uVar11) {
                  puStack_be = (undefined1 *)*(int *)0x93c0;
                  uStack_bc = *(undefined2 *)0x93c2;
                  uStack_ba = *(undefined2 *)0x93c4;
                  puStack_b8 = (undefined1 *)*(undefined2 *)0x93c6;
                }
              }
            }
            local_8 = (undefined2 *)0x6f8;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x700;
            FUN_32b2_6d14();
            local_8 = (undefined2 *)0x708;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x711;
            FUN_32b2_710c();
            local_8 = (undefined2 *)0x71a;
            FUN_32b2_7154();
            local_8 = (undefined2 *)0x71f;
            FUN_32b2_7191();
            if (!(bool)uVar9) {
              local_8 = (undefined2 *)0x72d;
              FUN_32b2_6d14();
              local_8 = (undefined2 *)0x732;
              FUN_32b2_6fc7();
              local_8 = (undefined2 *)0x73a;
              FUN_32b2_6d14();
              local_8 = (undefined2 *)0x742;
              FUN_32b2_710c();
              local_8 = (undefined2 *)0x74b;
              FUN_32b2_710c();
              local_8 = (undefined2 *)0x750;
              FUN_32b2_7191();
              if (!(bool)uVar9) {
                puStack_be = (undefined1 *)*(int *)0x93c0;
                uStack_bc = *(undefined2 *)0x93c2;
                uStack_ba = *(undefined2 *)0x93c4;
                puStack_b8 = (undefined1 *)*(undefined2 *)0x93c6;
              }
              local_8 = (undefined2 *)uStack_ba;
              local_a = (undefined2 *)uStack_bc;
              puStack_c = (undefined2 *)puStack_be;
              puStack_e = (undefined1 *)0x32b2;
              puStack_10 = (undefined1 *)0x774;
              FUN_32b2_7592();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x77e;
              FUN_32b2_6d14();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x786;
              FUN_32b2_70dc();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x78e;
              FUN_32b2_6d14();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x797;
              FUN_32b2_710c();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x79c;
              FUN_32b2_7182();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x7a5;
              FUN_32b2_6e99();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x7ad;
              FUN_32b2_710c();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x7b5;
              FUN_32b2_7154();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x7be;
              FUN_32b2_6e99();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x7c7;
              FUN_32b2_6eb1();
              local_8 = &uStack_8c;
              local_a = &uStack_64;
              puStack_c = (undefined2 *)0x32b2;
              puStack_e = (undefined1 *)0x7d9;
              FUN_32b2_6cc6();
              puStack_c = (undefined2 *)0x32b2;
              puStack_e = (undefined1 *)0x7de;
              FUN_32b2_7258();
              puStack_14 = (undefined1 *)0x32b2;
              puStack_16 = (undefined1 *)0x7e8;
              FUN_32b2_6eb1();
              puStack_14 = (undefined1 *)0x32b2;
              puStack_16 = (undefined1 *)0x7f0;
              FUN_32b2_6cc6();
              puStack_14 = (undefined1 *)0x32b2;
              puStack_16 = (undefined1 *)0x7f5;
              FUN_32b2_7258();
              iStack_1c = 0x32b2;
              FUN_32b2_6eb1();
              iStack_1c = iStack_66;
              puStack_22 = puStack_6c;
              puStack_24 = local_4a;
              puStack_26 = local_4c;
              puStack_28 = puStack_4e;
              puStack_2c = (undefined1 *)0x32b2;
              iStack_2e = 0x820;
              FUN_32b2_6d14();
              uStack_34 = 0x32b2;
              local_36 = 0x82a;
              FUN_32b2_6eb1();
              uStack_34 = 0x32b2;
              local_36 = 0x833;
              FUN_32b2_6d14();
              local_3c = (undefined1 *)0x32b2;
              puStack_3e = (undefined1 *)0x83d;
              FUN_32b2_6eb1();
              local_3c = (undefined1 *)0x0;
              puStack_3e = (undefined1 *)0x32b2;
              puStack_40 = (undefined1 *)0x844;
              FUN_3ab8_5089();
              uVar9 = (undefined1 *)0xffc9 < &local_3c;
              uVar11 = &stack0x0000 == (undefined1 *)0x6;
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x84f;
              FUN_32b2_6cc6();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x857;
              FUN_32b2_6cc6();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x85c;
              FUN_32b2_7191();
              if ((bool)uVar11) {
                uStack_64 = param_2;
                uStack_62 = 0x2f0;
              }
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x872;
              FUN_32b2_6cc6();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x87a;
              FUN_32b2_6cc6();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x87f;
              FUN_32b2_7191();
              if ((bool)uVar11) {
                uStack_8c = 0x32b2;
                uStack_8a = param_5;
              }
              *in_stack_0000003a = uStack_64;
              in_stack_0000003a[1] = uStack_62;
              *in_stack_0000003c = uStack_8c;
              in_stack_0000003c[1] = uStack_8a;
              *in_stack_0000003e = uStack_64;
              in_stack_0000003e[1] = uStack_62;
              *in_stack_00000040 = uStack_8c;
              in_stack_00000040[1] = uStack_8a;
              local_38 = local_38 + 1;
              uVar11 = local_38 == 0;
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x8d7;
              FUN_32b2_6d14();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x8e0;
              FUN_32b2_6d14();
              local_8 = (undefined2 *)0x32b2;
              local_a = (undefined2 *)0x8e5;
              FUN_32b2_7191();
              if (!(bool)uVar9 && !(bool)uVar11) {
                local_8 = (undefined2 *)puStack_b8;
                local_a = (undefined2 *)uStack_ba;
                puStack_c = (undefined2 *)uStack_bc;
                puStack_e = puStack_be;
                puStack_10 = (undefined1 *)0x32b2;
                uStack_12 = 0x8ff;
                FUN_32b2_7592();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x909;
                FUN_32b2_6d14();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x911;
                FUN_32b2_7154();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x916;
                FUN_32b2_6fd6();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x91e;
                FUN_32b2_6d14();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x927;
                FUN_32b2_710c();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x92c;
                FUN_32b2_7182();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x935;
                FUN_32b2_6e99();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x93d;
                FUN_32b2_710c();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x945;
                FUN_32b2_7154();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x94e;
                FUN_32b2_6e99();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x957;
                FUN_32b2_6eb1();
                local_a = &uStack_8c;
                puStack_c = &uStack_64;
                puStack_e = (undefined1 *)0x32b2;
                puStack_10 = (undefined1 *)0x969;
                FUN_32b2_6cc6();
                puStack_e = (undefined1 *)0x32b2;
                puStack_10 = (undefined1 *)0x96e;
                FUN_32b2_7258();
                puStack_16 = (undefined1 *)0x32b2;
                puStack_18 = (undefined1 *)0x978;
                FUN_32b2_6eb1();
                puStack_16 = (undefined1 *)0x32b2;
                puStack_18 = (undefined1 *)0x980;
                FUN_32b2_6cc6();
                puStack_16 = (undefined1 *)0x32b2;
                puStack_18 = (undefined1 *)0x985;
                FUN_32b2_7258();
                FUN_32b2_6eb1();
                puStack_22 = puStack_6a;
                puStack_24 = puStack_6c;
                puStack_26 = local_4a;
                puStack_28 = local_4c;
                puStack_2c = puStack_50;
                iStack_2e = 0x32b2;
                uStack_30 = 0x9b0;
                FUN_32b2_6d14();
                local_36 = 0x32b2;
                local_38 = 0x9ba;
                FUN_32b2_6eb1();
                local_36 = 0x32b2;
                local_38 = 0x9c3;
                FUN_32b2_6d14();
                puStack_3e = (undefined1 *)0x32b2;
                puStack_40 = (undefined1 *)0x9cd;
                FUN_32b2_6eb1();
                puStack_3e = (undefined1 *)0x0;
                puStack_40 = (undefined1 *)0x32b2;
                puStack_42 = (undefined1 *)0x9d4;
                FUN_3ab8_5089();
                uVar9 = &stack0x0000 == (undefined1 *)0x8;
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x9df;
                FUN_32b2_6cc6();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x9e7;
                FUN_32b2_6cc6();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0x9ec;
                FUN_32b2_7191();
                if ((bool)uVar9) {
                  uStack_64 = param_2;
                  uStack_62 = 0x2f0;
                }
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0xa02;
                FUN_32b2_6cc6();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0xa0a;
                FUN_32b2_6cc6();
                local_a = (undefined2 *)0x32b2;
                puStack_c = (undefined2 *)0xa0f;
                FUN_32b2_7191();
                if ((bool)uVar9) {
                  uStack_8c = 0x32b2;
                  uStack_8a = param_5;
                }
                *in_stack_0000003e = uStack_64;
                in_stack_0000003e[1] = uStack_62;
                *in_stack_00000040 = uStack_8c;
                in_stack_00000040[1] = uStack_8a;
                return local_38 + 1;
              }
              return local_38;
            }
          }
          return 0;
        }
        local_8 = (undefined2 *)0x3f5;
        FUN_32b2_6d14();
        local_8 = (undefined2 *)0x32b2;
        local_a = (undefined2 *)0x3ff;
        FUN_32b2_7154();
        local_8 = (undefined2 *)0x405;
        FUN_32b2_6eb1();
        unaff_DI = puStack_c;
        iStack_48 = (int)local_a;
        uStack_46 = local_8;
        uStack_12 = (uint)local_a;
        puStack_c = (undefined2 *)puStack_be;
        puStack_e = (undefined1 *)0x32b2;
        puStack_10 = (undefined1 *)0x119;
        puStack_44 = unaff_SS;
        puStack_42 = puVar4;
        FUN_32b2_75fe();
        local_8 = (undefined2 *)0x32b2;
        puVar8 = (undefined1 *)0x32b2;
        local_a = (undefined2 *)0x123;
        FUN_32b2_6d14();
      }
      return 0;
    }
    local_8 = (undefined2 *)local_3a;
    local_a = (undefined2 *)local_3c;
    puStack_e = (undefined1 *)0xfc1d;
    puStack_c = (undefined2 *)puVar8;
    uVar12 = func_0x0000013f();
    if ((*(byte *)((int)uVar12 + 0x14) & 0x40) != 0) break;
    local_8 = (undefined2 *)local_3a;
    local_a = (undefined2 *)local_3c;
    puStack_c = (undefined2 *)0x0;
    puVar8 = (undefined1 *)0x0;
    puStack_e = (undefined1 *)0xfc35;
    uVar12 = func_0x0000013f();
    if ((*(byte *)((int)uVar12 + 0x14) & 0x80) != 0) break;
    bVar10 = local_3c == (undefined1 *)0x0;
    local_3c = local_3c + -1;
    local_3a = local_3a + -(uint)bVar10;
  }
  local_8 = (undefined2 *)local_3a;
  local_a = (undefined2 *)local_3c;
  puStack_c = (undefined2 *)0x0;
  puStack_e = (undefined1 *)0xfc4d;
  puVar13 = (undefined2 *)func_0x0000013f();
  puVar6 = (undefined2 *)puVar13;
  piVar5 = &iStack_1c;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = piVar5;
    piVar5 = piVar5 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  FUN_17a6_0ae3();
  local_8 = (undefined2 *)local_4a;
  local_a = (undefined2 *)local_4c;
  puStack_c = (undefined2 *)local_3a;
  puStack_e = local_3c;
  puStack_10 = (undefined1 *)0x11f2;
  uStack_12 = 0xfc7b;
  FUN_3ab8_4f54();
  bVar10 = local_4c == (undefined1 *)0x0;
  local_4c = local_4c + -1;
  local_4a = (undefined1 *)((int)local_4a - (uint)bVar10);
  iVar3 = FUN_3ab8_507c();
  return iVar3;
}



/* 3ab8:507c  FUN_3ab8_507c  12 bytes, 1 callers */

/* WARNING: Instruction at (ram,0x000301e7) overlaps instruction at (ram,0x000301e6)
    */

undefined2 FUN_3ab8_507c(void)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  undefined2 *puVar16;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  undefined2 uStack_8;
  undefined4 uStack_6;
  int iStack_2;
  
  iVar12 = 0x3ab8;
  do {
    piVar1 = (int *)(unaff_BP + -0x3a);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)(unaff_BP + -0x38) = *(int *)(unaff_BP + -0x38) - (uint)(iVar7 == 0);
    if ((*(int *)(unaff_BP + -0x38) < 0) ||
       ((*(int *)(unaff_BP + -0x38) < 1 && (*(int *)(unaff_BP + -0x3a) == 0)))) {
      uVar6 = *(undefined2 *)(unaff_BP + -0x4a);
      uVar5 = *(undefined2 *)(unaff_BP + -0x48);
      *(undefined2 *)(unaff_BP + -0x3e) = uVar6;
      *(undefined2 *)(unaff_BP + -0x3c) = uVar5;
      *(undefined2 *)(unaff_BP + -0x3a) = uVar6;
      *(undefined2 *)(unaff_BP + -0x38) = uVar5;
      while ((-1 < *(int *)(unaff_BP + -0x38) &&
             ((0 < *(int *)(unaff_BP + -0x38) || (*(int *)(unaff_BP + -0x3a) != 0))))) {
        iStack_2 = *(undefined2 *)(unaff_BP + -0x38);
        uStack_6._2_2_ = *(int *)(unaff_BP + -0x3a);
        uStack_8 = 0xfcbe;
        uStack_6._0_2_ = iVar12;
        uVar15 = func_0x0000013f();
        if ((*(byte *)((int)uVar15 + 0x14) & 2) != 0) {
          iStack_2 = *(undefined2 *)(unaff_BP + -0x3c);
          uStack_6._2_2_ = *(int *)(unaff_BP + -0x3e);
          uStack_6._0_2_ = *(int *)(unaff_BP + -0x38);
          uStack_8 = *(undefined2 *)(unaff_BP + -0x3a);
          iStack_a = 0;
          uStack_c = 0xfcdb;
          FUN_3ab8_4f54();
          piVar1 = (int *)(unaff_BP + -0x3e);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          *(int *)(unaff_BP + -0x3c) = *(int *)(unaff_BP + -0x3c) - (uint)(iVar12 == 0);
          puVar2 = (uint *)(unaff_BP + -8);
          uVar8 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + (uint)(0xfffe < uVar8);
        }
        piVar1 = (int *)(unaff_BP + -0x3a);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        *(int *)(unaff_BP + -0x38) = *(int *)(unaff_BP + -0x38) - (uint)(iVar12 == 0);
        iVar12 = 0;
      }
      if ((0 < *(int *)(unaff_BP + -6)) ||
         ((-1 < *(int *)(unaff_BP + -6) && (*(int *)(unaff_BP + -8) != 0)))) {
        puVar2 = (uint *)(unaff_BP + -0x3e);
        uVar8 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x3c) = *(int *)(unaff_BP + -0x3c) + (uint)(0xfffe < uVar8);
        uVar6 = *(undefined2 *)(unaff_BP + -0x3c);
        *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -0x3e);
        *(undefined2 *)(unaff_BP + -0x40) = uVar6;
        iStack_2 = *(undefined2 *)(unaff_BP + -6);
        uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -8);
        uStack_8 = 0xfd22;
        uStack_6._0_2_ = iVar12;
        FUN_3ab8_4fe9();
        *(undefined2 *)(unaff_BP + -0x56) = 1;
        *(undefined2 *)(unaff_BP + -0x54) = 0;
        while( true ) {
          if (0 < *(int *)(unaff_BP + -0x54)) goto LAB_2bb4_45e6;
          if ((-1 < *(int *)(unaff_BP + -0x54)) && (6 < *(uint *)(unaff_BP + -0x56)))
          goto LAB_2bb4_45e6;
          *(undefined2 *)(unaff_BP + -0x68) = 0;
          *(undefined2 *)(unaff_BP + -0x6a) = 0;
          *(undefined2 *)(unaff_BP + -0x30) = 0;
          *(undefined2 *)(unaff_BP + -0x32) = 0;
          uVar6 = *(undefined2 *)(unaff_BP + -0x34);
          *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x36);
          *(undefined2 *)(unaff_BP + -0xe) = uVar6;
          if (*(int *)(unaff_BP + -0x58) < 0) {
            iVar7 = -*(int *)(unaff_BP + -0x5a);
            iVar9 = -((*(uint *)(unaff_BP + -0x58) & 0x7fff) +
                     (uint)(*(int *)(unaff_BP + -0x5a) != 0));
          }
          else {
            iVar7 = *(int *)(unaff_BP + -0x5a);
            iVar9 = *(int *)(unaff_BP + -0x58);
          }
          *(int *)(unaff_BP + -0x2a) = iVar7;
          *(int *)(unaff_BP + -0x28) = iVar9;
          *(int *)(unaff_BP + -0xc) = iVar7;
          *(int *)(unaff_BP + -10) = iVar9;
          uVar6 = *(undefined2 *)(unaff_BP + -0x4a);
          uVar5 = *(undefined2 *)(unaff_BP + -0x48);
          *(undefined2 *)(unaff_BP + -0x52) = uVar6;
          *(undefined2 *)(unaff_BP + -0x50) = uVar5;
          *(undefined2 *)(unaff_BP + -0x3a) = uVar6;
          *(undefined2 *)(unaff_BP + -0x38) = uVar5;
          while( true ) {
            uStack_6._2_2_ = *(uint *)(unaff_BP + -0x3a);
            iStack_2 = *(int *)(unaff_BP + -0x38);
            if ((iStack_2 < *(int *)(unaff_BP + -0x3c)) ||
               ((iStack_2 <= *(int *)(unaff_BP + -0x3c) &&
                (uStack_6._2_2_ < *(uint *)(unaff_BP + -0x3e))))) break;
            uStack_8 = 0xfdf3;
            uStack_6._0_2_ = iVar12;
            uVar15 = func_0x0000013f();
            if (((uint)*(byte *)((int)uVar15 + 0x11) == *(uint *)(unaff_BP + -0x56)) &&
               (*(int *)(unaff_BP + -0x54) == 0)) {
              iStack_2 = unaff_BP + -4;
              uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0x38);
              uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0x3a);
              uStack_8 = 0;
              iStack_a = 0xfd70;
              uStack_6 = func_0x0000013f();
              iVar12 = (int)((ulong)uStack_6 >> 0x10);
              uStack_8 = *(undefined2 *)(unaff_BP + -0x28);
              iStack_a = *(undefined2 *)(unaff_BP + -0x2a);
              uStack_c = *(undefined2 *)(unaff_BP + -10);
              uStack_e = *(undefined2 *)(unaff_BP + -0xc);
              uStack_10 = 0;
              uStack_12 = 0xfd84;
              uVar8 = FUN_3ab8_4dd9();
              *(uint *)(unaff_BP + -0x2e) = uVar8;
              *(int *)(unaff_BP + -0x2c) = iVar12;
              if ((iVar12 <= *(int *)(unaff_BP + -0xe)) &&
                 ((iVar12 < *(int *)(unaff_BP + -0xe) || (uVar8 < *(uint *)(unaff_BP + -0x10))))) {
                *(uint *)(unaff_BP + -0x10) = uVar8;
                *(int *)(unaff_BP + -0xe) = iVar12;
                uVar6 = *(undefined2 *)(unaff_BP + -0x50);
                *(undefined2 *)(unaff_BP + -0x6a) = *(undefined2 *)(unaff_BP + -0x52);
                *(undefined2 *)(unaff_BP + -0x68) = uVar6;
                uVar6 = *(undefined2 *)(unaff_BP + -2);
                *(undefined2 *)(unaff_BP + -0x32) = *(undefined2 *)(unaff_BP + -4);
                *(undefined2 *)(unaff_BP + -0x30) = uVar6;
              }
              iStack_2 = *(undefined2 *)(unaff_BP + -0x50);
              uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0x52);
              uStack_6._0_2_ = *(int *)(unaff_BP + -0x38);
              uStack_8 = *(undefined2 *)(unaff_BP + -0x3a);
              iStack_a = 0;
              uStack_c = 0xfdc7;
              FUN_3ab8_4f54();
              piVar1 = (int *)(unaff_BP + -0x52);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x50) - (uint)(iVar12 == 0);
            }
            iVar12 = 0;
            piVar1 = (int *)(unaff_BP + -0x3a);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            *(int *)(unaff_BP + -0x38) = *(int *)(unaff_BP + -0x38) - (uint)(iVar7 == 0);
          }
          if (((*(int *)(unaff_BP + -0x4a) != *(int *)(unaff_BP + -0x52)) ||
              (*(int *)(unaff_BP + -0x48) != *(int *)(unaff_BP + -0x50))) &&
             (*(int *)(unaff_BP + -0x68) != 0 || *(int *)(unaff_BP + -0x6a) != 0)) break;
          puVar2 = (uint *)(unaff_BP + -0x56);
          uVar8 = *puVar2;
          *puVar2 = *puVar2 + 1;
          *(int *)(unaff_BP + -0x54) = *(int *)(unaff_BP + -0x54) + (uint)(0xfffe < uVar8);
        }
        puVar2 = (uint *)(unaff_BP + -0x52);
        uVar8 = *puVar2;
        *puVar2 = *puVar2 + 1;
        *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x50) + (uint)(0xfffe < uVar8);
        uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0x52);
        iStack_2 = *(undefined2 *)(unaff_BP + -0x50);
        uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0x68);
        uStack_8 = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_c = 0xfe8a;
        iStack_a = iVar12;
        FUN_3ab8_4f54();
        *(undefined2 *)(unaff_BP + -0x62) = 1;
        *(undefined2 *)(unaff_BP + -0x60) = 0;
        uVar6 = *(undefined2 *)(unaff_BP + -0x50);
        *(undefined2 *)(unaff_BP + -0x3a) = *(undefined2 *)(unaff_BP + -0x52);
        *(undefined2 *)(unaff_BP + -0x38) = uVar6;
        uStack_6._2_2_ = 0x48;
        iStack_2 = iVar12;
        FUN_32b2_6d14();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x50;
        FUN_32b2_6e63();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x58;
        FUN_32b2_6d14();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x60;
        FUN_32b2_6e63();
        return 1;
      }
      while( true ) {
        uStack_c = 0x1f6;
        iStack_a = iVar12;
        FUN_32b2_6eb1();
        iStack_a = 0x32b2;
        uStack_c = 0x1fa;
        iVar12 = FUN_3ab8_4fbd();
        if (iVar12 == 0) {
          return 0;
        }
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6e99();
        FUN_32b2_6ef9();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x269;
        FUN_32b2_6eb1();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x271;
        FUN_32b2_6cc6();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x276;
        FUN_32b2_7258();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x27e;
        FUN_32b2_6e99();
        iStack_a = 0x32b2;
        uStack_c = 0x288;
        FUN_32b2_6eb1();
        iStack_a = 0x32b2;
        uStack_c = 0x290;
        FUN_32b2_6cc6();
        iStack_a = 0x32b2;
        uStack_c = 0x295;
        FUN_32b2_7258();
        uStack_12 = 0x32b2;
        uStack_14 = 0x29f;
        FUN_32b2_6eb1();
        uStack_12 = 0x32b2;
        uStack_14 = 0x2a7;
        FUN_32b2_6cc6();
        uStack_12 = 0x32b2;
        uStack_14 = 0x2ac;
        FUN_32b2_7258();
        uStack_1c = 0x2b6;
        FUN_32b2_6eb1();
        uStack_1c = 0x32b2;
        uStack_1e = 0x2be;
        FUN_3ab8_5089();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        FUN_32b2_6d14();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x30c;
        FUN_32b2_6eb1();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x314;
        FUN_32b2_6d14();
        iStack_a = 0x32b2;
        uStack_c = 0x31e;
        FUN_32b2_6eb1();
        iStack_a = 0x32b2;
        uStack_c = 0x326;
        FUN_32b2_6cc6();
        iStack_a = 0x32b2;
        uStack_c = 0x32b;
        FUN_32b2_7258();
        uStack_12 = 0x32b2;
        uStack_14 = 0x335;
        FUN_32b2_6eb1();
        uStack_12 = 0x32b2;
        uStack_14 = 0x33d;
        FUN_32b2_6cc6();
        uStack_12 = 0x32b2;
        uStack_14 = 0x342;
        FUN_32b2_7258();
        uStack_1c = 0x34c;
        FUN_32b2_6eb1();
        uStack_1c = 0x32b2;
        uStack_1e = 0x354;
        FUN_3ab8_5089();
        uVar13 = (undefined1 *)0xffc9 < &uStack_34;
        uVar14 = &stack0x0000 == (undefined1 *)0xfffe;
        iStack_2 = 0x360;
        FUN_32b2_6cc6();
        iStack_2 = 0x369;
        FUN_32b2_701d();
        iStack_2 = 0x36e;
        FUN_32b2_7258();
        iStack_2 = 0x376;
        FUN_32b2_6e99();
        iStack_2 = 0x37e;
        FUN_32b2_6ef9();
        iStack_2 = 0x387;
        FUN_32b2_6cc6();
        iStack_2 = 0x390;
        FUN_32b2_701d();
        iStack_2 = 0x395;
        FUN_32b2_7258();
        iStack_2 = 0x39e;
        FUN_32b2_6e99();
        iStack_2 = 0x3a6;
        FUN_32b2_6ef9();
        iStack_2 = 0x3af;
        FUN_32b2_6d14();
        iStack_2 = 0x3b4;
        FUN_32b2_6fc7();
        iStack_2 = 0x3bc;
        FUN_32b2_6d14();
        iStack_2 = 0x3c1;
        FUN_32b2_6fc7();
        iStack_2 = 0x3ca;
        FUN_32b2_710c();
        iStack_2 = 0x3cf;
        FUN_32b2_7191();
        if (!(bool)uVar13 && !(bool)uVar14) break;
        iStack_2 = 0x3f5;
        FUN_32b2_6d14();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x3ff;
        FUN_32b2_7154();
        iStack_2 = 0x405;
        FUN_32b2_6eb1();
        *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
        *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
        *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
        *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
        *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
        *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
        *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
        *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
        *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
        *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
        *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
        *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
        iStack_2 = *(undefined2 *)(unaff_BP + -0xb8);
        uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0xba);
        uStack_6._0_2_ = *(int *)(unaff_BP + -0xbc);
        uStack_8 = 0x32b2;
        iStack_a = 0x119;
        FUN_32b2_75fe();
        iStack_2 = 0x32b2;
        iVar12 = 0x32b2;
        uStack_6._2_2_ = 0x123;
        FUN_32b2_6d14();
LAB_2bb4_45e6:
        uStack_6._2_2_ = 299;
        iStack_2 = iVar12;
        FUN_32b2_704d();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x133;
        FUN_32b2_7095();
        iStack_2 = 0x32b2;
        uStack_6._2_2_ = 0x13b;
        FUN_32b2_6eb1();
        iStack_2 = *(undefined2 *)(unaff_BP + -0xb6);
        uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0xb8);
        uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0xba);
        uStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
        iStack_a = 0x32b2;
        uStack_c = 0x150;
        FUN_32b2_75ec();
        uVar13 = &stack0x0000 == (undefined1 *)0x2;
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x15a;
        FUN_32b2_6d14();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x162;
        FUN_32b2_704d();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x16a;
        FUN_32b2_7095();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x173;
        FUN_32b2_6eb1();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x17b;
        FUN_32b2_6cc6();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x183;
        FUN_32b2_6cc6();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x188;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          uStack_6._2_2_ = 0x32b2;
          uStack_6._0_2_ = 0x192;
          FUN_32b2_6cc6();
          uStack_6._2_2_ = 0x32b2;
          uStack_6._0_2_ = 0x19a;
          FUN_32b2_6cc6();
          uStack_6._2_2_ = 0x32b2;
          uStack_6._0_2_ = 0x19f;
          FUN_32b2_7191();
          if ((bool)uVar13) {
            return 0;
          }
        }
        uStack_6._2_2_ = unaff_BP + -0xa8;
        uStack_6._0_2_ = unaff_BP + -0x1c;
        uStack_8 = *(undefined2 *)(unaff_BP + -0x7c);
        iStack_a = *(undefined2 *)(unaff_BP + -0x7e);
        uStack_c = *(undefined2 *)(unaff_BP + -0x80);
        uStack_e = *(undefined2 *)(unaff_BP + -0x82);
        uStack_10 = *(undefined2 *)(unaff_BP + -0x58);
        uStack_12 = *(undefined2 *)(unaff_BP + -0x5a);
        uStack_14 = *(undefined2 *)(unaff_BP + -0x5c);
        uStack_16 = *(undefined2 *)(unaff_BP + -0x5e);
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        uStack_20 = 0x32b2;
        uStack_22 = 0x1df;
        FUN_32b2_6eb1();
        uStack_20 = 0x32b2;
        uStack_22 = 0x1e7;
        FUN_32b2_6cc6();
        uStack_20 = 0x32b2;
        iVar12 = 0x32b2;
        uStack_22 = 0x1ec;
        FUN_32b2_7258();
      }
      iStack_2 = 0x3da;
      FUN_32b2_6d14();
      iStack_2 = 0x3e2;
      FUN_32b2_6d14();
      iStack_2 = 999;
      FUN_32b2_7191();
      if ((bool)uVar14) {
        return 0;
      }
      iStack_2 = 0x431;
      FUN_32b2_6d14();
      iStack_2 = 0x439;
      FUN_32b2_7124();
      iStack_2 = 0x441;
      FUN_32b2_6e99();
      iStack_2 = 0x44a;
      FUN_32b2_704d();
      iStack_2 = 0x453;
      FUN_32b2_7035();
      iStack_2 = 0x45c;
      FUN_32b2_6e99();
      iStack_2 = 0x464;
      FUN_32b2_6eb1();
      iStack_2 = 0x46c;
      FUN_32b2_6d14();
      iStack_2 = 0x474;
      FUN_32b2_710c();
      iStack_2 = 0x47c;
      FUN_32b2_710c();
      iStack_2 = 0x484;
      FUN_32b2_710c();
      iStack_2 = 0x48c;
      FUN_32b2_6d14();
      iStack_2 = 0x494;
      FUN_32b2_710c();
      iStack_2 = 0x49d;
      FUN_32b2_6e99();
      iStack_2 = 0x4a2;
      FUN_32b2_718c();
      iStack_2 = 0x4ab;
      FUN_32b2_6e99();
      iStack_2 = 0x4b3;
      FUN_32b2_6eb1();
      iStack_2 = 0x4bc;
      FUN_32b2_6d14();
      iStack_2 = 0x4c4;
      FUN_32b2_710c();
      iStack_2 = 0x4cd;
      FUN_32b2_710c();
      iStack_2 = 0x4d5;
      FUN_32b2_710c();
      iStack_2 = 0x4dd;
      FUN_32b2_710c();
      iStack_2 = 0x4e6;
      FUN_32b2_6e99();
      iStack_2 = 0x4ee;
      FUN_32b2_6eb1();
      iStack_2 = 0x4f7;
      FUN_32b2_6d14();
      iStack_2 = 0x500;
      FUN_32b2_710c();
      iStack_2 = 0x509;
      FUN_32b2_70dc();
      iStack_2 = 0x511;
      FUN_32b2_710c();
      iStack_2 = 0x519;
      FUN_32b2_710c();
      iStack_2 = 0x522;
      FUN_32b2_6e99();
      iStack_2 = 0x52b;
      FUN_32b2_6eb1();
      iStack_2 = 0x534;
      FUN_32b2_6d14();
      iStack_2 = 0x53d;
      FUN_32b2_710c();
      iStack_2 = 0x546;
      FUN_32b2_710c();
      iStack_2 = 0x54f;
      FUN_32b2_6d14();
      iStack_2 = 0x558;
      FUN_32b2_710c();
      iStack_2 = 0x55d;
      FUN_32b2_718c();
      iStack_2 = 0x566;
      FUN_32b2_6eb1();
      iStack_2 = 0x56f;
      FUN_32b2_6d14();
      iStack_2 = 0x574;
      FUN_32b2_6fd6();
      iStack_2 = 0x57d;
      FUN_32b2_6d14();
      iStack_2 = 0x586;
      FUN_32b2_710c();
      iStack_2 = 0x58b;
      FUN_32b2_7182();
      iStack_2 = 0x594;
      FUN_32b2_6e99();
      iStack_2 = 0x59c;
      FUN_32b2_710c();
      iStack_2 = 0x5a5;
      FUN_32b2_7154();
      iStack_2 = 0x5ae;
      FUN_32b2_6e99();
      iStack_2 = 0x5b7;
      FUN_32b2_6eb1();
      iStack_2 = 0x5c0;
      FUN_32b2_6d14();
      iStack_2 = 0x5c9;
      FUN_32b2_6eb1();
      iStack_2 = unaff_BP + -0x62;
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x5db;
      FUN_32b2_6cc6();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x5e0;
      FUN_32b2_7258();
      uStack_c = 0x32b2;
      uStack_e = 0x5ea;
      FUN_32b2_6eb1();
      uStack_c = 0x32b2;
      uStack_e = 0x5f2;
      FUN_32b2_6cc6();
      uStack_c = 0x32b2;
      uStack_e = 0x5f7;
      FUN_32b2_7258();
      uStack_14 = 0x32b2;
      uStack_16 = 0x601;
      FUN_32b2_6eb1();
      uStack_14 = *(undefined2 *)(unaff_BP + -100);
      uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
      uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
      uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
      uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
      uStack_22 = *(undefined2 *)(unaff_BP + -0x4e);
      uStack_26 = 0x622;
      FUN_32b2_6d14();
      uStack_2c = 0x32b2;
      uStack_2e = 0x62c;
      FUN_32b2_6eb1();
      uStack_2c = 0x32b2;
      uStack_2e = 0x635;
      FUN_32b2_6d14();
      uStack_34 = 0x32b2;
      uStack_36 = 0x63f;
      FUN_32b2_6eb1();
      uStack_34 = 0;
      uStack_36 = 0x32b2;
      FUN_3ab8_5089();
      uVar6 = *(undefined2 *)(unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
      *(undefined2 *)(unaff_BP + -0x84) = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x88);
      *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
      *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
      iStack_2 = unaff_BP + -0x86;
      puVar11 = &uStack_22;
      puVar10 = (undefined2 *)(unaff_BP + 0x1c);
      for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        puVar16 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar3 = *puVar16;
      }
                    /* WARNING: Call to offcut address within same function */
      uStack_26 = 0x684;
      iVar12 = func_0x0003fdaf();
      uVar13 = 0;
      uVar14 = iVar12 == 0;
      if (!(bool)uVar14) {
        iStack_2 = 0x694;
        FUN_32b2_6d14();
        iStack_2 = 0x69d;
        FUN_32b2_6cc6();
        iStack_2 = 0x6a5;
        FUN_32b2_701d();
        iStack_2 = 0x6aa;
        FUN_32b2_6fc7();
        iStack_2 = 0x6af;
        FUN_32b2_7258();
        iStack_2 = 0x6b4;
        FUN_32b2_7191();
        if ((bool)uVar13 || (bool)uVar14) {
          iStack_2 = 0x6bf;
          FUN_32b2_6d14();
          iStack_2 = 0x6c8;
          FUN_32b2_6cc6();
          iStack_2 = 0x6d1;
          FUN_32b2_701d();
          iStack_2 = 0x6d6;
          FUN_32b2_6fc7();
          iStack_2 = 0x6db;
          FUN_32b2_7258();
          iStack_2 = 0x6e0;
          FUN_32b2_7191();
          if ((bool)uVar13 || (bool)uVar14) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
        }
      }
      iStack_2 = 0x6f8;
      FUN_32b2_6d14();
      iStack_2 = 0x700;
      FUN_32b2_6d14();
      iStack_2 = 0x708;
      FUN_32b2_710c();
      iStack_2 = 0x711;
      FUN_32b2_710c();
      iStack_2 = 0x71a;
      FUN_32b2_7154();
      iStack_2 = 0x71f;
      FUN_32b2_7191();
      if ((bool)uVar13) {
        return 0;
      }
      iStack_2 = 0x72d;
      FUN_32b2_6d14();
      iStack_2 = 0x732;
      FUN_32b2_6fc7();
      iStack_2 = 0x73a;
      FUN_32b2_6d14();
      iStack_2 = 0x742;
      FUN_32b2_710c();
      iStack_2 = 0x74b;
      FUN_32b2_710c();
      iStack_2 = 0x750;
      FUN_32b2_7191();
      if (!(bool)uVar13) {
        *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
        *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
        *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
        *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
      }
      iStack_2 = *(undefined2 *)(unaff_BP + -0xb8);
      uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0xba);
      uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0xbc);
      uStack_8 = 0x32b2;
      iStack_a = 0x774;
      FUN_32b2_7592();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x77e;
      FUN_32b2_6d14();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x786;
      FUN_32b2_70dc();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x78e;
      FUN_32b2_6d14();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x797;
      FUN_32b2_710c();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x79c;
      FUN_32b2_7182();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x7a5;
      FUN_32b2_6e99();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x7ad;
      FUN_32b2_710c();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x7b5;
      FUN_32b2_7154();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x7be;
      FUN_32b2_6e99();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x7c7;
      FUN_32b2_6eb1();
      iStack_2 = unaff_BP + -0x8a;
      uStack_6._2_2_ = unaff_BP + -0x62;
      uStack_6._0_2_ = 0x32b2;
      uStack_8 = 0x7d9;
      FUN_32b2_6cc6();
      uStack_6._0_2_ = 0x32b2;
      uStack_8 = 0x7de;
      FUN_32b2_7258();
      uStack_e = 0x32b2;
      uStack_10 = 0x7e8;
      FUN_32b2_6eb1();
      uStack_e = 0x32b2;
      uStack_10 = 0x7f0;
      FUN_32b2_6cc6();
      uStack_e = 0x32b2;
      uStack_10 = 0x7f5;
      FUN_32b2_7258();
      uStack_16 = 0x32b2;
      FUN_32b2_6eb1();
      uStack_16 = *(undefined2 *)(unaff_BP + -100);
      uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
      uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
      uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
      uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
      uStack_26 = 0x32b2;
      uStack_28 = 0x820;
      FUN_32b2_6d14();
      uStack_2e = 0x32b2;
      uStack_30 = 0x82a;
      FUN_32b2_6eb1();
      uStack_2e = 0x32b2;
      uStack_30 = 0x833;
      FUN_32b2_6d14();
      uStack_36 = 0x32b2;
      FUN_32b2_6eb1();
      uStack_36 = 0;
      FUN_3ab8_5089(0x32b2);
      uVar13 = (undefined1 *)0xffc9 < &uStack_36;
      uVar14 = &stack0x0000 == (undefined1 *)0x0;
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x84f;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x857;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x85c;
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uVar6 = *(undefined2 *)(unaff_BP + 8);
        *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
        *(undefined2 *)(unaff_BP + -0x60) = uVar6;
      }
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x872;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x87a;
      FUN_32b2_6cc6();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x87f;
      FUN_32b2_7191();
      if ((bool)uVar14) {
        uVar6 = *(undefined2 *)(unaff_BP + 0xc);
        *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
        *(undefined2 *)(unaff_BP + -0x88) = uVar6;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x60);
      puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
      *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
      puVar10[1] = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x88);
      puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
      *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar10[1] = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x60);
      puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
      *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
      puVar10[1] = uVar6;
      uVar6 = *(undefined2 *)(unaff_BP + -0x88);
      puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
      *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar10[1] = uVar6;
      piVar1 = (int *)(unaff_BP + -0x36);
      *piVar1 = *piVar1 + 1;
      uVar14 = *piVar1 == 0;
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x8d7;
      FUN_32b2_6d14();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x8e0;
      FUN_32b2_6d14();
      iStack_2 = 0x32b2;
      uStack_6._2_2_ = 0x8e5;
      FUN_32b2_7191();
      if (!(bool)uVar13 && !(bool)uVar14) {
        iStack_2 = *(undefined2 *)(unaff_BP + -0xb6);
        uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0xb8);
        uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0xba);
        uStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
        iStack_a = 0x32b2;
        uStack_c = 0x8ff;
        FUN_32b2_7592();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x909;
        FUN_32b2_6d14();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x911;
        FUN_32b2_7154();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x916;
        FUN_32b2_6fd6();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x91e;
        FUN_32b2_6d14();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x927;
        FUN_32b2_710c();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x92c;
        FUN_32b2_7182();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x935;
        FUN_32b2_6e99();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x93d;
        FUN_32b2_710c();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x945;
        FUN_32b2_7154();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x94e;
        FUN_32b2_6e99();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x957;
        FUN_32b2_6eb1();
        uStack_6._2_2_ = unaff_BP + -0x8a;
        uStack_6._0_2_ = unaff_BP + -0x62;
        uStack_8 = 0x32b2;
        iStack_a = 0x969;
        FUN_32b2_6cc6();
        uStack_8 = 0x32b2;
        iStack_a = 0x96e;
        FUN_32b2_7258();
        uStack_10 = 0x32b2;
        uStack_12 = 0x978;
        FUN_32b2_6eb1();
        uStack_10 = 0x32b2;
        uStack_12 = 0x980;
        FUN_32b2_6cc6();
        uStack_10 = 0x32b2;
        uStack_12 = 0x985;
        FUN_32b2_7258();
        FUN_32b2_6eb1();
        uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
        uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
        uStack_28 = 0x32b2;
        uStack_2a = 0x9b0;
        FUN_32b2_6d14();
        uStack_30 = 0x32b2;
        uStack_32 = 0x9ba;
        FUN_32b2_6eb1();
        uStack_30 = 0x32b2;
        uStack_32 = 0x9c3;
        FUN_32b2_6d14();
        FUN_32b2_6eb1();
        FUN_3ab8_5089(0x32b2,0);
        uVar13 = &stack0x0000 == (undefined1 *)0x2;
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x9df;
        FUN_32b2_6cc6();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x9e7;
        FUN_32b2_6cc6();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0x9ec;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + 8);
          *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
          *(undefined2 *)(unaff_BP + -0x60) = uVar6;
        }
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0xa02;
        FUN_32b2_6cc6();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0xa0a;
        FUN_32b2_6cc6();
        uStack_6._2_2_ = 0x32b2;
        uStack_6._0_2_ = 0xa0f;
        FUN_32b2_7191();
        if ((bool)uVar13) {
          uVar6 = *(undefined2 *)(unaff_BP + 0xc);
          *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
          *(undefined2 *)(unaff_BP + -0x88) = uVar6;
        }
        uVar6 = *(undefined2 *)(unaff_BP + -0x60);
        puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
        *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
        puVar10[1] = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x88);
        puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
        *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
        puVar10[1] = uVar6;
        *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
      }
      return *(undefined2 *)(unaff_BP + -0x36);
    }
    iStack_2 = *(undefined2 *)(unaff_BP + -0x38);
    uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0x3a);
    uStack_8 = 0xfc1d;
    uStack_6._0_2_ = iVar12;
    uVar15 = func_0x0000013f();
    if ((*(byte *)((int)uVar15 + 0x14) & 0x40) != 0) break;
    iStack_2 = *(undefined2 *)(unaff_BP + -0x38);
    uStack_6._2_2_ = *(int *)(unaff_BP + -0x3a);
    uStack_6._0_2_ = 0;
    iVar12 = 0;
    uStack_8 = 0xfc35;
    uVar15 = func_0x0000013f();
  } while ((*(byte *)((int)uVar15 + 0x14) & 0x80) == 0);
  iStack_2 = *(undefined2 *)(unaff_BP + -0x38);
  uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0x3a);
  uStack_6._0_2_ = 0;
  uStack_8 = 0xfc4d;
  puVar16 = (undefined2 *)func_0x0000013f();
  puVar10 = (undefined2 *)puVar16;
  puVar11 = &uStack_16;
  for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
    puVar4 = puVar11;
    puVar11 = puVar11 + 1;
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar4 = *puVar3;
  }
  FUN_17a6_0ae3();
  iStack_2 = *(undefined2 *)(unaff_BP + -0x48);
  uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0x4a);
  uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0x38);
  uStack_8 = *(undefined2 *)(unaff_BP + -0x3a);
  iStack_a = 0x11f2;
  uStack_c = 0xfc7b;
  FUN_3ab8_4f54();
  piVar1 = (int *)(unaff_BP + -0x4a);
  iVar12 = *piVar1;
  *piVar1 = *piVar1 + -1;
  *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) - (uint)(iVar12 == 0);
  uVar6 = FUN_3ab8_507c();
  return uVar6;
}



/* 3ab8:5089  FUN_3ab8_5089  246 bytes, 3 callers */

/* WARNING: Instruction at (ram,0x0003fc0a) overlaps instruction at (ram,0x0003fc09)
    */

undefined2 FUN_3ab8_5089(void)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_BP;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined4 uVar15;
  undefined2 *puVar16;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  undefined2 uStack_a;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar12 = 0x3ab8;
  if (!in_ZF && in_OF == in_SF) {
    return 0x4689;
  }
  while (*(int *)(unaff_BP + -0x3a) != 0) {
    do {
      iStack_4 = *(undefined2 *)(unaff_BP + -0x38);
      uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x3a);
      uStack_a = 0xfc1d;
      uStack_8._0_2_ = iVar12;
      uVar15 = func_0x0000013f();
      if ((*(byte *)((int)uVar15 + 0x14) & 0x40) != 0) {
LAB_3ab8_50c2:
        iStack_4 = *(undefined2 *)(unaff_BP + -0x38);
        uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x3a);
        uStack_8._0_2_ = 0;
        uStack_a = 0xfc4d;
        puVar16 = (undefined2 *)func_0x0000013f();
        puVar10 = (undefined2 *)puVar16;
        puVar11 = &uStack_18;
        for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
          puVar4 = puVar11;
          puVar11 = puVar11 + 1;
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar4 = *puVar3;
        }
        FUN_17a6_0ae3();
        iStack_4 = *(undefined2 *)(unaff_BP + -0x48);
        uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_8._0_2_ = *(undefined2 *)(unaff_BP + -0x38);
        uStack_a = *(undefined2 *)(unaff_BP + -0x3a);
        iStack_c = 0x11f2;
        uStack_e = 0xfc7b;
        FUN_3ab8_4f54();
        piVar1 = (int *)(unaff_BP + -0x4a);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        *(int *)(unaff_BP + -0x48) = *(int *)(unaff_BP + -0x48) - (uint)(iVar12 == 0);
        uVar6 = FUN_3ab8_507c();
        return uVar6;
      }
      iStack_4 = *(undefined2 *)(unaff_BP + -0x38);
      uStack_8._2_2_ = *(int *)(unaff_BP + -0x3a);
      uStack_8._0_2_ = 0;
      iVar12 = 0;
      uStack_a = 0xfc35;
      uVar15 = func_0x0000013f();
      if ((*(byte *)((int)uVar15 + 0x14) & 0x80) != 0) goto LAB_3ab8_50c2;
      piVar1 = (int *)(unaff_BP + -0x3a);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -0x38) = *(int *)(unaff_BP + -0x38) - (uint)(iVar7 == 0);
      if (*(int *)(unaff_BP + -0x38) < 0) goto LAB_3ab8_5109;
    } while (0 < *(int *)(unaff_BP + -0x38));
  }
LAB_3ab8_5109:
  uVar6 = *(undefined2 *)(unaff_BP + -0x4a);
  uVar5 = *(undefined2 *)(unaff_BP + -0x48);
  *(undefined2 *)(unaff_BP + -0x3e) = uVar6;
  *(undefined2 *)(unaff_BP + -0x3c) = uVar5;
  *(undefined2 *)(unaff_BP + -0x3a) = uVar6;
  *(undefined2 *)(unaff_BP + -0x38) = uVar5;
  while ((-1 < *(int *)(unaff_BP + -0x38) &&
         ((0 < *(int *)(unaff_BP + -0x38) || (*(int *)(unaff_BP + -0x3a) != 0))))) {
    iStack_4 = *(undefined2 *)(unaff_BP + -0x38);
    uStack_8._2_2_ = *(int *)(unaff_BP + -0x3a);
    uStack_a = 0xfcbe;
    uStack_8._0_2_ = iVar12;
    uVar15 = func_0x0000013f();
    if ((*(byte *)((int)uVar15 + 0x14) & 2) != 0) {
      iStack_4 = *(undefined2 *)(unaff_BP + -0x3c);
      uStack_8._2_2_ = *(int *)(unaff_BP + -0x3e);
      uStack_8._0_2_ = *(int *)(unaff_BP + -0x38);
      uStack_a = *(undefined2 *)(unaff_BP + -0x3a);
      iStack_c = 0;
      uStack_e = 0xfcdb;
      FUN_3ab8_4f54();
      piVar1 = (int *)(unaff_BP + -0x3e);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -0x3c) = *(int *)(unaff_BP + -0x3c) - (uint)(iVar12 == 0);
      puVar2 = (uint *)(unaff_BP + -8);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + (uint)(0xfffe < uVar8);
    }
    piVar1 = (int *)(unaff_BP + -0x3a);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    *(int *)(unaff_BP + -0x38) = *(int *)(unaff_BP + -0x38) - (uint)(iVar12 == 0);
    iVar12 = 0;
  }
  if (*(int *)(unaff_BP + -6) < 1) {
    if (*(int *)(unaff_BP + -6) < 0) goto code_r0x000301ec;
    if (*(int *)(unaff_BP + -8) == 0) goto code_r0x000301ec;
  }
  puVar2 = (uint *)(unaff_BP + -0x3e);
  uVar8 = *puVar2;
  *puVar2 = *puVar2 + 1;
  *(int *)(unaff_BP + -0x3c) = *(int *)(unaff_BP + -0x3c) + (uint)(0xfffe < uVar8);
  uVar6 = *(undefined2 *)(unaff_BP + -0x3c);
  *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -0x3e);
  *(undefined2 *)(unaff_BP + -0x40) = uVar6;
  iStack_4 = *(undefined2 *)(unaff_BP + -6);
  uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -8);
  uStack_a = 0xfd22;
  uStack_8._0_2_ = iVar12;
  FUN_3ab8_4fe9();
  *(undefined2 *)(unaff_BP + -0x56) = 1;
  *(undefined2 *)(unaff_BP + -0x54) = 0;
  while ((*(int *)(unaff_BP + -0x54) < 1 &&
         ((*(int *)(unaff_BP + -0x54) < 0 || (*(uint *)(unaff_BP + -0x56) < 7))))) {
    *(undefined2 *)(unaff_BP + -0x68) = 0;
    *(undefined2 *)(unaff_BP + -0x6a) = 0;
    *(undefined2 *)(unaff_BP + -0x30) = 0;
    *(undefined2 *)(unaff_BP + -0x32) = 0;
    uVar6 = *(undefined2 *)(unaff_BP + -0x34);
    *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x36);
    *(undefined2 *)(unaff_BP + -0xe) = uVar6;
    if (*(int *)(unaff_BP + -0x58) < 0) {
      iVar7 = -*(int *)(unaff_BP + -0x5a);
      iVar9 = -((*(uint *)(unaff_BP + -0x58) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0x5a) != 0));
    }
    else {
      iVar7 = *(int *)(unaff_BP + -0x5a);
      iVar9 = *(int *)(unaff_BP + -0x58);
    }
    *(int *)(unaff_BP + -0x2a) = iVar7;
    *(int *)(unaff_BP + -0x28) = iVar9;
    *(int *)(unaff_BP + -0xc) = iVar7;
    *(int *)(unaff_BP + -10) = iVar9;
    uVar6 = *(undefined2 *)(unaff_BP + -0x4a);
    uVar5 = *(undefined2 *)(unaff_BP + -0x48);
    *(undefined2 *)(unaff_BP + -0x52) = uVar6;
    *(undefined2 *)(unaff_BP + -0x50) = uVar5;
    *(undefined2 *)(unaff_BP + -0x3a) = uVar6;
    *(undefined2 *)(unaff_BP + -0x38) = uVar5;
    while( true ) {
      uStack_8._2_2_ = *(uint *)(unaff_BP + -0x3a);
      iStack_4 = *(int *)(unaff_BP + -0x38);
      if ((iStack_4 < *(int *)(unaff_BP + -0x3c)) ||
         ((iStack_4 <= *(int *)(unaff_BP + -0x3c) && (uStack_8._2_2_ < *(uint *)(unaff_BP + -0x3e)))
         )) break;
      uStack_a = 0xfdf3;
      uStack_8._0_2_ = iVar12;
      uVar15 = func_0x0000013f();
      if (((uint)*(byte *)((int)uVar15 + 0x11) == *(uint *)(unaff_BP + -0x56)) &&
         (*(int *)(unaff_BP + -0x54) == 0)) {
        iStack_4 = unaff_BP + -4;
        uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x38);
        uStack_8._0_2_ = *(undefined2 *)(unaff_BP + -0x3a);
        uStack_a = 0;
        iStack_c = 0xfd70;
        uStack_8 = func_0x0000013f();
        iVar12 = (int)((ulong)uStack_8 >> 0x10);
        uStack_a = *(undefined2 *)(unaff_BP + -0x28);
        iStack_c = *(undefined2 *)(unaff_BP + -0x2a);
        uStack_e = *(undefined2 *)(unaff_BP + -10);
        uStack_10 = *(undefined2 *)(unaff_BP + -0xc);
        uStack_12 = 0;
        uStack_14 = 0xfd84;
        uVar8 = FUN_3ab8_4dd9();
        *(uint *)(unaff_BP + -0x2e) = uVar8;
        *(int *)(unaff_BP + -0x2c) = iVar12;
        if ((iVar12 <= *(int *)(unaff_BP + -0xe)) &&
           ((iVar12 < *(int *)(unaff_BP + -0xe) || (uVar8 < *(uint *)(unaff_BP + -0x10))))) {
          *(uint *)(unaff_BP + -0x10) = uVar8;
          *(int *)(unaff_BP + -0xe) = iVar12;
          uVar6 = *(undefined2 *)(unaff_BP + -0x50);
          *(undefined2 *)(unaff_BP + -0x6a) = *(undefined2 *)(unaff_BP + -0x52);
          *(undefined2 *)(unaff_BP + -0x68) = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -2);
          *(undefined2 *)(unaff_BP + -0x32) = *(undefined2 *)(unaff_BP + -4);
          *(undefined2 *)(unaff_BP + -0x30) = uVar6;
        }
        iStack_4 = *(undefined2 *)(unaff_BP + -0x50);
        uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x52);
        uStack_8._0_2_ = *(int *)(unaff_BP + -0x38);
        uStack_a = *(undefined2 *)(unaff_BP + -0x3a);
        iStack_c = 0;
        uStack_e = 0xfdc7;
        FUN_3ab8_4f54();
        piVar1 = (int *)(unaff_BP + -0x52);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x50) - (uint)(iVar12 == 0);
      }
      iVar12 = 0;
      piVar1 = (int *)(unaff_BP + -0x3a);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      *(int *)(unaff_BP + -0x38) = *(int *)(unaff_BP + -0x38) - (uint)(iVar7 == 0);
    }
    if (((*(int *)(unaff_BP + -0x4a) != *(int *)(unaff_BP + -0x52)) ||
        (*(int *)(unaff_BP + -0x48) != *(int *)(unaff_BP + -0x50))) &&
       (*(int *)(unaff_BP + -0x68) != 0 || *(int *)(unaff_BP + -0x6a) != 0)) {
      puVar2 = (uint *)(unaff_BP + -0x52);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x50) + (uint)(0xfffe < uVar8);
      uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0x52);
      iStack_4 = *(undefined2 *)(unaff_BP + -0x50);
      uStack_8._0_2_ = *(undefined2 *)(unaff_BP + -0x68);
      uStack_a = *(undefined2 *)(unaff_BP + -0x6a);
      uStack_e = 0xfe8a;
      iStack_c = iVar12;
      FUN_3ab8_4f54();
      *(undefined2 *)(unaff_BP + -0x62) = 1;
      *(undefined2 *)(unaff_BP + -0x60) = 0;
      uVar6 = *(undefined2 *)(unaff_BP + -0x50);
      *(undefined2 *)(unaff_BP + -0x3a) = *(undefined2 *)(unaff_BP + -0x52);
      *(undefined2 *)(unaff_BP + -0x38) = uVar6;
      uStack_8._2_2_ = 0x48;
      iStack_4 = iVar12;
      FUN_32b2_6d14();
      iStack_4 = 0x32b2;
      uStack_8._2_2_ = 0x50;
      FUN_32b2_6e63();
      iStack_4 = 0x32b2;
      uStack_8._2_2_ = 0x58;
      FUN_32b2_6d14();
      iStack_4 = 0x32b2;
      uStack_8._2_2_ = 0x60;
      FUN_32b2_6e63();
      return 1;
    }
    puVar2 = (uint *)(unaff_BP + -0x56);
    uVar8 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x54) = *(int *)(unaff_BP + -0x54) + (uint)(0xfffe < uVar8);
  }
  while( true ) {
    uStack_8._2_2_ = 299;
    iStack_4 = iVar12;
    FUN_32b2_704d();
    iStack_4 = 0x32b2;
    uStack_8._2_2_ = 0x133;
    FUN_32b2_7095();
    iStack_4 = 0x32b2;
    uStack_8._2_2_ = 0x13b;
    FUN_32b2_6eb1();
    iStack_4 = *(undefined2 *)(unaff_BP + -0xb6);
    uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0xb8);
    uStack_8._0_2_ = *(undefined2 *)(unaff_BP + -0xba);
    uStack_a = *(undefined2 *)(unaff_BP + -0xbc);
    iStack_c = 0x32b2;
    uStack_e = 0x150;
    FUN_32b2_75ec();
    uVar13 = &stack0x0000 == (undefined1 *)0x4;
    uStack_8._2_2_ = 0x32b2;
    uStack_8._0_2_ = 0x15a;
    FUN_32b2_6d14();
    uStack_8._2_2_ = 0x32b2;
    uStack_8._0_2_ = 0x162;
    FUN_32b2_704d();
    uStack_8._2_2_ = 0x32b2;
    uStack_8._0_2_ = 0x16a;
    FUN_32b2_7095();
    uStack_8._2_2_ = 0x32b2;
    uStack_8._0_2_ = 0x173;
    FUN_32b2_6eb1();
    uStack_8._2_2_ = 0x32b2;
    uStack_8._0_2_ = 0x17b;
    FUN_32b2_6cc6();
    uStack_8._2_2_ = 0x32b2;
    uStack_8._0_2_ = 0x183;
    FUN_32b2_6cc6();
    uStack_8._2_2_ = 0x32b2;
    uStack_8._0_2_ = 0x188;
    FUN_32b2_7191();
    if ((bool)uVar13) {
      uStack_8._2_2_ = 0x32b2;
      uStack_8._0_2_ = 0x192;
      FUN_32b2_6cc6();
      uStack_8._2_2_ = 0x32b2;
      uStack_8._0_2_ = 0x19a;
      FUN_32b2_6cc6();
      uStack_8._2_2_ = 0x32b2;
      uStack_8._0_2_ = 0x19f;
      FUN_32b2_7191();
      if ((bool)uVar13) {
        return 0;
      }
    }
    uStack_8._2_2_ = unaff_BP + -0xa8;
    uStack_8._0_2_ = unaff_BP + -0x1c;
    uStack_a = *(undefined2 *)(unaff_BP + -0x7c);
    iStack_c = *(undefined2 *)(unaff_BP + -0x7e);
    uStack_e = *(undefined2 *)(unaff_BP + -0x80);
    uStack_10 = *(undefined2 *)(unaff_BP + -0x82);
    uStack_12 = *(undefined2 *)(unaff_BP + -0x58);
    uStack_14 = *(undefined2 *)(unaff_BP + -0x5a);
    uStack_16 = *(undefined2 *)(unaff_BP + -0x5c);
    uStack_18 = *(undefined2 *)(unaff_BP + -0x5e);
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    uStack_22 = 0x32b2;
    uStack_24 = 0x1df;
    FUN_32b2_6eb1();
    uStack_22 = 0x32b2;
    uStack_24 = 0x1e7;
    FUN_32b2_6cc6();
    uStack_22 = 0x32b2;
    iVar12 = 0x32b2;
    uStack_24 = 0x1ec;
    FUN_32b2_7258();
code_r0x000301ec:
    uStack_e = 0x1f6;
    iStack_c = iVar12;
    FUN_32b2_6eb1();
    iStack_c = 0x32b2;
    uStack_e = 0x1fa;
    iVar12 = FUN_3ab8_4fbd();
    if (iVar12 == 0) break;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    iStack_4 = 0x32b2;
    uStack_8._2_2_ = 0x269;
    FUN_32b2_6eb1();
    iStack_4 = 0x32b2;
    uStack_8._2_2_ = 0x271;
    FUN_32b2_6cc6();
    iStack_4 = 0x32b2;
    uStack_8._2_2_ = 0x276;
    FUN_32b2_7258();
    iStack_4 = 0x32b2;
    uStack_8._2_2_ = 0x27e;
    FUN_32b2_6e99();
    iStack_c = 0x32b2;
    uStack_e = 0x288;
    FUN_32b2_6eb1();
    iStack_c = 0x32b2;
    uStack_e = 0x290;
    FUN_32b2_6cc6();
    iStack_c = 0x32b2;
    uStack_e = 0x295;
    FUN_32b2_7258();
    uStack_14 = 0x32b2;
    uStack_16 = 0x29f;
    FUN_32b2_6eb1();
    uStack_14 = 0x32b2;
    uStack_16 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_14 = 0x32b2;
    uStack_16 = 0x2ac;
    FUN_32b2_7258();
    uStack_1e = 0x2b6;
    FUN_32b2_6eb1();
    uStack_1e = 0x32b2;
    uStack_20 = 0x2be;
    FUN_3ab8_5089();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    iStack_4 = 0x32b2;
    uStack_8._2_2_ = 0x30c;
    FUN_32b2_6eb1();
    iStack_4 = 0x32b2;
    uStack_8._2_2_ = 0x314;
    FUN_32b2_6d14();
    iStack_c = 0x32b2;
    uStack_e = 0x31e;
    FUN_32b2_6eb1();
    iStack_c = 0x32b2;
    uStack_e = 0x326;
    FUN_32b2_6cc6();
    iStack_c = 0x32b2;
    uStack_e = 0x32b;
    FUN_32b2_7258();
    uStack_14 = 0x32b2;
    uStack_16 = 0x335;
    FUN_32b2_6eb1();
    uStack_14 = 0x32b2;
    uStack_16 = 0x33d;
    FUN_32b2_6cc6();
    uStack_14 = 0x32b2;
    uStack_16 = 0x342;
    FUN_32b2_7258();
    uStack_1e = 0x34c;
    FUN_32b2_6eb1();
    uStack_1e = 0x32b2;
    uStack_20 = 0x354;
    FUN_3ab8_5089();
    uVar13 = (undefined1 *)0xffc9 < &uStack_36;
    uVar14 = &stack0x0000 == (undefined1 *)0x0;
    iStack_4 = 0x360;
    FUN_32b2_6cc6();
    iStack_4 = 0x369;
    FUN_32b2_701d();
    iStack_4 = 0x36e;
    FUN_32b2_7258();
    iStack_4 = 0x376;
    FUN_32b2_6e99();
    iStack_4 = 0x37e;
    FUN_32b2_6ef9();
    iStack_4 = 0x387;
    FUN_32b2_6cc6();
    iStack_4 = 0x390;
    FUN_32b2_701d();
    iStack_4 = 0x395;
    FUN_32b2_7258();
    iStack_4 = 0x39e;
    FUN_32b2_6e99();
    iStack_4 = 0x3a6;
    FUN_32b2_6ef9();
    iStack_4 = 0x3af;
    FUN_32b2_6d14();
    iStack_4 = 0x3b4;
    FUN_32b2_6fc7();
    iStack_4 = 0x3bc;
    FUN_32b2_6d14();
    iStack_4 = 0x3c1;
    FUN_32b2_6fc7();
    iStack_4 = 0x3ca;
    FUN_32b2_710c();
    iStack_4 = 0x3cf;
    FUN_32b2_7191();
    if (!(bool)uVar13 && !(bool)uVar14) {
      iStack_4 = 0x3da;
      FUN_32b2_6d14();
      iStack_4 = 0x3e2;
      FUN_32b2_6d14();
      iStack_4 = 999;
      FUN_32b2_7191();
      if (!(bool)uVar14) {
        iStack_4 = 0x431;
        FUN_32b2_6d14();
        iStack_4 = 0x439;
        FUN_32b2_7124();
        iStack_4 = 0x441;
        FUN_32b2_6e99();
        iStack_4 = 0x44a;
        FUN_32b2_704d();
        iStack_4 = 0x453;
        FUN_32b2_7035();
        iStack_4 = 0x45c;
        FUN_32b2_6e99();
        iStack_4 = 0x464;
        FUN_32b2_6eb1();
        iStack_4 = 0x46c;
        FUN_32b2_6d14();
        iStack_4 = 0x474;
        FUN_32b2_710c();
        iStack_4 = 0x47c;
        FUN_32b2_710c();
        iStack_4 = 0x484;
        FUN_32b2_710c();
        iStack_4 = 0x48c;
        FUN_32b2_6d14();
        iStack_4 = 0x494;
        FUN_32b2_710c();
        iStack_4 = 0x49d;
        FUN_32b2_6e99();
        iStack_4 = 0x4a2;
        FUN_32b2_718c();
        iStack_4 = 0x4ab;
        FUN_32b2_6e99();
        iStack_4 = 0x4b3;
        FUN_32b2_6eb1();
        iStack_4 = 0x4bc;
        FUN_32b2_6d14();
        iStack_4 = 0x4c4;
        FUN_32b2_710c();
        iStack_4 = 0x4cd;
        FUN_32b2_710c();
        iStack_4 = 0x4d5;
        FUN_32b2_710c();
        iStack_4 = 0x4dd;
        FUN_32b2_710c();
        iStack_4 = 0x4e6;
        FUN_32b2_6e99();
        iStack_4 = 0x4ee;
        FUN_32b2_6eb1();
        iStack_4 = 0x4f7;
        FUN_32b2_6d14();
        iStack_4 = 0x500;
        FUN_32b2_710c();
        iStack_4 = 0x509;
        FUN_32b2_70dc();
        iStack_4 = 0x511;
        FUN_32b2_710c();
        iStack_4 = 0x519;
        FUN_32b2_710c();
        iStack_4 = 0x522;
        FUN_32b2_6e99();
        iStack_4 = 0x52b;
        FUN_32b2_6eb1();
        iStack_4 = 0x534;
        FUN_32b2_6d14();
        iStack_4 = 0x53d;
        FUN_32b2_710c();
        iStack_4 = 0x546;
        FUN_32b2_710c();
        iStack_4 = 0x54f;
        FUN_32b2_6d14();
        iStack_4 = 0x558;
        FUN_32b2_710c();
        iStack_4 = 0x55d;
        FUN_32b2_718c();
        iStack_4 = 0x566;
        FUN_32b2_6eb1();
        iStack_4 = 0x56f;
        FUN_32b2_6d14();
        iStack_4 = 0x574;
        FUN_32b2_6fd6();
        iStack_4 = 0x57d;
        FUN_32b2_6d14();
        iStack_4 = 0x586;
        FUN_32b2_710c();
        iStack_4 = 0x58b;
        FUN_32b2_7182();
        iStack_4 = 0x594;
        FUN_32b2_6e99();
        iStack_4 = 0x59c;
        FUN_32b2_710c();
        iStack_4 = 0x5a5;
        FUN_32b2_7154();
        iStack_4 = 0x5ae;
        FUN_32b2_6e99();
        iStack_4 = 0x5b7;
        FUN_32b2_6eb1();
        iStack_4 = 0x5c0;
        FUN_32b2_6d14();
        iStack_4 = 0x5c9;
        FUN_32b2_6eb1();
        iStack_4 = unaff_BP + -0x62;
        uStack_8._2_2_ = 0x32b2;
        uStack_8._0_2_ = 0x5db;
        FUN_32b2_6cc6();
        uStack_8._2_2_ = 0x32b2;
        uStack_8._0_2_ = 0x5e0;
        FUN_32b2_7258();
        uStack_e = 0x32b2;
        uStack_10 = 0x5ea;
        FUN_32b2_6eb1();
        uStack_e = 0x32b2;
        uStack_10 = 0x5f2;
        FUN_32b2_6cc6();
        uStack_e = 0x32b2;
        uStack_10 = 0x5f7;
        FUN_32b2_7258();
        uStack_16 = 0x32b2;
        uStack_18 = 0x601;
        FUN_32b2_6eb1();
        uStack_16 = *(undefined2 *)(unaff_BP + -100);
        uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
        uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
        uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
        uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
        uStack_24 = *(undefined2 *)(unaff_BP + -0x4e);
        uStack_28 = 0x622;
        FUN_32b2_6d14();
        uStack_2e = 0x32b2;
        uStack_30 = 0x62c;
        FUN_32b2_6eb1();
        uStack_2e = 0x32b2;
        uStack_30 = 0x635;
        FUN_32b2_6d14();
        uStack_36 = 0x32b2;
        uStack_38 = 0x63f;
        FUN_32b2_6eb1();
        uStack_36 = 0;
        uStack_38 = 0x32b2;
        FUN_3ab8_5089();
        uVar6 = *(undefined2 *)(unaff_BP + -0x60);
        *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
        *(undefined2 *)(unaff_BP + -0x84) = uVar6;
        uVar6 = *(undefined2 *)(unaff_BP + -0x88);
        *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
        *(undefined2 *)(unaff_BP + -0x9c) = uVar6;
        iStack_4 = unaff_BP + -0x86;
        puVar11 = &uStack_24;
        puVar10 = (undefined2 *)(unaff_BP + 0x1c);
        for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          puVar16 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = *puVar16;
        }
                    /* WARNING: Call to offcut address within same function */
        uStack_28 = 0x684;
        iVar12 = func_0x0003fdaf();
        uVar13 = 0;
        uVar14 = iVar12 == 0;
        if (!(bool)uVar14) {
          iStack_4 = 0x694;
          FUN_32b2_6d14();
          iStack_4 = 0x69d;
          FUN_32b2_6cc6();
          iStack_4 = 0x6a5;
          FUN_32b2_701d();
          iStack_4 = 0x6aa;
          FUN_32b2_6fc7();
          iStack_4 = 0x6af;
          FUN_32b2_7258();
          iStack_4 = 0x6b4;
          FUN_32b2_7191();
          if ((bool)uVar13 || (bool)uVar14) {
            iStack_4 = 0x6bf;
            FUN_32b2_6d14();
            iStack_4 = 0x6c8;
            FUN_32b2_6cc6();
            iStack_4 = 0x6d1;
            FUN_32b2_701d();
            iStack_4 = 0x6d6;
            FUN_32b2_6fc7();
            iStack_4 = 0x6db;
            FUN_32b2_7258();
            iStack_4 = 0x6e0;
            FUN_32b2_7191();
            if ((bool)uVar13 || (bool)uVar14) {
              *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
              *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
              *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
              *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
            }
          }
        }
        iStack_4 = 0x6f8;
        FUN_32b2_6d14();
        iStack_4 = 0x700;
        FUN_32b2_6d14();
        iStack_4 = 0x708;
        FUN_32b2_710c();
        iStack_4 = 0x711;
        FUN_32b2_710c();
        iStack_4 = 0x71a;
        FUN_32b2_7154();
        iStack_4 = 0x71f;
        FUN_32b2_7191();
        if (!(bool)uVar13) {
          iStack_4 = 0x72d;
          FUN_32b2_6d14();
          iStack_4 = 0x732;
          FUN_32b2_6fc7();
          iStack_4 = 0x73a;
          FUN_32b2_6d14();
          iStack_4 = 0x742;
          FUN_32b2_710c();
          iStack_4 = 0x74b;
          FUN_32b2_710c();
          iStack_4 = 0x750;
          FUN_32b2_7191();
          if (!(bool)uVar13) {
            *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
            *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
            *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
            *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
          }
          iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
          uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0xba);
          uStack_8._0_2_ = *(undefined2 *)(unaff_BP + -0xbc);
          uStack_a = 0x32b2;
          iStack_c = 0x774;
          FUN_32b2_7592();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x77e;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x786;
          FUN_32b2_70dc();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x78e;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x797;
          FUN_32b2_710c();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x79c;
          FUN_32b2_7182();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x7a5;
          FUN_32b2_6e99();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x7ad;
          FUN_32b2_710c();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x7b5;
          FUN_32b2_7154();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x7be;
          FUN_32b2_6e99();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x7c7;
          FUN_32b2_6eb1();
          iStack_4 = unaff_BP + -0x8a;
          uStack_8._2_2_ = unaff_BP + -0x62;
          uStack_8._0_2_ = 0x32b2;
          uStack_a = 0x7d9;
          FUN_32b2_6cc6();
          uStack_8._0_2_ = 0x32b2;
          uStack_a = 0x7de;
          FUN_32b2_7258();
          uStack_10 = 0x32b2;
          uStack_12 = 0x7e8;
          FUN_32b2_6eb1();
          uStack_10 = 0x32b2;
          uStack_12 = 0x7f0;
          FUN_32b2_6cc6();
          uStack_10 = 0x32b2;
          uStack_12 = 0x7f5;
          FUN_32b2_7258();
          uStack_18 = 0x32b2;
          FUN_32b2_6eb1();
          uStack_18 = *(undefined2 *)(unaff_BP + -100);
          uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
          uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
          uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
          uStack_24 = *(undefined2 *)(unaff_BP + -0x4c);
          uStack_28 = 0x32b2;
          uStack_2a = 0x820;
          FUN_32b2_6d14();
          uStack_30 = 0x32b2;
          uStack_32 = 0x82a;
          FUN_32b2_6eb1();
          uStack_30 = 0x32b2;
          uStack_32 = 0x833;
          FUN_32b2_6d14();
          uStack_38 = 0x32b2;
          FUN_32b2_6eb1();
          uStack_38 = 0;
          FUN_3ab8_5089(0x32b2);
          uVar13 = (undefined1 *)0xffc9 < &uStack_38;
          uVar14 = &stack0x0000 == (undefined1 *)0x2;
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x84f;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x857;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x85c;
          FUN_32b2_7191();
          if ((bool)uVar14) {
            uVar6 = *(undefined2 *)(unaff_BP + 8);
            *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
            *(undefined2 *)(unaff_BP + -0x60) = uVar6;
          }
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x872;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x87a;
          FUN_32b2_6cc6();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x87f;
          FUN_32b2_7191();
          if ((bool)uVar14) {
            uVar6 = *(undefined2 *)(unaff_BP + 0xc);
            *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
            *(undefined2 *)(unaff_BP + -0x88) = uVar6;
          }
          uVar6 = *(undefined2 *)(unaff_BP + -0x60);
          puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
          *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
          puVar10[1] = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x88);
          puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
          *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar10[1] = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x60);
          puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
          *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
          puVar10[1] = uVar6;
          uVar6 = *(undefined2 *)(unaff_BP + -0x88);
          puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
          *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
          puVar10[1] = uVar6;
          piVar1 = (int *)(unaff_BP + -0x36);
          *piVar1 = *piVar1 + 1;
          uVar14 = *piVar1 == 0;
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x8d7;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x8e0;
          FUN_32b2_6d14();
          iStack_4 = 0x32b2;
          uStack_8._2_2_ = 0x8e5;
          FUN_32b2_7191();
          if (!(bool)uVar13 && !(bool)uVar14) {
            iStack_4 = *(undefined2 *)(unaff_BP + -0xb6);
            uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0xb8);
            uStack_8._0_2_ = *(undefined2 *)(unaff_BP + -0xba);
            uStack_a = *(undefined2 *)(unaff_BP + -0xbc);
            iStack_c = 0x32b2;
            uStack_e = 0x8ff;
            FUN_32b2_7592();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x909;
            FUN_32b2_6d14();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x911;
            FUN_32b2_7154();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x916;
            FUN_32b2_6fd6();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x91e;
            FUN_32b2_6d14();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x927;
            FUN_32b2_710c();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x92c;
            FUN_32b2_7182();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x935;
            FUN_32b2_6e99();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x93d;
            FUN_32b2_710c();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x945;
            FUN_32b2_7154();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x94e;
            FUN_32b2_6e99();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x957;
            FUN_32b2_6eb1();
            uStack_8._2_2_ = unaff_BP + -0x8a;
            uStack_8._0_2_ = unaff_BP + -0x62;
            uStack_a = 0x32b2;
            iStack_c = 0x969;
            FUN_32b2_6cc6();
            uStack_a = 0x32b2;
            iStack_c = 0x96e;
            FUN_32b2_7258();
            uStack_12 = 0x32b2;
            uStack_14 = 0x978;
            FUN_32b2_6eb1();
            uStack_12 = 0x32b2;
            uStack_14 = 0x980;
            FUN_32b2_6cc6();
            uStack_12 = 0x32b2;
            uStack_14 = 0x985;
            FUN_32b2_7258();
            FUN_32b2_6eb1();
            uStack_1e = *(undefined2 *)(unaff_BP + -0x68);
            uStack_20 = *(undefined2 *)(unaff_BP + -0x6a);
            uStack_22 = *(undefined2 *)(unaff_BP + -0x48);
            uStack_24 = *(undefined2 *)(unaff_BP + -0x4a);
            uStack_28 = *(undefined2 *)(unaff_BP + -0x4e);
            uStack_2a = 0x32b2;
            uStack_2c = 0x9b0;
            FUN_32b2_6d14();
            uStack_32 = 0x32b2;
            uStack_34 = 0x9ba;
            FUN_32b2_6eb1();
            uStack_32 = 0x32b2;
            uStack_34 = 0x9c3;
            FUN_32b2_6d14();
            FUN_32b2_6eb1();
            FUN_3ab8_5089(0x32b2,0);
            uVar13 = &stack0x0000 == (undefined1 *)0x4;
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x9df;
            FUN_32b2_6cc6();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x9e7;
            FUN_32b2_6cc6();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0x9ec;
            FUN_32b2_7191();
            if ((bool)uVar13) {
              uVar6 = *(undefined2 *)(unaff_BP + 8);
              *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
              *(undefined2 *)(unaff_BP + -0x60) = uVar6;
            }
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0xa02;
            FUN_32b2_6cc6();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0xa0a;
            FUN_32b2_6cc6();
            uStack_8._2_2_ = 0x32b2;
            uStack_8._0_2_ = 0xa0f;
            FUN_32b2_7191();
            if ((bool)uVar13) {
              uVar6 = *(undefined2 *)(unaff_BP + 0xc);
              *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
              *(undefined2 *)(unaff_BP + -0x88) = uVar6;
            }
            uVar6 = *(undefined2 *)(unaff_BP + -0x60);
            puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
            *puVar10 = *(undefined2 *)(unaff_BP + -0x62);
            puVar10[1] = uVar6;
            uVar6 = *(undefined2 *)(unaff_BP + -0x88);
            puVar10 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
            *puVar10 = *(undefined2 *)(unaff_BP + -0x8a);
            puVar10[1] = uVar6;
            *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
          }
          return *(undefined2 *)(unaff_BP + -0x36);
        }
      }
      return 0;
    }
    iStack_4 = 0x3f5;
    FUN_32b2_6d14();
    iStack_4 = 0x32b2;
    uStack_8._2_2_ = 0x3ff;
    FUN_32b2_7154();
    iStack_4 = 0x405;
    FUN_32b2_6eb1();
    *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
    *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
    *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
    *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
    *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
    *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
    *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
    *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
    *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
    *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
    iStack_4 = *(undefined2 *)(unaff_BP + -0xb8);
    uStack_8._2_2_ = *(undefined2 *)(unaff_BP + -0xba);
    uStack_8._0_2_ = *(int *)(unaff_BP + -0xbc);
    uStack_a = 0x32b2;
    iStack_c = 0x119;
    FUN_32b2_75fe();
    iStack_4 = 0x32b2;
    iVar12 = 0x32b2;
    uStack_8._2_2_ = 0x123;
    FUN_32b2_6d14();
  }
  return 0;
}



/* 3ab8:517f  FUN_3ab8_517f  422 bytes, 2 callers */

/* WARNING: Instruction at (ram,0x000301e7) overlaps instruction at (ram,0x000301e6)
    */

undefined2 __cdecl16far FUN_3ab8_517f(void)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int unaff_BP;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar13;
  undefined1 uVar14;
  bool in_ZF;
  undefined4 uVar15;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
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
  undefined2 uStack_8;
  undefined4 uStack_6;
  int iStack_2;
  
  uVar7 = 0x3ab8;
  if (!in_ZF) {
    puVar2 = (uint *)(unaff_BP + -0x3e);
    uVar9 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x3c) = *(int *)(unaff_BP + -0x3c) + (uint)(0xfffe < uVar9);
    uVar5 = *(undefined2 *)(unaff_BP + -0x3c);
    *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -0x3e);
    *(undefined2 *)(unaff_BP + -0x40) = uVar5;
    iStack_2 = *(undefined2 *)(unaff_BP + -6);
    uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -8);
    uStack_6._0_2_ = 0x3ab8;
    uStack_8 = 0xfd22;
    FUN_3ab8_4fe9();
    *(undefined2 *)(unaff_BP + -0x56) = 1;
    *(undefined2 *)(unaff_BP + -0x54) = 0;
    while( true ) {
      if (0 < *(int *)(unaff_BP + -0x54)) goto LAB_2bb4_45e6;
      if ((-1 < *(int *)(unaff_BP + -0x54)) && (6 < *(uint *)(unaff_BP + -0x56)))
      goto LAB_2bb4_45e6;
      *(undefined2 *)(unaff_BP + -0x68) = 0;
      *(undefined2 *)(unaff_BP + -0x6a) = 0;
      *(undefined2 *)(unaff_BP + -0x30) = 0;
      *(undefined2 *)(unaff_BP + -0x32) = 0;
      uVar5 = *(undefined2 *)(unaff_BP + -0x34);
      *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x36);
      *(undefined2 *)(unaff_BP + -0xe) = uVar5;
      if (*(int *)(unaff_BP + -0x58) < 0) {
        iVar8 = -*(int *)(unaff_BP + -0x5a);
        iVar10 = -((*(uint *)(unaff_BP + -0x58) & 0x7fff) + (uint)(*(int *)(unaff_BP + -0x5a) != 0))
        ;
      }
      else {
        iVar8 = *(int *)(unaff_BP + -0x5a);
        iVar10 = *(int *)(unaff_BP + -0x58);
      }
      *(int *)(unaff_BP + -0x2a) = iVar8;
      *(int *)(unaff_BP + -0x28) = iVar10;
      *(int *)(unaff_BP + -0xc) = iVar8;
      *(int *)(unaff_BP + -10) = iVar10;
      uVar5 = *(undefined2 *)(unaff_BP + -0x4a);
      uVar6 = *(undefined2 *)(unaff_BP + -0x48);
      *(undefined2 *)(unaff_BP + -0x52) = uVar5;
      *(undefined2 *)(unaff_BP + -0x50) = uVar6;
      *(undefined2 *)(unaff_BP + -0x3a) = uVar5;
      *(undefined2 *)(unaff_BP + -0x38) = uVar6;
      while( true ) {
        uStack_6._2_2_ = *(uint *)(unaff_BP + -0x3a);
        iStack_2 = *(int *)(unaff_BP + -0x38);
        if ((iStack_2 < *(int *)(unaff_BP + -0x3c)) ||
           ((iStack_2 <= *(int *)(unaff_BP + -0x3c) &&
            (uStack_6._2_2_ < *(uint *)(unaff_BP + -0x3e))))) break;
        uStack_8 = 0xfdf3;
        uStack_6._0_2_ = uVar7;
        uVar15 = func_0x0000013f();
        if (((uint)*(byte *)((int)uVar15 + 0x11) == *(uint *)(unaff_BP + -0x56)) &&
           (*(int *)(unaff_BP + -0x54) == 0)) {
          iStack_2 = unaff_BP + -4;
          uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0x38);
          uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0x3a);
          uStack_8 = 0;
          uStack_a = 0xfd70;
          uStack_6 = func_0x0000013f();
          iVar8 = (int)((ulong)uStack_6 >> 0x10);
          uStack_8 = *(undefined2 *)(unaff_BP + -0x28);
          uStack_a = *(undefined2 *)(unaff_BP + -0x2a);
          uStack_c = *(undefined2 *)(unaff_BP + -10);
          uStack_e = *(undefined2 *)(unaff_BP + -0xc);
          uStack_10 = 0;
          uStack_12 = 0xfd84;
          uVar9 = FUN_3ab8_4dd9();
          *(uint *)(unaff_BP + -0x2e) = uVar9;
          *(int *)(unaff_BP + -0x2c) = iVar8;
          if ((iVar8 <= *(int *)(unaff_BP + -0xe)) &&
             ((iVar8 < *(int *)(unaff_BP + -0xe) || (uVar9 < *(uint *)(unaff_BP + -0x10))))) {
            *(uint *)(unaff_BP + -0x10) = uVar9;
            *(int *)(unaff_BP + -0xe) = iVar8;
            uVar7 = *(undefined2 *)(unaff_BP + -0x50);
            *(undefined2 *)(unaff_BP + -0x6a) = *(undefined2 *)(unaff_BP + -0x52);
            *(undefined2 *)(unaff_BP + -0x68) = uVar7;
            uVar7 = *(undefined2 *)(unaff_BP + -2);
            *(undefined2 *)(unaff_BP + -0x32) = *(undefined2 *)(unaff_BP + -4);
            *(undefined2 *)(unaff_BP + -0x30) = uVar7;
          }
          iStack_2 = *(undefined2 *)(unaff_BP + -0x50);
          uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0x52);
          uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0x38);
          uStack_8 = *(undefined2 *)(unaff_BP + -0x3a);
          uStack_a = 0;
          uStack_c = 0xfdc7;
          FUN_3ab8_4f54();
          piVar1 = (int *)(unaff_BP + -0x52);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x50) - (uint)(iVar8 == 0);
        }
        uVar7 = 0;
        piVar1 = (int *)(unaff_BP + -0x3a);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        *(int *)(unaff_BP + -0x38) = *(int *)(unaff_BP + -0x38) - (uint)(iVar8 == 0);
      }
      if (((*(int *)(unaff_BP + -0x4a) != *(int *)(unaff_BP + -0x52)) ||
          (*(int *)(unaff_BP + -0x48) != *(int *)(unaff_BP + -0x50))) &&
         (*(int *)(unaff_BP + -0x68) != 0 || *(int *)(unaff_BP + -0x6a) != 0)) break;
      puVar2 = (uint *)(unaff_BP + -0x56);
      uVar9 = *puVar2;
      *puVar2 = *puVar2 + 1;
      *(int *)(unaff_BP + -0x54) = *(int *)(unaff_BP + -0x54) + (uint)(0xfffe < uVar9);
    }
    puVar2 = (uint *)(unaff_BP + -0x52);
    uVar9 = *puVar2;
    *puVar2 = *puVar2 + 1;
    *(int *)(unaff_BP + -0x50) = *(int *)(unaff_BP + -0x50) + (uint)(0xfffe < uVar9);
    uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0x52);
    iStack_2 = *(undefined2 *)(unaff_BP + -0x50);
    uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0x68);
    uStack_8 = *(undefined2 *)(unaff_BP + -0x6a);
    uStack_c = 0xfe8a;
    uStack_a = uVar7;
    FUN_3ab8_4f54();
    *(undefined2 *)(unaff_BP + -0x62) = 1;
    *(undefined2 *)(unaff_BP + -0x60) = 0;
    uVar5 = *(undefined2 *)(unaff_BP + -0x50);
    *(undefined2 *)(unaff_BP + -0x3a) = *(undefined2 *)(unaff_BP + -0x52);
    *(undefined2 *)(unaff_BP + -0x38) = uVar5;
    uStack_6._2_2_ = 0x48;
    iStack_2 = uVar7;
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x50;
    FUN_32b2_6e63();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x58;
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x60;
    FUN_32b2_6e63();
    return 1;
  }
  while( true ) {
    uStack_c = 0x1f6;
    uStack_a = uVar7;
    FUN_32b2_6eb1();
    uStack_a = 0x32b2;
    uStack_c = 0x1fa;
    iVar8 = FUN_3ab8_4fbd();
    if (iVar8 == 0) goto LAB_2bb4_4661;
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6e99();
    FUN_32b2_6ef9();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x269;
    FUN_32b2_6eb1();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x271;
    FUN_32b2_6cc6();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x276;
    FUN_32b2_7258();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x27e;
    FUN_32b2_6e99();
    uStack_a = 0x32b2;
    uStack_c = 0x288;
    FUN_32b2_6eb1();
    uStack_a = 0x32b2;
    uStack_c = 0x290;
    FUN_32b2_6cc6();
    uStack_a = 0x32b2;
    uStack_c = 0x295;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x29f;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x2a7;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    uStack_14 = 0x2ac;
    FUN_32b2_7258();
    uStack_1a = 0x32b2;
    uStack_1c = 0x2b6;
    FUN_32b2_6eb1();
    uStack_1a = 1;
    uStack_1c = 0x32b2;
    uStack_1e = 0x2be;
    FUN_3ab8_5089();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6cc6();
    FUN_32b2_7258();
    FUN_32b2_6eb1();
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x30c;
    FUN_32b2_6eb1();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x314;
    FUN_32b2_6d14();
    uStack_a = 0x32b2;
    uStack_c = 0x31e;
    FUN_32b2_6eb1();
    uStack_a = 0x32b2;
    uStack_c = 0x326;
    FUN_32b2_6cc6();
    uStack_a = 0x32b2;
    uStack_c = 0x32b;
    FUN_32b2_7258();
    uStack_12 = 0x32b2;
    uStack_14 = 0x335;
    FUN_32b2_6eb1();
    uStack_12 = 0x32b2;
    uStack_14 = 0x33d;
    FUN_32b2_6cc6();
    uStack_12 = 0x32b2;
    uStack_14 = 0x342;
    FUN_32b2_7258();
    uStack_1a = 0x32b2;
    uStack_1c = 0x34c;
    FUN_32b2_6eb1();
    uStack_1a = 1;
    uStack_1c = 0x32b2;
    uStack_1e = 0x354;
    FUN_3ab8_5089();
    uVar13 = (undefined1 *)0xffc9 < &uStack_34;
    uVar14 = &stack0x0000 == (undefined1 *)0xfffe;
    iStack_2 = 0x360;
    FUN_32b2_6cc6();
    iStack_2 = 0x369;
    FUN_32b2_701d();
    iStack_2 = 0x36e;
    FUN_32b2_7258();
    iStack_2 = 0x376;
    FUN_32b2_6e99();
    iStack_2 = 0x37e;
    FUN_32b2_6ef9();
    iStack_2 = 0x387;
    FUN_32b2_6cc6();
    iStack_2 = 0x390;
    FUN_32b2_701d();
    iStack_2 = 0x395;
    FUN_32b2_7258();
    iStack_2 = 0x39e;
    FUN_32b2_6e99();
    iStack_2 = 0x3a6;
    FUN_32b2_6ef9();
    iStack_2 = 0x3af;
    FUN_32b2_6d14();
    iStack_2 = 0x3b4;
    FUN_32b2_6fc7();
    iStack_2 = 0x3bc;
    FUN_32b2_6d14();
    iStack_2 = 0x3c1;
    FUN_32b2_6fc7();
    iStack_2 = 0x3ca;
    FUN_32b2_710c();
    iStack_2 = 0x3cf;
    FUN_32b2_7191();
    if (!(bool)uVar13 && !(bool)uVar14) break;
    iStack_2 = 0x3f5;
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x3ff;
    FUN_32b2_7154();
    iStack_2 = 0x405;
    FUN_32b2_6eb1();
    *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -8);
    *(undefined2 *)(unaff_BP + -0x44) = *(undefined2 *)(unaff_BP + -6);
    *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -4);
    *(undefined2 *)(unaff_BP + -0x40) = *(undefined2 *)(unaff_BP + -2);
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(unaff_BP + -0x10);
    *(undefined2 *)(unaff_BP + -6) = *(undefined2 *)(unaff_BP + -0xe);
    *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)(unaff_BP + -0xc);
    *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(unaff_BP + -10);
    *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)(unaff_BP + -0x46);
    *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x44);
    *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(unaff_BP + -0x42);
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(unaff_BP + -0x40);
    iStack_2 = *(undefined2 *)(unaff_BP + -0xb8);
    uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0xba);
    uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_8 = 0x32b2;
    uStack_a = 0x119;
    FUN_32b2_75fe();
    iStack_2 = 0x32b2;
    uVar7 = 0x32b2;
    uStack_6._2_2_ = 0x123;
    FUN_32b2_6d14();
LAB_2bb4_45e6:
    uStack_6._2_2_ = 299;
    iStack_2 = uVar7;
    FUN_32b2_704d();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x133;
    FUN_32b2_7095();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x13b;
    FUN_32b2_6eb1();
    iStack_2 = *(undefined2 *)(unaff_BP + -0xb6);
    uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0xb8);
    uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0xba);
    uStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_a = 0x32b2;
    uStack_c = 0x150;
    FUN_32b2_75ec();
    uVar13 = &stack0x0000 == (undefined1 *)0x2;
    uStack_6._2_2_ = 0x32b2;
    uStack_6._0_2_ = 0x15a;
    FUN_32b2_6d14();
    uStack_6._2_2_ = 0x32b2;
    uStack_6._0_2_ = 0x162;
    FUN_32b2_704d();
    uStack_6._2_2_ = 0x32b2;
    uStack_6._0_2_ = 0x16a;
    FUN_32b2_7095();
    uStack_6._2_2_ = 0x32b2;
    uStack_6._0_2_ = 0x173;
    FUN_32b2_6eb1();
    uStack_6._2_2_ = 0x32b2;
    uStack_6._0_2_ = 0x17b;
    FUN_32b2_6cc6();
    uStack_6._2_2_ = 0x32b2;
    uStack_6._0_2_ = 0x183;
    FUN_32b2_6cc6();
    uStack_6._2_2_ = 0x32b2;
    uStack_6._0_2_ = 0x188;
    FUN_32b2_7191();
    if ((bool)uVar13) {
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x192;
      FUN_32b2_6cc6();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x19a;
      FUN_32b2_6cc6();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x19f;
      FUN_32b2_7191();
      if ((bool)uVar13) goto LAB_2bb4_4661;
    }
    uStack_6._2_2_ = unaff_BP + -0xa8;
    uStack_6._0_2_ = unaff_BP + -0x1c;
    uStack_8 = *(undefined2 *)(unaff_BP + -0x7c);
    uStack_a = *(undefined2 *)(unaff_BP + -0x7e);
    uStack_c = *(undefined2 *)(unaff_BP + -0x80);
    uStack_e = *(undefined2 *)(unaff_BP + -0x82);
    uStack_10 = *(undefined2 *)(unaff_BP + -0x58);
    uStack_12 = *(undefined2 *)(unaff_BP + -0x5a);
    uStack_14 = *(undefined2 *)(unaff_BP + -0x5c);
    uStack_16 = *(undefined2 *)(unaff_BP + -0x5e);
    uStack_18 = 0x32b2;
    uStack_1a = 0x1d0;
    FUN_32b2_6cc6();
    uStack_18 = 0x32b2;
    uStack_1a = 0x1d5;
    FUN_32b2_7258();
    uStack_20 = 0x32b2;
    uStack_22 = 0x1df;
    FUN_32b2_6eb1();
    uStack_20 = 0x32b2;
    uStack_22 = 0x1e7;
    FUN_32b2_6cc6();
    uStack_20 = 0x32b2;
    uVar7 = 0x32b2;
    uStack_22 = 0x1ec;
    FUN_32b2_7258();
  }
  iStack_2 = 0x3da;
  FUN_32b2_6d14();
  iStack_2 = 0x3e2;
  FUN_32b2_6d14();
  iStack_2 = 999;
  FUN_32b2_7191();
  if ((bool)uVar14) goto LAB_2bb4_4661;
  iStack_2 = 0x431;
  FUN_32b2_6d14();
  iStack_2 = 0x439;
  FUN_32b2_7124();
  iStack_2 = 0x441;
  FUN_32b2_6e99();
  iStack_2 = 0x44a;
  FUN_32b2_704d();
  iStack_2 = 0x453;
  FUN_32b2_7035();
  iStack_2 = 0x45c;
  FUN_32b2_6e99();
  iStack_2 = 0x464;
  FUN_32b2_6eb1();
  iStack_2 = 0x46c;
  FUN_32b2_6d14();
  iStack_2 = 0x474;
  FUN_32b2_710c();
  iStack_2 = 0x47c;
  FUN_32b2_710c();
  iStack_2 = 0x484;
  FUN_32b2_710c();
  iStack_2 = 0x48c;
  FUN_32b2_6d14();
  iStack_2 = 0x494;
  FUN_32b2_710c();
  iStack_2 = 0x49d;
  FUN_32b2_6e99();
  iStack_2 = 0x4a2;
  FUN_32b2_718c();
  iStack_2 = 0x4ab;
  FUN_32b2_6e99();
  iStack_2 = 0x4b3;
  FUN_32b2_6eb1();
  iStack_2 = 0x4bc;
  FUN_32b2_6d14();
  iStack_2 = 0x4c4;
  FUN_32b2_710c();
  iStack_2 = 0x4cd;
  FUN_32b2_710c();
  iStack_2 = 0x4d5;
  FUN_32b2_710c();
  iStack_2 = 0x4dd;
  FUN_32b2_710c();
  iStack_2 = 0x4e6;
  FUN_32b2_6e99();
  iStack_2 = 0x4ee;
  FUN_32b2_6eb1();
  iStack_2 = 0x4f7;
  FUN_32b2_6d14();
  iStack_2 = 0x500;
  FUN_32b2_710c();
  iStack_2 = 0x509;
  FUN_32b2_70dc();
  iStack_2 = 0x511;
  FUN_32b2_710c();
  iStack_2 = 0x519;
  FUN_32b2_710c();
  iStack_2 = 0x522;
  FUN_32b2_6e99();
  iStack_2 = 0x52b;
  FUN_32b2_6eb1();
  iStack_2 = 0x534;
  FUN_32b2_6d14();
  iStack_2 = 0x53d;
  FUN_32b2_710c();
  iStack_2 = 0x546;
  FUN_32b2_710c();
  iStack_2 = 0x54f;
  FUN_32b2_6d14();
  iStack_2 = 0x558;
  FUN_32b2_710c();
  iStack_2 = 0x55d;
  FUN_32b2_718c();
  iStack_2 = 0x566;
  FUN_32b2_6eb1();
  iStack_2 = 0x56f;
  FUN_32b2_6d14();
  iStack_2 = 0x574;
  FUN_32b2_6fd6();
  iStack_2 = 0x57d;
  FUN_32b2_6d14();
  iStack_2 = 0x586;
  FUN_32b2_710c();
  iStack_2 = 0x58b;
  FUN_32b2_7182();
  iStack_2 = 0x594;
  FUN_32b2_6e99();
  iStack_2 = 0x59c;
  FUN_32b2_710c();
  iStack_2 = 0x5a5;
  FUN_32b2_7154();
  iStack_2 = 0x5ae;
  FUN_32b2_6e99();
  iStack_2 = 0x5b7;
  FUN_32b2_6eb1();
  iStack_2 = 0x5c0;
  FUN_32b2_6d14();
  iStack_2 = 0x5c9;
  FUN_32b2_6eb1();
  iStack_2 = unaff_BP + -0x62;
  uStack_6._2_2_ = 0x32b2;
  uStack_6._0_2_ = 0x5db;
  FUN_32b2_6cc6();
  uStack_6._2_2_ = 0x32b2;
  uStack_6._0_2_ = 0x5e0;
  FUN_32b2_7258();
  uStack_c = 0x32b2;
  uStack_e = 0x5ea;
  FUN_32b2_6eb1();
  uStack_c = 0x32b2;
  uStack_e = 0x5f2;
  FUN_32b2_6cc6();
  uStack_c = 0x32b2;
  uStack_e = 0x5f7;
  FUN_32b2_7258();
  uStack_14 = 0x32b2;
  uStack_16 = 0x601;
  FUN_32b2_6eb1();
  uStack_14 = *(undefined2 *)(unaff_BP + -100);
  uStack_16 = *(undefined2 *)(unaff_BP + -0x66);
  uStack_18 = *(undefined2 *)(unaff_BP + -0x68);
  uStack_1a = *(undefined2 *)(unaff_BP + -0x6a);
  uStack_1c = *(undefined2 *)(unaff_BP + -0x48);
  uStack_1e = *(undefined2 *)(unaff_BP + -0x4a);
  uStack_20 = *(undefined2 *)(unaff_BP + -0x4c);
  uStack_22 = *(undefined2 *)(unaff_BP + -0x4e);
  uStack_26 = 0x622;
  FUN_32b2_6d14();
  uStack_2c = 0x32b2;
  uStack_2e = 0x62c;
  FUN_32b2_6eb1();
  uStack_2c = 0x32b2;
  uStack_2e = 0x635;
  FUN_32b2_6d14();
  uStack_34 = 0x32b2;
  uStack_36 = 0x63f;
  FUN_32b2_6eb1();
  uStack_34 = 0;
  uStack_36 = 0x32b2;
  FUN_3ab8_5089();
  uVar7 = *(undefined2 *)(unaff_BP + -0x60);
  *(undefined2 *)(unaff_BP + -0x86) = *(undefined2 *)(unaff_BP + -0x62);
  *(undefined2 *)(unaff_BP + -0x84) = uVar7;
  uVar7 = *(undefined2 *)(unaff_BP + -0x88);
  *(undefined2 *)(unaff_BP + -0x9e) = *(undefined2 *)(unaff_BP + -0x8a);
  *(undefined2 *)(unaff_BP + -0x9c) = uVar7;
  iStack_2 = unaff_BP + -0x86;
  puVar12 = &uStack_22;
  puVar11 = (undefined2 *)(unaff_BP + 0x1c);
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar4 = puVar12;
    puVar12 = puVar12 + 1;
    puVar3 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar4 = *puVar3;
  }
                    /* WARNING: Call to offcut address within same function */
  uStack_26 = 0x684;
  iVar8 = func_0x0003fdaf();
  uVar13 = 0;
  uVar14 = iVar8 == 0;
  if (!(bool)uVar14) {
    iStack_2 = 0x694;
    FUN_32b2_6d14();
    iStack_2 = 0x69d;
    FUN_32b2_6cc6();
    iStack_2 = 0x6a5;
    FUN_32b2_701d();
    iStack_2 = 0x6aa;
    FUN_32b2_6fc7();
    iStack_2 = 0x6af;
    FUN_32b2_7258();
    iStack_2 = 0x6b4;
    FUN_32b2_7191();
    if ((bool)uVar13 || (bool)uVar14) {
      iStack_2 = 0x6bf;
      FUN_32b2_6d14();
      iStack_2 = 0x6c8;
      FUN_32b2_6cc6();
      iStack_2 = 0x6d1;
      FUN_32b2_701d();
      iStack_2 = 0x6d6;
      FUN_32b2_6fc7();
      iStack_2 = 0x6db;
      FUN_32b2_7258();
      iStack_2 = 0x6e0;
      FUN_32b2_7191();
      if ((bool)uVar13 || (bool)uVar14) {
        *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
        *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
        *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
        *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
      }
    }
  }
  iStack_2 = 0x6f8;
  FUN_32b2_6d14();
  iStack_2 = 0x700;
  FUN_32b2_6d14();
  iStack_2 = 0x708;
  FUN_32b2_710c();
  iStack_2 = 0x711;
  FUN_32b2_710c();
  iStack_2 = 0x71a;
  FUN_32b2_7154();
  iStack_2 = 0x71f;
  FUN_32b2_7191();
  if ((bool)uVar13) {
LAB_2bb4_4661:
    uVar7 = 0;
  }
  else {
    iStack_2 = 0x72d;
    FUN_32b2_6d14();
    iStack_2 = 0x732;
    FUN_32b2_6fc7();
    iStack_2 = 0x73a;
    FUN_32b2_6d14();
    iStack_2 = 0x742;
    FUN_32b2_710c();
    iStack_2 = 0x74b;
    FUN_32b2_710c();
    iStack_2 = 0x750;
    FUN_32b2_7191();
    if (!(bool)uVar13) {
      *(undefined2 *)(unaff_BP + -0xbc) = *(undefined2 *)0x93c0;
      *(undefined2 *)(unaff_BP + -0xba) = *(undefined2 *)0x93c2;
      *(undefined2 *)(unaff_BP + -0xb8) = *(undefined2 *)0x93c4;
      *(undefined2 *)(unaff_BP + -0xb6) = *(undefined2 *)0x93c6;
    }
    iStack_2 = *(undefined2 *)(unaff_BP + -0xb8);
    uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0xba);
    uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0xbc);
    uStack_8 = 0x32b2;
    uStack_a = 0x774;
    FUN_32b2_7592();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x77e;
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x786;
    FUN_32b2_70dc();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x78e;
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x797;
    FUN_32b2_710c();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x79c;
    FUN_32b2_7182();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x7a5;
    FUN_32b2_6e99();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x7ad;
    FUN_32b2_710c();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x7b5;
    FUN_32b2_7154();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x7be;
    FUN_32b2_6e99();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x7c7;
    FUN_32b2_6eb1();
    iStack_2 = unaff_BP + -0x8a;
    uStack_6._2_2_ = unaff_BP + -0x62;
    uStack_6._0_2_ = 0x32b2;
    uStack_8 = 0x7d9;
    FUN_32b2_6cc6();
    uStack_6._0_2_ = 0x32b2;
    uStack_8 = 0x7de;
    FUN_32b2_7258();
    uStack_e = 0x32b2;
    uStack_10 = 0x7e8;
    FUN_32b2_6eb1();
    uStack_e = 0x32b2;
    uStack_10 = 0x7f0;
    FUN_32b2_6cc6();
    uStack_e = 0x32b2;
    uStack_10 = 0x7f5;
    FUN_32b2_7258();
    uStack_16 = 0x32b2;
    uStack_18 = 0x7ff;
    FUN_32b2_6eb1();
    uStack_16 = *(undefined2 *)(unaff_BP + -100);
    uStack_18 = *(undefined2 *)(unaff_BP + -0x66);
    uStack_1a = *(undefined2 *)(unaff_BP + -0x68);
    uStack_1c = *(undefined2 *)(unaff_BP + -0x6a);
    uStack_1e = *(undefined2 *)(unaff_BP + -0x48);
    uStack_20 = *(undefined2 *)(unaff_BP + -0x4a);
    uStack_22 = *(undefined2 *)(unaff_BP + -0x4c);
    uStack_26 = 0x32b2;
    uStack_28 = 0x820;
    FUN_32b2_6d14();
    uStack_2e = 0x32b2;
    uStack_30 = 0x82a;
    FUN_32b2_6eb1();
    uStack_2e = 0x32b2;
    uStack_30 = 0x833;
    FUN_32b2_6d14();
    uStack_36 = 0x32b2;
    FUN_32b2_6eb1();
    uStack_36 = 0;
    FUN_3ab8_5089(0x32b2);
    uVar13 = (undefined1 *)0xffc9 < &uStack_36;
    uVar14 = &stack0x0000 == (undefined1 *)0x0;
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x84f;
    FUN_32b2_6cc6();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x857;
    FUN_32b2_6cc6();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x85c;
    FUN_32b2_7191();
    if ((bool)uVar14) {
      uVar7 = *(undefined2 *)(unaff_BP + 8);
      *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
      *(undefined2 *)(unaff_BP + -0x60) = uVar7;
    }
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x872;
    FUN_32b2_6cc6();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x87a;
    FUN_32b2_6cc6();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x87f;
    FUN_32b2_7191();
    if ((bool)uVar14) {
      uVar7 = *(undefined2 *)(unaff_BP + 0xc);
      *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
      *(undefined2 *)(unaff_BP + -0x88) = uVar7;
    }
    uVar7 = *(undefined2 *)(unaff_BP + -0x60);
    puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3c);
    *puVar11 = *(undefined2 *)(unaff_BP + -0x62);
    puVar11[1] = uVar7;
    uVar7 = *(undefined2 *)(unaff_BP + -0x88);
    puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x3e);
    *puVar11 = *(undefined2 *)(unaff_BP + -0x8a);
    puVar11[1] = uVar7;
    uVar7 = *(undefined2 *)(unaff_BP + -0x60);
    puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
    *puVar11 = *(undefined2 *)(unaff_BP + -0x62);
    puVar11[1] = uVar7;
    uVar7 = *(undefined2 *)(unaff_BP + -0x88);
    puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
    *puVar11 = *(undefined2 *)(unaff_BP + -0x8a);
    puVar11[1] = uVar7;
    piVar1 = (int *)(unaff_BP + -0x36);
    *piVar1 = *piVar1 + 1;
    uVar14 = *piVar1 == 0;
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x8d7;
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x8e0;
    FUN_32b2_6d14();
    iStack_2 = 0x32b2;
    uStack_6._2_2_ = 0x8e5;
    FUN_32b2_7191();
    if (!(bool)uVar13 && !(bool)uVar14) {
      iStack_2 = *(undefined2 *)(unaff_BP + -0xb6);
      uStack_6._2_2_ = *(undefined2 *)(unaff_BP + -0xb8);
      uStack_6._0_2_ = *(undefined2 *)(unaff_BP + -0xba);
      uStack_8 = *(undefined2 *)(unaff_BP + -0xbc);
      uStack_a = 0x32b2;
      uStack_c = 0x8ff;
      FUN_32b2_7592();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x909;
      FUN_32b2_6d14();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x911;
      FUN_32b2_7154();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x916;
      FUN_32b2_6fd6();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x91e;
      FUN_32b2_6d14();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x927;
      FUN_32b2_710c();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x92c;
      FUN_32b2_7182();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x935;
      FUN_32b2_6e99();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x93d;
      FUN_32b2_710c();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x945;
      FUN_32b2_7154();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x94e;
      FUN_32b2_6e99();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x957;
      FUN_32b2_6eb1();
      uStack_6._2_2_ = unaff_BP + -0x8a;
      uStack_6._0_2_ = unaff_BP + -0x62;
      uStack_8 = 0x32b2;
      uStack_a = 0x969;
      FUN_32b2_6cc6();
      uStack_8 = 0x32b2;
      uStack_a = 0x96e;
      FUN_32b2_7258();
      uStack_10 = 0x32b2;
      uStack_12 = 0x978;
      FUN_32b2_6eb1();
      uStack_10 = 0x32b2;
      uStack_12 = 0x980;
      FUN_32b2_6cc6();
      uStack_10 = 0x32b2;
      uStack_12 = 0x985;
      FUN_32b2_7258();
      uStack_18 = 0x32b2;
      uStack_1a = 0x98f;
      FUN_32b2_6eb1();
      uStack_18 = *(undefined2 *)(unaff_BP + -100);
      uStack_1a = *(undefined2 *)(unaff_BP + -0x66);
      uStack_1c = *(undefined2 *)(unaff_BP + -0x68);
      uStack_1e = *(undefined2 *)(unaff_BP + -0x6a);
      uStack_20 = *(undefined2 *)(unaff_BP + -0x48);
      uStack_22 = *(undefined2 *)(unaff_BP + -0x4a);
      uStack_26 = *(undefined2 *)(unaff_BP + -0x4e);
      uStack_28 = 0x32b2;
      uStack_2a = 0x9b0;
      FUN_32b2_6d14();
      uStack_30 = 0x32b2;
      uStack_32 = 0x9ba;
      FUN_32b2_6eb1();
      uStack_30 = 0x32b2;
      uStack_32 = 0x9c3;
      FUN_32b2_6d14();
      FUN_32b2_6eb1();
      FUN_3ab8_5089(0x32b2,0);
      uVar13 = &stack0x0000 == (undefined1 *)0x2;
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x9df;
      FUN_32b2_6cc6();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x9e7;
      FUN_32b2_6cc6();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0x9ec;
      FUN_32b2_7191();
      if ((bool)uVar13) {
        uVar7 = *(undefined2 *)(unaff_BP + 8);
        *(undefined2 *)(unaff_BP + -0x62) = *(undefined2 *)(unaff_BP + 6);
        *(undefined2 *)(unaff_BP + -0x60) = uVar7;
      }
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0xa02;
      FUN_32b2_6cc6();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0xa0a;
      FUN_32b2_6cc6();
      uStack_6._2_2_ = 0x32b2;
      uStack_6._0_2_ = 0xa0f;
      FUN_32b2_7191();
      if ((bool)uVar13) {
        uVar7 = *(undefined2 *)(unaff_BP + 0xc);
        *(undefined2 *)(unaff_BP + -0x8a) = *(undefined2 *)(unaff_BP + 10);
        *(undefined2 *)(unaff_BP + -0x88) = uVar7;
      }
      uVar7 = *(undefined2 *)(unaff_BP + -0x60);
      puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x40);
      *puVar11 = *(undefined2 *)(unaff_BP + -0x62);
      puVar11[1] = uVar7;
      uVar7 = *(undefined2 *)(unaff_BP + -0x88);
      puVar11 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x42);
      *puVar11 = *(undefined2 *)(unaff_BP + -0x8a);
      puVar11[1] = uVar7;
      *(int *)(unaff_BP + -0x36) = *(int *)(unaff_BP + -0x36) + 1;
    }
    uVar7 = *(undefined2 *)(unaff_BP + -0x36);
  }
  return uVar7;
}



/* 3ab8:566c  FUN_3ab8_566c  1058 bytes, 1 callers */

void __cdecl16far FUN_3ab8_566c(void)

{
  code *pcVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 unaff_DS;
  undefined1 local_e0 [4];
  undefined2 *local_dc;
  undefined1 local_da [4];
  undefined1 local_d6 [20];
  undefined2 local_c2;
  undefined2 local_c0;
  undefined1 local_be [20];
  undefined1 local_aa [30];
  undefined1 local_8c [20];
  undefined2 *local_78;
  undefined1 local_76 [90];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *local_8;
  undefined1 *local_6;
  undefined1 **local_4;
  
  local_4 = (undefined1 **)0x3ab8;
  local_6 = (undefined1 *)0x1f7;
  FUN_21f2_0ebc();
  local_c2 = 1;
  local_c0 = 0;
  local_4 = (undefined1 **)0x796;
  local_6 = local_8c;
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x211;
  FUN_21f2_3454();
  local_4 = (undefined1 **)0x79c;
  local_6 = local_8c;
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x221;
  FUN_21f2_2d26();
  local_4 = (undefined1 **)0x4775;
  local_6 = local_aa;
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x231;
  FUN_21f2_3454();
  local_4 = (undefined1 **)local_8c;
  local_6 = local_aa;
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x242;
  FUN_21f2_2d26();
  local_4 = (undefined1 **)0x477b;
  local_6 = local_be;
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x252;
  FUN_21f2_3454();
  local_4 = (undefined1 **)0x4782;
  local_6 = local_d6;
  local_8 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x262;
  FUN_21f2_3454();
  local_4 = (undefined1 **)0x7a4;
  local_6 = local_d6;
  local_8 = (undefined1 *)0x22b2;
  puVar4 = (undefined1 *)0x22b2;
  puStack_a = (undefined1 *)0x272;
  FUN_21f2_2d26();
LAB_3ab8_56f4:
  do {
    while( true ) {
      if (*(int *)0x158 != 0) {
        return;
      }
      local_4 = (undefined1 **)0x478b;
      local_6 = local_76;
      puStack_a = (undefined1 *)0x28b;
      local_8 = puVar4;
      FUN_21f2_3454();
      local_4 = (undefined1 **)local_8c;
      local_6 = local_76;
      local_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x29b;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x478d;
      local_6 = local_76;
      local_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x2aa;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)local_aa;
      local_6 = local_76;
      local_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x2ba;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x4793;
      local_6 = local_76;
      local_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x2c9;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)local_be;
      local_6 = local_76;
      local_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x2d9;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x4799;
      local_6 = local_76;
      local_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x2e8;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)local_d6;
      local_6 = local_76;
      local_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x2f8;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x479c;
      local_6 = local_76;
      local_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x307;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)local_76;
      local_6 = (undefined1 *)0x4;
      local_8 = (undefined1 *)0x22b2;
      uVar5 = 0x1bb4;
      puStack_a = (undefined1 *)0x316;
      FUN_1def_07a4();
      *(undefined2 *)0xc2c = 1;
      if (0xb < *(byte *)0x123) {
        *(undefined2 *)0xc2c = 0;
        local_4 = (undefined1 **)0x479e;
        local_6 = local_76;
        local_8 = (undefined1 *)0x1bb4;
        uVar5 = 0x22b2;
        puStack_a = (undefined1 *)0x338;
        FUN_21f2_2d26();
      }
      local_4 = &local_8;
      local_6 = local_e0;
      local_8 = local_da;
      puStack_a = local_76;
      uStack_c = 0;
      puVar4 = (undefined1 *)0x1bb4;
      uStack_10 = 0x354;
      uStack_e = uVar5;
      local_dc = (undefined2 *)FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if ((*(int *)0x158 != 0) || (local_dc == (undefined2 *)0x14)) {
        local_4 = (undefined1 **)0x0;
        local_6 = (undefined1 *)0x1bb4;
        local_8 = (undefined1 *)0x375;
        func_0x00008095();
        return;
      }
      if (local_dc != (undefined2 *)0xffff) break;
LAB_3ab8_57fe:
      local_4 = (undefined1 **)0x0;
      local_6 = (undefined1 *)0x1bb4;
      puVar4 = (undefined1 *)0x7a6;
      local_8 = (undefined1 *)0x386;
      func_0x00008095();
    }
    if ((local_dc == (undefined2 *)0x1) || (local_8 == (undefined1 *)0x1)) {
      local_78 = (undefined2 *)0x0;
      puVar2 = local_78;
      break;
    }
    if ((local_dc == (undefined2 *)0x2) || (local_8 == (undefined1 *)0x2)) {
      local_78 = (undefined2 *)0x1;
      puVar2 = local_78;
      break;
    }
    puVar2 = local_dc;
  } while (((local_dc != (undefined2 *)0x3) && (puVar2 = local_dc, local_dc != (undefined2 *)0x4))
          && (((int)local_dc < 5 || (puVar2 = local_dc, 7 < (int)local_dc))));
  do {
    local_78 = puVar2;
    local_6 = (undefined1 *)0x0;
    puVar6 = puVar4;
    if (4 < (int)local_78) {
      puVar6 = (undefined1 *)0x7a6;
      local_6 = (undefined1 *)0x3ae;
      local_4 = (undefined1 **)puVar4;
      iVar3 = func_0x00007a6a();
      if (iVar3 != 0) {
        local_6 = (undefined1 *)0xa;
      }
    }
    if (local_6 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x885;
      local_6 = (undefined1 *)0x3c5;
      local_4 = (undefined1 **)puVar6;
      func_0x0000c3ca();
      uStack_18 = *(undefined2 *)0x9cf6;
      local_6 = (undefined1 *)*(undefined2 *)0x9cf4;
      local_8 = (undefined1 *)*(undefined2 *)0x9cf2;
      puStack_a = (undefined1 *)*(undefined2 *)0x9cf0;
      uStack_c = *(undefined2 *)0x9cf6;
      uStack_e = *(undefined2 *)0x9cf4;
      uStack_10 = *(undefined2 *)0x9cf2;
      uStack_12 = *(undefined2 *)0x9cf0;
      uStack_14 = 0;
      uStack_16 = 0x7aa;
      uStack_1a = 1;
      uStack_1c = 0;
      pcVar1 = (code *)swi(0x3f);
      local_4 = (undefined1 **)uStack_18;
      iVar3 = (*pcVar1)();
      if (iVar3 == -1) goto LAB_3ab8_56f4;
      puVar6 = puVar4;
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    do {
      puVar4 = puVar6;
      if (local_78 == (undefined2 *)0x0) {
        local_4 = (undefined1 **)local_8c;
        local_6 = local_76;
        puVar4 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0x45f;
        local_8 = puVar6;
        func_0x00024c86();
      }
      puVar6 = puVar4;
      if (local_78 == (undefined2 *)0x1) {
        local_4 = (undefined1 **)local_aa;
        local_6 = local_76;
        puVar6 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0x475;
        local_8 = puVar4;
        func_0x00024c86();
      }
      if ((local_78 == (undefined2 *)0x3) || (puVar4 = puVar6, 4 < (int)local_78)) {
        local_4 = (undefined1 **)local_be;
        local_6 = local_76;
        puVar4 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0x491;
        local_8 = puVar6;
        func_0x00024c86();
      }
      puVar6 = puVar4;
      if (local_78 == (undefined2 *)0x4) {
        local_4 = (undefined1 **)local_d6;
        local_6 = local_76;
        puVar6 = (undefined1 *)0x22b2;
        puStack_a = (undefined1 *)0x4a7;
        local_8 = puVar4;
        func_0x00024c86();
      }
      local_4 = (undefined1 **)0x47a5;
      local_6 = local_76;
      puStack_a = (undefined1 *)0x4b6;
      local_8 = puVar6;
      FUN_21f2_2d26();
      local_4 = (undefined1 **)0x522;
      local_6 = local_76;
      local_8 = (undefined1 *)0x22b2;
      puStack_a = (undefined1 *)0x4c5;
      FUN_21f2_2d26();
      local_4 = &local_8;
      local_6 = local_e0;
      local_8 = local_da;
      puStack_a = local_76;
      uStack_c = 1;
      uStack_e = 0x22b2;
      puVar6 = (undefined1 *)0x1bb4;
      uStack_10 = 0x4e2;
      local_dc = (undefined2 *)FUN_1def_0904();
      if (*(int *)0x158 != 0) {
        return;
      }
      if ((local_dc == (undefined2 *)0x1) || (local_8 == (undefined1 *)0x1)) {
        local_4 = (undefined1 **)0x0;
        local_6 = (undefined1 *)0x1bb4;
        local_8 = (undefined1 *)0x509;
        func_0x0000daa6();
        local_4 = (undefined1 **)0x885;
        puVar4 = (undefined1 *)0x885;
        local_6 = (undefined1 *)0x50f;
        func_0x0000c3ca();
        if ((*(char *)0x7e != '\0') && ((*(char *)0xd14 != '\x04' && (1 < *(byte *)0x84)))) {
          local_4 = (undefined1 **)0x885;
          local_6 = (undefined1 *)0x529;
          func_0x0000c3ca();
          local_4 = (undefined1 **)0xb2fe;
          local_6 = (undefined1 *)0x90;
          local_8 = local_76;
          puStack_a = (undefined1 *)0x885;
          puVar4 = (undefined1 *)0x11f2;
          uStack_c = 0x53a;
          func_0x0001263c();
          local_4 = (undefined1 **)0x90;
          local_6 = (undefined1 *)0xbefe;
          local_8 = local_76;
          puStack_a = (undefined1 *)0x1;
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)();
          *(undefined1 *)0xd14 = 2;
        }
        local_4 = (undefined1 **)0x1;
        local_6 = (undefined1 *)0x12;
        puStack_a = (undefined1 *)0x567;
        local_8 = puVar4;
        FUN_1000_0599();
        local_4 = (undefined1 **)0x7b4;
        local_6 = (undefined1 *)0xdef;
        local_8 = (undefined1 *)0x572;
        func_0x00012276();
        local_4 = (undefined1 **)0x1;
        local_6 = (undefined1 *)0x1e;
        local_8 = (undefined1 *)0x11f2;
        puStack_a = (undefined1 *)0x580;
        FUN_1000_0599();
        local_4 = (undefined1 **)0x47a8;
        local_6 = (undefined1 *)0xdef;
        local_8 = (undefined1 *)0x58b;
        func_0x00012276();
        local_4 = (undefined1 **)0x1;
        local_6 = (undefined1 *)0x36;
        local_8 = (undefined1 *)0x11f2;
        puStack_a = (undefined1 *)0x599;
        FUN_1000_0599();
        local_4 = (undefined1 **)0x8a6;
        local_6 = (undefined1 *)0xdef;
        local_8 = (undefined1 *)0x5a4;
        func_0x00012276();
        if ((local_78 == (undefined2 *)0x0) || (local_78 == (undefined2 *)0x1)) {
          local_4 = (undefined1 **)local_78;
          local_6 = (undefined1 *)0x11f2;
          local_8 = (undefined1 *)0x5b8;
          FUN_4375_b43a();
        }
        if (local_78 == (undefined2 *)0x3) {
          local_4 = (undefined1 **)&local_c2;
          local_6 = (undefined1 *)0x11f2;
          local_8 = (undefined1 *)0x5c8;
          FUN_4375_c445();
        }
        if (local_78 == (undefined2 *)0x4) {
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)();
        }
        if (4 < (int)local_78) {
          local_4 = (undefined1 **)((int)local_6 + (int)local_78);
          pcVar1 = (code *)swi(0x3f);
          (*pcVar1)();
        }
        *(undefined1 *)0xd14 = 2;
        local_4 = (undefined1 **)0x0;
        local_6 = (undefined1 *)0x11f2;
        local_8 = (undefined1 *)0x5f4;
        func_0x00008095();
        local_4 = (undefined1 **)0x0;
        local_6 = (undefined1 *)0x7a6;
        local_8 = (undefined1 *)0x5fd;
        func_0x0001470b();
        *(undefined2 *)0xbc0 = 1;
        local_4 = (undefined1 **)0xb5b6;
        local_6 = (undefined1 *)0x11f2;
        puVar4 = (undefined1 *)0x22b2;
        local_8 = (undefined1 *)0x60d;
        func_0x000257c0();
        goto LAB_3ab8_56f4;
      }
      if ((local_dc == (undefined2 *)0x2) || (local_8 == (undefined1 *)0x2)) goto LAB_3ab8_57fe;
    } while (local_dc != (undefined2 *)0xffff);
    local_4 = (undefined1 **)0x0;
    local_6 = (undefined1 *)0x1bb4;
    puVar4 = (undefined1 *)0x7a6;
    local_8 = (undefined1 *)0x62e;
    func_0x00008095();
    puVar2 = local_78;
  } while( true );
}



/* 3ab8:5ab6  FUN_3ab8_5ab6  301 bytes, 1 callers */

void __cdecl16far FUN_3ab8_5ab6(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 auStack_1e [3];
  undefined2 local_18 [6];
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  FUN_21f2_0ebc();
  *(undefined2 *)0xbc0 = 1;
  uStack_a = 0x22b2;
  uStack_c = 0x651;
  func_0x0000daa6();
  if (-1 < param_1) {
    if (param_1 == 1) {
      puVar6 = local_18;
      puVar5 = (undefined2 *)&stack0x0008;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      puVar5 = auStack_1e;
      puVar6 = local_18;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      func_0x00018396(0x885);
      puVar6 = (undefined2 *)&stack0x0008;
    }
    else {
      puVar6 = local_18;
      puVar5 = (undefined2 *)&stack0x001e;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      puVar5 = auStack_1e;
      puVar6 = local_18;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      puVar4 = auStack_1e;
      func_0x00018396(0x885);
      puVar6 = local_18;
      puVar5 = (undefined2 *)&stack0x001e;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      puVar6 = local_18;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      puVar6 = auStack_1e;
      func_0x00018396(0x11f2);
      if (param_1 != 2) {
        return;
      }
      puVar5 = local_18;
      puVar4 = (undefined2 *)&stack0x0034;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      puVar5 = local_18;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      func_0x00018396(0x11f2);
      puVar6 = (undefined2 *)&stack0x0034;
    }
    puVar5 = local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    puVar5 = auStack_1e;
    puVar6 = local_18;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    func_0x00018396(0x11f2);
  }
  return;
}



/* 3ab8:5be3  FUN_3ab8_5be3  7700 bytes, 1 callers */

/* WARNING: Removing unreachable block (ram,0x00041172) */
/* WARNING: Removing unreachable block (ram,0x00040a14) */
/* WARNING: Removing unreachable block (ram,0x000408e6) */
/* WARNING: Removing unreachable block (ram,0x00040b88) */
/* WARNING: Removing unreachable block (ram,0x00040d73) */
/* WARNING: Removing unreachable block (ram,0x00041866) */
/* WARNING: Type propagation algorithm not settling */

undefined2 FUN_3ab8_5be3(undefined2 param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  undefined2 unaff_SI;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 uVar13;
  undefined2 *puVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  long lVar20;
  undefined2 *puVar21;
  undefined4 uVar22;
  undefined2 local_202;
  undefined2 local_200;
  int local_1fe;
  undefined2 local_1fc [2];
  undefined1 local_1f8 [40];
  int local_1d0;
  uint local_1ce;
  int local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  undefined2 local_1c6;
  undefined2 local_1c4;
  int local_1c2;
  int local_1c0;
  undefined2 local_1be;
  undefined2 local_1bc;
  undefined2 local_1ba;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined2 local_1b4;
  undefined2 local_1b2;
  undefined2 local_1b0;
  uint local_1ae;
  undefined4 local_1ac;
  undefined2 local_1a8;
  undefined2 local_1a6;
  undefined2 local_1a4;
  undefined2 local_1a2;
  undefined2 local_1a0;
  undefined2 local_19e;
  undefined2 local_19c;
  undefined2 local_19a;
  int local_198 [50];
  undefined4 local_134;
  undefined4 local_130;
  uint local_12c;
  uint local_12a;
  undefined2 local_124;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  int local_118;
  undefined4 local_116;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  undefined2 local_102;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined2 local_fa;
  uint local_f8;
  undefined2 local_f6 [11];
  uint local_e0;
  undefined2 local_de [25];
  undefined2 local_ac [11];
  int local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  byte local_84;
  byte local_83;
  byte local_82;
  byte local_80;
  undefined2 local_7e [11];
  undefined2 *local_68;
  int local_64 [10];
  undefined2 uStack_50;
  undefined2 local_4e;
  int iStack_4c;
  undefined2 uStack_4a;
  undefined2 auStack_48 [7];
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 auStack_36 [2];
  undefined2 auStack_32 [3];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  int local_26;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  int *piStack_10;
  int *piStack_e;
  int *piStack_c;
  
  FUN_21f2_0ebc();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0x77d;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0x78c;
  FUN_21f2_3454();
  piStack_c = (int *)local_1f8;
  piStack_e = (int *)0x22b2;
  piStack_10 = (int *)0x7a0;
  FUN_21f2_3454();
  piStack_c = local_de;
  piStack_e = (int *)0x22b2;
  puVar12 = (undefined2 *)0x22b2;
  piStack_10 = (int *)0x7b5;
  FUN_21f2_3454();
  local_fe = *(undefined2 *)0xb76a;
  local_fc = *(undefined2 *)0xb76c;
  local_1b2 = *(undefined2 *)0xb784;
  local_1b0 = *(undefined2 *)0xb786;
  local_96 = 0;
  local_fa = 0;
  local_1c2 = param_2;
  local_130 = CONCAT22(local_130._2_2_,(undefined2)local_130);
  local_116 = CONCAT22(local_116._2_2_,(undefined2)local_116);
  local_1ac = CONCAT22(local_1ac._2_2_,(undefined2)local_1ac);
  local_134 = CONCAT22(local_134._2_2_,(uint)local_134);
  if (99 < param_2) {
    local_1c2 = param_2 + -100;
    local_130 = CONCAT22(local_130._2_2_,(undefined2)local_130);
    local_116 = CONCAT22(local_116._2_2_,(undefined2)local_116);
    local_1ac = CONCAT22(local_1ac._2_2_,(undefined2)local_1ac);
    local_134 = CONCAT22(local_134._2_2_,(uint)local_134);
  }
LAB_3ab8_5c73:
  if (-1 < param_2) {
    while( true ) {
      if (local_1c2 != 1) goto LAB_3ab8_5d83;
      *(undefined2 *)0xbc0 = 1;
      piStack_e = (int *)0x81a;
      piStack_c = puVar12;
      FUN_21f2_3454();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x82a;
      FUN_21f2_2d26();
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x83a;
      FUN_21f2_2d26();
      *(uint *)0xc2c = (uint)(param_2 < 0x65);
      piStack_c = local_1fc;
      piStack_e = local_198;
      piStack_10 = (int *)(uint)(100 < param_2);
      local_12 = 0x22b2;
      puVar12 = (undefined2 *)0x1bb4;
      local_14 = 0x873;
      local_1fe = FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      if (((*(int *)0x158 != 0) || (local_1fe == 0x14)) || (local_1fe == -1)) break;
      if (local_118 != 0) {
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x8b8;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x8c1;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x8c6;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x8d0;
        func_0x000299d1();
        local_18[0] = 0x22b2;
        local_1a = 0x8d5;
        lVar20 = FUN_13bf_39a0();
        local_116 = lVar20;
        if (0 < lVar20) {
          piStack_c = (undefined2 *)0x11f2;
          puVar12 = (undefined2 *)0x0;
          piStack_e = (int *)0x8f1;
          puVar21 = (undefined2 *)func_0x0000013f();
          puVar11 = (undefined2 *)puVar21;
          puVar14 = local_7e;
          iVar10 = 0xb;
          do {
            if (iVar10 == 0) goto LAB_3ab8_5d83;
            iVar10 = iVar10 + -1;
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            puVar5 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar4 = *puVar5;
          } while( true );
        }
        puVar12 = (undefined2 *)0x11f2;
        piStack_c = (undefined2 *)0x933;
        func_0x00012276();
      }
    }
    return 0;
  }
LAB_3ab8_6026:
  func_0x00007ac6();
  puVar12 = (undefined2 *)0x7a6;
  func_0x00007b71();
  do {
    do {
      while( true ) {
        do {
          local_1d0 = 0;
          piStack_c = puVar12;
          if (local_96 == 0) {
            piStack_e = (int *)0xbfa;
            func_0x00024c86();
          }
          else {
            piStack_e = (int *)0xbcb;
            func_0x00024c86();
            piStack_c = (int *)0x22b2;
            piStack_e = (int *)0xbdc;
            FUN_21f2_2d26();
          }
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc0a;
          FUN_21f2_2d26();
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc1a;
          FUN_21f2_2d26();
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc2a;
          FUN_21f2_2d26();
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc3a;
          FUN_21f2_2d26();
          piStack_c = (int *)0x22b2;
          piStack_e = (int *)0xc4a;
          FUN_21f2_2d26();
          if (local_96 == 0) {
            puVar14 = &local_1c;
            puVar12 = local_f6;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar5 = puVar14;
              puVar14 = puVar14 + 1;
              puVar21 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar5 = *puVar21;
            }
            puVar14 = auStack_32;
            puVar12 = local_ac;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar5 = puVar14;
              puVar14 = puVar14 + 1;
              puVar21 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar5 = *puVar21;
            }
            puVar14 = auStack_48;
            puVar12 = local_7e;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar5 = puVar14;
              puVar14 = puVar14 + 1;
              puVar21 = puVar12;
              puVar12 = puVar12 + 1;
              *puVar5 = *puVar21;
            }
            uStack_4a = 1;
            iStack_4c = local_1c2;
            local_4e = 0x22b2;
            uStack_50 = 0xc8a;
            FUN_3ab8_5ab6();
          }
          piStack_c = &local_202;
          piStack_e = local_198;
          piStack_10 = (int *)0x270f;
          local_12 = 0x22b2;
          puVar12 = (undefined2 *)0x1bb4;
          local_14 = 0xca9;
          local_1fe = FUN_1def_0904();
          if (local_96 == 0) {
            puVar11 = &local_1c;
            puVar14 = local_f6;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar5 = puVar11;
              puVar11 = puVar11 + 1;
              puVar21 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar5 = *puVar21;
            }
            puVar11 = auStack_32;
            puVar14 = local_ac;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar5 = puVar11;
              puVar11 = puVar11 + 1;
              puVar21 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar5 = *puVar21;
            }
            puVar11 = auStack_48;
            puVar14 = local_7e;
            for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
              puVar5 = puVar11;
              puVar11 = puVar11 + 1;
              puVar21 = puVar14;
              puVar14 = puVar14 + 1;
              *puVar5 = *puVar21;
            }
            uStack_4a = 0;
            iStack_4c = local_1c2;
            local_4e = 0x1bb4;
            uStack_50 = 0xced;
            FUN_3ab8_5ab6();
          }
          if (*(int *)0x158 != 0) {
            return 0;
          }
          if (local_1fe == -1) {
            if ((local_96 != 0) || (param_2 < 0)) {
              return 0xffff;
            }
            if (local_1c2 == 1) goto LAB_3ab8_5c73;
            goto LAB_3ab8_5d83;
          }
        } while (local_118 == 0);
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        local_12 = 0xd42;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0xd4b;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0xd50;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0xd5a;
        func_0x000299d1();
        local_18[0] = 0x22b2;
        local_1a = 0xd5f;
        lVar20 = FUN_13bf_39a0();
        local_130 = lVar20;
        if (0 < lVar20) break;
        puVar12 = (undefined2 *)0x11f2;
        piStack_c = (int *)0x10fe;
        func_0x00012276();
      }
      piStack_c = (int *)0x11f2;
      piStack_e = (int *)0xd81;
      func_0x0000013f();
      puVar12 = (undefined2 *)0x885;
      piStack_c = (int *)0xd93;
      iVar10 = func_0x00008854();
    } while (iVar10 != 0);
    piStack_c = (int *)0x885;
    piStack_e = (int *)0xda8;
    puVar21 = (undefined2 *)func_0x0000013f();
    puVar14 = (undefined2 *)puVar21;
    puVar12 = &local_94;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar4 = puVar12;
      puVar12 = puVar12 + 1;
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar4 = *puVar5;
    }
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    local_12 = 0xdd3;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    local_12 = 0xddc;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0xde1;
    func_0x00029d78();
    local_18[0] = 0x22b2;
    local_1a = 0xdeb;
    func_0x000299d1();
    local_18[0] = 0x22b2;
    local_1a = 0xdf4;
    func_0x000297e6();
    local_18[0] = 0x22b2;
    local_1a = 0xdf9;
    func_0x00029d78();
    local_20 = 0x22b2;
    func_0x000299d1();
    local_20 = 0x22b2;
    func_0x000297e6();
    local_20 = 0x22b2;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    uStack_2a = 0xe1b;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    puVar12 = (undefined2 *)0x1bb4;
    uStack_2a = 0xe20;
    iVar10 = FUN_1def_043a();
  } while (iVar10 == 0);
  piStack_c = (int *)*(undefined2 *)0x9cf2;
  piStack_e = (int *)*(undefined2 *)0x9cf0;
  piStack_10 = (int *)0x1bb4;
  local_12 = 0xe42;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  local_12 = 0xe47;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  local_1a = 0xe51;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  local_1a = 0xe5a;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  local_1a = 0xe5f;
  func_0x00029d78();
  local_20 = 0x22b2;
  func_0x000299d1();
  local_20 = 1;
  local_24 = 0xe72;
  FUN_1def_05d1();
  piStack_10 = (int *)0x1bb4;
  local_12 = 0xe7c;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  local_12 = 0xe85;
  func_0x0002996b();
  piStack_10 = (int *)0x22b2;
  local_12 = 0xe8a;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  local_1a = 0xe94;
  func_0x000299d1();
  local_18[0] = 0;
  local_1a = 0x22b2;
  local_1c = 0xe9c;
  puVar12 = (undefined2 *)FUN_1def_05d1();
  local_202 = *puVar12;
  local_200 = puVar12[1];
  piStack_c = (int *)*(undefined2 *)0x9cf2;
  piStack_e = (int *)*(undefined2 *)0x9cf0;
  piStack_10 = (int *)0x1bb4;
  local_12 = 0xec7;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  local_1a = 0xed1;
  func_0x000299d1();
  local_18[0] = 0;
  local_1a = 0x22b2;
  local_1c = 0xed9;
  func_0x0001e558();
  if (local_118 == 2) {
    local_1d0 = 1;
  }
  piStack_c = (int *)0x1bb4;
  piStack_e = (int *)0xf03;
  uVar22 = func_0x0000013f();
  pbVar1 = (byte *)((int)uVar22 + 0x14);
  *pbVar1 = *pbVar1 | 2;
  piStack_c = (int *)0x0;
  piStack_e = (int *)0xf1b;
  uVar22 = func_0x0000013f();
  local_f8 = (uint)*(byte *)((int)uVar22 + 0x11);
  piStack_c = (int *)0x0;
  piStack_e = (int *)0xf38;
  uVar22 = func_0x0000013f();
  local_e0 = (uint)*(byte *)((int)uVar22 + 0x10);
  piStack_c = (int *)0x0;
  piStack_e = (int *)0xf55;
  uVar22 = func_0x0000013f();
  local_1ce = (uint)*(byte *)((int)uVar22 + 0x12);
  *(undefined2 *)0xbc2 = 1;
  piStack_c = (int *)0xf73;
  func_0x0000daa6();
  piStack_c = (int *)0x1;
  piStack_e = (int *)0x885;
  uVar13 = 0x7a6;
  piStack_10 = (int *)0xf85;
  func_0x00007d9b();
LAB_3ab8_6408:
  piStack_e = (int *)0xf97;
  piStack_c = (int *)uVar13;
  func_0x00024c86();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xfa7;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0xfb7;
  FUN_21f2_2d26();
  piStack_c = (int *)0xfc1;
  func_0x0000daa6();
  piStack_c = (int *)0xfca;
  func_0x00008095();
  piStack_c = (int *)0x1;
  piStack_e = (int *)0x7a6;
  piStack_10 = (int *)0xfdc;
  func_0x00007d9b();
  if (local_96 == 0) {
    puVar14 = &local_1c;
    puVar12 = local_f6;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar21 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar5 = *puVar21;
    }
    puVar14 = auStack_32;
    puVar12 = local_ac;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar21 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar5 = *puVar21;
    }
    puVar14 = auStack_48;
    puVar12 = local_7e;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar21 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar5 = *puVar21;
    }
    uStack_4a = 1;
    iStack_4c = local_1c2;
    local_4e = 0x7a6;
    uStack_50 = 0x101d;
    FUN_3ab8_5ab6();
  }
  piStack_c = (int *)0x7a6;
  piStack_e = (int *)0x102a;
  FUN_1000_0599();
  func_0x00010526();
  piStack_c = (int *)0xdef;
  piStack_e = (int *)0x103b;
  FUN_1000_0599();
  piStack_c = (int *)0x1046;
  func_0x00012276();
  piStack_c = (int *)0x11f2;
  uVar13 = 0x11f2;
  piStack_e = (int *)0x1055;
  func_0x00012276();
  local_1c0 = -9999;
  local_1cc = 0;
LAB_3ab8_64e3:
  *(undefined2 *)0xbc2 = 1;
  *(undefined2 *)0xbc0 = 1;
  piStack_c = (int *)&stack0xfffa;
  piStack_e = local_64;
  piStack_10 = &local_26;
  local_14 = 0x1086;
  local_12 = uVar13;
  local_1fe = func_0x00006608();
  if (((local_1fe != 0) || (local_118 != 0)) || (uVar13 = 0x3bf, *(int *)0x158 != 0)) {
    FUN_1885_2ec3();
    uVar13 = 0x7a6;
    piStack_c = (undefined2 *)0x10aa;
    func_0x00008095();
    if (local_96 == 0) {
      puVar14 = &local_1c;
      puVar12 = local_f6;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar21 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar5 = *puVar21;
      }
      puVar14 = auStack_32;
      puVar12 = local_ac;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar21 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar5 = *puVar21;
      }
      puVar14 = auStack_48;
      puVar12 = local_7e;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar21 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar5 = *puVar21;
      }
      uStack_4a = 0;
      iStack_4c = local_1c2;
      local_4e = 0x7a6;
      uStack_50 = 0x10e8;
      FUN_3ab8_5ab6();
    }
  }
  if (*(int *)0x158 != 0) {
    return 0;
  }
  if (local_1fe == 99) goto LAB_3ab8_6408;
  if (local_1fe == -1) goto LAB_3ab8_6026;
  if (local_118 == 0) {
    if (local_1fe == 0) goto LAB_3ab8_672d;
    goto LAB_3ab8_6408;
  }
  FUN_1885_2ec3();
  local_1c0 = -9999;
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1142;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x114a;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x114f;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  local_1a = 0x1159;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  local_1a = 0x115e;
  lVar20 = FUN_13bf_39a0();
  local_1ac = lVar20;
  if (lVar20 < 1) {
    uVar13 = 0x11f2;
    piStack_c = (int *)0x129f;
    func_0x00012276();
    goto LAB_3ab8_6408;
  }
  piStack_c = (int *)0x11f2;
  piStack_e = (int *)0x1180;
  func_0x0000013f();
  uVar13 = 0x885;
  piStack_c = (int *)0x1192;
  iVar10 = func_0x00008854();
  if (iVar10 != 0) goto LAB_3ab8_6408;
  func_0x0000c3ca();
  piStack_c = (int *)0x11a7;
  func_0x0000daa6();
  piStack_c = (int *)0x11b0;
  func_0x00008095();
  piStack_c = (int *)0x1;
  piStack_e = (int *)0x7a6;
  piStack_10 = (int *)0x11c2;
  func_0x00007d9b();
  piStack_c = (int *)0x7a6;
  piStack_e = (int *)0x11d2;
  puVar21 = (undefined2 *)func_0x0000013f();
  puVar14 = (undefined2 *)puVar21;
  puVar12 = &local_94;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar4 = puVar12;
    puVar12 = puVar12 + 1;
    puVar5 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar4 = *puVar5;
  }
  bVar9 = local_80 | 2;
  if ((local_1d0 != 0) &&
     (((local_83 != local_f8 || (local_84 != local_e0)) || (local_82 != local_1ce)))) {
    bVar9 = local_80 & 0xfd;
  }
  local_80 = bVar9;
  if ((local_80 & 2) != 0) {
    piStack_c = (int *)0x0;
    piStack_e = (int *)0x1226;
    uVar22 = func_0x0000013f();
    pbVar1 = (byte *)((int)uVar22 + 0x14);
    *pbVar1 = *pbVar1 | 2;
    piStack_c = (int *)0x1239;
    func_0x0000daa6();
    piStack_c = (int *)0x1;
    piStack_e = (int *)0x885;
    piStack_10 = (int *)0x124b;
    func_0x00007d9b();
  }
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x00029983();
  func_0x000297e6();
  FUN_28b3_100d();
  uVar13 = 0x22b2;
  func_0x00029983();
  bVar16 = false;
  local_134._0_2_ = 1;
  local_134._2_2_ = 0;
  while( true ) {
    piStack_c = (int *)uVar13;
    if ((*(int *)0x14a < (int)local_134._2_2_) ||
       ((*(int *)0x14a <= (int)local_134._2_2_ && (*(uint *)0x148 < (uint)local_134)))) break;
    piStack_e = (int *)0x1414;
    local_68 = (undefined2 *)func_0x0000013f();
    uVar8 = (ulong)local_68 >> 0x10;
    puVar14 = (undefined2 *)local_68;
    puVar12 = &local_94;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar12;
      puVar12 = puVar12 + 1;
      puVar21 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar5 = *puVar21;
    }
    local_1ae = (uint)local_82;
    uVar13 = 0x11f2;
    piStack_c = (int *)0x143c;
    iVar10 = func_0x000125f1();
    if (iVar10 != 0) {
      if ((local_80 & 0x40) == 0) {
        uVar17 = 0;
        uVar18 = (local_80 & 0x80) == 0;
        if ((bool)uVar18) {
          func_0x000297e6();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029b6d();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029b6d();
          FUN_28b3_1163();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029b6d();
          func_0x000297e6();
          FUN_28b3_100d();
          func_0x00029b6d();
          FUN_28b3_1163();
          func_0x00029c9d();
          uVar13 = 0x22b2;
          FUN_28b3_1181();
          if ((bool)uVar17 || (bool)uVar18) {
            func_0x000297e6();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x0002996b();
            func_0x00029c9d();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x0002996b();
            func_0x00029c9d();
            FUN_28b3_1163();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029b6d();
            func_0x000297e6();
            FUN_28b3_100d();
            func_0x00029b6d();
            FUN_28b3_1163();
            func_0x00029c9d();
            uVar13 = 0x22b2;
            FUN_28b3_1181();
            if (((bool)uVar17 || (bool)uVar18) &&
               ((local_1d0 == 0 ||
                (((local_83 == local_f8 && (local_84 == local_e0)) && (local_82 == local_1ce)))))) {
              uVar13 = 0x885;
              piStack_c = (int *)0x1549;
              iVar10 = func_0x00008854();
              if (iVar10 == 0) {
                *(byte *)((undefined2 *)local_68 + 10) = *(byte *)((undefined2 *)local_68 + 10) | 2;
                piStack_c = (int *)0x155f;
                func_0x0000daa6();
                piStack_c = (int *)0x1;
                piStack_e = (int *)0x885;
                uVar13 = 0x7a6;
                piStack_10 = (int *)0x1571;
                func_0x00007d9b();
              }
            }
          }
          goto LAB_3ab8_6867;
        }
      }
      bVar16 = true;
    }
LAB_3ab8_6867:
    bVar15 = 0xfffe < (uint)local_134;
    local_134._0_2_ = (uint)local_134 + 1;
    local_134._2_2_ = local_134._2_2_ + bVar15;
  }
  if (!bVar16) goto LAB_3ab8_6a1d;
  *(undefined2 *)0xc22 = 1;
  piStack_e = (int *)0x1591;
  FUN_1000_0599();
  lVar20 = CONCAT22(local_134._2_2_,(uint)local_134);
LAB_3ab8_6a16:
  uVar13 = 0x11f2;
  piStack_c = (int *)0x159c;
  local_134 = lVar20;
  func_0x00012276();
LAB_3ab8_6a1d:
  while( true ) {
    piStack_e = (int *)0x15ab;
    piStack_c = (int *)uVar13;
    func_0x00024c86();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x15bb;
    FUN_21f2_2d26();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x15cb;
    FUN_21f2_2d26();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x15db;
    FUN_21f2_2d26();
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x15eb;
    FUN_21f2_2d26();
    if (-1 < local_1c2) {
      piStack_c = (int *)0x22b2;
      piStack_e = (int *)0x1602;
      FUN_21f2_2d26();
    }
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x1612;
    FUN_1def_07a4();
    *(undefined2 *)0xbc2 = 1;
    if (local_96 == 0) {
      puVar14 = &local_1c;
      puVar12 = local_f6;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar21 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar5 = *puVar21;
      }
      puVar14 = auStack_32;
      puVar12 = local_ac;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar21 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar5 = *puVar21;
      }
      puVar14 = auStack_48;
      puVar12 = local_7e;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar21 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar5 = *puVar21;
      }
      uStack_4a = 1;
      iStack_4c = local_1c2;
      local_4e = 0x1bb4;
      uStack_50 = 0x1658;
      FUN_3ab8_5ab6();
    }
    piStack_c = local_1fc;
    piStack_e = local_198;
    piStack_10 = (int *)0x270f;
    local_12 = 0x1bb4;
    local_14 = 0x1678;
    local_1fe = FUN_1def_0904();
    if (local_96 == 0) {
      puVar14 = &local_1c;
      puVar12 = local_f6;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar21 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar5 = *puVar21;
      }
      puVar14 = auStack_32;
      puVar12 = local_ac;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar21 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar5 = *puVar21;
      }
      puVar14 = auStack_48;
      puVar12 = local_7e;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        puVar21 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar5 = *puVar21;
      }
      uStack_4a = 0;
      iStack_4c = local_1c2;
      local_4e = 0x1bb4;
      uStack_50 = 0x16bc;
      FUN_3ab8_5ab6();
    }
    if (*(int *)0x158 != 0) {
      return 0;
    }
    uVar13 = 0x885;
    func_0x0000c3ca();
    if (local_1fe == -1) {
      piStack_c = (undefined2 *)0x16dd;
      func_0x00008095();
      goto LAB_3ab8_6026;
    }
    if ((local_1fe == 1) || (local_1fe == 0xd)) {
      piStack_c = (int *)0x16fa;
      func_0x00008095();
      uVar13 = 0x885;
      piStack_c = (int *)0x1703;
      func_0x0000daa6();
      if ((*(char *)0x7e != '\0') && ((*(char *)0xd14 != '\x04' && (1 < *(byte *)0x84)))) {
        func_0x0000c3ca();
        piStack_c = local_198;
        piStack_e = (int *)0x885;
        uVar13 = 0x11f2;
        piStack_10 = (int *)0x1730;
        func_0x0001263c();
        piStack_c = local_198;
        piStack_e = (int *)0x1;
        pcVar7 = (code *)swi(0x3f);
        (*pcVar7)();
        *(undefined1 *)0xd14 = 2;
      }
      if (param_2 < 0) {
        *(undefined2 *)0xb76a = local_fe;
        *(undefined2 *)0xb76c = local_fc;
        *(undefined2 *)0xb784 = local_1b2;
        *(undefined2 *)0xb786 = local_1b0;
        piStack_c = (int *)0x1780;
        func_0x0000daa6();
        *(undefined2 *)0xb30c = local_202;
        *(undefined2 *)0xb30e = local_200;
        *(undefined2 *)0xb37e = uVar13;
        *(undefined2 *)0xb380 = 0;
        func_0x000297e6();
        func_0x000297e6();
        func_0x00029d78();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x17bd;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x17c5;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x17ca;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x17d4;
        func_0x000299d1();
        local_18[0] = 1;
        local_1a = 0x22b2;
        local_1c = 0x17dd;
        FUN_1def_05d1();
        uVar17 = (undefined1 *)0xffed < local_18;
        func_0x000297e6();
        FUN_28b3_1181();
        if ((bool)uVar17) {
          return 1;
        }
        return 2;
      }
      puVar12 = (undefined2 *)0x885;
      piStack_c = (undefined2 *)0x1906;
      func_0x0000daa6();
      local_12c = *(uint *)0x148;
      local_12a = *(uint *)0x14a;
      if (local_1c2 == 1) {
        local_20 = local_202;
        local_1a = 0;
        local_14 = local_24;
        local_134._0_2_ = 1;
        local_134._2_2_ = 0;
        local_1c = uVar13;
        local_18[0] = unaff_SI;
        local_12 = 0x22b2;
        goto LAB_3ab8_6dde;
      }
      if (local_1c2 != 2) goto LAB_3ab8_5c73;
      local_134._0_2_ = local_12c;
      local_134._2_2_ = local_12a;
      if (local_96 != 0) goto LAB_3ab8_71c3;
      local_134._0_2_ = 1;
      local_134._2_2_ = 0;
      goto LAB_3ab8_723a;
    }
    if (local_1fe == 2) break;
    if (local_118 != 0) {
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      local_12 = 0x1835;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      local_12 = 0x183e;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      local_12 = 0x1843;
      func_0x00029d78();
      local_18[0] = 0x22b2;
      local_1a = 0x184d;
      func_0x000299d1();
      local_18[0] = 0x22b2;
      local_1a = 0x1852;
      lVar20 = FUN_13bf_39a0();
      if (lVar20 < 1) goto LAB_3ab8_6a16;
      piStack_c = (int *)0x11f2;
      piStack_e = (int *)0x1874;
      local_134 = lVar20;
      local_68 = (undefined2 *)func_0x0000013f();
      uVar13 = 0x885;
      piStack_c = (int *)0x188c;
      iVar10 = func_0x00008854();
      if (iVar10 == 0) {
        uVar13 = (undefined2)((ulong)local_68 >> 0x10);
        uVar6 = ((undefined2 *)local_68)[10];
        lVar20 = local_134;
        if (((uVar6 & 0x40) != 0) || ((uVar6 & 0x80) != 0)) goto LAB_3ab8_6a16;
        puVar2 = (undefined2 *)local_68 + 10;
        *puVar2 = *puVar2 ^ (byte)((~(byte)(uVar6 >> 1) & 1) << 1 ^ (byte)uVar6) & 2;
        piStack_c = (int *)0x18c4;
        func_0x0000daa6();
        piStack_c = (int *)(uint)((*(byte *)((undefined2 *)local_68 + 10) & 2) != 0);
        piStack_e = (int *)0x885;
        uVar13 = 0x7a6;
        piStack_10 = (int *)0x18e0;
        func_0x00007d9b();
      }
    }
  }
  puVar12 = (undefined2 *)0x7a6;
  piStack_c = (undefined2 *)0x1806;
  func_0x00008095();
  if (param_2 < 0) {
    return 0;
  }
LAB_3ab8_7196:
  if (99 < param_2) {
    return 0;
  }
  goto LAB_3ab8_5c73;
LAB_3ab8_672d:
  if ((local_1c0 != local_26) || (local_1cc != local_64[0])) {
    piStack_c = (int *)0x12ca;
    func_0x0000daa6();
    FUN_1885_2ec3();
    uVar3 = *(undefined2 *)0xa8a;
    *(undefined2 *)0xa8a = *(undefined2 *)0xa9a;
    piStack_c = (int *)0x12e9;
    func_0x000297e6();
    piStack_c = (int *)0x12ee;
    func_0x00029d78();
    local_12 = 0x22b2;
    local_14 = 0x12f8;
    func_0x000299d1();
    local_12 = 0x22b2;
    local_14 = 0x1300;
    func_0x000297e6();
    local_12 = 0x22b2;
    local_14 = 0x1305;
    func_0x00029d78();
    local_1a = 0x22b2;
    local_1c = 0x130f;
    func_0x000299d1();
    local_1a = 0x22b2;
    local_1c = 0x1317;
    func_0x000297e6();
    local_1a = 0x22b2;
    local_1c = 0x131c;
    func_0x00029d78();
    local_24 = 0x1326;
    func_0x000299d1();
    local_24 = 0x132f;
    func_0x000297e6();
    local_24 = 0x1334;
    func_0x00029d78();
    uStack_2a = 0x22b2;
    uStack_2c = 0x133e;
    func_0x000299d1();
    uStack_2a = 0x22b2;
    uVar13 = 0x1bb4;
    uStack_2c = 0x1343;
    func_0x0001e18f();
    *(undefined2 *)0xa8a = uVar3;
    local_1c0 = local_26;
    local_1cc = local_64[0];
  }
  goto LAB_3ab8_64e3;
LAB_3ab8_6dde:
  if (((int)local_12a < (int)local_134._2_2_) ||
     (((int)local_12a <= (int)local_134._2_2_ && (local_12c < (uint)local_134)))) {
    func_0x0000abfa();
    puVar12 = (undefined2 *)0x885;
    piStack_c = (undefined2 *)0x1d15;
    func_0x0000b1d8();
    goto LAB_3ab8_7196;
  }
  piStack_e = (int *)0x1981;
  piStack_c = puVar12;
  puVar21 = (undefined2 *)func_0x0000013f();
  puVar14 = (undefined2 *)puVar21;
  puVar12 = &local_94;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar4 = puVar12;
    puVar12 = puVar12 + 1;
    puVar5 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar4 = *puVar5;
  }
  puVar12 = (undefined2 *)0x0;
  if ((local_80 & 2) == 0) {
LAB_3ab8_6e1a:
    bVar16 = 0xfffe < (uint)local_134;
    local_134._0_2_ = (uint)local_134 + 1;
    local_134._2_2_ = local_134._2_2_ + bVar16;
    goto LAB_3ab8_6dde;
  }
  puVar14 = &local_20;
  puVar12 = &local_94;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar5 = puVar14;
    puVar14 = puVar14 + 1;
    puVar21 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar5 = *puVar21;
  }
  puVar14 = auStack_36;
  puVar12 = local_7e;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar5 = puVar14;
    puVar14 = puVar14 + 1;
    puVar21 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar5 = *puVar21;
  }
  uStack_38 = 0;
  puVar12 = (undefined2 *)0x1bb4;
  uStack_3a = 0x19d0;
  iVar10 = FUN_1def_1921();
  uVar17 = 0;
  uVar18 = iVar10 == 0;
  if ((bool)uVar18) goto LAB_3ab8_6e1a;
  func_0x000297e6();
  func_0x000297e6();
  puVar12 = (undefined2 *)0x22b2;
  FUN_28b3_1181();
  if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_6e1a;
  func_0x000297e6();
  func_0x000297e6();
  puVar12 = (undefined2 *)0x22b2;
  FUN_28b3_1181();
  if ((bool)uVar17) goto LAB_3ab8_6e1a;
  func_0x000297e6();
  func_0x000297e6();
  puVar12 = (undefined2 *)0x22b2;
  FUN_28b3_1181();
  if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_6e1a;
  func_0x000297e6();
  func_0x000297e6();
  puVar12 = (undefined2 *)0x22b2;
  FUN_28b3_1181();
  if ((bool)uVar17) goto LAB_3ab8_6e1a;
  puVar14 = &local_20;
  puVar12 = &local_94;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar5 = puVar14;
    puVar14 = puVar14 + 1;
    puVar21 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar5 = *puVar21;
  }
  puVar14 = auStack_36;
  puVar12 = &local_20;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar5 = puVar14;
    puVar14 = puVar14 + 1;
    puVar21 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar5 = *puVar21;
  }
  uStack_38 = 0x22b2;
  puVar12 = (undefined2 *)0x1bb4;
  uStack_3a = 0x1a73;
  iVar10 = FUN_1def_1921();
  if (iVar10 == 0) goto LAB_3ab8_6e1a;
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1a92;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1a9b;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1aa0;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  local_1a = 0x1aaa;
  func_0x000299d1();
  local_18[0] = 0x22b2;
  local_1a = 0x1ab3;
  func_0x000297e6();
  local_18[0] = 0x22b2;
  local_1a = 0x1ab8;
  func_0x00029d78();
  local_20 = 0x22b2;
  func_0x000299d1();
  local_20 = 0x22b2;
  func_0x000297e6();
  local_20 = 0x22b2;
  func_0x00029d78();
  uStack_28 = 0x22b2;
  uStack_2a = 0x1ada;
  func_0x000299d1();
  uStack_28 = 0x22b2;
  puVar12 = (undefined2 *)0x1bb4;
  uStack_2a = 0x1adf;
  iVar10 = FUN_1def_043a();
  if (iVar10 == 0) goto LAB_3ab8_6e1a;
  piStack_c = (int *)0x1af1;
  func_0x0000daa6();
  piStack_c = (int *)0x885;
  piStack_e = (int *)0x1aff;
  func_0x00018779();
  bVar16 = local_12c == 0;
  local_12c = local_12c - 1;
  local_12a = local_12a - bVar16;
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1b23;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1b2c;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1b31;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  local_1a = 0x1b3b;
  func_0x000299d1();
  local_18[0] = 1;
  local_1a = 0x22b2;
  local_1c = 0x1b44;
  puVar12 = (undefined2 *)FUN_1def_05d1();
  local_1ca = *puVar12;
  local_1c8 = puVar12[1];
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1b6e;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1b77;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1b7c;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  local_1a = 0x1b86;
  func_0x000299d1();
  local_18[0] = 1;
  local_1a = 0x22b2;
  local_1c = 0x1b8f;
  puVar12 = (undefined2 *)FUN_1def_05d1();
  local_120 = *puVar12;
  local_11e = puVar12[1];
  func_0x000297e6();
  func_0x00029d78();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1bb9;
  func_0x000299d1();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1bc2;
  func_0x000297e6();
  piStack_10 = (int *)0x22b2;
  local_12 = 0x1bc7;
  func_0x00029d78();
  local_18[0] = 0x22b2;
  local_1a = 0x1bd1;
  func_0x000299d1();
  local_18[0] = 1;
  local_1a = 0x22b2;
  local_1c = 0x1bda;
  puVar12 = (undefined2 *)FUN_1def_05d1();
  uVar17 = (undefined1 *)0xffed < local_18;
  uVar18 = &stack0x0000 == (undefined1 *)0x6;
  local_10a = *puVar12;
  local_108 = puVar12[1];
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar17) {
    local_1ca = *(undefined2 *)0x9cf8;
    local_1c8 = *(undefined2 *)0x9cfa;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if (!(bool)uVar17 && !(bool)uVar18) {
    local_1ca = local_120;
    local_1c8 = local_11e;
  }
  func_0x000297e6();
  func_0x000297e6();
  FUN_28b3_1181();
  if ((bool)uVar17) {
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17 || (bool)uVar18) goto LAB_3ab8_712a;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17) goto LAB_3ab8_7143;
LAB_3ab8_7108:
    local_8c = local_10e;
    local_8a = local_10c;
    local_88 = local_124;
    local_86 = local_122;
  }
  else {
LAB_3ab8_712a:
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17) goto LAB_3ab8_7108;
LAB_3ab8_7143:
    local_94 = local_10e;
    local_92 = local_10c;
    local_90 = local_124;
    local_8e = local_122;
  }
  piStack_c = (undefined2 *)0x1ceb;
  func_0x0000daa6();
  puVar14 = &local_1c;
  puVar12 = &local_94;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar5 = puVar14;
    puVar14 = puVar14 + 1;
    puVar21 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar5 = *puVar21;
  }
  puVar12 = (undefined2 *)0x11f2;
  local_20 = 0x1d01;
  FUN_17a6_0cba();
  goto LAB_3ab8_6dde;
LAB_3ab8_71c3:
  for (; (-1 < (int)local_134._2_2_ && ((0 < (int)local_134._2_2_ || ((uint)local_134 != 0))));
      local_134._0_2_ = (uint)local_134 - 1) {
    puVar14 = (undefined2 *)0x0;
    piStack_e = (int *)0x1d60;
    piStack_c = puVar12;
    uVar22 = func_0x0000013f();
    if ((*(byte *)((int)uVar22 + 0x14) & 2) != 0) {
      piStack_c = (int *)0x1d81;
      func_0x0000daa6();
      piStack_c = (undefined2 *)0x885;
      puVar14 = (undefined2 *)0x11f2;
      piStack_e = (int *)0x1d8f;
      func_0x00018779();
    }
    bVar16 = (uint)local_134 == 0;
    puVar12 = puVar14;
    local_134._2_2_ = local_134._2_2_ - bVar16;
  }
LAB_3ab8_7213:
  func_0x0000abfa();
  puVar12 = (undefined2 *)0x885;
  piStack_c = (undefined2 *)0x1da1;
  func_0x0000b1d8();
  if (99 < param_2) {
    return 0;
  }
  goto LAB_3ab8_5d83;
LAB_3ab8_723a:
  if (((int)local_12a < (int)local_134._2_2_) ||
     (((int)local_12a <= (int)local_134._2_2_ && (local_12c < (uint)local_134))))
  goto LAB_3ab8_7213;
  piStack_e = (int *)0x1dd7;
  piStack_c = puVar12;
  puVar21 = (undefined2 *)func_0x0000013f();
  puVar14 = (undefined2 *)puVar21;
  puVar12 = &local_94;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar4 = puVar12;
    puVar12 = puVar12 + 1;
    puVar5 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar4 = *puVar5;
  }
  puVar12 = &local_20;
  puVar14 = &local_94;
  for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar5 = puVar12;
    puVar12 = puVar12 + 1;
    puVar21 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar5 = *puVar21;
  }
  puVar12 = (undefined2 *)0x0;
  if ((local_80 & 2) == 0) {
LAB_3ab8_727c:
    bVar16 = 0xfffe < (uint)local_134;
    local_134._0_2_ = (uint)local_134 + 1;
    local_134._2_2_ = local_134._2_2_ + bVar16;
  }
  else {
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x1e20;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x1e29;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x1e2e;
    func_0x00029d78();
    local_18[0] = 0x22b2;
    local_1a = 0x1e38;
    func_0x000299d1();
    local_18[0] = 0x22b2;
    local_1a = 0x1e41;
    func_0x000297e6();
    local_18[0] = 0x22b2;
    local_1a = 0x1e46;
    func_0x00029d78();
    local_20 = 0x22b2;
    func_0x000299d1();
    local_20 = 0x22b2;
    func_0x000297e6();
    local_20 = 0x22b2;
    func_0x00029d78();
    uStack_28 = 0x22b2;
    uStack_2a = 0x1e68;
    func_0x000299d1();
    uStack_28 = 0x22b2;
    puVar12 = (undefined2 *)0x1bb4;
    uStack_2a = 0x1e6d;
    iVar10 = FUN_1def_043a();
    if (iVar10 == 0) goto LAB_3ab8_727c;
    puVar14 = &local_20;
    puVar12 = &local_94;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar21 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar5 = *puVar21;
    }
    puVar14 = auStack_36;
    puVar12 = local_ac;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar21 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar5 = *puVar21;
    }
    uStack_38 = 0x1bb4;
    puVar12 = (undefined2 *)0x1bb4;
    uStack_3a = 0x1ea1;
    iVar10 = FUN_1def_1921();
    uVar17 = 0;
    uVar18 = iVar10 == 0;
    if ((bool)uVar18) goto LAB_3ab8_727c;
    func_0x000297e6();
    func_0x000297e6();
    puVar12 = (undefined2 *)0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_727c;
    func_0x000297e6();
    func_0x000297e6();
    puVar12 = (undefined2 *)0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar17) goto LAB_3ab8_727c;
    func_0x000297e6();
    func_0x000297e6();
    puVar12 = (undefined2 *)0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_727c;
    func_0x000297e6();
    func_0x000297e6();
    puVar12 = (undefined2 *)0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar17) goto LAB_3ab8_727c;
    local_11c = local_10e;
    local_11a = local_10c;
    local_1a8 = local_124;
    local_1a6 = local_122;
    puVar14 = &local_20;
    puVar12 = &local_94;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar21 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar5 = *puVar21;
    }
    puVar14 = auStack_36;
    puVar12 = local_f6;
    for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar5 = puVar14;
      puVar14 = puVar14 + 1;
      puVar21 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar5 = *puVar21;
    }
    uStack_38 = 0x22b2;
    puVar12 = (undefined2 *)0x1bb4;
    uStack_3a = 0x1f68;
    iVar10 = FUN_1def_1921();
    uVar17 = 0;
    uVar18 = iVar10 == 0;
    if ((bool)uVar18) goto LAB_3ab8_727c;
    func_0x000297e6();
    func_0x000297e6();
    puVar12 = (undefined2 *)0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_727c;
    func_0x000297e6();
    func_0x000297e6();
    puVar12 = (undefined2 *)0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar17) goto LAB_3ab8_727c;
    func_0x000297e6();
    func_0x000297e6();
    puVar12 = (undefined2 *)0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar17 && !(bool)uVar18) goto LAB_3ab8_727c;
    func_0x000297e6();
    func_0x000297e6();
    puVar12 = (undefined2 *)0x22b2;
    FUN_28b3_1181();
    if ((bool)uVar17) goto LAB_3ab8_727c;
    local_1a4 = local_10e;
    local_1a2 = local_10c;
    local_1ba = local_124;
    local_1b8 = local_122;
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x200e;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x2017;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x201c;
    func_0x00029d78();
    local_18[0] = 0x22b2;
    local_1a = 0x2026;
    func_0x000299d1();
    local_18[0] = 1;
    local_1a = 0x22b2;
    local_1c = 0x202f;
    puVar12 = (undefined2 *)FUN_1def_05d1();
    local_1a0 = *puVar12;
    local_19e = puVar12[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x2054;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x205d;
    func_0x000297e6();
    local_18[0] = 0x22b2;
    local_1a = 0x2067;
    func_0x000299d1();
    local_18[0] = 1;
    local_1a = 0x22b2;
    local_1c = 0x2070;
    puVar12 = (undefined2 *)FUN_1def_05d1();
    local_19c = *puVar12;
    local_19a = puVar12[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x2095;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x209e;
    func_0x000297e6();
    local_18[0] = 0x22b2;
    local_1a = 0x20a8;
    func_0x000299d1();
    local_18[0] = 1;
    local_1a = 0x22b2;
    local_1c = 0x20b1;
    puVar12 = (undefined2 *)func_0x0001e558();
    local_1b6 = *puVar12;
    local_1b4 = puVar12[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x20d6;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x20df;
    func_0x000297e6();
    local_18[0] = 0x22b2;
    local_1a = 0x20e9;
    func_0x000299d1();
    local_18[0] = 1;
    local_1a = 0x22b2;
    local_1c = 0x20f2;
    puVar12 = (undefined2 *)FUN_1def_05d1();
    local_1be = *puVar12;
    local_1bc = puVar12[1];
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x2117;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x2120;
    func_0x000297e6();
    local_18[0] = 0x22b2;
    local_1a = 0x212a;
    func_0x000299d1();
    local_18[0] = 1;
    local_1a = 0x22b2;
    local_1c = 0x2133;
    puVar12 = (undefined2 *)func_0x0001e558();
    uVar17 = (undefined1 *)0xffed < local_18;
    uVar18 = &stack0x0000 == (undefined1 *)0x6;
    local_1c6 = *puVar12;
    local_1c4 = puVar12[1];
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    uVar3 = local_19a;
    uVar13 = local_19c;
    if ((bool)uVar17) {
      local_102 = local_19c;
      local_100 = local_19a;
      local_19c = local_1be;
      local_19a = local_1bc;
      local_1be = uVar13;
      local_1bc = uVar3;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar17 || (bool)uVar18) {
      func_0x000297e6();
      func_0x000297e6();
      puVar12 = (undefined2 *)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar17 || (bool)uVar18) goto LAB_3ab8_727c;
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if (!(bool)uVar17) {
      func_0x000297e6();
      func_0x000297e6();
      puVar12 = (undefined2 *)0x22b2;
      FUN_28b3_1181();
      if (!(bool)uVar17) goto LAB_3ab8_727c;
    }
    piStack_c = (int *)0x2200;
    func_0x0000daa6();
    piStack_c = (undefined2 *)0x885;
    piStack_e = (int *)0x220e;
    func_0x00018779();
    bVar16 = local_12c == 0;
    local_12c = local_12c - 1;
    uVar17 = local_12a < bVar16;
    local_12a = local_12a - bVar16;
    uVar19 = local_12a == 0;
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    uVar18 = uVar17;
    if (!(bool)uVar17 && !(bool)uVar19) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      uVar18 = 1;
      if (!(bool)uVar17) {
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2262;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x226b;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2270;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x227a;
        func_0x000299d1();
        local_18[0] = 0;
        local_1a = 0x22b2;
        local_1c = 0x2282;
        puVar12 = (undefined2 *)FUN_1def_05d1();
        local_8c = *puVar12;
        local_8a = puVar12[1];
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x22a7;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x22b0;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x22b5;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x22bf;
        func_0x000299d1();
        local_18[0] = 0;
        local_1a = 0x22b2;
        local_1c = 0x22c7;
        puVar12 = (undefined2 *)func_0x0001e558();
        local_88 = *puVar12;
        local_86 = puVar12[1];
        piStack_c = (undefined2 *)0x22e1;
        func_0x0000daa6();
        puVar14 = &local_1c;
        puVar12 = &local_94;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar5 = puVar14;
          puVar14 = puVar14 + 1;
          puVar21 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar5 = *puVar21;
        }
        local_20 = 0x22f7;
        FUN_17a6_0cba();
        uVar19 = &stack0x0000 == (undefined1 *)0x6;
        uVar18 = (undefined1 *)0xffe9 < &local_1c;
      }
    }
    func_0x000297e6();
    func_0x000297e6();
    FUN_28b3_1181();
    if ((bool)uVar18 || (bool)uVar19) {
      func_0x000297e6();
      func_0x000297e6();
      FUN_28b3_1181();
      if ((bool)uVar18) {
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2345;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x234e;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2353;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x235d;
        func_0x000299d1();
        local_18[0] = 0;
        local_1a = 0x22b2;
        local_1c = 0x2365;
        puVar12 = (undefined2 *)FUN_1def_05d1();
        local_94 = *puVar12;
        local_92 = puVar12[1];
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x238a;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2393;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2398;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x23a2;
        func_0x000299d1();
        local_18[0] = 0;
        local_1a = 0x22b2;
        local_1c = 0x23aa;
        puVar12 = (undefined2 *)func_0x0001e558();
        local_90 = *puVar12;
        local_8e = puVar12[1];
        piStack_c = (undefined2 *)0x23c4;
        func_0x0000daa6();
        puVar14 = &local_1c;
        puVar12 = &local_94;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar5 = puVar14;
          puVar14 = puVar14 + 1;
          puVar21 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar5 = *puVar21;
        }
        local_20 = 0x23da;
        FUN_17a6_0cba();
        uVar18 = (undefined1 *)0xffe9 < &local_1c;
        uVar19 = &stack0x0000 == (undefined1 *)0x6;
      }
      else {
        uVar18 = 0;
      }
    }
    func_0x000297e6();
    func_0x000297e6();
    puVar12 = (undefined2 *)0x22b2;
    FUN_28b3_1181();
    if (!(bool)uVar18 && !(bool)uVar19) {
      func_0x000297e6();
      func_0x000297e6();
      puVar12 = (undefined2 *)0x22b2;
      FUN_28b3_1181();
      if ((bool)uVar18) {
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2428;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2431;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2436;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x2440;
        func_0x000299d1();
        local_18[0] = 0;
        local_1a = 0x22b2;
        local_1c = 0x2448;
        puVar12 = (undefined2 *)FUN_1def_05d1();
        local_8c = *puVar12;
        local_8a = puVar12[1];
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x246d;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2476;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x247b;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x2485;
        func_0x000299d1();
        local_18[0] = 0;
        local_1a = 0x22b2;
        local_1c = 0x248d;
        puVar12 = (undefined2 *)func_0x0001e558();
        local_88 = *puVar12;
        local_86 = puVar12[1];
        piStack_c = (int *)0x24a7;
        func_0x0000daa6();
        puVar14 = &local_1c;
        puVar12 = &local_94;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar5 = puVar14;
          puVar14 = puVar14 + 1;
          puVar21 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar5 = *puVar21;
        }
        local_20 = 0x24bd;
        FUN_17a6_0cba();
        puVar14 = &local_94;
        puVar12 = &local_20;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar5 = puVar14;
          puVar14 = puVar14 + 1;
          puVar21 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar5 = *puVar21;
        }
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x24e1;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x24ea;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x24ef;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x24f9;
        func_0x000299d1();
        local_18[0] = 0;
        local_1a = 0x22b2;
        local_1c = 0x2501;
        puVar12 = (undefined2 *)FUN_1def_05d1();
        local_94 = *puVar12;
        local_92 = puVar12[1];
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2526;
        func_0x000299d1();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x252f;
        func_0x000297e6();
        piStack_10 = (int *)0x22b2;
        local_12 = 0x2534;
        func_0x00029d78();
        local_18[0] = 0x22b2;
        local_1a = 0x253e;
        func_0x000299d1();
        local_18[0] = 0;
        local_1a = 0x22b2;
        local_1c = 0x2546;
        puVar12 = (undefined2 *)func_0x0001e558();
        local_90 = *puVar12;
        local_8e = puVar12[1];
        piStack_c = (undefined2 *)0x2560;
        func_0x0000daa6();
        puVar14 = &local_1c;
        puVar12 = &local_94;
        for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar5 = puVar14;
          puVar14 = puVar14 + 1;
          puVar21 = puVar12;
          puVar12 = puVar12 + 1;
          *puVar5 = *puVar21;
        }
        puVar12 = (undefined2 *)0x11f2;
        local_20 = 0x2576;
        FUN_17a6_0cba();
      }
    }
  }
  goto LAB_3ab8_723a;
LAB_3ab8_5d83:
  if (local_1c2 != 2) goto LAB_3ab8_5eb5;
  *(undefined2 *)0xbc0 = 1;
  if ((*(char *)0x15b != '\x02') || (*(char *)0x124 == '\0')) goto LAB_3ab8_5db7;
  local_96 = 1;
  goto LAB_3ab8_6026;
LAB_3ab8_5db7:
  piStack_e = (int *)0x946;
  piStack_c = puVar12;
  FUN_21f2_3454();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0x956;
  FUN_21f2_2d26();
  piStack_c = (int *)0x22b2;
  piStack_e = (int *)0x966;
  FUN_21f2_2d26();
  *(uint *)0xc2c = (uint)(param_2 < 0x65);
  piStack_c = &local_202;
  piStack_e = local_198;
  piStack_10 = (int *)(uint)(100 < param_2);
  local_12 = 0x22b2;
  puVar12 = (undefined2 *)0x1bb4;
  local_14 = 0x99e;
  local_1fe = FUN_1def_0904();
  *(undefined2 *)0xc2c = 0;
  if (*(int *)0x158 != 0) {
    return 0;
  }
  if (local_1fe == 0x14) {
    return 0;
  }
  if (local_1fe == -1) {
    return 0;
  }
  if (local_118 != 0) {
    func_0x000297e6();
    func_0x00029d78();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x9e3;
    func_0x000299d1();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x9ec;
    func_0x000297e6();
    piStack_10 = (int *)0x22b2;
    local_12 = 0x9f1;
    func_0x00029d78();
    local_18[0] = 0x22b2;
    local_1a = 0x9fb;
    func_0x000299d1();
    local_18[0] = 0x22b2;
    local_1a = 0xa00;
    lVar20 = FUN_13bf_39a0();
    local_130 = lVar20;
    if (0 < lVar20) {
      piStack_c = (undefined2 *)0x11f2;
      puVar12 = (undefined2 *)0x0;
      piStack_e = (int *)0xa22;
      puVar21 = (undefined2 *)func_0x0000013f();
      puVar11 = (undefined2 *)puVar21;
      puVar14 = local_ac;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar4 = puVar14;
        puVar14 = puVar14 + 1;
        puVar5 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar4 = *puVar5;
      }
LAB_3ab8_5eb5:
      do {
        if (local_1c2 != 2) goto LAB_3ab8_6026;
        *(undefined2 *)0xbc0 = 1;
        piStack_e = (int *)0xa54;
        piStack_c = puVar12;
        FUN_21f2_3454();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xa64;
        FUN_21f2_2d26();
        piStack_c = (int *)0x22b2;
        piStack_e = (int *)0xa74;
        FUN_21f2_2d26();
        if (local_96 == 0) {
          puVar14 = &local_1c;
          puVar12 = local_f6;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            puVar21 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar5 = *puVar21;
          }
          puVar14 = auStack_32;
          puVar12 = local_ac;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            puVar21 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar5 = *puVar21;
          }
          puVar14 = auStack_48;
          puVar12 = local_7e;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            puVar21 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar5 = *puVar21;
          }
          uStack_4a = 1;
          iStack_4c = 3;
          local_4e = 0x22b2;
          uStack_50 = 0xab4;
          FUN_3ab8_5ab6();
        }
        piStack_c = (int *)&stack0xfffa;
        piStack_e = local_198;
        piStack_10 = (int *)0x270f;
        local_12 = 0x22b2;
        puVar12 = (undefined2 *)0x1bb4;
        local_14 = 0xad2;
        local_1fe = FUN_1def_0904();
        if (local_96 == 0) {
          puVar11 = &local_1c;
          puVar14 = local_f6;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar5 = puVar11;
            puVar11 = puVar11 + 1;
            puVar21 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = *puVar21;
          }
          puVar11 = auStack_32;
          puVar14 = local_ac;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar5 = puVar11;
            puVar11 = puVar11 + 1;
            puVar21 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = *puVar21;
          }
          puVar11 = auStack_48;
          puVar14 = local_7e;
          for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar5 = puVar11;
            puVar11 = puVar11 + 1;
            puVar21 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = *puVar21;
          }
          uStack_4a = 0;
          iStack_4c = 3;
          local_4e = 0x1bb4;
          uStack_50 = 0xb16;
          FUN_3ab8_5ab6();
        }
        if (*(int *)0x158 != 0) {
          return 0;
        }
        if (local_1fe == -1) goto LAB_3ab8_5d83;
      } while (local_118 == 0);
      func_0x000297e6();
      func_0x00029d78();
      piStack_10 = (int *)0x22b2;
      local_12 = 0xb5b;
      func_0x000299d1();
      piStack_10 = (int *)0x22b2;
      local_12 = 0xb63;
      func_0x000297e6();
      piStack_10 = (int *)0x22b2;
      local_12 = 0xb68;
      func_0x00029d78();
      local_18[0] = 0x22b2;
      local_1a = 0xb72;
      func_0x000299d1();
      local_18[0] = 0x22b2;
      local_1a = 0xb77;
      lVar20 = FUN_13bf_39a0();
      local_1ac = lVar20;
      if (lVar20 < 1) {
        puVar12 = (undefined2 *)0x11f2;
        piStack_c = (undefined2 *)0xbe7;
        func_0x00012276();
        goto LAB_3ab8_5eb5;
      }
      piStack_c = (undefined2 *)0x11f2;
      piStack_e = (int *)0xb93;
      puVar21 = (undefined2 *)func_0x0000013f();
      puVar14 = (undefined2 *)puVar21;
      puVar12 = local_f6;
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar4 = puVar12;
        puVar12 = puVar12 + 1;
        puVar5 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar4 = *puVar5;
      }
      goto LAB_3ab8_6026;
    }
    puVar12 = (undefined2 *)0x11f2;
    piStack_c = (undefined2 *)0xb2c;
    func_0x00012276();
  }
  goto LAB_3ab8_5d83;
}



/* 3ab8:7a02  FUN_3ab8_7a02  709 bytes, 0 callers */

void __cdecl16far FUN_3ab8_7a02(void)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 local_ec [5];
  undefined2 local_e2 [5];
  undefined2 local_d8 [100];
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 *puStack_a;
  undefined2 *local_8;
  undefined2 *local_6;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x3ab8;
  uVar3 = 0x22b2;
  local_6 = (undefined2 *)0x258d;
  FUN_21f2_0ebc();
  do {
    local_4 = (undefined2 **)0x484e;
    local_6 = local_d8;
    puStack_a = (undefined2 *)0x27db;
    local_8 = (undefined2 *)uVar3;
    FUN_21f2_3454();
    local_4 = (undefined2 **)0x8f8;
    local_6 = local_d8;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0x27eb;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)0x4863;
    local_6 = local_d8;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0x27fb;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)0x902;
    local_6 = local_d8;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0x280b;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)0x4873;
    local_6 = local_d8;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0x281b;
    FUN_21f2_2d26();
    local_4 = (undefined2 **)local_d8;
    local_6 = (undefined2 *)0x8;
    local_8 = (undefined2 *)0x22b2;
    puStack_a = (undefined2 *)0x282b;
    FUN_1def_07a4();
    local_6 = &local_10;
    local_8 = &local_c;
    puStack_a = local_d8;
    local_4 = (undefined2 **)0x0;
    local_c = 0;
    uStack_e = 0x1bb4;
    local_10 = 0x2849;
    local_8 = (undefined2 *)FUN_1def_0904();
    local_4 = (undefined2 **)0x1bb4;
    local_6 = (undefined2 *)0x2854;
    func_0x0000c3ca();
    if (*(int *)0x158 != 0) {
      return;
    }
    if (local_6 == (undefined2 *)0x1) {
      local_8 = (undefined2 *)0x1;
    }
    if (local_6 == (undefined2 *)0x2) {
      local_8 = (undefined2 *)0x2;
    }
    if ((local_8 == (undefined2 *)0x1) || (local_8 == (undefined2 *)0x2)) {
      local_4 = (undefined2 **)local_8;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    if (local_8 == (undefined2 *)0x3) {
      local_4 = (undefined2 **)local_8;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    while (local_8 == (undefined2 *)0x4) {
      local_4 = (undefined2 **)0x487a;
      local_6 = local_e2;
      local_8 = (undefined2 *)0x885;
      puStack_a = (undefined2 *)0x25e1;
      FUN_21f2_3454();
      local_4 = (undefined2 **)0x487f;
      local_6 = local_ec;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x25f1;
      FUN_21f2_3454();
      local_4 = (undefined2 **)0x4882;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2601;
      FUN_21f2_3454();
      local_4 = (undefined2 **)local_e2;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2612;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x4884;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2622;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)local_ec;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2633;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)local_e2;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2644;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x4889;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2654;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)local_ec;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2665;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x4890;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2675;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x7a4;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2685;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)local_ec;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2696;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x4895;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x26a6;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x7a4;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x26b6;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)local_ec;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x26c7;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x4899;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x26d7;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)0x7a4;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x26e7;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)local_ec;
      local_6 = local_d8;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x26f8;
      FUN_21f2_2d26();
      local_4 = (undefined2 **)local_d8;
      local_6 = (undefined2 *)0x5;
      local_8 = (undefined2 *)0x22b2;
      puStack_a = (undefined2 *)0x2708;
      FUN_1def_07a4();
      *(undefined2 *)0xc2c = 1;
      local_4 = &local_6;
      local_6 = &local_10;
      local_8 = &local_c;
      puStack_a = local_d8;
      local_c = 0;
      uStack_e = 0x1bb4;
      local_10 = 0x2729;
      puVar2 = (undefined2 *)FUN_1def_0904();
      *(undefined2 *)0xc2c = 0;
      local_4 = (undefined2 **)0x1bb4;
      local_6 = (undefined2 *)0x273b;
      func_0x0000c3ca();
      if (*(int *)0x158 != 0) {
        return;
      }
      if ((puVar2 == (undefined2 *)0x1) || (puVar2 == (undefined2 *)0x2)) {
        local_6 = (undefined2 *)0x885;
        local_8 = (undefined2 *)0x275b;
        local_4 = (undefined2 **)puVar2;
        FUN_3ab8_5be3();
      }
      if (puVar2 == (undefined2 *)0x3) {
        local_4 = (undefined2 **)0x885;
        local_6 = (undefined2 *)0x2767;
        FUN_3ab8_566c();
      }
      if (puVar2 == (undefined2 *)0x4) {
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      if (puVar2 == (undefined2 *)0x5) {
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
      }
      if (puVar2 == (undefined2 *)0x14) break;
      if (*(int *)0x158 != 0) {
        return;
      }
    }
    uVar3 = 0x885;
    if (local_8 == (undefined2 *)0x5) {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    if (local_8 == (undefined2 *)0x6) {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    if (local_8 == (undefined2 *)0x7) {
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    if (local_8 == (undefined2 *)0x8) {
      local_4 = (undefined2 **)0x0;
      pcVar1 = (code *)swi(0x3f);
      (*pcVar1)();
    }
    if (*(int *)0x158 != 0) {
      return;
    }
  } while( true );
}



/* 3ab8:7ce2  FUN_3ab8_7ce2  211 bytes, 1 callers */

void __cdecl16far FUN_3ab8_7ce2(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_21f2_0ebc();
  uVar1 = 0x885;
  func_0x0000daa6(0x22b2,0);
  *(undefined2 *)0xbc0 = 1;
  *(undefined2 *)0xc08 = 1;
  iVar2 = 2;
  do {
    FUN_1000_0599(uVar1,0x11,iVar2);
    uVar1 = 0xdef;
    iVar2 = 0x2897;
    func_0x00010526(0xdef);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x19);
  FUN_1000_0599(0xdef,1,1);
  func_0x0000c3ca(0xdef);
  do {
    iVar2 = 0;
    FUN_1000_02b5(0x48a0,0,*(undefined2 *)0x1b42,7);
  } while (iVar2 + 1 < 0x51);
  func_0x0000a76b(0xdef,*(int *)0xa58 + 1,*(int *)0xa5e + 1,*(int *)0x1b3e + -1,
                  *(undefined2 *)0x1b40);
  func_0x0000f350(0x885,*(undefined2 *)0xa58,*(undefined2 *)0xa5e,*(undefined2 *)0x1b3e,
                  *(undefined2 *)0x1b40,7,1,0,0);
  func_0x0000f1d8(0xdef,*(int *)0xa58 + 1,*(int *)0xa5e + 1,*(int *)0x1b3e + -1,*(int *)0x1b40 + -1)
  ;
  return;
}



/* 3ab8:7db5  FUN_3ab8_7db5  235 bytes, 1 callers */

void __cdecl16far FUN_3ab8_7db5(int param_1,int param_2)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char acStack_51 [67];
  int local_e;
  undefined2 local_c;
  undefined2 *puStack_a;
  char *pcStack_8;
  char *pcStack_6;
  
  pcStack_6 = (char *)0x2940;
  FUN_21f2_0ebc();
  pcStack_6 = (char *)*(undefined2 *)0xc290;
  pcStack_8 = acStack_51 + 1;
  puStack_a = (undefined2 *)0x22b2;
  local_c = 0x294e;
  FUN_21f2_3454();
  pcStack_6 = acStack_51 + 1;
  pcStack_8 = (char *)0x22b2;
  puStack_a = (undefined2 *)0x2959;
  local_e = func_0x00024ce4();
  if ((0 < local_e) && (acStack_51[local_e] != '\\')) {
    pcStack_6 = (char *)0x48a2;
    pcStack_8 = acStack_51 + 1;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0x2976;
    FUN_21f2_2d26();
  }
  pcStack_6 = acStack_51 + 1;
  pcStack_8 = (char *)0x48a4;
  puStack_a = (undefined2 *)0xbf48;
  local_c = 0x22b2;
  local_e = 0x2989;
  FUN_21f2_3454();
  if (param_1 == 1) {
    pcStack_6 = (char *)0x48ad;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0x299f;
    FUN_21f2_2d26();
  }
  if (param_1 == 2) {
    pcStack_6 = (char *)0x48af;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0x29b4;
    FUN_21f2_2d26();
  }
  if (param_1 == 3) {
    pcStack_6 = (char *)0x48b1;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0x29c9;
    FUN_21f2_2d26();
  }
  if (param_1 == 4) {
    pcStack_6 = (char *)0x48b3;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0x29de;
    FUN_21f2_2d26();
  }
  if (0 < param_2) {
    pcStack_6 = (char *)(param_2 + 0x41);
    pcStack_8 = (char *)0x48b5;
    puStack_a = &local_c;
    local_c = 0x22b2;
    local_e = 0x29fa;
    FUN_21f2_3454();
    pcStack_6 = (char *)&local_c;
    pcStack_8 = (char *)0xbf48;
    puStack_a = (undefined2 *)0x22b2;
    local_c = 0x2a0a;
    FUN_21f2_2d26();
  }
  pcStack_6 = (char *)0x48b8;
  pcStack_8 = (char *)0xbf48;
  puStack_a = (undefined2 *)0x22b2;
  local_c = 0x2a19;
  FUN_21f2_2d26();
  return;
}



/* 3ab8:7ea0  FUN_3ab8_7ea0  1197 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_7ea0(int param_1,char *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined1 local_102 [66];
  int local_c0;
  undefined1 local_be [4];
  undefined1 local_ba [4];
  undefined1 local_b6 [44];
  int local_8a;
  int local_88;
  undefined1 local_86 [100];
  int local_22;
  int local_20;
  undefined1 local_1e [6];
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  char *pcStack_12;
  int iStack_10;
  char *pcStack_e;
  undefined1 *puStack_c;
  undefined1 *local_a;
  char *local_8;
  int *local_6;
  
  local_6 = (int *)0x2a2b;
  FUN_21f2_0ebc();
  local_6 = (int *)0x87a;
  local_8 = local_1e;
  local_a = (undefined1 *)0x22b2;
  puStack_c = (undefined1 *)0x2a39;
  func_0x00024c86();
  local_6 = (int *)0x652;
  local_8 = local_1e;
  local_a = (undefined1 *)0x22b2;
  uVar6 = 0x22b2;
  puStack_c = (undefined1 *)0x2a48;
  FUN_21f2_2d26();
  do {
    local_a = (undefined1 *)0x0;
    while( true ) {
      local_8 = (char *)0x2a53;
      local_6 = (int *)uVar6;
      FUN_3ab8_7ce2();
      local_22 = 0;
      uStack_16 = uVar6;
      do {
        local_6 = (int *)0x0;
        local_8 = (char *)0x0;
        local_a = (undefined1 *)0x0;
        puStack_c = (undefined1 *)0x7;
        pcStack_e = (char *)0x148;
        iStack_14 = (local_22 + 1) * 0x90;
        pcStack_12 = (char *)0x28;
        uStack_18 = 0x2a79;
        iStack_10 = iStack_14;
        func_0x0000f350();
        local_22 = local_22 + 1;
        uStack_16 = 0xdef;
      } while (local_22 < 4);
      local_22 = 0;
      do {
        local_6 = (int *)0x0;
        local_8 = (char *)0x0;
        local_a = (undefined1 *)0x0;
        puStack_c = (undefined1 *)0x7;
        pcStack_12 = (char *)(local_22 * 0x20 + 0x28);
        iStack_10 = 0x240;
        iStack_14 = 0x90;
        uStack_16 = 0xdef;
        uStack_18 = 0x2aac;
        pcStack_e = pcStack_12;
        func_0x0000f350();
        local_22 = local_22 + 1;
      } while (local_22 < 10);
      local_8 = (char *)0x0;
      uVar6 = 0xdef;
      for (local_22 = -1; local_a = (undefined1 *)uVar6, local_22 < 0x1a; local_22 = local_22 + 1) {
        if (local_22 == -1) {
          local_8 = (char *)*(undefined2 *)0xc290;
          if (*local_8 == '\0') {
            local_6 = (int *)0xc13f;
            uVar6 = 0x22b2;
            puStack_c = (undefined1 *)0x2b1e;
            FUN_21f2_3454();
          }
          local_6 = (int *)0x2;
          local_8 = (char *)0x16;
          puStack_c = (undefined1 *)0x2b2d;
          local_a = (undefined1 *)uVar6;
          FUN_1000_0599();
          local_6 = (int *)*(undefined2 *)0xc290;
          local_8 = (char *)0xdef;
          local_a = (undefined1 *)0x2b38;
          func_0x00012276();
          local_6 = (int *)0x4;
          local_8 = (char *)0x16;
          local_a = (undefined1 *)0x11f2;
          puStack_c = (undefined1 *)0x2b46;
          FUN_1000_0599();
          local_6 = (int *)local_1e;
          local_8 = (char *)0xdef;
          uVar7 = 0x11f2;
          local_a = (undefined1 *)0x2b51;
          func_0x00012276();
        }
        else {
          local_6 = (int *)local_22;
          local_8 = (char *)param_1;
          puStack_c = (undefined1 *)0x2ace;
          FUN_3ab8_7db5();
          local_6 = (int *)local_b6;
          local_8 = (char *)0x0;
          local_a = (undefined1 *)0xbf48;
          uVar7 = 0x22b2;
          pcStack_e = (char *)0x2ae1;
          puStack_c = (undefined1 *)uVar6;
          iVar3 = func_0x000276d7();
          if (iVar3 == 0) {
            local_8 = (char *)(((local_22 + 1) % 3) * 0x12 + 0x14);
            local_a = (undefined1 *)0x22b2;
            puStack_c = (undefined1 *)0x2b74;
            FUN_1000_0599();
            local_6 = (int *)(local_22 + 0x41);
            local_8 = (char *)0x48bd;
            local_a = (undefined1 *)0xdef;
            puStack_c = (undefined1 *)0x2b86;
            func_0x00012276();
            local_6 = (int *)0x254;
            local_8 = (char *)0xbf48;
            local_a = (undefined1 *)0x11f2;
            uVar7 = 0x22b2;
            puStack_c = (undefined1 *)0x2b95;
            iVar3 = FUN_21f2_1348();
            *(int *)0xd70 = iVar3;
            if (iVar3 == 0) {
              pcVar2 = (code *)swi(0x3f);
              (*pcVar2)();
            }
            else {
              local_8 = (char *)0x50;
              local_a = (undefined1 *)0xbf48;
              puStack_c = (undefined1 *)0x22b2;
              pcStack_e = (char *)0x2bb4;
              local_6 = (int *)iVar3;
              iVar3 = func_0x0002509c();
              if (iVar3 == 0) {
                local_6 = (int *)*(undefined2 *)0xd70;
                local_8 = (char *)0x22b2;
                uVar7 = 0x22b2;
                local_a = (undefined1 *)0x2bc4;
                FUN_21f2_1262();
                *(undefined2 *)0xd70 = 0;
              }
              else {
                local_6 = (int *)*(undefined2 *)0xd70;
                local_8 = (char *)0x22b2;
                uVar7 = 0x22b2;
                local_a = (undefined1 *)0x2bd7;
                FUN_21f2_1262();
                *(undefined2 *)0xd70 = 0;
                if (*(char *)0xbf48 == '#') {
                  local_6 = (int *)0xbf48;
                  local_8 = (char *)0x22b2;
                  uVar7 = 0x22b2;
                  local_a = (undefined1 *)0x2bee;
                  iVar3 = func_0x00024ce4();
                  local_c0 = iVar3 + -1;
                  if (*(char *)(iVar3 + -0x40b9) == '\n') {
                    *(undefined1 *)(iVar3 + -0x40b9) = 0;
                    local_c0 = iVar3 + -2;
                  }
                  *(undefined1 *)0xbf57 = 0;
                  if (0 < local_c0) {
                    local_6 = (int *)0xbf49;
                    local_8 = (char *)0x1de;
                    local_a = (undefined1 *)0x22b2;
                    uVar7 = 0x11f2;
                    puStack_c = (undefined1 *)0x2c22;
                    func_0x00012276();
                  }
                }
                if (local_8 == (char *)0x0) {
                  local_8 = (char *)0x1;
                  *param_2 = (char)local_22;
                }
              }
            }
          }
        }
        uVar6 = uVar7;
      }
      if (local_8 != (char *)0x0) break;
      local_6 = (int *)0xc13f;
      local_8 = (char *)*(undefined2 *)0xc290;
      puStack_c = (undefined1 *)0x2c50;
      FUN_21f2_3454();
      local_6 = (int *)*(undefined2 *)0xc290;
      local_8 = (char *)(param_1 + 0x1e);
      local_a = (undefined1 *)0x22b2;
      uVar6 = 0x11f2;
      puStack_c = (undefined1 *)0x2c62;
      func_0x000120ec();
      *param_2 = '\0';
      if (local_a != (undefined1 *)0x0) break;
      local_a = (undefined1 *)0x1;
    }
    while( true ) {
      do {
        local_6 = (int *)0x302;
        local_8 = (char *)0x48c1;
        local_a = local_86;
        pcStack_e = (char *)0x2c8a;
        puStack_c = (undefined1 *)uVar6;
        FUN_21f2_3454();
        *(undefined2 *)0xc26 = 1;
        local_6 = &local_20;
        local_8 = local_be;
        local_a = local_ba;
        puStack_c = local_86;
        pcStack_e = (char *)0x270f;
        iStack_10 = 0x22b2;
        pcStack_12 = (char *)0x2caf;
        local_8a = FUN_1def_0904();
        *(undefined2 *)0xc26 = 0;
        if (((*(int *)0x158 != 0) || (local_8a == 0x14)) || (local_8a == -1)) {
          return 0xffff;
        }
        local_6 = (int *)0x1bb4;
        local_8 = (char *)0x2cdc;
        func_0x000297e6();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2ce5;
        FUN_28b3_100d();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2cee;
        func_0x00029b6d();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2cf7;
        FUN_28b3_0d8b();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2cfc;
        FUN_28b3_117c();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2d01;
        func_0x00029d78();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2d06;
        iVar3 = FUN_28b3_0f51();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2d12;
        func_0x000297e6();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2d1b;
        FUN_28b3_100d();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2d24;
        func_0x00029b6d();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2d2d;
        FUN_28b3_0d8b();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2d32;
        FUN_28b3_117c();
        local_6 = (int *)0x22b2;
        local_8 = (char *)0x2d37;
        func_0x00029d78();
        local_6 = (int *)0x22b2;
        uVar6 = 0x22b2;
        local_8 = (char *)0x2d3c;
        iVar4 = FUN_28b3_0f51();
      } while ((((local_20 == 0) || (iVar3 < 0x91)) ||
               ((0x23f < iVar3 || ((iVar4 < 0x29 || (0x147 < iVar4)))))) &&
              ((local_20 == 0 || ((iVar4 < 0x11 || (0x22 < iVar4))))));
      uVar5 = (int)(iVar4 - 0x28U) >> 0xf;
      iVar3 = (iVar3 + -0x90) / 0x90 +
              (((int)((iVar4 - 0x28U ^ uVar5) - uVar5) >> 5 ^ uVar5) - uVar5) * 3;
      local_88 = iVar4;
      if ((iVar3 == 0) || (iVar4 < 0x22)) break;
      local_6 = (int *)(iVar3 + -1);
      local_8 = (char *)param_1;
      local_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x2efb;
      FUN_3ab8_7db5();
      local_6 = (int *)local_b6;
      local_8 = (char *)0x0;
      local_a = (undefined1 *)0xbf48;
      puStack_c = (undefined1 *)0x22b2;
      uVar6 = 0x22b2;
      pcStack_e = (char *)0x2f0e;
      iVar4 = func_0x000276d7();
      if (iVar4 == 0) {
        *param_2 = (char)iVar3 + -1;
        return 1;
      }
    }
    if ((local_20 == 2) && (*(char *)0x132 != '\0')) {
      local_6 = (int *)*(undefined2 *)0xc290;
      local_8 = local_102;
      local_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x2dd3;
      func_0x00024c86();
      local_6 = (int *)0x0;
      local_8 = (char *)0x22b2;
      local_a = (undefined1 *)0x2ddd;
      func_0x0000daa6();
      uVar1 = *(undefined1 *)0x4a;
      *(undefined1 *)0x4a = 0;
      local_6 = (int *)local_86;
      local_8 = (char *)0xc13f;
      puStack_c = (undefined1 *)param_1;
      pcStack_e = param_2;
      iStack_10 = 100;
      pcVar2 = (code *)swi(0x3f);
      local_a = local_102;
      iVar3 = (*pcVar2)();
      local_6 = (int *)0x2e1b;
      func_0x0000daa6();
      *(undefined1 *)0x4a = uVar1;
      uVar6 = 0x885;
      func_0x0000c3ca();
      if (*(int *)0x158 != 0) {
        return 0;
      }
      if (0 < iVar3) {
        local_8 = (char *)*(undefined2 *)0xc290;
        local_a = (undefined1 *)0x885;
        puStack_c = (undefined1 *)0x2e4b;
        local_6 = (int *)local_102;
        FUN_21f2_3454();
        local_6 = (int *)*(undefined2 *)0xc290;
        local_8 = (char *)(param_1 + 0x1e);
        local_a = (undefined1 *)0x22b2;
        uVar6 = 0x11f2;
        puStack_c = (undefined1 *)0x2e5d;
        func_0x000120ec();
      }
    }
    else {
      local_6 = (int *)0x1;
      local_8 = (char *)0x1;
      local_a = (undefined1 *)0x22b2;
      puStack_c = (undefined1 *)0x2e6a;
      FUN_1000_0599();
      local_6 = (int *)0x728;
      local_8 = (char *)0xdef;
      local_a = (undefined1 *)0x2e75;
      func_0x00012276();
      local_6 = (int *)local_1e;
      local_8 = (char *)0x11f2;
      local_a = (undefined1 *)0x2e7f;
      func_0x00012276();
      local_6 = (int *)0x11f2;
      local_8 = (char *)0x2e85;
      func_0x00010526();
      local_6 = (int *)0x28;
      local_8 = (char *)0x2;
      local_a = (undefined1 *)0x16;
      puStack_c = (undefined1 *)*(undefined2 *)0xc290;
      pcStack_e = (char *)0xdef;
      iStack_10 = 0x2e9a;
      FUN_12c1_03d3();
      local_6 = (int *)0x11f2;
      local_8 = (char *)0x2ea2;
      func_0x00002cc6();
      local_6 = (int *)0x2c1;
      local_8 = (char *)0x2ea7;
      func_0x0000c3ca();
      local_6 = (int *)*(undefined2 *)0xc290;
      local_8 = (char *)0x885;
      local_a = (undefined1 *)0x2eb0;
      local_c0 = func_0x00024ce4();
      while (local_6 = (int *)*(int *)0xc290, *(char *)((int)local_6 + local_c0 + -1) == ' ') {
        *(undefined1 *)((int)local_6 + local_c0 + -1) = 0;
        local_c0 = local_c0 + -1;
      }
      if (*(int *)0x158 != 0) {
        return 0;
      }
      local_8 = (char *)(param_1 + 0x1e);
      local_a = (undefined1 *)0x22b2;
      uVar6 = 0x11f2;
      puStack_c = (undefined1 *)0x2ee4;
      func_0x000120ec();
      *param_2 = '\0';
    }
  } while( true );
}



/* 3ab8:83aa  FUN_3ab8_83aa  193 bytes, 1 callers */

undefined2 __cdecl16far FUN_3ab8_83aa(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_21f2_0ebc();
  if (*param_4 + *param_3 + *param_2 + *param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1885_2ec3(0x22b2);
    func_0x00013e19(0x1b6e);
    func_0x0000daa6(0x11f2,0);
    uVar1 = 0x885;
    while (0 < *param_1) {
      func_0x00018779(uVar1,*(undefined2 *)0x148,*(undefined2 *)0x14a);
      *param_1 = *param_1 + -1;
      uVar1 = 0x11f2;
    }
    while (0 < *param_2) {
      uVar1 = 0x11f2;
      FUN_13bf_0327(*(undefined2 *)0x14c,*(undefined2 *)0x14e);
      *param_2 = *param_2 + -1;
    }
    while (0 < *param_3) {
      uVar1 = 0x1bb4;
      FUN_1def_186d(*(undefined2 *)0x152);
      *param_3 = *param_3 + -1;
    }
    while (0 < *param_4) {
      func_0x000190c7(uVar1,*(undefined2 *)0x150);
      *param_4 = *param_4 + -1;
      uVar1 = 0x18b3;
    }
    func_0x0000abfa(uVar1);
    func_0x0000b1d8(0x885,1);
    uVar1 = 1;
  }
  return uVar1;
}



/* 3ab8:846b  FUN_3ab8_846b  107 bytes, 5 callers */

void __cdecl16far FUN_3ab8_846b(undefined2 param_1,undefined2 param_2)

{
  FUN_21f2_0ebc();
  func_0x0000c340(0x22b2);
  func_0x00012276(0x885,0x728);
  func_0x00010526(0x11f2);
  FUN_1000_0599(0xdef,8,1);
  func_0x00012276(0xdef,param_1);
  FUN_1000_0599(0x11f2,0xc,1);
  func_0x00012276(0xdef,0x48c9);
  FUN_1000_0599(0x11f2,0x21,1);
  func_0x00012276(0xdef,param_2);
  return;
}



/* 3ab8:84d6  FUN_3ab8_84d6  208 bytes, 0 callers */

undefined2 __cdecl16far FUN_3ab8_84d6(undefined2 param_1,int *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 local_14 [2];
  undefined2 uStack_12;
  undefined1 *local_10;
  undefined1 **ppuStack_e;
  undefined2 ******local_c;
  undefined1 **ppuStack_a;
  undefined1 *local_8;
  int local_6;
  int local_4;
  
  local_4 = 0x3ab8;
  local_6 = 0x3061;
  FUN_21f2_0ebc();
  puVar2 = (undefined1 *)0x22b2;
  do {
    while( true ) {
      do {
        *(undefined2 *)0xbc0 = 1;
        *(undefined2 *)0xc08 = 1;
        local_4 = 0x48d3;
        local_6 = param_1;
        ppuStack_a = (undefined1 **)0x3083;
        local_8 = puVar2;
        FUN_3ab8_846b();
        *(undefined2 *)0xc26 = 1;
        local_4 = 0x2711;
        local_6 = 0x15;
        local_8 = local_14;
        ppuStack_a = &local_10;
        local_c = &local_c;
        ppuStack_e = &local_8;
        uStack_12 = 0x30a8;
        local_10 = puVar2;
        uVar1 = func_0x000021a4();
        *(undefined2 *)0xc26 = 0;
        if (uVar1 == 0xffff) {
          return 0xffff;
        }
        if (*(int *)0x158 != 0) {
          return 0xff91;
        }
        if (uVar1 == 99) {
          return 99;
        }
        uVar3 = uVar1 < 0x3e00;
        uVar4 = uVar1 == 0x3e00;
        puVar2 = (undefined1 *)0xad;
      } while (0x3dff < (int)uVar1);
      local_4 = 0xad;
      local_6 = 0x30d8;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0x30e0;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0x30e5;
      FUN_28b3_1181();
      if (!(bool)uVar3) break;
LAB_3ab8_857f:
      puVar2 = (undefined1 *)0x22b2;
    }
    local_4 = 0x22b2;
    local_6 = 0x30f0;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0x30f8;
    func_0x000297e6();
    local_4 = 0x22b2;
    puVar2 = (undefined1 *)0x22b2;
    local_6 = 0x30fd;
    FUN_28b3_1181();
    if (!(bool)uVar3 && !(bool)uVar4) goto LAB_3ab8_857f;
    if ((local_4 == 0x66) || (local_4 == 0)) {
      *param_2 = (int)local_8;
      param_2[1] = local_6;
      return 1;
    }
  } while( true );
}



/* 3ab8:85a6  FUN_3ab8_85a6  249 bytes, 0 callers */

undefined2 __cdecl16far
FUN_3ab8_85a6(int param_1,undefined2 param_2,undefined2 param_3,int *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  undefined1 local_14 [2];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined1 **ppuStack_e;
  undefined2 ****local_c;
  undefined2 *puStack_a;
  undefined1 *local_8;
  int local_6;
  int local_4;
  
  local_4 = 0x3ab8;
  uVar2 = 0x22b2;
  local_6 = 0x3131;
  FUN_21f2_0ebc();
  while( true ) {
    *(undefined2 *)0xbc0 = 1;
    *(undefined2 *)0xc08 = 1;
    uVar3 = 0x885;
    local_6 = 0x313f;
    local_4 = uVar2;
    func_0x0000c340();
    local_4 = 0x48d4;
    local_6 = param_3;
    local_8 = (undefined1 *)0x885;
    puStack_a = (undefined2 *)0x3158;
    FUN_3ab8_846b();
    if (param_1 == 2) {
      local_4 = 1;
      local_6 = 0x28;
      local_8 = (undefined1 *)0x885;
      puStack_a = (undefined2 *)0x316d;
      FUN_1000_0599();
      local_4 = param_2;
      local_6 = 0xdef;
      uVar3 = 0x11f2;
      local_8 = (undefined1 *)0x3177;
      func_0x00012276();
    }
    *(undefined2 *)0xc26 = 1;
    local_4 = 0x2711;
    local_6 = 0x15;
    local_8 = local_14;
    puStack_a = &local_10;
    local_c = &local_c;
    ppuStack_e = &local_8;
    uVar2 = 0xad;
    uStack_12 = 0x319b;
    local_10 = uVar3;
    uVar1 = func_0x000021a4();
    *(undefined2 *)0xc26 = 1;
    if (uVar1 == 0xffff) break;
    if (*(int *)0x158 != 0) {
      return 0xff91;
    }
    if ((int)uVar1 < 0x3e00) {
      uVar4 = uVar1 < 99;
      if (uVar1 == 99) {
        return 99;
      }
      local_4 = 0xad;
      local_6 = 0x31ce;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0x31d6;
      func_0x000297e6();
      local_4 = 0x22b2;
      uVar2 = 0x22b2;
      local_6 = 0x31db;
      FUN_28b3_1181();
      if (!(bool)uVar4) {
        local_4 = 0x22b2;
        local_6 = 0x31e8;
        func_0x000297e6();
        local_4 = 0x22b2;
        local_6 = 0x31f1;
        func_0x000297e6();
        local_4 = 0x22b2;
        uVar2 = 0x22b2;
        local_6 = 0x31f6;
        FUN_28b3_1181();
        if ((!(bool)uVar4) && ((local_4 == 0x66 || (local_4 == 0)))) {
          *param_4 = (int)local_8;
          param_4[1] = local_6;
          return 1;
        }
      }
    }
  }
  return 0xffff;
}



/* 3ab8:869f  FUN_3ab8_869f  216 bytes, 0 callers */

undefined2 __cdecl16far
FUN_3ab8_869f(undefined2 param_1,undefined2 param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  undefined1 local_14 [2];
  undefined2 uStack_12;
  undefined1 *local_10;
  undefined1 **ppuStack_e;
  undefined2 ******local_c;
  undefined1 **ppuStack_a;
  undefined1 *local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0x3ab8;
  local_6 = 0x322a;
  FUN_21f2_0ebc();
  puVar3 = (undefined1 *)0x22b2;
  while( true ) {
    local_4 = param_2;
    local_6 = param_1;
    ppuStack_a = (undefined1 **)0x3242;
    local_8 = puVar3;
    FUN_3ab8_846b();
    local_4 = 0x2711;
    local_6 = 0x15;
    local_8 = local_14;
    ppuStack_a = &local_10;
    local_c = &local_c;
    ppuStack_e = &local_8;
    uStack_12 = 0x3261;
    local_10 = puVar3;
    iVar2 = func_0x000021a4();
    if (iVar2 == -1) {
      return 0xffff;
    }
    if (*(int *)0x158 != 0) {
      return 0xff91;
    }
    if (iVar2 == 0x65) {
      uVar1 = *(undefined2 *)0x9d52;
      *param_4 = *(undefined2 *)0x9d50;
      param_4[1] = uVar1;
      *param_3 = 1;
      return 1;
    }
    if (iVar2 == 0x66) break;
    uVar4 = 0;
    puVar3 = (undefined1 *)0xad;
    if (iVar2 == 0) {
      local_4 = 0xad;
      local_6 = 0x32af;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0x32b7;
      func_0x000297e6();
      local_4 = 0x22b2;
      puVar3 = (undefined1 *)0x22b2;
      local_6 = 0x32bc;
      FUN_28b3_1181();
      if ((bool)uVar4) {
        local_4 = 0x22b2;
        local_6 = 0x32ca;
        func_0x000297e6();
        local_4 = 0x22b2;
        local_6 = 0x32d2;
        func_0x000297e6();
        local_4 = 0x22b2;
        local_6 = 0x32da;
        func_0x0002996b();
        local_4 = 0x22b2;
        local_6 = 0x32df;
        FUN_28b3_1181();
        if ((bool)uVar4) {
          uVar1 = *(undefined2 *)0x9cfa;
          *param_4 = *(undefined2 *)0x9cf8;
          param_4[1] = uVar1;
        }
        return 1;
      }
    }
  }
  return 1;
}



/* 3ab8:8777  FUN_3ab8_8777  232 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far
FUN_3ab8_8777(undefined2 param_1,char param_2,undefined1 *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 local_14 [2];
  undefined2 uStack_12;
  undefined2 local_10;
  undefined1 **ppuStack_e;
  undefined2 *******local_c;
  undefined2 *puStack_a;
  undefined1 *local_8;
  int local_6;
  undefined2 local_4;
  
  local_4 = 0x3ab8;
  uVar2 = 0x22b2;
  local_6 = 0x3302;
  FUN_21f2_0ebc();
  while( true ) {
    local_6 = 0x330a;
    local_4 = uVar2;
    func_0x000297e6();
    local_4 = 0x22b2;
    local_6 = 0x330f;
    func_0x00029ae7();
    local_4 = 0x22b2;
    local_6 = 0x3317;
    func_0x00029983();
    local_4 = param_1;
    local_6 = 0x48d5;
    local_8 = (undefined1 *)0x22b2;
    puStack_a = (undefined2 *)0x3322;
    FUN_3ab8_846b();
    local_4 = 0x2711;
    local_6 = 0x15;
    local_8 = local_14;
    puStack_a = &local_10;
    local_c = &local_c;
    ppuStack_e = &local_8;
    local_10 = 0x22b2;
    uVar2 = 0xad;
    uStack_12 = 0x3341;
    iVar1 = func_0x000021a4();
    if (iVar1 == -1) {
      return 0xffff;
    }
    if (*(int *)0x158 != 0) {
      return 0xff91;
    }
    if (iVar1 == 0x65) break;
    if (iVar1 == 0x66) {
      return 1;
    }
    uVar3 = 0;
    if (iVar1 == 0) {
      local_4 = 0xad;
      local_6 = 0x339f;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0x33a7;
      func_0x000297e6();
      local_4 = 0x22b2;
      local_6 = 0x33ac;
      func_0x00029ae7();
      local_4 = 0x22b2;
      uVar2 = 0x22b2;
      local_6 = 0x33b1;
      FUN_28b3_1181();
      if ((bool)uVar3) {
        *param_3 = 1;
        *param_5 = (int)local_8;
        param_5[1] = local_6;
joined_r0x0004337b:
        if (param_2 == '\0') {
          *param_4 = (int)local_8;
          param_4[1] = local_6;
        }
        return 1;
      }
    }
  }
  *param_3 = 0;
  local_8 = (undefined1 *)*(int *)0x9cf8;
  local_6 = *(int *)0x9cfa;
  *param_5 = (int)local_8;
  param_5[1] = local_6;
  goto joined_r0x0004337b;
}



/* 3ab8:885f  FUN_3ab8_885f  300 bytes, 0 callers */

/* WARNING: Type propagation algorithm not settling */

undefined2 __cdecl16far
FUN_3ab8_885f(undefined2 param_1,undefined1 *param_2,undefined2 param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [94];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 **ppuStack_e;
  undefined2 *******local_c;
  undefined1 *local_a;
  undefined1 *local_8;
  int local_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x3ab8;
  uVar2 = 0x22b2;
  local_6 = 0x33ea;
  FUN_21f2_0ebc();
  while( true ) {
    local_4 = (undefined1 *)param_3;
    local_6 = 0x48da;
    local_8 = local_70;
    local_c = (undefined2 *******)0x3416;
    local_a = (undefined1 *)uVar2;
    FUN_21f2_3454();
    local_4 = local_70;
    local_6 = param_1;
    local_8 = (undefined1 *)0x22b2;
    local_a = (undefined1 *)0x3424;
    FUN_3ab8_846b();
    local_4 = (undefined1 *)0x2711;
    local_6 = 0x15;
    local_8 = local_78;
    local_a = local_74;
    local_c = &local_c;
    ppuStack_e = &local_8;
    uStack_10 = 0x22b2;
    uVar2 = 0xad;
    uStack_12 = 0x3443;
    iVar1 = func_0x000021a4();
    if (iVar1 == -1) {
      return 0xffff;
    }
    if (*(int *)0x158 != 0) {
      return 0;
    }
    if (iVar1 == 0x65) {
      *param_2 = 1;
      return 0x65;
    }
    if (iVar1 == 0x66) break;
    uVar3 = 0;
    if (iVar1 == 0) {
      local_4 = (undefined1 *)0xad;
      local_6 = 0x3487;
      func_0x000297e6();
      local_4 = (undefined1 *)0x22b2;
      local_6 = 0x3490;
      func_0x000297e6();
      local_4 = (undefined1 *)0x22b2;
      uVar2 = 0x22b2;
      local_6 = 0x3495;
      FUN_28b3_1181();
      if ((bool)uVar3) {
        local_4 = (undefined1 *)0x22b2;
        local_6 = 0x349f;
        func_0x000297e6();
        local_4 = (undefined1 *)0x22b2;
        local_6 = 0x34a8;
        func_0x000297e6();
        local_4 = (undefined1 *)0x22b2;
        uVar2 = 0x22b2;
        local_6 = 0x34ad;
        FUN_28b3_1181();
        if (!(bool)uVar3) {
          local_4 = (undefined1 *)0x22b2;
          local_6 = 0x34b7;
          func_0x000297e6();
          local_4 = (undefined1 *)0x22b2;
          local_6 = 0x34c0;
          func_0x000297e6();
          local_4 = (undefined1 *)0x22b2;
          uVar2 = 0x22b2;
          local_6 = 0x34c5;
          FUN_28b3_1181();
          if ((bool)uVar3) {
            local_4 = (undefined1 *)0x22b2;
            local_6 = 0x34cf;
            func_0x000297e6();
            local_4 = (undefined1 *)0x22b2;
            local_6 = 0x34d8;
            func_0x000297e6();
            local_4 = (undefined1 *)0x22b2;
            uVar2 = 0x22b2;
            local_6 = 0x34dd;
            FUN_28b3_1181();
            if (!(bool)uVar3) {
              *param_4 = (int)local_8;
              param_4[1] = local_6;
              *param_5 = (int)local_c;
              param_5[1] = (int)local_a;
              *param_2 = 0;
              return 1;
            }
          }
        }
      }
    }
  }
  return 1;
}



/* 3ab8:898b  FUN_3ab8_898b  172 bytes, 0 callers */

undefined2 __cdecl16far
FUN_3ab8_898b(undefined2 param_1,int *param_2,undefined2 param_3,undefined2 ****param_4)

{
  undefined2 unaff_DS;
  int iVar1;
  undefined2 ****local_4;
  
  local_4 = (undefined2 ****)0x3ab8;
  FUN_21f2_0ebc();
  while( true ) {
    local_4 = (undefined2 ****)0x7d6;
    FUN_21f2_3454(param_1);
    local_4 = (undefined2 ****)0x2dc;
    FUN_21f2_2d26(0x22b2,param_1);
    local_4 = (undefined2 ****)0x2f0;
    FUN_21f2_2d26(0x22b2,param_1);
    if ((*param_2 < 1) || (2 < *param_2)) {
      *param_2 = 1;
    }
    local_4 = &local_4;
    *(undefined2 *)0xc20 = 1;
    FUN_1def_0904(0x22b2,1,param_1,param_3,param_4);
    *(undefined2 *)0xc20 = 0;
    local_4 = (undefined2 ****)0x1bb4;
    iVar1 = 0x357b;
    func_0x0000c3ca();
    if (*(int *)0x158 != 0) break;
    if (iVar1 == -1) {
      return 0xffff;
    }
    if (local_4 != (undefined2 ****)0x0) {
      local_4 = param_4;
      iVar1 = func_0x00015409(0x885,param_4,param_3);
      if (iVar1 != 0) {
        return 100;
      }
    }
  }
  return 0xff91;
}



/* 4000:35b7  FUN_4000_35b7  400 bytes, 0 callers */

undefined2 __cdecl16far
FUN_4000_35b7(char *param_1,undefined2 param_2,undefined2 param_3,int *param_4,int *param_5,
             int *param_6,int *param_7)

{
  int iVar1;
  int unaff_DI;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_7e [106];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int *piStack_e;
  int *piStack_c;
  int *piStack_a;
  int *piStack_8;
  
  uVar2 = 0x22b2;
  FUN_21f2_0ebc();
  while( true ) {
    piStack_8 = (int *)0x7d6;
    piStack_a = (int *)local_7e;
    piStack_e = (int *)0x35d1;
    piStack_c = (int *)uVar2;
    FUN_21f2_3454();
    piStack_8 = (int *)0x2dc;
    piStack_a = (int *)local_7e;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x35e0;
    FUN_21f2_2d26();
    piStack_8 = (int *)0x2f0;
    piStack_a = (int *)local_7e;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x35ef;
    FUN_21f2_2d26();
    piStack_8 = (int *)0x48e6;
    piStack_a = (int *)local_7e;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x35fe;
    FUN_21f2_2d26();
    if (*param_1 == '\0') {
      piStack_8 = (int *)0x48fc;
    }
    else {
      piStack_8 = (int *)0x48f3;
    }
    piStack_a = (int *)local_7e;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x361a;
    FUN_21f2_2d26();
    piStack_8 = (int *)0x4906;
    piStack_a = (int *)local_7e;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x3629;
    FUN_21f2_2d26();
    piStack_8 = (int *)local_7e;
    piStack_a = (int *)0x2;
    piStack_c = (int *)0x22b2;
    piStack_e = (int *)0x3638;
    FUN_1def_07a4();
    *(undefined2 *)0xc20 = 1;
    *(undefined2 *)0xc2c = 1;
    if ((*param_7 + *param_6 + *param_5 + *param_4 == 0) && (*(int *)0xce6 == 0)) {
      uStack_10 = 0;
    }
    else {
      uStack_10 = 1;
    }
    piStack_8 = (int *)&stack0xfffc;
    piStack_e = (int *)local_7e;
    piStack_a = (int *)param_3;
    piStack_c = (int *)param_2;
    uStack_12 = 0x1bb4;
    uStack_14 = 0x3689;
    iVar1 = FUN_1def_0904();
    *(undefined2 *)0xc20 = 0;
    *(undefined2 *)0xc2c = 0;
    piStack_8 = (int *)0x1bb4;
    uVar2 = 0x885;
    piStack_a = (int *)0x369c;
    func_0x0000c3ca();
    if (*(int *)0x158 != 0) {
      return 0xff91;
    }
    if (iVar1 == 0x14) {
      return 0x14;
    }
    if ((iVar1 == -1) && (*(int *)0xce6 != 0)) break;
    if ((iVar1 == -1) && (*param_7 + *param_6 + *param_5 + *param_4 != 0)) {
      piStack_8 = (int *)0x885;
      uVar2 = 0x885;
      piStack_a = (int *)0x36e8;
      func_0x0000c3ca();
      piStack_8 = param_7;
      piStack_a = param_6;
      piStack_c = param_5;
      piStack_e = param_4;
      uStack_10 = 0x885;
      uStack_12 = 0x36f4;
      FUN_3ab8_83aa();
    }
    else {
      if (iVar1 == 1) {
        return 1;
      }
      if (iVar1 == 2) {
        unaff_DI = 0;
        if (*param_1 == '\0') {
          *param_1 = '\x01';
        }
        else {
          *param_1 = '\0';
        }
      }
      if (unaff_DI != 0) {
        piStack_8 = (int *)param_3;
        piStack_a = (int *)param_2;
        piStack_e = (int *)0x885;
        uVar2 = 0x11f2;
        uStack_10 = 0x3734;
        piStack_c = (int *)unaff_DI;
        iVar1 = func_0x00015409();
        if (iVar1 != 0) {
          return 100;
        }
      }
    }
  }
  return 0xffff;
}


