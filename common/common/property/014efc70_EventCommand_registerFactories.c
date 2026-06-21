// addr: 0x014efc70
// name: EventCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void EventCommand_registerFactories(void) */

void EventCommand_registerFactories(void)

{
                    /* Registers the EventCommand factory family by invoking
                       EventCommand::registerFactory and each derived EventCommand registerFactory
                       helper. The callees include named EventCommand_RequestEventSessionInfo,
                       RequestCurrentSessionInfo, RequestEventLeaderBoard,
                       RequestEventSessionsOnDay, SendDontPlay, and RequestJoinMatchingQueue
                       factories. */
  EventCommand_registerFactory();
  EventCommand_ForceIntoEvent_registerFactory();
  EventCommand_SetReady_registerFactory();
  EventCommand_NextMatchingTime_registerFactory();
  EventCommand_NotifyMatchEnded_registerFactory();
  EventCommand_RequestEventLeaderBoard_registerFactory();
  EventCommand_RequestEventSessionInfo_registerFactory();
  EventCommand_RequestEventTotalPlayers_registerFactory();
  EventCommand_RespondEventLeaderBoard_registerFactory();
  EventCommand_RespondEventSessionInfo_registerFactory();
  EventCommand_RespondEventTotalPlayers_registerFactory();
  EventCommand_RequestTimedDeckSelection_registerFactory();
  EventCommand_SendByeNotification_registerFactory();
  EventCommand_SendDontPlay_registerFactory();
  EventCommand_RequestDuelistStats_registerFactory();
  EventCommand_RespondDuelistStats_registerFactory();
  EventCommand_RequestPlayerStats_registerFactory();
  EventCommand_RespondPlayerStats_registerFactory();
  EventCommand_SendReadyStatus_registerFactory();
  EventCommand_SendEventPlayerFlags_registerFactory();
  EventCommand_RequestCurrentSessionInfo_registerFactory();
  EventCommand_RespondCurrentSessionInfo_registerFactory();
  EventCommand_RequestEventSessionsOnDay_registerFactory();
  EventCommand_RespondEventSessionsOnDay_registerFactory();
  EventCommand_RequestJoinMatchingQueue_registerFactory();
  return;
}

