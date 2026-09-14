/* 32b2:2d06 */

void __cdecl16far FUN_32b2_2d06(void)

{
  char cVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  pcVar2 = (char *)FUN_32b2_238c(0x7db4);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    FUN_32b2_21e0(*(undefined2 *)0x7dc6,pcVar2,3);
    uVar4 = 0;
    uVar8 = 0;
    uVar7 = 0xe10;
    pcVar2 = pcVar2 + 3;
    uVar3 = thunk_FUN_32b2_228c(pcVar2,0xe10,0);
    uVar6 = FUN_32b2_4e12(uVar3,uVar4,uVar7,uVar8);
    *(undefined2 *)0x7dc0 = (int)uVar6;
    *(undefined2 *)0x7dc2 = (int)((ulong)uVar6 >> 0x10);
    iVar5 = 0;
    while (pcVar2[iVar5] != '\0') {
      cVar1 = pcVar2[iVar5];
      if ((((*(byte *)(cVar1 + 0x7c67) & 4) == 0) && (cVar1 != '-')) ||
         (iVar5 = iVar5 + 1, 2 < iVar5)) break;
    }
    if (pcVar2[iVar5] == '\0') {
      *(undefined1 *)*(undefined2 *)0x7dc8 = 0;
    }
    else {
      FUN_32b2_21e0(*(undefined2 *)0x7dc8,pcVar2 + iVar5,3);
    }
    *(uint *)0x7dc4 = (uint)(*(char *)*(undefined2 *)0x7dc8 != '\0');
  }
  return;
}


