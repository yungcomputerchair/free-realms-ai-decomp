// addr: 0x0152d7e0
// name: EventCommand_SendEventPlayerFlags_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * EventCommand_SendEventPlayerFlags_create(void) */

void * EventCommand_SendEventPlayerFlags_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a EventCommand_SendEventPlayerFlags, returning null
                       on allocation failure. Evidence is the EventCommand_SendEventPlayerFlags_ctor
                       or vtable-named constructor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016baa0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = EventCommand_SendEventPlayerFlags_ctor();
  }
  ExceptionList = local_c;
  return pvVar1;
}

