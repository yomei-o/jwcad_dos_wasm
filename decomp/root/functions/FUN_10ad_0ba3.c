/* 10ad:0ba3 */

void FUN_10ad_0ba3(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 *param_8,
                  undefined2 param_9,undefined2 param_10,uint param_11,undefined2 param_12,
                  int *param_13)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 extraout_DX;
  undefined2 uVar3;
  undefined2 unaff_SI;
  undefined2 *puVar4;
  undefined2 unaff_DI;
  uint unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  
  FUN_32b2_02bc();
  uVar2 = param_9;
  uVar3 = param_10;
  uVar7 = param_11;
  uVar1 = FUN_10ad_0773(param_2,param_3,&stack0xfff6,param_9,param_10);
  *param_8 = uVar1;
  if (*param_13 < 0x65) {
    if (uVar7 == 0x61) {
      uVar3 = *(undefined2 *)0x9010;
      FUN_32b2_7658(0x32b2,*(undefined2 *)0x9014,*(undefined2 *)0x9016,unaff_SI,unaff_DI,uVar3,
                    *(undefined2 *)0x9012);
      FUN_32b2_6d14();
      FUN_32b2_710c();
      uVar7 = 0x1708;
      FUN_32b2_6eb1();
      uVar2 = unaff_DI;
    }
    uVar5 = uVar7 < 0x69;
    uVar6 = uVar7 == 0x69;
    if ((bool)uVar6) {
      FUN_32b2_6d14();
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_7191();
      if (!(bool)uVar5 && !(bool)uVar6) {
        *param_13 = 0x65;
        goto code_r0x000116b5;
      }
      uVar3 = extraout_DX;
      FUN_32b2_6d14();
      uVar2 = FUN_32b2_6f61();
      FUN_32b2_6d94();
      uVar7 = 0x1751;
      FUN_32b2_6eb1();
    }
    if (uVar7 == 99) {
      FUN_32b2_6d14();
      uVar1 = 0x1768;
      FUN_32b2_710c();
      FUN_32b2_6eb1(uVar2,uVar3,uVar1);
      puVar4 = (undefined2 *)FUN_32b2_75fe(0x32b2);
      param_4 = *puVar4;
      param_5 = puVar4[1];
      param_6 = puVar4[2];
      param_7 = puVar4[3];
      uVar7 = unaff_SS;
    }
    if (uVar7 == 0x73) {
      FUN_32b2_6d14();
      uVar1 = 0x179c;
      FUN_32b2_710c();
      FUN_32b2_6eb1(uVar2,uVar3,uVar1);
      puVar4 = (undefined2 *)FUN_32b2_75ec(0x32b2);
      param_4 = *puVar4;
      param_5 = puVar4[1];
      param_6 = puVar4[2];
      param_7 = puVar4[3];
      uVar7 = unaff_SS;
    }
    if (uVar7 == 0x62) {
      FUN_32b2_6d14();
      FUN_32b2_6fc7();
      FUN_32b2_6eb1();
    }
    puVar4 = &param_4;
  }
  else {
code_r0x000116b5:
    puVar4 = (undefined2 *)0x9000;
  }
  *(undefined2 *)0x7a2a = *puVar4;
  *(undefined2 *)0x7a2c = puVar4[1];
  *(undefined2 *)0x7a2e = puVar4[2];
  *(undefined2 *)0x7a30 = puVar4[3];
  return;
}


