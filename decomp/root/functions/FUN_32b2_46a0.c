/* 32b2:46a0 */

undefined2 __cdecl16far FUN_32b2_46a0(char *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_136 [21];
  char local_121;
  uint local_120;
  uint local_11e;
  int local_11c;
  int local_11a;
  int local_10a;
  int local_108;
  undefined1 local_106 [260];
  
  uVar2 = 0x3a75;
  iVar1 = FUN_3a75_00e4(param_1,0x892f);
  if (iVar1 == 0) {
    if (param_1[1] == ':') {
      if ((*param_1 != '\0') && (param_1[2] == '\0')) goto LAB_32b2_46c0;
      if ((*(byte *)(*param_1 + 0x7c67) & 1) == 0) {
        local_108 = (int)*param_1;
      }
      else {
        local_108 = *param_1 + 0x20;
      }
      local_108 = local_108 + -0x60;
    }
    else {
      uVar2 = 0x32b2;
      local_108 = FUN_32b2_44da();
    }
    iVar1 = FUN_32b2_4bb7(uVar2,param_1,0x16,local_136);
    if (iVar1 != 0) {
      iVar1 = FUN_3a75_00e4(param_1,0x8932);
      if ((((iVar1 == 0) || (local_10a = FUN_32b2_484e(local_106,param_1,0x104), local_10a == 0)) ||
          (iVar1 = FUN_32b2_21c4(local_10a), iVar1 != 3)) ||
         (iVar1 = FUN_32b2_4818(local_108), iVar1 == 0)) goto LAB_32b2_46c0;
      local_121 = '\x10';
      local_11a = 0;
      local_11c = 0;
      local_11e = 0x21;
      local_120 = 0;
    }
    param_2[1] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    *param_2 = local_108 + -1;
    param_2[6] = local_108 + -1;
    iVar1 = FUN_32b2_45e4((int)local_121,param_1);
    param_2[2] = iVar1;
    param_2[3] = 1;
    param_2[7] = local_11c;
    param_2[8] = local_11a;
    iVar1 = FUN_32b2_2e78(local_11e >> 9,(local_11e & 0x1e0) >> 5,local_11e & 0x1f,local_120 >> 0xb,
                          (local_120 & 0x7e0) >> 5,(local_120 & 0x1f) << 1);
    param_2[0xd] = iVar1;
    param_2[0xe] = local_11a;
    param_2[0xb] = iVar1;
    param_2[0xc] = local_11a;
    param_2[9] = iVar1;
    param_2[10] = local_11a;
    uVar2 = 0;
  }
  else {
LAB_32b2_46c0:
    *(undefined2 *)0x7a34 = 2;
    uVar2 = 0xffff;
  }
  return uVar2;
}


