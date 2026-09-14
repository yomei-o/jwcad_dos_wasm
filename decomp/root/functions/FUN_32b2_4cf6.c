/* 32b2:4cf6 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_32b2_4cf6(void)

{
  byte *pbVar1;
  code *pcVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (0x37 < (byte)((uint)*(undefined2 *)(*(int *)0x893a + 0x18) >> 8)) {
    pbVar1 = (byte *)(*(int *)0x893a + 0x2e);
    *pbVar1 = *pbVar1 | 1;
    FUN_32b2_4ce1();
    return;
  }
  FUN_32b2_4ce1();
  return;
}


