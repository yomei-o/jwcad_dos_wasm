/* 32b2:33be */

uint * __cdecl16far FUN_32b2_33be(uint param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint *in_BX;
  undefined2 unaff_ES;
  uint *unaff_DS;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  
  bVar4 = param_1 < 8;
  if (param_1 == 8) {
    bVar4 = false;
    in_BX = (uint *)(*(uint *)0x8eba | *(uint *)0x8ebc);
    if (in_BX == (uint *)0x0) goto LAB_32b2_33d6;
  }
  FUN_32b2_346c();
  if (!bVar4) {
    puVar2 = (uint *)*in_BX;
    uVar5 = in_BX[1];
    if (((param_3 != 0) || (param_2 < 2)) || (4 < param_2)) {
      *in_BX = param_2;
      in_BX[1] = param_3;
      puVar3 = unaff_DS;
      if (((param_1 == 2) && ((param_3 != 0 || (param_2 != 0)))) && (*(int *)0x7c60 == 0)) {
        pcVar1 = (code *)swi(0x21);
        puVar3 = in_BX;
        (*pcVar1)(uVar5);
        *(undefined2 *)0x7c60 = unaff_ES;
        *(undefined2 *)0x7c62 = in_BX;
        uVar5 = 0x32b2;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        puVar2 = unaff_DS;
      }
      if (param_1 == 8) {
        (*(code *)*(undefined2 *)0x8eba)(0x32b2,uVar5);
      }
      return puVar2;
    }
  }
LAB_32b2_33d6:
  puVar2 = (uint *)FUN_32b2_0621();
  return puVar2;
}


