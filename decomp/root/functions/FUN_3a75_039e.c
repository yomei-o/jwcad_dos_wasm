/* 3a75:039e */

uint __cdecl16far FUN_3a75_039e(void)

{
  uint in_AX;
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = iVar2 * 4;
    if (*(char *)(iVar1 + 0x7fc8) == '\0') {
      return in_AX;
    }
    if (*(byte *)(iVar1 + 0x7fc8) == in_AX) break;
    iVar2 = iVar2 + 1;
  }
  return *(uint *)(iVar1 + 0x7fca);
}


