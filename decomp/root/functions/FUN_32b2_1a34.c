/* 32b2:1a34 */

void __cdecl16far FUN_32b2_1a34(undefined2 param_1)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  piVar1 = (int *)0x7a9c;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_32b2_098a(param_1,0x7a9a);
  }
  else {
    *(int *)0x7a9a = *(int *)0x7a9a + 1;
    *(undefined1 *)(*(int *)0x7a9a + -1) = (undefined1)param_1;
  }
  return;
}


