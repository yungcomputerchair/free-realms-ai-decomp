// addr: 0x008cb680
// name: PlayerNameEntry_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayerNameEntry_ctor(int this_) */

void __fastcall PlayerNameEntry_ctor(int this_)

{
                    /* Initializes an embedded SoeUtil::IString<char> at offset 8 and clears the
                       following scalar fields for a small player/name entry record. */
  *(undefined ***)(this_ + 8) = SoeUtil::IString<char>::vftable;
  *(undefined4 **)(this_ + 0xc) = &DAT_01be48fc;
  *(undefined4 *)(this_ + 0x14) = 0;
  *(undefined4 *)(this_ + 0x10) = 0;
  *(undefined4 *)(this_ + 0x20) = 0;
  *(undefined4 *)(this_ + 0x24) = 0;
  *(undefined4 *)(this_ + 0x18) = 0;
  *(undefined4 *)(this_ + 0x1c) = 0;
  return;
}

