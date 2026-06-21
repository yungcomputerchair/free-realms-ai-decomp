// addr: 0x014efb70
// name: UserDataCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UserDataCommand_registerFactories(void) */

void UserDataCommand_registerFactories(void)

{
                    /* Registers the UserDataCommand factory family by calling a sequence of
                       component factory registration helpers. Evidence from callee constructors
                       shows the base vtable UserDataCommand and derived vtables such as
                       UserDataCommand_Subscribe and UserDataCommand_RequestPlayerMatches. */
  UserDataCommand_registerFactory();
  UserDataCommand_Subscribe_registerFactory();
  UserDataCommand_Unsubscribe_registerFactory();
  UserDataCommand_DataUpdated_registerFactory();
  UserDataCommand_RequestAdvertisement_registerFactory();
  UserDataCommand_RespondAdvertisement_registerFactory();
  UserDataCommand_RequestFeatureRotator_registerFactory();
  UserDataCommand_RespondFeatureRotator_registerFactory();
  UserDataCommand_RequestNewsMessage_registerFactory();
  UserDataCommand_RespondNewsMessage_registerFactory();
  UserDataCommand_RespondDBAvatars_registerFactory();
  UserDataCommand_RespondDBAwards_registerFactory();
  UserDataCommand_RespondDBHonors_registerFactory();
  UserDataCommand_RespondPlayerAvatars_registerFactory();
  UserDataCommand_RespondPlayerAwards_registerFactory();
  UserDataCommand_RespondPlayerHonors_registerFactory();
  UserDataCommand_RespondPlayerInfo_registerFactory();
  UserDataCommand_RespondPlayerMatches_registerFactory();
  UserDataCommand_RequestDBAvatars_registerFactory();
  UserDataCommand_RequestDBAwards_registerFactory();
  UserDataCommand_RequestDBHonors_registerFactory();
  UserDataCommand_RequestPlayerAvatars_registerFactory();
  UserDataCommand_RequestPlayerAwards_registerFactory();
  UserDataCommand_RequestPlayerHonors_registerFactory();
  UserDataCommand_RequestPlayerInfo_registerFactory();
  UserDataCommand_RequestPlayerMatches_registerFactory();
  return;
}

