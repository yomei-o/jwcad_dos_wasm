/* 32b2:484e */

byte * __cdecl16far FUN_32b2_484e(byte *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined2 unaff_DS;
  byte *local_10;
  byte *local_e;
  int local_a;
  
  if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
    pbVar5 = (byte *)FUN_32b2_44fe(param_1,param_3);
    return pbVar5;
  }
  if (param_1 == (byte *)0x0) {
    pbVar5 = (byte *)thunk_FUN_32b2_1f83(0x104);
    if (pbVar5 == (byte *)0x0) {
      *(undefined2 *)0x7a34 = 0xc;
      return (byte *)0x0;
    }
    param_3 = 0x104;
  }
  else {
    pbVar5 = param_1;
    if (param_3 < 4) {
      *(undefined2 *)0x7a34 = 0x22;
      return (byte *)0x0;
    }
  }
  pbVar6 = pbVar5 + (param_3 - 1);
  if (((param_2[1] == 0x5c) || (param_2[1] == 0x2f)) && ((*param_2 == 0x5c || (*param_2 == 0x2f))))
  {
    local_a = 0;
    pbVar1 = pbVar5;
    do {
      do {
        local_10 = pbVar1;
        bVar3 = *param_2;
        if (bVar3 == 0) goto LAB_32b2_494b;
        param_2 = param_2 + 1;
        pbVar1 = local_10 + 1;
        *local_10 = bVar3;
        if (pbVar6 < pbVar1) goto LAB_32b2_48fe;
      } while (((*(byte *)(local_10[-1] + 0x7e09) & 4) != 0) || ((bVar3 != 0x5c && (bVar3 != 0x2f)))
              );
      *local_10 = 0x5c;
      local_a = local_a + 1;
    } while (local_a != 4);
LAB_32b2_494b:
    *local_10 = 0x5c;
    local_e = local_10;
  }
  else {
    if (param_2[1] == 0x3a) {
      bVar3 = *param_2;
      *pbVar5 = bVar3;
      bVar3 = bVar3 & 0x1f;
      pbVar5[1] = 0x3a;
      param_2 = param_2 + 2;
      local_10 = pbVar5 + 2;
    }
    else {
      bVar3 = 0;
      local_10 = pbVar5;
    }
    if ((*param_2 == 0x5c) || (*param_2 == 0x2f)) {
      if (bVar3 == 0) {
        cVar4 = FUN_32b2_44da();
        pbVar1 = local_10 + 1;
        *local_10 = cVar4 + 0x40;
        local_10 = local_10 + 2;
        *pbVar1 = 0x3a;
      }
      param_2 = param_2 + 1;
    }
    else {
      iVar7 = FUN_32b2_4514(bVar3,pbVar5,param_3);
      if (iVar7 == 0) goto LAB_32b2_4904;
      iVar7 = FUN_32b2_21c4(pbVar5);
      local_10 = pbVar5 + iVar7;
      if (((*(byte *)(local_10[-2] + 0x7e09) & 4) == 0) &&
         ((local_10[-1] == 0x5c || (local_10[-1] == 0x2f)))) {
        local_10 = local_10 + -1;
      }
    }
    *local_10 = 0x5c;
    local_e = pbVar5 + 2;
  }
LAB_32b2_4b0b:
  do {
    if (*param_2 == 0) {
      if (local_10[-1] == 0x3a) {
        *local_10 = 0x5c;
        local_10 = local_10 + 1;
      }
      *local_10 = 0;
      return pbVar5;
    }
    if (((*param_2 == 0x2e) && (param_2[1] == 0x2e)) &&
       ((param_2[2] == 0x5c || ((param_2[2] == 0x2f || (param_2[2] == 0)))))) {
      do {
        pbVar1 = local_10 + -1;
        if (((*pbVar1 == 0x5c) || (*pbVar1 == 0x2f)) &&
           (iVar7 = FUN_32b2_4b34(local_e,pbVar1), iVar7 != 0)) {
          pbVar1 = local_10 + -2;
        }
        local_10 = pbVar1;
      } while (((*local_10 != 0x5c) && (*local_10 != 0x2f)) && (local_e < local_10));
      if (local_10 < local_e) break;
      param_2 = param_2 + 2;
    }
    else {
      pbVar1 = param_2;
      pbVar2 = local_10;
      if ((*param_2 != 0x2e) ||
         (((param_2[1] != 0x5c && (param_2[1] != 0x2f)) && (param_2[1] != 0)))) {
        while (((local_10 = pbVar2, param_2 = pbVar1, *param_2 != 0x5c && (*param_2 != 0x2f)) &&
               ((*param_2 != 0 && (local_10 < pbVar6))))) {
          local_10[1] = *param_2;
          pbVar1 = param_2 + 1;
          pbVar2 = local_10 + 1;
          if ((*(byte *)(*param_2 + 0x7e09) & 4) != 0) {
            local_10[2] = param_2[1];
            pbVar1 = param_2 + 2;
            pbVar2 = local_10 + 2;
          }
        }
        if (pbVar6 <= local_10) break;
        local_10 = local_10 + 1;
        *local_10 = 0x5c;
        if ((*param_2 == 0x5c) || (*param_2 == 0x2f)) {
          param_2 = param_2 + 1;
        }
        goto LAB_32b2_4b0b;
      }
      param_2 = param_2 + 1;
    }
    if (*param_2 != 0) {
      param_2 = param_2 + 1;
    }
  } while( true );
LAB_32b2_48fe:
  *(undefined2 *)0x7a34 = 0x22;
LAB_32b2_4904:
  if (param_1 == (byte *)0x0) {
    thunk_FUN_32b2_1f62(pbVar5);
  }
  return (byte *)0x0;
}


