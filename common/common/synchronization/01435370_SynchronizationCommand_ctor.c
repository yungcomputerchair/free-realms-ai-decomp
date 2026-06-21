// addr: 0x01435370
// name: SynchronizationCommand_ctor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SynchronizationCommand_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Base constructor for SynchronizationCommand; constructs the parent command
                       class and installs the SynchronizationCommand vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  NetworkCommand_ctor(param_1);
  *param_1 = SynchronizationCommand::vftable;
  ExceptionList = local_c;
  return param_1;
}

