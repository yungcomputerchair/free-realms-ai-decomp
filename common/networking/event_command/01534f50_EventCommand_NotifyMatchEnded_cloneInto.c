// addr: 0x01534f50
// name: EventCommand_NotifyMatchEnded_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandNotifyMatchEnded.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_NotifyMatchEnded_cloneInto(void * this, void * target) */

void __thiscall EventCommand_NotifyMatchEnded_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: copies match-ended scalar fields at +8, +0xc, and
                       +0x10 before cloning the EventCommand base. The RTTI cast uses
                       EventCommand_NotifyMatchEnded::RTTI_Type_Descriptor and the assert/file
                       evidence names "clone" in EventCommandNotifyMatchEnded.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_NotifyMatchEnded::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\event_command\\EventCommandNotifyMatchEnded.cpp",
                 0x56);
  }
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)target_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  EventCommand_cloneInto(this,target_00);
  return;
}

