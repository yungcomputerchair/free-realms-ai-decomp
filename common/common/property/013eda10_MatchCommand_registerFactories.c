// addr: 0x013eda10
// name: MatchCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void MatchCommand_registerFactories(void) */

void MatchCommand_registerFactories(void)

{
                    /* Registers all MatchCommand factory classes. */
  MatchCommand_registerFactory();
  MatchCommand_BidPlaced_registerFactory();
  MatchCommand_InitiateChallenge_registerFactory();
  MatchCommand_LaunchGame_registerFactory();
  MatchCommand_SelectDeck_registerFactory();
  MatchCommand_SelectStartPosition_registerFactory();
  MatchCommand_SetBid_registerFactory();
  MatchCommand_SetBulkMatchState_registerFactory();
  MatchCommand_SetMatchState_registerFactory();
  MatchCommand_SetReady_registerFactory();
  MatchCommand_SetTimer_registerFactory();
  MatchCommand_SetDeckArchetype_registerFactory();
  return;
}

