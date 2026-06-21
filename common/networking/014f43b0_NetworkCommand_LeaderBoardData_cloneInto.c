// addr: 0x014f43b0
// name: NetworkCommand_LeaderBoardData_cloneInto
// subsystem: common/networking
// source (binary assert): common/networking/NetworkCommandLeaderBoardData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_LeaderBoardData_cloneInto(void * this, void * allocator)
    */

void __thiscall NetworkCommand_LeaderBoardData_cloneInto(void *this,void *allocator)

{
  void *this_00;
  
                    /* Allocates/clones NetworkCommand_LeaderBoardData and copies its leaderboard
                       vectors/string containers. Evidence: RTTI names
                       NetworkCommand_LeaderBoardData and assert string is clone in
                       NetworkCommandLeaderBoardData.cpp. */
  this_00 = (void *)FUN_00d8d382(allocator,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &NetworkCommand_LeaderBoardData::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\NetworkCommandLeaderBoardData.cpp",0x52);
  }
  NetworkCommand_cloneBaseFields(this_00);
  FUN_005f1e5c((int)this + 0x34);
  StdVector28_assign((int)this + 0x44);
  FUN_005f1e5c((int)this + 0x54);
  FUN_005f1e5c((int)this + 4);
  StdVector28_assign((int)this + 0x14);
  FUN_005f1e5c((int)this + 0x24);
  return;
}

