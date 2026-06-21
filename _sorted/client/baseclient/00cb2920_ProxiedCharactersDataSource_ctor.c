// addr: 0x00cb2920
// name: ProxiedCharactersDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProxiedCharactersDataSource_ctor(void * this, void * owner) */

void * __thiscall ProxiedCharactersDataSource_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ProxiedCharactersDataSource with a caller-provided name, stores
                       owner, clears a flag, and initializes the entry array. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01609dd6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,in_stack_00000008);
  *(undefined ***)this = ProxiedCharactersDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = ProxiedCharactersDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = ProxiedCharactersDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined ***)((int)this + 0x25c) =
       SoeUtil::Array<ProxiedCharactersDataSourceEntry,0,1>::vftable;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  ExceptionList = local_c;
  return this;
}

