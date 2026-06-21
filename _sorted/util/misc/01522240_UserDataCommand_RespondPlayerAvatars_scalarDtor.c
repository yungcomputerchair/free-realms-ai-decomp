// addr: 0x01522240
// name: UserDataCommand_RespondPlayerAvatars_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall UserDataCommand_RespondPlayerAvatars_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for UserDataCommand_RespondPlayerAvatars; calls
                       cleanup and frees this when requested. */
  UserDataCommand_RespondPlayerAvatars_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

