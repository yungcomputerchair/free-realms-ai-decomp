// addr: 0x013ed6a0
// name: CWArchetypeAndDeck_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWArchetypeAndDeck_registerFactories(void) */

void CWArchetypeAndDeck_registerFactories(void)

{
                    /* Registers the CWArchetype and CWDeck component factories as a grouped
                       initialization step. Each callee is a factory-registration wrapper for a
                       constructor with CWArchetype::vftable or CWDeck::vftable. */
  CWArchetype_registerFactory();
  CWDeck_registerFactory();
  return;
}

