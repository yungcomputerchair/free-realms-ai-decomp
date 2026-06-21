// addr: 0x00a79b50
// name: NpcsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * NpcsDataSource_ctor(void * this, void * owner) */

void * __thiscall NpcsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Npcs data source through the shared data-source
                       initializer and installs NpcsDataSource vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bb2b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ProxiedCharactersDataSource_ctor(this,owner);
  *(undefined ***)this = NpcsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = NpcsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = NpcsDataSource::vftable;
  ExceptionList = local_c;
  return this;
}

