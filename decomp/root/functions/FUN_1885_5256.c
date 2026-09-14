/* 1885:5256 */

void __cdecl16far FUN_1885_5256(int param_1)

{
  undefined2 unaff_DS;
  undefined1 local_1e [14];
  undefined2 local_10 [2];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x1885;
  puStack_6 = (undefined2 *)0xdab1;
  FUN_32b2_02bc();
  if (param_1 == 0) {
    if ((*(byte *)0xc3be & 8) == 0) {
      if ((*(byte *)0xc3be & 1) == 0) {
        local_10[0] = 2;
        if (*(int *)0x156 == 0) {
          puStack_4 = local_1e;
          puStack_6 = local_10;
          uStack_8 = 0x33;
          uStack_a = 0x32b2;
          uStack_c = 0xdae1;
          FUN_32b2_247a();
        }
      }
      else {
        puStack_4 = (undefined1 *)0x0;
        puStack_6 = (undefined2 *)0x270f;
        uStack_8 = 0x32b2;
        uStack_a = 0xdaf1;
        FUN_1885_5224();
      }
      *(undefined2 *)0x156 = 1;
    }
  }
  else if (param_1 == 1) {
    if ((*(byte *)0xc3be & 1) == 0) {
      local_10[0] = 1;
      puStack_4 = local_1e;
      puStack_6 = local_10;
      uStack_8 = 0x33;
      uStack_a = 0x32b2;
      uStack_c = 0xdb18;
      FUN_32b2_247a();
    }
    *(undefined2 *)0x156 = 0;
  }
  return;
}


