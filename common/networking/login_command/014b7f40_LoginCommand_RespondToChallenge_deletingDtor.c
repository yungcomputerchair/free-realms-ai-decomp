// addr: 0x014b7f40
// name: LoginCommand_RespondToChallenge_deletingDtor
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LoginCommand_RespondToChallenge_deletingDtor(void *param_1,byte param_2)

{
                    /* Compiler deleting destructor for LoginCommand_RespondToChallenge. It calls
                       the class destructor and frees this when requested by the destructor flags.
                        */
  LoginCommand_RespondToChallenge_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

