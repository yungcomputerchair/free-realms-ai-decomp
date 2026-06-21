// addr: 0x007eb5c0
// name: BinXMLDeserialize_readSingleString
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall BinXMLDeserialize_readSingleString(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Consumes element 1 as a BinXML string temporary and ignores/assigns it
                       through the Streamable assignment helper. It loops until the current BinXML
                       scope is exhausted. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01565050;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar2);
  while (cVar1 == '\0') {
    pcVar3 = (char *)BinXMLReader_nextElement(&stack0x00000004);
    if (*pcVar3 == '\x01') {
      uVar4 = BinXMLReader_readString(local_20);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar4);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
    }
    cVar1 = FUN_007df5e0(uVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

