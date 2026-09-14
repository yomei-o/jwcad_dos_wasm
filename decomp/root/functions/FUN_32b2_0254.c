/* 32b2:0254 */

void __cdecl16near FUN_32b2_0254(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x8ebc != 0) {
    (*(code *)*(undefined2 *)0x8eba)(0x32b2);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x7a64 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}


