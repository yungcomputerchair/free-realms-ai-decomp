// addr: 0x01406dd0
// name: TutorialDB_scalarDeletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TutorialDB_scalarDeletingDtor(void * this, char flags) */

void * __thiscall TutorialDB_scalarDeletingDtor(void *this,char flags)

{
                    /* Compiler scalar-deleting destructor for TutorialDB. It calls the TutorialDB
                       destructor and conditionally frees this when flags bit 0 is set. */
  TutorialDB_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

