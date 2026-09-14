/* 32b2:4b9e */

void FUN_32b2_4b9e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_32b2_0614();
  return;
}


