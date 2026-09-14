/* 32b2:4444 */

void FUN_32b2_4444(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x8ed4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00036f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x8ed2)();
    return;
  }
  *(undefined2 *)0x7a34 = 0x16;
  FUN_32b2_0621();
  return;
}


