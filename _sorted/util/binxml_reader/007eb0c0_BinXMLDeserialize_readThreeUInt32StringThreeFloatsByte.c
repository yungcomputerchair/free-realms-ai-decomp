// addr: 0x007eb0c0
// name: BinXMLDeserialize_readThreeUInt32StringThreeFloatsByte
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readThreeUInt32StringThreeFloatsByte(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Reads three 32-bit fields, one string, three floats, and a byte flag into a
                       compact object. No file strings or RTTI identify the concrete class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564f50;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar3);
  while (cVar1 == '\0') {
    puVar4 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar4) {
    case 1:
      uVar5 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x14) = uVar5;
      break;
    case 2:
      uVar5 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x18) = uVar5;
      break;
    case 3:
      uVar5 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x1c) = uVar5;
      break;
    case 4:
      uVar6 = BinXMLReader_readString(local_20);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar6);
      local_4 = 0xffffffff;
      FUN_00f9e6e0();
      break;
    case 5:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x20) = fVar7;
      break;
    case 6:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x24) = fVar7;
      break;
    case 7:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x28) = fVar7;
      break;
    case 8:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x2c) = bVar2;
    }
    cVar1 = FUN_007df5e0(uVar3);
  }
  ExceptionList = local_c;
  return param_1;
}

