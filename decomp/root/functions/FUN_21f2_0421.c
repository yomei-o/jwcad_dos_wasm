/* 21f2:0421 */

void __cdecl16far FUN_21f2_0421(void)

{
  int iVar1;
  undefined2 in_DX;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  FUN_32b2_02bc();
  for (local_4 = 1; local_4 <= *(int *)0x150; local_4 = local_4 + 1) {
    iVar1 = FUN_1000_0398();
    *(byte *)(iVar1 + 0x16) = *(byte *)(iVar1 + 0x16) & 0xfe;
  }
  return;
}


