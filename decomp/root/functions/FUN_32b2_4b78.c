/* 32b2:4b78 */

void FUN_32b2_4b78(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_32b2_060c();
  return;
}


