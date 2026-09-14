/* 20a9:0369 */

void __cdecl16far FUN_20a9_0369(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  uVar2 = 0x100;
  pcVar1 = (code *)swi(0x15);
  (*pcVar1)();
  *(undefined2 *)0xc11e = uVar2;
  *(undefined2 *)0xc120 = unaff_ES;
  uVar2 = 0;
  pcVar1 = (code *)swi(0x15);
  (*pcVar1)();
  *(undefined2 *)0xbe86 = uVar2;
  *(undefined2 *)0xbe88 = unaff_ES;
  return;
}


