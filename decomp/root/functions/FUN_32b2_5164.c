/* 32b2:5164 */

void __cdecl16near FUN_32b2_5164(void)

{
  uint uVar1;
  undefined2 *puVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  undefined2 *unaff_SI;
  undefined2 unaff_DS;
  
  puVar2 = (undefined2 *)*(undefined2 *)0x8ac6;
  cVar4 = (char)unaff_SI[2];
  iVar6 = CONCAT11(cVar4,(char)((uint)unaff_SI[1] >> 8));
  uVar1 = unaff_SI[3];
  uVar7 = iVar6 << 3;
  if (((char)*unaff_SI != '\0' || (char)unaff_SI[1] != '\0') || (char)((uint)*unaff_SI >> 8) != '\0'
     ) {
    uVar7 = uVar7 | 1;
  }
  uVar9 = ((CONCAT11((char)uVar1,(char)((uint)unaff_SI[2] >> 8)) << 1 | (uint)(cVar4 < '\0')) << 1 |
          (uint)(iVar6 << 1 < 0)) << 1 | (uint)(iVar6 << 2 < 0) | 0x8000;
  uVar5 = uVar1 & 0x7ff0;
  if (uVar5 < 0x47e1) {
    if (0x37ff < uVar5) {
      iVar6 = (uVar5 + 0xc800) * 8;
      bVar8 = (byte)(uVar7 >> 8);
      if ((0x80 < (byte)uVar7) || ((0x7f < (byte)uVar7 && ((uVar7 & 0x100) != 0)))) {
        uVar7 = (uint)(byte)(bVar8 + 1) << 8;
        uVar5 = (uint)(0xfe < bVar8);
        bVar3 = CARRY2(uVar9,uVar5);
        uVar9 = uVar9 + uVar5;
        if ((bVar3) && (iVar6 = iVar6 + 0x80, iVar6 == 0x7f80)) goto LAB_32b2_51d9;
      }
      if (iVar6 != 0) {
        puVar2[1] = CONCAT11((byte)((uint)iVar6 >> 8) | (byte)(uVar1 >> 8) & 0x80,
                             (byte)iVar6 | (byte)(uVar9 >> 8) & 0x7f);
        *puVar2 = CONCAT11((char)uVar9,(char)(uVar7 >> 8));
        return;
      }
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
LAB_32b2_51d9:
  FUN_32b2_72f4();
  return;
}


