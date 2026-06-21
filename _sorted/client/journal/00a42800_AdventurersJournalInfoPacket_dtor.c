// addr: 0x00a42800
// name: AdventurersJournalInfoPacket_dtor
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AdventurersJournalInfoPacket_dtor(void * this) */

void __fastcall AdventurersJournalInfoPacket_dtor(void *this)

{
                    /* Tears down the info packet's derived layer by restoring the BasePacket
                       vtable; no owned payload is freed here. */
  *(undefined ***)this = BasePacket::vftable;
  return;
}

