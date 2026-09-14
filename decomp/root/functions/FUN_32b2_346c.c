/* 32b2:346c */

void __cdecl16far FUN_32b2_346c(void)

{
  char in_AL;
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x33bd;
  iVar1 = 6;
  do {
    if (*pcVar2 == in_AL) {
      return;
    }
    pcVar2 = pcVar2 + -1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


