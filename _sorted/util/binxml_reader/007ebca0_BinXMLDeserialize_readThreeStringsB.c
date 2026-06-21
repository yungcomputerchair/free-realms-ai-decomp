// addr: 0x007ebca0
// name: BinXMLDeserialize_readThreeStringsB
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall BinXMLDeserialize_readThreeStringsB(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Reads three string-valued child elements using the same pattern as 007ebba0
                       but for a separate caller/type. No RTTI or string evidence identifies the
                       owning class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015651e0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar2);
  do {
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_1;
    }
    pcVar3 = (char *)BinXMLReader_nextElement(&stack0x00000004);
    cVar1 = *pcVar3;
    if (cVar1 == '\x01') {
      uVar4 = BinXMLReader_readString(local_20);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar4);
LAB_007ebd70:
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
    }
    else {
      if (cVar1 == '\x02') {
        uVar4 = BinXMLReader_readString(local_34);
        local_4 = 2;
        SCEA_BinXML_Streamable_assign(uVar4);
        goto LAB_007ebd70;
      }
      if (cVar1 == '\x03') {
        uVar4 = BinXMLReader_readString(local_48);
        local_4 = 4;
        SCEA_BinXML_Streamable_assign(uVar4);
        goto LAB_007ebd70;
      }
    }
    cVar1 = FUN_007df5e0(uVar2);
  } while( true );
}

