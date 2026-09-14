/* 12c1:012d */

char __cdecl16near FUN_12c1_012d(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char *local_1e;
  undefined1 local_1c [8];
  int local_14;
  int local_12;
  int local_10;
  undefined1 *local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  char *pcVar3;
  
  FUN_32b2_24fa();
  for (pcVar3 = (char *)0x1514; *pcVar3 != '\0'; pcVar3 = pcVar3 + 4) {
    uStack_a = 0x2d6b;
    iVar2 = FUN_12c1_04b4();
    if (iVar2 != 0) {
      *(uint *)0x15e6 = (uint)(byte)pcVar3[1];
      return *pcVar3;
    }
  }
  uStack_a = 0x2d92;
  iVar2 = FUN_12c1_04b4();
  if (iVar2 != 0) {
    uStack_a = 0x2da1;
    iVar2 = FUN_12c1_04b4();
    if (iVar2 != 0) {
      return '\x05';
    }
    uStack_a = 0x14ae;
    uStack_c = 0x2dbf;
    iVar2 = FUN_12c1_0516();
    if (iVar2 != 0) {
      return '\b';
    }
    uStack_a = 0x2dd4;
    iVar2 = FUN_12c1_04b4();
    if (iVar2 != 0) {
      return '\x12';
    }
  }
  uStack_a = 0x2de9;
  iVar2 = FUN_12c1_0e06();
  if (iVar2 == 0) {
    uStack_a = 0x2dfe;
    iVar2 = FUN_12c1_0e06();
    if (iVar2 == 0) {
      for (local_1e = (char *)0x156c; *local_1e != '\0'; local_1e = local_1e + 6) {
        uStack_a = *(undefined2 *)(local_1e + 4);
        uStack_c = 0x2e44;
        iVar2 = FUN_12c1_0516();
        if (iVar2 != 0) {
          *(uint *)0x15e6 = (uint)(byte)local_1e[1];
          return *local_1e;
        }
      }
      for (pcVar3 = (char *)0x15c6; *pcVar3 != '\0'; pcVar3 = pcVar3 + 4) {
        uStack_a = 0x2e84;
        iVar2 = FUN_12c1_04b4();
        if (iVar2 != 0) {
          *(uint *)0x15e6 = (uint)(byte)pcVar3[1];
          return *pcVar3;
        }
      }
      uStack_a = 0x2eaa;
      iVar2 = FUN_12c1_05b6();
      if (iVar2 == 0) {
        *(undefined2 *)0xad12 = 0x4400;
        *(undefined2 *)0xad14 = 0;
        uStack_a = 0xad12;
        uStack_c = 0xad12;
        local_e = (undefined1 *)0x32b2;
        local_10 = 0x2ece;
        FUN_32b2_29ac();
        if ((*(byte *)0xad18 & 0x80) != 0) {
          *(undefined2 *)0xad12 = 0x4402;
          *(undefined2 *)0xad14 = 0;
          *(undefined2 *)0xad16 = 0x16;
          *(int *)0xad18 = (int)local_1c;
          *(undefined2 *)0xad30 = unaff_SS;
          uStack_a = 0xad2a;
          uStack_c = 0xad12;
          local_e = (undefined1 *)0xad12;
          local_10 = 0x32b2;
          local_12 = 0x2f07;
          FUN_32b2_29f4();
          if (0xf < *(uint *)0xad12) {
            uStack_a = 8;
            uStack_c = 0x14cc;
            local_e = local_1c;
            local_10 = 0x32b2;
            local_12 = 0x2f25;
            iVar2 = FUN_32b2_2208();
            if (iVar2 == 0) {
              if (local_e != (undefined1 *)0xffff) {
                *(undefined2 *)0x15e6 = local_e;
                return '\v';
              }
              uStack_a = 0x2f4c;
              iVar2 = FUN_12c1_04b4();
              if (iVar2 == 0) {
                uStack_a = 0x2f5b;
                iVar2 = FUN_12c1_04b4();
                if ((iVar2 == 0) && (local_10 != 0 || local_12 != 0)) {
                  *(int *)0xad26 = local_12;
                  *(int *)0xad28 = local_10;
                  return '\v';
                }
              }
              if (local_14 < 0x400) {
                return '\x02';
              }
            }
          }
        }
        uStack_a = 0x14e6;
        uStack_c = 0x2fa1;
        iVar2 = FUN_12c1_0516();
        if (iVar2 != 0) {
          uStack_a = 0x14ef;
          uStack_c = 0x2fb9;
          iVar2 = FUN_12c1_0516();
          if (iVar2 != 0) {
            uStack_a = 0x14f8;
            uStack_c = 0x2fd1;
            iVar2 = FUN_12c1_0516();
            if (iVar2 != 0) {
              return '\n';
            }
          }
        }
        uStack_a = 0x1501;
        uStack_c = 0x2fef;
        iVar2 = FUN_12c1_0516();
        if (iVar2 != 0) {
          uStack_a = 0x150a;
          uStack_c = 0x3007;
          iVar2 = FUN_12c1_0516();
          if (iVar2 != 0) {
            return '\x1b';
          }
        }
        cVar1 = '\0';
      }
      else {
        cVar1 = '\a';
      }
    }
    else {
      cVar1 = '\x15';
    }
  }
  else {
    cVar1 = '\x04';
  }
  return cVar1;
}


