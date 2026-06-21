// addr: 0x013d2f80
// name: SynchronizationCommand_Update_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SynchronizationCommand_Update_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for SynchronizationCommand_Update; constructs the base
                       SynchronizationCommand and installs the Update vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b3f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = SynchronizationCommand_Update::vftable;
  ExceptionList = local_c;
  return param_1;
}

