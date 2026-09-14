/* 3ab8:0e4a */

/* WARNING: Removing unreachable block (ram,0x0003bd10) */

undefined2 __cdecl16far FUN_3ab8_0e4a(undefined2 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  int local_90;
  undefined2 local_48 [27];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_a;
  
  FUN_21f2_0ebc();
  puVar5 = local_48;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  uStack_a = 0xba04;
  func_0x00029da5();
  uStack_a = 0xba09;
  func_0x00029d78();
  uStack_a = 0xba12;
  func_0x00029c2c();
  uStack_a = 0xba1b;
  func_0x00029983();
  uStack_a = 0xba24;
  func_0x000297e6();
  uStack_a = 0xba2c;
  func_0x0002996b();
  uStack_a = 0xba4f;
  func_0x00029da5();
  uStack_a = 0xba54;
  func_0x00029c9d();
  uStack_a = 0xba5d;
  func_0x00029983();
  uStack_a = 0xba9c;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbaa6;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbaab;
  func_0x0002a11e();
  uStack_a = 0xbab5;
  func_0x00029834();
  uStack_a = 0xbabd;
  func_0x00029983();
  uStack_a = 0xbac6;
  func_0x000297e6();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbad0;
  func_0x000299d1();
  uStack_10 = 0x22b2;
  uStack_12 = 0xbad5;
  func_0x0002a10c();
  uStack_a = 0xbadf;
  func_0x00029834();
  uStack_a = 0xbae8;
  func_0x00029983();
  local_90 = 0;
  do {
    uStack_a = 0xbb17;
    func_0x000297e6();
    uStack_a = 0xbb1f;
    FUN_28b3_100d();
    uStack_a = 0xbb28;
    func_0x0002996b();
    uStack_a = 0xbb30;
    func_0x00029983();
    uStack_a = 0xbb3a;
    func_0x000297e6();
    uStack_a = 0xbb42;
    FUN_28b3_100d();
    uStack_a = 0xbb4b;
    func_0x0002996b();
    uStack_a = 0xbb53;
    func_0x00029983();
    uStack_a = 0xbb5c;
    func_0x000297e6();
    uStack_a = 0xbb65;
    func_0x00029b6d();
    uStack_a = 0xbb6e;
    func_0x000297e6();
    uStack_a = 0xbb76;
    func_0x00029b6d();
    uStack_a = 0xbb7b;
    FUN_28b3_117c();
    uStack_a = 0xbb8c;
    func_0x00029983();
    uStack_a = 0xbb95;
    func_0x000297e6();
    uStack_a = 0xbb9d;
    func_0x00029b6d();
    uStack_a = 0xbba6;
    func_0x000297e6();
    uStack_a = 0xbbaf;
    func_0x00029b6d();
    uStack_a = 0xbbb4;
    FUN_28b3_1163();
    uStack_a = 0xbbbd;
    func_0x00029b85();
    uStack_a = 0xbbc5;
    func_0x00029983();
    local_90 = local_90 + 1;
  } while (local_90 < 5);
  uVar6 = 0;
  uStack_a = 0xbd23;
  func_0x000297e6();
  uStack_a = 0xbd2b;
  FUN_28b3_100d();
  uStack_a = 0xbd33;
  func_0x0002996b();
  uStack_a = 0xbd3b;
  FUN_28b3_0ee9();
  uStack_a = 0xbd44;
  func_0x00029834();
  uStack_a = 0xbd4c;
  func_0x000297e6();
  uStack_a = 0xbd54;
  func_0x00029b6d();
  uStack_a = 0xbd5d;
  func_0x000297e6();
  uStack_a = 0xbd66;
  FUN_28b3_100d();
  uStack_a = 0xbd6e;
  func_0x0002996b();
  uStack_a = 0xbd76;
  func_0x00029b6d();
  uStack_a = 0xbd7b;
  FUN_28b3_117c();
  uStack_a = 0xbd83;
  func_0x0002996b();
  uStack_a = 0xbd88;
  func_0x00029d78();
  uStack_a = 0xbd8d;
  FUN_28b3_1181();
  if ((bool)uVar6) {
    return 0;
  }
  uVar3 = FUN_3ab8_1065();
  return uVar3;
}


