// addr: 0x007b7890
// name: SoeUtil_IStringPairListNode_ctor
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoeUtil_IStringPairListNode_ctor(void * node) */

void __fastcall SoeUtil_IStringPairListNode_ctor(void *node)

{
                    /* Initializes two SoeUtil::IString<char> members and a series of link/count
                       fields, matching a list node with two string keys/values. Evidence is two
                       explicit SoeUtil::IString<char>::vftable assignments and zeroing through
                       offset 0x34. */
  *(undefined ***)node = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)node + 4) = &DAT_01be02d8;
  *(undefined4 *)((int)node + 0xc) = 0;
  *(undefined4 *)((int)node + 8) = 0;
  *(undefined ***)((int)node + 0x10) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)node + 0x14) = &DAT_01be02d8;
  *(undefined4 *)((int)node + 0x1c) = 0;
  *(undefined4 *)((int)node + 0x18) = 0;
  *(undefined4 *)((int)node + 0x20) = 0;
  *(undefined4 *)((int)node + 0x24) = 0;
  *(undefined4 *)((int)node + 0x28) = 0;
  *(undefined4 *)((int)node + 0x2c) = 0;
  *(undefined4 *)((int)node + 0x30) = 0;
  *(undefined4 *)((int)node + 0x34) = 0;
  return;
}

