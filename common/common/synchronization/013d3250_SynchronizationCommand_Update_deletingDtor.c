// addr: 0x013d3250
// name: SynchronizationCommand_Update_deletingDtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall SynchronizationCommand_Update_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for SynchronizationCommand_Update, including optional
                       object free after base destruction. */
  puStack_8 = &LAB_0168b4b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = SynchronizationCommand_Update::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

