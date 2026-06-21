// addr: 0x00cbf2a0
// name: FixtureDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FixtureDataSource_ctor(void * this, void * owner) */

void * __thiscall FixtureDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Housing.Instance.Fixtures data source, initializes
                       a fixture-guid array, stores owner, and clears selection/filter state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160b556;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Housing_Instance_Fixt_01b7817c);
  *(undefined ***)this = FixtureDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = FixtureDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = FixtureDataSource::vftable;
  *(undefined ***)((int)this + 0x254) =
       SoeUtil::Array<SoeUtil::StrongType<__int64,SoeUtilSignatureFixtureGuid,0>,0,1>::vftable;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(void **)((int)this + 0x264) = owner;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined1 *)((int)this + 0x26c) = 0;
  ExceptionList = local_c;
  return this;
}

