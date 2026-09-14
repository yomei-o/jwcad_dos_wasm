/* 28b3:0704 */

void __cdecl16far FUN_28b3_0704(byte param_1)

{
  undefined1 *puVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  
  uVar2 = 0x28b3;
  FUN_32b2_02bc();
  if (param_1 < 0x7f) {
    uVar2 = FUN_3a75_0328(param_1);
  }
  if (0x9f < param_1) {
    puVar1 = (undefined1 *)((uint)(byte)((param_1 - 0x20) * '\x02') + *(int *)0x1f88);
    uVar2 = CONCAT11(*puVar1,puVar1[1]);
  }
  FUN_3a75_0260(uVar2);
  return;
}


