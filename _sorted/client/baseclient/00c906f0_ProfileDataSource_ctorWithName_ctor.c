// addr: 0x00c906f0
// name: ProfileDataSource_ctorWithName_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProfileDataSource_ctorWithName_ctor(void * this, void * owner) */

void * __thiscall ProfileDataSource_ctorWithName_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ProfileDataSource using a caller-supplied table name, stores
                       owner, clears a flag, and initializes ProfileSortingData list storage. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016069a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,in_stack_00000008);
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

