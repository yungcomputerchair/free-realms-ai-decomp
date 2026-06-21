// addr: 0x013edd70
// name: AccountCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void AccountCommand_registerFactories(void) */

void AccountCommand_registerFactories(void)

{
                    /* Registers the AccountCommand factory family. It invokes
                       AccountCommand_registerFactory followed by concrete account command factories
                       for account info, preferences, achievements, stadium data, avatar images,
                       restrictions, and campaign/challenge status. */
  AccountCommand_registerFactory();
  AccountCommand_AddAchievement_registerFactory();
  AccountCommand_BulkBriefIntroduceAccount_registerFactory();
  AccountCommand_BulkIntroduceAccount_registerFactory();
  AccountCommand_ChangePassword_registerFactory();
  AccountCommand_GetAccountInfo_registerFactory();
  AccountCommand_GetAccountsByPartialName_registerFactory();
  AccountCommand_IntroduceAccount_registerFactory();
  AccountCommand_ModifyRestrictions_registerFactory();
  AccountCommand_RecordSinglePlayerGame_registerFactory();
  AccountCommand_RedeemCode_registerFactory();
  AccountCommand_RequestAvatarImages_registerFactory();
  AccountCommand_SendAvatarImage_registerFactory();
  AccountCommand_SetAchievementList_registerFactory();
  AccountCommand_SetCampaignStatus_registerFactory();
  AccountCommand_SetChallengeStatus_registerFactory();
  AccountCommand_SetOptIn_registerFactory();
  AccountCommand_SetPreferences_registerFactory();
  AccountCommand_UploadAvatarImage_registerFactory();
  AccountCommand_ValidateUsername_registerFactory();
  AccountCommand_RequestActivateStadiumPiece_registerFactory();
  AccountCommand_RequestStadiumInfo_registerFactory();
  AccountCommand_RequestUpdateStadium_registerFactory();
  AccountCommand_RespondActivateStadiumPiece_registerFactory();
  AccountCommand_RespondStadiumInfo_registerFactory();
  AccountCommand_RespondUpdateStadium_registerFactory();
  return;
}

