// addr: 0x00b865b0
// name: LeaderBoardManager_registerResponseDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LeaderBoardManager_registerResponseDataSource(void * this) */

void __thiscall LeaderBoardManager_registerResponseDataSource(void *this)

{
  uint uVar1;
  void *this_00;
  undefined4 extraout_EAX;
  undefined4 uVar2;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates the LeaderBoardResponse datasource and also initializes the
                       leaderboard entry table through the helper at 00cdf050. */
  puStack_8 = &LAB_015e1559;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = TinyHttp::HttpManagerHandler::vftable;
  local_4 = 0;
  *(undefined ***)this = ClientLeaderBoardManager::vftable;
  *(undefined4 *)((int)this + 4) = in_stack_00000004;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  LeaderBoardResponse_ctor((void *)((int)this + 0x14));
  local_4._0_1_ = 1;
  this_00 = Mem_Alloc(0x25c);
  local_4._0_1_ = 2;
  if (this_00 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    LeaderBoardManager_registerEntryDataSource(this_00);
    uVar2 = extraout_EAX;
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x34) = 0;
  FUN_00b85660(uVar2);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00b85d50(uVar1);
  ExceptionList = local_c;
  return;
}

