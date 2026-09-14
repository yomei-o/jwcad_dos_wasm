/* 3ab8:401b */

int __cdecl16far FUN_3ab8_401b(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int local_4;
  
  FUN_21f2_0ebc();
  *(undefined1 *)0x1062 = 0;
  if (param_1 == 1) {
    uVar2 = (int)*(uint *)0xb310 >> 0xf;
    local_4 = param_2 % 0x10 +
              (((int)((*(uint *)0xb310 ^ uVar2) - uVar2) >> 4 ^ uVar2) - uVar2) * 0x10;
  }
  else {
    if (param_1 == 2) {
      return *(int *)0xb310;
    }
    local_4 = param_2;
  }
  iVar1 = func_0x00008854(0x22b2);
  if (iVar1 != 0) {
    local_4 = *(int *)0xb310;
  }
  return local_4;
}


