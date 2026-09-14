/* 1885:3543 */

void __cdecl16far FUN_1885_3543(void)

{
  int local_a [3];
  int iVar1;
  
  local_a[2] = 0xbd9e;
  FUN_32b2_02bc();
  local_a[2] = 0;
  local_a[1] = 7;
  local_a[0] = 4;
  FUN_1def_23c5(0xa0e,2);
  iVar1 = 1;
  do {
    local_a[1] = 6;
    local_a[0] = iVar1 + 4;
    local_a[2] = local_a[0];
    FUN_1def_23c5(0x1adc,2);
    local_a[2] = 0;
    local_a[1] = 6;
    local_a[0] = 0;
    FUN_1def_23c5(0x1ae4,10);
    local_a[2] = 0;
    local_a[1] = 6;
    local_a[0] = 0;
    FUN_1def_23c5(iVar1 * 7 + 0xf69,2);
    local_a[2] = 0;
    local_a[1] = 6;
    local_a[0] = 0;
    FUN_1def_23c5(local_a,8);
    local_a[2] = 0;
    local_a[1] = 6;
    local_a[0] = 0;
    FUN_1def_23c5(iVar1 * 7 + 0xf00,10);
    local_a[2] = 0;
    local_a[1] = 6;
    local_a[0] = 0;
    FUN_1def_23c5(local_a,0xf);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}


