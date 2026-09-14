/* 1885:3803 */

/* WARNING: Removing unreachable block (ram,0x0001c1cf) */
/* WARNING: Removing unreachable block (ram,0x0001c24e) */

undefined2 __cdecl16far FUN_1885_3803(void)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int extraout_DX;
  int iVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  long lVar7;
  undefined2 uVar8;
  int local_c;
  int local_a;
  int *local_8;
  
  iVar5 = 0x32b2;
  FUN_32b2_02bc();
  if (*(char *)0xb782 == '\0') {
    local_8 = (int *)0x0;
    local_a = 0x32b2;
    local_c = -0x3f8d;
    FUN_1885_5256();
    local_8 = (int *)0x0;
    local_a = 0;
    local_c = 0;
    FUN_1885_1f1b(0);
    if ((0 < *(int *)0xa64) && (*(int *)0xa64 < 0x1f)) {
      if (*(int *)0xa64 < 0x10) {
        uVar2 = 0x47;
        local_a = 0x77;
        local_c = *(int *)0xa64 + 3;
      }
      else {
        uVar2 = 8;
        local_a = 0x40;
        local_c = *(int *)0xa64 + -0xc;
      }
      local_c = local_c * 0x10;
      local_8 = (int *)(local_c + 0xf);
      if (local_c < 0x40) {
        local_c = 0x40;
      }
      FUN_1885_1f1b(uVar2);
    }
    local_8 = (int *)*(undefined2 *)0xa64;
    local_a = 6;
    local_c = 0x32b2;
    FUN_1885_3647();
    if ((0 < *(int *)0xa62) && (*(int *)0xa62 < 0x1f)) {
      if (*(int *)0xa62 < 0x10) {
        uVar2 = 0x77;
        iVar3 = *(int *)0xa62 + 3;
      }
      else {
        uVar2 = 0x40;
        iVar3 = *(int *)0xa62 + -0xc;
      }
      iVar3 = iVar3 * 0x10;
      iVar4 = iVar3 + 0xf;
      if (iVar3 < 0x40) {
        iVar3 = 0x40;
      }
      local_8 = (int *)0x0;
      local_a = 0;
      local_c = 2;
      iVar5 = 0x1def;
      FUN_1def_1460(uVar2,iVar3,uVar2,iVar4,6);
    }
    local_8 = (int *)*(undefined2 *)0xa62;
    local_a = 0;
    local_c = iVar5;
    FUN_1885_3647();
    local_a = 0xc173;
    local_8 = (int *)iVar5;
    FUN_1885_372c();
    local_8 = &local_c;
    local_c = -0x3e84;
    local_a = iVar5;
    FUN_32b2_2ca0();
    local_8 = (int *)0x0;
    local_a = 0xa0;
    local_c = 0;
    uVar8 = 0xe10;
    iVar5 = (0xa0 - *(int *)0xc136) - (uint)(*(int *)0xc134 != 0);
    uVar2 = FUN_32b2_4ee4(0xe10);
    uVar6 = FUN_32b2_4d78(uVar2,iVar5,uVar8);
    iVar5 = (int)((ulong)uVar6 >> 0x10);
    local_c = iVar5;
    FUN_32b2_4e44((int)uVar6);
    local_8 = (int *)0x0;
    local_a = 10;
    local_c = iVar5;
    lVar7 = FUN_32b2_4d78((int)uVar6);
    if (0xf0 < lVar7) {
      lVar7 = 0xf0;
    }
    if (extraout_DX != 0 || local_8 != (int *)0x0) {
      local_8 = (int *)0x0;
      local_a = 0;
      local_c = 2;
      uVar8 = 5;
      uVar2 = 0x12f;
      FUN_1def_1460(0x43,0x130,0x44);
      lVar7 = CONCAT22(uVar8,uVar2);
    }
    lVar1 = 0;
    if (lVar7 != 0) {
      local_8 = (int *)0x0;
      local_a = 0;
      local_c = 2;
      uVar8 = 6;
      uVar2 = 0x40;
      FUN_1def_1460(0x43,0x7f,0x44);
      lVar1 = CONCAT22(uVar8,uVar2);
    }
    if (0xf0 < lVar1 + CONCAT22(extraout_DX,local_8)) {
      local_8 = (int *)0x0;
      local_a = 0;
      local_c = 2;
      FUN_1def_1460(0x43,0x130,0x44,(int)lVar1 + 0x3f,7);
    }
    local_8 = (int *)0x0;
    local_a = 0x5555;
    local_c = 3;
    FUN_1def_1460(0x37,0x40,0x37,0x130,7);
    local_8 = (int *)0x0;
    local_a = 0x5555;
    local_c = 3;
    FUN_1def_1460(0x6f,0x40,0x6f,0x130,7);
    local_8 = (int *)0x0;
    local_a = 0;
    local_c = 2;
    FUN_1def_1460(0,0x30,7,0x130,7);
    local_8 = (int *)0x0;
    local_a = 0;
    local_c = 0;
    FUN_1def_1460(1,0xb0,6,0xb0,0);
    local_8 = (int *)0x7;
    local_a = 0;
    local_c = 1;
    FUN_1def_1691(0,0x70,0x155,0);
    local_8 = (int *)0x7;
    local_a = 0;
    local_c = 1;
    FUN_1def_1691(0,0xec,0x144,0);
    local_8 = (int *)0x1def;
    local_a = 0xc33a;
    uVar2 = FUN_1885_1f49();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


