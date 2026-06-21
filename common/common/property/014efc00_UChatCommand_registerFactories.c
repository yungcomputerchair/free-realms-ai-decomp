// addr: 0x014efc00
// name: UChatCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void UChatCommand_registerFactories(void) */

void UChatCommand_registerFactories(void)

{
                    /* Registers UChatCommand, friend/ignore status, and related friend/ignore
                       request factories. */
  FriendStatus_registerFactory();
  IgnoreStatus_registerFactory();
  UChatCommand_registerFactory();
  UChatCommand_RequestAddFriend_registerFactory();
  UChatCommand_RequestAddFriendReciprocate_registerFactory();
  UChatCommand_RequestSetFriendComment_registerFactory();
  UChatCommand_RequestRemoveFriend_registerFactory();
  UChatCommand_RequestRemoveFriendReciprocate_registerFactory();
  UChatCommand_RequestFriendStatus_registerFactory();
  UChatCommand_RequestFriendConfirm_registerFactory();
  UChatCommand_RequestFriendConfirmReciprocate_registerFactory();
  UChatCommand_RequestAddIgnore_registerFactory();
  UChatCommand_RequestRemoveIgnore_registerFactory();
  UChatCommand_RequestIgnoreStatus_registerFactory();
  UChatCommand_OnReceiveFriendLogin_registerFactory();
  UChatCommand_OnReceiveFriendLogout_registerFactory();
  UChatCommand_OnReceiveFriendConfirmRequest_registerFactory();
  UChatCommand_OnReceiveFriendConfirmReciprocateRequest_registerFactory();
  UChatCommand_OnReceiveFriendConfirmResponse_registerFactory();
  UChatCommand_OnReceiveFriendConfirmReciprocateResponse_registerFactory();
  return;
}

