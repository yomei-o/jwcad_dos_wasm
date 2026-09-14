/* 17a6:05a9 */

undefined2 __cdecl16far FUN_17a6_05a9(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 in_DX;
  byte unaff_SI;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 local_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined2 local_1a [7];
  undefined2 uStack_c;
  
  FUN_32b2_02bc();
  *(undefined2 *)0xbc0 = 1;
  uStack_c = 0x8024;
  puVar3 = (undefined2 *)FUN_1000_0398();
  puVar7 = local_1a;
  puVar6 = puVar3;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  local_1c = 3;
  if (unaff_SI < 0x5a) {
    uStack_c = 0x8058;
    uStack_1e = in_DX;
    iVar5 = FUN_21f2_06d1();
    if (iVar5 == 0) {
      *(byte *)(puVar3 + 0xb) = *(byte *)(puVar3 + 0xb) & 0xfd;
    }
    else {
      if (param_1 != 0) {
        local_1c = 0xffff;
      }
      puVar6 = &uStack_1e;
      puVar7 = local_1a;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
      local_20 = CONCAT22(uStack_1e,local_1c);
      FUN_28b3_0a63(0x21f2,local_1c);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


