/* 32b2:43a0 */

int __cdecl16far FUN_32b2_43a0(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_c [3];
  undefined2 local_6;
  
  local_c[0] = FUN_32b2_238c(0x8908);
  if (param_1 == 0) {
    iVar1 = FUN_32b2_445a(0x32b2,local_c[0],0);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    local_c[1] = 0x8910;
    local_c[2] = param_1;
    local_6 = 0;
    if ((local_c[0] == 0) ||
       ((iVar1 = FUN_32b2_406e(0,local_c[0],local_c,*(undefined2 *)0x7a5b), iVar1 == -1 &&
        ((*(int *)0x7a34 == 2 || (*(int *)0x7a34 == 0xd)))))) {
      local_c[0] = -0x76ed;
      iVar1 = FUN_32b2_41e6(0,0x8913,local_c,*(undefined2 *)0x7a5b);
    }
  }
  return iVar1;
}


