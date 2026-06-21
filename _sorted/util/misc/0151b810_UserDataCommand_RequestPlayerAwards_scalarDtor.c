// addr: 0x0151b810
// name: UserDataCommand_RequestPlayerAwards_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
UserDataCommand_RequestPlayerAwards_scalarDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for UserDataCommand_RequestPlayerAwards; installs
                       class vtable and runs UserDataCommand base cleanup and frees this when
                       requested. */
  puStack_8 = &LAB_016b7df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = UserDataCommand_RequestPlayerAwards::vftable;
  local_4 = 0xffffffff;
  UserDataCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

