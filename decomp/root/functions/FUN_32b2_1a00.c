/* 32b2:1a00 */

undefined2 * __cdecl16far FUN_32b2_1a00(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0x7a92;
  while( true ) {
    if ((undefined2 *)*(undefined2 *)0x7bd2 < puVar1) {
      return (undefined2 *)0x0;
    }
    if ((*(byte *)(puVar1 + 3) & 0x83) == 0) break;
    puVar1 = puVar1 + 4;
  }
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)((int)puVar1 + 7) = 0xff;
  return puVar1;
}


