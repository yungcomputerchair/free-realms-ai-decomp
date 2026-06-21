// addr: 0x01447860
// name: EventCommand_SendDontPlay_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandSendDontPlay.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SendDontPlay_cloneInto(void * this, void * target) */

void __thiscall EventCommand_SendDontPlay_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Clone-into implementation: casts the target to EventCommand_SendDontPlay and
                       delegates the base EventCommand clone with no additional fields. The RTTI
                       cast uses EventCommand_SendDontPlay::RTTI_Type_Descriptor and the assert/file
                       evidence names "clone" in EventCommandSendDontPlay.cpp. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &EventCommand_SendDontPlay::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\event_command\\EventCommandSendDontPlay.cpp",0x27)
    ;
  }
  EventCommand_cloneInto(this,target_00);
  return;
}

