// addr: 0x01452980
// name: CWArchetype_scalarDeletingDtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall CWArchetype_scalarDeletingDtor(void *param_1,byte param_2)

{
                    /* Runs CWArchetype_dtor and frees this if the scalar deleting destructor flag
                       is set. */
  CWArchetype_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

