// addr: 0x007b7910
// name: SoeUtil_IStringTableEntry_ctor
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoeUtil_IStringTableEntry_ctor(void * entry) */

void __fastcall SoeUtil_IStringTableEntry_ctor(void *entry)

{
                    /* Initializes one SoeUtil::IString<char> member and several zeroed
                       pointer/count fields. It is weakly tied to binxml_reader via a caller and has
                       no RTTI, so the exact class name is uncertain. */
  *(undefined ***)entry = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)entry + 4) = &DAT_01be02d8;
  *(undefined4 *)((int)entry + 0xc) = 0;
  *(undefined4 *)((int)entry + 8) = 0;
  *(undefined4 *)((int)entry + 0x10) = 0;
  *(undefined4 *)((int)entry + 0x14) = 0;
  *(undefined4 *)((int)entry + 0x20) = 0;
  *(undefined4 *)((int)entry + 0x24) = 0;
  *(undefined4 *)((int)entry + 0x18) = 0;
  *(undefined4 *)((int)entry + 0x1c) = 0;
  return;
}

