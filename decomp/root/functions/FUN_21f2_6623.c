/* 21f2:6623 */

void __cdecl16far FUN_21f2_6623(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 auStack_1e [6];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  undefined2 uStack_8;
  
  FUN_32b2_02bc();
  uStack_8 = 0;
  puVar5 = auStack_1e;
  puVar6 = auStack_1e;
  puVar4 = (undefined2 *)&stack0x0004;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  FUN_21f2_6476();
  if ((*(int *)0xbc0 == 0) && (*(int *)0x11c == 0)) {
    uStack_8 = *(undefined2 *)0xcb4;
    iStack_a = 1 - *(int *)0xcb2;
    uStack_c = 0;
    uStack_e = 3;
    uStack_10 = 0x32b2;
    uStack_12 = 0x858f;
    FUN_1def_13db();
    uStack_8 = 0x1def;
    iStack_a = 0x8597;
    FUN_1885_1f49();
    uStack_8 = 1;
    puVar4 = (undefined2 *)&stack0x0004;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    FUN_21f2_6476();
    uStack_8 = *(undefined2 *)0xcb4;
    iStack_a = *(undefined2 *)0xcb2;
    uStack_c = 0;
    uStack_e = 3;
    uStack_10 = 0x1885;
    uStack_12 = 0x85c5;
    FUN_1def_13db();
    uStack_8 = 0x1def;
    iStack_a = 0x85cd;
    FUN_1885_1f49();
  }
  return;
}


