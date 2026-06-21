// addr: 0x014b8ae0
// name: LoginCommand_GuestLogin_deletingDtor
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LoginCommand_GuestLogin_deletingDtor(void *param_1,byte param_2)

{
                    /* Compiler deleting destructor for LoginCommand_GuestLogin. It calls the
                       GuestLogin destructor and conditionally frees the object for deleting-dtor
                       semantics. */
  LoginCommand_GuestLogin_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

