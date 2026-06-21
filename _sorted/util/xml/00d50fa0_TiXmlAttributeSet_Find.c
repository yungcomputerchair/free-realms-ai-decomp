// addr: 0x00d50fa0
// name: TiXmlAttributeSet_Find
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall TiXmlAttributeSet_Find(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
                    /* Searches the circular attribute set for an attribute whose name string equals
                       the requested name. Evidence: compares the string at attribute offset 0x14+8
                       and advances through the next pointer at 0x20. */
  iVar2 = *(int *)(param_1 + 0x20);
  do {
    if (iVar2 == param_1) {
      return 0;
    }
    pbVar3 = (byte *)(*(int *)(iVar2 + 0x14) + 8);
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d50fd8:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d50fdd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d50fd8;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00d50fdd:
    if (iVar4 == 0) {
      return iVar2;
    }
    iVar2 = *(int *)(iVar2 + 0x20);
  } while( true );
}

