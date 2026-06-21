// addr: 0x00a86050
// name: PlayerPositionsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerPositionsDataSource_ctor(void * this, void * owner) */

void * __thiscall PlayerPositionsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.PlayerPositions data source and initializes its
                       PlayerPosition list member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bce06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_PlayerPositions_01b52134);
  *(undefined ***)this = PlayerPositionsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = PlayerPositionsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = PlayerPositionsDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)((int)this + 600) =
       SoeUtil::List<CommandPacketRequestPlayerPositionsReply::PlayerPosition,-1>::vftable;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  ExceptionList = local_c;
  return this;
}

