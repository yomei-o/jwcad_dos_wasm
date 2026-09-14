/* 12c1:0e06 */

undefined2 __cdecl16near FUN_12c1_0e06(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_32b2_24fa();
  iVar1 = FUN_12c1_04b4();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_12c1_0412();
    *(undefined2 *)0xad12 = 0x4402;
    *(undefined2 *)0xad14 = uVar2;
    *(undefined2 *)0xad16 = 4;
    *(undefined2 *)0xad18 = 0xad76;
    *(undefined2 *)0xad30 = unaff_DS;
    FUN_32b2_29f4(0xad12,0xad12,0xad2a);
    iVar1 = *(int *)0xad12;
    FUN_12c1_0485();
    if (iVar1 == 4) {
      FUN_32b2_31c2(0xad46,0,0x10);
      *(undefined2 *)0xad46 = 1;
      *(undefined2 *)0xad4a = 0xad56;
      *(undefined2 *)0xad4c = unaff_DS;
      iVar1 = FUN_12c1_0fc3(0xad46,unaff_DS);
      if (iVar1 < 0) {
        uVar2 = 0;
      }
      else if (*(int *)0xad56 < 1) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_32b2_2208(0xad58,0x15f2,8);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


