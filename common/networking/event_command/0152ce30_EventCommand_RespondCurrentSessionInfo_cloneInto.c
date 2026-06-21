// addr: 0x0152ce30
// name: EventCommand_RespondCurrentSessionInfo_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRespondCurrentSessionInfo.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondCurrentSessionInfo_cloneInto(void * this, void *
   target) */

void __thiscall EventCommand_RespondCurrentSessionInfo_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: copies current-session response scalar fields at
                       +8..+0x18 after the base EventCommand clone. The RTTI cast uses
                       EventCommand_RespondCurrentSessionInfo::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRespondCurrentSessionInfo.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_RespondCurrentSessionInfo::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\event_command\\EventCommandRespondCurrentSessionInfo.cpp",
                 99);
  }
  EventCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)target_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)target_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined1 *)((int)target_00 + 0x18) = *(undefined1 *)((int)this + 0x18);
  return;
}

