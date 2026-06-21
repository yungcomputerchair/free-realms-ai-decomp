// addr: 0x007eac40
// name: BinXMLDeserialize_readUInt32StringsFloatsAndFlags
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall BinXMLDeserialize_readUInt32StringsFloatsAndFlags(int param_1,void *param_2)

{
  void *reader;
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 local_5c [20];
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader = param_2;
                    /* Reads a 32-bit field, several strings, six floats, and three byte flags into
                       an object while iterating a BinXML scope. No class-identifying evidence is
                       present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01564eb0;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_c;
  cVar1 = FUN_007df5e0(uVar3);
  while (cVar1 == '\0') {
    puVar4 = (undefined1 *)BinXMLReader_nextElement(&param_2);
    switch(*puVar4) {
    case 1:
      uVar5 = BinXMLReader_readUInt32(reader);
      *(uint *)(param_1 + 0x50) = uVar5;
      break;
    case 2:
      uVar6 = BinXMLReader_readString(local_5c);
      local_4 = 0;
      SCEA_BinXML_Streamable_assign(uVar6);
      local_4 = 0xffffffff;
      SCEA_BinXML_String_stackTemp_dtor();
      break;
    case 3:
      uVar6 = BinXMLReader_readString(local_48);
      local_4 = 1;
      SCEA_BinXML_Streamable_assign(uVar6);
      local_4 = 0xffffffff;
      SCEA_BinXML_String_stackTemp_dtor();
      break;
    case 4:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x54) = fVar7;
      break;
    case 5:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x58) = fVar7;
      break;
    case 6:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x5c) = fVar7;
      break;
    case 7:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x60) = fVar7;
      break;
    case 8:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 100) = fVar7;
      break;
    case 9:
      fVar7 = BinXMLReader_readFloat(reader);
      *(float *)(param_1 + 0x68) = fVar7;
      break;
    case 10:
      uVar6 = BinXMLReader_readString(local_34);
      local_4 = 2;
      SCEA_BinXML_Streamable_assign(uVar6);
      local_4 = 0xffffffff;
      SCEA_BinXML_String_stackTemp_dtor();
      break;
    case 0xb:
      uVar6 = BinXMLReader_readString(local_20);
      local_4 = 3;
      SCEA_BinXML_Streamable_assign(uVar6);
      local_4 = 0xffffffff;
      SCEA_BinXML_String_stackTemp_dtor();
      break;
    case 0xc:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x6c) = bVar2;
      break;
    case 0xd:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x6d) = bVar2;
      break;
    case 0xe:
      bVar2 = BinXMLReader_readUInt8(reader);
      *(byte *)(param_1 + 0x6e) = bVar2;
    }
    cVar1 = FUN_007df5e0(uVar3);
  }
  ExceptionList = local_c;
  return param_1;
}

