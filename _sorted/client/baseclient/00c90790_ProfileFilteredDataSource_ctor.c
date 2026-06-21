// addr: 0x00c90790
// name: ProfileFilteredDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProfileFilteredDataSource_ctor(void * this, void * owner) */

void * __thiscall ProfileFilteredDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Profiles.Filtered data source by reusing
                       ProfileDataSource initialization and then installing
                       ProfileFilteredDataSource vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016069d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ProfileDataSource_ctorWithName_ctor(this,owner);
  *(undefined ***)this = ProfileFilteredDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ProfileFilteredDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ProfileFilteredDataSource::vftable;
  ExceptionList = local_c;
  return this;
}

