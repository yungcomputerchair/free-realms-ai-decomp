// addr: 0x01445860
// name: LoginCommand_SendPassword_deletingDtor
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LoginCommand_SendPassword_deletingDtor(void *param_1,byte param_2)

{
                    /* Compiler deleting destructor for LoginCommand_SendPassword. It invokes the
                       real destructor and frees this when the low flag bit is set. */
  LoginCommand_SendPassword_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

