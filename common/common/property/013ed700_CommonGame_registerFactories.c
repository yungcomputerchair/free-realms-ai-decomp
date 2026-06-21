// addr: 0x013ed700
// name: CommonGame_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommonGame_registerFactories(void) */

void CommonGame_registerFactories(void)

{
                    /* Small registration aggregator that invokes three factory-registration helpers
                       during global startup. Evidence is only the three register-like calls from
                       the startup caller; no literals identify the precise group. */
  CWCard_registerFactory();
  CWGameTurn_registerFactory();
  CWPlayer_registerFactory();
  return;
}

