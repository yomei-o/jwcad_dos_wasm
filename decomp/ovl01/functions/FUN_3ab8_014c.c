/* 3ab8:014c */

void __cdecl16far FUN_3ab8_014c(char param_1,char param_2,char param_3)

{
  undefined2 unaff_DS;
  int local_36;
  undefined1 local_34 [36];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  int iStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x3ab8;
  puStack_6 = (undefined1 *)0xacd7;
  FUN_21f2_0ebc();
  if (*(int *)0xc22 == 0) {
    if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
      local_36 = 0x48;
      if (*(char *)0xb1ea == '\x03') {
        local_36 = 0x30;
      }
      uStack_4 = 0x2142;
      puStack_6 = local_34;
      uStack_8 = 0x22b2;
      iStack_a = 0xaddd;
      FUN_21f2_3454();
    }
    else {
      local_36 = 0x42;
      if (*(char *)0xb1ea == '\x03') {
        local_36 = 0x30;
      }
      uStack_4 = 0x2124;
      puStack_6 = local_34;
      uStack_8 = 0x22b2;
      iStack_a = 0xad14;
      FUN_21f2_3454();
      if (param_1 == '\x01') {
        uStack_4 = 0x600;
        puStack_6 = local_34;
        uStack_8 = 0x22b2;
        iStack_a = 0xad29;
        FUN_21f2_2d26();
        local_36 = local_36 + -8;
      }
      if (param_1 == '\x02') {
        uStack_4 = 0x60a;
        puStack_6 = local_34;
        uStack_8 = 0x22b2;
        iStack_a = 0xad42;
        FUN_21f2_2d26();
        local_36 = local_36 + -6;
      }
      if (param_2 != '\0') {
        if (param_1 != '\0') {
          uStack_4 = 0x212c;
          puStack_6 = local_34;
          uStack_8 = 0x22b2;
          iStack_a = 0xad61;
          FUN_21f2_2d26();
          local_36 = local_36 + -1;
        }
        uStack_4 = 0x212e;
        puStack_6 = local_34;
        uStack_8 = 0x22b2;
        iStack_a = 0xad73;
        FUN_21f2_2d26();
        local_36 = local_36 + -4;
      }
      if (param_3 != '\0') {
        if ((param_1 != '\0') || (param_2 != '\0')) {
          uStack_4 = 0x2133;
          puStack_6 = local_34;
          uStack_8 = 0x22b2;
          iStack_a = 0xad98;
          FUN_21f2_2d26();
          local_36 = local_36 + -1;
        }
        uStack_4 = 0x2135;
        puStack_6 = local_34;
        uStack_8 = 0x22b2;
        iStack_a = 0xadaa;
        FUN_21f2_2d26();
        local_36 = local_36 + -4;
      }
      uStack_4 = 0x213a;
      puStack_6 = local_34;
      uStack_8 = 0x22b2;
      iStack_a = 0xadbd;
      FUN_21f2_2d26();
    }
    *(undefined2 *)0xc22 = 1;
    uStack_4 = 0xffff;
    puStack_6 = (undefined1 *)0x7;
    uStack_8 = 2;
    iStack_a = local_36;
    puStack_c = local_34;
    uStack_e = 0x22b2;
    uStack_10 = 0xadfd;
    FUN_1000_02b5();
  }
  return;
}


