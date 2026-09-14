/* 32b2:4d48 */

void FUN_32b2_4d48(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 *param_4)

{
  code *pcVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    *param_4 = param_2;
  }
  FUN_32b2_0614();
  return;
}


