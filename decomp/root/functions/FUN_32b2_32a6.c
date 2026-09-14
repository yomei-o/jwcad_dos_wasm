/* 32b2:32a6 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined2 __cdecl16far FUN_32b2_32a6(uint param_1)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  undefined2 uVar4;
  int in_CX;
  uint *in_BX;
  undefined2 unaff_DS;
  bool bVar5;
  uint local_4;
  
  uVar3 = param_1;
  if (param_1 == 2) {
    bVar5 = false;
    pcVar2 = (code *)swi(0x23);
    (*pcVar2)();
    if (bVar5) {
      pcVar2 = (code *)swi(0x21);
      uVar3 = (*pcVar2)();
      goto LAB_32b2_32bd;
    }
LAB_32b2_332e:
    uVar4 = 0;
  }
  else {
LAB_32b2_32bd:
    bVar5 = uVar3 < 8;
    if (uVar3 == 8) {
      bVar5 = false;
      in_BX = (uint *)(*(uint *)0x8eba | *(uint *)0x8ebc);
      if (in_BX != (uint *)0x0) goto LAB_32b2_32cc;
    }
    else {
LAB_32b2_32cc:
      FUN_32b2_346c();
      if (!bVar5) {
        pcVar1 = (code *)*in_BX;
        local_4 = in_BX[1];
        if ((local_4 == 0) && (pcVar1 < (code *)0x2)) {
          if (pcVar1 == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00035e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (*(code *)*(undefined2 *)(in_CX * 2 + 0x329a))();
            return uVar4;
          }
        }
        else {
          if (param_1 != 8) {
            *in_BX = 0;
            in_BX[1] = 0;
          }
          (*pcVar1)(0x32b2,param_1,0x8c);
        }
        goto LAB_32b2_332e;
      }
    }
    uVar4 = 0xffff;
  }
  return uVar4;
}


