// addr: 0x014ea650
// name: AccountCommand_SetAchievementList_deletingDtor
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall AccountCommand_SetAchievementList_deletingDtor(int *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for AccountCommand_SetAchievementList: calls the
                       real destructor and frees this when the low flag bit is set. */
  AccountCommand_SetAchievementList_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

