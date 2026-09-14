/* 21f2:0e6e */

undefined2 __cdecl16far FUN_21f2_0e6e(undefined2 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  
  FUN_32b2_02bc();
  FUN_32b2_252e();
  iVar1 = FUN_32b2_0748(0x10ca,0x254);
  *(int *)0x1d42 = iVar1;
  if (iVar1 == 0) {
    *(undefined1 *)0x10ca = 0;
    uVar2 = 0xffff;
  }
  else {
    for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
      iVar1 = 299;
      FUN_32b2_257c(0xbf48,299,*(undefined2 *)0x1d42);
    }
    puVar3 = (undefined1 *)FUN_32b2_2f7a(0xbf48,10);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
    }
    while( true ) {
      puVar3 = (undefined1 *)FUN_32b2_2f7a(0xbf48,9);
      if (puVar3 == (undefined1 *)0x0) break;
      *puVar3 = 0x20;
    }
    FUN_32b2_21e0(param_1,0xbf48,param_2);
    FUN_32b2_252e();
    uVar2 = 0;
  }
  return uVar2;
}


