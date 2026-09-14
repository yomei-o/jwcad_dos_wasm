/* 1000:0806 */

/* WARNING: Control flow encountered bad instruction data */

void switchD_1000:0a8a::caseD_0(void)

{
  char *pcVar1;
  code *pcVar2;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  pcVar2 = (code *)swi(0x3f);
  (*pcVar2)();
  *(int *)(in_BX + -0x16b4) = *(int *)(in_BX + -0x16b4) + unaff_SI;
  pcVar1 = (char *)(CONCAT11((char)((uint)in_BX >> 8) * '\x02',(char)in_BX) + 0x36ff);
  *pcVar1 = *pcVar1 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


