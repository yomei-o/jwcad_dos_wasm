/* 13bf:0898 */

void __cdecl16far FUN_13bf_0898(int param_1)

{
  undefined2 unaff_DS;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_32b2_02bc();
  if (*(int *)0xc62 == 0) {
    *(undefined2 *)0x15fc = 0;
  }
  else {
    FUN_1885_5256(0);
    uVar1 = *(undefined2 *)0xc48;
    uVar2 = *(undefined2 *)0xc4a;
    local_16 = *(undefined2 *)0xc4c;
    local_14 = *(undefined2 *)0xc4e;
    FUN_13bf_000c();
    if (*(int *)0x15fc != 0) {
      FUN_13bf_0381(0xad7a,0xad82,0xad7e,0xad86);
      *(undefined2 *)0x15fc = 0;
    }
    if (param_1 != 0) {
      uVar4 = 0x1885;
      uVar3 = 0x451c;
      FUN_32b2_6cc6(0xad7a,0xad82,0xad7e,0xad86);
      FUN_32b2_6eb1(uVar1,uVar2,uVar3,uVar4);
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_13bf_03fb();
      uVar4 = 0x32b2;
      uVar3 = 0x458b;
      FUN_32b2_6cc6(0xad7c,0xad84,0xad80,0xad88);
      FUN_32b2_6eb1(uVar1,uVar2,uVar3,uVar4);
      FUN_32b2_6cc6();
      local_14 = 0x32b2;
      local_16 = 0x45a3;
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_32b2_6cc6();
      FUN_32b2_7258();
      FUN_32b2_6eb1();
      FUN_13bf_03fb();
      FUN_13bf_0381(0xad7a,0xad82,0xad7e,0xad86);
      *(undefined2 *)0x15fc = 1;
    }
    *(undefined2 *)0xc48 = uVar1;
    *(undefined2 *)0xc4a = uVar2;
    *(undefined2 *)0xc4c = local_16;
    *(undefined2 *)0xc4e = local_14;
    FUN_1885_1f49();
  }
  return;
}


