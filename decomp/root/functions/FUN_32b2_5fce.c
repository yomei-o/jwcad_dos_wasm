/* 32b2:5fce */

void FUN_32b2_5fce(void)

{
  byte in_CH;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar1;
  uint extraout_DX_01;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  
  bVar5 = false;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  do {
    uVar6 = FUN_32b2_60ce();
    uVar1 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto FUN_32b2_6003;
    FUN_32b2_6088();
    uVar1 = (uint)CARRY2(extraout_DX,(uint)uVar6);
    bVar5 = CARRY2(uVar2,uVar1);
    uVar2 = uVar2 + uVar1;
    uVar1 = (uint)bVar5;
    bVar5 = CARRY2(uVar3,uVar1);
    uVar3 = uVar3 + uVar1;
    uVar4 = uVar4 + bVar5;
    bVar5 = true;
  } while (uVar4 < 0x1999);
  while( true ) {
    bVar5 = false;
    FUN_32b2_60ce();
    uVar1 = extraout_DX_00;
    if (bVar5) break;
    *(int *)0x8b08 = *(int *)0x8b08 + 1;
  }
FUN_32b2_6003:
  if (((((uVar4 == 0 && uVar3 == 0) && *(int *)0x8b08 == 0) && ((in_CH & 0x80) == 0)) &&
      ((int)uVar2 < 0)) && (*(int *)0x8b0a != 10)) {
    bVar5 = uVar1 != 0;
    uVar1 = -uVar1;
    uVar2 = -(uint)bVar5 - uVar2;
  }
  *(uint *)0x8b10 = uVar1;
  *(uint *)0x8b12 = uVar2;
  lVar7 = (ulong)uVar1 << 0x10;
  if (((uVar4 != 0 || uVar3 != 0) || uVar2 != 0) || uVar1 != 0) {
    while (uVar4 < 0x1999) {
      FUN_32b2_6088();
      *(int *)0x8b08 = *(int *)0x8b08 + -1;
      uVar1 = extraout_DX_01;
    }
    lVar7 = CONCAT22(uVar1,0x40);
    while (-1 < (int)uVar4) {
      lVar7 = FUN_32b2_609e();
    }
  }
  *(undefined2 *)0x8b14 = (int)((ulong)lVar7 >> 0x10);
  *(uint *)0x8b16 = uVar2;
  *(uint *)0x8b18 = uVar3;
  *(uint *)0x8b1a = uVar4;
  *(undefined2 *)0x8b1c = (int)lVar7;
  return;
}


