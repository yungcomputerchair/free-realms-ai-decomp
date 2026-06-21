// addr: 0x00ce7b50
// name: CustomizationItemDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CustomizationItemDataSource_ctor(void * this, void * owner) */

void * __thiscall CustomizationItemDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.CustomizationItemData data source through the
                       item-definition base initializer and stores the customization context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160eec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BaseItemDefinitionDataSource_ctor
            (this,PTR_s_BaseClient_CustomizationItemData_0183afe5_3_01b7c3a8,owner);
  *(undefined ***)this = CustomizationItemDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = CustomizationItemDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = CustomizationItemDataSource::vftable;
  *(void **)((int)this + 0x52f4) = owner;
  ExceptionList = local_c;
  return this;
}

