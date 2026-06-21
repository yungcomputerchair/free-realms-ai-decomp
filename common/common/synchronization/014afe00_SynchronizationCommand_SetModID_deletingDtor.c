// addr: 0x014afe00
// name: SynchronizationCommand_SetModID_deletingDtor
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
SynchronizationCommand_SetModID_deletingDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deleting destructor for SynchronizationCommand_SetModID with optional free.
                        */
  puStack_8 = &LAB_016a6c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = SynchronizationCommand_SetModID::vftable;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

