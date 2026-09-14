/* 3ab8:4c91 */

void __cdecl16far FUN_3ab8_4c91(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x00029983();
  uVar1 = *(undefined2 *)(unaff_BP + -10);
  puVar2 = (undefined2 *)*(undefined2 *)(unaff_BP + 0xe);
  *puVar2 = *(undefined2 *)(unaff_BP + -0xc);
  puVar2[1] = uVar1;
  uVar1 = *(undefined2 *)(unaff_BP + -0xe);
  puVar2 = (undefined2 *)*(undefined2 *)(unaff_BP + 0x10);
  *puVar2 = *(undefined2 *)(unaff_BP + -0x10);
  puVar2[1] = uVar1;
  return;
}


