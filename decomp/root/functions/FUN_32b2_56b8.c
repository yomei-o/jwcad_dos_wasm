/* 32b2:56b8 */

void __cdecl16near FUN_32b2_56b8(void)

{
  undefined2 *puVar1;
  uint uVar2;
  bool bVar3;
  uint3 uVar4;
  uint in_AX;
  byte bVar5;
  byte bVar6;
  uint in_DX;
  byte bVar7;
  uint in_BX;
  undefined2 unaff_DS;
  uint uStack_8;
  uint uStack_6;
  uint uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = in_AX;
  uStack_8 = in_DX;
  uStack_6 = in_BX;
  do {
    bVar5 = (byte)(uStack_4 >> 8);
    if (*(char *)0x8ad0 == '\0') {
      bVar6 = (byte)uStack_8;
      bVar7 = (byte)(uStack_8 >> 8);
      if ((0x80 < bVar6) || ((0x7f < bVar6 && ((uStack_8 & 0x100) != 0)))) {
        uStack_8 = CONCAT11(bVar7 + 1,bVar6);
        uVar2 = (uint)(0xfe < bVar7);
        bVar3 = CARRY2(uStack_6,uVar2);
        uStack_6 = uStack_6 + uVar2;
        if ((bVar3) && (uStack_4 = CONCAT11(bVar5 + 1,(char)uStack_4), (byte)(bVar5 + 1) == -1)) {
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
      if (((*(char *)0x8ad2 != '\0') && (bVar5 < (byte)(*(char *)0x8ad2 - 0xeU))) || (bVar5 == 0))
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


