/* 32b2:445a */

void FUN_32b2_445a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_32b2_060c();
  return;
}


