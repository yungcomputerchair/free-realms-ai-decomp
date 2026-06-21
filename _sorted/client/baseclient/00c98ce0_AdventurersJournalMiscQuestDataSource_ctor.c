// addr: 0x00c98ce0
// name: AdventurersJournalMiscQuestDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AdventurersJournalMiscQuestDataSource_ctor(void * this, void * owner)
    */

void * __thiscall AdventurersJournalMiscQuestDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the AdventurersJournal MiscQuestData data source, installs
                       vtables, stores owner, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01607a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_AdventurersJournal_Mi_01b75ddc);
  *(undefined ***)this = AdventurersJournalMiscQuestDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = AdventurersJournalMiscQuestDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = AdventurersJournalMiscQuestDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  ExceptionList = local_c;
  return this;
}

