// addr: 0x00c90630
// name: ProfileDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProfileDataSource_ctor(void * this, void * owner) */

void * __thiscall ProfileDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Profiles data source, stores owner, clears a flag,
                       and initializes the ProfileSortingData list member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01606966;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Profiles_01b74c80);
  *(undefined ***)this = ProfileDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ProfileDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ProfileDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined ***)((int)this + 0x25c) = SoeUtil::List<ProfileSortingData,-1>::vftable;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  ExceptionList = local_c;
  return this;
}

