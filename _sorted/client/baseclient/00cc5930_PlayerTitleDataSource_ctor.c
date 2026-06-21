// addr: 0x00cc5930
// name: PlayerTitleDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerTitleDataSource_ctor(void * this, void * owner) */

void * __thiscall PlayerTitleDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.PlayerTitles data source, installs
                       PlayerTitleDataSource vtables, stores owner/context, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160bdd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_PlayerTitles_01b78ec0);
  *(undefined ***)this = PlayerTitleDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = PlayerTitleDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = PlayerTitleDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined1 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

