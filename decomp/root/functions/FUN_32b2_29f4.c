/* 32b2:29f4 */

undefined2 __cdecl16far FUN_32b2_29f4(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined4 uVar9;
  
  uVar8 = *(undefined2 *)(param_1 + 2);
  uVar7 = *(undefined2 *)(param_1 + 4);
  uVar3 = *(undefined2 *)(param_1 + 8);
  uVar4 = *(undefined2 *)(param_1 + 10);
  uVar1 = *param_3;
  uVar2 = param_3[3];
  pcVar5 = (code *)swi(0x21);
  uVar9 = (*pcVar5)();
  uVar6 = (undefined2)uVar9;
  *param_3 = uVar1;
  param_3[3] = uVar2;
  *param_2 = uVar6;
  param_2[1] = uVar8;
  param_2[2] = uVar7;
  param_2[3] = (int)((ulong)uVar9 >> 0x10);
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  if ((bool)in_CF) {
    FUN_32b2_062e();
    uVar6 = *param_2;
  }
  param_2[6] = (uint)(byte)in_CF;
  return uVar6;
}


