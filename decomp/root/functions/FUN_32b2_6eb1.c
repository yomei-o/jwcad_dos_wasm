/* 32b2:6eb1 */

void __cdecl16far FUN_32b2_6eb1(void)

{
  undefined2 *in_BX;
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)*(undefined2 *)0x8ac6;
  if (*(char *)(puVar1 + -1) == '\a') {
    puVar1 = (undefined2 *)puVar1[-2];
  }
  else {
    FUN_32b2_50d5();
  }
  *in_BX = *puVar1;
  in_BX[1] = puVar1[1];
  in_BX[2] = puVar1[2];
  in_BX[3] = puVar1[3];
  *(int *)0x8ac6 = *(int *)0x8ac6 + -0xc;
  return;
}


