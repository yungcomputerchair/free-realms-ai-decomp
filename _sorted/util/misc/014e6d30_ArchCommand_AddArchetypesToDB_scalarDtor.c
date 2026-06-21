// addr: 0x014e6d30
// name: ArchCommand_AddArchetypesToDB_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall ArchCommand_AddArchetypesToDB_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for ArchCommand_AddArchetypesToDB; installs/uses
                       class vtable and runs base cleanup and frees this when requested. */
  ArchCommand_AddArchetypesToDB_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

