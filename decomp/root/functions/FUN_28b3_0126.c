/* 28b3:0126 */

int __cdecl16far FUN_28b3_0126(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (((*(char *)(param_2 + param_1) == '^') && (iVar3 = FUN_3a75_02e8(param_1), iVar3 == 0)) &&
     (bVar1 = *(byte *)(param_1 + param_2 + 1), bVar1 != 0)) {
    param_2 = param_2 + 1;
    iVar3 = param_1;
    iVar4 = FUN_3a75_02e8();
    if (iVar4 == 0) {
      if (bVar1 == 0x75) {
        iVar3 = 1;
      }
      if (bVar1 == 100) {
        iVar3 = 2;
      }
      if (bVar1 == 0x6d) {
        iVar3 = -1;
      }
      if (bVar1 == 99) {
        iVar3 = 3;
      }
      if (bVar1 == 0x6f) {
        iVar3 = 4;
      }
      if ((bVar1 == 0x62) && (0 < param_2)) {
        iVar3 = 5;
      }
      if ((bVar1 == 0x42) && (0 < param_2)) {
        iVar3 = 6;
      }
      if ((bVar1 == 0x4f) && (0 < param_2)) {
        iVar3 = 7;
      }
      if ((bVar1 == 0x6e) && (0 < param_2)) {
        iVar3 = 8;
      }
      if ((0x30 < bVar1) && (bVar1 < 0x3a)) {
        iVar3 = -1;
      }
      if (iVar3 == 0) {
        return 0;
      }
      cVar2 = *(char *)(param_1 + param_2 + 2);
      if (cVar2 == '\0') {
        if ((iVar3 == -1) && (0 < param_2)) {
          return -1;
        }
      }
      else if (iVar3 != -1) {
        iVar3 = FUN_3a75_02e8(param_1,param_2 + 2);
        if (iVar3 == 1) {
          param_1 = param_1 + 10;
        }
        if ((cVar2 != ' ') && (cVar2 != '^')) {
          return param_1;
        }
      }
    }
  }
  return 0;
}


