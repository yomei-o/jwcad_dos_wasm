/* 1000:0398 */

int __cdecl16far FUN_1000_0398(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  if (param_1 < 0) {
    param_1 = 0;
  }
  uVar1 = param_1 * 0x18 + *(int *)0xbe9a;
  if ((uVar1 & 0x1000) == 0) {
    iVar2 = param_1 * 0x18 + *(int *)0xbe9a;
  }
  else {
    iVar2 = uVar1 - 0x1000;
  }
  return iVar2;
}


