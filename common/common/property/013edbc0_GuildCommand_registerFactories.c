// addr: 0x013edbc0
// name: GuildCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void GuildCommand_registerFactories(void) */

void GuildCommand_registerFactories(void)

{
                    /* Registers all GuildCommand factory classes. */
  GuildCommand_registerFactory();
  GuildCommand_AskToJoinGuild_registerFactory();
  GuildCommand_AskToJoinGuildResponse_registerFactory();
  GuildCommand_Chat_registerFactory();
  GuildCommand_CreateGuild_registerFactory();
  GuildCommand_EndGuilds_registerFactory();
  GuildCommand_GetGuildsByPartialName_registerFactory();
  GuildCommand_Kick_registerFactory();
  GuildCommand_LeaveGuild_registerFactory();
  GuildCommand_ModifyGuildStatus_registerFactory();
  GuildCommand_Notify_registerFactory();
  GuildCommand_Remove_registerFactory();
  GuildCommand_RequestGuilds_registerFactory();
  GuildCommand_SetListenStatus_registerFactory();
  GuildCommand_SetMOTD_registerFactory();
  GuildCommand_SetMOTDResponse_registerFactory();
  GuildCommand_ShowMOTD_registerFactory();
  GuildCommand_StartGuilds_registerFactory();
  GuildCommand_TransferGuild_registerFactory();
  return;
}

