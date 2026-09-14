/* 32b2:2ca0 */

void __cdecl16far FUN_32b2_2ca0(undefined2 *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  uint in_CX;
  uint uVar3;
  uint uVar4;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uVar3 = in_CX;
  uVar6 = extraout_DX;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uVar4 = uVar3;
  (*pcVar1)(uVar3 >> 8);
  uVar5 = extraout_DX_00;
  if ((uVar6 != extraout_DX_00) && (uVar5 = extraout_DX_00, (char)uVar3 == '\x17')) {
    uVar4 = in_CX;
    uVar5 = uVar6;
  }
  uVar2 = FUN_32b2_2e78(uVar4 - 0x7bc,uVar5 >> 8);
  if (param_1 != (undefined2 *)0x0) {
    param_1[1] = uVar5;
    *param_1 = uVar2;
  }
  return;
}


