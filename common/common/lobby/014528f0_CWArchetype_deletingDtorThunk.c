// addr: 0x014528f0
// name: CWArchetype_deletingDtorThunk
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWArchetype_deletingDtorThunk(void) */

void CWArchetype_deletingDtorThunk(void)

{
                    /* Tiny thunk forwarding to CWArchetype_scalarDeletingDtor. No extra logic is
                       present. */
  CWArchetype_scalarDeletingDtor();
  return;
}

