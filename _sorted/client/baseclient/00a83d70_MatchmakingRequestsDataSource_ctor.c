// addr: 0x00a83d70
// name: MatchmakingRequestsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchmakingRequestsDataSource_ctor(void * this, void * owner) */

void * __thiscall MatchmakingRequestsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Matchmaking.Requests data source and initializes
                       its MatchmakingRequest list member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bc776;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Matchmaking_Requests_01b51934);
  *(undefined ***)this = MatchmakingRequestsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MatchmakingRequestsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MatchmakingRequestsDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined ***)((int)this + 0x25c) =
       SoeUtil::List<EncounterMatchmaking::MatchmakingRequest,-1>::vftable;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  ExceptionList = local_c;
  return this;
}

