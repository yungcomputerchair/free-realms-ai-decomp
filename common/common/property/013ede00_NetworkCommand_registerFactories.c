// addr: 0x013ede00
// name: NetworkCommand_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void NetworkCommand_registerFactories(void) */

void NetworkCommand_registerFactories(void)

{
                    /* Registers NetworkCommand base and related network command factories,
                       including request/update data, ping, time, system messages, disconnects,
                       EULA, gift, news, and chat registration. */
  NetworkCommand_registerFactory();
  NetworkCommand_ConnectionTimedout_registerFactory();
  NetworkCommand_Disconnect_registerFactory();
  NetworkCommand_ErrorMsg_registerFactory();
  NetworkCommand_EULA_registerFactory();
  NetworkCommand_LeaderBoardData_registerFactory();
  NetworkCommand_Gift_registerFactory();
  NetworkCommand_News_registerFactory();
  NetworkCommand_Ping_registerFactory();
  NetworkCommand_PendingSessionKick_registerFactory();
  NetworkCommand_QueryDisconnect_registerFactory();
  NetworkCommand_RequestData_registerFactory();
  NetworkCommand_SessionKick_registerFactory();
  NetworkCommand_SystemMessage_registerFactory();
  NetworkCommand_Time_registerFactory();
  NetworkCommand_UpdateDataVersion_registerFactory();
  NetworkCommand_UpdateLag_registerFactory();
  EventCommand_registerFactories();
  UChatCommand_registerFactories();
  UserDataCommand_registerFactories();
  return;
}

