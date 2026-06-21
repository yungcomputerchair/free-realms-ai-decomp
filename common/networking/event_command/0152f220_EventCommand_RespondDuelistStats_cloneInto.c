// addr: 0x0152f220
// name: EventCommand_RespondDuelistStats_cloneInto
// subsystem: common/networking/event_command
// source (binary assert): common/networking/event_command/EventCommandRespondDuelistStats.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondDuelistStats_cloneInto(void * this, void * target) */

void __thiscall EventCommand_RespondDuelistStats_cloneInto(void *this,void *target)

{
  void *target_00;
  TypeDescriptor *unused;
  char *pcVar1;
  void *source_tree;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clone-into implementation: copies duelist-stat scalar fields and a nested
                       collection through helpers before cloning the base. The RTTI cast uses
                       EventCommand_RespondDuelistStats::RTTI_Type_Descriptor and the assert/file
                       evidence names "clone" in EventCommandRespondDuelistStats.cpp. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016bae88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  unused = &NetworkCommand::RTTI_Type_Descriptor;
  target_00 = (void *)FUN_00d8d382(target,0);
  if (target_00 == (void *)0x0) {
    pcVar1 = "clone";
    FUN_012f5a60();
    unused = (TypeDescriptor *)pcVar1;
  }
  source_tree = (void *)0x152f281;
  EventCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)target_00 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)target_00 + 0x14) = *(undefined4 *)((int)this + 0x14);
  EventCommand_ValueList_copyConstruct(&stack0xffffffdc,(void *)((int)this + 0x18));
  uStack_4 = 0xffffffff;
  EventCommand_RespondDuelistStats_cloneIntVectorMap(target_00,unused,source_tree);
  ExceptionList = local_c;
  return;
}

