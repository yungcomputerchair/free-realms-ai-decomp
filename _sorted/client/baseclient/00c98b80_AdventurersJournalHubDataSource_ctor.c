// addr: 0x00c98b80
// name: AdventurersJournalHubDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AdventurersJournalHubDataSource_ctor(void * this, void * owner) */

void * __thiscall AdventurersJournalHubDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the AdventurersJournal HubData data source, installs vtables,
                       stores owner/context, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016079a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_AdventurersJournal_Hu_01b75dd4);
  *(undefined ***)this = AdventurersJournalHubDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = AdventurersJournalHubDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = AdventurersJournalHubDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined1 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

