/* 32b2:314e */

undefined2 * __cdecl16far FUN_32b2_314e(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  if (param_3 != 0) {
    if ((param_2 < param_1) && (param_1 < (undefined2 *)((int)param_2 + param_3))) {
      puVar4 = (undefined1 *)((int)param_2 + param_3);
      puVar5 = (undefined1 *)((int)param_1 + param_3);
      while( true ) {
        puVar5 = puVar5 + -1;
        puVar4 = puVar4 + -1;
        if (param_3 == 0) break;
        param_3 = param_3 - 1;
        *puVar5 = *puVar4;
      }
    }
    else {
      puVar6 = param_1;
      if (((uint)param_1 & 1) != 0) {
        puVar6 = (undefined2 *)((int)param_1 + 1);
        puVar1 = param_2;
        param_2 = (undefined2 *)((int)param_2 + 1);
        *(undefined1 *)param_1 = *(undefined1 *)puVar1;
        param_3 = param_3 - 1;
      }
      for (uVar3 = param_3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = param_2;
        param_2 = param_2 + 1;
        *puVar2 = *puVar1;
      }
      for (uVar3 = (uint)((param_3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar2 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 1);
        puVar1 = param_2;
        param_2 = (undefined2 *)((int)param_2 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      }
    }
  }
  return param_1;
}


