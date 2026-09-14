/* 1885:4226 */

int __cdecl16far FUN_1885_4226(uint param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  
  FUN_32b2_02bc();
  iVar1 = *(int *)0xa60 + -6;
  if (((param_3 <= iVar1) && (iVar1 = *(int *)0xa5e, iVar1 <= param_3)) &&
     (iVar1 = *(int *)0xa5c + 2, iVar1 <= param_2)) {
    puVar2 = (undefined2 *)(uint)(*(byte *)0x4a % 10);
    uVar3 = (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
    if ((int)uVar3 < 100) {
      uVar4 = uVar3 < 10;
      if (uVar3 == 10) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        iVar1 = FUN_32b2_7191(0x32b2);
        if ((bool)uVar4) {
          return iVar1;
        }
        puVar2 = &param_3;
        uVar3 = param_4;
        FUN_1885_3e5e(&param_2);
      }
      uVar4 = uVar3 < 0x32;
      if (uVar3 == 0x32) {
        FUN_32b2_6d14();
        FUN_32b2_6cc6();
        FUN_32b2_7258();
        iVar1 = FUN_32b2_7191(0x32b2);
        if ((bool)uVar4) {
          return iVar1;
        }
        puVar2 = &param_3;
        FUN_1885_4079(&param_2,puVar2,param_4);
      }
    }
    else {
      if ((int)uVar3 % 100 != 0) {
        return (int)uVar3 / 100;
      }
      if (300 < (int)uVar3) {
        return (int)uVar3 / 100;
      }
      if (uVar3 == 100) {
        puVar2 = &param_3;
        uVar3 = param_4;
        FUN_1885_3e5e(&param_2);
      }
      if (uVar3 == 200) {
        puVar2 = &param_3;
        uVar3 = param_4;
        FUN_1885_3eb9(&param_2);
      }
      if (uVar3 == 300) {
        puVar2 = &param_3;
        FUN_1885_3f89(&param_2,puVar2,param_4);
      }
      puVar2 = (undefined2 *)((int)puVar2 + 1);
    }
    if (puVar2 != (undefined2 *)0x4) {
      if (1 < (int)puVar2) {
        puVar2 = &param_3;
        FUN_1885_3db6(&param_2,puVar2,param_4);
      }
      if (puVar2 != (undefined2 *)0x5) {
        if (2 < (int)puVar2) {
          puVar2 = &param_3;
          FUN_1885_3db6(&param_2,puVar2,param_4);
        }
        if (puVar2 != (undefined2 *)0x6) {
          FUN_1885_416f(&param_2,&param_3,param_4);
        }
      }
    }
    iVar1 = FUN_1885_416f(&param_2,&param_3,param_4);
  }
  return iVar1;
}


