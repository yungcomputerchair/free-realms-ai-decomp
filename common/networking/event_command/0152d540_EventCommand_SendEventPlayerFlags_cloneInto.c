// addr: 0x0152d540
// name: EventCommand_SendEventPlayerFlags_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandSendEventPlayerFlags.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_SendEventPlayerFlags_cloneInto(void * this, void * target)
    */

void __thiscall EventCommand_SendEventPlayerFlags_cloneInto(void *this,void *target)

{
  void *target_00;
  TypeDescriptor *pTStack_24;
  TypeDescriptor *pTStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clone-into implementation: copies the player-flags collection through helper
                       constructors and then delegates the base clone. The RTTI cast uses
                       EventCommand_SendEventPlayerFlags::RTTI_Type_Descriptor and the assert/file
                       evidence names "clone" in EventCommandSendEventPlayerFlags.cpp. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ba938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pTStack_20 = &EventCommand_SendEventPlayerFlags::RTTI_Type_Descriptor;
  pTStack_24 = &NetworkCommand::RTTI_Type_Descriptor;
  target_00 = (void *)FUN_00d8d382(target,0);
  if (target_00 == (void *)0x0) {
    pTStack_20 = (TypeDescriptor *)0x1915008;
    pTStack_24 = (TypeDescriptor *)0x18d7ab0;
    FUN_012f5a60();
  }
  pTStack_20 = (TypeDescriptor *)0x152d5a1;
  EventCommand_cloneInto(this,target_00);
  ValueData_IntIntMap_copyConstruct(&pTStack_24,(void *)((int)this + 8));
  uStack_4 = 0xffffffff;
  EventCommand_SendEventPlayerFlags_assignFlagMap(target_00);
  ExceptionList = local_c;
  return;
}

