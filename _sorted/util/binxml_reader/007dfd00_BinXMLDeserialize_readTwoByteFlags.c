// addr: 0x007dfd00
// name: BinXMLDeserialize_readTwoByteFlags
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BinXMLDeserialize_readTwoByteFlags(void * target, void * reader) */

void __thiscall BinXMLDeserialize_readTwoByteFlags(void *this,void *target,void *reader)

{
  void *reader_00;
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  reader_00 = target;
                    /* Creates a nested BinXML reader scope and reads element IDs 1 and 2 as uint8
                       values into target boolean/byte fields at offsets 0x13a and 0x14c. The helper
                       uses BinXMLReader_nextElement/readUInt8 and restores the parent scope
                       afterward. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01563188;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  FUN_00f9f0b0(target);
  local_4 = 0;
  cVar1 = FUN_007df5e0(uVar3);
  while (cVar1 == '\0') {
    pcVar4 = (char *)BinXMLReader_nextElement(&target);
    if (*pcVar4 == '\x01') {
      bVar2 = BinXMLReader_readUInt8(reader_00);
      *(bool *)(*(int *)this + 0x13a) = bVar2 != 0;
    }
    else if (*pcVar4 == '\x02') {
      bVar2 = BinXMLReader_readUInt8(reader_00);
      *(uint *)(*(int *)this + 0x14c) = (uint)bVar2;
    }
    cVar1 = FUN_007df5e0();
  }
  local_4 = 0xffffffff;
  FUN_00f9fd90();
  ExceptionList = local_c;
  return;
}

