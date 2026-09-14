/* 32b2:6d9b */

void __cdecl16far FUN_32b2_6d9b(void)

{
  int iVar1;
  int iVar2;
  int *in_BX;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = *in_BX;
  iVar2 = iVar1 >> 0xf;
  if ((char)(iVar1 >> 0xf) < '\0') {
    iVar2 = -(uint)(iVar1 != 0) - iVar2;
  }
  iVar1 = *(int *)0x8ac6;
  iVar3 = iVar1 + 0xc;
  if (iVar3 != -0x754e) {
    *(int *)0x8ac6 = iVar3;
    *(int *)(iVar1 + 8) = iVar3;
    if ((char)((uint)iVar2 >> 8) == '\0') {
      *(undefined1 *)(iVar1 + 10) = 3;
      FUN_32b2_568a();
      return;
    }
    *(undefined1 *)(iVar1 + 10) = 7;
    FUN_32b2_5a00();
    return;
  }
  thunk_FUN_32b2_7312();
  return;
}


