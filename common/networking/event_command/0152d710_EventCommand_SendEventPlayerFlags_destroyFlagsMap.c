// addr: 0x0152d710
// name: EventCommand_SendEventPlayerFlags_destroyFlagsMap
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 EventCommand_SendEventPlayerFlags_destroyFlagsMap(void * this, int
   flags) */

int __thiscall EventCommand_SendEventPlayerFlags_destroyFlagsMap(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor-style helper for the SendEventPlayerFlags int-int map/value member
                       at offset +8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ba9a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ValueData_IntIntMap_copyConstruct((void *)flags,(void *)((int)this + 8));
  ExceptionList = local_c;
  return flags;
}

