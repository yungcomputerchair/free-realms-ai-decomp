// addr: 0x007ebe90
// name: BinXMLDeserialize_readUInt64AndFiveStringsOrStop
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readUInt64AndFiveStringsOrStop(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 local_70 [20];
  undefined1 local_5c [20];
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Handles a scope where element 1 sets the reader stop flag, element 4 reads a
                       64-bit value into offset 0x68, and elements 5-9 read strings. The exact
                       target type is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01565290;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff84;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar2);
  do {
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_1;
    }
    puVar3 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar3) {
    case 1:
      *(undefined1 *)((int)reader + 0x11) = 1;
      ExceptionList = local_c;
      return param_1;
    default:
      goto switchD_007ebeef_caseD_2;
    case 4:
      uVar5 = BinXMLReader_readUInt64(reader);
      *(ulonglong *)(param_1 + 0x68) = uVar5;
      goto switchD_007ebeef_caseD_2;
    case 5:
      uVar4 = BinXMLReader_readString(local_70);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar4);
      break;
    case 6:
      uVar4 = BinXMLReader_readString(local_5c);
      local_4 = 2;
      SCEA_BinXML_Streamable_assign(uVar4);
      break;
    case 7:
      uVar4 = BinXMLReader_readString(local_48);
      local_4 = 4;
      SCEA_BinXML_Streamable_assign(uVar4);
      break;
    case 8:
      uVar4 = BinXMLReader_readString(local_34);
      local_4 = 6;
      SCEA_BinXML_Streamable_assign(uVar4);
      break;
    case 9:
      uVar4 = BinXMLReader_readString(local_20);
      local_4 = 8;
      SCEA_BinXML_Streamable_assign(uVar4);
    }
    local_4 = 0xffffffff;
    FUN_00f9e6e0();
switchD_007ebeef_caseD_2:
    cVar1 = FUN_007df5e0(uVar2);
  } while( true );
}

