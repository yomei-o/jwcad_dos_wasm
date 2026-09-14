/* 32b2:7360 */

void __cdecl16far FUN_32b2_7360(undefined2 param_1,uint param_2)

{
  uint in_CX;
  uint unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x8afd = 1;
  FUN_32b2_739a();
  *(undefined1 *)0x8afd = 0;
  if (unaff_SI < param_2) {
    *unaff_DI = in_CX | 0x40;
  }
  return;
}


