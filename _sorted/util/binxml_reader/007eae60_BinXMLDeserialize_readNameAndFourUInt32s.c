// addr: 0x007eae60
// name: BinXMLDeserialize_readNameAndFourUInt32s
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readNameAndFourUInt32s(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Reads element 1 as a string and elements 2 through 5 as 32-bit values stored
                       at offsets 0x14, 0x18, 0x1c, and 0x20. It is a scoped BinXML field
                       deserializer without class evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564ee0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar2);
  while (cVar1 == '\0') {
    puVar3 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar3) {
    case 1:
      uVar4 = BinXMLReader_readString(local_20);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar4);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
      break;
    case 2:
      uVar5 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x14) = uVar5;
      break;
    case 3:
      uVar5 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x18) = uVar5;
      break;
    case 4:
      uVar5 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x1c) = uVar5;
      break;
    case 5:
      uVar5 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x20) = uVar5;
    }
    cVar1 = FUN_007df5e0(uVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

