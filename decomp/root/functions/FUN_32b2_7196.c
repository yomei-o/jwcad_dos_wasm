/* 32b2:7196 */

undefined2 FUN_32b2_7196(void)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  byte bVar5;
  char cVar6;
  char in_AF;
  char cVar7;
  
  uVar4 = 0x18;
  iVar3 = *(int *)0x8ac6;
  if (*(char *)(iVar3 + -2) == '\a') {
    uVar4 = 0x1a;
    if (*(char *)(iVar3 + -0xe) != '\a') {
      *(int *)0x8ac6 = iVar3 + -0xc;
      FUN_32b2_50d5();
      goto LAB_32b2_71b2;
    }
  }
  else if (*(char *)(iVar3 + -0xe) == '\a') {
    uVar4 = 0x1a;
    FUN_32b2_50d5();
  }
  *(int *)0x8ac6 = iVar3 + -0xc;
LAB_32b2_71b2:
  *(int *)(iVar3 + -0x10) = iVar3 + -0xc;
  if (0x1b < uVar4) {
    *(int *)0x8ac6 = *(int *)0x8ac6 + -0xc;
    *(undefined1 **)0x8ddc = &stack0xfffa;
    uVar2 = (*(code *)*(undefined2 *)(uVar4 + 0x8db2))();
    return uVar2;
  }
  if (uVar4 < 0x18) {
    *(undefined1 **)0x8ddc = &stack0xfffa;
    uVar2 = (*(code *)*(undefined2 *)(uVar4 + 0x8db6))();
    return uVar2;
  }
  puVar1 = (uint *)0x8ac6;
  bVar5 = *puVar1 < 0xc;
  *puVar1 = *puVar1 - 0xc;
  cVar7 = *puVar1 == 0;
  cVar6 = '\0';
  *(undefined1 **)0x8ddc = &stack0xfffa;
  (*(code *)*(undefined2 *)(uVar4 + 0x8db6))();
  iVar3 = ((byte)(cVar7 << 6 | in_AF << 4 | cVar6 << 2 | bVar5) & 0x41) << 7;
  bVar5 = (byte)iVar3;
  return CONCAT11((char)((uint)iVar3 >> 8) << 1 | bVar5,bVar5);
}


