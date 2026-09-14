/* 3a75:03d0 */

uint __cdecl16far FUN_3a75_03d0(void)

{
  uint in_AX;
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  char cStack_3;
  
  iVar1 = 0;
  while( true ) {
    if (*(char *)(iVar1 * 4 + 0x7fc8) == '\0') {
      return in_AX;
    }
    iVar2 = in_AX - *(int *)(iVar1 * 4 + 0x7fca);
    if (iVar2 == 0) break;
    cStack_3 = (char)(in_AX >> 8);
    if (((*(char *)(iVar1 * 4 + 0x7fcb) == cStack_3) && (0 < iVar2)) &&
       (iVar2 - *(char *)(iVar1 * 4 + 0x7fc9) < 0)) break;
    iVar1 = iVar1 + 1;
  }
  return (uint)*(byte *)(iVar1 * 4 + 0x7fc8);
}


