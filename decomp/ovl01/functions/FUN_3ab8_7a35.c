/* 3ab8:7a35 */

void __cdecl16far FUN_3ab8_7a35(undefined2 param_1,undefined2 param_2,int param_3)

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
  undefined1 uVar8;
  
  func_0x000299d1(0x3ab8);
  func_0x000297e6(0x22b2);
  FUN_28b3_100d(0x22b2);
  func_0x00029d78(0x22b2);
  func_0x000299d1(0x22b2);
  FUN_3ab8_76c6();
  if (((*(byte *)(unaff_BP + -0x38) & 0xc0) != 0) || ((*(byte *)(unaff_BP + -0x37) & 0x80) != 0))
  goto LAB_3ab8_7c9f;
  param_3 = 0x25fc;
  func_0x000297e6();
  param_3 = 0x2604;
  FUN_28b3_100d();
  param_3 = 0x260c;
  func_0x0002996b();
  param_3 = 0x2614;
  func_0x00029983();
  param_3 = 0x261d;
  func_0x00029834();
  param_3 = 0x2625;
  func_0x000297e6();
  param_3 = 0x262d;
  FUN_28b3_100d();
  param_3 = 0x2635;
  func_0x0002996b();
  param_3 = 0x263d;
  func_0x00029b6d();
  param_3 = 0x2645;
  func_0x000297e6();
  param_3 = 0x264d;
  func_0x00029b6d();
  param_3 = 0x2652;
  FUN_28b3_117c();
  param_3 = 0x2657;
  func_0x00029d78();
  func_0x000299d1();
  FUN_28b3_1582();
  uVar7 = (undefined1 *)0xfff7 < &param_1;
  uVar8 = &stack0x0000 == (undefined1 *)0xfff4;
  param_3 = 0x2670;
  func_0x00029834();
  param_3 = 0x2678;
  func_0x0002996b();
  param_3 = 0x267d;
  func_0x00029d78();
  param_3 = 0x2682;
  FUN_28b3_1181();
  if ((bool)uVar7) {
    uVar3 = *(undefined2 *)0x9482;
    *(undefined2 *)(unaff_BP + -4) = *(undefined2 *)0x9480;
    *(undefined2 *)(unaff_BP + -2) = uVar3;
    uVar3 = *(undefined2 *)0x943e;
    *(undefined2 *)(unaff_BP + -0x36) = *(undefined2 *)0x943c;
    *(undefined2 *)(unaff_BP + -0x34) = uVar3;
  }
  else {
    param_3 = 0x268c;
    func_0x000297e6();
    param_3 = 0x2694;
    func_0x00029b85();
    param_3 = 0x269c;
    func_0x00029983();
    param_3 = 0x26a4;
    func_0x000297e6();
    param_3 = 0x26ac;
    func_0x00029b85();
    param_3 = 0x26b4;
    func_0x00029983();
  }
  *(undefined2 *)(unaff_BP + -0xe) = 0;
  param_3 = 0x26de;
  func_0x00029834();
  param_3 = 0x26e6;
  func_0x000297e6();
  param_3 = 0x26eb;
  func_0x00029ae7();
  param_3 = 0x26f0;
  func_0x00029d78();
  param_3 = 0x26f5;
  FUN_28b3_1181();
  if ((bool)uVar7 || (bool)uVar8) {
    uVar7 = 0;
    uVar8 = (*(byte *)(unaff_BP + -0x38) & 0x20) == 0;
    if ((bool)uVar8) {
      param_3 = 0x272e;
      func_0x000297e6();
      goto LAB_3ab8_7bb1;
    }
    param_3 = 0x2714;
    func_0x000297e6();
    param_3 = 0x271c;
    func_0x000297e6();
    param_3 = 0x2721;
    FUN_28b3_1181();
    if (!(bool)uVar7 && !(bool)uVar8) goto LAB_3ab8_7bbd;
  }
  else {
    param_3 = 0x2700;
    func_0x000297e6();
LAB_3ab8_7bb1:
    param_3 = 0x2736;
    func_0x000297e6();
    param_3 = 0x273b;
    FUN_28b3_1181();
    if ((bool)uVar7) {
LAB_3ab8_7bbd:
      *(undefined2 *)(unaff_BP + -0xe) = 1;
    }
  }
  uVar7 = 0;
  if (*(int *)(unaff_BP + -0xe) != 0) {
    param_3 = unaff_BP + -0x16;
    param_2 = 0x22b2;
    param_1 = 0x2754;
    FUN_3ab8_768f();
    param_3 = unaff_BP + -0x22;
    param_2 = 0x22b2;
    param_1 = 0x2762;
    FUN_3ab8_768f();
    param_3 = unaff_BP + -0x26;
    param_2 = 0x22b2;
    param_1 = 0x2770;
    FUN_3ab8_768f();
    param_3 = unaff_BP + -0x32;
    param_2 = 0x22b2;
    param_1 = 0x277e;
    FUN_3ab8_768f();
    param_3 = 0x2788;
    func_0x000297e6();
    param_3 = 0x278d;
    func_0x00029af6();
    param_3 = 0x2795;
    func_0x00029983();
    param_3 = 0x279d;
    func_0x000297e6();
    param_3 = 0x27a2;
    func_0x00029af6();
    param_3 = 0x27aa;
    func_0x00029983();
  }
  param_3 = 0x27b3;
  func_0x000297e6();
  param_3 = 0x27bb;
  func_0x000297e6();
  param_3 = 0x27c3;
  FUN_28b3_100d();
  param_3 = 0x27cb;
  func_0x00029b6d();
  param_3 = 0x27d3;
  func_0x000297e6();
  param_3 = 0x27db;
  FUN_28b3_100d();
  param_3 = 0x27e3;
  func_0x00029b6d();
  param_3 = 0x27e8;
  FUN_28b3_1163();
  param_3 = 0x27ed;
  FUN_28b3_1181();
  if ((bool)uVar7) {
    uVar3 = *(undefined2 *)(unaff_BP + -0x24);
    *(undefined2 *)(unaff_BP + -0x16) = *(undefined2 *)(unaff_BP + -0x26);
    *(undefined2 *)(unaff_BP + -0x14) = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x30);
    *(undefined2 *)(unaff_BP + -0x22) = *(undefined2 *)(unaff_BP + -0x32);
    *(undefined2 *)(unaff_BP + -0x20) = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x2c);
    *(undefined2 *)(unaff_BP + -0x1e) = *(undefined2 *)(unaff_BP + -0x2e);
    *(undefined2 *)(unaff_BP + -0x1c) = uVar3;
    uVar3 = *(undefined2 *)(unaff_BP + -0x50);
    *(undefined2 *)(unaff_BP + -0x2a) = *(undefined2 *)(unaff_BP + -0x52);
    *(undefined2 *)(unaff_BP + -0x28) = uVar3;
  }
LAB_3ab8_7c9f:
  uVar3 = *(undefined2 *)(unaff_BP + -0x14);
  *(undefined2 *)(unaff_BP + -0x4e) = *(undefined2 *)(unaff_BP + -0x16);
  *(undefined2 *)(unaff_BP + -0x4c) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x20);
  *(undefined2 *)(unaff_BP + -0x4a) = *(undefined2 *)(unaff_BP + -0x22);
  *(undefined2 *)(unaff_BP + -0x48) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x1c);
  *(undefined2 *)(unaff_BP + -0x46) = *(undefined2 *)(unaff_BP + -0x1e);
  *(undefined2 *)(unaff_BP + -0x44) = uVar3;
  uVar3 = *(undefined2 *)(unaff_BP + -0x28);
  *(undefined2 *)(unaff_BP + -0x42) = *(undefined2 *)(unaff_BP + -0x2a);
  *(undefined2 *)(unaff_BP + -0x40) = uVar3;
  puVar6 = (undefined2 *)0xc3a0;
  puVar5 = (undefined2 *)(unaff_BP + -0x4e);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


