// addr: 0x00cfa460
// name: FeaturedDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FeaturedDataSource_ctor(void * this, void * owner) */

void * __thiscall FeaturedDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.FeaturedRating data source, stores owner/context,
                       installs vtables, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01610d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_FeaturedRating_01b7ee5c);
  *(undefined ***)this = FeaturedDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = FeaturedDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = FeaturedDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined1 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

