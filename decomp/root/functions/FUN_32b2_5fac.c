/* 32b2:5fac */

void __cdecl16near FUN_32b2_5fac(void)

{
  int iVar1;
  uint uVar2;
  uint in_BX;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
code_r0x00038acc:
  *(undefined1 *)0x8b0a = 10;
  iVar1 = FUN_32b2_60b7();
  if ((bool)in_CF) {
    return;
  }
  in_CF = in_BX < 0xccc;
  if (in_BX < 0xccd) goto code_r0x00038adc;
  goto LAB_32b2_5fa9;
code_r0x00038adc:
  uVar2 = iVar1 + in_BX * 2;
  in_CF = CARRY2(in_BX * 8,uVar2);
  in_BX = in_BX * 8 + uVar2;
  if ((int)in_BX < 0) {
LAB_32b2_5fa9:
    in_BX = 0x3fff;
  }
  goto code_r0x00038acc;
}


