// addr: 0x013eda50
// name: LoginCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void LoginCommand_registerFactories(void) */

void LoginCommand_registerFactories(void)

{
                    /* Registers the LoginCommand base and all login command derived factories. */
  LoginCommand_registerFactory();
  LoginCommand_DisplayMOTD_registerFactory();
  LoginCommand_ForgotPassword_registerFactory();
  LoginCommand_ForgotPasswordResults_registerFactory();
  LoginCommand_GetChallenge_registerFactory();
  LoginCommand_GuestLogin_registerFactory();
  LoginCommand_RegisterUsername_registerFactory();
  LoginCommand_RegisterUsernameResults_registerFactory();
  LoginCommand_RespondToChallenge_registerFactory();
  LoginCommand_Results_registerFactory();
  LoginCommand_SendChallenge_registerFactory();
  LoginCommand_SendPassword_registerFactory();
  LoginCommand_SendSessionID_registerFactory();
  return;
}

