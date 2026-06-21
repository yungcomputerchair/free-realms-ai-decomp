// addr: 0x0147f000
// name: ActionPlayedState_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall ActionPlayedState_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for ActionPlayedState; calls
                       ActionPlayedState_dtor and frees this when requested. */
  ActionPlayedState_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

