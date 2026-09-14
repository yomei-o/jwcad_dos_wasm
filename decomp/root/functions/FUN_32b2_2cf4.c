/* 32b2:2cf4 */

void __cdecl16far FUN_32b2_2cf4(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0xb2e2 == 0) {
    FUN_32b2_2d06();
    *(int *)0xb2e2 = *(int *)0xb2e2 + 1;
  }
  return;
}


