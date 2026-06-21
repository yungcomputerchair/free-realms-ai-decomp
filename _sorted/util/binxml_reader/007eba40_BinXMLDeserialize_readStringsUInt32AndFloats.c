// addr: 0x007eba40
// name: BinXMLDeserialize_readStringsUInt32AndFloats
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readStringsUInt32AndFloats(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Reads string element 1, a 32-bit value at +0x3c, string element 3, float at
                       +0x40, string element 5, and float at +0x44. It is a behavior-named scoped
                       deserializer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01565140;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffac;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar2);
  while (cVar1 == '\0') {
    puVar3 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar3) {
    case 1:
      uVar5 = BinXMLReader_readString(local_48);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar5);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
      break;
    case 2:
      uVar4 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x3c) = uVar4;
      break;
    case 3:
      uVar5 = BinXMLReader_readString(local_34);
      local_4 = 2;
      SCEA_BinXML_Streamable_assign(uVar5);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
      break;
    case 4:
      fVar6 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x40) = fVar6;
      break;
    case 5:
      uVar5 = BinXMLReader_readString(local_20);
      local_4 = 4;
      SCEA_BinXML_Streamable_assign(uVar5);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
      break;
    case 6:
      fVar6 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x44) = fVar6;
    }
    cVar1 = FUN_007df5e0(uVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

