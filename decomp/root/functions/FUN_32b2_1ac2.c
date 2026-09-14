/* 32b2:1ac2 */

void FUN_32b2_1ac2(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_2 < *(uint *)0x7a41;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_2 + 0x7a43) = 0;
    }
  }
  FUN_32b2_060c();
  return;
}


