// addr: 0x00c8f210
// name: AbilityLineDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AbilityLineDataSource_ctor(void * this, void * owner) */

void * __thiscall AbilityLineDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.AbilityLines data source, installs
                       AbilityLineDataSource vtables, stores owner, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016066d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_AbilityLines_01b74b00);
  *(undefined ***)this = AbilityLineDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = AbilityLineDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = AbilityLineDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  ExceptionList = local_c;
  return this;
}

