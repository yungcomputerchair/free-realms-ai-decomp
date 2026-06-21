// addr: 0x00c29750
// name: CharacterTypesDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CharacterTypesDataSource_ctor(void * this, void * owner) */

void * __thiscall CharacterTypesDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.CharacterTypes data source, installs
                       CharacterTypesDataSource vtables, and stores owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015f85b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_CharacterTypes_01b6c688);
  *(undefined ***)this = CharacterTypesDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = CharacterTypesDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = CharacterTypesDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

