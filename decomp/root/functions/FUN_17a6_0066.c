/* 17a6:0066 */

void __cdecl16far FUN_17a6_0066(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined2 local_8;
  undefined2 local_6;
  int iVar4;
  
  FUN_32b2_02bc();
  local_6 = 1;
  iVar4 = 0;
  while( true ) {
    if ((*(int *)0x14a < iVar4) || ((*(int *)0x14a <= iVar4 && (*(uint *)0x148 < local_6)))) break;
    iVar2 = iVar4;
    iVar1 = FUN_1000_013f();
    *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfd;
    bVar3 = 0xfffe < local_6;
    local_6 = local_6 + 1;
    iVar4 = iVar2 + (uint)bVar3;
  }
  local_6 = 1;
  iVar4 = 0;
  while( true ) {
    if ((*(int *)0x14e < iVar4) || ((*(int *)0x14e <= iVar4 && (*(uint *)0x14c < local_6)))) break;
    iVar2 = iVar4;
    iVar1 = FUN_1000_0271();
    *(byte *)(iVar1 + 0x1e) = *(byte *)(iVar1 + 0x1e) & 0xfd;
    bVar3 = 0xfffe < local_6;
    local_6 = local_6 + 1;
    iVar4 = iVar2 + (uint)bVar3;
  }
  local_8 = 1;
  while (local_8 <= *(int *)0x152) {
    iVar2 = FUN_1000_03ef(local_8);
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfd;
    local_8 = 0x7b59;
  }
  return;
}


