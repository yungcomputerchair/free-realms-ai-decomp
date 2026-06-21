// addr: 0x0152e760
// name: EventCommand_RequestPlayerStats_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRequestPlayerStats.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestPlayerStats_cloneInto(void * this, void * target) */

void __thiscall EventCommand_RequestPlayerStats_cloneInto(void *this,void *target)

{
  void *this_00;
  
                    /* Clone-into implementation: copies request-player-stats fields at +8 and +0xc
                       after touching the event-command base field. The RTTI cast uses
                       EventCommand_RequestPlayerStats::RTTI_Type_Descriptor and the assert/file
                       evidence names "clone" in EventCommandRequestPlayerStats.cpp. */
  this_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &EventCommand_RequestPlayerStats::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\event_command\\EventCommandRequestPlayerStats.cpp"
                 ,0x37);
  }
  EventCommand_setDisplayActionId(this_00,*(uint *)((int)this + 4));
  *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  EventCommand_cloneInto(this,this_00);
  return;
}

