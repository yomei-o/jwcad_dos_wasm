/* 32b2:6f9a */

void __cdecl16far FUN_32b2_6f9a(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x8ac6;
  uVar3 = (uint)*(byte *)(iVar1 + -2);
  if ((*(byte *)(uVar3 + iVar1) & 0x7f) == 0) {
    if (*(byte *)(iVar1 + -2) == 3) {
      bVar2 = *(byte *)(iVar1 + 2) & 0x80;
    }
    else {
      bVar2 = *(byte *)(uVar3 + iVar1 + -1) & 0xf0;
    }
    if (bVar2 == 0) {
      return;
    }
  }
  if ((*(byte *)(uVar3 + iVar1) & 0x80) != 0) {
    return;
  }
  return;
}


