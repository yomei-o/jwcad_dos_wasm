/* 10ad:04e6 */

void __cdecl16far
FUN_10ad_04e6(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
             int param_6,int *param_7)

{
  int *piVar1;
  int unaff_SI;
  int **ppiVar2;
  int unaff_DI;
  undefined2 unaff_DS;
  int local_16;
  int local_14;
  int *local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int local_a;
  
  FUN_32b2_02bc();
LAB_10ad_0504:
  do {
    local_a = param_6;
    uStack_c = param_5;
    uStack_e = param_4;
    uStack_10 = param_3;
    local_12 = &local_a;
    local_14 = param_2;
    local_16 = param_1;
    local_16 = FUN_10ad_0773();
    if (100 < *param_7) {
LAB_10ad_052f:
      ppiVar2 = (int **)0x9000;
      goto LAB_10ad_0537;
    }
    if (local_16 == 0x5e) {
      local_a = param_6;
      uStack_c = param_5;
      uStack_e = param_4;
      uStack_10 = param_3;
      local_12 = &local_16;
      local_16 = unaff_SI;
      local_14 = unaff_DI;
      piVar1 = (int *)FUN_10ad_0a7a(param_1,param_2,param_6,param_7);
      local_a = *piVar1;
      unaff_SI = piVar1[2];
      unaff_DI = piVar1[3];
    }
    if (100 < *param_7) goto LAB_10ad_052f;
    if ((((local_16 == 0x61) || (local_16 == 0x69)) || (local_16 == 99)) ||
       ((local_16 == 0x73 || (local_16 == 0x62)))) {
      local_a = param_6;
      uStack_c = param_5;
      uStack_e = param_4;
      uStack_10 = param_3;
      local_12 = &local_16;
      local_16 = unaff_SI;
      local_14 = unaff_DI;
      piVar1 = (int *)FUN_10ad_0ba3(0x32b2,param_1,param_2,param_6,param_7);
      local_a = *piVar1;
      unaff_SI = piVar1[2];
      unaff_DI = piVar1[3];
    }
    if (100 < *param_7) goto LAB_10ad_052f;
    if (((local_16 == 0x2b) || (local_16 == 0x2d)) || ((local_16 == 0 || (local_16 == 0x5d)))) {
      if (local_14 == 0x2b) {
        local_a = 0x10d6;
        FUN_32b2_6d14();
        local_a = 0x32b2;
        uStack_c = 0x10df;
        FUN_32b2_7154();
        local_a = 0x10e5;
        FUN_32b2_6eb1();
      }
      if (local_14 == 0x2d) {
        local_a = 0x10f3;
        FUN_32b2_6d14();
        local_a = 0x32b2;
        uStack_c = 0x10fc;
        FUN_32b2_70f4();
        local_a = 0x1102;
        FUN_32b2_6eb1();
      }
      if ((0 < local_16) && (local_16 != 0x5d)) goto LAB_10ad_0504;
    }
    if ((local_16 != 0x2a) && ((local_16 != 0x2f && (local_16 != 0x25)))) {
LAB_10ad_070c:
      ppiVar2 = &local_12;
LAB_10ad_0537:
      *(undefined2 *)0x7a2a = *ppiVar2;
      *(undefined2 *)0x7a2c = ppiVar2[1];
      *(undefined2 *)0x7a2e = ppiVar2[2];
      *(undefined2 *)0x7a30 = ppiVar2[3];
      return;
    }
    if (local_14 == 0x2b) {
      local_a = param_6;
      uStack_c = param_5;
      uStack_e = param_4;
      uStack_10 = param_3;
      local_12 = &local_16;
      local_16 = unaff_SI;
      local_14 = unaff_DI;
      FUN_10ad_0d1f(param_1,param_2,unaff_SI,param_6,param_7);
      local_a = 0x1168;
      FUN_32b2_6d14();
      local_a = 0x32b2;
      uStack_c = 0x1171;
      FUN_32b2_7154();
      local_a = 0x1177;
      FUN_32b2_6eb1();
    }
    if (local_14 == 0x2d) {
      local_a = param_6;
      uStack_c = param_5;
      uStack_e = param_4;
      uStack_10 = param_3;
      local_12 = &local_16;
      local_16 = unaff_SI;
      local_14 = unaff_DI;
      FUN_10ad_0d1f(param_1,param_2,unaff_SI,param_6,param_7);
      local_a = 0x11b3;
      FUN_32b2_6d14();
      local_a = 0x32b2;
      uStack_c = 0x11bc;
      FUN_32b2_70f4();
      local_a = 0x11c2;
      FUN_32b2_6eb1();
    }
    if (100 < *param_7) goto LAB_10ad_052f;
    if ((local_16 < 1) || (local_16 == 0x5d)) goto LAB_10ad_070c;
  } while( true );
}


