// addr: 0x013edaa0
// name: LobbyCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LobbyCommand_registerFactories(void) */

void LobbyCommand_registerFactories(void)

{
                    /* Registers the LobbyCommand factory family. The callees include
                       LobbyCommand_registerFactory and concrete lobby commands for join/leave,
                       chat, buddies/ignore lists, tournaments, drafts, leagues, adjourned games,
                       stats, and lobby display updates. */
  LobbyCommand_registerFactory();
  LobbyCommand_AcceptAdjournedGame_registerFactory();
  LobbyCommand_AddBooster_registerFactory();
  LobbyCommand_AddBuddies_registerFactory();
  LobbyCommand_AddGroups_registerFactory();
  LobbyCommand_AddIgnore_registerFactory();
  LobbyCommand_AddIgnoreByName_registerFactory();
  LobbyCommand_AddIgnoreByNameResponse_registerFactory();
  LobbyCommand_AddLeagueCards_registerFactory();
  LobbyCommand_AdjournedGame_registerFactory();
  LobbyCommand_BulkJoin_registerFactory();
  LobbyCommand_BuyLeagueActions_registerFactory();
  LobbyCommand_ChallengeLeaguePlayer_registerFactory();
  LobbyCommand_ChallengeLeaguePlayerResponse_registerFactory();
  LobbyCommand_ChangeBulkStatus_registerFactory();
  LobbyCommand_ChangeLobbyDisplay_registerFactory();
  LobbyCommand_ChangeStatus_registerFactory();
  LobbyCommand_Concede_registerFactory();
  LobbyCommand_ConfigureGroup_registerFactory();
  LobbyCommand_DeleteAdjournedGame_registerFactory();
  LobbyCommand_DisplayStats_registerFactory();
  LobbyCommand_GameServiceError_registerFactory();
  LobbyCommand_InfoEnumMessage_registerFactory();
  LobbyCommand_Join_registerFactory();
  LobbyCommand_JoinLeague_registerFactory();
  LobbyCommand_Leave_registerFactory();
  LobbyCommand_LeaveLeague_registerFactory();
  LobbyCommand_NotifyOfBuddy_registerFactory();
  LobbyCommand_NotifyOfIgnore_registerFactory();
  LobbyCommand_OfferAdjournedGame_registerFactory();
  LobbyCommand_RemoveAdjournedGame_registerFactory();
  LobbyCommand_RemoveBuddies_registerFactory();
  LobbyCommand_RemoveGroups_registerFactory();
  LobbyCommand_RemoveIgnore_registerFactory();
  LobbyCommand_RequestAddBuddy_registerFactory();
  LobbyCommand_RespondAddBuddy_registerFactory();
  LobbyCommand_SelectCard_registerFactory();
  LobbyCommand_SelectTournamentDeck_registerFactory();
  LobbyCommand_SendPing_registerFactory();
  LobbyCommand_SendText_registerFactory();
  LobbyCommand_SendUChatError_registerFactory();
  LobbyCommand_SendUChatText_registerFactory();
  LobbyCommand_SetDraft_registerFactory();
  LobbyCommand_SetDraftedCards_registerFactory();
  LobbyCommand_SetDraftReady_registerFactory();
  LobbyCommand_SetFlag_registerFactory();
  LobbyCommand_SetLeagueCards_registerFactory();
  LobbyCommand_SetLeagueCollection_registerFactory();
  LobbyCommand_SetLeagueInfo_registerFactory();
  LobbyCommand_SetTournament_registerFactory();
  LobbyCommand_SetupDraft_registerFactory();
  LobbyCommand_StartTournamentRound_registerFactory();
  LobbyCommand_StartTournamentMsg_registerFactory();
  LobbyCommand_UpdateTournament_registerFactory();
  LobbyCommand_UpdateLobbyStats_registerFactory();
  return;
}

