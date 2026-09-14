/* 1885:4bcb */

void __cdecl16far FUN_1885_4bcb(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_DX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 unaff_DS;
  undefined1 uVar8;
  bool bVar9;
  undefined4 uVar10;
  uint local_24;
  int local_1e;
  int local_1a;
  int local_14;
  int local_12;
  uint local_10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  FUN_32b2_02bc();
  if ((*(char *)0x4a != '\0') &&
     (uVar8 = param_1 < *(uint *)0xa5c, (int)*(uint *)0xa5c <= (int)param_1)) {
    FUN_32b2_6cc6();
    FUN_1885_3c74();
    FUN_32b2_6cc6();
    FUN_32b2_6e4b();
    FUN_32b2_7191(0x32b2);
    if (!(bool)uVar8) {
      iVar14 = extraout_DX;
      FUN_32b2_6d9b();
      FUN_32b2_7065();
      FUN_32b2_7258();
      iVar1 = FUN_32b2_6f61();
      FUN_32b2_6cc6();
      FUN_32b2_704d();
      FUN_32b2_7258();
      uVar2 = FUN_32b2_6f61();
      uVar12 = uVar2;
      iVar13 = iVar14;
      FUN_32b2_6d9b(uVar2,iVar14);
      FUN_32b2_7065();
      FUN_32b2_7258();
      local_14 = FUN_32b2_6f61();
      uVar10 = FUN_32b2_4e12(local_14,local_14 >> 0xf,uVar12,iVar13);
      iVar5 = (int)((ulong)uVar10 >> 0x10);
      local_10 = -(int)uVar10;
      iVar4 = (param_1 - iVar5) - (uint)((int)uVar10 != 0);
      iVar3 = param_2 + 1;
      uVar7 = 0x32b2;
      for (local_14 = -local_14; local_14 <= iVar1; local_14 = local_14 + 1) {
        iVar5 = iVar4;
        if (local_14 % 5 == 0) {
          if (local_14 % 0x32 == 0) {
            local_24 = 1;
            if (local_14 % 100 == 0) {
              local_1e = 0x14;
            }
            else {
              local_1e = 0xf;
            }
            if (local_14 != 0) goto LAB_1885_4cf8;
          }
          else {
            local_24 = 2;
            if (local_14 % 10 == 0) {
              local_1e = 10;
            }
            else {
              local_1e = 5;
            }
            if (local_14 == 10) {
LAB_1885_4cf8:
              iVar11 = local_14;
              FUN_1885_4226(local_14,iVar4,iVar3 + local_1e + 2,local_24,uVar12,iVar13);
              local_10 = uVar7;
              iVar4 = iVar11;
            }
          }
        }
        else {
          local_24 = 2;
          local_1e = 2;
        }
        local_1a = iVar3 + local_1e;
        if (*(int *)0xa60 < local_1a) {
          local_1a = *(int *)0xa60;
        }
        uVar6 = uVar7;
        if (local_14 != 0) {
          iVar13 = -1;
          uVar6 = 0x1def;
          iVar4 = iVar3;
          FUN_1def_12ae(iVar3,iVar3,iVar5,local_1a);
          local_10 = uVar7;
          uVar12 = local_24;
        }
        bVar9 = CARRY2(local_10,uVar2);
        local_10 = local_10 + uVar2;
        iVar4 = iVar4 + iVar14 + (uint)bVar9;
        iVar5 = iVar14;
        uVar7 = uVar6;
      }
      FUN_32b2_6d9b();
      FUN_32b2_7065();
      FUN_32b2_7258();
      iVar13 = FUN_32b2_6f61();
      FUN_32b2_6cc6();
      FUN_32b2_704d();
      FUN_32b2_7258();
      uVar2 = FUN_32b2_6f61();
      uVar12 = uVar2;
      iVar14 = iVar5;
      FUN_32b2_6d9b(uVar2,iVar5);
      FUN_32b2_7065();
      FUN_32b2_7258();
      local_14 = FUN_32b2_6f61();
      uVar10 = FUN_32b2_4e12(local_14,local_14 >> 0xf,uVar12,iVar14);
      local_10 = -(int)uVar10;
      iVar4 = (param_2 - (int)((ulong)uVar10 >> 0x10)) - (uint)((int)uVar10 != 0);
      local_12 = param_1 + 1;
      uVar7 = 0x32b2;
      for (local_14 = -local_14; local_14 < iVar13; local_14 = local_14 + 1) {
        iVar1 = iVar4;
        if (local_14 % 5 == 0) {
          if (local_14 % 0x32 == 0) {
            local_24 = 1;
            if (local_14 % 100 == 0) {
              local_1e = 0x14;
            }
            else {
              local_1e = 0xf;
            }
            if (local_14 != 0) goto LAB_1885_4e70;
          }
          else {
            local_24 = 2;
            if (local_14 % 10 == 0) {
              local_1e = 10;
            }
            else {
              local_1e = 5;
            }
            if (local_14 == -10) {
LAB_1885_4e70:
              iVar3 = iVar4 + -3;
              iVar1 = local_12 + local_1e + 4;
              local_12 = -0x291f;
              iVar4 = local_14;
              FUN_1885_4226(local_14,iVar1,iVar3,local_24,uVar12,iVar14);
              local_10 = uVar7;
            }
          }
        }
        else {
          local_24 = 2;
          local_1e = 2;
        }
        iVar3 = local_12;
        local_1a = local_12 + local_1e;
        if (*(int *)0x1b3e < local_1a) {
          local_1a = *(int *)0x1b3e;
        }
        uVar6 = uVar7;
        if (local_14 != 0) {
          iVar14 = -1;
          uVar6 = 0x1def;
          local_12 = -0x28e9;
          FUN_1def_12ae(iVar3,iVar1,local_1a,iVar1);
          local_10 = uVar7;
          iVar4 = iVar3;
          uVar12 = local_24;
        }
        bVar9 = CARRY2(local_10,uVar2);
        local_10 = local_10 + uVar2;
        iVar4 = iVar4 + iVar5 + (uint)bVar9;
        uVar7 = uVar6;
      }
    }
  }
  return;
}


