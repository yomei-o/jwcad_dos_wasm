/* 20a9:0732 */

undefined2 __cdecl16far FUN_20a9_0732(byte param_1,undefined1 param_2)

{
  FUN_32b2_02bc();
  out(0x3ce,(uint)param_1 << 8);
  out(0x3ce,0xf01);
  out(0x3ce,CONCAT11(param_2,3));
  out(0x3ce,5);
  out(0x3ce,0xff08);
  return 0xff08;
}


