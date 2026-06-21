// addr: 0x00c974c0
// name: AllItemDefinitionsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AllItemDefinitionsDataSource_ctor(void * this, void * owner) */

void * __thiscall AllItemDefinitionsDataSource_ctor(void *this,void *owner)

{
  byte enabled_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.AllItemDefinitions data source from
                       BaseItemDefinitionDataSource, installs all-item definitions vtables, and
                       disables the base boolean flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01607738;
  local_c = ExceptionList;
  enabled_ = (byte)DAT_01b839d8 ^ (byte)&stack0xffffffec;
  ExceptionList = &local_c;
  BaseItemDefinitionDataSource_ctor(this,PTR_s_BaseClient_AllItemDefinitions_01b759ec,owner);
  local_4 = 0;
  *(undefined ***)this = AllItemDefinitionsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = AllItemDefinitionsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = AllItemDefinitionsDataSource::vftable;
  setBooleanFlag_52b5(this,(void *)0x0,(bool)enabled_);
  ExceptionList = local_c;
  return this;
}

