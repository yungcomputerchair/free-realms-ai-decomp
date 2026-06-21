// addr: 0x012d0810
// name: CommandHandle_releaseIfPresent
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandHandle_releaseIfPresent(void * handle) */

void __fastcall CommandHandle_releaseIfPresent(void *handle)

{
  void *in_stack_00000004;
  
                    /* Releases or finalizes a command/message handle only when its pointer field at
                       offset 8 is non-null. */
  if (*(void **)((int)handle + 8) != (void *)0x0) {
    NetworkService_queueCommand(*(void **)((int)handle + 8),in_stack_00000004);
    return;
  }
  return;
}

