/* 28b3:2730 */

int __cdecl16far FUN_28b3_2730(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint extraout_DX;
  uint extraout_DX_00;
  uint extraout_DX_01;
  uint extraout_DX_02;
  uint *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uint local_9c;
  uint local_9a;
  uint local_98;
  uint local_96;
  uint local_94;
  uint local_92;
  uint local_90;
  uint local_8e;
  byte local_88;
  undefined1 local_87;
  uint local_84;
  uint local_82;
  uint local_7c;
  uint local_7a;
  uint local_78;
  uint local_76;
  int local_6c;
  int local_6a;
  uint local_64;
  uint local_62;
  uint local_48;
  uint local_46;
  uint local_44;
  uint local_42;
  undefined1 local_40;
  uint local_3e;
  uint local_3c;
  uint local_3a;
  uint local_38;
  uint local_36;
  uint local_34;
  uint local_32;
  uint local_30;
  uint local_26;
  uint local_24;
  uint local_22;
  uint local_20;
  undefined2 local_e;
  undefined2 local_c;
  
  FUN_32b2_02bc();
  local_c = 0xb275;
  FUN_1885_5256();
  local_6a = 0;
  FUN_32b2_6d14();
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  FUN_32b2_6d14();
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_7065();
  FUN_32b2_6e4b();
  FUN_32b2_6ef9();
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_6e63();
  FUN_32b2_6cc6();
  FUN_32b2_701d();
  FUN_32b2_6e63();
  FUN_32b2_6cc6();
  FUN_32b2_7095();
  FUN_32b2_6e63();
  FUN_32b2_6cc6();
  FUN_32b2_7095();
  FUN_32b2_6e63();
  if ((int)local_62 < 0) {
    bVar7 = local_64 != 0;
    local_64 = -local_64;
    local_62 = -((local_62 & 0x7fff) + (uint)bVar7);
  }
  if ((int)local_76 < 0) {
    bVar7 = local_78 != 0;
    local_78 = -local_78;
    local_76 = -((local_76 & 0x7fff) + (uint)bVar7);
  }
  if ((int)local_7a < 0) {
    bVar7 = local_7c != 0;
    local_7c = -local_7c;
    local_7a = -((local_7a & 0x7fff) + (uint)bVar7);
  }
  if ((int)local_82 < 0) {
    bVar7 = local_84 != 0;
    local_84 = -local_84;
    local_82 = -((local_82 & 0x7fff) + (uint)bVar7);
  }
  uVar5 = 0x32b2;
  local_e = 0xb33b;
  local_6c = 1;
  local_44 = local_84;
  local_42 = local_82;
  local_36 = local_78;
  local_34 = local_76;
  local_32 = local_7c;
  local_30 = local_7a;
  local_22 = local_64;
  local_20 = local_62;
  do {
    if (*(int *)0x150 < local_6c) {
      return local_6a;
    }
    local_c = 0xb406;
    puVar3 = (uint *)FUN_1000_0398();
    puVar6 = &local_9c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    if (local_88 < 0x5a) {
      local_40 = local_87;
      if (*(char *)0xb8c == '\0') {
        local_c = 0xb3eb;
        iVar4 = FUN_21f2_06d1();
      }
      else {
        local_c = 0xb435;
        iVar4 = FUN_21f2_0680();
      }
      if (iVar4 != 0) {
        local_26 = local_9c;
        local_24 = local_9a;
        if ((int)local_9a < 0) {
          local_26 = -local_9c;
          local_24 = -((local_9a & 0x7fff) + (uint)(local_9c != 0));
        }
        local_3e = local_94;
        local_3c = local_92;
        if ((int)local_92 < 0) {
          local_3e = -local_94;
          local_3c = -((local_92 & 0x7fff) + (uint)(local_94 != 0));
        }
        uVar5 = local_3c;
        if (((((int)local_20 < (int)local_24) ||
             ((((int)local_20 <= (int)local_24 && (local_22 <= local_26)) ||
              ((int)local_20 < (int)local_3c)))) ||
            (((int)local_20 <= (int)local_3c && (local_22 <= local_3e)))) &&
           (((int)local_24 < (int)local_34 ||
            ((((int)local_24 <= (int)local_34 && (local_26 <= local_36)) ||
             (((int)local_3c < (int)local_34 ||
              (((int)local_3c <= (int)local_34 && (local_3e <= local_36)))))))))) {
          local_3a = local_98;
          local_38 = local_96;
          if ((int)local_96 < 0) {
            local_3a = -local_98;
            local_38 = -((local_96 & 0x7fff) + (uint)(local_98 != 0));
          }
          local_48 = local_90;
          local_46 = local_8e;
          if ((int)local_8e < 0) {
            local_48 = -local_90;
            local_46 = -((local_8e & 0x7fff) + (uint)(local_90 != 0));
          }
          if (((int)local_30 < (int)local_38) ||
             (((((int)local_30 <= (int)local_38 && (local_32 <= local_3a)) ||
               ((int)local_30 < (int)local_46)) ||
              ((uVar5 = local_46, (int)local_30 <= (int)local_46 && (local_32 <= local_48)))))) {
            uVar8 = local_38 < local_42;
            uVar9 = local_38 == local_42;
            if ((int)local_42 <= (int)local_38) {
              if ((int)local_38 <= (int)local_42) {
                uVar8 = local_3a < local_44;
                uVar9 = local_3a == local_44;
                if (local_3a <= local_44) goto LAB_28b3_2a74;
              }
              uVar8 = local_46 < local_42;
              uVar9 = local_46 == local_42;
              if ((int)local_42 <= (int)local_46) {
                uVar5 = local_42;
                if ((int)local_46 <= (int)local_42) {
                  uVar8 = local_48 < local_44;
                  uVar9 = local_48 == local_44;
                  if (local_48 <= local_44) goto LAB_28b3_2a74;
                }
                goto LAB_28b3_28c0;
              }
            }
LAB_28b3_2a74:
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6e4b();
            FUN_32b2_6ef9();
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_701d();
            FUN_32b2_6e4b();
            FUN_32b2_7191();
            if ((bool)uVar9) {
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              uVar5 = extraout_DX;
              if ((bool)uVar9) goto LAB_28b3_28c0;
            }
            uVar9 = 0;
            FUN_32b2_6cc6();
            FUN_32b2_6fc7();
            FUN_32b2_6cc6();
            FUN_32b2_6fc7();
            FUN_32b2_7191();
            if ((bool)uVar8 || (bool)uVar9) {
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_7065();
              FUN_32b2_704d();
              FUN_32b2_7095();
            }
            else {
              FUN_32b2_6cc6();
              FUN_32b2_701d();
              FUN_32b2_7065();
              FUN_32b2_704d();
              FUN_32b2_7095();
            }
            FUN_32b2_7035();
            FUN_32b2_6e63();
            FUN_32b2_6cc6();
            FUN_32b2_6cc6();
            FUN_32b2_6fc7();
            FUN_32b2_6e4b();
            FUN_32b2_7191();
            uVar5 = extraout_DX_00;
            if ((bool)uVar8) {
              FUN_32b2_6cc6();
              FUN_32b2_6cc6();
              FUN_32b2_7191();
              uVar5 = extraout_DX_01;
              if ((bool)uVar8) {
                local_6a = local_6c;
                FUN_32b2_6cc6();
                FUN_32b2_6e63();
                uVar5 = extraout_DX_02;
              }
            }
          }
        }
      }
    }
LAB_28b3_28c0:
    local_6c = local_6c + 1;
  } while( true );
}


