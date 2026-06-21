// addr: 0x014b1d50
// name: FUN_014b1d50
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * FUN_014b1d50(void) */

void * FUN_014b1d50(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x14-byte command/object via FUN_014b1960 and returns it, or null
                       on allocation failure. Specific type is not locally identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a720b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = SynchronizationCommand_ProcessFulfillment_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

