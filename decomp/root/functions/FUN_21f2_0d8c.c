/* 21f2:0d8c */

/* WARNING: Removing unreachable block (ram,0x00022d3e) */
/* WARNING: Removing unreachable block (ram,0x00022bc2) */
/* WARNING: Removing unreachable block (ram,0x00022bce) */
/* WARNING: Removing unreachable block (ram,0x00022bf0) */

undefined1 __cdecl16far FUN_21f2_0d8c(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  char local_20;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 *puStack_6;
  undefined1 uVar2;
  
  puStack_6 = (undefined2 *)0x2cb7;
  FUN_32b2_02bc();
  local_12 = CONCAT11(0xb,(undefined1)local_12);
  puStack_6 = &local_12;
  uStack_8 = 0x32b2;
  uStack_a = 0x2cc8;
  FUN_32b2_29ac();
  if (local_20 == '\0') {
    uVar2 = 0;
  }
  else {
    local_12 = CONCAT11(8,(undefined1)local_12);
    puStack_6 = &local_12;
    uStack_8 = 0x32b2;
    uStack_a = 0x2ce6;
    FUN_32b2_29ac();
    if (local_20 == '\0') {
      local_12 = CONCAT11(8,(undefined1)local_12);
      puStack_6 = &local_12;
      uStack_8 = 0x32b2;
      uStack_a = 0x2d03;
      FUN_32b2_29ac();
    }
    uVar1 = *(undefined2 *)0x928e;
    puStack_6 = (undefined2 *)*(undefined2 *)0x928c;
    uStack_8 = *(undefined2 *)0x928a;
    uStack_a = *(undefined2 *)0x9288;
    uStack_c = *(undefined2 *)0x928e;
    uStack_e = *(undefined2 *)0x928c;
    uStack_10 = *(undefined2 *)0x928a;
    local_12 = *(undefined2 *)0x9288;
    FUN_21f2_23a2();
    uVar2 = (undefined1)uVar1;
  }
  return uVar2;
}


