// addr: 0x01535080
// name: EventCommand_NotifyMatchEnded_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * EventCommand_NotifyMatchEnded_create(void) */

void * EventCommand_NotifyMatchEnded_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a EventCommand_NotifyMatchEnded, returning null on
                       allocation failure. Evidence is the EventCommand_NotifyMatchEnded_ctor or
                       vtable-named constructor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bbc6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = EventCommand_NotifyMatchEnded_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

