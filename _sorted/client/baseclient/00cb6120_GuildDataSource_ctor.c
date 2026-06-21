// addr: 0x00cb6120
// name: GuildDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildDataSource_ctor(void * this, void * owner) */

void * __thiscall GuildDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Guilds data source, installs GuildDataSource
                       vtables, and stores owner/context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160a368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Guilds_01b77928);
  *(undefined ***)this = GuildDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = GuildDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = GuildDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  ExceptionList = local_c;
  return this;
}

