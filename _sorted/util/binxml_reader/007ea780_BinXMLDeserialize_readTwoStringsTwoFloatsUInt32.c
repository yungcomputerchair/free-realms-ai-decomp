// addr: 0x007ea780
// name: BinXMLDeserialize_readTwoStringsTwoFloatsUInt32
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readTwoStringsTwoFloatsUInt32(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Reads elements 1-2 as strings, elements 3-4 as floats at offsets 0x28/0x2c,
                       and element 5 as a 32-bit value at offset 0x30. The owning application class
                       is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564e10;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar2);
  while (cVar1 == '\0') {
    puVar3 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar3) {
    case 1:
      uVar4 = BinXMLReader_readString(local_34);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar4);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
      break;
    case 2:
      uVar4 = BinXMLReader_readString(local_20);
      local_4 = 2;
      SCEA_BinXML_Streamable_assign(uVar4);
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
      uVar5 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x30) = uVar5;
    }
    cVar1 = FUN_007df5e0(uVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

