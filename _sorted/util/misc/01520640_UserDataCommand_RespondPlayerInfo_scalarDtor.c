// addr: 0x01520640
// name: UserDataCommand_RespondPlayerInfo_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall UserDataCommand_RespondPlayerInfo_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for UserDataCommand_RespondPlayerInfo; calls
                       cleanup and frees this when requested. */
  UserDataCommand_RespondPlayerInfo_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

