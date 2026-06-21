// addr: 0x0152daa0
// name: EventCommand_SendReadyStatus_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandSendReadyStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SendReadyStatus_cloneInto(void * this, void * target) */

void __thiscall EventCommand_SendReadyStatus_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: copies the ready-status byte at +8 after the base
                       EventCommand clone. The RTTI cast uses
                       EventCommand_SendReadyStatus::RTTI_Type_Descriptor and the assert/file
                       evidence names "clone" in EventCommandSendReadyStatus.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_SendReadyStatus::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\event_command\\EventCommandSendReadyStatus.cpp",
                 0x37);
  }
  EventCommand_cloneInto(this,target_00);
  *(undefined1 *)((int)target_00 + 8) = *(undefined1 *)((int)this + 8);
  return;
}

