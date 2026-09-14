/* 20a9:04ba */

void __cdecl16far FUN_20a9_04ba(void)

{
  byte bVar1;
  undefined2 **ppuVar2;
  int iVar3;
  undefined1 extraout_AH;
  undefined1 local_72 [98];
  undefined2 uStack_10;
  uint local_e;
  undefined1 *local_c;
  undefined2 local_a;
  undefined2 **local_8;
  undefined1 **local_6;
  undefined2 **local_4;
  
  local_4 = (undefined2 **)0x20a9;
  local_6 = (undefined1 **)0xf55;
  FUN_32b2_02bc();
  local_4 = (undefined2 **)0x1ccc;
  local_6 = (undefined1 **)0x1ccf;
  local_8 = (undefined2 **)0x32b2;
  local_a = 0xf62;
  ppuVar2 = (undefined2 **)FUN_32b2_0748();
  if (ppuVar2 != (undefined2 **)0x0) {
    local_e = local_e & 0xff00;
    do {
      local_6 = (undefined1 **)0x64;
      local_8 = (undefined2 **)local_72;
      local_a = 0x32b2;
      local_c = (undefined1 *)0xf7f;
      local_4 = ppuVar2;
      iVar3 = FUN_32b2_257c();
      if (iVar3 != 0) {
        local_4 = &local_4;
        local_6 = &local_c;
        local_8 = &local_6;
        local_a = 0x1cda;
        local_c = local_72;
        local_e = 0x32b2;
        uStack_10 = 3999;
        FUN_32b2_28ae();
        local_6 = (undefined1 **)CONCAT11(local_c._0_1_,(char)local_6);
        local_8 = (undefined2 **)CONCAT11(local_8._1_1_,local_4._0_1_);
        local_4 = local_8;
        local_8 = (undefined2 **)CONCAT11(extraout_AH,(char)local_e);
        local_a = 0x32b2;
        local_c = (undefined1 *)0xfc2;
        FUN_20a9_0092();
      }
      bVar1 = (char)local_e + 1;
      local_e = CONCAT11(local_e._1_1_,bVar1);
    } while (bVar1 < 0x10);
  }
  local_4 = (undefined2 **)0x32b2;
  local_6 = (undefined1 **)0xfd3;
  FUN_32b2_252e();
  return;
}


