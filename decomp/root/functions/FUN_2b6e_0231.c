/* 2b6e:0231 */

void __cdecl16far
FUN_2b6e_0231(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  FUN_1885_5256(0);
  if (param_5 == 9) {
    for (iVar2 = *(int *)0x1f8a; 0 < iVar2; iVar2 = iVar2 + -1) {
      iVar1 = iVar2 * 2;
      FUN_1def_12ae(*(undefined2 *)(iVar1 + -0x501e),*(undefined2 *)(iVar1 + -0x4fa4),
                    *(undefined2 *)(iVar1 + -0x4f2a),*(undefined2 *)(iVar1 + -0x4eb0),
                    *(undefined2 *)(iVar1 + -0x5112),*(undefined2 *)(iVar1 + -0x5098));
    }
    *(undefined2 *)0x1f8a = 0;
  }
  else if (param_5 == -1) {
    if (0 < *(int *)0x1f8a) {
      iVar2 = *(int *)0x1f8a * 2;
      FUN_1def_12ae(*(undefined2 *)(iVar2 + -0x501e),*(undefined2 *)(iVar2 + -0x4fa4),
                    *(undefined2 *)(iVar2 + -0x4f2a),*(undefined2 *)(iVar2 + -0x4eb0),
                    *(undefined2 *)(iVar2 + -0x5112),*(undefined2 *)(iVar2 + -0x5098));
      *(int *)0x1f8a = *(int *)0x1f8a + -1;
    }
  }
  else if ((*(int *)0x1f8a < 0x3c) &&
          (iVar2 = FUN_2b6e_004d(&param_1,&param_2,&param_3,&param_4), iVar2 != 0)) {
    *(int *)0x1f8a = *(int *)0x1f8a + 1;
    iVar2 = *(int *)0x1f8a * 2;
    *(undefined2 *)(iVar2 + -0x501e) = param_1;
    *(undefined2 *)(iVar2 + -0x4fa4) = param_2;
    *(undefined2 *)(iVar2 + -0x4f2a) = param_3;
    *(undefined2 *)(iVar2 + -0x4eb0) = param_4;
    *(int *)(iVar2 + -0x5112) = param_5;
    *(undefined2 *)(iVar2 + -0x5098) = param_6;
    FUN_1def_12ae(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


