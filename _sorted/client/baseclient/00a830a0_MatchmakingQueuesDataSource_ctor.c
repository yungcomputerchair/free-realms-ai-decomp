// addr: 0x00a830a0
// name: MatchmakingQueuesDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchmakingQueuesDataSource_ctor(void * this, void * owner) */

void * __thiscall MatchmakingQueuesDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Matchmaking.Queues data source with queue
                       definition and integer list members initialized empty. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bc452;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Matchmaking_Queues_01b51930);
  *(undefined ***)this = MatchmakingQueuesDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MatchmakingQueuesDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MatchmakingQueuesDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined ***)((int)this + 0x25c) =
       SoeUtil::List<EncounterMatchmaking::MatchmakingQueueDefinition,-1>::vftable;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined ***)((int)this + 0x26c) = SoeUtil::List<int,-1>::vftable;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined ***)((int)this + 0x27c) = SoeUtil::List<int,-1>::vftable;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  ExceptionList = local_c;
  return this;
}

