/* 32b2:2854 */

undefined2 __cdecl16far FUN_32b2_2854(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xb2d8 = 0x42;
  *(undefined2 *)0xb2d6 = param_1;
  *(undefined2 *)0xb2d2 = param_1;
  *(undefined2 *)0xb2d4 = 0x7fff;
  uVar3 = FUN_32b2_1528(0xb2d2,param_2,&stack0x0008);
  piVar1 = (int *)0xb2d4;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_32b2_098a(0,0xb2d2);
  }
  else {
    puVar2 = (undefined1 *)*(undefined2 *)0xb2d2;
    *(int *)0xb2d2 = *(int *)0xb2d2 + 1;
    *puVar2 = 0;
  }
  return uVar3;
}


