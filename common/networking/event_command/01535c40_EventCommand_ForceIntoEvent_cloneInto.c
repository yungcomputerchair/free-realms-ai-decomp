// addr: 0x01535c40
// name: EventCommand_ForceIntoEvent_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandForceIntoEvent.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_ForceIntoEvent_cloneInto(void * this, void * target) */

void __thiscall EventCommand_ForceIntoEvent_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: copies force-into-event fields at +8 and +0xc
                       before cloning the EventCommand base. The RTTI cast uses
                       EventCommand_ForceIntoEvent::RTTI_Type_Descriptor and the assert/file
                       evidence names "clone" in EventCommandForceIntoEvent.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_ForceIntoEvent::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\event_command\\EventCommandForceIntoEvent.cpp",
                 0x78);
  }
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined1 *)((int)target_00 + 0xc) = *(undefined1 *)((int)this + 0xc);
  EventCommand_cloneInto(this,target_00);
  return;
}

