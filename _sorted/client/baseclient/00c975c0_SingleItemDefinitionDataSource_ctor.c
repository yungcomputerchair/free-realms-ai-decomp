// addr: 0x00c975c0
// name: SingleItemDefinitionDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SingleItemDefinitionDataSource_ctor(void * this, void * owner) */

void * __thiscall SingleItemDefinitionDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.ItemDefinitionSelect single-item-definition data
                       source through the item-definition base initializer and installs its vtables.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01607798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseItemDefinitionDataSource_ctor(this,PTR_s_BaseClient_ItemDefinitionSelect_01b75b44,owner);
  *(undefined ***)this = SingleItemDefinitionDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = SingleItemDefinitionDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = SingleItemDefinitionDataSource::vftable;
  ExceptionList = local_c;
  return this;
}

