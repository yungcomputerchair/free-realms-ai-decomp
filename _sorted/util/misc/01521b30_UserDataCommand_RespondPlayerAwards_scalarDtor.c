// addr: 0x01521b30
// name: UserDataCommand_RespondPlayerAwards_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall UserDataCommand_RespondPlayerAwards_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for UserDataCommand_RespondPlayerAwards; calls
                       cleanup and frees this when requested. */
  UserDataCommand_RespondPlayerAwards_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

