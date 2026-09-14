/* 21f2:02d9 */

void __cdecl16far FUN_21f2_02d9(uint param_1)

{
  int iVar1;
  uint local_a;
  int local_8;
  uint local_6;
  uint *local_4;
  
  local_4 = (uint *)0x21f2;
  local_6 = 0x2204;
  FUN_32b2_02bc();
  local_4 = &local_6;
  local_6 = 0x32b2;
  local_8 = 0x220d;
  FUN_32b2_2ca0();
  do {
    local_4 = &local_a;
    local_6 = 0x32b2;
    local_8 = 0x2217;
    FUN_32b2_2ca0();
    iVar1 = (int)local_4 + (uint)CARRY2(param_1,local_6) + ((int)param_1 >> 0xf);
    if (iVar1 < local_8) {
      return;
    }
  } while ((local_8 < iVar1) || (local_a <= param_1 + local_6));
  return;
}


