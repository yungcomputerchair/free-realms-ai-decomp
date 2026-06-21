// addr: 0x0143b120
// name: SynchronizationCommand_ProcessBulkFulfillment_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * SynchronizationCommand_ProcessBulkFulfillment_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs ProcessBulkFulfillment synchronization command.
                       Constructor callee identifies class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697bcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = SynchronizationCommand_ProcessBulkFulfillment_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

