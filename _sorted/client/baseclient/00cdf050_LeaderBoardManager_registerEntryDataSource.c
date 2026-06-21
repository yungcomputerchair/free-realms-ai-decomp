// addr: 0x00cdf050
// name: LeaderBoardManager_registerEntryDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LeaderBoardManager_registerEntryDataSource(void * this) */

void __thiscall LeaderBoardManager_registerEntryDataSource(void *this)

{
  void *pvVar1;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a GuiDsTable-backed LeaderBoardEntryDataSource and stores it via a
                       nearby leaderboard manager helper. Called by the leaderboard response
                       datasource setup routine. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160dda1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_LeaderBoard_0183a567_1_01b7ad58);
  *(undefined ***)this = LeaderBoardDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = LeaderBoardDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = LeaderBoardDataSource::vftable;
  *(undefined4 *)((int)this + 0x254) = in_stack_00000004;
  *(undefined4 *)((int)this + 600) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  pvVar1 = Mem_Alloc(600);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LeaderBoardEntryDataSource_ctor(pvVar1,this);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00cdebd0(pvVar1);
  ExceptionList = local_c;
  return;
}

