// addr: 0x007dfdc0
// name: BinXMLDeserialize_readOneBoolFlag
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BinXMLDeserialize_readOneBoolFlag(void * target, void * reader) */

void __thiscall BinXMLDeserialize_readOneBoolFlag(void *this,void *target,void *reader)

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
                    /* Creates a nested BinXML reader scope and reads element ID 1 as a uint8
                       boolean into target offset 0x13b. It iterates with BinXMLReader_nextElement
                       and restores scope with the paired helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015631b8;
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
      *(bool *)(*(int *)this + 0x13b) = bVar2 != 0;
    }
    cVar1 = FUN_007df5e0();
  }
  local_4 = 0xffffffff;
  FUN_00f9fd90();
  ExceptionList = local_c;
  return;
}

