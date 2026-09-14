/* 28b3:0916 */

undefined2 __cdecl16far FUN_28b3_0916(uint param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_36;
  int local_34;
  int local_2e;
  undefined1 auStack_2c [14];
  byte local_1e [16];
  byte abStack_e [8];
  undefined2 uStack_6;
  
  uStack_6 = 0x9451;
  FUN_32b2_02bc();
  if ((0x2121 < param_1) && (param_1 < 0x2126)) {
    local_2e = 0;
    do {
      puVar4 = (undefined1 *)(local_2e * 2 + param_2);
      puVar4[1] = puVar4[0x10];
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      *puVar4 = 0;
      local_2e = local_2e + 1;
    } while (local_2e < 8);
  }
  if ((((param_1 == 0x2121) || (param_1 == 0x213c)) || (param_1 == 0x213d)) ||
     ((param_1 == 0x2141 || ((0x2149 < param_1 && (param_1 < 0x215c)))))) {
    local_2e = 0;
    do {
      auStack_2c[local_2e] = 0;
      local_2e = local_2e + 1;
    } while (local_2e < 0x26);
    for (local_34 = 0; local_34 < 8; local_34 = local_34 + 1) {
      pbVar2 = (byte *)(local_34 * 2 + param_2);
      for (local_2e = 0; local_2e < 8; local_2e = local_2e + 1) {
        iVar1 = local_2e * -2;
        uVar3 = 1 << ((byte)local_2e & 0x1f);
        local_36 = (byte)(1 << ((byte)local_34 & 0x1f));
        if ((*pbVar2 & uVar3) != 0) {
          local_1e[iVar1 + 1] = local_1e[iVar1 + 1] | local_36;
        }
        if ((uVar3 & pbVar2[1]) != 0) {
          abStack_e[iVar1 + 1] = abStack_e[iVar1 + 1] | local_36;
        }
        if ((uVar3 & pbVar2[0x10]) != 0) {
          local_1e[iVar1] = local_1e[iVar1] | local_36;
        }
        if ((uVar3 & pbVar2[0x11]) != 0) {
          abStack_e[iVar1] = abStack_e[iVar1] | local_36;
        }
      }
    }
    local_2e = 0;
    do {
      *(undefined1 *)(param_2 + local_2e) = auStack_2c[local_2e];
      local_2e = local_2e + 1;
    } while (local_2e < 0x26);
  }
  return 0;
}


