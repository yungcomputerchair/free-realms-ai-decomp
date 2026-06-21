// addr: 0x013a2730
// name: CollectionData_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall CollectionData_scalarDeletingDtor(void *param_1,byte param_2)

{
                    /* Deleting destructor wrapper for CollectionData: calls CollectionData_dtor and
                       optionally frees the object when flag bit 0 is set. */
  CollectionData_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

