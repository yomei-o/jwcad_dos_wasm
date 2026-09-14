/* 32b2:1528 */

undefined2 __cdecl16far FUN_32b2_1528(undefined2 param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return 0;
  }
  if ((byte)(cVar1 - 0x20U) < 0x59) {
    bVar2 = *(byte *)(ulong)((byte)(cVar1 - 0x20U) + 0x7be2) & 0xf;
  }
  else {
    bVar2 = 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x0003408d */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*(undefined2 *)
                     ((char)(*(byte *)(ulong)((byte)(bVar2 * '\b') + 0x7be2) >> 4) * 2 + 0x1518))
                    (cVar1);
  return uVar3;
}


