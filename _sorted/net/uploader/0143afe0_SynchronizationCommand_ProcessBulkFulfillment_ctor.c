// addr: 0x0143afe0
// name: SynchronizationCommand_ProcessBulkFulfillment_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_ProcessBulkFulfillment_ctor(void * this) */

void * __fastcall SynchronizationCommand_ProcessBulkFulfillment_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ProcessBulkFulfillment synchronization command, clearing three
                       fields after common SynchronizationCommand initialization. Vtable identifies
                       the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697b73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = SynchronizationCommand_ProcessBulkFulfillment::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

