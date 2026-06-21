// addr: 0x0144aab0
// name: EventCommand_RequestEventSessionsOnDay_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRequestEventSessionsOnDay.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestEventSessionsOnDay_cloneInto(void * this, void *
   target) */

void __thiscall EventCommand_RequestEventSessionsOnDay_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: copies the day/session request fields at +8, +0xc,
                       and +0x10 after the base EventCommand clone. The RTTI cast uses
                       EventCommand_RequestEventSessionsOnDay::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRequestEventSessionsOnDay.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_RequestEventSessionsOnDay::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\event_command\\EventCommandRequestEventSessionsOnDay.cpp",
                 0x41);
  }
  EventCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)target_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  return;
}

