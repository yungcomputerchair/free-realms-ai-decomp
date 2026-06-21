// addr: 0x014028b0
// name: Match_deletingDtorThunk
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Match_deletingDtorThunk(void) */

void Match_deletingDtorThunk(void)

{
                    /* Tiny thunk forwarding to Match_scalarDeletingDtor. It is compiler-generated
                       destructor glue. */
  Match_scalarDeletingDtor();
  return;
}

