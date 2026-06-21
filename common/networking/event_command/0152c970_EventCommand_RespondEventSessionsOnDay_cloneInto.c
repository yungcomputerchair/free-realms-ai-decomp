// addr: 0x0152c970
// name: EventCommand_RespondEventSessionsOnDay_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRespondEventSessionsOnDay.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventSessionsOnDay_cloneInto(void * this, void *
   target) */

void __thiscall EventCommand_RespondEventSessionsOnDay_cloneInto(void *this,void *target)

{
  void *target_00;
  void *first;
  TypeDescriptor *allocation;
  char *pcVar1;
  int arg3;
  void *arg4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clone-into implementation: copies response scalars and a contained
                       collection/string helper before delegating the base clone. The RTTI cast uses
                       EventCommand_RespondEventSessionsOnDay::RTTI_Type_Descriptor and the
                       assert/file evidence names "clone" in
                       EventCommandRespondEventSessionsOnDay.cpp. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ba728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  allocation = &NetworkCommand::RTTI_Type_Descriptor;
  first = (void *)0x0;
  target_00 = (void *)FUN_00d8d382(target);
  if (target_00 == (void *)0x0) {
    pcVar1 = "clone";
    first = (void *)0x152c9c6;
    FUN_012f5a60();
    allocation = (TypeDescriptor *)pcVar1;
  }
  arg3 = 0x152c9d1;
  arg4 = target_00;
  EventCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)target_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  FUN_005f15f0((int)this + 0x14);
  uStack_4 = 0xffffffff;
  EventCommand_RespondEventSessionsOnDay_destroyTempSessionList(first,allocation,arg3,(int)arg4);
  ExceptionList = local_c;
  return;
}

