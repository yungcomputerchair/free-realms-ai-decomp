// addr: 0x014b1a60
// name: SynchronizationCommand_ProcessFulfillment_dtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_ProcessFulfillment_dtor(void * this) */

void __fastcall SynchronizationCommand_ProcessFulfillment_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for SynchronizationCommand_ProcessFulfillment; destroys an
                       embedded fulfillment payload before delegating to the SynchronizationCommand
                       base destructor. */
  puStack_8 = &LAB_016a7143;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_ProcessFulfillment::vftable;
  local_4 = 0;
  InstanceID_dtor((void *)((int)this + 4));
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

