// addr: 0x007eb2d0
// name: BinXMLDeserialize_readTwoStringsTwoFloatsThreeBytes
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readTwoStringsTwoFloatsThreeBytes(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Reads two strings, two floats at offsets 0x28/0x2c, and three byte fields at
                       offsets 0x30-0x32. The concrete destination type is not known. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564fc0;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar3);
  while (cVar1 == '\0') {
    puVar4 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar4) {
    case 1:
      uVar5 = BinXMLReader_readString(local_34);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar5);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
      break;
    case 2:
      uVar5 = BinXMLReader_readString(local_20);
      local_4 = 2;
      SCEA_BinXML_Streamable_assign(uVar5);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
      break;
    case 3:
      fVar6 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x28) = fVar6;
      break;
    case 4:
      fVar6 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x2c) = fVar6;
      break;
    case 5:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x30) = bVar2;
      break;
    case 6:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x31) = bVar2;
      break;
    case 7:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x32) = bVar2;
    }
    cVar1 = FUN_007df5e0(uVar3);
  }
  ExceptionList = local_c;
  return param_1;
}

