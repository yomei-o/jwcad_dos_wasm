/* 32b2:568a */

void __cdecl16near FUN_32b2_568a(void)

{
  undefined2 *puVar1;
  uint uVar2;
  ulong uVar3;
  uint3 uVar4;
  uint in_AX;
  char cVar5;
  byte bVar7;
  uint in_DX;
  byte bVar8;
  uint in_BX;
  undefined2 unaff_DS;
  bool bVar9;
  uint uStack_8;
  uint uStack_6;
  uint uStack_4;
  undefined2 uStack_2;
  byte bVar6;
  
  uStack_4 = in_AX;
  uStack_8 = in_DX;
  uStack_6 = in_BX;
  if (in_BX == 0) {
    bVar6 = (byte)(in_AX >> 8);
    cVar5 = bVar6 - 0x10;
    uStack_4 = CONCAT11(cVar5,(char)in_AX);
    if (bVar6 < 0x10 || cVar5 == '\0') goto LAB_32b2_56fd;
    uStack_8 = 0;
    uStack_6 = in_DX;
    if (in_DX == 0) goto LAB_32b2_56fd;
  }
  if ((char)(uStack_6 >> 8) == '\0') {
    bVar6 = (byte)(uStack_4 >> 8);
    cVar5 = bVar6 - 8;
    uStack_4 = CONCAT11(cVar5,(char)uStack_4);
    if (bVar6 < 8 || cVar5 == '\0') goto LAB_32b2_56fd;
    uVar2 = uStack_8 >> 8;
    uStack_8 = uStack_8 << 8;
    uStack_6 = CONCAT11((char)uStack_6,(char)uVar2);
  }
  if (-1 < (int)uStack_6) {
    do {
      cVar5 = (char)(uStack_4 >> 8) + -1;
      uStack_4 = CONCAT11(cVar5,(char)uStack_4);
      if (cVar5 == '\0') goto LAB_32b2_56fd;
      bVar9 = (int)uStack_8 < 0;
      uStack_8 = uStack_8 << 1;
      uVar3 = (ulong)CONCAT12(bVar9,uStack_6) << 1;
      uStack_6 = (uint)uVar3 | (uint)bVar9;
    } while (((uVar3 & 0x10000) != 0) == (int)uStack_6 < 0);
  }
  do {
    bVar6 = (byte)(uStack_4 >> 8);
    if (*(char *)0x8ad0 == '\0') {
      bVar7 = (byte)uStack_8;
      bVar8 = (byte)(uStack_8 >> 8);
      if ((0x80 < bVar7) || ((0x7f < bVar7 && ((uStack_8 & 0x100) != 0)))) {
        uStack_8 = CONCAT11(bVar8 + 1,bVar7);
        uVar2 = (uint)(0xfe < bVar8);
        bVar9 = CARRY2(uStack_6,uVar2);
        uStack_6 = uStack_6 + uVar2;
        if ((bVar9) && (uStack_4 = CONCAT11(bVar6 + 1,(char)uStack_4), (byte)(bVar6 + 1) == -1)) {
          FUN_32b2_72f4();
          return;
        }
      }
      uVar4 = (CONCAT12((char)uStack_4 < '\0',uStack_4) & 0xffff00) >> 1;
      if ((uStack_4 & 0xff00) != 0) {
        puVar1 = (undefined2 *)*(int *)0x8ac6;
        puVar1[1] = CONCAT11((char)(uVar4 >> 8),(byte)uVar4 | (byte)(uStack_6 >> 8) & 0x7f);
        *puVar1 = CONCAT11((char)uStack_6,(char)(uStack_8 >> 8));
        return;
      }
LAB_32b2_56fd:
      if (*(char *)0x8ad0 == '\0') {
        puVar1 = (undefined2 *)*(undefined2 *)0x8ac6;
        puVar1[1] = 0;
        *puVar1 = 0;
        return;
      }
      uStack_4 = 0;
      uStack_6 = 0;
      uStack_8 = 0;
      *(undefined1 *)0x8ad0 = 0;
LAB_32b2_588e:
      uStack_2 = *(undefined2 *)0x8ac6;
      *(undefined2 *)0x8ac6 = 0x8ad7;
      FUN_32b2_56b8();
      *(undefined2 *)0x8ad3 = 0;
      *(undefined2 *)0x8ad5 = 0;
    }
    else {
      *(undefined1 *)0x8ad0 = 0;
      if (((*(char *)0x8ad2 != '\0') && (bVar6 < (byte)(*(char *)0x8ad2 - 0xeU))) || (bVar6 == 0))
      goto LAB_32b2_588e;
      uStack_2 = *(undefined2 *)0x8ac6;
      *(undefined2 *)0x8ac6 = 0x8ad3;
      FUN_32b2_56b8();
      *(undefined2 *)0x8ac6 = 0x8ad7;
      FUN_32b2_568a();
    }
    *(undefined2 *)0x8ac6 = uStack_2;
  } while( true );
}


