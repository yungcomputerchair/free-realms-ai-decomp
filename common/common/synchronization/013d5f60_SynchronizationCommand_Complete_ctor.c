// addr: 0x013d5f60
// name: SynchronizationCommand_Complete_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SynchronizationCommand_Complete_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for SynchronizationCommand_Complete; constructs the
                       SynchronizationCommand base, installs the Complete vtable, and zeroes its
                       first data field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SynchronizationCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = SynchronizationCommand_Complete::vftable;
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}

