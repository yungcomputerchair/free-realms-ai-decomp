// addr: 0x014b1960
// name: SynchronizationCommand_ProcessFulfillment_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_ProcessFulfillment_ctor(void * this) */

void * __fastcall SynchronizationCommand_ProcessFulfillment_ctor(void *this)

{
  void *other;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ProcessFulfillment synchronization command, installing its
                       vftable and initializing its embedded InstanceID to the default zero/zero
                       value. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a710b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  local_4 = 0;
  *(undefined ***)this = SynchronizationCommand_ProcessFulfillment::vftable;
  InstanceID_ctor();
  local_4._0_1_ = 1;
  other = InstanceID_ctor(local_1c,0,0);
  local_4._0_1_ = 2;
  InstanceID_assignFrom((void *)((int)this + 4),other);
  local_4 = CONCAT31(local_4._1_3_,1);
  InstanceID_dtor(local_1c);
  ExceptionList = local_c;
  return this;
}

