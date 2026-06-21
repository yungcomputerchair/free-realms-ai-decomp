// addr: 0x01447480
// name: EventCommand_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_cloneInto(void * this, void * target) */

void __thiscall EventCommand_cloneInto(void *this,void *target)

{
  void *this_00;
  
                    /* Clone-into implementation: casts the target to EventCommand, invokes the
                       NetworkCommand/base clone path, and copies the base event field at +4. The
                       RTTI cast uses EventCommand::RTTI_Type_Descriptor and the assert/file
                       evidence names "clone" in EventCommand.cpp. */
  this_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &EventCommand::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\event_command\\EventCommand.cpp",0x3d);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

