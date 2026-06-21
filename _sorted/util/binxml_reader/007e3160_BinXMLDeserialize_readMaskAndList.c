// addr: 0x007e3160
// name: BinXMLDeserialize_readMaskAndList
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BinXMLDeserialize_readMaskAndList(void * target, void * reader) */

void __thiscall BinXMLDeserialize_readMaskAndList(void *this,void *target,void *reader)

{
  void *reader_00;
  undefined4 uVar1;
  char cVar2;
  uint *value;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  reader_00 = target;
                    /* Deserializes a nested scope containing a bitmask, a 32-bit field at
                       target+0x260, and a child list entry. For mask bits, it iterates an external
                       table and appends matching values via the list append helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01563d00;
  local_c = ExceptionList;
  value = (uint *)(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  ExceptionList = &local_c;
  FUN_00f9f0b0(target);
  local_4 = 0;
  cVar2 = FUN_007df5e0();
  while (cVar2 == '\0') {
    pcVar3 = (char *)BinXMLReader_nextElement(&target);
    cVar2 = *pcVar3;
    if (cVar2 == '\x01') {
      uVar4 = BinXMLReader_readUInt32(reader_00);
      iVar5 = FUN_00769fe0();
      uVar1 = local_20[0];
      for (iVar5 = *(int *)(iVar5 + 4); local_20[0] = uVar1, iVar5 != 0;
          iVar5 = *(int *)(iVar5 + 0xc)) {
        local_20[0] = *(undefined4 *)(iVar5 + 0x20);
        if ((uVar4 & 1 << ((char)local_20[0] - 1U & 0x1f)) != 0) {
          BinXMLDeserialize_appendMaskEntry((void *)(*(int *)this + 0x244),local_20,value);
          uVar1 = local_20[0];
        }
        local_20[0] = uVar1;
        FUN_00769fe0();
        uVar1 = local_20[0];
      }
    }
    else if (cVar2 == '\x02') {
      uVar4 = BinXMLReader_readUInt32(reader_00);
      *(uint *)(*(int *)this + 0x260) = uVar4;
    }
    else if (cVar2 == '\x04') {
      FUN_00f9f0b0(reader_00);
      local_4._0_1_ = 1;
      local_24 = 0;
      BinXMLDeserialize_readUInt32Field(reader_00);
      BinXMLDeserialize_appendMaskEntry((void *)(*(int *)this + 0x244),&local_24,value);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00f9fd90();
    }
    cVar2 = FUN_007df5e0();
  }
  local_4 = 0xffffffff;
  FUN_00f9fd90();
  ExceptionList = local_c;
  return;
}

