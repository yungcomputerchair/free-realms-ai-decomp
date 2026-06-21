// addr: 0x00a7a2f0
// name: TargetDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TargetDataSource_ctor(void * this, void * owner) */

void * __thiscall TargetDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Target data source through the shared data-source
                       initializer and installs TargetDataSource vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bb3a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ProxiedCharactersDataSource_ctor(this,owner);
  *(undefined ***)this = TargetDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = TargetDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = TargetDataSource::vftable;
  ExceptionList = local_c;
  return this;
}

