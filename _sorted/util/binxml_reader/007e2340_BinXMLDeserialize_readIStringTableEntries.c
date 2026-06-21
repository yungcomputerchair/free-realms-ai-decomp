// addr: 0x007e2340
// name: BinXMLDeserialize_readIStringTableEntries
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BinXMLDeserialize_readIStringTableEntries(void * reader) */

void __thiscall BinXMLDeserialize_readIStringTableEntries(void *this,void *reader)

{
  void *reader_00;
  char cVar1;
  uint value_;
  char *pcVar2;
  int extraout_EAX;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_35;
  void *local_34;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  reader_00 = reader;
                    /* Top-level scoped deserializer that allocates IString table entries, reads a
                       string and several uint32 fields, then updates bucketed structures through
                       the weak setter helpers. The exact application owner is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01563a1b;
  local_c = ExceptionList;
  value_ = DAT_01b839d8 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_c;
  FUN_00f9f0b0(reader);
  local_4 = 0;
  cVar1 = FUN_007df5e0();
  while (cVar1 == '\0') {
    pcVar2 = (char *)BinXMLReader_nextElement(&reader);
    if (*pcVar2 == '\x01') {
      local_34 = Mem_Alloc(0x28);
      local_4._0_1_ = 1;
      if (local_34 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        SoeUtil_IStringTableEntry_ctor(local_34);
        iVar7 = extraout_EAX;
      }
      local_4._0_1_ = 0;
      FUN_00f9f0b0(reader_00);
      local_4 = CONCAT31(local_4._1_3_,2);
      cVar1 = FUN_007df5e0();
      while (cVar1 == '\0') {
        puVar3 = (undefined1 *)BinXMLReader_nextElement(&local_35);
        switch(*puVar3) {
        case 1:
          iVar4 = BinXMLReader_readString(local_20);
          local_4._0_1_ = 3;
          if (*(char *)(iVar4 + 4) == '\0') {
            uVar5 = *(undefined4 *)(iVar4 + 0xc);
          }
          else {
            uVar5 = 0;
          }
          FUN_00402ce0(uVar5);
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_00f9e6e0();
          break;
        case 2:
          uVar6 = BinXMLReader_readUInt32(reader_00);
          *(uint *)(iVar7 + 0x10) = uVar6;
          break;
        case 3:
          uVar6 = BinXMLReader_readUInt32(reader_00);
          *(uint *)(iVar7 + 0x14) = uVar6;
          break;
        case 4:
          uVar6 = BinXMLReader_readUInt32(reader_00);
          BinXMLWeak_setBucketNodeValue20(*(void **)this,*(void **)(iVar7 + 0x10),uVar6,value_);
          break;
        case 5:
          uVar6 = BinXMLReader_readUInt32(reader_00);
          BinXMLWeak_setBucketNodeValue24AndInvalidateChildren
                    (*(void **)this,*(void **)(iVar7 + 0x10),uVar6,value_);
        }
        cVar1 = FUN_007df5e0();
      }
      FUN_007b87b0(iVar7);
      local_4 = local_4 & 0xffffff00;
      FUN_00f9fd90();
    }
    cVar1 = FUN_007df5e0();
  }
  local_4 = 0xffffffff;
  FUN_00f9fd90();
  ExceptionList = local_c;
  return;
}

