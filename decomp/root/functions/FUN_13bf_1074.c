/* 13bf:1074 */

void __cdecl16far FUN_13bf_1074(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 ******local_10;
  int local_e;
  undefined2 uStack_c;
  int local_a;
  undefined2 local_8;
  int iVar3;
  
  FUN_32b2_02bc();
  if (1 < *param_1) {
    return;
  }
  *param_1 = 2;
  local_8 = 0;
  local_a = 0x32b2;
  uStack_c = 0x4c88;
  FUN_1885_5256();
  local_8 = 0x2f;
  local_a = 0x78;
  uStack_c = 0x11;
  local_e = 1;
  local_10 = (undefined2 ******)0x1885;
  FUN_1885_1f1b();
  local_8 = 0;
  local_a = 6;
  uStack_c = 2;
  local_e = 1;
  local_10 = (undefined2 ******)0x15fe;
  FUN_1def_23c5();
  if ((*(int *)0x116c == 0) || (*(int *)0x116c == -1)) {
    local_8 = 0;
    local_a = 0;
    uStack_c = 2;
    local_e = 6;
    local_10 = (undefined2 ******)0x1f;
    FUN_1def_1460(0x20,0x11,0x36);
  }
  local_8 = 0;
  local_a = 0;
  uStack_c = 2;
  local_e = 5;
  local_10 = (undefined2 ******)0x1603;
  FUN_1def_23c5();
  iVar1 = *(int *)0x116c;
  if (iVar1 < 0) {
    iVar1 = -(iVar1 + 1);
  }
  for (iVar3 = 1; iVar3 < 5; iVar3 = iVar3 + 1) {
    if (iVar1 == iVar3) {
      local_8 = 0;
      local_a = 0;
      uStack_c = 2;
      local_e = 6;
      local_10 = (undefined2 ******)0x1f;
      FUN_1def_1460(iVar3 * 0x10 + 0x28,0x11,iVar3 * 0x10 + 0x38);
    }
    local_8 = 0;
    local_a = 0;
    uStack_c = 2;
    local_e = 0;
    local_10 = &local_10;
    FUN_1def_23c5();
    local_8 = 0;
    local_a = 0;
    uStack_c = 0;
    local_e = 0;
    local_10 = (undefined2 ******)0x14;
    FUN_1def_1460(0xfffd,0x1b,0xffff);
  }
  local_8 = 0;
  local_a = 6;
  uStack_c = 3;
  local_e = 1;
  local_10 = (undefined2 ******)0x744;
  FUN_1def_23c5();
  if (*(int *)0xcb6 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 5;
  }
  local_8 = 0;
  local_a = 0;
  uStack_c = 2;
  local_10 = (undefined2 ******)0x2f;
  local_e = 5 - iVar1;
  FUN_1def_1460(0x20,0x21,0x36);
  local_8 = 0;
  uStack_c = 3;
  local_e = 5;
  local_10 = (undefined2 ******)0x1607;
  local_a = iVar1;
  FUN_1def_23c5();
  local_8 = 0;
  local_a = 0;
  uStack_c = 2;
  local_10 = (undefined2 ******)0x2f;
  local_e = iVar1;
  FUN_1def_1460(0x38,0x21,0x46);
  local_8 = 0;
  uStack_c = 3;
  local_e = 8;
  local_10 = (undefined2 ******)0x160b;
  local_a = 5 - iVar1;
  FUN_1def_23c5();
  uVar2 = (int)*(uint *)0x1c6 >> 0xf;
  if ((int)((*(uint *)0x1c6 ^ uVar2) - uVar2) < 0x32) {
    local_10 = (undefined2 ******)0x160e;
  }
  else if (*(int *)0x1c6 < 0x33) {
    if (-0x33 < *(int *)0x1c6) goto LAB_13bf_12eb;
    local_10 = (undefined2 ******)0x161c;
  }
  else {
    local_10 = (undefined2 ******)0x1615;
  }
  local_8 = 0;
  local_a = 6;
  uStack_c = 3;
  local_e = 10;
  FUN_1def_23c5();
LAB_13bf_12eb:
  local_8 = 0;
  local_a = 0;
  uStack_c = 1;
  local_e = 7;
  local_10 = (undefined2 ******)0x30;
  FUN_1def_1460(0x1f,0x11,0x37);
  local_8 = 0;
  local_a = 0;
  uStack_c = 0;
  local_e = 7;
  local_10 = (undefined2 ******)0x30;
  FUN_1def_1460(0x48,0x20,0x48);
  local_8 = 0;
  local_a = 0;
  uStack_c = 1;
  local_e = 7;
  local_10 = (undefined2 ******)0x20;
  FUN_1def_1460(0,*(undefined2 *)0xa5e,*(undefined2 *)0xa58);
  local_8 = 0;
  local_a = 0;
  uStack_c = 1;
  local_e = 7;
  local_10 = (undefined2 ******)0x30;
  FUN_1def_1460(0,*(undefined2 *)0xa5e,*(undefined2 *)0xa58);
  local_8 = 0x1def;
  local_a = 0x4f68;
  FUN_1885_1f49();
  return;
}


