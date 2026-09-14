/* 32b2:0ade */

undefined2 * __cdecl16far
FUN_32b2_0ade(undefined2 param_1,byte *param_2,undefined2 param_3,undefined2 *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  undefined1 local_8;
  undefined1 local_6;
  
  bVar1 = *param_2;
  if (bVar1 == 0x77) {
    uVar4 = 0x301;
  }
  else {
    if (0x77 < bVar1) {
      return (undefined2 *)0x0;
    }
    if (bVar1 != 0x61) {
      if (bVar1 != 0x72) {
        return (undefined2 *)0x0;
      }
      uVar4 = 0;
      local_6 = 1;
      goto LAB_32b2_0b06;
    }
    uVar4 = 0x109;
  }
  local_6 = 2;
LAB_32b2_0b06:
  bVar2 = true;
  do {
    while( true ) {
      param_2 = param_2 + 1;
      if ((*param_2 == 0) || (!bVar2)) {
        iVar3 = FUN_32b2_1b5c(param_1,uVar4,param_3,0x1a4);
        if (iVar3 < 0) {
          return (undefined2 *)0x0;
        }
        *(int *)0x7a90 = *(int *)0x7a90 + 1;
        *(undefined1 *)(param_4 + 3) = local_6;
        *(undefined1 *)(param_4 + 0x50) = 0;
        param_4[1] = 0;
        param_4[0x52] = 0;
        *param_4 = 0;
        param_4[2] = 0;
        local_8 = (undefined1)iVar3;
        *(undefined1 *)((int)param_4 + 7) = local_8;
        return param_4;
      }
      bVar1 = *param_2;
      if (bVar1 != 0x74) break;
      if ((uVar4 & 0xc000) == 0) {
        uVar4 = uVar4 | 0x4000;
      }
      else {
LAB_32b2_0b2e:
        bVar2 = false;
      }
    }
    if (0x74 < bVar1) goto LAB_32b2_0b2e;
    if (bVar1 == 0x2b) {
      if ((uVar4 & 2) != 0) goto LAB_32b2_0b2e;
      uVar4 = uVar4 & 0xfffe | 2;
      local_6 = 0x80;
    }
    else {
      if ((bVar1 != 0x62) || ((uVar4 & 0xc000) != 0)) goto LAB_32b2_0b2e;
      uVar4 = uVar4 | 0x8000;
    }
  } while( true );
}


