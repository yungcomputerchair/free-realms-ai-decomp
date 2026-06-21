// addr: 0x01446f10
// name: EventCommand_RequestJoinMatchingQueue_destroyQueueMember
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 EventCommand_RequestJoinMatchingQueue_destroyQueueMember(void *
   this, int flags) */

int __thiscall EventCommand_RequestJoinMatchingQueue_destroyQueueMember(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor-style helper for the RequestJoinMatchingQueue contained collection
                       at offset +0x2c. It destroys/copies through the value-list helper and returns
                       the flags argument. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01699b79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EventCommand_ValueList_copyConstruct((void *)flags,(void *)((int)this + 0x2c));
  ExceptionList = local_c;
  return flags;
}

