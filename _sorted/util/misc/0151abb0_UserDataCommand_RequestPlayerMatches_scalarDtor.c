// addr: 0x0151abb0
// name: UserDataCommand_RequestPlayerMatches_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
UserDataCommand_RequestPlayerMatches_scalarDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for UserDataCommand_RequestPlayerMatches; installs
                       class vtable and runs UserDataCommand base cleanup and frees this when
                       requested. */
  puStack_8 = &LAB_016b7b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = UserDataCommand_RequestPlayerMatches::vftable;
  local_4 = 0xffffffff;
  UserDataCommand_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

