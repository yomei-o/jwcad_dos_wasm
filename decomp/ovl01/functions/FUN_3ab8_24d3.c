/* 3ab8:24d3 */

void FUN_3ab8_24d3(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined2 uStack_2;
  
  uStack_2 = 0x3ab8;
  func_0x000299d1();
  uStack_2 = 0;
  FUN_1def_05d1(0x22b2);
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c74();
  func_0x00029c74();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029d78();
  func_0x000299d1();
  func_0x000297e6();
  func_0x00029d78();
  uStack_2 = 0x22b2;
  func_0x000299d1();
  uStack_2 = 0;
  func_0x0001e558(0x22b2);
  func_0x000297e6();
  func_0x00029d78();
  func_0x00029c74();
  func_0x00029c74();
  func_0x00029983();
  func_0x000297e6();
  func_0x000299d1();
  func_0x000297e6();
  uStack_2 = 0x22b2;
  func_0x000299d1();
  uStack_2 = 0;
  FUN_1def_05d1(0x22b2);
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029b55();
  func_0x0002996b();
  FUN_28b3_117c();
  func_0x00029983();
  func_0x000297e6();
  func_0x000299d1();
  func_0x000297e6();
  uStack_2 = 0x22b2;
  func_0x000299d1();
  uStack_2 = 0;
  func_0x0001e558(0x22b2);
  uVar7 = (undefined1 *)0xffed < &uStack_2;
  func_0x000297e6();
  func_0x000297e6();
  func_0x00029b55();
  func_0x0002996b();
  FUN_28b3_117c();
  func_0x00029983();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  FUN_28b3_100d();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x000297e6();
  func_0x00029b6d();
  FUN_28b3_117c();
  func_0x0002996b();
  FUN_28b3_0ee9();
  func_0x00029834();
  func_0x000297e6();
  func_0x00029d78();
  FUN_28b3_1181();
  if ((bool)uVar7) {
    uVar3 = *(undefined2 *)0x9482;
    *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)0x9480;
    *(undefined2 *)(unaff_BP + -2) = uVar3;
    uVar3 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x26) = *(undefined2 *)0x943c;
    *(undefined2 *)(unaff_BP + -0x24) = uVar3;
  }
  else {
    func_0x000297e6();
    func_0x00029d78();
    func_0x000299d1();
    FUN_28b3_1582();
    func_0x00029834();
    func_0x0002996b();
    func_0x00029b9d();
    func_0x00029983();
    func_0x000297e6();
    func_0x00029b85();
    func_0x00029983();
  }
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029af6();
  func_0x00029983();
  func_0x000297e6();
  func_0x00029b6d();
  func_0x00029983();
  puVar5 = (undefined2 *)(unaff_BP + -0x3e);
  puVar6 = (undefined2 *)*(undefined2 *)(unaff_BP + 6);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


