// addr: 0x00a426c0
// name: BaseAdventurersJournalPacket_ctor
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseAdventurersJournalPacket_ctor(void * this, int journalMessageType_)
    */

void __thiscall BaseAdventurersJournalPacket_ctor(void *this,int journalMessageType_)

{
                    /* Constructs the base Adventurer's Journal packet: installs BasePacket then
                       BaseAdventurersJournalPacket vtables, sets opcode 0xd1, and stores the
                       journal message type at offset 8. */
  *(undefined ***)this = BasePacket::vftable;
  *(undefined4 *)((int)this + 4) = 0xd1;
  *(undefined ***)this = BaseAdventurersJournalPacket::vftable;
  *(int *)((int)this + 8) = journalMessageType_;
  return;
}

