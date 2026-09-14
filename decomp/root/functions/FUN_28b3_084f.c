/* 28b3:084f */

void __cdecl16far FUN_28b3_084f(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  FUN_32b2_02bc();
  if ((0 < param_1) && (param_1 < 5)) {
    iVar3 = 0;
    do {
      iVar1 = param_2 + iVar3 * -2;
      *(byte *)((param_2 - iVar3) + 0x1e) = *(byte *)(iVar1 + 0x1c) | *(byte *)(iVar1 + 0x1e);
      *(byte *)((param_2 - iVar3) + 0x1f) = *(byte *)(iVar1 + 0x1d) | *(byte *)(iVar1 + 0x1f);
      iVar3 = iVar3 + 2;
    } while (iVar3 < 0xf);
    if (param_1 == 1) {
      iVar3 = 0;
      do {
        puVar2 = (undefined1 *)(iVar3 + param_2);
        *puVar2 = puVar2[0x10];
        puVar2[0x10] = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10);
    }
    if (1 < param_1) {
      iVar3 = 0;
      do {
        *(undefined1 *)(iVar3 + param_2) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10);
    }
    if (2 < param_1) {
      iVar3 = 8;
      do {
        *(undefined1 *)(iVar3 + param_2) = ((undefined1 *)(iVar3 + param_2))[8];
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x18);
      iVar3 = 0x18;
      do {
        *(undefined1 *)(iVar3 + param_2) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
    }
  }
  return;
}


