/* 1885:0004 */

undefined2 __cdecl16far FUN_1885_0004(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if ((*(char *)0x1062 == '\0') &&
     ((uVar2 = (int)param_1 >> 0xf, (*(byte *)(param_1 + 0xc170) & 6) != 0 ||
      ((*(byte *)((((int)((param_1 ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2) + 0xb6c) & 6) != 0)))) {
    if (*(int *)0xc22 == 0) {
      FUN_1def_23c5(0x17d4,0x24,2,6,0xffff);
      *(undefined2 *)0xc22 = 1;
    }
    if (((*(byte *)(param_1 + 0xc170) & 4) == 0) &&
       ((*(byte *)((((int)((param_1 ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2) + 0xb6c) & 4) == 0)) {
      uVar1 = 2;
    }
    else {
      uVar1 = 4;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


