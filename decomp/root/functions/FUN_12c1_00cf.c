/* 12c1:00cf */

undefined2 __cdecl16far FUN_12c1_00cf(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (*(int *)0x1358 == 0) {
    uVar1 = FUN_12c1_012d();
    *(undefined2 *)0x1358 = uVar1;
  }
  FUN_12c1_0934();
  return *(undefined2 *)0x1358;
}


