// addr: 0x01535410
// name: EventCommand_NextMatchingTime_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandNextMatchingTime.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_NextMatchingTime_cloneInto(void * this, void * target) */

void __thiscall EventCommand_NextMatchingTime_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: copies the next matching time fields at +8 and
                       +0xc after the base EventCommand clone. The RTTI cast uses
                       EventCommand_NextMatchingTime::RTTI_Type_Descriptor and the assert/file
                       evidence names "clone" in EventCommandNextMatchingTime.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_NextMatchingTime::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\event_command\\EventCommandNextMatchingTime.cpp",
                 0x43);
  }
  EventCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

