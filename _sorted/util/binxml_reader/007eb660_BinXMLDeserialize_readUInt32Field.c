// addr: 0x007eb660
// name: BinXMLDeserialize_readUInt32Field
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint * __thiscall BinXMLDeserialize_readUInt32Field(uint *param_1,void *param_2)

{
  void *reader;
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
                    /* Reads child element 1 as a 32-bit integer into the output field. This is a
                       simple single-field BinXML deserializer with no class strings. */
  reader = param_2;
  cVar1 = FUN_007df5e0();
  while (cVar1 == '\0') {
    pcVar2 = (char *)BinXMLReader_nextElement(&param_2);
    if (*pcVar2 == '\x01') {
      uVar3 = BinXMLReader_readUInt32(reader);
      *param_1 = uVar3;
    }
    cVar1 = FUN_007df5e0();
  }
  return param_1;
}

