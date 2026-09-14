/* 1def:2742 */

uint __cdecl16far FUN_1def_2742(void)

{
  uint uVar1;
  uint local_4;
  
  FUN_32b2_02bc();
  local_4 = FUN_20a9_0461();
  if (0xfeff < local_4) {
    uVar1 = local_4 & 0xff;
    if (uVar1 == 0x47) {
      local_4 = 0x3e00;
    }
    else if (uVar1 == 0x48) {
      local_4 = 0x3a00;
    }
    else if (uVar1 == 0x49) {
      local_4 = 0x3600;
    }
    else if (uVar1 == 0x4b) {
      local_4 = 0x3b00;
    }
    else if (uVar1 == 0x4d) {
      local_4 = 0x3c00;
    }
    else if (uVar1 == 0x4f) {
      local_4 = 0x3f00;
    }
    else if (uVar1 == 0x50) {
      local_4 = 0x3d00;
    }
    else if (uVar1 == 0x51) {
      local_4 = 0x3700;
    }
    else if (uVar1 == 0x52) {
      local_4 = 0x3800;
    }
    else if (uVar1 == 0x53) {
      local_4 = 0x3900;
    }
    else if (uVar1 == 0xa7) {
      local_4 = 0x3500;
    }
    else if (uVar1 == 0xab) {
      local_4 = 0x5100;
    }
  }
  if (local_4 == 9) {
    local_4 = 0xf09;
  }
  if ((0xff3a < local_4) && (local_4 < 0xff45)) {
    local_4 = (uint)(byte)((char)local_4 + 0x27) << 8;
  }
  if (local_4 == 0xffff) {
    local_4 = 0;
  }
  if (local_4 != 0) {
    local_4 = 0;
    FUN_21f2_23a2(0,0);
  }
  return local_4;
}


