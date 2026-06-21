// addr: 0x013ee030
// name: PropertyCore_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PropertyCore_registerFactories(void) */

void PropertyCore_registerFactories(void)

{
                    /* Registers core property-system factories: Exception, PropertySet, and
                       ValueData. Evidence is the three named registerFactory callees and startup
                       caller. */
  Exception_registerFactory();
  PropertySet_registerFactory();
  ValueData_registerFactory();
  return;
}

