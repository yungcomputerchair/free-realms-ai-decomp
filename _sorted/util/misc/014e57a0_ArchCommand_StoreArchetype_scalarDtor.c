// addr: 0x014e57a0
// name: ArchCommand_StoreArchetype_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall ArchCommand_StoreArchetype_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for ArchCommand_StoreArchetype; calls cleanup and
                       frees this when requested. */
  ArchCommand_StoreArchetype_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

