// addr: 0x00a831a0
// name: MatchmakingAvailableBuddiesDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchmakingAvailableBuddiesDataSource_ctor(void * this, void * owner)
    */

void * __thiscall MatchmakingAvailableBuddiesDataSource_ctor(void *this,void *owner)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Matchmaking.AvailableBuddies data source,
                       initializes its BuddyNode list and two helper nodes. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bc49c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Matchmaking_Available_01b51938);
  *(undefined ***)this = MatchmakingAvailableBuddiesDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MatchmakingAvailableBuddiesDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MatchmakingAvailableBuddiesDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined ***)((int)this + 0x25c) =
       SoeUtil::List<MatchmakingAvailableBuddiesDataSource::BuddyNode,-1>::vftable;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  pvVar1 = Mem_Alloc(0x20);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a80930(this);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x26c) = uVar2;
  pvVar1 = Mem_Alloc(0x20);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a809a0(this);
  }
  *(undefined4 *)((int)this + 0x270) = uVar2;
  ExceptionList = local_c;
  return this;
}

