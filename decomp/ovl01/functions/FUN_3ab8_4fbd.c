/* 3ab8:4fbd */

/* WARNING: Control flow encountered bad instruction data */

void FUN_3ab8_4fbd(void)

{
  int in_AX;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(int *)(in_BX + unaff_SI) = *(int *)(in_BX + unaff_SI) + in_AX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


