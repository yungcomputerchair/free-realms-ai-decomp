// addr: 0x00cb6260
// name: GuildMemberDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildMemberDataSource_ctor(void * this, void * owner) */

void * __thiscall GuildMemberDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.GuildMembers data source, initializes a
                       character-guid array, stores owner, and sets an enabled flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160a406;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_GuildMembers_01b7792c);
  *(undefined ***)this = GuildMemberDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = GuildMemberDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = GuildMemberDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined ***)((int)this + 0x25c) =
       SoeUtil::Array<SoeUtil::StrongType<unsigned___int64,SoeUtilSignatureCharacterGuid,0>,0,1>::
       vftable;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined1 *)((int)this + 0x26c) = 1;
  ExceptionList = local_c;
  return this;
}

