/* 32b2:61aa */

void __cdecl16near FUN_32b2_61aa(void)

{
  uint uVar1;
  int iVar2;
  int in_BX;
  int *piVar3;
  int unaff_SI;
  int *piVar4;
  undefined2 unaff_DS;
  
  uVar1 = CONCAT11(*(undefined1 *)(unaff_SI + 9),*(undefined1 *)(in_BX + 9)) & 0x8080;
  if ((char)uVar1 == (char)(uVar1 >> 8)) {
    piVar4 = (int *)(unaff_SI + 10);
    piVar3 = (int *)(in_BX + 10);
    iVar2 = 5;
    do {
      piVar4 = piVar4 + -1;
      piVar3 = piVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0 && *piVar4 == *piVar3);
  }
  return;
}


