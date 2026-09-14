/* 32b2:45e4 */

uint __cdecl16near FUN_32b2_45e4(byte param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  
  pcVar4 = param_2;
  if (param_2[1] == ':') {
    pcVar4 = param_2 + 2;
  }
  if ((((*pcVar4 == '\\') || (*pcVar4 == '/')) && (pcVar4[1] == '\0')) ||
     (((param_1 & 0x10) != 0 || (*pcVar4 == '\0')))) {
    uVar3 = 0x4040;
  }
  else {
    uVar3 = 0x8000;
  }
  uVar3 = uVar3 | CONCAT11(1,-((param_1 & 5) == 0)) & 0xff80;
  iVar1 = FUN_32b2_2fe6(param_2,0x2e);
  if (iVar1 != 0) {
    iVar2 = FUN_32b2_2fa4(iVar1,0x8920);
    if (iVar2 != 0) {
      iVar2 = FUN_32b2_2fa4(iVar1,0x8925);
      if (iVar2 != 0) {
        iVar1 = FUN_32b2_2fa4(iVar1,0x892a);
        if (iVar1 != 0) goto LAB_32b2_4681;
      }
    }
    uVar3 = uVar3 | 0x40;
  }
LAB_32b2_4681:
  return uVar3 | (uVar3 & 0x1c0) >> 3 | (uVar3 & 0x1c0) >> 6;
}


