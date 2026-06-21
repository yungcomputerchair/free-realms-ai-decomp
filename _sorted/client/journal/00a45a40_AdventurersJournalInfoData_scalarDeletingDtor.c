// addr: 0x00a45a40
// name: AdventurersJournalInfoData_scalarDeletingDtor
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AdventurersJournalInfoData_scalarDeletingDtor(void * this, char flags_)
    */

void * __thiscall AdventurersJournalInfoData_scalarDeletingDtor(void *this,char flags_)

{
  void *unaff_ESI;
  
                    /* Runs the full journal-info data destructor, which clears the region, hub,
                       hub-quest, and sticker definition maps, and optionally frees the allocation.
                        */
  AdventurersJournalInfoData_dtor(unaff_ESI);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

