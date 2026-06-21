// addr: 0x014e5230
// name: ArchCommand_ValidateUsername_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall ArchCommand_ValidateUsername_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for ArchCommand_ValidateUsername; calls cleanup
                       and frees this when requested. */
  ArchCommand_ValidateUsername_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

