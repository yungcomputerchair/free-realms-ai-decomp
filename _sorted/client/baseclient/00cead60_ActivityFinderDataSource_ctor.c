// addr: 0x00cead60
// name: ActivityFinderDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActivityFinderDataSource_ctor(void * this, void * owner) */

void * __thiscall ActivityFinderDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.ActivityFinder data source, installs vtables, and
                       stores owner/context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160f538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_ActivityFinder_01b7c9e8);
  *(undefined ***)this = ActivityFinderDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ActivityFinderDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ActivityFinderDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  ExceptionList = local_c;
  return this;
}

