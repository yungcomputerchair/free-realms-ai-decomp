// addr: 0x007ec030
// name: BinXMLDeserialize_readNameAndThreeFloats
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readNameAndThreeFloats(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Reads element 1 as a BinXML string and elements 2-4 as floats stored at
                       offsets 0x14, 0x18, and 0x1c. No class strings or RTTI are present, so the
                       name is behavior-based. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015652c0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar2);
  while (cVar1 == '\0') {
    puVar3 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar3) {
    case 1:
      uVar4 = BinXMLReader_readString(local_20);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar4);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
      break;
    case 2:
      fVar5 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x14) = fVar5;
      break;
    case 3:
      fVar5 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x18) = fVar5;
      break;
    case 4:
      fVar5 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x1c) = fVar5;
    }
    cVar1 = FUN_007df5e0(uVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

