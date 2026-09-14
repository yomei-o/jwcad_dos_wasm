/* 1000:00cd */

void __cdecl16far FUN_1000_00cd(void)

{
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  FUN_1000_0082(0,*(undefined2 *)0xbee2,*(undefined2 *)0xbee0);
  if (*(int *)0xbee2 + 2 <= *(int *)0xbede) {
    FUN_1000_0082(1,*(int *)0xbee2 + 1,*(undefined2 *)0xbee0);
  }
  return;
}


