/* 32b2:3550 */

undefined4 __cdecl16near FUN_32b2_3550(void)

{
  code *pcVar1;
  undefined2 in_AX;
  char *in_DX;
  char *pcVar2;
  undefined2 unaff_DS;
  
  for (pcVar2 = in_DX; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return CONCAT22(in_DX,in_AX);
}


