// addr: 0x014850a0
// name: Campaign_deletingDtor
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Campaign_deletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor for Campaign; runs the Campaign destructor and frees this
                       when the deleting-destructor flag is set. */
  Campaign_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

