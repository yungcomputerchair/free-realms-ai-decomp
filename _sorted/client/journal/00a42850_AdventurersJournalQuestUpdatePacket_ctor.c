// addr: 0x00a42850
// name: AdventurersJournalQuestUpdatePacket_ctor
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AdventurersJournalQuestUpdatePacket_ctor(void * this, void *
   questUpdateData) */

void * __thiscall AdventurersJournalQuestUpdatePacket_ctor(void *this,void *questUpdateData)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the quest-update journal packet by initializing the base packet
                       subtype 2, installing the AdventurersJournalQuestUpdatePacket vtable, and
                       storing the payload pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b43a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseAdventurersJournalPacket_ctor(this,2);
  *(undefined ***)this = AdventurersJournalQuestUpdatePacket::vftable;
  *(void **)((int)this + 0xc) = questUpdateData;
  ExceptionList = local_c;
  return this;
}

