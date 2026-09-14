/* 32b2:45d0 */

void FUN_32b2_45d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_32b2_060c();
  return;
}


