/* 32b2:01f2 */

void __cdecl16far FUN_32b2_01f2(void)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined2 in_CX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if ((char)in_CX == '\0') {
    FUN_32b2_0281();
    FUN_32b2_0281();
    if (*(int *)0x8eaa == -0x292a) {
      (*(code *)*(undefined2 *)0x8eb0)();
    }
  }
  FUN_32b2_0281();
  FUN_32b2_0281();
  iVar2 = FUN_32b2_02e0();
  cVar3 = (char)((uint)in_CX >> 8);
  if (((iVar2 != 0) && (cVar3 == '\0')) && (*(int *)(unaff_BP + 6) == 0)) {
    *(undefined2 *)(unaff_BP + 6) = 0xff;
  }
  FUN_32b2_0254();
  if (cVar3 == '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}


