// addr: 0x0143b050
// name: SynchronizationCommand_ProcessBulkFulfillment_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_ProcessBulkFulfillment_createAndRegister(void *
   factory) */

void * __fastcall SynchronizationCommand_ProcessBulkFulfillment_createAndRegister(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs ProcessBulkFulfillment synchronization command and
                       registers it through a virtual method. Constructor callee identifies class.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697b9b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x14);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = SynchronizationCommand_ProcessBulkFulfillment_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

