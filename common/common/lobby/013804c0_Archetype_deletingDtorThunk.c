// addr: 0x013804c0
// name: Archetype_deletingDtorThunk
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Archetype_deletingDtorThunk(void) */

void Archetype_deletingDtorThunk(void)

{
                    /* Tiny thunk forwarding to Archetype_scalarDeletingDtor. No additional behavior
                       is present. */
  Archetype_scalarDeletingDtor();
  return;
}

