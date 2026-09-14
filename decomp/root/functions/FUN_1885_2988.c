/* 1885:2988 */

undefined2 __cdecl16far FUN_1885_2988(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_16;
  int local_14;
  int iVar4;
  int iVar5;
  
  FUN_32b2_02bc();
  if (-1 < param_1) {
    FUN_1885_3b7a();
    iVar4 = 0;
    do {
      *(undefined1 *)(iVar4 + -0x4b5a) = 0;
      *(undefined1 *)(iVar4 + -0x4488) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x100);
    iVar4 = 0;
    for (uVar3 = 1;
        (iVar4 <= *(int *)0x14a && ((iVar4 < *(int *)0x14a || (uVar3 <= *(uint *)0x148))));
        uVar3 = uVar3 + 1) {
      iVar5 = iVar4;
      iVar1 = FUN_1000_013f(uVar3,iVar4);
      *(undefined1 *)(*(byte *)(iVar1 + 0x12) + 0xb4a6) = 1;
      iVar4 = iVar5 + (uint)(0xfffe < uVar3);
    }
    iVar4 = 0;
    for (uVar3 = 1;
        (iVar4 <= *(int *)0x14e && ((iVar4 < *(int *)0x14e || (uVar3 <= *(uint *)0x14c))));
        uVar3 = uVar3 + 1) {
      iVar5 = iVar4;
      iVar1 = FUN_1000_0271(uVar3,iVar4);
      *(undefined1 *)(*(byte *)(iVar1 + 0x1c) + 0xb4a6) = 1;
      iVar4 = iVar5 + (uint)(0xfffe < uVar3);
    }
    for (iVar5 = 1; iVar5 <= *(int *)0x152; iVar5 = iVar5 + 1) {
      iVar1 = FUN_1000_03ef(iVar5);
      *(undefined1 *)(*(byte *)(iVar1 + 8) + 0xb4a6) = 1;
    }
    for (iVar5 = 1; iVar5 <= *(int *)0x150; iVar5 = iVar5 + 1) {
      iVar1 = FUN_1000_0398(iVar5);
      *(undefined1 *)(*(byte *)(iVar1 + 0x15) + 0xbb78) = 1;
    }
  }
  if (*(char *)0xb782 == '\0') {
    if (param_1 != 0) {
      FUN_1885_5256(0);
      uVar3 = (int)*(uint *)0xb310 >> 0xf;
      local_14 = ((int)((*(uint *)0xb310 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3;
      FUN_1def_12e8(0,0,*(undefined2 *)0x1b3e,*(undefined2 *)0x1b40);
      for (local_16 = local_14 * 0x10; local_16 <= local_14 * 0x10 + 0xf; local_16 = local_16 + 1) {
        if (*(char *)(local_16 + -0x4b5a) == '\0') {
          local_16 = 0;
        }
        else {
          local_16 = 3;
        }
        FUN_1def_1460(1,3,7,4);
        if (*(char *)(local_16 + -0x4488) == '\0') {
          local_16 = 0;
        }
        else {
          local_16 = 3;
        }
        local_14 = 0x1def;
        FUN_1def_1460(8,3,0xd,4);
      }
    }
    uVar2 = FUN_1885_1f49();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


