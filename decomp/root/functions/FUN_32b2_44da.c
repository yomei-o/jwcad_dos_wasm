/* 32b2:44da */

int __cdecl16far FUN_32b2_44da(void)

{
  code *pcVar1;
  byte bVar2;
  
  pcVar1 = (code *)swi(0x21);
  bVar2 = (*pcVar1)();
  return bVar2 + 1;
}


