/* 32b2:6d14 */

void __cdecl16far FUN_32b2_6d14(void)

{
  int iVar1;
  byte bVar2;
  undefined2 *in_BX;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x8ac6;
  puVar3 = (undefined2 *)(iVar1 + 0xc);
  *puVar3 = *in_BX;
  *(undefined2 *)(iVar1 + 0xe) = in_BX[1];
  *(undefined2 *)(iVar1 + 0x10) = in_BX[2];
  *(undefined2 *)(iVar1 + 0x12) = in_BX[3];
  if (puVar3 != (undefined2 *)0x8ab2) {
    *(undefined2 *)0x8ac6 = puVar3;
    *(undefined1 *)(iVar1 + 10) = 7;
    *(undefined2 *)(iVar1 + 8) = puVar3;
    return;
  }
  *(undefined2 *)0x8dd8 = 0x3031;
  bVar2 = 0x8a;
  if (*(int *)0x8946 != 0) {
    bVar2 = (*(code *)*(undefined2 *)0x8944)(0x32b2);
  }
  if (bVar2 == 0x8c) {
    *(undefined2 *)0x8dd8 = 0x3231;
  }
  *(uint *)0x8dda = (uint)bVar2;
  FUN_32b2_0294();
  FUN_32b2_3534();
  FUN_32b2_05af(0xfd);
  FUN_32b2_05af(*(int *)0x8dda + -0x1c);
  FUN_32b2_01d1(0x32b2,*(undefined2 *)0x8dda);
  return;
}


