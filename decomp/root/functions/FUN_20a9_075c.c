/* 20a9:075c */

void __cdecl16far FUN_20a9_075c(uint param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  FUN_32b2_4c4c();
  out(0x3ce,CONCAT11('\x01' << ((byte)param_1 & 7 ^ 7),8));
  out(0x3ce,0x205);
  out(0x3ce,CONCAT11(param_4,3));
  *(undefined1 *)((param_1 >> 3) + param_2 * *(int *)0x1cc2 + *(int *)0x1cc8) = param_3;
  FUN_20a9_0702();
  FUN_32b2_4c7a();
  return;
}


