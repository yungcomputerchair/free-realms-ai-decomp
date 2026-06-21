// addr: 0x00a42790
// name: AdventurersJournalInfoPacket_ctor
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AdventurersJournalInfoPacket_ctor(void * this, void * journalInfoData)
    */

void * __thiscall AdventurersJournalInfoPacket_ctor(void *this,void *journalInfoData)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the full journal-info packet by initializing the
                       BaseAdventurersJournalPacket subtype 1, installing the
                       AdventurersJournalInfoPacket vtable, and storing the info payload pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b4348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseAdventurersJournalPacket_ctor(this,1);
  *(undefined ***)this = AdventurersJournalInfoPacket::vftable;
  *(void **)((int)this + 0xc) = journalInfoData;
  ExceptionList = local_c;
  return this;
}

