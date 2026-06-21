// addr: 0x012d4710
// name: ClientApplication_deletingDtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientApplication_deletingDtor(void * param_1, char param_2) */

void * __thiscall ClientApplication_deletingDtor(void *this,void *param_1,char param_2)

{
                    /* Deleting destructor for ClientApplication: runs ClientApplication_dtor and
                       frees this when the low flag bit is set. Evidence: it calls the destructor at
                       012d4270 and conditionally frees param_1 based on param_2 & 1. */
  ClientApplication_dtor(this);
  if (((uint)param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

