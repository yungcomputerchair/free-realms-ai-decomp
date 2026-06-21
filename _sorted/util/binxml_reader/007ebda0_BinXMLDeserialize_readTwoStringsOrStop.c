// addr: 0x007ebda0
// name: BinXMLDeserialize_readTwoStringsOrStop
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall BinXMLDeserialize_readTwoStringsOrStop(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
                    /* Within a BinXML scope, elements 1 and 2 set the reader stop flag and return,
                       while elements 3 and 4 are read as strings. The exact target class is
                       unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01565220;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  cVar2 = FUN_007df5e0(uVar3);
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_c;
      return param_1;
    }
    puVar4 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar4) {
    case 1:
    case 2:
      *(undefined1 *)(iVar1 + 0x11) = 1;
      ExceptionList = local_c;
      return param_1;
    case 3:
      uVar5 = BinXMLReader_readString(local_34);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar5);
      break;
    case 4:
      uVar5 = BinXMLReader_readString(local_20);
      local_4 = 2;
      SCEA_BinXML_Streamable_assign(uVar5);
      break;
    default:
      goto switchD_007ebdf7_default;
    }
    local_4 = 0xffffffff;
    FUN_00f9e6e0();
switchD_007ebdf7_default:
    cVar2 = FUN_007df5e0(uVar3);
  } while( true );
}

