/* 32b2:0662 */

undefined2 __cdecl16far FUN_32b2_0662(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  char local_10;
  undefined1 uStack_f;
  undefined1 local_e [8];
  int local_6;
  undefined1 *local_4;
  
  uVar2 = 0xffff;
  if (((*(byte *)(param_1 + 6) & 0x40) != 0) || ((*(byte *)(param_1 + 6) & 0x83) == 0))
  goto LAB_32b2_0710;
  uVar2 = FUN_32b2_0c78(param_1);
  local_6 = *(int *)(param_1 + 0xa4);
  FUN_32b2_0a6e(param_1);
  iVar1 = FUN_32b2_1ac2(0x32b2,*(undefined1 *)(param_1 + 7));
  if (-1 < iVar1) {
    if (local_6 == 0) goto LAB_32b2_0710;
    FUN_32b2_2166(&local_10,0x7a8c);
    local_4 = local_e;
    if (local_10 == '\\') {
      local_4 = &uStack_f;
    }
    else {
      FUN_32b2_2126(&local_10,0x7a8e);
    }
    FUN_32b2_22e0(0x32b2,local_6,local_4,10);
    iVar1 = FUN_32b2_4b78(0x32b2,&local_10);
    if (iVar1 == 0) goto LAB_32b2_0710;
  }
  uVar2 = 0xffff;
LAB_32b2_0710:
  *(undefined1 *)(param_1 + 6) = 0;
  return uVar2;
}


