/* 32b2:2916 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 __cdecl16far
FUN_32b2_2916(byte param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar8;
  undefined4 uVar9;
  undefined1 local_e;
  byte local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  
  local_e = (code)0xcd;
  local_d = param_1;
  bVar8 = param_1 < 0x25;
  if ((param_1 == 0x25) || (bVar8 = param_1 < 0x26, param_1 == 0x26)) {
    local_a = 0xcb;
    local_b = 0x44;
    local_c = 0x44;
  }
  else {
    local_c = 0xcb;
  }
  uVar7 = *(undefined2 *)(param_2 + 2);
  uVar6 = *(undefined2 *)(param_2 + 4);
  uVar3 = *(undefined2 *)(param_2 + 8);
  uVar4 = *(undefined2 *)(param_2 + 10);
  uVar1 = *param_4;
  uVar2 = param_4[3];
  uVar9 = (*(code *)&local_e)(0x32b2);
  uVar5 = (undefined2)uVar9;
  *param_4 = uVar1;
  param_4[3] = uVar2;
  *param_3 = uVar5;
  param_3[1] = uVar7;
  param_3[2] = uVar6;
  param_3[3] = (int)((ulong)uVar9 >> 0x10);
  param_3[4] = uVar3;
  param_3[5] = uVar4;
  if (bVar8) {
    FUN_32b2_062e();
    uVar5 = *param_3;
  }
  param_3[6] = (uint)bVar8;
  return uVar5;
}


