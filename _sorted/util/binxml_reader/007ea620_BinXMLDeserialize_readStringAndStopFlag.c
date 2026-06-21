// addr: 0x007ea620
// name: BinXMLDeserialize_readStringAndStopFlag
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall BinXMLDeserialize_readStringAndStopFlag(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
                    /* Iterates a BinXML scope, reading element 2 as a string temporary and stopping
                       early on element 1 by setting reader byte +0x11. The target class is unknown.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564da0;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  cVar2 = FUN_007df5e0(uVar3);
  while( true ) {
    if (cVar2 != '\0') {
      ExceptionList = local_c;
      return param_1;
    }
    pcVar4 = (char *)BinXMLReader_nextElement(&param_2);
    if (*pcVar4 == '\x01') break;
    if (*pcVar4 == '\x02') {
      uVar5 = BinXMLReader_readString(local_20);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar5);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
    }
    cVar2 = FUN_007df5e0(uVar3);
  }
  *(undefined1 *)(iVar1 + 0x11) = 1;
  ExceptionList = local_c;
  return param_1;
}

