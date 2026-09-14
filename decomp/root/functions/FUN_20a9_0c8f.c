/* 20a9:0c8f */

undefined4 __cdecl16near FUN_20a9_0c8f(void)

{
  uint uVar1;
  undefined2 in_AX;
  byte bVar2;
  byte in_CL;
  char in_CH;
  undefined2 in_DX;
  int iVar3;
  int unaff_BP;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  if (in_CH != '\0') {
    iVar3 = -*(int *)0x1cc2;
  }
  bVar2 = *(byte *)(unaff_BP + -0x1a) << (in_CL & 7) |
          *(byte *)(unaff_BP + -0x1a) >> 8 - (in_CL & 7);
  iVar4 = -(uint)(byte)(((in_CL & 0x1f) != 0) * ((bVar2 & 1) != 0));
  puVar5 = (undefined1 *)(iVar4 + *(int *)(unaff_BP + -0x1e) + iVar3);
  puVar6 = (undefined1 *)((iVar4 + *(int *)(unaff_BP + -8)) - iVar3);
  *(byte *)(unaff_BP + -0x1a) = bVar2;
  *(undefined2 *)(unaff_BP + -0x1e) = puVar5;
  *(undefined2 *)(unaff_BP + -8) = puVar6;
  out(0x3ce,CONCAT11(bVar2,8));
  *puVar5 = *puVar5;
  *puVar6 = *puVar6;
  bVar2 = *(byte *)(unaff_BP + -0x24) >> (in_CL & 7) |
          *(byte *)(unaff_BP + -0x24) << 8 - (in_CL & 7);
  uVar1 = (uint)(byte)(((in_CL & 0x1f) != 0) * ((char)bVar2 < '\0'));
  puVar5 = (undefined1 *)(uVar1 + *(int *)(unaff_BP + -6) + iVar3);
  puVar6 = (undefined1 *)((uVar1 + *(int *)(unaff_BP + -0x1c)) - iVar3);
  *(byte *)(unaff_BP + -0x24) = bVar2;
  *(undefined2 *)(unaff_BP + -6) = puVar5;
  *(undefined2 *)(unaff_BP + -0x1c) = puVar6;
  out(0x3ce,CONCAT11(bVar2,8));
  *puVar5 = *puVar5;
  *puVar6 = *puVar6;
  return CONCAT22(in_DX,in_AX);
}


