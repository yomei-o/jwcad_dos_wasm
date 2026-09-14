/* 32b2:506e */

void __cdecl16far FUN_32b2_506e(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  uint in_BX;
  undefined2 unaff_SS;
  
  if (in_BX < 4) {
    if (in_BX == 3) {
      *(undefined2 *)0x8944 = in_AX;
      *(undefined2 *)0x8946 = in_DX;
    }
    else {
      *(undefined2 *)0x8ac6 = 0x8956;
    }
  }
  return;
}


