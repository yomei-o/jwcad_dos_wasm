/* 12c1:000a */

undefined2 __cdecl16far FUN_12c1_000a(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (*(int *)0x1358 == 0) {
    uVar1 = FUN_12c1_012d();
    *(undefined2 *)0x1358 = uVar1;
  }
  FUN_12c1_0934();
  uVar1 = FUN_12c1_097e();
  *(undefined2 *)0x135c = uVar1;
  *(undefined2 *)0x135a = *(undefined2 *)0x135c;
  return *(undefined2 *)0x1358;
}


