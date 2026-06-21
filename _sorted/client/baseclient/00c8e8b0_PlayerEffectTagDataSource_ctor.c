// addr: 0x00c8e8b0
// name: PlayerEffectTagDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerEffectTagDataSource_ctor(void * this, void * owner) */

void * __thiscall PlayerEffectTagDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.PlayerEffectTags data source, installs vtables,
                       stores owner, and sets its initial enabled/dirty flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016065e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_PlayerEffectTags_01b747b8);
  *(undefined ***)this = PlayerEffectTagDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = PlayerEffectTagDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = PlayerEffectTagDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 1;
  ExceptionList = local_c;
  return this;
}

