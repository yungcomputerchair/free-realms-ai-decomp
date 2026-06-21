// addr: 0x015304b0
// name: EventCommand_RespondEventTotalPlayers_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRespondEventTotalPlayers.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventTotalPlayers_cloneInto(void * this, void *
   target) */

void __thiscall EventCommand_RespondEventTotalPlayers_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: copies the total-player count field at +8 and then
                       clones the EventCommand base. The RTTI cast uses
                       EventCommand_RespondEventTotalPlayers::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRespondEventTotalPlayers.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_RespondEventTotalPlayers::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\event_command\\EventCommandRespondEventTotalPlayers.cpp",
                 0x37);
  }
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  EventCommand_cloneInto(this,target_00);
  return;
}

