/* 20a9:04a1 */

undefined2 __cdecl16far FUN_20a9_04a1(void)

{
  code *pcVar1;
  undefined2 uVar2;
  
  FUN_32b2_02bc();
  pcVar1 = (code *)swi(0x16);
  uVar2 = (*pcVar1)();
  return uVar2;
}


