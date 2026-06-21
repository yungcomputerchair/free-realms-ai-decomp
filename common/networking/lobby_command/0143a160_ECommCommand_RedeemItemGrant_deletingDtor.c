// addr: 0x0143a160
// name: ECommCommand_RedeemItemGrant_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall ECommCommand_RedeemItemGrant_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor for ECommCommand_RedeemItemGrant; calls the class
                       destructor and frees when flags bit 0 is set. Evidence is direct dtor call
                       and conditional _free. */
  ECommCommand_RedeemItemGrant_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

