// addr: 0x007eb210
// name: BinXMLDeserialize_readNameAndFloatB
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readNameAndFloatB(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Reads a string-valued element 1 and a float-valued element 2 into offset
                       0x14. It matches the name-and-float pattern for another unknown type. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564f80;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar2);
  while (cVar1 == '\0') {
    pcVar3 = (char *)BinXMLReader_nextElement(&param_2);
    if (*pcVar3 == '\x01') {
      uVar4 = BinXMLReader_readString(local_20);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar4);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
    }
    else if (*pcVar3 == '\x02') {
      fVar5 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x14) = fVar5;
    }
    cVar1 = FUN_007df5e0(uVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

