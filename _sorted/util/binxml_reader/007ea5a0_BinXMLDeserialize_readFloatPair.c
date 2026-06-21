// addr: 0x007ea5a0
// name: BinXMLDeserialize_readFloatPair
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


float * __thiscall BinXMLDeserialize_readFloatPair(float *param_1,void *param_2)

{
  void *reader;
  char cVar1;
  char *pcVar2;
  float fVar3;
  
                    /* Reads child elements 1 and 2 as floats into consecutive float fields. It
                       loops until BinXMLReader_isEndOfScope and uses
                       BinXMLReader_nextElement/readFloat. */
  reader = param_2;
  cVar1 = FUN_007df5e0();
  while (cVar1 == '\0') {
    pcVar2 = (char *)BinXMLReader_nextElement(&param_2);
    if (*pcVar2 == '\x01') {
      fVar3 = BinXMLReader_readFloat(reader);
      *param_1 = fVar3;
    }
    else if (*pcVar2 == '\x02') {
      fVar3 = BinXMLReader_readFloat(reader);
      param_1[1] = fVar3;
    }
    cVar1 = FUN_007df5e0();
  }
  return param_1;
}

