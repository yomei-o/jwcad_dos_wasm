/* 12c1:05b6 */

undefined2 __cdecl16near FUN_12c1_05b6(void)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined1 unaff_SI;
  undefined2 unaff_DS;
  char *local_8;
  undefined2 uStack_6;
  
  FUN_32b2_24fa();
  *(undefined1 *)0xad13 = 0x35;
  *(undefined1 *)0xad12 = unaff_SI;
  FUN_32b2_29f4(0xad12,0xad12,0xad2a);
  uVar1 = *(undefined2 *)0xad2a;
  *(int *)0xad32 = *(int *)0xad14 + 0x30;
  *(undefined2 *)0xad34 = uVar1;
  *(undefined2 *)0xad24 = 0x15e8;
  while( true ) {
    if (*(char *)*(undefined2 *)0xad24 == '\0') {
      uVar1 = *(undefined2 *)0xad2a;
      *(int *)0xad20 = *(int *)0xad14 + 0x20;
      *(undefined2 *)0xad22 = uVar1;
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


