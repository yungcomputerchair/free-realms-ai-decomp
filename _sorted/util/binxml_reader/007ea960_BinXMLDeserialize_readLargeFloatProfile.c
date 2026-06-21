// addr: 0x007ea960
// name: BinXMLDeserialize_readLargeFloatProfile
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readLargeFloatProfile(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Large scoped deserializer: element 1 stops the parent reader, elements 3-4
                       are strings, many elements are floats across offsets 0x2c-0x7c, and several
                       byte/uint32 fields are interleaved. The target class is not identifiable from
                       available evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564e70;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar3);
  while (cVar1 == '\0') {
    puVar4 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar4) {
    case 1:
      *(undefined1 *)((int)reader + 0x11) = 1;
      ExceptionList = local_c;
      return param_1;
    case 2:
      uVar6 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x28) = uVar6;
      break;
    case 3:
      uVar5 = BinXMLReader_readString(local_34);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar5);
      local_4 = 0xffffffff;
      SCEA_BinXML_String_stackTemp_dtor();
      break;
    case 4:
      uVar5 = BinXMLReader_readString(local_20);
      local_4 = 1;
      SCEA_BinXML_Streamable_assign(uVar5);
      local_4 = 0xffffffff;
      SCEA_BinXML_String_stackTemp_dtor();
      break;
    case 5:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x2c) = fVar7;
      break;
    case 6:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x30) = fVar7;
      break;
    case 7:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x34) = fVar7;
      break;
    case 8:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x38) = fVar7;
      break;
    case 9:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x3c) = fVar7;
      break;
    case 10:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x40) = fVar7;
      break;
    case 0xb:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x80) = bVar2;
      break;
    case 0xc:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x81) = bVar2;
      break;
    case 0xd:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x82) = bVar2;
      break;
    case 0xe:
      uVar6 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x44) = uVar6;
      break;
    case 0xf:
      uVar6 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x48) = uVar6;
      break;
    case 0x10:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x4c) = fVar7;
      break;
    case 0x11:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x50) = fVar7;
      break;
    case 0x12:
      uVar6 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x54) = uVar6;
      break;
    case 0x13:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x58) = fVar7;
      break;
    case 0x14:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x5c) = fVar7;
      break;
    case 0x15:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x60) = fVar7;
      break;
    case 0x16:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 100) = fVar7;
      break;
    case 0x17:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x68) = fVar7;
      break;
    case 0x18:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x83) = bVar2;
      break;
    case 0x19:
      uVar6 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x6c) = uVar6;
      break;
    case 0x1a:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x70) = fVar7;
      break;
    case 0x1b:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x74) = fVar7;
      break;
    case 0x1c:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x78) = fVar7;
      break;
    case 0x1d:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x7c) = fVar7;
    }
    cVar1 = FUN_007df5e0(uVar3);
  }
  ExceptionList = local_c;
  return param_1;
}

