// addr: 0x012c5080
// name: SynchronizationService_ensureSingleton
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SynchronizationService_ensureSingleton(void) */

void SynchronizationService_ensureSingleton(void)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures the global SynchronizationService singleton exists, allocating 0x50
                       bytes and calling SynchronizationService_ctor when DAT_01cbd694 is null. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e9ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cbd694 == (void *)0x0) {
    this = Mem_Alloc(0x50);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_01cbd694 = (void *)0x0;
    }
    else {
      DAT_01cbd694 = SynchronizationService_ctor(this);
    }
  }
  ExceptionList = local_c;
  return;
}

