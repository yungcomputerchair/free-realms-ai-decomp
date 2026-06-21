// addr: 0x00c2acb0
// name: CharacterCreationStartingSetsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CharacterCreationStartingSetsDataSource_ctor(void * this, void * owner)
    */

void * __thiscall CharacterCreationStartingSetsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.StartingSets data source, installs
                       CharacterCreationStartingSetsDataSource vtables, and stores owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015f8868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_StartingSets_01b6cb64);
  *(undefined ***)this = CharacterCreationStartingSetsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = CharacterCreationStartingSetsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = CharacterCreationStartingSetsDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

