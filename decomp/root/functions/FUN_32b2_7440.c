/* 32b2:7440 */

undefined2 __cdecl16far
FUN_32b2_7440(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *in_DX;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined2 uVar5;
  
  *(undefined2 *)0x8e2a = param_5;
  *(undefined2 *)0x8e2c = param_6;
  *(undefined2 *)0x8e2e = param_7;
  *(undefined2 *)0x8e30 = param_8;
  *(undefined2 *)0x8e22 = param_1;
  *(undefined2 *)0x8e24 = param_2;
  *(undefined2 *)0x8e26 = param_3;
  *(undefined2 *)0x8e28 = param_4;
  uVar5 = *(undefined2 *)0x8ac6;
  *(undefined2 *)0x8ac6 = 0x8e32;
  uVar2 = (*in_DX)(&stack0xfffe);
  *(undefined2 *)0x8ac6 = unaff_DI;
  if (!(bool)in_CF) {
    return 0x8e32;
  }
  uVar4 = uVar2 & 0xff;
  *(undefined2 *)0x8e20 = uVar5;
  *(undefined1 *)0x8e49 = 0;
  if (uVar2 == 0x302) {
    *(undefined1 *)0x8e49 = 1;
  }
  if ((char)(uVar2 >> 8) != '\x03') {
    if ((char)uVar2 != '\a') {
      if ((char)uVar2 == '\x03') {
        *(undefined2 *)0x8e32 = *(undefined2 *)0x8e14;
        *(undefined2 *)0x8e34 = *(undefined2 *)0x8e16;
        *(undefined2 *)0x8e36 = *(undefined2 *)0x8e18;
        *(undefined2 *)0x8e38 = *(undefined2 *)0x8e1a;
      }
      else {
        *(undefined2 *)0x8e32 = 0;
        *(undefined2 *)0x8e34 = 0;
        *(undefined2 *)0x8e36 = 0;
        *(undefined2 *)0x8e38 = 0;
      }
      goto LAB_32b2_74d9;
    }
    uVar4 = 3;
  }
  *(undefined2 *)0x8e32 = *(undefined2 *)0x8e14;
  *(undefined2 *)0x8e34 = *(undefined2 *)0x8e16;
  *(undefined2 *)0x8e36 = *(undefined2 *)0x8e18;
  *(undefined2 *)0x8e38 = *(undefined2 *)0x8e1a;
  *(byte *)0x8e39 = *(byte *)0x8e39 | 0x80;
LAB_32b2_74d9:
  *(uint *)0x8e1e = uVar4;
  iVar3 = FUN_32b2_7431(0x8e1e);
  if (iVar3 == 0) {
    cVar1 = '!';
    if ((*(char *)0x8e49 != '\0') || (2 < *(uint *)0x8e1e)) {
      cVar1 = '\"';
    }
    *(int *)0x7a34 = (int)cVar1;
    iVar3 = *(int *)(uVar4 * 2 + -0x71c8);
    if (iVar3 != 0) {
      FUN_32b2_3534();
      FUN_32b2_3534();
      FUN_32b2_05af(iVar3);
    }
  }
  return 0x8e32;
}


