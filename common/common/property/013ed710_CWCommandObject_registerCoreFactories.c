// addr: 0x013ed710
// name: CWCommandObject_registerCoreFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWCommandObject_registerCoreFactories(void) */

void CWCommandObject_registerCoreFactories(void)

{
                    /* Registers two core CWCommandObject factories: AddCostMod and Destroy. The
                       nested constructor paths reference CWCommandObject_AddCostMod and
                       CWCommandObject_Destroy vftables and name strings. */
  CWCommandObject_AddCostMod_registerFactory();
  CWCommandObject_Destroy_registerFactory();
  return;
}

