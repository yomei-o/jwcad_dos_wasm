/* 32b2:2904 */

void __cdecl16far FUN_32b2_2904(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


