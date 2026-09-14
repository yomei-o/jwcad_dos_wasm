/* 32b2:3534 */

void __cdecl16far FUN_32b2_3534(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x8eaa == -0x292a) {
    (*(code *)*(undefined2 *)0x8eac)();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


