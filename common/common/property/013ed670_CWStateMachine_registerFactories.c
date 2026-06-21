// addr: 0x013ed670
// name: CWStateMachine_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWStateMachine_registerFactories(void) */

void CWStateMachine_registerFactories(void)

{
                    /* Registers the card-war state machine related factory classes. */
  CWActionPlayedState_registerFactory();
  CWDoublePassState_registerFactory();
  CWDrawCardState_registerFactory();
  CWHandleResponseState_registerFactory();
  CWMultiActionState_registerFactory();
  CWProcessEventEmissionState_registerFactory();
  CWStartOfGameState_registerFactory();
  CWStateMachine_registerFactory();
  return;
}

