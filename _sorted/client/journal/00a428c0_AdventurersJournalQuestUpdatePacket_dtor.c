// addr: 0x00a428c0
// name: AdventurersJournalQuestUpdatePacket_dtor
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AdventurersJournalQuestUpdatePacket_dtor(void * this) */

void __fastcall AdventurersJournalQuestUpdatePacket_dtor(void *this)

{
                    /* Tears down the quest-update packet's derived layer by restoring the
                       BasePacket vtable; no owned payload is freed here. */
  *(undefined ***)this = BasePacket::vftable;
  return;
}

