/* 1def:17bb */

void __cdecl16far
FUN_1def_17bb(uint *param_1,uint *param_2,uint *param_3,uint *param_4,undefined2 param_5,
             undefined2 param_6,char param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 unaff_DS;
  undefined1 uVar6;
  undefined1 uVar7;
  uint local_26;
  uint local_24;
  uint local_22;
  uint local_20;
  uint local_1e;
  uint local_1c;
  uint local_1a;
  uint local_18;
  uint local_16;
  uint local_14;
  uint local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  uint local_8;
  uint local_6;
  uint *local_4;
  
  local_4 = (uint *)0x1def;
  local_6 = 0xf6b6;
  FUN_32b2_02bc();
  if (param_7 != '\0') {
    if ((int)param_1[1] < 0) {
      uVar4 = -*param_1;
      uVar5 = -((param_1[1] & 0x7fff) + (uint)(*param_1 != 0));
    }
    else {
      uVar4 = *param_1;
      uVar5 = param_1[1];
    }
    if ((int)uVar5 < *(int *)0xb5ac) {
      return;
    }
    if (((int)uVar5 <= *(int *)0xb5ac) && (uVar4 < *(uint *)0xb5aa)) {
      return;
    }
    if (*(int *)0xb610 <= (int)uVar5) {
      if (*(int *)0xb610 < (int)uVar5) {
        return;
      }
      if (*(uint *)0xb60e < uVar4) {
        return;
      }
    }
    if ((int)param_2[1] < 0) {
      local_e = -*param_2;
      local_c = -((param_2[1] & 0x7fff) + (uint)(*param_2 != 0));
    }
    else {
      local_e = *param_2;
      local_c = param_2[1];
    }
    if ((int)local_c < *(int *)0xb5b4) {
      return;
    }
    if (((int)local_c <= *(int *)0xb5b4) && (local_e < *(uint *)0xb5b2)) {
      return;
    }
    if (*(int *)0xb614 <= (int)local_c) {
      if (*(int *)0xb614 < (int)local_c) {
        return;
      }
      if (*(uint *)0xb612 < local_e) {
        return;
      }
    }
    local_4 = (uint *)param_5;
    local_6 = 0x32b2;
    local_8 = 0xf76f;
    FUN_32b2_6cc6();
    local_6 = 0x32b2;
    local_8 = 0xf774;
    FUN_32b2_7258();
    local_6 = 0x32b2;
    local_8 = 0xf779;
    local_6 = FUN_32b2_6f61();
    local_8 = 0x32b2;
    local_a = 0xf782;
    FUN_32b2_6cc6();
    local_8 = 0x32b2;
    local_a = 0xf787;
    FUN_32b2_7258();
    local_8 = 0x32b2;
    local_a = 0xf78c;
    local_8 = FUN_32b2_6f61();
    local_a = 0x32b2;
    local_c = 0xf791;
    FUN_1def_1423();
    return;
  }
  if ((int)param_1[1] < 0) {
    uVar4 = -*param_1;
    uVar5 = -((param_1[1] & 0x7fff) + (uint)(*param_1 != 0));
  }
  else {
    uVar4 = *param_1;
    uVar5 = param_1[1];
  }
  if ((int)param_3[1] < 0) {
    local_a = -*param_3;
    local_8 = -((param_3[1] & 0x7fff) + (uint)(*param_3 != 0));
  }
  else {
    local_a = *param_3;
    local_8 = param_3[1];
  }
  if ((int)param_2[1] < 0) {
    local_e = -*param_2;
    local_c = -((param_2[1] & 0x7fff) + (uint)(*param_2 != 0));
  }
  else {
    local_e = *param_2;
    local_c = param_2[1];
  }
  if ((int)param_4[1] < 0) {
    local_16 = -*param_4;
    local_14 = -((param_4[1] & 0x7fff) + (uint)(*param_4 != 0));
  }
  else {
    local_16 = *param_4;
    local_14 = param_4[1];
  }
  iVar1 = *(int *)0xb5ac;
  if (((iVar1 <= (int)uVar5) &&
      (((iVar1 < (int)uVar5 || (*(uint *)0xb5aa <= uVar4)) && (iVar1 <= (int)local_8)))) &&
     ((iVar1 < (int)local_8 || (*(uint *)0xb5aa <= local_a)))) {
    iVar1 = *(int *)0xb5b4;
    if ((iVar1 <= (int)local_c) &&
       (((iVar1 < (int)local_c || (*(uint *)0xb5b2 <= local_e)) &&
        ((iVar1 <= (int)local_14 && ((iVar1 < (int)local_14 || (*(uint *)0xb5b2 <= local_16))))))))
    {
      iVar1 = *(int *)0xb610;
      if (((int)uVar5 <= iVar1) &&
         (((((int)uVar5 < iVar1 || (uVar4 <= *(uint *)0xb60e)) && ((int)local_8 <= iVar1)) &&
          (((int)local_8 < iVar1 || (local_a <= *(uint *)0xb60e)))))) {
        iVar1 = *(int *)0xb614;
        if ((((int)local_c <= iVar1) && (((int)local_c < iVar1 || (local_e <= *(uint *)0xb612)))) &&
           (((int)local_14 < iVar1 || (((int)local_14 <= iVar1 && (local_16 <= *(uint *)0xb612))))))
        {
          local_4 = (uint *)param_6;
          local_6 = param_5;
          local_8 = 0x32b2;
          local_a = 0xfd53;
          FUN_32b2_6cc6();
          local_8 = 0x32b2;
          local_a = 0xfd58;
          FUN_32b2_7258();
          local_8 = 0x32b2;
          local_a = 0xfd5d;
          local_8 = FUN_32b2_6f61();
          local_a = 0x32b2;
          local_c = 0xfd66;
          FUN_32b2_6cc6();
          local_a = 0x32b2;
          local_c = 0xfd6b;
          FUN_32b2_7258();
          local_a = 0x32b2;
          local_c = 0xfd70;
          local_a = FUN_32b2_6f61();
          local_c = 0x32b2;
          local_e = 0xfd79;
          FUN_32b2_6cc6();
          local_c = 0x32b2;
          local_e = 0xfd7e;
          FUN_32b2_7258();
          local_c = 0x32b2;
          local_e = 0xfd83;
          local_c = FUN_32b2_6f61();
          local_e = 0x32b2;
          local_10 = 0xfd8c;
          FUN_32b2_6cc6();
          local_e = 0x32b2;
          local_10 = 0xfd91;
          FUN_32b2_7258();
          local_e = 0x32b2;
          local_10 = 0xfd96;
          local_e = FUN_32b2_6f61();
          local_10 = 0x32b2;
          local_12 = 0xfd9b;
          FUN_1def_0000();
          return;
        }
      }
    }
  }
  iVar1 = *(int *)0xb5ac;
  if (((int)uVar5 <= iVar1) && (((int)uVar5 < iVar1 || (uVar4 < *(uint *)0xb5aa)))) {
    if ((int)local_8 < iVar1) {
      return;
    }
    if (((int)local_8 <= iVar1) && (local_a < *(uint *)0xb5aa)) {
      return;
    }
  }
  iVar1 = *(int *)0xb610;
  if ((iVar1 <= (int)uVar5) && ((iVar1 < (int)uVar5 || (*(uint *)0xb60e < uVar4)))) {
    if (iVar1 < (int)local_8) {
      return;
    }
    if ((iVar1 <= (int)local_8) && (*(uint *)0xb60e < local_a)) {
      return;
    }
  }
  iVar1 = *(int *)0xb5b4;
  if (((int)local_c <= iVar1) && (((int)local_c < iVar1 || (local_e < *(uint *)0xb5b2)))) {
    if ((int)local_14 < iVar1) {
      return;
    }
    if (((int)local_14 <= iVar1) && (local_16 < *(uint *)0xb5b2)) {
      return;
    }
  }
  uVar4 = *(uint *)0xb612;
  uVar5 = *(uint *)0xb614;
  uVar6 = local_c < uVar5;
  if (((int)uVar5 <= (int)local_c) &&
     ((((int)uVar5 < (int)local_c || (uVar6 = local_e < uVar4, uVar4 < local_e)) &&
      (uVar6 = local_14 < uVar5, (int)uVar5 <= (int)local_14)))) {
    if ((int)uVar5 < (int)local_14) {
      return;
    }
    uVar6 = local_16 < uVar4;
    if (uVar4 < local_16) {
      return;
    }
  }
  local_1a = *param_1;
  local_18 = param_1[1];
  local_22 = *param_2;
  local_20 = param_2[1];
  local_1e = *param_3;
  local_1c = param_3[1];
  local_26 = *param_4;
  local_24 = param_4[1];
  local_4 = (uint *)0x32b2;
  local_6 = 0xf983;
  FUN_32b2_6cc6();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf98b;
  FUN_32b2_701d();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf993;
  FUN_32b2_6e4b();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf99b;
  FUN_32b2_6ef9();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf9a3;
  FUN_32b2_6cc6();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf9ab;
  FUN_32b2_701d();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf9b3;
  FUN_32b2_6e63();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf9bc;
  FUN_32b2_6d14();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf9c4;
  FUN_32b2_6cc6();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf9c9;
  FUN_32b2_6fc7();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf9ce;
  FUN_32b2_7258();
  local_4 = (uint *)0x32b2;
  local_6 = 0xf9d3;
  FUN_32b2_7191();
  if (!(bool)uVar6) {
    local_4 = (uint *)0x32b2;
    local_6 = 0xf9fa;
    FUN_32b2_6d14();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfa02;
    FUN_32b2_6cc6();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfa07;
    FUN_32b2_6fc7();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfa0c;
    FUN_32b2_7258();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfa11;
    FUN_32b2_7191();
    if (!(bool)uVar6) {
      local_4 = (uint *)0x32b2;
      local_6 = 0xfa31;
      FUN_32b2_6cc6();
      local_4 = (uint *)0x32b2;
      local_6 = 0xfa39;
      FUN_32b2_7065();
      local_4 = (uint *)0x32b2;
      local_6 = 0xfa41;
      FUN_32b2_6e63();
      local_4 = (uint *)0x32b2;
      local_6 = 0xfa49;
      FUN_32b2_6cc6();
      local_4 = (uint *)0x32b2;
      local_6 = 0xfa51;
      FUN_32b2_7065();
      local_4 = (uint *)0x32b2;
      local_6 = 0xfa59;
      FUN_32b2_6e63();
    }
  }
  uVar3 = local_18;
  uVar2 = local_1a;
  uVar5 = local_20;
  uVar4 = local_22;
  uVar6 = local_8 < local_4;
  uVar7 = (uint *)local_8 == local_4;
  if ((int)local_8 <= (int)local_4) {
    if ((int)local_4 <= (int)local_8) {
      uVar6 = local_a < local_6;
      uVar7 = local_a == local_6;
      if (!(bool)uVar6) goto LAB_1def_1bc3;
    }
    local_1a = local_1e;
    local_18 = local_1c;
    local_1e = uVar2;
    local_1c = uVar3;
    local_12 = local_22;
    local_10 = local_20;
    local_22 = local_26;
    local_20 = local_24;
    local_26 = uVar4;
    local_24 = uVar5;
  }
LAB_1def_1bc3:
  local_4 = (uint *)0x32b2;
  local_6 = 0xfabb;
  FUN_32b2_6cc6();
  local_4 = (uint *)0x32b2;
  local_6 = 0xfac4;
  FUN_32b2_6d9b();
  local_4 = (uint *)0x32b2;
  local_6 = 0xfac9;
  FUN_32b2_7191();
  if (!(bool)uVar6 && !(bool)uVar7) {
    local_4 = (uint *)0x32b2;
    local_6 = 0xfad4;
    FUN_32b2_6d9b();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfadc;
    FUN_32b2_701d();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfae4;
    FUN_32b2_704d();
    local_4 = &local_22;
    local_6 = 0x32b2;
    local_8 = 0xfaed;
    FUN_32b2_7095();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfaf3;
    FUN_32b2_6e63();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfafc;
    FUN_32b2_6d9b();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfb04;
    FUN_32b2_6e63();
  }
  local_4 = (uint *)0x32b2;
  local_6 = 0xfb0c;
  FUN_32b2_6cc6();
  local_4 = (uint *)0x32b2;
  local_6 = 0xfb15;
  FUN_32b2_6d9b();
  local_4 = (uint *)0x32b2;
  local_6 = 0xfb1a;
  FUN_32b2_7191();
  if ((bool)uVar6) {
    local_4 = (uint *)0x32b2;
    local_6 = 0xfb24;
    FUN_32b2_6cc6();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfb2d;
    FUN_32b2_6d9b();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfb32;
    FUN_32b2_7173();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfb3a;
    FUN_32b2_704d();
    local_4 = &local_26;
    local_6 = 0x32b2;
    local_8 = 0xfb43;
    FUN_32b2_7035();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfb49;
    FUN_32b2_6e63();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfb52;
    FUN_32b2_6d9b();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfb5a;
    FUN_32b2_6e63();
  }
  uVar3 = local_18;
  uVar2 = local_1a;
  uVar5 = local_20;
  uVar4 = local_22;
  local_e = local_22;
  local_c = local_20;
  if ((int)local_20 < 0) {
    local_e = -local_22;
    local_c = -((local_20 & 0x7fff) + (uint)(local_22 != 0));
  }
  local_16 = local_26;
  local_14 = local_24;
  if ((int)local_24 < 0) {
    local_16 = -local_26;
    local_14 = -((local_24 & 0x7fff) + (uint)(local_26 != 0));
  }
  iVar1 = *(int *)0xb5b4;
  if (((int)local_c <= iVar1) && (((int)local_c < iVar1 || (local_e < *(uint *)0xb5b2)))) {
    if ((int)local_14 < iVar1) {
      return;
    }
    if (((int)local_14 <= iVar1) && (local_16 < *(uint *)0xb5b2)) {
      return;
    }
  }
  iVar1 = *(int *)0xb614;
  if ((iVar1 <= (int)local_c) &&
     (((iVar1 < (int)local_c || (*(uint *)0xb612 < local_e)) && (iVar1 <= (int)local_14)))) {
    if (iVar1 < (int)local_14) {
      return;
    }
    if (*(uint *)0xb612 < local_16) {
      return;
    }
  }
  uVar6 = local_14 < local_c;
  uVar7 = local_14 == local_c;
  if ((int)local_14 <= (int)local_c) {
    if ((int)local_c <= (int)local_14) {
      uVar6 = local_16 < local_e;
      uVar7 = local_16 == local_e;
      if (!(bool)uVar6) goto LAB_1def_1d56;
    }
    local_1a = local_1e;
    local_18 = local_1c;
    local_1e = uVar2;
    local_1c = uVar3;
    local_12 = local_22;
    local_10 = local_20;
    local_22 = local_26;
    local_20 = local_24;
    local_26 = uVar4;
    local_24 = uVar5;
  }
LAB_1def_1d56:
  local_4 = (uint *)0x32b2;
  local_6 = 0xfc4e;
  FUN_32b2_6cc6();
  local_4 = (uint *)0x32b2;
  local_6 = 0xfc57;
  FUN_32b2_6d9b();
  local_4 = (uint *)0x32b2;
  local_6 = 0xfc5c;
  FUN_32b2_7191();
  if (!(bool)uVar6 && !(bool)uVar7) {
    local_4 = (uint *)0x32b2;
    local_6 = 0xfc67;
    FUN_32b2_6d9b();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfc6f;
    FUN_32b2_701d();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfc77;
    FUN_32b2_704d();
    local_4 = &local_1a;
    local_6 = 0x32b2;
    local_8 = 0xfc80;
    FUN_32b2_7095();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfc86;
    FUN_32b2_6e63();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfc8f;
    FUN_32b2_6d9b();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfc97;
    FUN_32b2_6e63();
  }
  local_4 = (uint *)0x32b2;
  local_6 = 0xfc9f;
  FUN_32b2_6cc6();
  local_4 = (uint *)0x32b2;
  local_6 = 0xfca8;
  FUN_32b2_6d9b();
  local_4 = (uint *)0x32b2;
  local_6 = 0xfcad;
  FUN_32b2_7191();
  if ((bool)uVar6) {
    local_4 = (uint *)0x32b2;
    local_6 = 0xfcb7;
    FUN_32b2_6cc6();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfcc0;
    FUN_32b2_6d9b();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfcc5;
    FUN_32b2_7173();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfccd;
    FUN_32b2_704d();
    local_4 = &local_1e;
    local_6 = 0x32b2;
    local_8 = 0xfcd6;
    FUN_32b2_7035();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfcdc;
    FUN_32b2_6e63();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfce5;
    FUN_32b2_6d9b();
    local_4 = (uint *)0x32b2;
    local_6 = 0xfced;
    FUN_32b2_6e63();
  }
  local_4 = (uint *)param_6;
  local_6 = param_5;
  local_8 = 0x32b2;
  local_a = 0xfcfb;
  FUN_32b2_6cc6();
  local_8 = 0x32b2;
  local_a = 0xfd00;
  FUN_32b2_7258();
  local_8 = 0x32b2;
  local_a = 0xfd05;
  local_8 = FUN_32b2_6f61();
  local_a = 0x32b2;
  local_c = 0xfd0e;
  FUN_32b2_6cc6();
  local_a = 0x32b2;
  local_c = 0xfd13;
  FUN_32b2_7258();
  local_a = 0x32b2;
  local_c = 0xfd18;
  local_a = FUN_32b2_6f61();
  local_c = 0x32b2;
  local_e = 0xfd21;
  FUN_32b2_6cc6();
  local_c = 0x32b2;
  local_e = 0xfd26;
  FUN_32b2_7258();
  local_c = 0x32b2;
  local_e = 0xfd2b;
  local_c = FUN_32b2_6f61();
  local_e = 0x32b2;
  local_10 = 0xfd34;
  FUN_32b2_6cc6();
  local_e = 0x32b2;
  local_10 = 0xfd39;
  FUN_32b2_7258();
  local_e = 0x32b2;
  local_10 = 0xfd3e;
  local_e = FUN_32b2_6f61();
  local_10 = 0x32b2;
  local_12 = 0xfd43;
  FUN_1def_0000();
  return;
}


