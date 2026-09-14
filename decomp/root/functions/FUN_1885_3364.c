/* 1885:3364 */

void __cdecl16far FUN_1885_3364(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  byte extraout_DH;
  uint uVar4;
  uint uVar5;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_78;
  
  FUN_32b2_02bc();
  local_78 = 0;
  if ((*(char *)0x7e != '\0') && (*(char *)0xd14 != '\x04')) {
    if ((0 < param_1) && (param_1 < 0x10)) {
      local_78 = *(uint *)0x80;
    }
    if ((0xf < param_1) && (param_1 < 0x1f)) {
      local_78 = *(uint *)0x82;
    }
    if (local_78 != 0) {
      FUN_1885_3b7a();
      FUN_32b2_6d9b();
      FUN_32b2_6eb1();
      FUN_32b2_75a4();
      FUN_32b2_6d14();
      uVar4 = FUN_32b2_6f61();
      if ((local_78 & uVar4) != 0) {
        FUN_21f2_071c();
        pcVar1 = (code *)swi(0x3f);
        (*pcVar1)();
        (&stack0xfffe)[unaff_SI] = (&stack0xfffe)[unaff_SI] ^ extraout_DH;
        *(undefined1 *)0xd14 = 4;
      }
    }
  }
  if ((((0 < param_1) && (param_1 < 0x1f)) && (*(char *)(param_1 + 0xba0) != '\0')) &&
     ((*(char *)0xba0 != '\0' && ((*(char *)0xbbf != '\0' || (param_1 == *(int *)0xa62)))))) {
    uVar4 = (int)*(uint *)0xb310 >> 0xf;
    uVar4 = ((int)((*(uint *)0xb310 ^ uVar4) - uVar4) >> 4 ^ uVar4) - uVar4;
    uVar5 = *(int *)0xb310 % 0x10;
    if (*(byte *)0xba0 >> 4 != 0) {
      uVar4 = (uint)(*(byte *)(param_1 + 0xba0) >> 4);
    }
    if ((*(byte *)0xba0 & 0xf) != 0) {
      uVar5 = *(byte *)(param_1 + 0xba0) & 0xf;
    }
    uVar5 = uVar4 * 0x10 + uVar5;
    iVar2 = FUN_1885_0004();
    if (iVar2 == 0) {
      *(uint *)0xb310 = uVar5;
      uVar4 = (int)uVar5 >> 0xf;
      iVar3 = ((int)((uVar5 ^ uVar4) - uVar4) >> 4 ^ uVar4) - uVar4;
      iVar2 = *(int *)0xb310;
      *(undefined1 *)(iVar2 + -0x4c78) = 1;
      *(undefined1 *)(iVar2 + -0x3e90) = 1;
      *(undefined1 *)(iVar3 + 0xb7c) = 1;
      *(undefined1 *)(iVar3 + 0xb6c) = 1;
      *(undefined1 *)(iVar3 + 0xb8e) = (char)iVar2;
      if (*(char *)(iVar2 + -0x3d6e) != '\0') {
        *(uint *)0xa6c = (uint)*(byte *)(iVar2 + -0x3d6e);
      }
      if (*(char *)(*(int *)0xb310 + -0x4996) != '\0') {
        *(uint *)0xa6a = (uint)*(byte *)(*(int *)0xb310 + -0x4996);
      }
      FUN_1885_0209();
      FUN_1885_2e9a();
    }
  }
  return;
}


