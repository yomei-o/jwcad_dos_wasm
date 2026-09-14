/* 2bb4:62d2 */

undefined2 __cdecl16far FUN_2bb4_62d2(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 uVar5;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  FUN_32b2_6cc6();
  FUN_32b2_7258();
  FUN_32b2_6eb1();
  uVar6 = FUN_1def_2828(0x32b2,*(undefined2 *)0x93c0,*(undefined2 *)0x93c2,*(undefined2 *)0x93c4,
                        *(undefined2 *)0x93c6,*(undefined2 *)0x93c0,*(undefined2 *)0x93c2,
                        *(undefined2 *)0x93c4,*(undefined2 *)0x93c6);
  puVar1 = (undefined2 *)*(int *)(unaff_BP + 0x1a);
  *puVar1 = (int)uVar6;
  puVar1[1] = (int)((ulong)uVar6 >> 0x10);
  uVar2 = *(uint *)(unaff_BP + -0x26);
  uVar3 = *(uint *)(unaff_BP + -0x24);
  if ((*(uint *)(unaff_BP + -0x2a) == uVar2) && (*(uint *)(unaff_BP + -0x28) == uVar3)) {
LAB_2bb4_6340:
    uVar5 = 1;
  }
  else {
    if ((*(uint *)(unaff_BP + -0x28) <= uVar3) &&
       ((*(uint *)(unaff_BP + -0x28) < uVar3 || (*(uint *)(unaff_BP + -0x2a) < uVar2)))) {
      puVar4 = (uint *)*(int *)(unaff_BP + 0x1a);
      if ((*(uint *)(unaff_BP + -0x28) <= puVar4[1]) &&
         ((((puVar4[1] != *(uint *)(unaff_BP + -0x28) || (*(uint *)(unaff_BP + -0x2a) < *puVar4)) &&
           (puVar4[1] <= uVar3)) && ((puVar4[1] < uVar3 || (*puVar4 < uVar2))))))
      goto LAB_2bb4_6340;
    }
    uVar2 = *(uint *)(unaff_BP + -0x24);
    if ((uVar2 <= *(uint *)(unaff_BP + -0x28)) &&
       ((*(uint *)(unaff_BP + -0x28) != uVar2 ||
        (*(uint *)(unaff_BP + -0x26) < *(uint *)(unaff_BP + -0x2a))))) {
      puVar4 = (uint *)*(int *)(unaff_BP + 0x1a);
      if ((*(uint *)(unaff_BP + -0x28) < puVar4[1]) ||
         (((*(uint *)(unaff_BP + -0x28) <= puVar4[1] && (*(uint *)(unaff_BP + -0x2a) < *puVar4)) ||
          ((puVar4[1] <= uVar2 && ((puVar4[1] < uVar2 || (*puVar4 < *(uint *)(unaff_BP + -0x26))))))
          ))) {
        return 2;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


