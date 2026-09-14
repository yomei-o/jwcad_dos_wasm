/* 12c1:0412 */

undefined2 __cdecl16near FUN_12c1_0412(void)

{
  char cVar1;
  undefined2 uVar2;
  char *unaff_SI;
  undefined2 unaff_DS;
  char *local_6;
  
  FUN_32b2_24fa();
  local_6 = (char *)0xad36;
  do {
    cVar1 = *unaff_SI;
    *local_6 = cVar1;
    unaff_SI = unaff_SI + 1;
    local_6 = local_6 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)0xad13 = 0x3d;
  *(undefined1 *)0xad12 = 0;
  *(undefined2 *)0xad18 = 0xad36;
  *(undefined2 *)0xad30 = unaff_DS;
  FUN_32b2_29f4(0xad12,0xad12,0xad2a);
  if (*(int *)0xad1e == 0) {
    uVar2 = *(undefined2 *)0xad12;
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}


