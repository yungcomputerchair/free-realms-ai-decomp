// addr: 0x015348a0
// name: EventCommand_RespondEventLeaderBoard_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRespondEventLeaderBoard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventLeaderBoard_cloneInto(void * this, void *
   target) */

void __thiscall EventCommand_RespondEventLeaderBoard_cloneInto(void *this,void *target)

{
  void *this_00;
  
                    /* Clone-into implementation: copies leaderboard vectors/collections and scalar
                       fields before cloning the base EventCommand. The RTTI cast uses
                       EventCommand_RespondEventLeaderBoard::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRespondEventLeaderBoard.cpp. */
  this_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &EventCommand_RespondEventLeaderBoard::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\event_command\\EventCommandRespondEventLeaderBoard.cpp",
                 0xf7);
  }
  EventCommand_RespondEventLeaderBoard_cloneLeaderboardFields
            (this_00,(void *)((int)this + 0x18),(void *)((int)this + 0x28),
             (void *)((int)this + 0x38),(void *)((int)this + 0x48),(void *)((int)this + 0x58),
             (void *)((int)this + 0x78),(void *)((int)this + 0x68));
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this_00 + 0x88) = *(undefined4 *)((int)this + 0x88);
  *(undefined4 *)((int)this_00 + 0x8c) = *(undefined4 *)((int)this + 0x8c);
  *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  FUN_01534720((int)this + 0x90);
  EventCommand_cloneInto(this,this_00);
  return;
}

