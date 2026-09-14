/* 32b2:7199 */

undefined2 __cdecl16far FUN_32b2_7199(void)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint in_BX;
  undefined2 unaff_DS;
  byte bVar4;
  char cVar5;
  char in_AF;
  char cVar6;
  
  iVar3 = *(int *)0x8ac6;
  if (*(char *)(iVar3 + -2) == '\a') {
    in_BX = in_BX + 2;
    if (*(char *)(iVar3 + -0xe) != '\a') {
      *(int *)0x8ac6 = iVar3 + -0xc;
      FUN_32b2_50d5();
      goto LAB_32b2_71b2;
    }
  }
  else if (*(char *)(iVar3 + -0xe) == '\a') {
    in_BX = in_BX + 2;
    FUN_32b2_50d5();
  }
  *(int *)0x8ac6 = iVar3 + -0xc;
LAB_32b2_71b2:
  *(int *)(iVar3 + -0x10) = iVar3 + -0xc;
  if (0x1b < in_BX) {
    *(int *)0x8ac6 = *(int *)0x8ac6 + -0xc;
    *(undefined1 **)0x8ddc = &stack0xfffa;
    uVar2 = (*(code *)*(undefined2 *)(in_BX + 0x8db2))();
    return uVar2;
  }
  if (in_BX < 0x18) {
    *(undefined1 **)0x8ddc = &stack0xfffa;
    uVar2 = (*(code *)*(undefined2 *)(in_BX + 0x8db6))();
    return uVar2;
  }
  puVar1 = (uint *)0x8ac6;
  bVar4 = *puVar1 < 0xc;
  *puVar1 = *puVar1 - 0xc;
  cVar6 = *puVar1 == 0;
  cVar5 = '\0';
  *(undefined1 **)0x8ddc = &stack0xfffa;
  (*(code *)*(undefined2 *)(in_BX + 0x8db6))();
  iVar3 = ((byte)(cVar6 << 6 | in_AF << 4 | cVar5 << 2 | bVar4) & 0x41) << 7;
  bVar4 = (byte)iVar3;
  return CONCAT11((char)((uint)iVar3 >> 8) << 1 | bVar4,bVar4);
}


