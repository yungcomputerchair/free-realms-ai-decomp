// addr: 0x007eb8f0
// name: BinXMLDeserialize_readStringUInt32AndMoreStrings
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readStringUInt32AndMoreStrings(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 local_5c [20];
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Reads element 1 as a string, element 2 as a 32-bit value stored at offset
                       0x50, and elements 3-5 as additional strings. The destination class is not
                       identified by strings or RTTI. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015650f0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
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
      uVar5 = BinXMLReader_readString(local_5c);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar5);
      break;
    case 2:
      uVar4 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x50) = uVar4;
      goto switchD_007eb94b_default;
    case 3:
      uVar5 = BinXMLReader_readString(local_48);
      local_4 = 2;
      SCEA_BinXML_Streamable_assign(uVar5);
      break;
    case 4:
      uVar5 = BinXMLReader_readString(local_34);
      local_4 = 4;
      SCEA_BinXML_Streamable_assign(uVar5);
      break;
    case 5:
      uVar5 = BinXMLReader_readString(local_20);
      local_4 = 6;
      SCEA_BinXML_Streamable_assign(uVar5);
      break;
    default:
      goto switchD_007eb94b_default;
    }
    local_4 = 0xffffffff;
    FUN_00f9e6e0();
switchD_007eb94b_default:
    cVar1 = FUN_007df5e0(uVar2);
  } while( true );
}

