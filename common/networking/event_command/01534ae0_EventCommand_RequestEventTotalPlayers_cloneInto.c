// addr: 0x01534ae0
// name: EventCommand_RequestEventTotalPlayers_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRequestEventTotalPlayers.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventTotalPlayers_cloneInto(void * this, void *
   target) */

void __thiscall EventCommand_RequestEventTotalPlayers_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: casts the target to
                       EventCommand_RequestEventTotalPlayers and delegates the base EventCommand
                       clone with no additional fields. The RTTI cast uses
                       EventCommand_RequestEventTotalPlayers::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRequestEventTotalPlayers.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_RequestEventTotalPlayers::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\event_command\\EventCommandRequestEventTotalPlayers.cpp",
                 0x21);
  }
  EventCommand_cloneInto(this,target_00);
  return;
}

