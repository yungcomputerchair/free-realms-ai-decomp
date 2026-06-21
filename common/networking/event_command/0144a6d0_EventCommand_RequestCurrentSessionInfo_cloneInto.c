// addr: 0x0144a6d0
// name: EventCommand_RequestCurrentSessionInfo_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRequestCurrentSessionInfo.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestCurrentSessionInfo_cloneInto(void * this, void *
   target) */

void __thiscall EventCommand_RequestCurrentSessionInfo_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: casts the target to
                       EventCommand_RequestCurrentSessionInfo and delegates the base EventCommand
                       clone with no additional fields. The RTTI cast uses
                       EventCommand_RequestCurrentSessionInfo::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRequestCurrentSessionInfo.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_RequestCurrentSessionInfo::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\event_command\\EventCommandRequestCurrentSessionInfo.cpp",
                 0x23);
  }
  EventCommand_cloneInto(this,target_00);
  return;
}

