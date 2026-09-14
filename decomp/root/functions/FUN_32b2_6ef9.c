/* 32b2:6ef9 */

void __cdecl16far FUN_32b2_6ef9(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *in_BX;
  undefined2 unaff_DS;
  
  puVar2 = (undefined2 *)*(undefined2 *)0x8ac6;
  cVar1 = *(char *)(puVar2 + -1);
  *(int *)0x8ac6 = *(int *)0x8ac6 + -0xc;
  *in_BX = CONCAT11((char)((uint)unaff_DS >> 8),cVar1);
  in_BX[1] = *puVar2;
  in_BX[2] = puVar2[1];
  if (cVar1 != '\x03') {
    in_BX[3] = puVar2[2];
    in_BX[4] = puVar2[3];
  }
  return;
}


