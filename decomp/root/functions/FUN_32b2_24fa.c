/* 32b2:24fa */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __cdecl16far FUN_32b2_24fa(void)

{
  int iVar1;
  undefined1 *in_CX;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  
  iVar1 = -(int)in_CX;
  if ((in_CX <= &stack0xfffc) && ((undefined2 *)*(uint *)0x7a72 <= &stack0xfffc + iVar1)) {
    if (in_CX != (undefined1 *)0x0) {
      *(undefined2 *)(&stack0xfffc + iVar1) = unaff_DI;
      *(undefined2 *)(&stack0xfffe + iVar1) = unaff_SI;
      *(undefined2 *)(&stack0x0000 + iVar1) = in_stack_00000000;
      *(undefined2 *)((int)(&stack0x0000 + iVar1) + 2) = in_stack_00000002;
    }
    return;
  }
  if (*(int *)0x7a6e == -1) {
    FUN_32b2_00e7();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0003504a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0x7a6e)();
  return;
}


