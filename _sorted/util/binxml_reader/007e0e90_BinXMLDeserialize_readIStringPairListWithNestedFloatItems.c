// addr: 0x007e0e90
// name: BinXMLDeserialize_readIStringPairListWithNestedFloatItems
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BinXMLDeserialize_readIStringPairListWithNestedFloatItems(void * reader)
    */

void BinXMLDeserialize_readIStringPairListWithNestedFloatItems(void *reader)

{
  void *reader_00;
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  int *extraout_EAX;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  float fVar10;
  undefined1 local_6e;
  undefined1 local_6d;
  int *local_6c;
  undefined4 *local_68;
  int *local_64;
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  reader_00 = reader;
                    /* Top-level scoped deserializer that appends two-IString list nodes, reads node
                       strings/byte flags, and handles nested child items with an IString plus three
                       floats. It uses nested BinXML reader scopes and SoeUtil::IString<char>
                       storage, but the owner class is not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156362b;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_c;
  FUN_00f9f0b0(reader);
  local_4 = 0;
  cVar1 = FUN_007df5e0(uVar3);
  while (cVar1 == '\0') {
    pcVar4 = (char *)BinXMLReader_nextElement(&reader);
    if (*pcVar4 == '\x01') {
      SoeUtil_IStringPairList_appendNode((void *)*local_68);
      local_6c = extraout_EAX;
      FUN_00f9f0b0(reader_00);
      local_4 = CONCAT31(local_4._1_3_,1);
      cVar1 = FUN_007df5e0();
      piVar9 = extraout_EAX;
      while (cVar1 == '\0') {
        puVar5 = (undefined1 *)BinXMLReader_nextElement(&local_6e);
        switch(*puVar5) {
        case 1:
          iVar6 = BinXMLReader_readString(local_48);
          local_4._0_1_ = 2;
          if (*(char *)(iVar6 + 4) == '\0') {
            pcVar4 = *(char **)(iVar6 + 0xc);
          }
          else {
            pcVar4 = (char *)0x0;
          }
          if (0 < piVar9[3]) {
            piVar7 = (int *)(piVar9[1] + -4);
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 1 || iVar6 + -1 < 0) {
              (**(code **)(*piVar9 + 8))(piVar7);
            }
          }
          piVar9[3] = 0;
          piVar9[2] = 0;
          piVar9[1] = (int)pcVar4;
          if (pcVar4 == (char *)0x0) {
            iVar6 = 0;
          }
          else {
            cVar1 = *pcVar4;
            pcVar8 = pcVar4;
            while (cVar1 != '\0') {
              pcVar8 = pcVar8 + 1;
              cVar1 = *pcVar8;
            }
            iVar6 = (int)pcVar8 - (int)pcVar4;
          }
          piVar9[2] = iVar6;
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00f9e6e0();
          break;
        case 2:
          bVar2 = BinXMLReader_readUInt8(reader_00);
          piVar9[8] = (uint)bVar2;
          break;
        case 3:
          FUN_00f9f0b0(reader_00);
          local_4._0_1_ = 6;
          local_64 = Mem_Alloc(0x24);
          if (local_64 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *local_64 = (int)SoeUtil::IString<char>::vftable;
            local_64[1] = (int)&DAT_01be0c88;
            local_64[3] = 0;
            local_64[2] = 0;
            local_64[4] = 0;
            local_64[5] = 0;
            local_64[6] = 0;
            local_64[7] = 0;
            local_64[8] = 0;
            piVar7 = local_64;
          }
          local_4 = CONCAT31(local_4._1_3_,6);
          cVar1 = FUN_007df5e0();
          while (cVar1 == '\0') {
            puVar5 = (undefined1 *)BinXMLReader_nextElement(&local_6d);
            switch(*puVar5) {
            case 1:
              iVar6 = BinXMLReader_readString(local_20);
              local_4._0_1_ = 9;
              if (*(char *)(iVar6 + 4) == '\0') {
                pcVar4 = *(char **)(iVar6 + 0xc);
              }
              else {
                pcVar4 = (char *)0x0;
              }
              if (0 < piVar7[3]) {
                piVar9 = (int *)(piVar7[1] + -4);
                LOCK();
                iVar6 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar6 == 1 || iVar6 + -1 < 0) {
                  (**(code **)(*piVar7 + 8))(piVar9);
                }
              }
              piVar7[3] = 0;
              piVar7[2] = 0;
              piVar7[1] = (int)pcVar4;
              if (pcVar4 == (char *)0x0) {
                iVar6 = 0;
              }
              else {
                cVar1 = *pcVar4;
                pcVar8 = pcVar4;
                while (cVar1 != '\0') {
                  pcVar8 = pcVar8 + 1;
                  cVar1 = *pcVar8;
                }
                iVar6 = (int)pcVar8 - (int)pcVar4;
              }
              piVar7[2] = iVar6;
              local_4 = CONCAT31(local_4._1_3_,6);
              FUN_00f9e6e0();
              piVar9 = local_6c;
              break;
            case 2:
              fVar10 = BinXMLReader_readFloat(reader_00);
              piVar7[4] = (int)fVar10;
              break;
            case 3:
              fVar10 = BinXMLReader_readFloat(reader_00);
              piVar7[5] = (int)fVar10;
              break;
            case 4:
              fVar10 = BinXMLReader_readFloat(reader_00);
              piVar7[6] = (int)fVar10;
            }
            cVar1 = FUN_007df5e0();
          }
          if (piVar7[2] != 0) {
            piVar7[7] = piVar9[10];
            if (piVar9[10] == 0) {
              piVar9[9] = (int)piVar7;
            }
            else {
              *(int **)(piVar9[10] + 0x20) = piVar7;
            }
            piVar9[0xb] = piVar9[0xb] + 1;
            piVar9[10] = (int)piVar7;
          }
          local_4._1_3_ = (undefined3)(local_4 >> 8);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00f9fd90();
          break;
        case 4:
          iVar6 = BinXMLReader_readString(local_34);
          piVar9 = local_6c;
          local_4._0_1_ = 4;
          if (*(char *)(iVar6 + 4) == '\0') {
            pcVar4 = *(char **)(iVar6 + 0xc);
          }
          else {
            pcVar4 = (char *)0x0;
          }
          if (0 < local_6c[7]) {
            piVar7 = (int *)(local_6c[5] + -4);
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 1 || iVar6 + -1 < 0) {
              (**(code **)(local_6c[4] + 8))(piVar7);
            }
          }
          piVar9[7] = 0;
          piVar9[6] = 0;
          piVar9[5] = (int)pcVar4;
          if (pcVar4 == (char *)0x0) {
            iVar6 = 0;
          }
          else {
            cVar1 = *pcVar4;
            pcVar8 = pcVar4;
            while (cVar1 != '\0') {
              pcVar8 = pcVar8 + 1;
              cVar1 = *pcVar8;
            }
            iVar6 = (int)pcVar8 - (int)pcVar4;
          }
          piVar9[6] = iVar6;
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00f9e6e0();
          piVar9 = local_6c;
        }
        cVar1 = FUN_007df5e0();
      }
      local_4 = local_4 & 0xffffff00;
      FUN_00f9fd90();
    }
    cVar1 = FUN_007df5e0();
  }
  local_4 = 0xffffffff;
  FUN_00f9fd90();
  ExceptionList = local_c;
  return;
}

