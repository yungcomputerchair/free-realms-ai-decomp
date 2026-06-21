// addr: 0x0151edf0
// name: UserDataCommand_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall UserDataCommand_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for UserDataCommand base/derived object; calls
                       UserDataCommand_dtorImpl and frees this when requested. */
  UserDataCommand_dtorImpl(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

