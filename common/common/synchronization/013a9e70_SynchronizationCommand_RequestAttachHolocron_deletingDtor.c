// addr: 0x013a9e70
// name: SynchronizationCommand_RequestAttachHolocron_deletingDtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
SynchronizationCommand_RequestAttachHolocron_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for SynchronizationCommand_RequestAttachHolocron; resets
                       the vtable, runs the base SynchronizationCommand destructor, and frees when
                       requested. */
  puStack_8 = &LAB_01686478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = SynchronizationCommand_RequestAttachHolocron::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

