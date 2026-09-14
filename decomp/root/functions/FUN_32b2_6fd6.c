/* 32b2:6fd6 */

void __cdecl16far FUN_32b2_6fd6(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  puVar3 = (undefined2 *)*(undefined2 *)0x8ac6;
  bVar2 = *(byte *)(puVar3 + -1);
  puVar4 = (undefined2 *)puVar3[-2];
  if (puVar4 == puVar3) {
    pbVar1 = (byte *)((uint)bVar2 + (int)puVar3);
    *pbVar1 = *pbVar1 ^ 0x80;
    return;
  }
  puVar3[-2] = puVar3;
  *puVar3 = *puVar4;
  if (bVar2 == 3) {
    puVar3[1] = puVar4[1] ^ 0x8000;
    return;
  }
  puVar3[1] = puVar4[1];
  puVar3[2] = puVar4[2];
  puVar3[3] = puVar4[3] ^ 0x8000;
  return;
}


