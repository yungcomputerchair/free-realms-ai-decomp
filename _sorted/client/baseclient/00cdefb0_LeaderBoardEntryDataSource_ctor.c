// addr: 0x00cdefb0
// name: LeaderBoardEntryDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LeaderBoardEntryDataSource_ctor(void * this, void * owner) */

void * __thiscall LeaderBoardEntryDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.LeaderBoard.Entries data source, installs
                       LeaderBoardEntryDataSource vtables, and stores owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160dd58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_LeaderBoard_Entries_01b7ad54);
  *(undefined ***)this = LeaderBoardEntryDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = LeaderBoardEntryDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = LeaderBoardEntryDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

