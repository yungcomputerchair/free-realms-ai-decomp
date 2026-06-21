// addr: 0x00a44de0
// name: BaseAdventurersJournalPacket_deserializeHeader
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BaseAdventurersJournalPacket_deserializeHeader(void * this, void *
   reader) */

void __thiscall BaseAdventurersJournalPacket_deserializeHeader(void *this,void *reader)

{
                    /* Reads the journal packet subtype as a 16-bit value and the following 32-bit
                       payload/sequence field from the packet stream. */
  if (*(short **)((int)reader + 0xc) < *(short **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(int *)((int)this + 4) = (int)**(short **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 2;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  return;
}

