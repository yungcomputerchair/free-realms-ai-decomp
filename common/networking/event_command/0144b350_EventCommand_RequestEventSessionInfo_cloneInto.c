// addr: 0x0144b350
// name: EventCommand_RequestEventSessionInfo_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRequestEventSessionInfo.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventSessionInfo_cloneInto(void * this, void *
   target) */

void __thiscall EventCommand_RequestEventSessionInfo_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: copies the requested session field at +8 after the
                       base EventCommand clone. The RTTI cast uses
                       EventCommand_RequestEventSessionInfo::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRequestEventSessionInfo.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_RequestEventSessionInfo::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\event_command\\EventCommandRequestEventSessionInfo.cpp",
                 0x2a);
  }
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  EventCommand_cloneInto(this,target_00);
  return;
}

