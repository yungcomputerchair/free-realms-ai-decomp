// addr: 0x007ec110
// name: BinXMLDeserialize_readStringByteStopString
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readStringByteStopString(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Handles a scoped object with string element 1, byte element 2 stored at
                       +0x28, stop element 3, and string element 4. The target class is not
                       identifiable from the briefing. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01565300;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar3);
  do {
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_1;
    }
    puVar4 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar4) {
    case 1:
      uVar5 = BinXMLReader_readString(local_34);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar5);
      goto LAB_007ec1c5;
    case 2:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x28) = bVar2;
      break;
    case 3:
      *(undefined1 *)((int)reader + 0x11) = 1;
      ExceptionList = local_c;
      return param_1;
    case 4:
      uVar5 = BinXMLReader_readString(local_20);
      local_4 = 2;
      SCEA_BinXML_Streamable_assign(uVar5);
LAB_007ec1c5:
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
    }
    cVar1 = FUN_007df5e0(uVar3);
  } while( true );
}

