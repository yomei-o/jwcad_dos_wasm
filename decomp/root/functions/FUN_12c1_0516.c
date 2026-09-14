/* 12c1:0516 */

undefined2 FUN_12c1_0516(undefined2 param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  int iVar3;
  undefined1 unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  undefined4 local_8;
  
  iVar3 = FUN_32b2_24fa();
  *(undefined1 *)0xad13 = 0x35;
  *(undefined1 *)0xad12 = unaff_SI;
  FUN_32b2_29f4(0xad12,0xad12,0xad2a);
  if (iVar3 != 0) {
    unaff_DI = unaff_DI + *(int *)0xad14;
  }
  uVar1 = *(undefined2 *)0xad2a;
  *(int *)0xad32 = unaff_DI;
  *(undefined2 *)0xad34 = uVar1;
  *(undefined2 *)0xad24 = param_1;
  while( true ) {
    if (*(char *)*(undefined2 *)0xad24 == '\0') {
      return 1;
    }
    pcVar2 = (char *)*(undefined2 *)0xad32;
    uVar1 = *(undefined2 *)0xad34;
    *(int *)0xad32 = *(int *)0xad32 + 1;
    local_8 = (char *)CONCAT22(uVar1,pcVar2);
    if (*local_8 != *(char *)*(undefined2 *)0xad24) break;
    *(int *)0xad24 = *(int *)0xad24 + 1;
  }
  return 0;
}


