// addr: 0x01402940
// name: Match_scalarDeletingDtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall Match_scalarDeletingDtor(void *param_1,byte param_2)

{
                    /* Runs Match_dtor and frees this when the deleting-destructor flag is set. */
  Match_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

