// addr: 0x013edc30
// name: GameCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GameCommand_registerFactories(void) */

void GameCommand_registerFactories(void)

{
                    /* Registers the GameCommand factory family. It calls
                       GameCommand_registerFactory and many concrete game command factories for
                       setup, player changes, card selection/play, draw/discard/reveal, observer
                       mode, synchronization, offers, and end-game events. */
  GameCommand_registerFactory();
  GameCommand_AcceptAdjournment_registerFactory();
  GameCommand_AcceptDraw_registerFactory();
  GameCommand_ActionPlayed_registerFactory();
  GameCommand_BatchControl_registerFactory();
  GameCommand_BeginCardPlayed_registerFactory();
  GameCommand_ButtonPressed_registerFactory();
  GameCommand_CanPrevent_registerFactory();
  GameCommand_CardDeSelected_registerFactory();
  GameCommand_CardPlayed_registerFactory();
  GameCommand_CardSelected_registerFactory();
  GameCommand_ConcedeGame_registerFactory();
  GameCommand_DiscardCard_registerFactory();
  GameCommand_DragStopped_registerFactory();
  GameCommand_DrawCards_registerFactory();
  GameCommand_EndObserverMode_registerFactory();
  GameCommand_EndGame_registerFactory();
  GameCommand_FatalError_registerFactory();
  GameCommand_FinishCustomChoice_registerFactory();
  GameCommand_FinishMultiaction_registerFactory();
  GameCommand_ForceEndGetTarget_registerFactory();
  GameCommand_GameOverReached_registerFactory();
  GameCommand_IntroduceCard_registerFactory();
  GameCommand_LostPlayer_registerFactory();
  GameCommand_OfferAdjournment_registerFactory();
  GameCommand_OfferDraw_registerFactory();
  GameCommand_OutOfCards_registerFactory();
  GameCommand_OutOfSync_registerFactory();
  GameCommand_PrePass_registerFactory();
  GameCommand_PrePassCancel_registerFactory();
  GameCommand_ReadyForStartOfGame_registerFactory();
  GameCommand_RemovePlayer_registerFactory();
  GameCommand_ReplaceCard_registerFactory();
  GameCommand_Reshuffle_registerFactory();
  GameCommand_RevealCards_registerFactory();
  GameCommand_SelectDeckForPlayer_registerFactory();
  GameCommand_SendSerializedGame_registerFactory();
  GameCommand_SetObserverMode_registerFactory();
  GameCommand_SetPlayer_registerFactory();
  GameCommand_SetupGame_registerFactory();
  GameCommand_StateSpecificMessage_registerFactory();
  GameCommand_SynchPoint_registerFactory();
  GameCommand_ValueList_registerFactory();
  return;
}

